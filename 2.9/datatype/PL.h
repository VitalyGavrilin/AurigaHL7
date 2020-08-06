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


#ifndef __PL_v29_H__
#define __PL_v29_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"
#include "../datatype/HD.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* person location */
class PL : public HL7Data {
 public:
  PL() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PL_1, /* Point of Care */
    PL_2, /* Room */
    PL_3, /* Bed */
    PL_4, /* Facility */
    PL_5, /* Location Status */
    PL_6, /* Person Location Type */
    PL_7, /* Building */
    PL_8, /* Floor */
    PL_9, /* Location Description */
    PL_10, /* Comprehensive Location Identifier */
    PL_11, /* Assigning Authority for Location */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PL"; }
  PL *create() const { return new PL(); }

 private:
  void init() {
    setName("PL");
    /* Init members */
    addObject<HD>(PL_1, "PL.1", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_2, "PL.2", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_3, "PL.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_4, "PL.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_5, "PL.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PL_6, "PL.6", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_7, "PL.7", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_8, "PL.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PL_9, "PL.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PL_10, "PL.10", HL7::initialized, HL7::repetition_off);
    addObject<HD>(PL_11, "PL.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Point of Care
   */
  HD *getPL_1(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_1);
  }

  HD *getPointofCare(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_1);
  }

  bool isPL_1(size_t index = 0) {
    try {
      return this->getObject(index, PL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPointofCare(size_t index = 0) {
    try {
      return this->getObject(index, PL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room
   */
  HD *getPL_2(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_2);
  }

  HD *getRoom(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_2);
  }

  bool isPL_2(size_t index = 0) {
    try {
      return this->getObject(index, PL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoom(size_t index = 0) {
    try {
      return this->getObject(index, PL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bed
   */
  HD *getPL_3(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_3);
  }

  HD *getBed(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_3);
  }

  bool isPL_3(size_t index = 0) {
    try {
      return this->getObject(index, PL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBed(size_t index = 0) {
    try {
      return this->getObject(index, PL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Facility
   */
  HD *getPL_4(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_4);
  }

  HD *getFacility(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_4);
  }

  bool isPL_4(size_t index = 0) {
    try {
      return this->getObject(index, PL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, PL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Status
   */
  IS *getPL_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_5);
  }

  IS *getLocationStatus(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_5);
  }

  bool isPL_5(size_t index = 0) {
    try {
      return this->getObject(index, PL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationStatus(size_t index = 0) {
    try {
      return this->getObject(index, PL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Person Location Type
   */
  IS *getPL_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_6);
  }

  IS *getPersonLocationType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PL_6);
  }

  bool isPL_6(size_t index = 0) {
    try {
      return this->getObject(index, PL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonLocationType(size_t index = 0) {
    try {
      return this->getObject(index, PL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Building
   */
  HD *getPL_7(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_7);
  }

  HD *getBuilding(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_7);
  }

  bool isPL_7(size_t index = 0) {
    try {
      return this->getObject(index, PL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBuilding(size_t index = 0) {
    try {
      return this->getObject(index, PL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Floor
   */
  HD *getPL_8(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_8);
  }

  HD *getFloor(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_8);
  }

  bool isPL_8(size_t index = 0) {
    try {
      return this->getObject(index, PL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFloor(size_t index = 0) {
    try {
      return this->getObject(index, PL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Description
   */
  ST *getPL_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PL_9);
  }

  ST *getLocationDescription(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, PL_9);
  }

  bool isPL_9(size_t index = 0) {
    try {
      return this->getObject(index, PL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationDescription(size_t index = 0) {
    try {
      return this->getObject(index, PL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comprehensive Location Identifier
   */
  EI *getPL_10(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PL_10);
  }

  EI *getComprehensiveLocationIdentifier(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PL_10);
  }

  bool isPL_10(size_t index = 0) {
    try {
      return this->getObject(index, PL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComprehensiveLocationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority for Location
   */
  HD *getPL_11(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_11);
  }

  HD *getAssigningAuthorityforLocation(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, PL_11);
  }

  bool isPL_11(size_t index = 0) {
    try {
      return this->getObject(index, PL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityforLocation(size_t index = 0) {
    try {
      return this->getObject(index, PL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PL */

} /* End HL7_29 */

#endif /* __PL_v29_H__ */
