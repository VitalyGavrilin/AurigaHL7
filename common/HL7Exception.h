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


#ifndef HL7EXCEPTION_H_
#define HL7EXCEPTION_H_

class HL7Exception: std::exception {
public:
	HL7Exception(const std::string& what) :
			m_what(what) {
	}
	virtual ~HL7Exception() throw () {
	}
	virtual const char * what() const throw () {
		return m_what.c_str();
	}
	std::string m_what;
};

#endif /* HL7EXCEPTION_H_ */

