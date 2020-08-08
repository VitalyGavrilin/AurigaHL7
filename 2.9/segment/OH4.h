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


#ifndef __OH4_v29_H__
#define __OH4_v29_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* OH4 */
class OH4 : public HL7Segment {
 public:
  OH4() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OH4_1,
    OH4_2,
    OH4_3,
    OH4_4,
    OH4_5,
    OH4_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OH4"; }
  OH4* create() const { return new OH4(); }

 private:
  void init() {
    setName("OH4");
    /* Init members */
    addObject<SI>(OH4_1, "OH4.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OH4_2, "OH4.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH4_3, "OH4.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH4_4, "OH4.4", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH4_5, "OH4.5", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OH4_6, "OH4.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getOH4_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH4_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH4_1);
  }

  bool isOH4_1(size_t index = 0) {
    try {
      return this->getObject(index, OH4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, OH4_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOH4_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH4_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH4_2);
  }

  bool isOH4_2(size_t index = 0) {
    try {
      return this->getObject(index, OH4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OH4_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Combat Zone Start Date
   */

  DT* getOH4_3(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_3);
  }

  DT* getCombatZoneStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_3);
  }

  bool isOH4_3(size_t index = 0) {
    try {
      return this->getObject(index, OH4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCombatZoneStartDate(size_t index = 0) {
    try {
      return this->getObject(index, OH4_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Combat Zone End Date
   */

  DT* getOH4_4(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_4);
  }

  DT* getCombatZoneEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_4);
  }

  bool isOH4_4(size_t index = 0) {
    try {
      return this->getObject(index, OH4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCombatZoneEndDate(size_t index = 0) {
    try {
      return this->getObject(index, OH4_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date
   */

  DT* getOH4_5(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_5);
  }

  DT* getEnteredDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH4_5);
  }

  bool isOH4_5(size_t index = 0) {
    try {
      return this->getObject(index, OH4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDate(size_t index = 0) {
    try {
      return this->getObject(index, OH4_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Combat Zone Unique Identifier
   */

  EI* getOH4_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH4_6);
  }

  EI* getCombatZoneUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH4_6);
  }

  bool isOH4_6(size_t index = 0) {
    try {
      return this->getObject(index, OH4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCombatZoneUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OH4_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OH4 */

} /* End of namespace HL7_29 */
#endif /* __OH4_v29_H__ */
