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


#ifndef __varies_H__
#define __varies_H__

#include "../../common/Util.h"

#include "AD.h"
#include "CF.h"
#include "CK.h"
#include "CN.h"
#include "CP.h"
#include "CX.h"
#include "DT.h"
#include "ED.h"
#include "FT.h"
#include "MO.h"
#include "NM.h"
#include "PN.h"
#include "RP.h"
#include "SN.h"
#include "ST.h"
#include "TM.h"
#include "TN.h"
#include "TS.h"
#include "TX.h"
#include "XAD.h"
#include "XCN.h"
#include "XON.h"
#include "XPN.h"
#include "XTN.h"

namespace HL7_24 {

/* variable data type */
struct varies : public HL7DataElement {
  const char* className() const { return "varies"; }
  varies* create() const { return new varies(); }
  void linkUp(HL7Object* p_obj) {
    std::string class_name = p_obj->getData();
    HL7::HL7Object* p_new_obj = NULL;

    if (class_name == "AD") {
      p_new_obj = new HL7_24::AD();
    } else if (class_name == "CE") {
      p_new_obj = new HL7_24::CE();
    } else if (class_name == "CF") {
      p_new_obj = new HL7_24::CF();
    } else if (class_name == "CK") {
      p_new_obj = new HL7_24::CK();
    } else if (class_name == "CN") {
      p_new_obj = new HL7_24::CN();
    } else if (class_name == "CP") {
      p_new_obj = new HL7_24::CP();
    } else if (class_name == "CX") {
      p_new_obj = new HL7_24::CX();
    } else if (class_name == "DT") {
      p_new_obj = new HL7_24::DT();
    } else if (class_name == "ED") {
      p_new_obj = new HL7_24::ED();
    } else if (class_name == "FT") {
      p_new_obj = new HL7_24::FT();
    } else if (class_name == "MO") {
      p_new_obj = new HL7_24::MO();
    } else if (class_name == "NM") {
      p_new_obj = new HL7_24::NM();
    } else if (class_name == "PN") {
      p_new_obj = new HL7_24::PN();
    } else if (class_name == "RP") {
      p_new_obj = new HL7_24::RP();
    } else if (class_name == "SN") {
      p_new_obj = new HL7_24::SN();
    } else if (class_name == "ST") {
      p_new_obj = new HL7_24::ST();
    } else if (class_name == "TM") {
      p_new_obj = new HL7_24::TM();
    } else if (class_name == "TN") {
      p_new_obj = new HL7_24::TN();
    } else if (class_name == "TS") {
      p_new_obj = new HL7_24::TS();
    } else if (class_name == "TX") {
      p_new_obj = new HL7_24::TX();
    } else if (class_name == "XAD") {
      p_new_obj = new HL7_24::XAD();
    } else if (class_name == "XCN") {
      p_new_obj = new HL7_24::XCN();
    } else if (class_name == "XON") {
      p_new_obj = new HL7_24::XON();
    } else if (class_name == "XPN") {
      p_new_obj = new HL7_24::XPN();
    } else if (class_name == "XTN") {
      p_new_obj = new HL7_24::XTN();
    }

    if (p_new_obj) {
      p_new_obj->setName(this->getName());
      m_ownerStorage->at(this->m_info.m_index) = p_new_obj;
      delete this;
    }
  }
};

} /* End of namespace HL7_24 */

#endif /* __varies_H__ */
