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


#ifndef __BAR_P10_BAR_P10__29_H__
#define __BAR_P10_BAR_P10__29_H__

#include "../../common/Util.h"
#include "../segment/DG1.h"
#include "../segment/EVN.h"
#include "../segment/GP1.h"
#include "../segment/GP2.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct BAR_P10_BAR_P10_DIAGNOSIS; /* DIAGNOSIS */
struct BAR_P10_BAR_P10_PROCEDURE; /* PROCEDURE */

/*  */
struct BAR_P10_BAR_P10 : public HL7Message {
  BAR_P10_BAR_P10() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    BAR_P10_BAR_P10_MSH_1,
    BAR_P10_BAR_P10_SFT_2,
    BAR_P10_BAR_P10_UAC_3,
    BAR_P10_BAR_P10_EVN_4,
    BAR_P10_BAR_P10_PID_5,
    BAR_P10_BAR_P10_PRT_6,
    BAR_P10_BAR_P10_PV1_7,
    BAR_P10_BAR_P10_GP1_9,
    BAR_P10_BAR_P10_DG1_11,
    BAR_P10_BAR_P10_GP2_12,
    BAR_P10_BAR_P10_PR1_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "BAR_P10_BAR_P10"; }
  BAR_P10_BAR_P10* create() const { return new BAR_P10_BAR_P10(); }

 private:
  /* Initialize object */
  void init() {
    setName("BAR_P10_BAR_P10");
    addObject<MSH>(BAR_P10_BAR_P10_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(BAR_P10_BAR_P10_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(BAR_P10_BAR_P10_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EVN>(BAR_P10_BAR_P10_EVN_4, "EVN.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(BAR_P10_BAR_P10_PID_5, "PID.5", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(BAR_P10_BAR_P10_PRT_6, "PRT.6", HL7::optional, HL7::repetition_on);
    addObject<PV1>(BAR_P10_BAR_P10_PV1_7, "PV1.7", HL7::initialized, HL7::repetition_off);
    addObject<GP1>(BAR_P10_BAR_P10_GP1_9, "GP1.9", HL7::initialized, HL7::repetition_off);
    addObject<DG1>(BAR_P10_BAR_P10_DG1_11, "DG1.11", HL7::initialized, HL7::repetition_off);
    addObject<GP2>(BAR_P10_BAR_P10_GP2_12, "GP2.12", HL7::optional, HL7::repetition_off);
    addObject<PR1>(BAR_P10_BAR_P10_PR1_13, "PR1.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, BAR_P10_BAR_P10_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, BAR_P10_BAR_P10_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, BAR_P10_BAR_P10_UAC_3);
  }
  EVN* getEVN_4(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, BAR_P10_BAR_P10_EVN_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, BAR_P10_BAR_P10_PID_5);
  }
  PRT* getPRT_6(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, BAR_P10_BAR_P10_PRT_6);
  }
  PV1* getPV1_7(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, BAR_P10_BAR_P10_PV1_7);
  }
  GP1* getGP1_9(size_t index = 0) {
    return (GP1*)this->getObjectSafe(index, BAR_P10_BAR_P10_GP1_9);
  }
  DG1* getDG1_11(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, BAR_P10_BAR_P10_DG1_11);
  }
  GP2* getGP2_12(size_t index = 0) {
    return (GP2*)this->getObjectSafe(index, BAR_P10_BAR_P10_GP2_12);
  }
  PR1* getPR1_13(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, BAR_P10_BAR_P10_PR1_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_4(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_EVN_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_6(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_PRT_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_7(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_PV1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGP1_9(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_GP1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_11(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGP2_12(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_GP2_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_13(size_t index = 0) {
    try {
      return this->getObject(index, BAR_P10_BAR_P10_PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* BAR_P10_BAR_P10_ */
} /* namespace HL7_29 */
#endif /*  __BAR_P10_BAR_P10__29_H__ */
