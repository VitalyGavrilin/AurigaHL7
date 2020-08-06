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


#ifndef __DRC_O47_DRC_O47__29_H__
#define __DRC_O47_DRC_O47__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DRC_O47_DRC_O47_DONOR; /* DONOR */
struct DRC_O47_DRC_O47_DONATION_ORDER; /* DONATION_ORDER */
struct DRC_O47_DRC_O47_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DRC_O47_DRC_O47_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DRC_O47_DRC_O47 : public HL7Message {
  DRC_O47_DRC_O47() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DRC_O47_DRC_O47_MSH_1,
    DRC_O47_DRC_O47_ARV_2,
    DRC_O47_DRC_O47_SFT_3,
    DRC_O47_DRC_O47_UAC_4,
    DRC_O47_DRC_O47_NTE_7,
    DRC_O47_DRC_O47_OBR_8,
    DRC_O47_DRC_O47_PRT_9,
    DRC_O47_DRC_O47_AL1_12,
    DRC_O47_DRC_O47_ARV_13,
    DRC_O47_DRC_O47_NTE_14,
    DRC_O47_DRC_O47_PD1_15,
    DRC_O47_DRC_O47_PID_16,
    DRC_O47_DRC_O47_PRT_17,
    DRC_O47_DRC_O47_OBX_18,
    DRC_O47_DRC_O47_PRT_19,
    DRC_O47_DRC_O47_OBX_20,
    DRC_O47_DRC_O47_PRT_21,
    DRC_O47_DRC_O47_NTE_22,
    DRC_O47_DRC_O47_PRT_23,
    DRC_O47_DRC_O47_PV1_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "DRC_O47_DRC_O47"; }
  DRC_O47_DRC_O47* create() const { return new DRC_O47_DRC_O47(); }

 private:
  /* Initialize object */
  void init() {
    setName("DRC_O47_DRC_O47");
    addObject<MSH>(DRC_O47_DRC_O47_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DRC_O47_DRC_O47_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DRC_O47_DRC_O47_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DRC_O47_DRC_O47_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<NTE>(DRC_O47_DRC_O47_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DRC_O47_DRC_O47_OBR_8, "OBR.8", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DRC_O47_DRC_O47_PRT_9, "PRT.9", HL7::optional, HL7::repetition_on);
    addObject<AL1>(DRC_O47_DRC_O47_AL1_12, "AL1.12", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DRC_O47_DRC_O47_ARV_13, "ARV.13", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DRC_O47_DRC_O47_NTE_14, "NTE.14", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DRC_O47_DRC_O47_PD1_15, "PD1.15", HL7::optional, HL7::repetition_off);
    addObject<PID>(DRC_O47_DRC_O47_PID_16, "PID.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DRC_O47_DRC_O47_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DRC_O47_DRC_O47_OBX_18, "OBX.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DRC_O47_DRC_O47_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DRC_O47_DRC_O47_OBX_20, "OBX.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DRC_O47_DRC_O47_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DRC_O47_DRC_O47_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DRC_O47_DRC_O47_PRT_23, "PRT.23", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DRC_O47_DRC_O47_PV1_24, "PV1.24", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DRC_O47_DRC_O47_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DRC_O47_DRC_O47_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DRC_O47_DRC_O47_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DRC_O47_DRC_O47_UAC_4);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRC_O47_DRC_O47_NTE_7);
  }
  OBR* getOBR_8(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DRC_O47_DRC_O47_OBR_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRC_O47_DRC_O47_PRT_9);
  }
  AL1* getAL1_12(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DRC_O47_DRC_O47_AL1_12);
  }
  ARV* getARV_13(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DRC_O47_DRC_O47_ARV_13);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRC_O47_DRC_O47_NTE_14);
  }
  PD1* getPD1_15(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DRC_O47_DRC_O47_PD1_15);
  }
  PID* getPID_16(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DRC_O47_DRC_O47_PID_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRC_O47_DRC_O47_PRT_17);
  }
  OBX* getOBX_18(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DRC_O47_DRC_O47_OBX_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRC_O47_DRC_O47_PRT_19);
  }
  OBX* getOBX_20(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DRC_O47_DRC_O47_OBX_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRC_O47_DRC_O47_PRT_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRC_O47_DRC_O47_NTE_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRC_O47_DRC_O47_PRT_23);
  }
  PV1* getPV1_24(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DRC_O47_DRC_O47_PV1_24);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_8(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_OBR_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_12(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_AL1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_13(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_ARV_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_15(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_16(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PID_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_20(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_OBX_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_24(size_t index = 0) {
    try {
      return this->getObject(index, DRC_O47_DRC_O47_PV1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DRC_O47_DRC_O47_ */
} /* namespace HL7_29 */
#endif /*  __DRC_O47_DRC_O47__29_H__ */
