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


#ifndef __ARV_v29_H__
#define __ARV_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DR.h"
#include "../datatype/EI.h"
#include "../datatype/ERL.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* ARV */
class ARV : public HL7Segment {
 public:
  ARV() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ARV_1,
    ARV_2,
    ARV_3,
    ARV_4,
    ARV_5,
    ARV_6,
    ARV_7,
    ARV_8,
    ARV_9,
    ARV_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ARV"; }
  ARV* create() const { return new ARV(); }

 private:
  void init() {
    setName("ARV");
    /* Init members */
    addObject<SI>(ARV_1, "ARV.1", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(ARV_2, "ARV.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_3, "ARV.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_4, "ARV.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ARV_5, "ARV.5", HL7::initialized, HL7::repetition_off);
    addObject<DR>(ARV_6, "ARV.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_7, "ARV.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ARV_8, "ARV.8", HL7::initialized, HL7::repetition_off);
    addObject<ERL>(ARV_9, "ARV.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ARV_10, "ARV.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getARV_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ARV_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ARV_1);
  }

  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Action Code
   */

  CNE* getARV_2(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ARV_2);
  }

  CNE* getAccessRestrictionActionCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, ARV_2);
  }

  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionActionCode(size_t index = 0) {
    try {
      return this->getObject(index, ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Value
   */

  CWE* getARV_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_3);
  }

  CWE* getAccessRestrictionValue(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_3);
  }

  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionValue(size_t index = 0) {
    try {
      return this->getObject(index, ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Reason
   */

  CWE* getARV_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_4);
  }

  CWE* getAccessRestrictionReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_4);
  }

  bool isARV_4(size_t index = 0) {
    try {
      return this->getObject(index, ARV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionReason(size_t index = 0) {
    try {
      return this->getObject(index, ARV_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Access Restriction Instructions
   */

  ST* getARV_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARV_5);
  }

  ST* getSpecialAccessRestrictionInstructions(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ARV_5);
  }

  bool isARV_5(size_t index = 0) {
    try {
      return this->getObject(index, ARV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialAccessRestrictionInstructions(size_t index = 0) {
    try {
      return this->getObject(index, ARV_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Date Range
   */

  DR* getARV_6(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARV_6);
  }

  DR* getAccessRestrictionDateRange(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, ARV_6);
  }

  bool isARV_6(size_t index = 0) {
    try {
      return this->getObject(index, ARV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionDateRange(size_t index = 0) {
    try {
      return this->getObject(index, ARV_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Classification Tag
   */

  CWE* getARV_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_7);
  }

  CWE* getSecurityClassificationTag(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_7);
  }

  bool isARV_7(size_t index = 0) {
    try {
      return this->getObject(index, ARV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityClassificationTag(size_t index = 0) {
    try {
      return this->getObject(index, ARV_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Handling Instructions
   */

  CWE* getARV_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_8);
  }

  CWE* getSecurityHandlingInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ARV_8);
  }

  bool isARV_8(size_t index = 0) {
    try {
      return this->getObject(index, ARV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityHandlingInstructions(size_t index = 0) {
    try {
      return this->getObject(index, ARV_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Message Location
   */

  ERL* getARV_9(size_t index = 0) {
    return (ERL*)this->getObjectSafe(index, ARV_9);
  }

  ERL* getAccessRestrictionMessageLocation(size_t index = 0) {
    return (ERL*)this->getObjectSafe(index, ARV_9);
  }

  bool isARV_9(size_t index = 0) {
    try {
      return this->getObject(index, ARV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionMessageLocation(size_t index = 0) {
    try {
      return this->getObject(index, ARV_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Access Restriction Instance Identifier
   */

  EI* getARV_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARV_10);
  }

  EI* getAccessRestrictionInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ARV_10);
  }

  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessRestrictionInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ARV */

} /* End of namespace HL7_29 */
#endif /* __ARV_v29_H__ */
