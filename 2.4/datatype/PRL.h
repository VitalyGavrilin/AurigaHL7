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


#ifndef __PRL_v24_H__
#define __PRL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* parent result link */
class PRL : public HL7Data {
 public:
  PRL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PRL_1, /* OBX-3 observation identifier of parent result */
    PRL_2, /* OBX-4 sub-ID of parent result */
    PRL_3, /* part of OBX-5 observation result from parent */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PRL"; }
  PRL *create() const { return new PRL(); }

 private:
  void init() {
    // setName("PRL");
    /* Init members */
    addObject<CE>(PRL_1, "PRL.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PRL_2, "PRL.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(PRL_3, "PRL.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * OBX-3 observation identifier of parent result
   */
  CE *getPRL_1(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PRL_1);
  }

  CE *getOBX3ObservationIdentifierOfParentResult(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PRL_1);
  }

  bool isPRL_1(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOBX3ObservationIdentifierOfParentResult(size_t index = 0) {
    try {
      return this->getObject(index, PRL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * OBX-4 sub-ID of parent result
   */
  ST *getPRL_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PRL_2);
  }

  ST *getOBX4SubIDOfParentResult(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PRL_2);
  }

  bool isPRL_2(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOBX4SubIDOfParentResult(size_t index = 0) {
    try {
      return this->getObject(index, PRL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * part of OBX-5 observation result from parent
   */
  TX *getPRL_3(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_3);
  }

  TX *getPartOfOBX5ObservationResultFromParent(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, PRL_3);
  }

  bool isPRL_3(size_t index = 0) {
    try {
      return this->getObject(index, PRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPartOfOBX5ObservationResultFromParent(size_t index = 0) {
    try {
      return this->getObject(index, PRL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PRL */

} /* End HL7_24 */

#endif /*__PRL_v24_H__ */
