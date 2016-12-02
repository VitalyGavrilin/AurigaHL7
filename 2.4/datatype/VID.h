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


#ifndef __VID_v24_H__
#define __VID_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"

namespace HL7_24 {

/* version identifier */
class VID : public HL7Data {
 public:
  VID() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    VID_1, /* version ID */
    VID_2, /* internationalization code */
    VID_3, /* international version ID */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "VID"; }
  VID *create() const { return new VID(); }

 private:
  void init() {
    // setName("VID");
    /* Init members */
    addObject<ID>(VID_1, "VID.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(VID_2, "VID.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(VID_3, "VID.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * version ID
   */
  ID *getVID_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VID_1);
  }

  ID *getVersionID(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, VID_1);
  }

  bool isVID_1(size_t index = 0) {
    try {
      return this->getObject(index, VID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVersionID(size_t index = 0) {
    try {
      return this->getObject(index, VID_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * internationalization code
   */
  CE *getVID_2(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, VID_2);
  }

  CE *getInternationalizationCode(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, VID_2);
  }

  bool isVID_2(size_t index = 0) {
    try {
      return this->getObject(index, VID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternationalizationCode(size_t index = 0) {
    try {
      return this->getObject(index, VID_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * international version ID
   */
  CE *getVID_3(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, VID_3);
  }

  CE *getInternationalVersionID(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, VID_3);
  }

  bool isVID_3(size_t index = 0) {
    try {
      return this->getObject(index, VID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInternationalVersionID(size_t index = 0) {
    try {
      return this->getObject(index, VID_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End VID */

} /* End HL7_24 */

#endif /*__VID_v24_H__ */
