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


#include <iostream>
//#include <string>
//#include "../../2.4/message/ORU_R01.h"
#include <message/ORU_R01.h>
//#include "2.4/segment/OBX.h"
//#include "2.4/datatype/CE.h"
//#include "common/Util.h"
//#include "../../common/ObjToPipe.h"
//#include "../../common/Xml.h"
#include <ObjToPipe.h>
#include <Xml.h>

/*
 std::string msg =
 "MSH|^~\\&|GHH LAB|ELAB-3|GHH OE|BLDG4|200202150930||ORU^R01|CNTRL-3456|P|2.4\r\
PID|||555-44-4444||EVERYWOMAN^EVE^E^^^^L|JONES|19620320|F|||153 FERNWOOD DR.^^STATESVILLE^OH^35292||(206)3345232|(206)752-121||||AC555444444||67-A4335^OH^20030520\r\
OBR|1|845439^GHH OE|1045813^GHH LAB|15545^GLUCOSE|||200202150730|||||||||555-55-5555^PRIMARY^PATRICIA P^^^^MD^^|||||||||F||||||444-44-4444^HIPPOCRATES^HOWARD H^^^^MD\r\
OBX|1|SN|1554-5^GLUCOSE^POST 12H CFST:MCNC:PT:SER/PLAS:QN||^182|mg/dl|70_105|H|||F\r";
 */
std::string msg =
		"MSH|^~\\&|GHH LAB|ELAB-3|GHH OE|BLDG4|200202150930||ORU^R01|CNTRL-3456|P|2.4\r\
PID|||555-44-4444||EVERYWOMAN^EVE^E^^^^L|JONES|19620320|F|||153 FERNWOOD DR.^^STATESVILLE^OH^35292||(206)3345232|(206)752-121||||AC555444444||67-A4335^OH^20030520\r\
OBR|1|845439^GHH OE|1045813^GHH LAB|15545^GLUCOSE|||200202150730|||||||||555-55-5555^PRIMARY^PATRICIA P^^^^MD^^|||||||||F||||||444-44-4444^HIPPOCRATES^HOWARD H\r\
OBX|1|SN|1554-5^GLUCOSE^POST 12H CFST:MCNC:PT:SER/PLAS:QN||^182|mg/dl|70_105|H|||F\r";

void printPipe(const std::string buf) {
	std::string out = buf;
	for (size_t i = 0; i < out.length(); ++i) {
		if (out[i] == '\r') {
			out[i] = '\n';
		}
	}
	std::cout << "------------------- RES -----------------\n";
	std::cout << out << std::endl;
}

void simple_orr_r01() {
	std::cout << "-----------------------\n";
	HL7_24::ORU_R01 msg;
	std::cout << msg.className() << std::endl;
	std::cout << msg.isMSH_1() << std::endl;

	HL7_24::MSH * p_msh_1 = msg.getMSH_1();
	std::cout << p_msh_1->className() << std::endl;
	std::cout << p_msh_1->isSegment() << std::endl;

	try {
		p_msh_1->setData("Set data");
	} catch (HL7Exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << p_msh_1->getObjectSafe(0, 0)->className() << std::endl;
	std::cout << p_msh_1->getMSH_1()->className() << std::endl;
	std::cout << p_msh_1->getMSH_1()->isDataElement() << std::endl;

	p_msh_1->getMSH_1()->setData("This is data.");
	std::cout << p_msh_1->getMSH_1()->getData() << std::endl;

	std::cout << "t1\n";

	std::string pipe_string = "MSH|^~\\&|GHH LAB|ELAB-3|GHH OE|BLDG4|200202150930||ORU^R01|CNTRL-3456|P|2.4";
	pipeToMsg(&msg, pipe_string);
	p_msh_1 = msg.getMSH_1();
	std::cout << "t2\n";
	std::cout << p_msh_1->getMSH_1()->getData() << std::endl;
	std::cout << p_msh_1->getMSH_2()->getData() << std::endl;

	std::cout << "t3\n";
	p_msh_1->getMSH_1()->setData("I want my data back!");
	std::cout << p_msh_1->getMSH_1()->getData() << std::endl;

	pipe_string.clear();
	msgToPipe(&msg, pipe_string);
	std::cout << pipe_string << std::endl;

	p_msh_1->getMSH_8()->setData("my data string");
	msgToPipe(&msg, pipe_string);
	std::cout << pipe_string << std::endl;

	std::cout << "-----------------------\n";
}

int test_orr_r01() {
	HL7_24::ORU_R01 _init_test;
	HL7_24::MSH * p_msg = _init_test.getMSH_1();
	p_msg->getEncodingCharacters()->setData("^~\\&");

	HL7_24::ORU_R01 r01;
	pipeToMsg(&r01, msg);
	_init_test = r01;

	std::string buf;
	msgToPipe(&r01, buf);
	//printPipe(msg);
	//printPipe(buf);
	const char * PASS = "PASS: ";
	const char * FAIL = "FAIL: ";
	const char * p_res = (msg.compare(buf) == 0) ? PASS : FAIL;
	std::cout << "\n-----------------------------\n";
	std::cout << p_res << "ORU_R01 test 1\n";
	buf.clear();
	msgToPipe(&_init_test, buf);
	//printPipe(buf);
	p_res = (msg.compare(buf) == 0) ? "PASS: " : "FAIL: ";
	std::cout << p_res << "ORU_R01 test 2\n\n";
	if (p_res == FAIL) {
		std::cout << msg << std::endl;
		std::cout << buf << std::endl;
	}
	return 0;

	std::cout << "Version:" << getMsgVersion(r01) << std::endl;
	msg = "This&is&a&simple&test";
	HL7_24::CE ce;
	pipeToData(&ce, msg, Delimiter(2));
	//ce.init();
	msg.clear();
	dataToPipe(&ce, msg, Delimiter(2));
	std::cout << msg << std::endl;

	HL7_24::OBX obx;
	std::cout << obx.getOBX_5()->getName() << " " <<  obx.getOBX_5()->className() << std::endl;
	obx.getOBX_2()->setData("CE");
	std::cout << obx.getOBX_5()->getName() << " " <<  obx.getOBX_5()->className() << std::endl;

	return 0;
	pugi::xml_document doc;
	build_xml_tree(doc, &r01);
	doc.print(std::cout);
	initHL7Object(doc, &r01);
	return 0;
}
