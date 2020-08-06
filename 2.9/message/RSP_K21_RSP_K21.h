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


#ifndef __RSP_K21_RSP_K21__29_H__
#define __RSP_K21_RSP_K21__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/QRI.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_K21_RSP_K21_QUERY_RESPONSE; /* QUERY_RESPONSE */

/*  */
struct RSP_K21_RSP_K21 : public HL7Message {
  RSP_K21_RSP_K21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K21_RSP_K21_MSH_1,
    RSP_K21_RSP_K21_ARV_2,
    RSP_K21_RSP_K21_SFT_3,
    RSP_K21_RSP_K21_UAC_4,
    RSP_K21_RSP_K21_MSA_5,
    RSP_K21_RSP_K21_ERR_6,
    RSP_K21_RSP_K21_QAK_7,
    RSP_K21_RSP_K21_QPD_8,
    RSP_K21_RSP_K21_DSC_10,
    RSP_K21_RSP_K21_ARV_11,
    RSP_K21_RSP_K21_NK1_12,
    RSP_K21_RSP_K21_PD1_13,
    RSP_K21_RSP_K21_PID_14,
    RSP_K21_RSP_K21_QRI_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K21_RSP_K21"; }
  RSP_K21_RSP_K21* create() const { return new RSP_K21_RSP_K21(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K21_RSP_K21");
    addObject<MSH>(RSP_K21_RSP_K21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(RSP_K21_RSP_K21_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(RSP_K21_RSP_K21_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K21_RSP_K21_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K21_RSP_K21_MSA_5, "MSA.5", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K21_RSP_K21_ERR_6, "ERR.6", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K21_RSP_K21_QAK_7, "QAK.7", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K21_RSP_K21_QPD_8, "QPD.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_K21_RSP_K21_DSC_10, "DSC.10", HL7::optional, HL7::repetition_off);
    addObject<ARV>(RSP_K21_RSP_K21_ARV_11, "ARV.11", HL7::optional, HL7::repetition_on);
    addObject<NK1>(RSP_K21_RSP_K21_NK1_12, "NK1.12", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_K21_RSP_K21_PD1_13, "PD1.13", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_K21_RSP_K21_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<QRI>(RSP_K21_RSP_K21_QRI_15, "QRI.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K21_RSP_K21_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K21_RSP_K21_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K21_RSP_K21_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K21_RSP_K21_UAC_4);
  }
  MSA* getMSA_5(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K21_RSP_K21_MSA_5);
  }
  ERR* getERR_6(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K21_RSP_K21_ERR_6);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K21_RSP_K21_QAK_7);
  }
  QPD* getQPD_8(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K21_RSP_K21_QPD_8);
  }
  DSC* getDSC_10(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K21_RSP_K21_DSC_10);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, RSP_K21_RSP_K21_ARV_11);
  }
  NK1* getNK1_12(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_K21_RSP_K21_NK1_12);
  }
  PD1* getPD1_13(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K21_RSP_K21_PD1_13);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K21_RSP_K21_PID_14);
  }
  QRI* getQRI_15(size_t index = 0) {
    return (QRI*)this->getObjectSafe(index, RSP_K21_RSP_K21_QRI_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_ERR_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_QPD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_DSC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_NK1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRI_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_RSP_K21_QRI_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K21_RSP_K21_ */
} /* namespace HL7_29 */
#endif /*  __RSP_K21_RSP_K21__29_H__ */
