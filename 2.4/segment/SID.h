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


#ifndef __SID_v24_H__
#define __SID_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0385.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Substance Identifier */
class SID : public HL7Segment {
 public:
  SID() { this->init(); }

 private:
  /* */
  enum FIELD_ID { SID_1, SID_2, SID_3, SID_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "SID"; }
  SID* create() const { return new SID(); }

 private:
  void init() {
    setName("SID");
    /* Init members */
    addObject<CE>(SID_1, "SID.1", HL7::conditional, HL7::repetition_off);
    addObject<ST>(SID_2, "SID.2", HL7::conditional, HL7::repetition_off);
    addObject<ST>(SID_3, "SID.3", HL7::conditional, HL7::repetition_off);
    addObject<CE_0385>(SID_4, "SID.4", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Application / Method Identifier
   */

  CE* getSID_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, SID_1);
  }

  CE* getApplicationMethodIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, SID_1);
  }

  bool isSID_1(size_t index = 0) {
    try {
      return this->getObject(index, SID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationMethodIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Lot Number
   */

  ST* getSID_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_2);
  }

  ST* getSubstanceLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_2);
  }

  bool isSID_2(size_t index = 0) {
    try {
      return this->getObject(index, SID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, SID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Container Identifier
   */

  ST* getSID_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_3);
  }

  ST* getSubstanceContainerIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SID_3);
  }

  bool isSID_3(size_t index = 0) {
    try {
      return this->getObject(index, SID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceContainerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substance Manufacturer Identifier
   */

  CE_0385* getSID_4(size_t index = 0) {
    return (CE_0385*)this->getObjectSafe(index, SID_4);
  }

  CE_0385* getSubstanceManufacturerIdentifier(size_t index = 0) {
    return (CE_0385*)this->getObjectSafe(index, SID_4);
  }

  bool isSID_4(size_t index = 0) {
    try {
      return this->getObject(index, SID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstanceManufacturerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SID_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SID */

} /* End of namespace HL7_24 */
#endif /* __SID_v24_H__ */
