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


#ifndef __DRG_O43_DRG_O43__29_H__
#define __DRG_O43_DRG_O43__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DRG_O43_DRG_O43_DONOR; /* DONOR */
struct DRG_O43_DRG_O43_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DRG_O43_DRG_O43_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DRG_O43_DRG_O43 : public HL7Message {
  DRG_O43_DRG_O43() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DRG_O43_DRG_O43_MSH_1,
    DRG_O43_DRG_O43_SFT_2,
    DRG_O43_DRG_O43_UAC_3,
    DRG_O43_DRG_O43_PD1_6,
    DRG_O43_DRG_O43_PID_7,
    DRG_O43_DRG_O43_PRT_8,
    DRG_O43_DRG_O43_AL1_10,
    DRG_O43_DRG_O43_ARV_11,
    DRG_O43_DRG_O43_NTE_12,
    DRG_O43_DRG_O43_NTE_13,
    DRG_O43_DRG_O43_PRT_14,
    DRG_O43_DRG_O43_PV1_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "DRG_O43_DRG_O43"; }
  DRG_O43_DRG_O43* create() const { return new DRG_O43_DRG_O43(); }

 private:
  /* Initialize object */
  void init() {
    setName("DRG_O43_DRG_O43");
    addObject<MSH>(DRG_O43_DRG_O43_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(DRG_O43_DRG_O43_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DRG_O43_DRG_O43_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<PD1>(DRG_O43_DRG_O43_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<PID>(DRG_O43_DRG_O43_PID_7, "PID.7", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DRG_O43_DRG_O43_PRT_8, "PRT.8", HL7::optional, HL7::repetition_on);
    addObject<AL1>(DRG_O43_DRG_O43_AL1_10, "AL1.10", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DRG_O43_DRG_O43_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DRG_O43_DRG_O43_NTE_12, "NTE.12", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DRG_O43_DRG_O43_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DRG_O43_DRG_O43_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DRG_O43_DRG_O43_PV1_15, "PV1.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DRG_O43_DRG_O43_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DRG_O43_DRG_O43_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DRG_O43_DRG_O43_UAC_3);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DRG_O43_DRG_O43_PD1_6);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DRG_O43_DRG_O43_PID_7);
  }
  PRT* getPRT_8(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRG_O43_DRG_O43_PRT_8);
  }
  AL1* getAL1_10(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DRG_O43_DRG_O43_AL1_10);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DRG_O43_DRG_O43_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_DRG_O43_NTE_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DRG_O43_DRG_O43_NTE_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DRG_O43_DRG_O43_PRT_14);
  }
  PV1* getPV1_15(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DRG_O43_DRG_O43_PV1_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_8(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_PRT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_10(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_AL1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_15(size_t index = 0) {
    try {
      return this->getObject(index, DRG_O43_DRG_O43_PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DRG_O43_DRG_O43_ */
} /* namespace HL7_29 */
#endif /*  __DRG_O43_DRG_O43__29_H__ */
