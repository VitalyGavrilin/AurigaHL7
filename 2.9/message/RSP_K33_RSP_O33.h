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


#ifndef __RSP_K33_RSP_O33__29_H__
#define __RSP_K33_RSP_O33__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K33_RSP_O33_DONOR; /* DONOR */

/*  */
struct RSP_K33_RSP_O33 : public HL7Message {
  RSP_K33_RSP_O33() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K33_RSP_O33_MSH_1,
    RSP_K33_RSP_O33_ARV_2,
    RSP_K33_RSP_O33_SFT_3,
    RSP_K33_RSP_O33_UAC_4,
    RSP_K33_RSP_O33_MSA_5,
    RSP_K33_RSP_O33_ERR_6,
    RSP_K33_RSP_O33_QAK_7,
    RSP_K33_RSP_O33_QPD_8,
    RSP_K33_RSP_O33_ARV_10,
    RSP_K33_RSP_O33_PID_11,
    RSP_K33_RSP_O33_PRT_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K33_RSP_O33"; }
  RSP_K33_RSP_O33* create() const { return new RSP_K33_RSP_O33(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K33_RSP_O33");
    addObject<MSH>(RSP_K33_RSP_O33_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(RSP_K33_RSP_O33_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(RSP_K33_RSP_O33_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K33_RSP_O33_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K33_RSP_O33_MSA_5, "MSA.5", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K33_RSP_O33_ERR_6, "ERR.6", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K33_RSP_O33_QAK_7, "QAK.7", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K33_RSP_O33_QPD_8, "QPD.8", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(RSP_K33_RSP_O33_ARV_10, "ARV.10", HL7::optional, HL7::repetition_on);
    addObject<PID>(RSP_K33_RSP_O33_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RSP_K33_RSP_O33_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K33_RSP_O33_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K33_RSP_O33_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K33_RSP_O33_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K33_RSP_O33_UAC_4);
  }
  MSA* getMSA_5(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K33_RSP_O33_MSA_5);
  }
  ERR* getERR_6(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K33_RSP_O33_ERR_6);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K33_RSP_O33_QAK_7);
  }
  QPD* getQPD_8(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K33_RSP_O33_QPD_8);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K33_RSP_O33_ARV_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K33_RSP_O33_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RSP_K33_RSP_O33_PRT_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_ERR_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_QPD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K33_RSP_O33_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K33_RSP_O33_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K33_RSP_O33__29_H__ */
