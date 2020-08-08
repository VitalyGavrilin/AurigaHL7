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


#ifndef __DEO_O45_DEO_O45__29_H__
#define __DEO_O45_DEO_O45__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DEO_O45_DEO_O45_Donor; /* Donor */
struct DEO_O45_DEO_O45_DONATION_ORDER; /* DONATION_ORDER */
struct DEO_O45_DEO_O45_DONATION_OBSERVATION; /* DONATION_OBSERVATION */
struct DEO_O45_DEO_O45_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DEO_O45_DEO_O45_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DEO_O45_DEO_O45 : public HL7Message {
  DEO_O45_DEO_O45() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DEO_O45_DEO_O45_MSH_1,
    DEO_O45_DEO_O45_ARV_2,
    DEO_O45_DEO_O45_SFT_3,
    DEO_O45_DEO_O45_UAC_4,
    DEO_O45_DEO_O45_OBR_9,
    DEO_O45_DEO_O45_PRT_10,
    DEO_O45_DEO_O45_OBX_12,
    DEO_O45_DEO_O45_PRT_13,
    DEO_O45_DEO_O45_ARV_16,
    DEO_O45_DEO_O45_NTE_17,
    DEO_O45_DEO_O45_PID_18,
    DEO_O45_DEO_O45_PRT_19,
    DEO_O45_DEO_O45_OBX_20,
    DEO_O45_DEO_O45_PRT_21,
    DEO_O45_DEO_O45_OBX_22,
    DEO_O45_DEO_O45_PRT_23,
    DEO_O45_DEO_O45_NTE_24,
    DEO_O45_DEO_O45_PRT_25,
    DEO_O45_DEO_O45_PV1_26,
    FIELD_ID_MAX
  };

  const char* className() const { return "DEO_O45_DEO_O45"; }
  DEO_O45_DEO_O45* create() const { return new DEO_O45_DEO_O45(); }

 private:
  /* Initialize object */
  void init() {
    setName("DEO_O45_DEO_O45");
    addObject<MSH>(DEO_O45_DEO_O45_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DEO_O45_DEO_O45_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DEO_O45_DEO_O45_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DEO_O45_DEO_O45_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<OBR>(DEO_O45_DEO_O45_OBR_9, "OBR.9", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_10, "PRT.10", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEO_O45_DEO_O45_OBX_12, "OBX.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DEO_O45_DEO_O45_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DEO_O45_DEO_O45_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<PID>(DEO_O45_DEO_O45_PID_18, "PID.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEO_O45_DEO_O45_OBX_20, "OBX.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEO_O45_DEO_O45_OBX_22, "OBX.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_23, "PRT.23", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DEO_O45_DEO_O45_NTE_24, "NTE.24", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DEO_O45_DEO_O45_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DEO_O45_DEO_O45_PV1_26, "PV1.26", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DEO_O45_DEO_O45_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEO_O45_DEO_O45_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DEO_O45_DEO_O45_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DEO_O45_DEO_O45_UAC_4);
  }
  OBR* getOBR_9(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DEO_O45_DEO_O45_OBR_9);
  }
  PRT* getPRT_10(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_10);
  }
  OBX* getOBX_12(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEO_O45_DEO_O45_OBX_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_13);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEO_O45_DEO_O45_ARV_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEO_O45_DEO_O45_NTE_17);
  }
  PID* getPID_18(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DEO_O45_DEO_O45_PID_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_19);
  }
  OBX* getOBX_20(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEO_O45_DEO_O45_OBX_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_21);
  }
  OBX* getOBX_22(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEO_O45_DEO_O45_OBX_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_23);
  }
  NTE* getNTE_24(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEO_O45_DEO_O45_NTE_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEO_O45_DEO_O45_PRT_25);
  }
  PV1* getPV1_26(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DEO_O45_DEO_O45_PV1_26);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_9(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_OBR_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_10(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_18(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PID_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_20(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_OBX_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_22(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_OBX_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_24(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_NTE_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_26(size_t index = 0) {
    try {
      return this->getObject(index, DEO_O45_DEO_O45_PV1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DEO_O45_DEO_O45_ */
} /* namespace HL7_29 */
#endif /*  __DEO_O45_DEO_O45__29_H__ */
