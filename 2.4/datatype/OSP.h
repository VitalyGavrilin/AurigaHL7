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


#ifndef __OSP_v24_H__
#define __OSP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DT.h"

namespace HL7_24 {

/* occurence span */
class OSP : public HL7Data {
 public:
  OSP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OSP_1, /* occurrence span code */
    OSP_2, /* occurrence span start date */
    OSP_3, /* occurrence span stop date */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OSP"; }
  OSP *create() const { return new OSP(); }

 private:
  void init() {
    // setName("OSP");
    /* Init members */
    addObject<CE>(OSP_1, "OSP.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OSP_2, "OSP.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OSP_3, "OSP.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * occurrence span code
   */
  CE *getOSP_1(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, OSP_1);
  }

  CE *getOccurrenceSpanCode(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, OSP_1);
  }

  bool isOSP_1(size_t index = 0) {
    try {
      return this->getObject(index, OSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanCode(size_t index = 0) {
    try {
      return this->getObject(index, OSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * occurrence span start date
   */
  DT *getOSP_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_2);
  }

  DT *getOccurrenceSpanStartDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_2);
  }

  bool isOSP_2(size_t index = 0) {
    try {
      return this->getObject(index, OSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanStartDate(size_t index = 0) {
    try {
      return this->getObject(index, OSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * occurrence span stop date
   */
  DT *getOSP_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_3);
  }

  DT *getOccurrenceSpanStopDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, OSP_3);
  }

  bool isOSP_3(size_t index = 0) {
    try {
      return this->getObject(index, OSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpanStopDate(size_t index = 0) {
    try {
      return this->getObject(index, OSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OSP */

} /* End HL7_24 */

#endif /*__OSP_v24_H__ */
