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


#ifndef __RSP_K24_RSP_K23__29_H__
#define __RSP_K24_RSP_K23__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K24_RSP_K23_QUERY_RESPONSE; /* QUERY_RESPONSE */

/*  */
struct RSP_K24_RSP_K23 : public HL7Message {
  RSP_K24_RSP_K23() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K24_RSP_K23_MSH_1,
    RSP_K24_RSP_K23_SFT_2,
    RSP_K24_RSP_K23_UAC_3,
    RSP_K24_RSP_K23_MSA_4,
    RSP_K24_RSP_K23_ERR_5,
    RSP_K24_RSP_K23_QAK_6,
    RSP_K24_RSP_K23_QPD_7,
    RSP_K24_RSP_K23_DSC_9,
    RSP_K24_RSP_K23_PID_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K24_RSP_K23"; }
  RSP_K24_RSP_K23* create() const { return new RSP_K24_RSP_K23(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K24_RSP_K23");
    addObject<MSH>(RSP_K24_RSP_K23_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_K24_RSP_K23_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K24_RSP_K23_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K24_RSP_K23_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K24_RSP_K23_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K24_RSP_K23_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K24_RSP_K23_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_K24_RSP_K23_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_K24_RSP_K23_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K24_RSP_K23_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K24_RSP_K23_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K24_RSP_K23_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K24_RSP_K23_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K24_RSP_K23_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K24_RSP_K23_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K24_RSP_K23_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K24_RSP_K23_DSC_9);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K24_RSP_K23_PID_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K24_RSP_K23_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K24_RSP_K23_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K24_RSP_K23__29_H__ */
