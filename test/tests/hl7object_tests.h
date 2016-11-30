/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef TEST_HL7OBJECT_TESTS_H_
#define TEST_HL7OBJECT_TESTS_H_
#include <string>
#include <string.h>
#include <stdexcept>
#include <memory>
#include "../common/DBGTest.h"
#include "../common/HL7Object.h"
#include <assert.h>

const char * sz_dbgdataelemet = "DBGDataElement";
const char * sz_dbgdata = "DBGData";
const char * sz_dbgsegment = "DBGSegment";
const char * sz_dbggroup = "DBGGroup";
const char * sz_dbgmessage = "DBGMessage";

const char * sz_hl7message = "HL7Message";
const char * sz_hl7group = "HL7Goup";
const char * sz_hl7segment = "HL7Segment";
const char * sz_hl7data = "HL7Data";
const char * sz_hl7dataelement = "HL7DataElement";

const char * const sz_object_de_1 = "DE1";
const char * sz_object_de_2 = "DE2";
const char * sz_object_data_1 = "DATA1";
const char * sz_object_data_2 = "DATA2";
const char * sz_object_segment_1 = "SEG1";
const char * sz_object_segment_2 = "SEG2";
const char * sz_object_group_1 = "GROUP1";
const char * sz_object_group_2 = "GROUP2";
const char * sz_object_message = "MESSAGE";

/********************************************************************
 *
 */
struct MemoryCounter {

	static size_t alloc_couner;

	MemoryCounter() {
		alloc_couner++;
	}

	virtual ~MemoryCounter() {
		alloc_couner--;
	}

	size_t getCounter() const {
		return alloc_couner;
	}
};

size_t MemoryCounter::alloc_couner = 0;

/********************************************************************
 * Designer tests for HL7Object
 */
class DBGDataElement: public HL7DataElement {
public:
	void init() {
	}
	const char * className() const {
		return sz_dbgdataelemet;
	}
	DBGDataElement * create() const {
		return new DBGDataElement();
	}
};

class DBGData: public HL7Data {
public:
	void init() {
	}
	const char * className() const {
		return sz_dbgdata;
	}
	DBGData * create() const {
		return new DBGData();
	}
};

class DBGSegment: public HL7Segment {
public:
	void init() {
	}
	const char * className() const {
		return sz_dbgsegment;
	}
	DBGSegment * create() const {
		return new DBGSegment();
	}
};

class DBGGroup: public HL7Group {
public:
	void init() {
	}
	const char * className() const {
		return sz_dbggroup;
	}
	DBGGroup * create() const {
		return new DBGGroup();
	}
};

class DBGMessage: public HL7Message {
public:
	void init() {
	}
	const char * className() const {
		return sz_dbgmessage;
	}
	DBGMessage * create() const {
		return new DBGMessage();
	}
};

void hl7_object_test() {

	DBGTest dbg;
	std::cout << "--- HL7Object test begin---\n";

	DBGMessage * p_message = new DBGMessage();
	DBGGroup * p_group = new DBGGroup();
	DBGSegment * p_segment = new DBGSegment();
	DBGData * p_data = new DBGData();
	DBGDataElement * p_dataelement = new DBGDataElement();

	/*
	 *
	 */
	dbg.description = "Create empty object structures";

	dbg.tested_func = "DBGMessage";
	dbg.run_test(p_message > 0);

	dbg.tested_func = "DBGGroup";
	dbg.run_test(p_group > 0);

	dbg.tested_func = "DBGSegment";
	dbg.run_test(p_segment > 0);

	dbg.tested_func = "DBGData";
	dbg.run_test("Create DBGData", p_data > 0);

	dbg.tested_func = "DBGDataElement";
	dbg.run_test("Create DBGDataElement", p_dataelement > 0);

	/*
	 * Check class name
	 */
	dbg.description = "Test class name";

	dbg.tested_func = "DBGMessage::className";
	dbg.run_test(
			strncmp(sz_dbgmessage, p_message->className(),
					strlen(sz_dbgmessage)) == 0);

	dbg.tested_func = "DBGGroup::className";
	dbg.run_test(
			strncmp(sz_dbggroup, p_group->className(), strlen(sz_dbggroup))
					== 0);

	dbg.tested_func = "DBGSegment::className";
	dbg.run_test(
			strncmp(sz_dbgsegment, p_segment->className(),
					strlen(sz_dbgsegment)) == 0);

	dbg.tested_func = "DBGData::className";
	dbg.run_test(
			strncmp(sz_dbgdata, p_data->className(), strlen(sz_dbgdata)) == 0);

	dbg.tested_func = "DBGDataElement::className";
	dbg.run_test(
			strncmp(sz_dbgdataelemet, p_dataelement->className(),
					strlen(sz_dbgdataelemet)) == 0);

	/*
	 * Test create method
	 */
	dbg.description = "Test creat method for objects";
	HL7Object * p_obj = nullptr;

	dbg.tested_func = "DBGMessage::create";
	p_obj = p_message->create();
	dbg.run_test(
			strncmp(sz_dbgmessage, p_obj->className(), strlen(sz_dbgmessage))
					== 0);
	delete p_obj;

	dbg.tested_func = "DBGGroup::create";
	p_obj = p_group->create();
	dbg.run_test(
			strncmp(sz_dbggroup, p_obj->className(), strlen(sz_dbggroup)) == 0);
	delete p_obj;

	dbg.tested_func = "DBGSegment::create";
	p_obj = p_segment->create();
	dbg.run_test(
			strncmp(sz_dbgsegment, p_obj->className(), strlen(sz_dbgsegment))
					== 0);
	delete p_obj;

	dbg.tested_func = "DBGData::create";
	p_obj = p_data->create();
	dbg.run_test(
			strncmp(sz_dbgdata, p_obj->className(), strlen(sz_dbgdata)) == 0);
	delete p_obj;

	dbg.tested_func = "DBGData::create";
	p_obj = p_dataelement->create();
	dbg.run_test(
			strncmp(sz_dbgdataelemet, p_obj->className(),
					strlen(sz_dbgdataelemet)) == 0);
	delete p_obj;

	dbg.description = "Test init function";

	dbg.tested_func = "DBGMessage::init";
	p_message->init();
	dbg.run_test(p_message->isEmpty());

	dbg.tested_func = "DBGGroup::init";
	p_group->init();
	dbg.run_test(p_group->isEmpty());

	dbg.tested_func = "DBGSegment::init";
	p_segment->init();
	dbg.run_test(p_segment->isEmpty());

	dbg.tested_func = "DBGData::init";
	p_data->init();
	dbg.run_test(p_data->isEmpty());

	dbg.tested_func = "DBGDataElement::init";
	p_dataelement->init();
	dbg.run_test(!p_dataelement->isEmpty());

	dbg.run_test("HL7Object::linkUp", false, true);

	dbg.description = "Change name of the object class";

	dbg.tested_func = "HL7Message::setName";
	p_message->setName(sz_hl7message);
	dbg.run_test(
			strncmp(sz_hl7message, p_message->getName().c_str(),
					strlen(sz_hl7message)) == 0);

	dbg.tested_func = "HL7Group::setName";
	p_group->setName(sz_hl7group);
	dbg.run_test(
			strncmp(sz_hl7group, p_group->getName().c_str(),
					strlen(sz_hl7group)) == 0);

	dbg.tested_func = "HL7Segment::setName";
	p_segment->setName(sz_hl7segment);
	dbg.run_test(
			strncmp(sz_hl7segment, p_segment->getName().c_str(),
					strlen(sz_hl7segment)) == 0);

	dbg.tested_func = "HL7Data::setName";
	p_data->setName(sz_hl7data);
	dbg.run_test(
			strncmp(sz_hl7data, p_data->getName().c_str(), strlen(sz_hl7data))
					== 0);

	dbg.tested_func = "HL7DataElement::setName";
	p_dataelement->setName(sz_hl7dataelement);
	dbg.run_test(
			strncmp(sz_hl7dataelement, p_dataelement->getName().c_str(),
					strlen(sz_hl7dataelement)) == 0);

	/*
	 * HL7Object::HL7ObjectType()
	 */
	{
		///////////////////////////////////////////////
		DBGMessage msg;

		dbg.description = "Check object type";

		dbg.tested_func = "HL7Message::isMessage";
		dbg.run_test(msg.isMessage());

		dbg.tested_func = "HL7Message::isGroup";
		dbg.run_test(!msg.isGroup());

		dbg.tested_func = "HL7Message::isSegment";
		dbg.run_test(!msg.isSegment());

		dbg.tested_func = "HL7Message::isData";
		dbg.run_test(!msg.isData());

		dbg.tested_func = "HL7Message::isDataElement";
		dbg.run_test(!msg.isDataElement());

		///////////////////////////////////////////////
		DBGGroup grp;

		dbg.tested_func = "HL7Group::isMessage";
		dbg.run_test(!grp.isMessage());

		dbg.tested_func = "HL7Group::isGroup";
		dbg.run_test(grp.isGroup());

		dbg.tested_func = "HL7Group::isSegment";
		dbg.run_test(!grp.isSegment());

		dbg.tested_func = "HL7Group::isData";
		dbg.run_test(!grp.isData());

		dbg.tested_func = "HL7Group::isDataElement";
		dbg.run_test(!grp.isDataElement());

		///////////////////////////////////////////////
		DBGSegment seg;

		dbg.tested_func = "HL7Segment::isMessage";
		dbg.run_test(!seg.isMessage());

		dbg.tested_func = "HL7Segment::isGroup";
		dbg.run_test(!seg.isGroup());

		dbg.tested_func = "HL7Segment::isSegment";
		dbg.run_test(seg.isSegment());

		dbg.tested_func = "HL7Segment::isData";
		dbg.run_test(!seg.isData());

		dbg.tested_func = "HL7Segment::isDataElement";
		dbg.run_test(!seg.isDataElement());

		///////////////////////////////////////////////
		DBGData data;

		dbg.tested_func = "DBGData::isMessage";
		dbg.run_test(!data.isMessage());

		dbg.tested_func = "DBGData::isGroup";
		dbg.run_test(!data.isGroup());

		dbg.tested_func = "DBGData::isSegment";
		dbg.run_test(!data.isSegment());

		dbg.tested_func = "DBGData::isData";
		dbg.run_test(data.isData());

		dbg.tested_func = "DBGData::isDataElement";
		dbg.run_test(!data.isDataElement());

		///////////////////////////////////////////////
		DBGDataElement de;

		dbg.tested_func = "DBGDataElement::isMessage";
		dbg.run_test(!de.isMessage());

		dbg.tested_func = "DBGDataElement::isGroup";
		dbg.run_test(!de.isGroup());

		dbg.tested_func = "DBGDataElement::isSegment";
		dbg.run_test(!de.isSegment());

		dbg.tested_func = "DBGDataElement::isData";
		dbg.run_test(!de.isData());

		dbg.tested_func = "DBGDataElement::isDataElement";
		dbg.run_test(de.isDataElement());

		dbg.tested_func = "";
		dbg.description = "";
	}
	{
		/*
		 * Test get/set instance name
		 */
		class _Data: public HL7Data {
		public:
			void init() {
			}
			const char * className() const {
				return sz_dbgdata;
			}
			_Data * create() const {
				return new _Data();
			}
		};

		_Data data;

		dbg.description = "get/set instalce name";
		dbg.tested_func = "setName/getName";
		std::string test_str = "string_test";
		data.setName(test_str);
		dbg.run_test(data.getName().compare(test_str) == 0);

		dbg.description.clear();
		dbg.tested_func.clear();
	}

	std::string data = "test_string";
	{
		/*
		 * void setData(const std::string&);
		 */
		dbg.description = "Test setData function";
		dbg.tested_func = "HL7Message::setData";
		try {
			p_message->setData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Group::setData";
		try {
			p_group->setData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Segment::setData";
		try {
			p_segment->setData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::setData";
		try {
			p_data->setData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7DataElement::setData";
		try {
			p_dataelement->setData(data);
			dbg.run_test(true);
		} catch (HL7Exception& e) {
			dbg.run_test(false);
		}
	}

	/*
	 * void getData(std::string&);
	 */
	{
		data = "";
		dbg.description = "Test getData function";
		dbg.tested_func = "HL7Message::getData";
		try {
			p_message->getData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Group::getData";
		try {
			p_group->getData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Segment::getData";
		try {
			p_segment->getData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::getData";
		try {
			p_data->getData(data);
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7DataElement::getData";
		try {
			p_dataelement->getData(data);
			dbg.run_test(data.compare("test_string") == 0);
		} catch (HL7Exception& e) {
			dbg.run_test(false);
		}
	}
	/*
	 * const char* getData();
	 */
	{
		dbg.description = "Test getData function II";
		dbg.tested_func = "HL7Message::getData";
		data = "test_string";
		const char * p_str = NULL;
		try {
			p_str = p_message->getData();
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Group::getData";
		try {
			p_str = p_group->getData();
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Segment::getData";
		try {
			p_str = p_segment->getData();
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::getData";
		try {
			p_str = p_data->getData();
			dbg.run_test(false);
		} catch (HL7Exception& e) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7DataElement::getData";
		try {
			p_str = p_dataelement->getData();
			dbg.run_test(data.compare(p_str) == 0);
		} catch (HL7Exception& e) {
			dbg.run_test(false);
		}
	}

	{
		/*
		 * bool isRepetition() const;
		 */
		dbg.description = "Non repetition object.";

		dbg.tested_func = "HL7Message::isRepetition";
		dbg.run_test(!p_message->isRepetition());

		dbg.tested_func = "HL7Group::isRepetition";
		dbg.run_test(!p_group->isRepetition());

		dbg.tested_func = "HL7Segment::isRepetition";
		dbg.run_test(!p_segment->isRepetition());

		dbg.tested_func = "HL7Data::isRepetition";
		dbg.run_test(!p_data->isRepetition());

		dbg.tested_func = "HL7DataElement::isRepetition";
		dbg.run_test(!p_dataelement->isRepetition());
	}

	{
		class REPMessage: public HL7Message {
		public:
			REPMessage() {
				this->init();
			}

			void init() {
				addObject<DBGGroup>(0, "REP_1", HL7::initialized,
						HL7::repetition_on);
				addObject<DBGSegment>(1, "REP_2", HL7::initialized,
						HL7::repetition_on);
				addObject<DBGData>(2, "REP_3", HL7::initialized,
						HL7::repetition_on);
				addObject<DBGDataElement>(3, "REP_3", HL7::initialized,
						HL7::repetition_on);
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			DBGMessage * create() const {
				return new DBGMessage();
			}
		};
		REPMessage repmsg;
		HL7Object* p_group_rep_object = repmsg.getObjectSafe(0, 0);
		HL7Object* p_segment_rep_object = repmsg.getObjectSafe(0, 1);
		HL7Object* p_data_rep_object = repmsg.getObjectSafe(0, 2);
		HL7Object* p_dataelement_rep_object = repmsg.getObjectSafe(0, 3);

		dbg.description = "Repetition object.";

		dbg.tested_func = "DBGMessage::isRepetition";
		dbg.run_test(!repmsg.isRepetition()); // Message can't be repetition object.

		dbg.tested_func = "DBGGroup::isRepetition";
		dbg.run_test(p_group_rep_object->isRepetition());

		dbg.tested_func = "DBGSegment::isRepetition";
		dbg.run_test(p_segment_rep_object->isRepetition());

		dbg.tested_func = "DBGData::isRepetition";
		dbg.run_test(p_data_rep_object->isRepetition());

		dbg.tested_func = "DBGDataElement::isRepetition";
		dbg.run_test(p_dataelement_rep_object->isRepetition());
	}

	/*
	 * size_t size() const;
	 */
	{
		DBGMessage _msg;
		DBGGroup _grp;
		DBGSegment _seg;
		DBGData _data;
		DBGDataElement _dataelement;

		dbg.description = "Object without sub-objects";

		dbg.tested_func = "HL7Message::size";
		dbg.run_test(_msg.size() == 0);

		dbg.tested_func = "HL7Group::size";
		dbg.run_test(_grp.size() == 0);

		dbg.tested_func = "HL7Segment::size";
		dbg.run_test(_seg.size() == 0);

		dbg.tested_func = "HL7Data::size";
		dbg.run_test(_data.size() == 0);

		dbg.tested_func = "HL7DataElement::size"; // TODO: DataElement is initialized by default.
		dbg.run_test(_dataelement.size() == 1);
	}

	{
		class _Data: public HL7Data {
		public:
			void init() {
				addObject<DBGDataElement>(0, "DATA_1", initialized, false);
			}
			const char * className() const {
				return sz_dbgdata;
			}
			_Data * create() const {
				return new _Data();
			}
		};

		_Data data;
		data.init();
		data.initByDefault();

		class _Segment: public HL7Segment {
		public:
			void init() {
				addObject<DBGDataElement>(0, "DATA_1", initialized, false);
			}
			const char * className() const {
				return sz_dbgsegment;
			}
			_Segment * create() const {
				return new _Segment();
			}
		};

		_Segment seg;
		seg.init();
		seg.initByDefault();

		class _Group: public HL7Group {
		public:
			void init() {
				addObject<DBGDataElement>(0, "DATA_1", initialized, false);
			}
			const char * className() const {
				return sz_dbggroup;
			}
			_Group * create() const {
				return new _Group();
			}
		};

		_Group group;
		group.init();
		group.initByDefault();

		class _Message: public HL7Message {
		public:
			void init() {
				addObject<DBGDataElement>(0, "DATA_1", initialized, false);
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		_Message msg;
		msg.init();
		msg.initByDefault();

		dbg.description = "Check size non-empty class.";

		dbg.tested_func = "Message::size";
		dbg.run_test(msg.size());

		dbg.tested_func = "Group::size";
		dbg.run_test(group.size());

		dbg.tested_func = "Segment::size";
		dbg.run_test(seg.size());

		dbg.tested_func = "Data::size";
		dbg.run_test(data.size());

		dbg.tested_func = "DataElement::size";
		dbg.run_test(p_dataelement->size()); // TODO: DataElement - can't be empty.

		dbg.description = "Check class emptyness for non-empty function.";
		dbg.tested_func = "Message::isEmpty";
		dbg.run_test(!msg.isEmpty());

		dbg.tested_func = "Group::isEmpty";
		dbg.run_test(!group.isEmpty());

		dbg.tested_func = "Segment::isEmpty";
		dbg.run_test(!seg.isEmpty());

		dbg.tested_func = "Data::isEmpty";
		dbg.run_test(!data.isEmpty());

		dbg.tested_func = "DataElement::isEmpty";
		dbg.run_test(!p_dataelement->isEmpty());

	}

	{
		/*
		 * bool isEmpty() const;
		 */
		dbg.description = "Check class emptyness for empty function.";
		dbg.tested_func = "Message::isEmpty";
		dbg.run_test(p_message->isEmpty());

		dbg.tested_func = "Group::isEmpty";
		dbg.run_test(p_group->isEmpty());

		dbg.tested_func = "Segment::isEmpty";
		dbg.run_test(p_segment->isEmpty());

		dbg.tested_func = "Data::isEmpty";
		dbg.run_test(p_data->isEmpty());

		dbg.tested_func = "DataElement::isEmpty";
		dbg.run_test(!p_dataelement->isEmpty()); // TODO: DataElement can't be empty
	}

	/*
	 * 	Storage *& at(size_t);
	 */
	{
		class _Message: public HL7Message {
		public:
			void init() { /* Empty class */
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		dbg.description = "Check access to an element of empty message";
		_Message msg;
		// TODO: It generates HL7Exception but should out_of_range
		dbg.tested_func = "HL7Message::at(0)";
		try {
			msg.at(0);
			dbg.run_test(false);
		} catch (const std::out_of_range& e) {
			dbg.run_test(true);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.description = "Check access to an valid element of message";
		msg.addObject<DBGDataElement>(0, "DE_1", initialized, false);
		msg.initByDefault();

		dbg.tested_func = "HL7Message::at(0)";
		try {
			msg.at(0);
			dbg.run_test(true);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.description = "Check access to an invalid element of message";
		dbg.tested_func = "HL7Message::at(1)";
		try {
			msg.at(1);
			dbg.run_test(false);
		} catch (const std::out_of_range& e) {
			dbg.run_test(true);
		} catch (...) {
			dbg.run_test(false);
		}
	}
	/*
	 * Empty storage
	 *  Storage * at_safe(size_t);
	 */
	{
		class _Message: public HL7Message {
		public:
			void init() { /* Empty class */
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		class _DataElement: public HL7DataElement {
		public:
			void init() { /* Empty class */
			}
			const char * className() const {
				return sz_dbgdataelemet;
			}
			_DataElement * create() const {
				return new _DataElement();
			}

		};

		dbg.description = "Check access to an element of empty message";
		_Message msg;

		dbg.tested_func = "Message::at_safe(0)";
		try {
			msg.at_safe(0);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}

		_DataElement de;
		dbg.tested_func = "DataElement::at_safe(0)";
		try {
			de.at_safe(0);
			dbg.run_test(true);
		} catch (...) {
			dbg.run_test(false);
		}
	}
	/*
	 * Non-empty storage
	 *  Storage * at_safe(size_t);
	 */
	{
		class _Message: public HL7Message {
		public:
			void init() { /* Empty class */
				this->addObject<DBGDataElement>(0, "Element", initialized,
						repetition_off);
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		dbg.description = "Check access to an element of non-empty message";
		_Message msg;
		msg.init();

		dbg.tested_func = "Message::at_safe(0)";
		try {
			msg.at_safe(0);
			dbg.run_test(true);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "Message::at_safe(1)";
		try {
			msg.at_safe(1);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}
	}

	/*
	 *  void clear();
	 */
	{
		class _DataElement: public HL7DataElement {
		public:
			void init() { /* Empty class */
			}
			const char * className() const {
				return sz_dbgdataelemet;
			}
			_DataElement * create() const {
				return new _DataElement();
			}
		};

		class _Segment: public HL7Segment {
		public:
			_Segment() {
				this->init();
			}
			void init() { /* Empty class */
				this->addObject<DBGDataElement>(0, "DataElement", initialized,
						repetition_on);
			}
			const char * className() const {
				return sz_dbgsegment;
			}
			_Segment * create() const {
				return new _Segment();
			}
		};

		class _Message: public HL7Message {
		public:
			_Message() {
				this->init();
			}
			void init() { /* Empty class */
				this->addObject<_Segment>(0, "Segment", initialized,
						repetition_on);
			}
			const char * className() const {
				return sz_dbgmessage;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		dbg.description = "Clear non-empty message";
		_Message msg;

		msg.initAllObject();
		dbg.tested_func = "Message::clear()";

		assert(msg.size() > 0);
		try {
			msg.clear();
			dbg.run_test(msg.size() == 0);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.description = "Clear empty object";
		dbg.tested_func = "Message::clear()";
		assert(msg.size() == 0);
		try {
			msg.clear();
			dbg.run_test(msg.size() == 0);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.description = "Clear non-empty object";
		dbg.tested_func = "DataElement::clear()";
		_DataElement de;
		de.setData("TEST_STRING");
		assert(de.size() == 1);
		try {
			de.clear();
			dbg.run_test(de.size() == 0);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.description = "Clean empty object";
		dbg.tested_func = "DataElement::clear()";
		assert(de.size() == 0);
		try {
			de.clear();
			dbg.run_test(de.size() == 0);
		} catch (...) {
			dbg.run_test(false);
		}

	}

	{

		class _DataElement: public HL7DataElement, public MemoryCounter {
		public:
			_DataElement() {
			}
			virtual ~_DataElement() {
			}
			void init() {
			}
			const char * className() const {
				return sz_dbgdataelemet;
			}
			_DataElement * create() const {
				return new _DataElement();
			}
		};

		dbg.description = "Create and remove object";
		dbg.tested_func = "HL7DataElement::HL7DataElement";
		_DataElement * _p_de = new _DataElement();
		dbg.run_test(MemoryCounter::alloc_couner == 1);
		delete _p_de;
		dbg.tested_func = "HL7DataElement::~HL7DataElement";
		dbg.run_test(MemoryCounter::alloc_couner == 0);

		class _Data: public HL7Data, public MemoryCounter {
		public:
			_Data() {
				this->init();
			}
			virtual ~_Data() {
			}
			void init() {
				this->addObject<_DataElement>(0, "DE_1", initialized,
						repetition_off);
				this->addObject<_DataElement>(1, "DE_1", optional,
						repetition_off);
				this->addObject<_DataElement>(2, "DE_2", initialized,
						repetition_off);

			}
			const char * className() const {
				return sz_dbgdata;
			}
			_Data* create() const {
				return new _Data();
			}
		};

		dbg.tested_func = "HL7Data::HL7Data";
		_Data * _p_data = new _Data();
		_p_data->initByDefault();
		dbg.run_test(MemoryCounter::alloc_couner == 3);
		delete _p_data;
		dbg.tested_func = "HL7Data::~HL7Data";
		dbg.run_test(MemoryCounter::alloc_couner == 0);

		class _Segment: public HL7Segment, public MemoryCounter {
		public:
			_Segment() {
				this->init();
			}
			virtual ~_Segment() {
			}
			void init() {
				this->addObject<_Data>(0, "D_1", initialized, repetition_off);
				this->addObject<_Data>(1, "D_2", optional, repetition_off);
				this->addObject<_Data>(2, "D_3", initialized, repetition_off);

			}
			const char * className() const {
				return sz_dbgsegment;
			}
			_Segment* create() const {
				return new _Segment();
			}
		};

		dbg.tested_func = "HL7Segment::HL7Segment";
		_Segment * _p_seg = new _Segment();
		_p_seg->initByDefault();
		dbg.run_test(MemoryCounter::alloc_couner == 7);

		dbg.tested_func = "HL7Segment::~HL7Segment";
		delete _p_seg;
		dbg.run_test(MemoryCounter::alloc_couner == 0);

		class _Group: public HL7Group, public MemoryCounter {
		public:
			_Group() {
				this->init();
			}
			virtual ~_Group() {
			}
			void init() {
				this->addObject<_Segment>(0, "S_1", initialized,
						repetition_off);
				this->addObject<_Segment>(1, "S_2", optional, repetition_off);
				this->addObject<_Segment>(2, "S_3", initialized,
						repetition_off);
			}
			const char * className() const {
				return sz_dbgsegment;
			}
			_Group* create() const {
				return new _Group();
			}
		};
		dbg.tested_func = "HL7Group::HL7Group";
		_Group * _p_grp = new _Group();
		_p_grp->initByDefault();
		dbg.run_test(MemoryCounter::alloc_couner == 15);

		dbg.tested_func = "HL7Group::~HL7Group";
		delete _p_grp;
		dbg.run_test(MemoryCounter::alloc_couner == 0);

		class _Message: public HL7Message, public MemoryCounter {
		public:
			_Message() {
				this->init();
			}
			virtual ~_Message() {
			}
			void init() {
				this->addObject<_Group>(0, "G_1", initialized, repetition_off);
				this->addObject<_Group>(1, "G_2", initialized, repetition_off);
				this->addObject<_Group>(2, "G_3", optional, repetition_off);
				this->addObject<_Segment>(3, "S_4", initialized,
						repetition_off);
				this->addObject<_Segment>(4, "S_5", optional, repetition_off);
				this->addObject<_Data>(5, "D_6", initialized, repetition_off);
				this->addObject<_Data>(6, "D_7", optional, repetition_off);
			}
			const char * className() const {
				return sz_dbgsegment;
			}
			_Message* create() const {
				return new _Message();
			}
		};
		dbg.tested_func = "HL7Message::HL7Message";
		_Message * _p_msg = new _Message();
		_p_msg->initByDefault();
		dbg.run_test(MemoryCounter::alloc_couner == 41);

		dbg.tested_func = "HL7Message::~HL7Message";
		delete _p_msg;
		dbg.run_test(MemoryCounter::alloc_couner == 0);

		/////////////////////////////////////////////////////////////////

		dbg.description = "Test access to the elements of message.";
		dbg.tested_func = "HL7DataElement::getObject";

		_p_de = new _DataElement();
		_p_de->initByDefault();
		try {
			_p_de->getObject(0, 0);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}
		delete _p_de;

		dbg.tested_func = "HL7Data::getObject(0, 0)";
		_p_data = new _Data();
		_p_data->initByDefault();
		try {
			HL7Object * obj = _p_data->getObject(0, 0);
			dbg.run_test(obj != nullptr);
		} catch (...) {
			dbg.run_test(false);
		}
		dbg.tested_func = "HL7Data::getObject(0, 1)";
		try {
			HL7Object * obj = _p_data->getObject(0, 1);
			dbg.run_test(obj == nullptr);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "HL7Data::getObject(0, 2)";
		try {
			HL7Object * obj = _p_data->getObject(0, 2);
			dbg.run_test(obj != nullptr);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "HL7Data::getObject(0, 3)";
		try {
			_p_data->getObject(0, 3);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::getObject(1, 0)";
		try {
			_p_data->getObject(1, 0);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::getObjectSafe(0, 0)";
		try {
			HL7Object * obj = _p_data->getObjectSafe(0, 0);
			dbg.run_test(obj != nullptr);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "HL7Data::getObjectSafe(0, 1)";
		try {
			HL7Object * obj = _p_data->getObjectSafe(0, 1);
			dbg.run_test(obj != nullptr);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "HL7Data::getObjectSafe(0, 2)";
		try {
			HL7Object * obj = _p_data->getObjectSafe(0, 2);
			dbg.run_test(obj != nullptr);
		} catch (...) {
			dbg.run_test(false);
		}

		dbg.tested_func = "HL7Data::getObjectSafe(0, 3)";
		try {
			_p_data->getObjectSafe(0, 3);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}

		dbg.tested_func = "HL7Data::getObjectSafe(1, 0)";
		try {
			_p_data->getObjectSafe(1, 0);
			dbg.run_test(false);
		} catch (...) {
			dbg.run_test(true);
		}
		delete _p_data;
	}

	{
		class _DataElement1: public HL7DataElement, public MemoryCounter {
		public:
			_DataElement1() { this->init(); }
			void init() {
			}
			const char * className() const {
				return sz_object_de_1;
			}
			_DataElement1 * create() const {
				return new _DataElement1();
			}
		};

		class _DataElement2: public HL7DataElement, public MemoryCounter {
		public:
			_DataElement2() { this->init(); }
			void init() {
			}
			const char * className() const {
				return sz_object_de_2;
			}
			_DataElement2 * create() const {
				return new _DataElement2();
			}
		};

		class _Data1: public HL7Data, public MemoryCounter {
		public:
			_Data1() { this->init(); }
			void init() {
				this->addObject<_DataElement1>(0, "DE_1", initialized,
						repetition_off);
			}
			const char * className() const {
				return sz_object_data_1;
			}
			_Data1 * create() const {
				return new _Data1();
			}
		};

		class _Data2: public HL7Data, public MemoryCounter  {
		public:
			_Data2() { this->init(); }
			void init() {
				this->addObject<_DataElement2>(0, "DE_2", optional,
						repetition_off);
			}
			const char * className() const {
				return sz_object_data_2;
			}
			_Data2 * create() const {
				return new _Data2();
			}
		};

		class _Segment1: public HL7Segment, public MemoryCounter  {
		public:
			_Segment1() { this->init(); }
			void init() {
				this->addObject<_Data1>(0, "DATA_2", initialized,
						repetition_off);
			}
			const char * className() const {
				return sz_object_segment_1;
			}
			_Segment1 * create() const {
				return new _Segment1();
			}
		};

		class _Segment2: public HL7Segment, public MemoryCounter  {
		public:
			_Segment2() { this->init(); }
			void init() {
				this->addObject<_Data2>(0, "DATA_2", optional, repetition_off);
			}
			const char * className() const {
				return sz_object_segment_2;
			}
			_Segment2 * create() const {
				return new _Segment2();
			}
		};

		class _Group1: public HL7Group, public MemoryCounter  {
		public:
			_Group1() { this->init(); }
			void init() {
				this->addObject<_Segment1>(0, "SEGMENT_1", initialized,
						repetition_off);
			}
			const char * className() const {
				return sz_object_group_1;
			}
			_Group1 * create() const {
				return new _Group1();
			}
		};

		class _Group2: public HL7Group, public MemoryCounter {
		public:
			_Group2() { this->init(); }
			void init() {
				this->addObject<_Segment2>(0, "SEGMENT_2", optional,
						repetition_off);
			}
			const char * className() const {
				return sz_object_group_2;
			}
			_Group2 * create() const {
				return new _Group2();
			}
		};

		class _Message: public HL7Message, public MemoryCounter  {
		public:
			_Message() { this->init(); }
			void init() {
				this->addObject<_Group1>(0, "GROUP_1", initialized,
						repetition_off);
				this->addObject<_Group2>(1, "GROUP_2", optional,
						repetition_off);
			}
			const char * className() const {
				return sz_object_message;
			}
			_Message * create() const {
				return new _Message();
			}
		};

		dbg.description = "Find object using its class name";
		dbg.tested_func = "findObjectByClassName";
		_Message * _msg = new _Message();
		_msg->initByDefault();

		try {

			std::string className = sz_object_group_1;
			dbg.description = "Find " + className;
			HL7Object * obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("group_1 ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_group_2;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("group_2 ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_segment_1;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("segment_1_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_segment_2;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("segment_2_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_data_1;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("data_1_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_data_2;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("data_2_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_de_1;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("de_1_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

			className = sz_object_de_2;
			dbg.description = "Find " + className;
			obj = _msg->findObjectByClassName(className);
			if (obj == nullptr)
				dbg.fail("de_2_ptr == nullptr");
			else
				dbg.run_test(className.compare(obj->className()) == 0);

		} catch (HL7Exception& e) {
			dbg.fail(e.what());
		} catch (...) {
			dbg.fail("Exception");
		}

		delete _msg;
		dbg.description = "Check memory";
		dbg.tested_func = "MemoryCounter::alloc_couner";
		dbg.run_test(MemoryCounter::alloc_couner == 0);
	}
	{
		class _DataElement: public HL7DataElement {
		public:
			_DataElement() {
			}
			virtual ~_DataElement() {
			}
		private:
			void init() {
			}
		public:
			const char * className() const {
				return sz_dbgdataelemet;
			}
			_DataElement * create() const {
				return new _DataElement();
			}
		};

		dbg.description = "Class copy";
		dbg.tested_func = "DataElement::operator=";

		std::string _src = "TEST_STRING";
		std::string _dest;

		_DataElement _de_src;
		_DataElement _de_dest;

		_de_src.setData(_src);
		_de_dest = _de_src;
		_de_dest.getData(_dest);

		dbg.run_test(_src == _dest);

		class _Data: public HL7Data{
		public:
			_Data() {
				this->init();
			}
			virtual ~_Data() {
			}
		private:
			void init() {
				addObject<_DataElement>(0, "DATA_1", initialized, false);
				addObject<_DataElement>(1, "DATA_2", optional, false);
				addObject<_DataElement>(2, "DATA_3", initialized, false);
			}
		public:
			const char * className() const {
				return sz_dbgdata;
			}
			_Data* create() const {
				return new _Data();
			}
		};

		dbg.tested_func = "Data::operator=";

		_Data _data_src;
		_Data _data_dest;

		std::string _data_1 = "Data1";
		std::string _data_2 = "Data2";
		std::string _data_3 = "Data3";

		_data_src.getObjectSafe(0, 0)->setData(_data_1);
		_data_src.getObjectSafe(0, 1)->setData(_data_2);
		_data_src.getObjectSafe(0, 2)->setData(_data_3);

		_data_dest = _data_src;

		_data_dest.getObjectSafe(0, 0)->getData(_dest);
		dbg.run_test(_data_1 == _dest);
		_data_dest.getObjectSafe(0, 1)->getData(_dest);
		dbg.run_test(_data_2 == _dest);
		_data_dest.getObjectSafe(0, 2)->getData(_dest);
		dbg.run_test(_data_3 == _dest);

		class _Segment: public HL7Segment{
		public:
			_Segment() {
				this->init();
			}
			virtual ~_Segment() {
			}
		private:
			void init() {
				addObject<_Data>(0, "DT_1", initialized, false);
				addObject<_Data>(1, "DT_2", optional, false);
				addObject<_Data>(2, "DT_3", initialized, false);
				addObject<_DataElement>(3, "DT_4", initialized, false);
			}
		public:
			const char * className() const {
				return sz_dbgsegment;
			}
			_Segment* create() const {
				return new _Segment();
			}
		};

		dbg.tested_func = "Segment::operator=";
		_Segment _seg;

		std::string _src_0_0 = "SRC_0_0";
		std::string _src_0_1 = "SRC_0_1";
		std::string _src_0_2 = "SRC_0_2";

		std::string _src_1_0 = "SRC_1_0";
		std::string _src_1_1 = "SRC_1_1";
		std::string _src_1_2 = "SRC_1_2";

		std::string _src_2_0 = "SRC_2_0";
		std::string _src_2_1 = "SRC_2_1";
		std::string _src_2_2 = "SRC_2_2";

		std::string _src_3 = "SRC_3";

		_seg.getObjectSafe(0, 0)->getObjectSafe(0, 0)->setData(_src_0_0);
		_seg.getObjectSafe(0, 0)->getObjectSafe(0, 1)->setData(_src_0_1);
		_seg.getObjectSafe(0, 0)->getObjectSafe(0, 2)->setData(_src_0_2);

		_seg.getObjectSafe(0, 1)->getObjectSafe(0, 0)->setData(_src_1_0);
		_seg.getObjectSafe(0, 1)->getObjectSafe(0, 1)->setData(_src_1_1);
		_seg.getObjectSafe(0, 1)->getObjectSafe(0, 2)->setData(_src_1_2);

		_seg.getObjectSafe(0, 2)->getObjectSafe(0, 0)->setData(_src_2_0);
		_seg.getObjectSafe(0, 2)->getObjectSafe(0, 1)->setData(_src_2_1);
		_seg.getObjectSafe(0, 2)->getObjectSafe(0, 2)->setData(_src_2_2);

		_seg.getObjectSafe(0, 3)->setData(_src_3);

		_Segment _seg_dest;
		_seg_dest = _seg;

		_seg_dest.getObjectSafe(0, 0)->getObjectSafe(0, 0)->getData(_dest);
		dbg.run_test(_src_0_0 == _dest);

		_seg_dest.getObjectSafe(0, 0)->getObjectSafe(0, 1)->getData(_dest);
		dbg.run_test(_src_0_1 == _dest);

		_seg_dest.getObjectSafe(0, 0)->getObjectSafe(0, 2)->getData(_dest);
		dbg.run_test(_src_0_2 == _dest);

		_seg_dest.getObjectSafe(0, 1)->getObjectSafe(0, 0)->getData(_dest);
		dbg.run_test(_src_1_0 == _dest);

		_seg_dest.getObjectSafe(0, 1)->getObjectSafe(0, 1)->getData(_dest);
		dbg.run_test(_src_1_1 == _dest);

		_seg_dest.getObjectSafe(0, 1)->getObjectSafe(0, 2)->getData(_dest);
		dbg.run_test(_src_1_2 == _dest);

		_seg_dest.getObjectSafe(0, 2)->getObjectSafe(0, 0)->getData(_dest);
		dbg.run_test(_src_2_0 == _dest);

		_seg_dest.getObjectSafe(0, 2)->getObjectSafe(0, 1)->getData(_dest);
		dbg.run_test(_src_2_1 == _dest);

		_seg_dest.getObjectSafe(0, 2)->getObjectSafe(0, 2)->getData(_dest);
		dbg.run_test(_src_2_2 == _dest);

		_seg_dest.getObjectSafe(0, 3)->getData(_dest);
		dbg.run_test(_src_3 == _dest);

	}
	std::cout << "--------------------------------------------------------\n";

	/*
	 *  HL7Object* getObject(size_t, size_t);
	 *  HL7Object* getObjectSafe(size_t, size_t);
	 *  template<typename T> void addObject(size_t index, const std::string& name, allocator_type alloc_type, repetition_type rep)
	 * 	void addParams(size_t index, const std::string& param);
	 * 	void linkObjects(size_t source, size_t dest);
	 * 	void add_storage();
	 * 	HL7Object& operator=(HL7Object& obj);
	 */

	dbg.status();
}

#endif /* TEST_HL7OBJECT_TESTS_H_ */
