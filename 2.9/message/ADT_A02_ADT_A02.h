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


#ifndef __ADT_A02_ADT_A02__29_H__
#define __ADT_A02_ADT_A02__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DB1.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/OH1.h"
#include "../segment/OH2.h"
#include "../segment/OH3.h"
#include "../segment/OH4.h"
#include "../segment/PD1.h"
#include "../segment/PDA.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/ROL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct ADT_A02_ADT_A02_OBSERVATION; /* OBSERVATION */

/*  */
struct ADT_A02_ADT_A02 : public HL7Message {
  ADT_A02_ADT_A02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A02_ADT_A02_MSH_1,
    ADT_A02_ADT_A02_ARV_2,
    ADT_A02_ADT_A02_SFT_3,
    ADT_A02_ADT_A02_UAC_4,
    ADT_A02_ADT_A02_EVN_5,
    ADT_A02_ADT_A02_PID_6,
    ADT_A02_ADT_A02_PD1_7,
    ADT_A02_ADT_A02_OH1_8,
    ADT_A02_ADT_A02_OH2_9,
    ADT_A02_ADT_A02_OH3_10,
    ADT_A02_ADT_A02_OH4_11,
    ADT_A02_ADT_A02_ARV_12,
    ADT_A02_ADT_A02_ROL_13,
    ADT_A02_ADT_A02_PRT_14,
    ADT_A02_ADT_A02_PV1_15,
    ADT_A02_ADT_A02_PV2_16,
    ADT_A02_ADT_A02_ARV_17,
    ADT_A02_ADT_A02_ROL_18,
    ADT_A02_ADT_A02_PRT_19,
    ADT_A02_ADT_A02_DB1_20,
    ADT_A02_ADT_A02_PDA_22,
    ADT_A02_ADT_A02_OBX_23,
    ADT_A02_ADT_A02_PRT_24,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A02_ADT_A02"; }
  ADT_A02_ADT_A02* create() const { return new ADT_A02_ADT_A02(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A02_ADT_A02");
    addObject<MSH>(ADT_A02_ADT_A02_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A02_ADT_A02_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A02_ADT_A02_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A02_ADT_A02_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A02_ADT_A02_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A02_ADT_A02_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A02_ADT_A02_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<OH1>(ADT_A02_ADT_A02_OH1_8, "OH1.8", HL7::optional, HL7::repetition_on);
    addObject<OH2>(ADT_A02_ADT_A02_OH2_9, "OH2.9", HL7::optional, HL7::repetition_on);
    addObject<OH3>(ADT_A02_ADT_A02_OH3_10, "OH3.10", HL7::optional, HL7::repetition_off);
    addObject<OH4>(ADT_A02_ADT_A02_OH4_11, "OH4.11", HL7::optional, HL7::repetition_on);
    addObject<ARV>(ADT_A02_ADT_A02_ARV_12, "ARV.12", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A02_ADT_A02_ROL_13, "ROL.13", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A02_ADT_A02_PRT_14, "PRT.14", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADT_A02_ADT_A02_PV1_15, "PV1.15", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A02_ADT_A02_PV2_16, "PV2.16", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ADT_A02_ADT_A02_ARV_17, "ARV.17", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADT_A02_ADT_A02_ROL_18, "ROL.18", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ADT_A02_ADT_A02_PRT_19, "PRT.19", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADT_A02_ADT_A02_DB1_20, "DB1.20", HL7::optional, HL7::repetition_on);
    addObject<PDA>(ADT_A02_ADT_A02_PDA_22, "PDA.22", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ADT_A02_ADT_A02_OBX_23, "OBX.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A02_ADT_A02_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A02_ADT_A02_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A02_ADT_A02_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A02_ADT_A02_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A02_ADT_A02_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A02_ADT_A02_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A02_ADT_A02_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A02_ADT_A02_PD1_7);
  }
  OH1* getOH1_8(size_t index = 0) {
    return (OH1*)this->getObjectSafe(index, ADT_A02_ADT_A02_OH1_8);
  }
  OH2* getOH2_9(size_t index = 0) {
    return (OH2*)this->getObjectSafe(index, ADT_A02_ADT_A02_OH2_9);
  }
  OH3* getOH3_10(size_t index = 0) {
    return (OH3*)this->getObjectSafe(index, ADT_A02_ADT_A02_OH3_10);
  }
  OH4* getOH4_11(size_t index = 0) {
    return (OH4*)this->getObjectSafe(index, ADT_A02_ADT_A02_OH4_11);
  }
  ARV* getARV_12(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A02_ADT_A02_ARV_12);
  }
  ROL* getROL_13(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A02_ADT_A02_ROL_13);
  }
  PRT* getPRT_14(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A02_ADT_A02_PRT_14);
  }
  PV1* getPV1_15(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A02_ADT_A02_PV1_15);
  }
  PV2* getPV2_16(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A02_ADT_A02_PV2_16);
  }
  ARV* getARV_17(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A02_ADT_A02_ARV_17);
  }
  ROL* getROL_18(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADT_A02_ADT_A02_ROL_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A02_ADT_A02_PRT_19);
  }
  DB1* getDB1_20(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A02_ADT_A02_DB1_20);
  }
  PDA* getPDA_22(size_t index = 0) {
    return (PDA*)this->getObjectSafe(index, ADT_A02_ADT_A02_PDA_22);
  }
  OBX* getOBX_23(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A02_ADT_A02_OBX_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A02_ADT_A02_PRT_24);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_OH1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH3_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_OH3_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOH4_11(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_OH4_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_ARV_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_ROL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_14(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PRT_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_15(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PV1_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_16(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PV2_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_17(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_ARV_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_18(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_ROL_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_20(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_DB1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDA_22(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PDA_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_23(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A02_ADT_A02_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A02_ADT_A02_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A02_ADT_A02__29_H__ */
