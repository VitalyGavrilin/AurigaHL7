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


#ifndef __DEL_O46_DEL_O46__29_H__
#define __DEL_O46_DEL_O46__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/DON.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DEL_O46_DEL_O46_DONOR; /* DONOR */
struct DEL_O46_DEL_O46_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DEL_O46_DEL_O46_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DEL_O46_DEL_O46 : public HL7Message {
  DEL_O46_DEL_O46() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DEL_O46_DEL_O46_MSH_1,
    DEL_O46_DEL_O46_ARV_2,
    DEL_O46_DEL_O46_SFT_3,
    DEL_O46_DEL_O46_UAC_4,
    DEL_O46_DEL_O46_DON_6,
    DEL_O46_DEL_O46_NTE_7,
    DEL_O46_DEL_O46_AL1_10,
    DEL_O46_DEL_O46_ARV_11,
    DEL_O46_DEL_O46_NTE_12,
    DEL_O46_DEL_O46_PD1_13,
    DEL_O46_DEL_O46_PID_14,
    DEL_O46_DEL_O46_PRT_15,
    DEL_O46_DEL_O46_OBX_16,
    DEL_O46_DEL_O46_PRT_17,
    DEL_O46_DEL_O46_OBX_18,
    DEL_O46_DEL_O46_PRT_19,
    DEL_O46_DEL_O46_NTE_20,
    DEL_O46_DEL_O46_PRT_21,
    DEL_O46_DEL_O46_PV1_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "DEL_O46_DEL_O46"; }
  DEL_O46_DEL_O46* create() const { return new DEL_O46_DEL_O46(); }

 private:
  /* Initialize object */
  void init() {
    setName("DEL_O46_DEL_O46");
    addObject<MSH>(DEL_O46_DEL_O46_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DEL_O46_DEL_O46_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DEL_O46_DEL_O46_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DEL_O46_DEL_O46_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<DON>(DEL_O46_DEL_O46_DON_6, "DON.6", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(DEL_O46_DEL_O46_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<AL1>(DEL_O46_DEL_O46_AL1_10, "AL1.10", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DEL_O46_DEL_O46_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DEL_O46_DEL_O46_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DEL_O46_DEL_O46_PD1_13, "PD1.13", HL7::optional, HL7::repetition_off);
    addObject<PID>(DEL_O46_DEL_O46_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEL_O46_DEL_O46_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEL_O46_DEL_O46_OBX_16, "OBX.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEL_O46_DEL_O46_PRT_17, "PRT.17", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DEL_O46_DEL_O46_OBX_18, "OBX.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DEL_O46_DEL_O46_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DEL_O46_DEL_O46_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DEL_O46_DEL_O46_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DEL_O46_DEL_O46_PV1_22, "PV1.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DEL_O46_DEL_O46_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEL_O46_DEL_O46_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DEL_O46_DEL_O46_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DEL_O46_DEL_O46_UAC_4);
  }
  DON* getDON_6(size_t index = 0) {
    return (DON*)this->getObjectSafe(index, DEL_O46_DEL_O46_DON_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_DEL_O46_NTE_7);
  }
  AL1* getAL1_10(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DEL_O46_DEL_O46_AL1_10);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DEL_O46_DEL_O46_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_DEL_O46_NTE_12);
  }
  PD1* getPD1_13(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DEL_O46_DEL_O46_PD1_13);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DEL_O46_DEL_O46_PID_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEL_O46_DEL_O46_PRT_15);
  }
  OBX* getOBX_16(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEL_O46_DEL_O46_OBX_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEL_O46_DEL_O46_PRT_17);
  }
  OBX* getOBX_18(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DEL_O46_DEL_O46_OBX_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEL_O46_DEL_O46_PRT_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DEL_O46_DEL_O46_NTE_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DEL_O46_DEL_O46_PRT_21);
  }
  PV1* getPV1_22(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DEL_O46_DEL_O46_PV1_22);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDON_6(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_DON_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_10(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_AL1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_16(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_22(size_t index = 0) {
    try {
      return this->getObject(index, DEL_O46_DEL_O46_PV1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DEL_O46_DEL_O46_ */
} /* namespace HL7_29 */
#endif /*  __DEL_O46_DEL_O46__29_H__ */
