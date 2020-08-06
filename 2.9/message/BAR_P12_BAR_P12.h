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


#ifndef __BAR_P12_BAR_P12__29_H__
#define __BAR_P12_BAR_P12__29_H__

#include "../../common/Util.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P12_BAR_P12_DIAGNOSIS; /* DIAGNOSIS */
struct BAR_P12_BAR_P12_PROCEDURE; /* PROCEDURE */

/*  */
struct BAR_P12_BAR_P12 : public HL7Message {
  BAR_P12_BAR_P12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P12_BAR_P12_MSH_1,
    BAR_P12_BAR_P12_SFT_2,
    BAR_P12_BAR_P12_UAC_3,
    BAR_P12_BAR_P12_EVN_4,
    BAR_P12_BAR_P12_PID_5,
    BAR_P12_BAR_P12_PRT_6,
    BAR_P12_BAR_P12_PV1_7,
    BAR_P12_BAR_P12_DRG_9,
    BAR_P12_BAR_P12_OBX_11,
    BAR_P12_BAR_P12_PRT_12,
    BAR_P12_BAR_P12_DG1_13,
    BAR_P12_BAR_P12_PR1_14,
    BAR_P12_BAR_P12_PRT_15,
    BAR_P12_BAR_P12_ROL_16,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P12_BAR_P12"; }
  BAR_P12_BAR_P12* create() const { return new BAR_P12_BAR_P12(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P12_BAR_P12");
    addObject<MSH>(BAR_P12_BAR_P12_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(BAR_P12_BAR_P12_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BAR_P12_BAR_P12_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P12_BAR_P12_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P12_BAR_P12_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P12_BAR_P12_PRT_6, "PRT.6", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BAR_P12_BAR_P12_PV1_7, "PV1.7", HL7::initialized, HL7::repetition_off);
    addObject<DRG>(BAR_P12_BAR_P12_DRG_9, "DRG.9", HL7::optional, HL7::repetition_off);
    addObject<OBX>(BAR_P12_BAR_P12_OBX_11, "OBX.11", HL7::optional, HL7::repetition_off);
    addObject<PRT>(BAR_P12_BAR_P12_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<DG1>(BAR_P12_BAR_P12_DG1_13, "DG1.13", HL7::initialized, HL7::repetition_off);
    addObject<PR1>(BAR_P12_BAR_P12_PR1_14, "PR1.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P12_BAR_P12_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<ROL>(BAR_P12_BAR_P12_ROL_16, "ROL.16", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P12_BAR_P12_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BAR_P12_BAR_P12_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P12_BAR_P12_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P12_BAR_P12_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P12_BAR_P12_PID_5);
  }
  PRT* getPRT_6(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P12_BAR_P12_PRT_6);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P12_BAR_P12_PV1_7);
  }
  DRG* getDRG_9(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, BAR_P12_BAR_P12_DRG_9);
  }
  OBX* getOBX_11(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, BAR_P12_BAR_P12_OBX_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P12_BAR_P12_PRT_12);
  }
  DG1* getDG1_13(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P12_BAR_P12_DG1_13);
  }
  PR1* getPR1_14(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P12_BAR_P12_PR1_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P12_BAR_P12_PRT_15);
  }
  ROL* getROL_16(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, BAR_P12_BAR_P12_ROL_16);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_9(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_DRG_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_11(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_OBX_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_DG1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_14(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PR1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_16(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P12_BAR_P12_ROL_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P12_BAR_P12_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P12_BAR_P12__29_H__ */
