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


#ifndef __ELD_v24_H__
#define __ELD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* error */
class ELD : public HL7Data {
 public:
  ELD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    ELD_1, /* segment ID */
    ELD_2, /* sequence */
    ELD_3, /* field position */
    ELD_4, /* code identifying error */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "ELD"; }
  ELD *create() const { return new ELD(); }

 private:
  void init() {
    // setName("ELD");
    /* Init members */
    addObject<ST>(ELD_1, "ELD.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ELD_2, "ELD.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ELD_3, "ELD.3", HL7::initialized, HL7::repetition_off);
    addObject<CE>(ELD_4, "ELD.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * segment ID
   */
  ST *getELD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, ELD_1);
  }

  ST *getSegmentID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, ELD_1);
  }

  bool isELD_1(size_t index = 0) {
    try {
      return this->getObject(index, ELD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentID(size_t index = 0) {
    try {
      return this->getObject(index, ELD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sequence
   */
  NM *getELD_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, ELD_2);
  }

  NM *getSequence(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, ELD_2);
  }

  bool isELD_2(size_t index = 0) {
    try {
      return this->getObject(index, ELD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequence(size_t index = 0) {
    try {
      return this->getObject(index, ELD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * field position
   */
  NM *getELD_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, ELD_3);
  }

  NM *getFieldPosition(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, ELD_3);
  }

  bool isELD_3(size_t index = 0) {
    try {
      return this->getObject(index, ELD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFieldPosition(size_t index = 0) {
    try {
      return this->getObject(index, ELD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * code identifying error
   */
  CE *getELD_4(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, ELD_4);
  }

  CE *getCodeIdentifyingError(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, ELD_4);
  }

  bool isELD_4(size_t index = 0) {
    try {
      return this->getObject(index, ELD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCodeIdentifyingError(size_t index = 0) {
    try {
      return this->getObject(index, ELD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End ELD */

} /* End HL7_24 */

#endif /*__ELD_v24_H__ */
