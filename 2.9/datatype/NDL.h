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


#ifndef __NDL_v29_H__
#define __NDL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNN.h"
#include "../datatype/DTM.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"

namespace HL7_29 {

/* name with date and location */
class NDL : public HL7Data {
 public:
  NDL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NDL_1, /* Name */
    NDL_2, /* Start Date/Time */
    NDL_3, /* End Date/Time */
    NDL_4, /* Point of Care */
    NDL_5, /* Room */
    NDL_6, /* Bed */
    NDL_7, /* Facility */
    NDL_8, /* Location Status */
    NDL_9, /* Patient Location Type */
    NDL_10, /* Building */
    NDL_11, /* Floor */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NDL"; }
  NDL *create() const { return new NDL(); }

 private:
  void init() {
    setName("NDL");
    /* Init members */
    addObject<CNN>(NDL_1, "NDL.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NDL_2, "NDL.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(NDL_3, "NDL.3", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_4, "NDL.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_5, "NDL.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_6, "NDL.6", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NDL_7, "NDL.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_8, "NDL.8", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_9, "NDL.9", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_10, "NDL.10", HL7::initialized, HL7::repetition_off);
    addObject<IS>(NDL_11, "NDL.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Name
   */
  CNN *getNDL_1(size_t index = 0) {
    return (CNN *)this->getObjectSafe(index, NDL_1);
  }

  CNN *getName(size_t index = 0) {
    return (CNN *)this->getObjectSafe(index, NDL_1);
  }

  bool isNDL_1(size_t index = 0) {
    try {
      return this->getObject(index, NDL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isName(size_t index = 0) {
    try {
      return this->getObject(index, NDL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */
  DTM *getNDL_2(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, NDL_2);
  }

  DTM *getStartDateTime(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, NDL_2);
  }

  bool isNDL_2(size_t index = 0) {
    try {
      return this->getObject(index, NDL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Date/Time
   */
  DTM *getNDL_3(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, NDL_3);
  }

  DTM *getEndDateTime(size_t index = 0) {
    return (DTM *)this->getObjectSafe(index, NDL_3);
  }

  bool isNDL_3(size_t index = 0) {
    try {
      return this->getObject(index, NDL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Point of Care
   */
  IS *getNDL_4(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_4);
  }

  IS *getPointofCare(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_4);
  }

  bool isNDL_4(size_t index = 0) {
    try {
      return this->getObject(index, NDL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointofCare(size_t index = 0) {
    try {
      return this->getObject(index, NDL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room
   */
  IS *getNDL_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_5);
  }

  IS *getRoom(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_5);
  }

  bool isNDL_5(size_t index = 0) {
    try {
      return this->getObject(index, NDL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, NDL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bed
   */
  IS *getNDL_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_6);
  }

  IS *getBed(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_6);
  }

  bool isNDL_6(size_t index = 0) {
    try {
      return this->getObject(index, NDL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, NDL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility
   */
  HD *getNDL_7(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, NDL_7);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, NDL_7);
  }

  bool isNDL_7(size_t index = 0) {
    try {
      return this->getObject(index, NDL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, NDL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Status
   */
  IS *getNDL_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_8);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_8);
  }

  bool isNDL_8(size_t index = 0) {
    try {
      return this->getObject(index, NDL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, NDL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Location Type
   */
  IS *getNDL_9(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_9);
  }

  IS *getPatientLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_9);
  }

  bool isNDL_9(size_t index = 0) {
    try {
      return this->getObject(index, NDL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientLocationType(size_t index = 0) {
    try {
      return this->getObject(index, NDL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Building
   */
  IS *getNDL_10(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_10);
  }

  IS *getBuilding(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_10);
  }

  bool isNDL_10(size_t index = 0) {
    try {
      return this->getObject(index, NDL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, NDL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Floor
   */
  IS *getNDL_11(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_11);
  }

  IS *getFloor(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, NDL_11);
  }

  bool isNDL_11(size_t index = 0) {
    try {
      return this->getObject(index, NDL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, NDL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NDL */

} /* End HL7_29 */

#endif /* __NDL_v29_H__ */
