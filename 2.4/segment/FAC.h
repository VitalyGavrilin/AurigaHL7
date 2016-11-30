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


#ifndef __FAC_v24_H__
#define __FAC_v24_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Facility */
class FAC : public HL7Segment {
 public:
  FAC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FAC_1,
    FAC_2,
    FAC_3,
    FAC_4,
    FAC_5,
    FAC_6,
    FAC_7,
    FAC_8,
    FAC_9,
    FAC_10,
    FAC_11,
    FAC_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "FAC"; }
  FAC* create() const { return new FAC(); }

 private:
  void init() {
    setName("FAC");
    /* Init members */
    addObject<EI>(FAC_1, "FAC.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(FAC_2, "FAC.2", HL7::optional, HL7::repetition_off);
    addObject<XAD>(FAC_3, "FAC.3", HL7::initialized, HL7::repetition_on);
    addObject<XTN>(FAC_4, "FAC.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(FAC_5, "FAC.5", HL7::optional, HL7::repetition_on);
    addObject<ST>(FAC_6, "FAC.6", HL7::optional, HL7::repetition_on);
    addObject<XAD>(FAC_7, "FAC.7", HL7::optional, HL7::repetition_on);
    addObject<XTN>(FAC_8, "FAC.8", HL7::optional, HL7::repetition_on);
    addObject<XCN>(FAC_9, "FAC.9", HL7::initialized, HL7::repetition_on);
    addObject<ST>(FAC_10, "FAC.10", HL7::optional, HL7::repetition_off);
    addObject<XAD>(FAC_11, "FAC.11", HL7::optional, HL7::repetition_on);
    addObject<XTN>(FAC_12, "FAC.12", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Facility ID-FAC
   */

  EI* getFAC_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FAC_1);
  }

  EI* getFacilityIDFAC(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, FAC_1);
  }

  bool isFAC_1(size_t index = 0) {
    try {
      return this->getObject(index, FAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacilityIDFAC(size_t index = 0) {
    try {
      return this->getObject(index, FAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility Type
   */

  ID* getFAC_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, FAC_2);
  }

  ID* getFacilityType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, FAC_2);
  }

  bool isFAC_2(size_t index = 0) {
    try {
      return this->getObject(index, FAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacilityType(size_t index = 0) {
    try {
      return this->getObject(index, FAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility Address
   */

  XAD* getFAC_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_3);
  }

  XAD* getFacilityAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_3);
  }

  bool isFAC_3(size_t index = 0) {
    try {
      return this->getObject(index, FAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacilityAddress(size_t index = 0) {
    try {
      return this->getObject(index, FAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility Telecommunication
   */

  XTN* getFAC_4(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_4);
  }

  XTN* getFacilityTelecommunication(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_4);
  }

  bool isFAC_4(size_t index = 0) {
    try {
      return this->getObject(index, FAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacilityTelecommunication(size_t index = 0) {
    try {
      return this->getObject(index, FAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Person
   */

  XCN* getFAC_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FAC_5);
  }

  XCN* getContactPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FAC_5);
  }

  bool isFAC_5(size_t index = 0) {
    try {
      return this->getObject(index, FAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, FAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Title
   */

  ST* getFAC_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FAC_6);
  }

  ST* getContactTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FAC_6);
  }

  bool isFAC_6(size_t index = 0) {
    try {
      return this->getObject(index, FAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactTitle(size_t index = 0) {
    try {
      return this->getObject(index, FAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Address
   */

  XAD* getFAC_7(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_7);
  }

  XAD* getContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_7);
  }

  bool isFAC_7(size_t index = 0) {
    try {
      return this->getObject(index, FAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, FAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Telecommunication
   */

  XTN* getFAC_8(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_8);
  }

  XTN* getContactTelecommunication(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_8);
  }

  bool isFAC_8(size_t index = 0) {
    try {
      return this->getObject(index, FAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactTelecommunication(size_t index = 0) {
    try {
      return this->getObject(index, FAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Authority
   */

  XCN* getFAC_9(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FAC_9);
  }

  XCN* getSignatureAuthority(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, FAC_9);
  }

  bool isFAC_9(size_t index = 0) {
    try {
      return this->getObject(index, FAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureAuthority(size_t index = 0) {
    try {
      return this->getObject(index, FAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Authority Title
   */

  ST* getFAC_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FAC_10);
  }

  ST* getSignatureAuthorityTitle(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FAC_10);
  }

  bool isFAC_10(size_t index = 0) {
    try {
      return this->getObject(index, FAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureAuthorityTitle(size_t index = 0) {
    try {
      return this->getObject(index, FAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Authority Address
   */

  XAD* getFAC_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_11);
  }

  XAD* getSignatureAuthorityAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, FAC_11);
  }

  bool isFAC_11(size_t index = 0) {
    try {
      return this->getObject(index, FAC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureAuthorityAddress(size_t index = 0) {
    try {
      return this->getObject(index, FAC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Signature Authority Telecommunication
   */

  XTN* getFAC_12(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_12);
  }

  XTN* getSignatureAuthorityTelecommunication(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, FAC_12);
  }

  bool isFAC_12(size_t index = 0) {
    try {
      return this->getObject(index, FAC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSignatureAuthorityTelecommunication(size_t index = 0) {
    try {
      return this->getObject(index, FAC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FAC */

} /* End of namespace HL7_24 */
#endif /* __FAC_v24_H__ */
