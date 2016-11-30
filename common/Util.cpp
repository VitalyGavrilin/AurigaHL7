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
#include <string>
#include <vector>

#include "Util.h"

size_t split_to_vector(const std::string& str, std::vector<std::string>& vec,
		char delim) {
	if (str.empty()) {
		return 0;
	}
	size_t start = 0;
	const size_t max_len = str.length();
	size_t found = str.find(delim, start);

	vec.clear();

	while (start < max_len) {
		size_t len = found - start;
		vec.push_back(str.substr(start, len));

		if (found < max_len)
			start = found + 1;
		else
			start = found;

		found = str.find(delim, start);
	}

	if (start == max_len)
		vec.push_back(std::string());

	return vec.size();
}
