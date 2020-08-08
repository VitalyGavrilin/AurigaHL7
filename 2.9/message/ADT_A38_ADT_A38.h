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


#ifndef __ADT_A38_ADT_A38__29_H__
#define __ADT_A38_ADT_A38__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A38_ADT_A38_OBSERVATION; /* OBSERVATION */

/*  */
struct ADT_A38_ADT_A38 : public HL7Message {
  ADT_A38_ADT_A38() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A38_ADT_A38_MSH_1,
    ADT_A38_ADT_A38_ARV_2,
    ADT_A38_ADT_A38_SFT_3,
    ADT_A38_ADT_A38_UAC_4,
    ADT_A38_ADT_A38_EVN_5,
    ADT_A38_ADT_A38_PID_6,
    ADT_A38_ADT_A38_PD1_7,
    ADT_A38_ADT_A38_PV1_8,
    ADT_A38_ADT_A38_PV2_9,
    ADT_A38_ADT_A38_DB1_10,
    ADT_A38_ADT_A38_DG1_12,
    ADT_A38_ADT_A38_DRG_13,
    ADT_A38_ADT_A38_OBX_14,
    ADT_A38_ADT_A38_PRT_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A38_ADT_A38"; }
  ADT_A38_ADT_A38* create() const { return new ADT_A38_ADT_A38(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A38_ADT_A38");
    addObject<MSH>(ADT_A38_ADT_A38_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A38_ADT_A38_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A38_ADT_A38_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A38_ADT_A38_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A38_ADT_A38_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A38_ADT_A38_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A38_ADT_A38_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A38_ADT_A38_PV1_8, "PV1.8", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A38_ADT_A38_PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A38_ADT_A38_DB1_10, "DB1.10", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADT_A38_ADT_A38_DG1_12, "DG1.12", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADT_A38_ADT_A38_DRG_13, "DRG.13", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ADT_A38_ADT_A38_OBX_14, "OBX.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A38_ADT_A38_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A38_ADT_A38_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A38_ADT_A38_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A38_ADT_A38_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A38_ADT_A38_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A38_ADT_A38_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A38_ADT_A38_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A38_ADT_A38_PD1_7);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A38_ADT_A38_PV1_8);
  }
  PV2* getPV2_9(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A38_ADT_A38_PV2_9);
  }
  DB1* getDB1_10(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A38_ADT_A38_DB1_10);
  }
  DG1* getDG1_12(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADT_A38_ADT_A38_DG1_12);
  }
  DRG* getDRG_13(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADT_A38_ADT_A38_DRG_13);
  }
  OBX* getOBX_14(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A38_ADT_A38_OBX_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A38_ADT_A38_PRT_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_DB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_DG1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_DRG_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A38_ADT_A38_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A38_ADT_A38_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A38_ADT_A38__29_H__ */
