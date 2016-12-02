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

#ifndef COMMON_DBGTEST_H_
#define COMMON_DBGTEST_H_

#include <iostream>

struct DBGTest {

	DBGTest() :
			passed(0), failed(0), canceled(0) {
	}

	void run_test(const char * comment, bool test_result, bool cancel_test =
			false) {
		if (cancel_test) {
			canceled++;
			std::cout << "CANCELED: ";
		} else {
			if (test_result) {
				std::cout << "PASSED: ";
				passed++;
			} else {
				std::cout << "FAILED: ";
				failed++;
			}
		}
		std::cout << "[" << tested_func << "]" << description;
		if (comment != nullptr) {
			std::cout << "(" << comment << ")";
		}
		std::cout << std::endl;
	}

	void run_test(bool test_result) {
		run_test(nullptr, test_result, false);
	}

	void fail(const char * comment = nullptr) {
		run_test(comment, false, false);
	}

	void status() {
		std::cout << "-------------" << std::endl;
		std::cout << "PASSED:   " << passed << std::endl;
		std::cout << "FAILED:   " << failed << std::endl;
		std::cout << "CANCELED: " << canceled << std::endl;
		std::cout << "-------------" << std::endl;
		std::cout << "TOTAL:   " << (passed + failed + canceled) << std::endl;
	}
public:
	std::string tested_func;
	std::string description;
private:
	size_t passed;
	size_t failed;
	size_t canceled;
};

#endif /* COMMON_DBGTEST_H_ */
