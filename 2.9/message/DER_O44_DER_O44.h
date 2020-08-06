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


#ifndef __DER_O44_DER_O44__29_H__
#define __DER_O44_DER_O44__29_H__

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
struct DER_O44_DER_O44_DONOR; /* DONOR */
struct DER_O44_DER_O44_DONOR_ORDER; /* DONOR_ORDER */
struct DER_O44_DER_O44_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DER_O44_DER_O44_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DER_O44_DER_O44 : public HL7Message {
  DER_O44_DER_O44() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DER_O44_DER_O44_MSH_1,
    DER_O44_DER_O44_ARV_2,
    DER_O44_DER_O44_SFT_3,
    DER_O44_DER_O44_UAC_4,
    DER_O44_DER_O44_AL1_9,
    DER_O44_DER_O44_ARV_10,
    DER_O44_DER_O44_NTE_11,
    DER_O44_DER_O44_PD1_12,
    DER_O44_DER_O44_PID_13,
    DER_O44_DER_O44_PRT_14,
    DER_O44_DER_O44_OBX_15,
    DER_O44_DER_O44_PRT_16,
    DER_O44_DER_O44_OBX_17,
    DER_O44_DER_O44_PRT_18,
    DER_O44_DER_O44_NTE_19,
    DER_O44_DER_O44_PRT_20,
    DER_O44_DER_O44_PV1_21,
    DER_O44_DER_O44_NTE_22,
    DER_O44_DER_O44_OBR_23,
    DER_O44_DER_O44_PRT_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "DER_O44_DER_O44"; }
  DER_O44_DER_O44* create() const { return new DER_O44_DER_O44(); }

 private:
  /* Initialize object */
  void init() {
    setName("DER_O44_DER_O44");
    addObject<MSH>(DER_O44_DER_O44_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DER_O44_DER_O44_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DER_O44_DER_O44_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DER_O44_DER_O44_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<AL1>(DER_O44_DER_O44_AL1_9, "AL1.9", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DER_O44_DER_O44_ARV_10, "ARV.10", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DER_O44_DER_O44_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DER_O44_DER_O44_PD1_12, "PD1.12", HL7::optional, HL7::repetition_off);
    addObject<PID>(DER_O44_DER_O44_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DER_O44_DER_O44_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DER_O44_DER_O44_OBX_15, "OBX.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DER_O44_DER_O44_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DER_O44_DER_O44_OBX_17, "OBX.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DER_O44_DER_O44_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DER_O44_DER_O44_NTE_19, "NTE.19", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DER_O44_DER_O44_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DER_O44_DER_O44_PV1_21, "PV1.21", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(DER_O44_DER_O44_NTE_22, "NTE.22", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DER_O44_DER_O44_OBR_23, "OBR.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DER_O44_DER_O44_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DER_O44_DER_O44_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DER_O44_DER_O44_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DER_O44_DER_O44_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DER_O44_DER_O44_UAC_4);
  }
  AL1* getAL1_9(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DER_O44_DER_O44_AL1_9);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DER_O44_DER_O44_ARV_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DER_O44_DER_O44_NTE_11);
  }
  PD1* getPD1_12(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DER_O44_DER_O44_PD1_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DER_O44_DER_O44_PID_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DER_O44_DER_O44_PRT_14);
  }
  OBX* getOBX_15(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DER_O44_DER_O44_OBX_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DER_O44_DER_O44_PRT_16);
  }
  OBX* getOBX_17(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DER_O44_DER_O44_OBX_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DER_O44_DER_O44_PRT_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DER_O44_DER_O44_NTE_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DER_O44_DER_O44_PRT_20);
  }
  PV1* getPV1_21(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DER_O44_DER_O44_PV1_21);
  }
  NTE* getNTE_22(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DER_O44_DER_O44_NTE_22);
  }
  OBR* getOBR_23(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DER_O44_DER_O44_OBR_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DER_O44_DER_O44_PRT_24);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_9(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_AL1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_12(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_15(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_OBX_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_17(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_OBX_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_21(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PV1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_22(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_NTE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_23(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, DER_O44_DER_O44_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DER_O44_DER_O44_ */
} /* namespace HL7_29 */
#endif /*  __DER_O44_DER_O44__29_H__ */
