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


#ifndef __NSC_v29_H__
#define __NSC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/HD.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* NSC */
class NSC : public HL7Segment {
 public:
  NSC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NSC_1,
    NSC_2,
    NSC_3,
    NSC_4,
    NSC_5,
    NSC_6,
    NSC_7,
    NSC_8,
    NSC_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NSC"; }
  NSC* create() const { return new NSC(); }

 private:
  void init() {
    setName("NSC");
    /* Init members */
    addObject<CWE>(NSC_1, "NSC.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(NSC_2, "NSC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(NSC_3, "NSC.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NSC_4, "NSC.4", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NSC_5, "NSC.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(NSC_6, "NSC.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(NSC_7, "NSC.7", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NSC_8, "NSC.8", HL7::initialized, HL7::repetition_off);
    addObject<HD>(NSC_9, "NSC.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Application Change Type
   */

  CWE* getNSC_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NSC_1);
  }

  CWE* getApplicationChangeType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, NSC_1);
  }

  bool isNSC_1(size_t index = 0) {
    try {
      return this->getObject(index, NSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationChangeType(size_t index = 0) {
    try {
      return this->getObject(index, NSC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current CPU
   */

  ST* getNSC_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_2);
  }

  ST* getCurrentCPU(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_2);
  }

  bool isNSC_2(size_t index = 0) {
    try {
      return this->getObject(index, NSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentCPU(size_t index = 0) {
    try {
      return this->getObject(index, NSC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Fileserver
   */

  ST* getNSC_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_3);
  }

  ST* getCurrentFileserver(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_3);
  }

  bool isNSC_3(size_t index = 0) {
    try {
      return this->getObject(index, NSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentFileserver(size_t index = 0) {
    try {
      return this->getObject(index, NSC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Application
   */

  HD* getNSC_4(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_4);
  }

  HD* getCurrentApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_4);
  }

  bool isNSC_4(size_t index = 0) {
    try {
      return this->getObject(index, NSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentApplication(size_t index = 0) {
    try {
      return this->getObject(index, NSC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Facility
   */

  HD* getNSC_5(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_5);
  }

  HD* getCurrentFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_5);
  }

  bool isNSC_5(size_t index = 0) {
    try {
      return this->getObject(index, NSC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentFacility(size_t index = 0) {
    try {
      return this->getObject(index, NSC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * New CPU
   */

  ST* getNSC_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_6);
  }

  ST* getNewCPU(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_6);
  }

  bool isNSC_6(size_t index = 0) {
    try {
      return this->getObject(index, NSC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewCPU(size_t index = 0) {
    try {
      return this->getObject(index, NSC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * New Fileserver
   */

  ST* getNSC_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_7);
  }

  ST* getNewFileserver(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NSC_7);
  }

  bool isNSC_7(size_t index = 0) {
    try {
      return this->getObject(index, NSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewFileserver(size_t index = 0) {
    try {
      return this->getObject(index, NSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * New Application
   */

  HD* getNSC_8(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_8);
  }

  HD* getNewApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_8);
  }

  bool isNSC_8(size_t index = 0) {
    try {
      return this->getObject(index, NSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewApplication(size_t index = 0) {
    try {
      return this->getObject(index, NSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * New Facility
   */

  HD* getNSC_9(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_9);
  }

  HD* getNewFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, NSC_9);
  }

  bool isNSC_9(size_t index = 0) {
    try {
      return this->getObject(index, NSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNewFacility(size_t index = 0) {
    try {
      return this->getObject(index, NSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NSC */

} /* End of namespace HL7_29 */
#endif /* __NSC_v29_H__ */
