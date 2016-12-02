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

#ifndef TEST_PIPE_TEST_H_
#define TEST_PIPE_TEST_H_
#include "../common/HL7Object.h"
#include "../common/ObjToPipe.h"

namespace HL7PIPETEST {

const char * DE_CLS_NAME = "DATAELEMENT";
const char * DATA_CLS_NAME = "DATA";
const char * SEGMENT_CLS_NAME = "SEGMENT";
const char * GROUP_CLS_NAME = "GROUP";
const char * MESSAGE_CLS_NAME = "MESSAGE";
/*
 *
 */
class DBGDataElement: public HL7DataElement {
public:
	void init() {
	}
	const char * className() const {
		return DE_CLS_NAME;
	}
	DBGDataElement * create() const {
		return new DBGDataElement();
	}
};

/*
 *
 */
class DBGData: public HL7Data {
public:
	void init() {
	}
	const char * className() const {
		return DATA_CLS_NAME;
	}
	DBGData * create() const {
		return new DBGData();
	}
};

/*
 *
 */
class DBGSegment: public HL7Segment {
public:
	void init() {
	}
	const char * className() const {
		return SEGMENT_CLS_NAME;
	}
	DBGSegment * create() const {
		return new DBGSegment();
	}
};

/*
 *
 */
class DBGGroup: public HL7Group {
public:
	void init() {
	}
	const char * className() const {
		return GROUP_CLS_NAME;
	}
	DBGGroup * create() const {
		return new DBGGroup();
	}
};

/*
 *
 */
class DBGMessage: public HL7Message {
public:
	void init() {
	}
	const char * className() const {
		return MESSAGE_CLS_NAME;
	}
	DBGMessage * create() const {
		return new DBGMessage();
	}
};

/******************************************************************************
 * Test empty message class.
 * Empty class has to generate an exception.
 *****************************************************************************/
void test_01(DBGTest& dbg) {

	/**************************************************************************
	 * Empty message class
	 *************************************************************************/
	class _Message: public HL7Message {
	public:
		_Message() {
			this->init();
		}
		void init() {
		}
		const char * className() const {
			return MESSAGE_CLS_NAME;
		}
		_Message * create() const {
			return new _Message();
		}
	};

	std::string buf;
	_Message *msg = new _Message();

	/* passed string is empty*/
	dbg.description = "Empty message";
	dbg.tested_func = "msgToPipe";
	try {
		msgToPipe(msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(true);
	} catch (...) {
		dbg.fail("exception");
	}

	/* passed string is none-empty*/
	buf = "some string";
	try {
		msgToPipe(msg, buf);
		dbg.fail("(no exception)");
	} catch (HL7Exception& e) {
		dbg.run_test("Empty message", buf.empty());
	} catch (...) {
		dbg.fail("exception");
	}

	buf.clear();
	dbg.tested_func = "pipeToMsg";
	try {
		pipeToMsg(msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("exception");
	}

	buf = "some string";
	try {
		pipeToMsg(msg, buf);
		dbg.fail("passed string is not empty");
	} catch (HL7Exception& e) {
		dbg.run_test("the valid exception is raised", true);
	} catch (...) {
		dbg.fail("invalid exception");
	}
	delete msg;
} /* test_01 */

/* Test findSegment */
void test_02(DBGTest& dbg) {

	class _DataElement: public HL7DataElement {
	public:
		_DataElement() {
			this->init();
		}
		void init() {
		}
		const char * className() const {
			return DE_CLS_NAME;
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
		void init() {
			this->addObject<_DataElement>(0, "DE_1", initialized,
					repetition_off);
		}
		const char * className() const {
			return "SEG";
		}
		_Segment * create() const {
			return new _Segment();
		}
	};

	class _Segment1: public HL7Segment {
	public:
		_Segment1() {
			this->init();
		}
		void init() {
			this->addObject<_DataElement>(0, "DE_1", initialized,
					repetition_off);
		}
		const char * className() const {
			return "SEG1";
		}
		_Segment1 * create() const {
			return new _Segment1();
		}
	};

	class _Message: public HL7Message {
	public:
		_Message() {
			this->init();
		}
		void init() {
			this->addObject<_Segment>(0, "SEG_1", initialized, repetition_off);
			this->addObject<_Segment1>(1, "SEG_2", optional, repetition_off);
		}
		const char * className() const {
			return "MSG";
		}
		_Message * create() const {
			return new _Message();
		}
	};

	_Message * msg = new _Message();
	msg->initByDefault();

	dbg.description = "Find initialized segment in message";
	dbg.tested_func = "findSegment";
	std::string seg_name = "SEG";
	try {
		HL7Object * seg_obj = findSegment(seg_name, msg);
		if (seg_obj == nullptr) {
			dbg.fail("invalid pointer");
		} else if (seg_name.compare(seg_obj->className()) != 0) {
			dbg.fail("invalid segment");
		} else {
			dbg.run_test(true);
		}
	} catch (HL7Exception& e) {
		dbg.fail(e.what());
	} catch (...) {
		dbg.fail("exception");
	}

	dbg.description = "Find optional segment in message";
	seg_name = "SEG1";
	try {
		HL7Object * seg_obj = findSegment(seg_name, msg);
		if (seg_obj == nullptr) {
			dbg.fail("invalid pointer");
		} else if (seg_name.compare(seg_obj->className()) != 0) {
			dbg.fail("invalid segment");
		} else {
			dbg.run_test(true);
		}
	} catch (HL7Exception& e) {
		dbg.fail(e.what());
	} catch (...) {
		dbg.fail("exception");
	}

	delete msg;

}

/*
 * Test message class with empty segment.
 * msgToPipe();
 * pipeToMsg();
 */
void test_03(DBGTest& dbg) {

	class _DataElement: public HL7DataElement {
	public:
		_DataElement() {
			this->init();
		}
		void init() {
		}
		const char * className() const {
			return "DE";
		}
		_DataElement * create() const {
			return new _DataElement();
		}
	};

	class _Data: public HL7Data {
	public:
		_Data() {
			this->init();
		}
		void init() {
			this->addObject<_DataElement>(0, "DE_1", initialized,
					repetition_off);
			this->addObject<_DataElement>(1, "DE_2", initialized,
					repetition_off);
		}
		const char * className() const {
			return "DATA";
		}
		_Data* create() const {
			return new _Data();
		}
	};

	class _Segment: public HL7Segment {
	public:
		_Segment() {
			this->init();
		}
		void init() {
			this->addObject<_DataElement>(0, "DE_1", initialized,
					repetition_off);
		}
		const char * className() const {
			return "SEG";
		}
		_Segment * create() const {
			return new _Segment();
		}
	};

	class _Segment1: public HL7Segment {
	public:
		_Segment1() {
			this->init();
		}
		void init() {
			this->addObject<_DataElement>(0, "DE_1", initialized,
					repetition_off);
		}
		const char * className() const {
			return "SEG1";
		}
		_Segment1 * create() const {
			return new _Segment1();
		}
	};

	class _Segment2: public HL7Segment {
	public:
		_Segment2() {
			this->init();
		}
		void init() {
			this->addObject<_Data>(0, "DATA_1", initialized, repetition_off);
			this->addObject<_Data>(1, "DATA_2", optional, repetition_off);
			this->addObject<_Data>(2, "DATA_3", initialized, repetition_off);
		}
		const char * className() const {
			return "SEG2";
		}
		_Segment2 * create() const {
			return new _Segment2();
		}
	};

	class _Segment3: public HL7Segment {
	public:
		_Segment3() {
			this->init();
		}
		void init() {
			this->addObject<_Data>(0, "DATA_1", initialized, repetition_off);
			this->addObject<_Data>(1, "DATA_2", optional, repetition_off);
			this->addObject<_Data>(2, "DATA_3", initialized, repetition_off);
		}
		const char * className() const {
			return "SEG3";
		}
		_Segment3 * create() const {
			return new _Segment3();
		}
	};

	class _Segment4: public HL7Segment {
	public:
		_Segment4() {
			this->init();
		}
		void init() {
			this->addObject<_Data>(0, "DATA_1", initialized, repetition_off);
			this->addObject<_Data>(1, "DATA_2", optional, repetition_off);
			this->addObject<_Data>(2, "DATA_3", initialized, repetition_off);
		}
		const char * className() const {
			return "SEG4";
		}
		_Segment4 * create() const {
			return new _Segment4();
		}
	};

	class _Segment5: public HL7Segment {
	public:
		_Segment5() {
			this->init();
		}
		void init() {
			this->addObject<_Data>(0, "DATA_1", initialized, repetition_off);
			this->addObject<_Data>(1, "DATA_2", optional, repetition_off);
			this->addObject<_Data>(2, "DATA_3", initialized, repetition_off);
		}
		const char * className() const {
			return "SEG5";
		}
		_Segment5 * create() const {
			return new _Segment5();
		}
	};

	class _Group: public HL7Group {
	public:
		_Group() {
			this->init();
		}
		void init() {
			this->addObject<_Segment3>(0, "SEG_1", initialized, repetition_off);
			this->addObject<_Segment4>(1, "SEG_2", optional, repetition_off);
			this->addObject<_Segment5>(2, "SEG_3", initialized, repetition_off);
		}
		const char * className() const {
			return "GROUP";
		}
		_Group * create() const {
			return new _Group();
		}
	};

	class _Message: public HL7Message {
	public:
		_Message() {
			this->init();
		}
		void init() {
			this->addObject<_Segment>(0, "SEG_0", initialized, repetition_off);
			this->addObject<_Segment1>(1, "SEG_1", optional, repetition_off);
			this->addObject<_Segment2>(2, "SEG_2", initialized, repetition_off);
			this->addObject<_Group>(3, "GROUP_3", initialized, repetition_off);
		}
		const char * className() const {
			return "MSG";
		}
		_Message * create() const {
			return new _Message();
		}
	};

	_Message * msg = new _Message();
	msg->initByDefault();
	const std::string pipe_value =
			"SEG|DE_VALUE\rSEG2|DE_VALUE_0^DE_VALUE_1|\rSEG3|^|\rSEG5|^|";

	{ // Initialize message structure
	  // Segment - initialized
		HL7Object * p_seg = msg->getObject(0, 0); // Segment
		assert(p_seg != nullptr);
		HL7Object * p_de = p_seg->getObject(0, 0); // DataElement
		assert(p_de != nullptr);
		p_de->setData("DE_VALUE");

		// Segment1 - optional
		HL7Object * p_seg1 = msg->getObject(0, 1); // this has to be nullptr
		assert(p_seg1 == nullptr);

		// Segment2 - initialized
		HL7Object * p_seg2 = msg->getObject(0, 2);
		assert(p_seg2 != nullptr);

		// DATA_1
		HL7Object * p_data = p_seg2->getObject(0, 0);
		assert(p_data != nullptr);
		HL7Object * p_de_0 = p_data->getObject(0, 0);
		HL7Object * p_de_1 = p_data->getObject(0, 1);
		assert(p_de_0 != nullptr);
		assert(p_de_1 != nullptr);
		p_de_0->setData("DE_VALUE_0");
		p_de_1->setData("DE_VALUE_1");

		// DATA_2
		HL7Object * p_data_2 = p_seg2->getObject(0, 1);
		assert(p_data_2 == nullptr);

		// DATA_3
		HL7Object * p_data_3 = p_seg2->getObject(0, 2);
		assert(p_data_3 != nullptr);
		HL7Object * p_de_3_0 = p_data_3->getObject(0, 0);
		HL7Object * p_de_3_1 = p_data_3->getObject(0, 1);
		assert(p_de_3_0 != nullptr);
		assert(p_de_3_1 != nullptr);
		p_de_3_0->setData("DE_VALUE_2");
		p_de_3_1->setData("DE_VALUE_3");
	}

	std::string buf = "string";
	dbg.tested_func = "msgToPipe";
	dbg.description = "message->segment->dataelement with non-empty buffer";

	try {
		msgToPipe(msg, buf);
		std::cout << "<" << buf << ">" << std::endl;
		dbg.run_test(buf.compare(pipe_value) == 0);
	} catch (HL7Exception& e) {
		dbg.fail(e.what());
	} catch (...) {
		dbg.fail("exception");
	}

	buf.clear();
	dbg.tested_func = "msgToPipe";
	dbg.description = "message->segment->dataelement with empty buffer";

	try {
		msgToPipe(msg, buf);
		dbg.run_test(buf.compare(pipe_value) == 0);
	} catch (...) {
		dbg.fail("exception");
	}

	/* pipeToMsg */
	buf = pipe_value;
	dbg.tested_func = "pipeToMsg";
	dbg.description = "message->segment->dataelement with valid string";
	try {
		pipeToMsg(msg, pipe_value);
		std::string result = "DE_VALUE_1";
		buf.clear();
		msgToPipe(msg, buf);
		dbg.run_test(buf.compare(pipe_value) == 0);
	} catch (HL7Exception& e) {
		dbg.fail(e.what());
	} catch (...) {
		dbg.fail("exception");
	}

	buf.clear();
	dbg.description = "message->segment with empty buffer";
	try {
		pipeToMsg(msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}
	delete msg;
	std::cout << "-------------------------------------------------\n";
}

/*
 * Test message class with group class.
 * pipeToMsg
 * msgToPipe
 */
void test_04(DBGTest& dbg) {

	DBGMessage msg;
	msg.addObject<DBGGroup>(0, "GROUP_1", HL7::initialized,
			HL7::repetition_off);

	std::string buf = "string";
	dbg.description = "message->group with buffer";
	dbg.tested_func = "msgToPipe";

	try {
		msgToPipe(&msg, buf);
		dbg.fail("(no exception)");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->group with empty buffer";
	try {
		msgToPipe(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf = "test";
	dbg.tested_func = "pipeToMsg";
	dbg.description = "message->group with buffer";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(!buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->group with empty buffer";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}
}

/*
 * Test message class with data class.
 * pipeToMsg
 * msgToPipe
 */
void test_05(DBGTest& dbg) {

	DBGMessage msg;
	msg.addObject<DBGData>(0, "DATA_1", HL7::initialized, HL7::repetition_off);

	std::string buf = "string";
	dbg.tested_func = "msgToPipe";
	dbg.description = "message->data with buffer";
	try {
		msgToPipe(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->data with empty buffer";
	try {
		msgToPipe(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf = "test";
	dbg.tested_func = "pipeToMsg";
	dbg.description = "message->data with buffer";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(!buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->data with empty buffer";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}
}

/*
 * Test message class with dataelement class.
 * msgToPipe
 * pipeToMsg
 */
void test_06(DBGTest& dbg) {
	DBGMessage msg;
	msg.addObject<DBGDataElement>(0, "DATAELEMENT_1", HL7::initialized,
			HL7::repetition_off);

	std::string buf = "test";
	dbg.description = "message->dataelement with buffer";
	dbg.tested_func = "msgToPipe";
	try {
		msgToPipe(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->dataelement with empty buffer";
	try {
		msgToPipe(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf = "test";
	dbg.description = "message->dataelement with buffer";
	dbg.tested_func = "pipeToMsg";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(!buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}

	buf.clear();
	dbg.description = "message->dataelement with empty buffer";
	try {
		pipeToMsg(&msg, buf);
		dbg.fail("no exception");
	} catch (HL7Exception& e) {
		dbg.run_test(buf.empty());
	} catch (...) {
		dbg.fail("invalid exception");
	}
}
} /* namespace HL7PIPETEST */

void pipe_test() {
	std::cout << "------------PIPE TESTS---------------\n";
	DBGTest dbg;

	HL7PIPETEST::test_01(dbg);
	HL7PIPETEST::test_02(dbg);
	HL7PIPETEST::test_03(dbg);
	HL7PIPETEST::test_04(dbg);
	HL7PIPETEST::test_05(dbg);
	HL7PIPETEST::test_06(dbg);

	dbg.status();
}

#endif /* TEST_PIPE_TEST_H_ */
