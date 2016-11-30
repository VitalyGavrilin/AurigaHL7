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


#include <iostream>
#include "orr_r01.h"
#include "test.h"
#include "hl7object_tests.h"
#include "pipe_test.h"

using namespace std;

int main() {

	std::cout << "------ start tests ---------\n";
	try {
		test_orr_r01();
		std::cout << "Run test_2\n";
		test_2();
		std::cout << "Run simple_orr_r01 tests\n";
		simple_orr_r01();
		std::cout << "Run object tests\n";
		hl7_object_test();
		std::cout << "Run pipe tests\n";
		pipe_test();
	} catch (HL7Exception& e) {
		std::cout << "Exception:" << e.what() << std::endl;
	}
	cout << "------ end ---------\n";

	return 0;
}
