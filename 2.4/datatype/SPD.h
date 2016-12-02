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


#ifndef __SPD_v24_H__
#define __SPD_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Specialty */
class SPD : public HL7Data {
 public:
  SPD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SPD_1, /* specialty name */
    SPD_2, /* governing board */
    SPD_3, /* eligible or certified */
    SPD_4, /* date of certification */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SPD"; }
  SPD *create() const { return new SPD(); }

 private:
  void init() {
    // setName("SPD");
    /* Init members */
    addObject<ST>(SPD_1, "SPD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SPD_2, "SPD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(SPD_3, "SPD.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(SPD_4, "SPD.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * specialty name
   */
  ST *getSPD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_1);
  }

  ST *getSpecialtyName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_1);
  }

  bool isSPD_1(size_t index = 0) {
    try {
      return this->getObject(index, SPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialtyName(size_t index = 0) {
    try {
      return this->getObject(index, SPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * governing board
   */
  ST *getSPD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_2);
  }

  ST *getGoverningBoard(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SPD_2);
  }

  bool isSPD_2(size_t index = 0) {
    try {
      return this->getObject(index, SPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoverningBoard(size_t index = 0) {
    try {
      return this->getObject(index, SPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * eligible or certified
   */
  ID *getSPD_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SPD_3);
  }

  ID *getEligibleOrCertified(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, SPD_3);
  }

  bool isSPD_3(size_t index = 0) {
    try {
      return this->getObject(index, SPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEligibleOrCertified(size_t index = 0) {
    try {
      return this->getObject(index, SPD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * date of certification
   */
  DT *getSPD_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, SPD_4);
  }

  DT *getDateOfCertification(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, SPD_4);
  }

  bool isSPD_4(size_t index = 0) {
    try {
      return this->getObject(index, SPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateOfCertification(size_t index = 0) {
    try {
      return this->getObject(index, SPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SPD */

} /* End HL7_24 */

#endif /*__SPD_v24_H__ */
