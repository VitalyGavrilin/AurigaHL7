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


#ifndef __ROL_v29_H__
#define __ROL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/PL.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* ROL */
class ROL : public HL7Segment {
 public:
  ROL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ROL_1,
    ROL_2,
    ROL_3,
    ROL_4,
    ROL_5,
    ROL_6,
    ROL_7,
    ROL_8,
    ROL_9,
    ROL_10,
    ROL_11,
    ROL_12,
    ROL_13,
    ROL_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ROL"; }
  ROL* create() const { return new ROL(); }

 private:
  void init() {
    setName("ROL");
    /* Init members */
    addObject<EI>(ROL_1, "ROL.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ROL_2, "ROL.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ROL_3, "ROL.3", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ROL_4, "ROL.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ROL_5, "ROL.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ROL_6, "ROL.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ROL_7, "ROL.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ROL_8, "ROL.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ROL_9, "ROL.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ROL_10, "ROL.10", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(ROL_11, "ROL.11", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(ROL_12, "ROL.12", HL7::initialized, HL7::repetition_off);
    addObject<PL>(ROL_13, "ROL.13", HL7::initialized, HL7::repetition_off);
    addObject<XON>(ROL_14, "ROL.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Role Instance ID
   */

  EI* getROL_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ROL_1);
  }

  EI* getRoleInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ROL_1);
  }

  bool isROL_1(size_t index = 0) {
    try {
      return this->getObject(index, ROL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, ROL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getROL_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ROL_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ROL_2);
  }

  bool isROL_2(size_t index = 0) {
    try {
      return this->getObject(index, ROL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, ROL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role-ROL
   */

  CWE* getROL_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_3);
  }

  CWE* getRoleROL(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_3);
  }

  bool isROL_3(size_t index = 0) {
    try {
      return this->getObject(index, ROL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleROL(size_t index = 0) {
    try {
      return this->getObject(index, ROL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Person
   */

  XCN* getROL_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ROL_4);
  }

  XCN* getRolePerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ROL_4);
  }

  bool isROL_4(size_t index = 0) {
    try {
      return this->getObject(index, ROL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRolePerson(size_t index = 0) {
    try {
      return this->getObject(index, ROL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Begin Date/Time
   */

  DTM* getROL_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ROL_5);
  }

  DTM* getRoleBeginDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ROL_5);
  }

  bool isROL_5(size_t index = 0) {
    try {
      return this->getObject(index, ROL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleBeginDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ROL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role End Date/Time
   */

  DTM* getROL_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ROL_6);
  }

  DTM* getRoleEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ROL_6);
  }

  bool isROL_6(size_t index = 0) {
    try {
      return this->getObject(index, ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ROL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Duration
   */

  CWE* getROL_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_7);
  }

  CWE* getRoleDuration(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_7);
  }

  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleDuration(size_t index = 0) {
    try {
      return this->getObject(index, ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Role Action Reason
   */

  CWE* getROL_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_8);
  }

  CWE* getRoleActionReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_8);
  }

  bool isROL_8(size_t index = 0) {
    try {
      return this->getObject(index, ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoleActionReason(size_t index = 0) {
    try {
      return this->getObject(index, ROL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Type
   */

  CWE* getROL_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_9);
  }

  CWE* getProviderType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_9);
  }

  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderType(size_t index = 0) {
    try {
      return this->getObject(index, ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization Unit Type
   */

  CWE* getROL_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_10);
  }

  CWE* getOrganizationUnitType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ROL_10);
  }

  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganizationUnitType(size_t index = 0) {
    try {
      return this->getObject(index, ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Office/Home Address/Birthplace
   */

  XAD* getROL_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ROL_11);
  }

  XAD* getOfficeHomeAddressBirthplace(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ROL_11);
  }

  bool isROL_11(size_t index = 0) {
    try {
      return this->getObject(index, ROL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOfficeHomeAddressBirthplace(size_t index = 0) {
    try {
      return this->getObject(index, ROL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone
   */

  XTN* getROL_12(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ROL_12);
  }

  XTN* getPhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, ROL_12);
  }

  bool isROL_12(size_t index = 0) {
    try {
      return this->getObject(index, ROL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhone(size_t index = 0) {
    try {
      return this->getObject(index, ROL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Person's Location
   */

  PL* getROL_13(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ROL_13);
  }

  PL* getPersonsLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, ROL_13);
  }

  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPersonsLocation(size_t index = 0) {
    try {
      return this->getObject(index, ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organization
   */

  XON* getROL_14(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ROL_14);
  }

  XON* getOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ROL_14);
  }

  bool isROL_14(size_t index = 0) {
    try {
      return this->getObject(index, ROL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganization(size_t index = 0) {
    try {
      return this->getObject(index, ROL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ROL */

} /* End of namespace HL7_29 */
#endif /* __ROL_v29_H__ */
