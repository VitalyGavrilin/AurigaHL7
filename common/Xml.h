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


#ifndef COMMON_XML_H_
#define COMMON_XML_H_

//#include "HL7Object.h"
#include "Util.h"
#include "pugixml.hpp"

void build_xml_tree(pugi::xml_document& doc, HL7::HL7Object * p_obj);
void initHL7Object(pugi::xml_document& doc, HL7::HL7Object * p_obj);

#endif /* COMMON_XML_H_ */
