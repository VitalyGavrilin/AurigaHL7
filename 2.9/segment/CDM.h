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


#ifndef __CDM_v29_H__
#define __CDM_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* CDM */
class CDM : public HL7Segment {
 public:
  CDM() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CDM_1,
    CDM_2,
    CDM_3,
    CDM_4,
    CDM_5,
    CDM_6,
    CDM_7,
    CDM_8,
    CDM_9,
    CDM_10,
    CDM_11,
    CDM_12,
    CDM_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CDM"; }
  CDM* create() const { return new CDM(); }

 private:
  void init() {
    setName("CDM");
    /* Init members */
    addObject<CWE>(CDM_1, "CDM.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CDM_2, "CDM.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CDM_3, "CDM.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CDM_4, "CDM.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CDM_5, "CDM.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CDM_6, "CDM.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(CDM_7, "CDM.7", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CDM_8, "CDM.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CDM_9, "CDM.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CDM_10, "CDM.10", HL7::initialized, HL7::repetition_off);
    addObject<CX>(CDM_11, "CDM.11", HL7::initialized, HL7::repetition_off);
    addObject<XON>(CDM_12, "CDM.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CDM_13, "CDM.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Primary Key Value - CDM
   */

  CWE* getCDM_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_1);
  }

  CWE* getPrimaryKeyValueCDM(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_1);
  }

  bool isCDM_1(size_t index = 0) {
    try {
      return this->getObject(index, CDM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryKeyValueCDM(size_t index = 0) {
    try {
      return this->getObject(index, CDM_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Code Alias
   */

  CWE* getCDM_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_2);
  }

  CWE* getChargeCodeAlias(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_2);
  }

  bool isCDM_2(size_t index = 0) {
    try {
      return this->getObject(index, CDM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeCodeAlias(size_t index = 0) {
    try {
      return this->getObject(index, CDM_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Description Short
   */

  ST* getCDM_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CDM_3);
  }

  ST* getChargeDescriptionShort(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CDM_3);
  }

  bool isCDM_3(size_t index = 0) {
    try {
      return this->getObject(index, CDM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeDescriptionShort(size_t index = 0) {
    try {
      return this->getObject(index, CDM_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge Description Long
   */

  ST* getCDM_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CDM_4);
  }

  ST* getChargeDescriptionLong(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CDM_4);
  }

  bool isCDM_4(size_t index = 0) {
    try {
      return this->getObject(index, CDM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargeDescriptionLong(size_t index = 0) {
    try {
      return this->getObject(index, CDM_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description Override Indicator
   */

  CWE* getCDM_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_5);
  }

  CWE* getDescriptionOverrideIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_5);
  }

  bool isCDM_5(size_t index = 0) {
    try {
      return this->getObject(index, CDM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionOverrideIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CDM_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Exploding Charges
   */

  CWE* getCDM_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_6);
  }

  CWE* getExplodingCharges(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_6);
  }

  bool isCDM_6(size_t index = 0) {
    try {
      return this->getObject(index, CDM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExplodingCharges(size_t index = 0) {
    try {
      return this->getObject(index, CDM_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getCDM_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CDM_7);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, CDM_7);
  }

  bool isCDM_7(size_t index = 0) {
    try {
      return this->getObject(index, CDM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, CDM_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Active/Inactive Flag
   */

  ID* getCDM_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDM_8);
  }

  ID* getActiveInactiveFlag(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDM_8);
  }

  bool isCDM_8(size_t index = 0) {
    try {
      return this->getObject(index, CDM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActiveInactiveFlag(size_t index = 0) {
    try {
      return this->getObject(index, CDM_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Number
   */

  CWE* getCDM_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_9);
  }

  CWE* getInventoryNumber(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CDM_9);
  }

  bool isCDM_9(size_t index = 0) {
    try {
      return this->getObject(index, CDM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryNumber(size_t index = 0) {
    try {
      return this->getObject(index, CDM_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Load
   */

  NM* getCDM_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CDM_10);
  }

  NM* getResourceLoad(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CDM_10);
  }

  bool isCDM_10(size_t index = 0) {
    try {
      return this->getObject(index, CDM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceLoad(size_t index = 0) {
    try {
      return this->getObject(index, CDM_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Number
   */

  CX* getCDM_11(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CDM_11);
  }

  CX* getContractNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, CDM_11);
  }

  bool isCDM_11(size_t index = 0) {
    try {
      return this->getObject(index, CDM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractNumber(size_t index = 0) {
    try {
      return this->getObject(index, CDM_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contract Organization
   */

  XON* getCDM_12(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CDM_12);
  }

  XON* getContractOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, CDM_12);
  }

  bool isCDM_12(size_t index = 0) {
    try {
      return this->getObject(index, CDM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContractOrganization(size_t index = 0) {
    try {
      return this->getObject(index, CDM_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Room Fee Indicator
   */

  ID* getCDM_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDM_13);
  }

  ID* getRoomFeeIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, CDM_13);
  }

  bool isCDM_13(size_t index = 0) {
    try {
      return this->getObject(index, CDM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomFeeIndicator(size_t index = 0) {
    try {
      return this->getObject(index, CDM_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CDM */

} /* End of namespace HL7_29 */
#endif /* __CDM_v29_H__ */
