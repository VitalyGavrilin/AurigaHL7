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


#ifndef __OH3_v29_H__
#define __OH3_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* OH3 */
class OH3 : public HL7Segment {
 public:
  OH3() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OH3_1,
    OH3_2,
    OH3_3,
    OH3_4,
    OH3_5,
    OH3_6,
    OH3_7,
    OH3_8,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OH3"; }
  OH3* create() const { return new OH3(); }

 private:
  void init() {
    setName("OH3");
    /* Init members */
    addObject<SI>(OH3_1, "OH3.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OH3_2, "OH3.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH3_3, "OH3.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH3_4, "OH3.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OH3_5, "OH3.5", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH3_6, "OH3.6", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH3_7, "OH3.7", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OH3_8, "OH3.8", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getOH3_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH3_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH3_1);
  }

  bool isOH3_1(size_t index = 0) {
    try {
      return this->getObject(index, OH3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, OH3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOH3_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH3_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH3_2);
  }

  bool isOH3_2(size_t index = 0) {
    try {
      return this->getObject(index, OH3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OH3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occupation
   */

  CWE* getOH3_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH3_3);
  }

  CWE* getOccupation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH3_3);
  }

  bool isOH3_3(size_t index = 0) {
    try {
      return this->getObject(index, OH3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccupation(size_t index = 0) {
    try {
      return this->getObject(index, OH3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Industry
   */

  CWE* getOH3_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH3_4);
  }

  CWE* getIndustry(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH3_4);
  }

  bool isOH3_4(size_t index = 0) {
    try {
      return this->getObject(index, OH3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndustry(size_t index = 0) {
    try {
      return this->getObject(index, OH3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Usual Occupation Duration
   */

  NM* getOH3_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH3_5);
  }

  NM* getUsualOccupationDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH3_5);
  }

  bool isOH3_5(size_t index = 0) {
    try {
      return this->getObject(index, OH3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUsualOccupationDuration(size_t index = 0) {
    try {
      return this->getObject(index, OH3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start year
   */

  DT* getOH3_6(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH3_6);
  }

  DT* getStartyear(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH3_6);
  }

  bool isOH3_6(size_t index = 0) {
    try {
      return this->getObject(index, OH3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartyear(size_t index = 0) {
    try {
      return this->getObject(index, OH3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date
   */

  DT* getOH3_7(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH3_7);
  }

  DT* getEnteredDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH3_7);
  }

  bool isOH3_7(size_t index = 0) {
    try {
      return this->getObject(index, OH3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDate(size_t index = 0) {
    try {
      return this->getObject(index, OH3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Work Unique Identifier
   */

  EI* getOH3_8(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH3_8);
  }

  EI* getWorkUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH3_8);
  }

  bool isOH3_8(size_t index = 0) {
    try {
      return this->getObject(index, OH3_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWorkUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OH3_8) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OH3 */

} /* End of namespace HL7_29 */
#endif /* __OH3_v29_H__ */
