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


#ifndef __RSP_K34_RSP_O34__29_H__
#define __RSP_K34_RSP_O34__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/DON.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K34_RSP_O34_DONOR; /* DONOR */
struct RSP_K34_RSP_O34_DONATION; /* DONATION */
struct RSP_K34_RSP_O34_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct RSP_K34_RSP_O34_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct RSP_K34_RSP_O34_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct RSP_K34_RSP_O34 : public HL7Message {
  RSP_K34_RSP_O34() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K34_RSP_O34_MSH_1,
    RSP_K34_RSP_O34_ARV_2,
    RSP_K34_RSP_O34_SFT_3,
    RSP_K34_RSP_O34_UAC_4,
    RSP_K34_RSP_O34_MSA_5,
    RSP_K34_RSP_O34_ERR_6,
    RSP_K34_RSP_O34_QAK_7,
    RSP_K34_RSP_O34_QPD_8,
    RSP_K34_RSP_O34_DON_12,
    RSP_K34_RSP_O34_NTE_13,
    RSP_K34_RSP_O34_OBX_14,
    RSP_K34_RSP_O34_PRT_15,
    RSP_K34_RSP_O34_AL1_18,
    RSP_K34_RSP_O34_ARV_19,
    RSP_K34_RSP_O34_NTE_20,
    RSP_K34_RSP_O34_PD1_21,
    RSP_K34_RSP_O34_PID_22,
    RSP_K34_RSP_O34_PRT_23,
    RSP_K34_RSP_O34_OBX_24,
    RSP_K34_RSP_O34_PRT_25,
    RSP_K34_RSP_O34_OBX_26,
    RSP_K34_RSP_O34_PRT_27,
    RSP_K34_RSP_O34_NTE_28,
    RSP_K34_RSP_O34_PRT_29,
    RSP_K34_RSP_O34_PV1_30,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K34_RSP_O34"; }
  RSP_K34_RSP_O34* create() const { return new RSP_K34_RSP_O34(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K34_RSP_O34");
    addObject<MSH>(RSP_K34_RSP_O34_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(RSP_K34_RSP_O34_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(RSP_K34_RSP_O34_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K34_RSP_O34_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K34_RSP_O34_MSA_5, "MSA.5", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K34_RSP_O34_ERR_6, "ERR.6", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K34_RSP_O34_QAK_7, "QAK.7", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K34_RSP_O34_QPD_8, "QPD.8", HL7::initialized, HL7::repetition_off);
    addObject<DON>(RSP_K34_RSP_O34_DON_12, "DON.12", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RSP_K34_RSP_O34_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_K34_RSP_O34_OBX_14, "OBX.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RSP_K34_RSP_O34_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RSP_K34_RSP_O34_AL1_18, "AL1.18", HL7::optional, HL7::repetition_on);
    addObject<ARV>(RSP_K34_RSP_O34_ARV_19, "ARV.19", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_K34_RSP_O34_NTE_20, "NTE.20", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_K34_RSP_O34_PD1_21, "PD1.21", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_K34_RSP_O34_PID_22, "PID.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RSP_K34_RSP_O34_PRT_23, "PRT.23", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_K34_RSP_O34_OBX_24, "OBX.24", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RSP_K34_RSP_O34_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RSP_K34_RSP_O34_OBX_26, "OBX.26", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RSP_K34_RSP_O34_PRT_27, "PRT.27", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RSP_K34_RSP_O34_NTE_28, "NTE.28", HL7::optional, HL7::repetition_on);
    addObject<PRT>(RSP_K34_RSP_O34_PRT_29, "PRT.29", HL7::optional, HL7::repetition_on);
    addObject<PV1>(RSP_K34_RSP_O34_PV1_30, "PV1.30", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K34_RSP_O34_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K34_RSP_O34_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K34_RSP_O34_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K34_RSP_O34_UAC_4);
  }
  MSA* getMSA_5(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K34_RSP_O34_MSA_5);
  }
  ERR* getERR_6(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K34_RSP_O34_ERR_6);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K34_RSP_O34_QAK_7);
  }
  QPD* getQPD_8(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K34_RSP_O34_QPD_8);
  }
  DON* getDON_12(size_t index = 0) {
    return (DON*)this->getObjectSafe(index, RSP_K34_RSP_O34_DON_12);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_K34_RSP_O34_NTE_13);
  }
  OBX* getOBX_14(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_K34_RSP_O34_OBX_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K34_RSP_O34_PRT_15);
  }
  AL1* getAL1_18(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RSP_K34_RSP_O34_AL1_18);
  }
  ARV* getARV_19(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K34_RSP_O34_ARV_19);
  }
  NTE* getNTE_20(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_K34_RSP_O34_NTE_20);
  }
  PD1* getPD1_21(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K34_RSP_O34_PD1_21);
  }
  PID* getPID_22(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K34_RSP_O34_PID_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K34_RSP_O34_PRT_23);
  }
  OBX* getOBX_24(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_K34_RSP_O34_OBX_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K34_RSP_O34_PRT_25);
  }
  OBX* getOBX_26(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RSP_K34_RSP_O34_OBX_26);
  }
  PRT* getPRT_27(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K34_RSP_O34_PRT_27);
  }
  NTE* getNTE_28(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RSP_K34_RSP_O34_NTE_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K34_RSP_O34_PRT_29);
  }
  PV1* getPV1_30(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RSP_K34_RSP_O34_PV1_30);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_ERR_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_QPD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDON_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_DON_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_18(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_AL1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_19(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_ARV_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_20(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_NTE_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_21(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PD1_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_22(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PID_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_24(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_OBX_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_27(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PRT_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_28(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_NTE_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_30(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K34_RSP_O34_PV1_30) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K34_RSP_O34_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K34_RSP_O34__29_H__ */
