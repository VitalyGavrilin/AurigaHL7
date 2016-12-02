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


#ifndef __EDU_v24_H__
#define __EDU_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0402.h"
#include "../datatype/DR.h"
#include "../datatype/DT.h"
#include "../datatype/IS.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"

namespace HL7_24 {

/* Educational Detail */
class EDU : public HL7Segment {
 public:
  EDU() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    EDU_1,
    EDU_2,
    EDU_3,
    EDU_4,
    EDU_5,
    EDU_6,
    EDU_7,
    EDU_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "EDU"; }
  EDU* create() const { return new EDU(); }

 private:
  void init() {
    setName("EDU");
    /* Init members */
    addObject<SI>(EDU_1, "EDU.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(EDU_2, "EDU.2", HL7::initialized, HL7::repetition_off);
    addObject<DR>(EDU_3, "EDU.3", HL7::optional, HL7::repetition_off);
    addObject<DR>(EDU_4, "EDU.4", HL7::optional, HL7::repetition_off);
    addObject<DT>(EDU_5, "EDU.5", HL7::optional, HL7::repetition_off);
    addObject<XON>(EDU_6, "EDU.6", HL7::optional, HL7::repetition_off);
    addObject<CE_0402>(EDU_7, "EDU.7", HL7::optional, HL7::repetition_off);
    addObject<XAD>(EDU_8, "EDU.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - EDU
   */

  SI* getEDU_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, EDU_1);
  }

  SI* getSetIDEDU(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, EDU_1);
  }

  bool isEDU_1(size_t index = 0) {
    try {
      return this->getObject(index, EDU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDEDU(size_t index = 0) {
    try {
      return this->getObject(index, EDU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Academic Degree
   */

  IS* getEDU_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, EDU_2);
  }

  IS* getAcademicDegree(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, EDU_2);
  }

  bool isEDU_2(size_t index = 0) {
    try {
      return this->getObject(index, EDU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcademicDegree(size_t index = 0) {
    try {
      return this->getObject(index, EDU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Academic Degree Program Date Range
   */

  DR* getEDU_3(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_3);
  }

  DR* getAcademicDegreeProgramDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_3);
  }

  bool isEDU_3(size_t index = 0) {
    try {
      return this->getObject(index, EDU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcademicDegreeProgramDateRange(size_t index = 0) {
    try {
      return this->getObject(index, EDU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Academic Degree Program Participation Date Range
   */

  DR* getEDU_4(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_4);
  }

  DR* getAcademicDegreeProgramParticipationDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_4);
  }

  bool isEDU_4(size_t index = 0) {
    try {
      return this->getObject(index, EDU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcademicDegreeProgramParticipationDateRange(size_t index = 0) {
    try {
      return this->getObject(index, EDU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Academic Degree Granted Date
   */

  DT* getEDU_5(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, EDU_5);
  }

  DT* getAcademicDegreeGrantedDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, EDU_5);
  }

  bool isEDU_5(size_t index = 0) {
    try {
      return this->getObject(index, EDU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcademicDegreeGrantedDate(size_t index = 0) {
    try {
      return this->getObject(index, EDU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * School
   */

  XON* getEDU_6(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, EDU_6);
  }

  XON* getSchool(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, EDU_6);
  }

  bool isEDU_6(size_t index = 0) {
    try {
      return this->getObject(index, EDU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSchool(size_t index = 0) {
    try {
      return this->getObject(index, EDU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * School Type Code
   */

  CE_0402* getEDU_7(size_t index = 0) {
    return (CE_0402*)this->getObjectSafe(index, EDU_7);
  }

  CE_0402* getSchoolTypeCode(size_t index = 0) {
    return (CE_0402*)this->getObjectSafe(index, EDU_7);
  }

  bool isEDU_7(size_t index = 0) {
    try {
      return this->getObject(index, EDU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSchoolTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, EDU_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * School Address
   */

  XAD* getEDU_8(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, EDU_8);
  }

  XAD* getSchoolAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, EDU_8);
  }

  bool isEDU_8(size_t index = 0) {
    try {
      return this->getObject(index, EDU_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSchoolAddress(size_t index = 0) {
    try {
      return this->getObject(index, EDU_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EDU */

} /* End of namespace HL7_24 */
#endif /* __EDU_v24_H__ */
