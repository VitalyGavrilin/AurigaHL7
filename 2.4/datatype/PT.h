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


#ifndef __PT_v24_H__
#define __PT_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"

namespace HL7_24 {

/* processing type */
class PT : public HL7Data {
 public:
  PT() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PT_1, /* processing ID */
    PT_2, /* processing mode */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PT"; }
  PT *create() const { return new PT(); }

 private:
  void init() {
    // setName("PT");
    /* Init members */
    addObject<ID>(PT_1, "PT.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PT_2, "PT.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * processing ID
   */
  ID *getPT_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  ID *getProcessingID(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_1);
  }

  bool isPT_1(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingID(size_t index = 0) {
    try {
      return this->getObject(index, PT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * processing mode
   */
  ID *getPT_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  ID *getProcessingMode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PT_2);
  }

  bool isPT_2(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingMode(size_t index = 0) {
    try {
      return this->getObject(index, PT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PT */

} /* End HL7_24 */

#endif /*__PT_v24_H__ */
