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


#ifndef __BHS_v29_H__
#define __BHS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/HD.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* BHS */
class BHS : public HL7Segment {
 public:
  BHS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BHS_1,
    BHS_2,
    BHS_3,
    BHS_4,
    BHS_5,
    BHS_6,
    BHS_7,
    BHS_8,
    BHS_9,
    BHS_10,
    BHS_11,
    BHS_12,
    BHS_13,
    BHS_14,
    BHS_15,
    BHS_16,
    BHS_17,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BHS"; }
  BHS* create() const { return new BHS(); }

 private:
  void init() {
    setName("BHS");
    /* Init members */
    addObject<ST>(BHS_1, "BHS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_2, "BHS.2", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_3, "BHS.3", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_4, "BHS.4", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_5, "BHS.5", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_6, "BHS.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(BHS_7, "BHS.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_8, "BHS.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_9, "BHS.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_10, "BHS.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_11, "BHS.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_12, "BHS.12", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_13, "BHS.13", HL7::initialized, HL7::repetition_off);
    addObject<HD>(BHS_14, "BHS.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BHS_15, "BHS.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(BHS_16, "BHS.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_17, "BHS.17", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Batch Field Separator
   */

  ST* getBHS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_1);
  }

  ST* getBatchFieldSeparator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_1);
  }

  bool isBHS_1(size_t index = 0) {
    try {
      return this->getObject(index, BHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchFieldSeparator(size_t index = 0) {
    try {
      return this->getObject(index, BHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Encoding Characters
   */

  ST* getBHS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_2);
  }

  ST* getBatchEncodingCharacters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_2);
  }

  bool isBHS_2(size_t index = 0) {
    try {
      return this->getObject(index, BHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchEncodingCharacters(size_t index = 0) {
    try {
      return this->getObject(index, BHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Sending Application
   */

  HD* getBHS_3(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_3);
  }

  HD* getBatchSendingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_3);
  }

  bool isBHS_3(size_t index = 0) {
    try {
      return this->getObject(index, BHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSendingApplication(size_t index = 0) {
    try {
      return this->getObject(index, BHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Sending Facility
   */

  HD* getBHS_4(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_4);
  }

  HD* getBatchSendingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_4);
  }

  bool isBHS_4(size_t index = 0) {
    try {
      return this->getObject(index, BHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSendingFacility(size_t index = 0) {
    try {
      return this->getObject(index, BHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Receiving Application
   */

  HD* getBHS_5(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_5);
  }

  HD* getBatchReceivingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_5);
  }

  bool isBHS_5(size_t index = 0) {
    try {
      return this->getObject(index, BHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchReceivingApplication(size_t index = 0) {
    try {
      return this->getObject(index, BHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Receiving Facility
   */

  HD* getBHS_6(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_6);
  }

  HD* getBatchReceivingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_6);
  }

  bool isBHS_6(size_t index = 0) {
    try {
      return this->getObject(index, BHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchReceivingFacility(size_t index = 0) {
    try {
      return this->getObject(index, BHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Creation Date/Time
   */

  DTM* getBHS_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BHS_7);
  }

  DTM* getBatchCreationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, BHS_7);
  }

  bool isBHS_7(size_t index = 0) {
    try {
      return this->getObject(index, BHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchCreationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, BHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Security
   */

  ST* getBHS_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_8);
  }

  ST* getBatchSecurity(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_8);
  }

  bool isBHS_8(size_t index = 0) {
    try {
      return this->getObject(index, BHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSecurity(size_t index = 0) {
    try {
      return this->getObject(index, BHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Name/ID/Type
   */

  ST* getBHS_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_9);
  }

  ST* getBatchNameIDType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_9);
  }

  bool isBHS_9(size_t index = 0) {
    try {
      return this->getObject(index, BHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchNameIDType(size_t index = 0) {
    try {
      return this->getObject(index, BHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Comment
   */

  ST* getBHS_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_10);
  }

  ST* getBatchComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_10);
  }

  bool isBHS_10(size_t index = 0) {
    try {
      return this->getObject(index, BHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchComment(size_t index = 0) {
    try {
      return this->getObject(index, BHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Control ID
   */

  ST* getBHS_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_11);
  }

  ST* getBatchControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_11);
  }

  bool isBHS_11(size_t index = 0) {
    try {
      return this->getObject(index, BHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchControlID(size_t index = 0) {
    try {
      return this->getObject(index, BHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference Batch Control ID
   */

  ST* getBHS_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_12);
  }

  ST* getReferenceBatchControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_12);
  }

  bool isBHS_12(size_t index = 0) {
    try {
      return this->getObject(index, BHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceBatchControlID(size_t index = 0) {
    try {
      return this->getObject(index, BHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Sending Network Address
   */

  HD* getBHS_13(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_13);
  }

  HD* getBatchSendingNetworkAddress(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_13);
  }

  bool isBHS_13(size_t index = 0) {
    try {
      return this->getObject(index, BHS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSendingNetworkAddress(size_t index = 0) {
    try {
      return this->getObject(index, BHS_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Receiving Network Address
   */

  HD* getBHS_14(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_14);
  }

  HD* getBatchReceivingNetworkAddress(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, BHS_14);
  }

  bool isBHS_14(size_t index = 0) {
    try {
      return this->getObject(index, BHS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchReceivingNetworkAddress(size_t index = 0) {
    try {
      return this->getObject(index, BHS_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Classification Tag
   */

  CWE* getBHS_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BHS_15);
  }

  CWE* getSecurityClassificationTag(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BHS_15);
  }

  bool isBHS_15(size_t index = 0) {
    try {
      return this->getObject(index, BHS_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityClassificationTag(size_t index = 0) {
    try {
      return this->getObject(index, BHS_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security Handling Instructions
   */

  CWE* getBHS_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BHS_16);
  }

  CWE* getSecurityHandlingInstructions(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, BHS_16);
  }

  bool isBHS_16(size_t index = 0) {
    try {
      return this->getObject(index, BHS_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurityHandlingInstructions(size_t index = 0) {
    try {
      return this->getObject(index, BHS_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Access Restriction Instructions
   */

  ST* getBHS_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_17);
  }

  ST* getSpecialAccessRestrictionInstructions(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_17);
  }

  bool isBHS_17(size_t index = 0) {
    try {
      return this->getObject(index, BHS_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialAccessRestrictionInstructions(size_t index = 0) {
    try {
      return this->getObject(index, BHS_17) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BHS */

} /* End of namespace HL7_29 */
#endif /* __BHS_v29_H__ */
