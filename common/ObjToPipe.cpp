/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "ObjToPipe.h"

#include <string>
#include <vector>
#include <sstream>

#include "Util.h"

//#define HL7PIPEDEBUG
#ifdef HL7PIPEDEBUG

void debug_object(HL7Object * obj) {
	if (obj) {
		std::cout << obj << ": name(\'" << obj->getName() << "\'); ";
		std::cout << "class(\'" << obj->className() << "\'); ";
		std::cout << "is_rep:" << obj->isRepetition() << "; ";
		std::cout << ": type(\'";
		switch (obj->getType()) {
			case hl7_dataelement:
			std::cout << "dataelement";
			break;
			case hl7_data:
			std::cout << "data";
			break;
			case hl7_segment:
			std::cout << "segment";
			break;
			case hl7_group:
			std::cout << "group";
			break;
			case hl7_message:
			std::cout << "message";
			break;
			default:
			std::cout << "unknown";
			break;
		}
		std::cout << "\'); ";
		std::cout << ": size(\'" << obj->size() << "\');";
		if (obj->size()) {
			for (size_t i = 0; i < obj->size(); ++i) {
				std::cout << "[" << i << ":" << obj->at(i)->size() << "] "
				<< obj->at(i) << " ";
			}
		}
	}
	std::cout << "\n";
}
#endif /* HL7PIPEDEBUG */

Delimiter::Delimiter(int index) :
		m_delim_index(index) {
	if (index < 0 || index > MAX_DELIM) {
		throw HL7Exception("Delimiter: invalid index.");
	}
	this->__init_delim();
}

Delimiter::Delimiter() :
		m_delim_index(0) {
	this->__init_delim();
}

bool Delimiter::config(HL7Object * obj) {
	if (obj == NULL) {
		throw HL7Exception("Delimiter::config() invalid parameter.");
	}

	//hl7_struct_type obj_type = obj->getType();

	if (obj->isMessage()) {
		m_delim_index = 0; // LINE_DELIM index
		return true;
	}

	if (obj->isSegment()) {
		m_delim_index = 1; // FIELD_DELIM index
		return true;
	}

	if (obj->isData()) {
		m_delim_index = 2; // COMP_DELIM index
		return true;
	}

	return false;
}

Delimiter Delimiter::next() {
	if (m_delim_index >= MAX_DELIM) {
		throw HL7Exception("Delimiter::next() invalid object structure.");
	}
	Delimiter delimiter(m_delim_index + 1);
	return delimiter;
}

Delimiter::operator char() {
	return m_delim[m_delim_index];
}

void Delimiter::__init_delim() {
	m_delim[0] = LINE_DELIM;
	m_delim[1] = FIELD_DELIM;
	m_delim[2] = COMP_DELIM;
	m_delim[3] = SUBCOMP_DELIM;
}

void objToPipe(HL7Object*, std::string&);
void msgToPipe(HL7Object*, std::string&);
void groupToPipe(HL7Object*, std::string&);
void segToPipe(HL7Object*, std::string&);
void dataToPipe(HL7Object*, std::string&, Delimiter);
void dataelementToPipe(HL7Object*, std::string&, Delimiter);

/***********************************************************************************
 *
 */
void objToPipe(HL7Object * ptr, std::string& pipe) {

	if (!ptr) {
		throw HL7Exception("objToPipe: invalid object parameter.");
	}

	//hl7_struct_type obj_type = ptr->getType();

	if (ptr->isMessage()) {
		msgToPipe(ptr, pipe);
	} else if (ptr->isGroup()) {
		groupToPipe(ptr, pipe);
	} else if (ptr->isSegment()) {
		segToPipe(ptr, pipe);
	} else {
		throw HL7Exception("objToPipe: can't detect delimiter.");
	}
}

/***********************************************************************************
 * Store message structure into a pipe string.
 */
void msgToPipe(HL7Object * ptr, std::string& pipe) {

	pipe.clear();

	if (ptr == NULL) {
		throw HL7Exception("msgToPipe: invalid pointer");
	}

	if (!ptr->isMessage()) {
		throw HL7Exception("msgToPipe: invalid type");
	}

	if (ptr->size() != 1) {
		throw HL7Exception("msgToPipe: invalid message.");
	}

	// Iterate over message elements.
	HL7Storage * stor = ptr->at_safe(0); // Get the first element;
	for (size_t i = 0; i < stor->size(); ++i) {
		HL7Object * obj = ptr->getObject(0, i);
		if (obj == nullptr)
			continue;

		if (obj->isGroup()) {
			groupToPipe(obj, pipe);
		} else if (obj->isSegment()) {
			if (!pipe.empty() && *pipe.rbegin() != LINE_DELIM) {
				pipe += LINE_DELIM;
			}
			segToPipe(obj, pipe);
		} else {
			throw HL7Exception("msgToPipe: invalid object type.");
		}
	}
}

/***********************************************************************************
 *
 */
void groupToPipe(HL7Object * ptr, std::string& pipe) {

	if (ptr == NULL) {
		throw HL7Exception("groupToPipe: invalid pointer");
	}

	if (!ptr->isGroup()) {
		throw HL7Exception("groupToPipe: invalid type");
	}

	for (size_t rep_index = 0; rep_index != ptr->size(); ++rep_index) {
		HL7Storage * p_stor = ptr->at(rep_index);
		for (size_t obj_index = 0; obj_index != p_stor->size(); ++obj_index) {
			HL7Object * obj = ptr->getObject(rep_index, obj_index);

			if (obj == nullptr)
				continue;

			if (obj->isGroup()) {
				groupToPipe(obj, pipe);
			} else if (obj->isSegment()) {
				segToPipe(obj, pipe);
			} else {
				throw HL7Exception("groupToPipe: invalid type in group.");
			}
		}
	}
}

/***********************************************************************************
 *
 */
void segToPipe(HL7Object * ptr, std::string& pipe) {

	if (ptr == NULL) {
		throw HL7Exception("segToPipe: invalid pointer");
	}

	if (!ptr->isSegment()) {
		throw HL7Exception("segToPipe: invalid type");
	}

	Delimiter delim;
	delim.config(ptr);

#ifdef HL7PIPEDEBUG
	std::cout << "segToPipe:" << ptr->className() << "; " << ptr->size() << "\n";
#endif /* HL7PIPEDEBUG */
	if (!pipe.empty() && ptr->size() && *pipe.rbegin() != LINE_DELIM) {
		pipe += LINE_DELIM;
	}

	/* Repetition */
	for (size_t rep_index = 0; rep_index < ptr->size(); ++rep_index) {

		if (rep_index && *pipe.rbegin() != LINE_DELIM) {
			pipe += LINE_DELIM;
		}
		// Put into pipe: SEG|
		pipe += ptr->className();
		pipe += delim;

		HL7Storage * p_stor = ptr->at(rep_index);
		size_t initial_index = 0;
		if (MSH.compare(ptr->className()) == 0) {
			// Ignore MSH.1
			initial_index = 1;
		}
		for (size_t obj_index = initial_index; obj_index < p_stor->size();
				++obj_index) {

			HL7Object * obj = ptr->getObject(rep_index, obj_index);

			// Ignore empty object
			if (obj == nullptr) {
				// Check the rest elements
				for (size_t index = obj_index; index < p_stor->size(); ++index)
					if (ptr->getObject(rep_index, index) != nullptr) {
						// non-empty element has been found
						pipe += delim; // add delimeter
						break; // and leave this circle
					}
				// the rest element are empty; leave the function
				return;
			}

			// Ignore segment delimiter
			if (obj_index != initial_index) {
				pipe += delim;
			}

			if (obj->isData()) {
				dataToPipe(obj, pipe, delim);
			} else if (obj->isDataElement()) {
				dataelementToPipe(obj, pipe, delim);
			} else {
				throw HL7Exception("segToPipe: invalid type in segment.");
			}
		}
	}
}

/***********************************************************************************
 *
 */
void dataToPipe(HL7Object * ptr, std::string& pipe, Delimiter delim) {

	if (ptr == NULL) {
		throw HL7Exception("dataToPipe: invalid pointer");
	}

	if (!ptr->isData()) {
		throw HL7Exception("dataToPipe: invalid type");
	}

	/* Repetition */
	for (size_t rep_index = 0; rep_index < ptr->size(); ++rep_index) {

		if (rep_index) {
			pipe += REP_DELIM;
		}

		HL7Storage * p_stor = ptr->at(rep_index);
		// Object list
		for (size_t obj_index = 0; obj_index < p_stor->size(); ++obj_index) {

			HL7Object * obj = ptr->getObject(rep_index, obj_index);
			if (obj_index && obj != nullptr)
				pipe += delim.next();
			// We found empty element in object list
			if (obj == nullptr) {
				// Check the rest elements
				for (size_t index = obj_index; index < p_stor->size(); ++index)
					if (ptr->getObject(rep_index, index) != nullptr) {
						pipe += delim.next();
						// the list has non-empty elements; leave this circle
						break;
					}
				return; // leave the function; the rest elements are empty
			}

			if (obj->isData()) {
				dataToPipe(obj, pipe, delim.next());
			} else if (obj->isDataElement()) {
				dataelementToPipe(obj, pipe, delim.next());
			} else {
				throw HL7Exception("segToPipe: invalid type in segment.");
			}
		}
	}
}

void dataelementToPipe(HL7Object * ptr, std::string& pipe, Delimiter delim) {

	if (ptr == NULL) {
		throw HL7Exception("dataelementToPipe: invalid pointer");
	}

	if (!ptr->isDataElement()) {
		throw HL7Exception("dataelementToPipe: invalid type");
	}

	for (size_t rep_index = 0; rep_index < ptr->size(); ++rep_index) {

		if (rep_index) {
			pipe += REP_DELIM;
		}
		pipe += ptr->at(rep_index)->getData();

		/*
		 std::string __data;
		 ptr->at(rep_index)->getData(__data);
		 pipe += __data;
		 */
	}
}

/***********************************************************************************
 * Find segment by name.
 */
HL7Object * findSegment(const std::string& name, HL7Object * obj) {
#ifdef HL7PIPEDEBUG
	std::cout << "findSegment(\'" << name << "\', " << obj << ") ";
#endif /* HL7PIPEDEBUG */

	if (obj == NULL) {
		throw HL7Exception("findSegment: passed parameter is NULL.");
	}

	if (!obj->isMessage() && !obj->isGroup()) {
		throw HL7Exception("findSegment: invalid parameter type.");
	}

	if (name.empty()) {
		throw HL7Exception("findSegment: empty name of segment parameter.");
	}

	if (obj->isEmpty()) {
		obj->initAllObject();
	}

	return obj->findObjectByClassName(name);

#ifdef HL7PIPEDEBUG
	std::cout << "return NULL\n";
#endif /* HL7PIPEDEBUG */
	return NULL;
}

/***********************************************************************************
 * The function initializes the data and dataelement structures.
 */
void pipeToData(HL7Object * obj, const std::string& pipe, Delimiter delim,
		bool ignore_rep) {

	if (obj == NULL) {
		throw HL7Exception("pipeToData: invalid pointer.");
	}
	obj->clear();
#ifdef HL7PIPEDEBUG
	std::cout << "------------------\n";
	std::cout << "+ pipeToData: object:";
	debug_object(obj);
	std::cout << "+ pipeToData: pipe = \'" << pipe << "\'\n";
	std::cout << "+ pipeToData: delim = \'" << delim << "\'\n";
	std::cout << "+ pipeToData: ignore_rep = \'" << ignore_rep << "\'\n";
	std::cout << "------------------\n";
#endif /* HL7PIPEDEBUG */

	if (obj->isRepetition() && !ignore_rep) {
		STRINGS rep_vec;
		if (split_to_vector(pipe, rep_vec, REP_DELIM)) {
			for (size_t i = 0; i < rep_vec.size(); ++i) {
				pipeToData(obj, rep_vec[i], delim, true);
			}
		}
	} else { // Non repetition object
		STRINGS data_vec;
		if (split_to_vector(pipe, data_vec, delim)) {
			HL7Storage * p_stor = obj->addNewStorage();

			size_t index = 0;
			while (index < p_stor->size() && index < data_vec.size()) {
				HL7Object * __obj = obj->getObjectSafe(0, index);
#ifdef HL7PIPEDEBUG
				std::cout << "pipeToData: objects";
				debug_object(__obj);
#endif /* HL7PIPEDEBUG */
				if (__obj->isDataElement()) {
					__obj->setData(data_vec[index]);
#ifdef HL7PIPEDEBUG
					std::cout << "pipeToData: setData(\'" << data << "\')\n";
#endif /* HL7PIPEDEBUG */
				} else if (__obj->isData()) {
					pipeToData(__obj, data_vec[index], delim.next());
				} else {
					throw HL7Exception("pipeToData: invalid object");
				}
				index++;
			}
			if (index < data_vec.size()) {
#ifdef HL7PIPEDEBUG
				debug_object(obj);
#endif /* HL7PIPEDEBUG */
				throw HL7Exception(
						"pipeToData: can't parse string, invalid object.");
			}
#ifdef HL7PIPEDEBUG
			std::cout << "* i = " << index " " << data_vec.size() << std::endl;
			std::cout << "* obj_index = " << obj_index << " " << p_stor->size()
			<< std::endl;
#endif /* HL7PIPEDEBUG */
		}
	}
#ifdef HL7PIPEDEBUG
	std::cout << "------------------\n";
	std::cout << "- pipeToData: object:";
	debug_object(obj);
	std::cout << "- pipeToData: pipe = \'" << pipe << "\'\n";
	std::cout << "- pipeToData: delim = \'" << delim << "\'\n";
	std::cout << "- pipeToData: ignore_rep = \'" << ignore_rep << "\'\n";
	std::cout << "------------------\n";
#endif /* HL7PIPEDEBUG */

}
/***********************************************************************************
 * The function initializes the segment structure.
 */
void pipeToSegment(HL7Object * obj, STRINGS& vec) {

#ifdef HL7PIPEDEBUG
	std::cout << "pipeToSegment: object: ";
	debug_object(obj);
	std::cout << "pipeToSegment: vector: ";
	for (size_t i = 0; i < vec.size(); ++i) {
		std::cout << "[" << i << "]:=\'" << vec[i] << "\'";
	}
	std::cout << "\n";
#endif /* HL7PIPEDEBUG */

	if (obj == NULL) {
		throw HL7Exception("pipeToSegment: invalid pointer.");
	}

	if (!obj->isSegment()) {
		throw HL7Exception("pipeToSegment: invalid parameter type.");
	}
	/* Object has to be empty */
	obj->clear();

	if (obj->addNewStorage() == nullptr) {
		throw HL7Exception("pipeToSegment: Can't add new fields.");
	}

	STR_CONST_IT it = vec.begin();

	if (obj->className() != (*it)) {
		throw HL7Exception("pipeToSegment: invalid name.");
	}

	//++it; // the first element is the segment name
	Delimiter delim;
	delim.config(obj); // Initializes delimiter with right value

	// MSH is a specail case
	size_t obj_index = 0;
	if (MSH.compare(obj->className()) == 0) {
		++obj_index;
		// Get the first element of MSH; it should be '|'
		obj->getObjectSafe(0, 0)->setData("|");
	}

	HL7Storage * p_stor = obj->at(0);
	++it; // The first one is a segment name; we have checked it; get the next element
	while (obj_index < p_stor->size() && it != vec.end()) {
		HL7Object * __obj = obj->getObjectSafe(0, obj_index);
		if (__obj->isDataElement()) {
#ifdef HL7PIPEDEBUG
			std::cout << "pipeToSegment: setData: \'" << *it << "\'\n";
#endif // HL7PIPEDEBUG
			__obj->setData(*it);
		} else {
			pipeToData(__obj, *it, delim.next());
		}
		++obj_index;
		++it;
	}
	if (it != vec.end()) {
		throw HL7Exception("pipeToSegment: invalid pipe or object.");
	}
}

/***********************************************************************************
 * Split passed pipe string into lines and pass lines to the pipeToSegment function.
 */
void pipeToMsg(HL7Object* obj, const std::string& pipe) {

#ifdef HL7PIPEDEBUG
	std::cout << "pipeToMsg: object: ";
	debug_object(obj);
	std::cout << "pipeToMsg: pipe:\n----start----\n" << pipe << ")\n";
	std::cout << "---- end ----\n";
#endif

	if (obj == NULL) {
		throw HL7Exception("pipeToMsg: invalid pointer.");
	}

	if (!obj->isMessage()) {
		throw HL7Exception("pipeToMsg: invalid parameter type.");
	}

	STRINGS __lines;

	if (!split_to_vector(pipe, __lines, LINE_DELIM)) {
		throw HL7Exception("pipeToMsg: invalid pipe value.");
	}

	/* Message has to be empty */
	obj->clear();

	/* Pass lines to segment function */
	for (STR_CONST_IT str_it = __lines.begin(); str_it != __lines.end();
			++str_it) {

		/* get segment name */
		STRINGS fields;
		if (split_to_vector(*str_it, fields, FIELD_DELIM)) {
			std::string& __seg_name = *fields.begin();
			if (__seg_name.empty()) {

#ifdef HL7PIPEDEBUG
				std::cout << "<" << *str_it << ">" << std::endl;
#endif /* HL7PIPEDEBUG */
				throw HL7Exception("pipeToMsg: can't find empty segment name.");
			}
			/* First element of the field line is segment name:
			 * SEG|ONE^TWO|TWO^ONE
			 * Find the object using its name: */
			HL7Object * seg_obj = findSegment(__seg_name, obj);
			if (seg_obj == NULL) {
				throw HL7Exception("pipeToMsg: can't find segment by name.");
			}
			pipeToSegment(seg_obj, fields);
		}
	}
}
