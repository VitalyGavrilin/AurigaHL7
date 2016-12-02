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


#ifndef OBJTOPIPE_H_
#define OBJTOPIPE_H_

#include <string>
#include <vector>
#include <sstream>

#include "Util.h"

//#define HL7PIPEDEBUG

typedef std::vector<std::string> STRINGS;
typedef STRINGS::const_iterator STR_CONST_IT;

using namespace HL7;

const char REP_DELIM = '~';
const char LINE_DELIM = '\r';
const char FIELD_DELIM = '|';
const char COMP_DELIM = '^';
const char SUBCOMP_DELIM = '&';

const std::string MSH = "MSH";

const int MAX_DELIM = 3; /* 0 -'\r'; 1 - '|'; 2 - '^'; 3 - '&'; */

struct Delimiter {
	Delimiter(int index);
	Delimiter();
	bool config(HL7Object*);
	Delimiter next();
	operator char();
private:
	void __init_delim();
	char m_delim[MAX_DELIM + 1];
	int m_delim_index;
};

HL7Object * findSegment(const std::string&, HL7Object*);
/* object to pipe */
void objToPipe(HL7Object*, std::string&);
void msgToPipe(HL7Object*, std::string&);
void groupToPipe(HL7Object*, std::string&);
void segToPipe(HL7Object*, std::string&);
void dataToPipe(HL7Object*, std::string&, Delimiter);
void dataelementToPipe(HL7Object*, std::string&, Delimiter);

/* pipe to object */
void pipeToMsg(HL7Object*, const std::string&);
void pipeToData(HL7Object*, const std::string&, Delimiter, bool ignore_rep = false);


#endif /* OBJTOPIPE_H_ */
