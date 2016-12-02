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


#ifndef __EIP_v24_H__
#define __EIP_v24_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"

namespace HL7_24 {

/* parent order */
class EIP : public HL7Data {
 public:
  EIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    EIP_1, /* parent´s placer order number */
    EIP_2, /* parent´s filler order number */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "EIP"; }
  EIP *create() const { return new EIP(); }

 private:
  void init() {
    // setName("EIP");
    /* Init members */
    addObject<EI>(EIP_1, "EIP.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(EIP_2, "EIP.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * parent´s placer order number
   */
  EI *getEIP_1(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  EI *getParentSPlacerOrderNumber(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_1);
  }

  bool isEIP_1(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentSPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, EIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * parent´s filler order number
   */
  EI *getEIP_2(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  EI *getParentSFillerOrderNumber(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, EIP_2);
  }

  bool isEIP_2(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentSFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, EIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End EIP */

} /* End HL7_24 */

#endif /*__EIP_v24_H__ */
