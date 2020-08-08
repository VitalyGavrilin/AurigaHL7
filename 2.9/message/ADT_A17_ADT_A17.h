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


#ifndef __ADT_A17_ADT_A17__29_H__
#define __ADT_A17_ADT_A17__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DB1.h"
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
struct ADT_A17_ADT_A17_OBSERVATION_RESULT_1; /* OBSERVATION_RESULT_1 */
struct ADT_A17_ADT_A17_OBSERVATION_RESULT_2; /* OBSERVATION_RESULT_2 */

/*  */
struct ADT_A17_ADT_A17 : public HL7Message {
  ADT_A17_ADT_A17() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A17_ADT_A17_MSH_1,
    ADT_A17_ADT_A17_ARV_2,
    ADT_A17_ADT_A17_SFT_3,
    ADT_A17_ADT_A17_UAC_4,
    ADT_A17_ADT_A17_EVN_5,
    ADT_A17_ADT_A17_PID_6,
    ADT_A17_ADT_A17_PD1_7,
    ADT_A17_ADT_A17_PV1_8,
    ADT_A17_ADT_A17_PV2_9,
    ADT_A17_ADT_A17_DB1_10,
    ADT_A17_ADT_A17_PID_12,
    ADT_A17_ADT_A17_PD1_13,
    ADT_A17_ADT_A17_PV1_14,
    ADT_A17_ADT_A17_PV2_15,
    ADT_A17_ADT_A17_DB1_16,
    ADT_A17_ADT_A17_OBX_18,
    ADT_A17_ADT_A17_PRT_19,
    ADT_A17_ADT_A17_OBX_20,
    ADT_A17_ADT_A17_PRT_21,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A17_ADT_A17"; }
  ADT_A17_ADT_A17* create() const { return new ADT_A17_ADT_A17(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A17_ADT_A17");
    addObject<MSH>(ADT_A17_ADT_A17_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A17_ADT_A17_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A17_ADT_A17_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A17_ADT_A17_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A17_ADT_A17_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A17_ADT_A17_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A17_ADT_A17_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A17_ADT_A17_PV1_8, "PV1.8", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A17_ADT_A17_PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A17_ADT_A17_DB1_10, "DB1.10", HL7::optional, HL7::repetition_on);
    addObject<PID>(ADT_A17_ADT_A17_PID_12, "PID.12", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A17_ADT_A17_PD1_13, "PD1.13", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A17_ADT_A17_PV1_14, "PV1.14", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A17_ADT_A17_PV2_15, "PV2.15", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A17_ADT_A17_DB1_16, "DB1.16", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A17_ADT_A17_OBX_18, "OBX.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A17_ADT_A17_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A17_ADT_A17_OBX_20, "OBX.20", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A17_ADT_A17_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A17_ADT_A17_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A17_ADT_A17_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A17_ADT_A17_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A17_ADT_A17_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A17_ADT_A17_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A17_ADT_A17_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A17_ADT_A17_PD1_7);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A17_ADT_A17_PV1_8);
  }
  PV2* getPV2_9(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A17_ADT_A17_PV2_9);
  }
  DB1* getDB1_10(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A17_ADT_A17_DB1_10);
  }
  PID* getPID_12(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A17_ADT_A17_PID_12);
  }
  PD1* getPD1_13(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A17_ADT_A17_PD1_13);
  }
  PV1* getPV1_14(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A17_ADT_A17_PV1_14);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A17_ADT_A17_PV2_15);
  }
  DB1* getDB1_16(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A17_ADT_A17_DB1_16);
  }
  OBX* getOBX_18(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A17_ADT_A17_OBX_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A17_ADT_A17_PRT_19);
  }
  OBX* getOBX_20(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A17_ADT_A17_OBX_20);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A17_ADT_A17_PRT_21);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_DB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PID_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_16(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_DB1_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_OBX_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A17_ADT_A17_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A17_ADT_A17_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A17_ADT_A17__29_H__ */
