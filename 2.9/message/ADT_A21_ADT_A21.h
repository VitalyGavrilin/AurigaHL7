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


#ifndef __ADT_A21_ADT_A21__29_H__
#define __ADT_A21_ADT_A21__29_H__

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
struct ADT_A21_ADT_A21_OBSERVATION; /* OBSERVATION */

/*  */
struct ADT_A21_ADT_A21 : public HL7Message {
  ADT_A21_ADT_A21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A21_ADT_A21_MSH_1,
    ADT_A21_ADT_A21_ARV_2,
    ADT_A21_ADT_A21_SFT_3,
    ADT_A21_ADT_A21_UAC_4,
    ADT_A21_ADT_A21_EVN_5,
    ADT_A21_ADT_A21_PID_6,
    ADT_A21_ADT_A21_PD1_7,
    ADT_A21_ADT_A21_PV1_8,
    ADT_A21_ADT_A21_PV2_9,
    ADT_A21_ADT_A21_DB1_10,
    ADT_A21_ADT_A21_OBX_12,
    ADT_A21_ADT_A21_PRT_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A21_ADT_A21"; }
  ADT_A21_ADT_A21* create() const { return new ADT_A21_ADT_A21(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A21_ADT_A21");
    addObject<MSH>(ADT_A21_ADT_A21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ADT_A21_ADT_A21_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ADT_A21_ADT_A21_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ADT_A21_ADT_A21_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<EVN>(ADT_A21_ADT_A21_EVN_5, "EVN.5", HL7::initialized, HL7::repetition_off);
    addObject<PID>(ADT_A21_ADT_A21_PID_6, "PID.6", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(ADT_A21_ADT_A21_PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<PV1>(ADT_A21_ADT_A21_PV1_8, "PV1.8", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(ADT_A21_ADT_A21_PV2_9, "PV2.9", HL7::optional, HL7::repetition_off);
    addObject<DB1>(ADT_A21_ADT_A21_DB1_10, "DB1.10", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADT_A21_ADT_A21_OBX_12, "OBX.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ADT_A21_ADT_A21_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A21_ADT_A21_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ADT_A21_ADT_A21_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ADT_A21_ADT_A21_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ADT_A21_ADT_A21_UAC_4);
  }
  EVN* getEVN_5(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A21_ADT_A21_EVN_5);
  }
  PID* getPID_6(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A21_ADT_A21_PID_6);
  }
  PD1* getPD1_7(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A21_ADT_A21_PD1_7);
  }
  PV1* getPV1_8(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A21_ADT_A21_PV1_8);
  }
  PV2* getPV2_9(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADT_A21_ADT_A21_PV2_9);
  }
  DB1* getDB1_10(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADT_A21_ADT_A21_DB1_10);
  }
  OBX* getOBX_12(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADT_A21_ADT_A21_OBX_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ADT_A21_ADT_A21_PRT_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_EVN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_PID_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_PV1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_PV2_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_10(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_DB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A21_ADT_A21_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A21_ADT_A21_ */
} /* namespace HL7_29 */
#endif /*  __ADT_A21_ADT_A21__29_H__ */
