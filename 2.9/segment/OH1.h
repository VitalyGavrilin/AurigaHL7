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


#ifndef __OH1_v29_H__
#define __OH1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* OH1 */
class OH1 : public HL7Segment {
 public:
  OH1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OH1_1,
    OH1_2,
    OH1_3,
    OH1_4,
    OH1_5,
    OH1_6,
    OH1_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OH1"; }
  OH1* create() const { return new OH1(); }

 private:
  void init() {
    setName("OH1");
    /* Init members */
    addObject<SI>(OH1_1, "OH1.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OH1_2, "OH1.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH1_3, "OH1.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH1_4, "OH1.4", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH1_5, "OH1.5", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH1_6, "OH1.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OH1_7, "OH1.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getOH1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH1_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH1_1);
  }

  bool isOH1_1(size_t index = 0) {
    try {
      return this->getObject(index, OH1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, OH1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOH1_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH1_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH1_2);
  }

  bool isOH1_2(size_t index = 0) {
    try {
      return this->getObject(index, OH1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OH1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status
   */

  CWE* getOH1_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH1_3);
  }

  CWE* getEmploymentStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH1_3);
  }

  bool isOH1_3(size_t index = 0) {
    try {
      return this->getObject(index, OH1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatus(size_t index = 0) {
    try {
      return this->getObject(index, OH1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status Start Date
   */

  DT* getOH1_4(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_4);
  }

  DT* getEmploymentStatusStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_4);
  }

  bool isOH1_4(size_t index = 0) {
    try {
      return this->getObject(index, OH1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusStartDate(size_t index = 0) {
    try {
      return this->getObject(index, OH1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status End Date
   */

  DT* getOH1_5(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_5);
  }

  DT* getEmploymentStatusEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_5);
  }

  bool isOH1_5(size_t index = 0) {
    try {
      return this->getObject(index, OH1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusEndDate(size_t index = 0) {
    try {
      return this->getObject(index, OH1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date
   */

  DT* getOH1_6(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_6);
  }

  DT* getEnteredDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH1_6);
  }

  bool isOH1_6(size_t index = 0) {
    try {
      return this->getObject(index, OH1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDate(size_t index = 0) {
    try {
      return this->getObject(index, OH1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employment Status Unique Identifier
   */

  EI* getOH1_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH1_7);
  }

  EI* getEmploymentStatusUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH1_7);
  }

  bool isOH1_7(size_t index = 0) {
    try {
      return this->getObject(index, OH1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmploymentStatusUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OH1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OH1 */

} /* End of namespace HL7_29 */
#endif /* __OH1_v29_H__ */
