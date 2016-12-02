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


#include "Xml.h"
#include <iostream>

using namespace HL7;

void xml_node(HL7Object * p_obj, pugi::xml_node& parent_node) {
	/* Ignore empty objects */
	if (p_obj == NULL || p_obj->isEmpty()) {
		return;
	}
	/* Add value for dataelement nodes */
	if (p_obj->isDataElement()) {
		parent_node.append_child(pugi::node_pcdata).set_value(p_obj->getData());
	} else {
		for (size_t i = 0; i < p_obj->size(); ++i) {
			HL7Storage * p_stor = p_obj->at(i);
			for (size_t j = 0; j < p_stor->size(); ++j) {
				HL7Object * __obj = p_stor->at(j).ptr();
				pugi::xml_node __node = parent_node.append_child(
						__obj->getName().c_str());
				xml_node(__obj, __node);
			}
		}
	}
}

void build_xml_tree(pugi::xml_document& doc, HL7Object * p_obj) {
	doc.reset();
	if (p_obj && !p_obj->isEmpty()) {
		for (size_t i = 0; i < p_obj->size(); ++i) {
			pugi::xml_node node = doc.append_child(p_obj->getName().c_str());
			HL7Storage * p_stor = p_obj->at(i);
			for (size_t j = 0; j < p_stor->size(); ++j) {
				HL7Object * __obj = p_stor->at(j).ptr();
				pugi::xml_node __node = node.append_child(
						__obj->getName().c_str());
				xml_node(__obj, __node);
			}
		}
		//doc.print(std::cout);
	}
}

void initHL7Object(pugi::xml_document& doc, HL7::HL7Object * p_obj) {
	if (p_obj == NULL) {
		throw HL7Exception("initHL7Object: invalid parameter.");
	}
	p_obj->clear();
	pugi::xml_node __node = doc.child(p_obj->getName().c_str());
	if (__node.empty()) {
		throw HL7Exception("initHL7Object: Invalid xml document.");
	}
	for (pugi::xml_node n = __node.first_child(); n; n = n.next_sibling()) {

		std::cout << "* " << n.name() << n.first_attribute().value() << std::endl;

	}
}
