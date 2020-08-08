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


#ifndef __DBU_O42_DBC_O42__29_H__
#define __DBU_O42_DBC_O42__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DBU_O42_DBC_O42_DONOR; /* DONOR */
struct DBU_O42_DBC_O42_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */

/*  */
struct DBU_O42_DBC_O42 : public HL7Message {
  DBU_O42_DBC_O42() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DBU_O42_DBC_O42_MSH_1,
    DBU_O42_DBC_O42_ARV_2,
    DBU_O42_DBC_O42_SFT_3,
    DBU_O42_DBC_O42_UAC_4,
    DBU_O42_DBC_O42_AL1_7,
    DBU_O42_DBC_O42_ARV_8,
    DBU_O42_DBC_O42_NTE_9,
    DBU_O42_DBC_O42_PD1_10,
    DBU_O42_DBC_O42_PID_11,
    DBU_O42_DBC_O42_PRT_12,
    DBU_O42_DBC_O42_OBX_13,
    DBU_O42_DBC_O42_PRT_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "DBU_O42_DBC_O42"; }
  DBU_O42_DBC_O42* create() const { return new DBU_O42_DBC_O42(); }

 private:
  /* Initialize object */
  void init() {
    setName("DBU_O42_DBC_O42");
    addObject<MSH>(DBU_O42_DBC_O42_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DBU_O42_DBC_O42_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DBU_O42_DBC_O42_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DBU_O42_DBC_O42_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<AL1>(DBU_O42_DBC_O42_AL1_7, "AL1.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DBU_O42_DBC_O42_ARV_8, "ARV.8", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DBU_O42_DBC_O42_NTE_9, "NTE.9", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DBU_O42_DBC_O42_PD1_10, "PD1.10", HL7::optional, HL7::repetition_off);
    addObject<PID>(DBU_O42_DBC_O42_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DBU_O42_DBC_O42_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DBU_O42_DBC_O42_OBX_13, "OBX.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DBU_O42_DBC_O42_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DBU_O42_DBC_O42_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DBU_O42_DBC_O42_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DBU_O42_DBC_O42_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DBU_O42_DBC_O42_UAC_4);
  }
  AL1* getAL1_7(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DBU_O42_DBC_O42_AL1_7);
  }
  ARV* getARV_8(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DBU_O42_DBC_O42_ARV_8);
  }
  NTE* getNTE_9(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DBU_O42_DBC_O42_NTE_9);
  }
  PD1* getPD1_10(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DBU_O42_DBC_O42_PD1_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DBU_O42_DBC_O42_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DBU_O42_DBC_O42_PRT_12);
  }
  OBX* getOBX_13(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DBU_O42_DBC_O42_OBX_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DBU_O42_DBC_O42_PRT_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_7(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_AL1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_8(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_ARV_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_9(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_NTE_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_13(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_OBX_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, DBU_O42_DBC_O42_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DBU_O42_DBC_O42_ */
} /* namespace HL7_29 */
#endif /*  __DBU_O42_DBC_O42__29_H__ */
