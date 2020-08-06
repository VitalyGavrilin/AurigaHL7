/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __EDU_v29_H__
#define __EDU_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/DT.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* EDU */
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
    EDU_9,
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
    addObject<CWE>(EDU_2, "EDU.2", HL7::initialized, HL7::repetition_off);
    addObject<DR>(EDU_3, "EDU.3", HL7::initialized, HL7::repetition_off);
    addObject<DR>(EDU_4, "EDU.4", HL7::initialized, HL7::repetition_off);
    addObject<DT>(EDU_5, "EDU.5", HL7::initialized, HL7::repetition_off);
    addObject<XON>(EDU_6, "EDU.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EDU_7, "EDU.7", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(EDU_8, "EDU.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EDU_9, "EDU.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – EDU
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

  CWE* getEDU_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_2);
  }

  CWE* getAcademicDegree(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_2);
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
   * Academic Degree Program Participation Date
   */

  DR* getEDU_4(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_4);
  }

  DR* getAcademicDegreeProgramParticipationDate(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, EDU_4);
  }

  bool isEDU_4(size_t index = 0) {
    try {
      return this->getObject(index, EDU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcademicDegreeProgramParticipationDate(size_t index = 0) {
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

  CWE* getEDU_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_7);
  }

  CWE* getSchoolTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_7);
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

  /****************************************
   * Major Field of Study
   */

  CWE* getEDU_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_9);
  }

  CWE* getMajorFieldofStudy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EDU_9);
  }

  bool isEDU_9(size_t index = 0) {
    try {
      return this->getObject(index, EDU_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMajorFieldofStudy(size_t index = 0) {
    try {
      return this->getObject(index, EDU_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EDU */

} /* End of namespace HL7_29 */
#endif /* __EDU_v29_H__ */
