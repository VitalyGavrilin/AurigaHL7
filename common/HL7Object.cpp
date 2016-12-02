/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#include "Util.h"
#include "ObjToPipe.h"
#include "HL7Object.h"

using namespace std;
////////////////////////////////////////////////////////////////////////////////
namespace HL7 {

/******************************************************************************
 * Storage constructor
 *****************************************************************************/
HL7Object::Storage::Storage(HL7Object * parent) {
	if (!parent->isDataElement()) {
		// Create list of empty objects
		this->initWithDefaultValues(parent->m_infoList.size());
	}
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object * HL7Object::ObjectInfo::createObject(HL7Object::Storage * parent) {
	HL7Object * p_obj = m_factory();
	p_obj->initFromDescription(*this, parent);
	return p_obj;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::ObjectInfo& HL7Object::ObjectInfo::operator=(
		const ObjectInfo& info) {
	this->m_index = info.m_index;
	this->m_name = info.m_name;
	this->m_alloc_type = info.m_alloc_type;
	this->m_alloc_type = info.m_alloc_type;
	this->m_rep = info.m_rep;
	this->m_factory = info.m_factory;
	return *this;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::HL7Object(hl7_struct_type type, Storage * parent) :
		m_struct_type(type), m_ownerStorage(parent), m_linked_object(nullptr) {
	m_info.m_rep = repetition_off;
	if (type == hl7_dataelement) {
		m_storage.push_back(new Storage(this));
	}
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::HL7Object(const ObjectInfo& info, Storage * parent) :
		m_struct_type(hl7_object), m_ownerStorage(parent), m_linked_object(
				nullptr) {
	m_info = info;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::~HL7Object() {
	for (size_t i = 0; i < m_storage.size(); ++i) {
		delete m_storage[i];
	}
	m_storage.clear();
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::Storage * HL7Object::initByDefault() {

	if (this->isDataElement()) {
		this->setData(std::string());
		return nullptr;
	}

	if (!this->isEmpty()) {
		throw HL7Exception(
				"HL7Object::initByDefault: the object is initialized.");
	}

	// Create empty storage
	Storage * ptr = this->addNewStorage();
	if (ptr == nullptr) {
		throw HL7Exception(
				"HL7Object::initByDefault: the object can't be initialized.");
	}

	/* Create and initialize objects in the Storage container */
	for (auto d : m_infoList) {
		ptr->at(d.m_index) = nullptr; // set default value
		if (d.m_alloc_type == initialized) { // Object should be initialized
			HL7Object * obj = d.createObject(ptr);
			ptr->at(d.m_index) = obj;
			obj->initByDefault();
		}
	}
	return ptr;
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::initAllObject() {

	// Ignore HL7DataElement;
	if (this->isDataElement()) {
		return;
	}

	// It can't be initialized twice
	if (!this->isEmpty()) {
		throw HL7Exception(
				"HL7Object::initByDefault: the object is initialized.");
	}

	Storage* ptr = this->addNewStorage();
	if (ptr == nullptr) {
		throw HL7Exception("HL7Object::initAllObject: can't create storage.");
	}
	for (auto d : m_infoList) {
		ptr->at(d.m_index) = d.createObject(ptr);
	}
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::initFromDescription(const ObjectInfo& desc, Storage * parent) {
	this->m_info = desc;
	this->m_linked_object = nullptr;
	this->m_ownerStorage = parent;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object::Storage* HL7Object::addNewStorage() {
	// Dataelement structure does not contain any object list only data. This
	// request is ignored for data element.
	// The object list is initialized from the m_infoList structure; for empty
	// structure it can't be done.
	if (m_infoList.empty() && !this->isDataElement()) {
		// The factory is empty; the Object can't have sub-objects.
		throw HL7Exception(
				"HL7Object::addNewStorage(): the object can't have sub-objects.");
	}
	// A non-repetition object may have only one object list. It should be empty to
	// succeed this call.
	if (!m_storage.empty() && !this->isRepetition()) {
		throw HL7Exception(
				"HL7Object::addNewStorage(): the object is not a repetition object.");
	}
	Storage * ptr = new Storage(this);
	m_storage.push_back(ptr);
	return ptr;
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::getData(std::string& data) {
	// The buffer has to be empty
	data.clear();

	// Non dataelement object can't store data
	if (!this->isDataElement())
		throw HL7Exception("HL7Object::getData: Invalid object type.");

	if (this->isEmpty())
		throw HL7Exception("getData is forbidden for empty objects.");

	m_storage.back()->getData(data);
}

/******************************************************************************
 *
 *****************************************************************************/
const char *HL7Object::getData() {
	// Non dataelement object can't store data
	if (!this->isDataElement())
		throw HL7Exception("HL7Object::getData: Invalid object type.");

	if (this->isEmpty()) {
		throw HL7Exception("getData is forbidden for empty objects.");
	}
	return m_storage.back()->getData();
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::setData(const std::string& data) {

	// Non dataelement object can't store data
	if (!this->isDataElement())
		throw HL7Exception("HL7Object::setData: Invalid object type.");

	if (!this->isDataElement()){
		throw HL7Exception("HL7Object::setData: non dataelement object.");
	}
	if (this->isEmpty()) {
		throw HL7Exception("HL7Object::setData: dataelement can't be empty.");
	}

	m_storage[0]->setData(data);
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object* HL7Object::getObject(size_t rep_index, size_t obj_index) {
	return this->at(rep_index)->at(obj_index).ptr();
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object* HL7Object::getObjectSafe(size_t rep_index, size_t obj_index) {

	if (this->isDataElement())
		throw HL7Exception("HL7Object::getObjectSafe: DataElement can't have sub-object.");

	Storage * p_stor = this->at_safe(rep_index);

	if (p_stor->at(obj_index) == nullptr) {
		// Create object
		p_stor->at(obj_index) = m_infoList[obj_index].createObject(p_stor);
	}
	return p_stor->at(obj_index).ptr();
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::clear() {
	for (auto s : m_storage) {
		delete s;
	}
	m_storage.clear();
}

/**************************************************************************
 **************************************************************************/
size_t HL7Object::size() const {
	return m_storage.size();
}

bool HL7Object::isEmpty() const {
	return m_storage.empty();
}

HL7Storage *& HL7Object::at(size_t index) {
	return m_storage.at(index);
}

/**************************************************************************
 * This method returns pointer to specified HL7ObjectListT object.
 **************************************************************************/
HL7Storage * HL7Object::at_safe(size_t index) {

	if (index == this->size()) {
		// Special case: try to add new storage
		this->addNewStorage();
	}
	// Can't create new storage or the index is invalid
	if (index >= this->size()) {
		throw HL7Exception("HL7Object::at_safe() index out of range");
	}
	return m_storage[index];
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::addParams(size_t index, const std::string& param) {
	// TODO
}

/******************************************************************************
 *
 *****************************************************************************/
void HL7Object::linkObjects(size_t source, size_t dest) {
	HL7Object * p_souce = this->getObjectSafe(0, source);
	HL7Object * p_dest = this->getObjectSafe(0, dest);
	/* Link dataelements */
	if (p_souce->m_struct_type != hl7_dataelement) {
		throw HL7Exception(
				"HL7Object::linkObjects() invalid source object type.");
	}
	if (p_dest->m_struct_type != hl7_dataelement) {
		throw HL7Exception(
				"HL7Object::linkObjects() invalid destination object type.");
	}
	p_souce->m_linked_object = p_dest;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object& HL7Object::operator=(HL7Object& obj) {
	this->clear();
	this->m_info = obj.m_info;
	m_struct_type = obj.m_struct_type;
	this->setName(obj.getName());
	this->m_ownerStorage = obj.m_ownerStorage;
	m_linked_object = obj.m_linked_object;

	for (size_t i = 0; i < obj.m_storage.size(); ++i) {
		Storage * p_stor = new Storage(this);
		m_storage.push_back(p_stor);
		*p_stor = *obj.m_storage[i];
	}
	return *this;
}

/******************************************************************************
 *
 *****************************************************************************/
HL7Object * HL7Object::findObjectByClassName(const std::string& className) {

	bool is_storage_empty = this->m_storage.empty();

	if (this->isDataElement()) { // Do nothing
		// Check class name
		return nullptr;
	}

	if (is_storage_empty) {
		this->addNewStorage(); // Try to add storage;
	}

	HL7Storage * _stor = m_storage.at(0);
	for (size_t i = 0; i < _stor->size(); ++i) {
		bool is_nullptr_object = false;
		HL7Object * _ptr = this->getObject(0, i);

		if (_ptr == nullptr) {
			// Create and check object
			_ptr = this->getObjectSafe(0, i);
			is_nullptr_object = true;
		}

		if (className.compare(_ptr->className()) == 0) {
			return _ptr;
		}

		HL7Object * child = _ptr->findObjectByClassName(className);
		if (child != nullptr) {
			return child;
		}

		if (is_nullptr_object) {
			_stor->at(i) = nullptr;
		}
	}

	if ( is_storage_empty) {
		this->clear(); // remove storage
	}
	return nullptr;
}


} /* namespace HL7 */
////////////////////////////////////////////////////////////////////////////////
