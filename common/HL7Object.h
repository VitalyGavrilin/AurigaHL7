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


#ifndef HL7OBJECT_H_
#define HL7OBJECT_H_

#include "HL7Exception.h"
#include <memory>
#include "Util.h"

namespace HL7 {

/**************************************************************
 * HL7Object may have only the following types
 **************************************************************/
enum hl7_struct_type {
	hl7_object = -1,
	hl7_dataelement = 0,
	hl7_data,
	hl7_segment,
	hl7_group,
	hl7_message
};

/**************************************************************
 * HL7Object allocators
 **************************************************************/
enum allocator_type {
	initialized, optional, conditional
};

/**************************************************************
 *
 **************************************************************/
typedef bool repetition_type;
const bool repetition_off = false;
const bool repetition_on = true;

/**************************************************************
 * Storage for DataElement
 **************************************************************/
struct HL7StorageData {
	virtual ~HL7StorageData() { }
	void setData(const std::string& data) { m_dataValue = data; }
	void getData(std::string& data) { data = m_dataValue; }
	const char* getData() const { return m_dataValue.c_str(); }

	HL7StorageData& operator=(const HL7StorageData& data) {
		m_dataValue = data.m_dataValue;
		return *this;
	}
private:
	std::string m_dataValue; /* Data type */
};
/* class HL7StorageData */

/**************************************************************
 * Safe storage for objects
 **************************************************************/
template<class T>
struct ObjectListT {

	/***************************************************************************
	 * A storage for a single pointer; The class aim is to provide access
	 * to stored information.
	 **************************************************************************/
	/***********************
	 * Inner object
	 ***********************/
	template<class O>
	struct storage {

		storage() : _ptr(nullptr) { }
		~storage() { if (_ptr) delete _ptr; }

		storage<O>& operator=(O* p) {
			if (_ptr) delete _ptr;
			_ptr = p;
			return *this;
		}

		O* ptr() { return _ptr; }

		bool operator==(const O * p) const { return p == _ptr; }

		O* _ptr;
	} /* struct storage */;

	/* Initialize object list */
	void initWithDefaultValues(size_t size) {
		_vec.clear(); // Remove all elements from the vector storage
		_vec.reserve(size); // Set vector size
		// Fill the vector with default values with nullptr pointers
		while (size--) _vec.push_back(storage<T>());
	}

	// Common access methods
	storage<T>& operator[](size_t index) { return _vec[index]; }
	storage<T>& at(size_t index) { return _vec.at(index); }

	size_t size() const { return _vec.size(); }

	/* Fill elements with nullptr */
	void clearFrom(size_t index) {
		while (index < _vec.size()) _vec[index] = nullptr;
	}

	ObjectListT& operator=(ObjectListT& object_list) {
		//TODO: Object list size must be the same
		for (size_t i = 0; i < object_list.size(); ++i) {
			T * src = object_list.at(i).ptr();
			if (src == nullptr) {
				_vec[i] = nullptr;
			} else {
				T * dst = src->create();
				*dst = *src;
				_vec[i] = dst;
			}
		}
		return *this;
	}
private:
	std::vector<storage<T>> _vec;
};
/* ObjectListT */

class HL7Object;

/**************************************************************
 * Create an HL7Object of specified type.
 **************************************************************/
template<typename T> HL7Object *allocHL7Object() { return new T(); }

typedef ObjectListT<HL7Object> HL7ObjectList;

/**************************************************************
 * HL7Object class
 **************************************************************/
struct HL7Object {

	/*************************************************************************
	 * Storage for data string and new objects
	 ************************************************************************/
	struct Storage: public HL7StorageData, public HL7ObjectList {
		Storage(HL7Object*);
		virtual ~Storage() { }
	}; /* End of the Storage structure */

	/*************************************************************************
	 * It collects information about HL7Object
	 ************************************************************************/
	struct ObjectInfo {
		/* Create and initialize new HL7Object using stored data */
		HL7Object * createObject(HL7Object::Storage * );
		ObjectInfo& operator=(const ObjectInfo& );

		size_t m_index;              // Position in object list
		std::string m_name;          // Instance name
		allocator_type m_alloc_type; // Allocator type
		repetition_type m_rep;       // Repetition
		HL7Object * (*m_factory)();  // Create HL7Object using structure information
	}; /* End of the ObjectInfo structure */

	// Create an object of specified type
	HL7Object(hl7_struct_type type, Storage * parent = nullptr);

	// Create and initialize object
	HL7Object(const ObjectInfo& info, Storage * parent = nullptr);

	virtual ~HL7Object();

	// Initialize HL7Object using ObjectInfo information
	void initFromDescription(const ObjectInfo& , Storage * );

	// Each type has it's own name
	virtual const char * className() const = 0; /* return string with class name */

	// Create an object with type of the original object.
	virtual HL7Object * create() const = 0;

	// Activate link; for special types
	virtual void linkUp(HL7Object*) {}

	/* Getter and setter for hl7_dataelement. The method generates an exception
	 * if the ObjectListT class is in the object mode. */
	void getData(std::string&);
	const char* getData();
	void setData(const std::string&);

	size_t size() const;
	bool isEmpty() const;

	Storage *& at(size_t);
	Storage * at_safe(size_t); // initialize object before return

	HL7Object* getObject(size_t, size_t); // throw exception
	HL7Object* getObjectSafe(size_t, size_t); // initialize object before return

	void clear(); // makes it empty

	/**************************************************************************
	 * The method creates and adds new HL7Object into the Storage array which have
	 * the initialized status. The sub-object runs the same procedure to create the
	 * initialized object.
	 ***************************************************************************/
	Storage * initByDefault();

	/**************************************************************************
	 * The method creates and adds all the objects. The status is ignored.
	 **************************************************************************/
	void initAllObject();

	/**************************************************************************
	 * Instance name getter/setter
	 **************************************************************************/
	const std::string& getName() const {
		return m_info.m_name;
	}

	void setName(const std::string& name) {
		m_info.m_name = name;
	}

	/**************************************************************************
	 * Type identifiers
	 **************************************************************************/
	bool isMessage() const {
		return m_struct_type == hl7_message;
	}
	bool isGroup() const {
		return m_struct_type == hl7_group;
	}
	bool isSegment() const {
		return m_struct_type == hl7_segment;
	}
	bool isData() const {
		return m_struct_type == hl7_data;
	}
	bool isDataElement() const {
		return m_struct_type == hl7_dataelement;
	}

	/**************************************************************************
	 * Repetition identifier
	 **************************************************************************/
	bool isRepetition() const {
		return m_info.m_rep;
	}

	/**************************************************************************
	 * obj.addObject(MSH_1, "MSH.1", initialized, repetition_off);
	 * obj.addObject(MSH_2, "MSH.2", optional, repetition_on);
	 **************************************************************************/
	template<typename T>
	void addObject(size_t index, const std::string& name,
			allocator_type alloc_type, repetition_type rep) {
		if (index != m_infoList.size()) {
			throw HL7Exception("HL7Object::addObject - invalid object index.");
		}
		ObjectInfo objInfo;
		objInfo.m_index = index;
		objInfo.m_name = name;
		objInfo.m_alloc_type = alloc_type;
		objInfo.m_rep = rep;
		objInfo.m_factory = allocHL7Object<T>;

		m_infoList.push_back(objInfo);
	} /* addObject */

	void addParams(size_t index, const std::string& param);
	void linkObjects(size_t source, size_t dest);
	Storage* addNewStorage();
	HL7Object& operator=(HL7Object& obj);

	/**************************************************************************
	 * The method iterates over the sub-object and searches object with
	 * specified name.
	 * *************************************************************************/
	HL7Object * findObjectByClassName(const std::string&);

protected:
	ObjectInfo m_info;                  // Information about current object
	std::vector<Storage*> m_storage;    // repeated objects
	hl7_struct_type m_struct_type;      // message, segment, data, ...
	Storage * m_ownerStorage;           // access to parent storage
	HL7Object * m_linked_object;        //
	std::vector<ObjectInfo> m_infoList; // provide instance description for sub-objects
private:
	HL7Object();
	HL7Object(const HL7Object&);
};

typedef HL7Object::Storage HL7Storage;

} /* namespace HL7 */

////////////////////////////////////////////////////////////////////////////////
struct HL7DataElement: public HL7::HL7Object {
	HL7DataElement() :
			HL7Object(HL7::hl7_dataelement) {
	}
};

struct HL7Data: public HL7::HL7Object {
	HL7Data() :
			HL7Object(HL7::hl7_data) {
	}
};

struct HL7Segment: public HL7::HL7Object {
	HL7Segment() :
			HL7Object(HL7::hl7_segment) {
	}
};

struct HL7Group: public HL7::HL7Object {
	HL7Group() :
			HL7Object(HL7::hl7_group) {
	}
};

struct HL7Message: public HL7::HL7Object {
	HL7Message() :
			HL7Object(HL7::hl7_message) {
	}
};

size_t split_to_vector(const std::string& str, std::vector<std::string>& vec,
		char delim);

template<typename Message>
const char * getMsgVersion(Message& m) {
	return m.getMSH_1()->getVersionID()->getVersionID()->getData();
}

#endif /* HL7OBJECT_H_ */
