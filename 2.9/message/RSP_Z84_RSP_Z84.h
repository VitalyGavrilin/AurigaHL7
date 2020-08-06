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


#ifndef __RSP_Z84_RSP_Z84__29_H__
#define __RSP_Z84_RSP_Z84__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RDF.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_Z84_RSP_Z84_ROW_DEFINITION; /* ROW_DEFINITION */

/*  */
struct RSP_Z84_RSP_Z84 : public HL7Message {
  RSP_Z84_RSP_Z84() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Z84_RSP_Z84_MSH_1,
    RSP_Z84_RSP_Z84_SFT_2,
    RSP_Z84_RSP_Z84_UAC_3,
    RSP_Z84_RSP_Z84_MSA_4,
    RSP_Z84_RSP_Z84_ERR_5,
    RSP_Z84_RSP_Z84_QAK_6,
    RSP_Z84_RSP_Z84_QPD_7,
    RSP_Z84_RSP_Z84_DSC_9,
    RSP_Z84_RSP_Z84_RDF_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Z84_RSP_Z84"; }
  RSP_Z84_RSP_Z84* create() const { return new RSP_Z84_RSP_Z84(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Z84_RSP_Z84");
    addObject<MSH>(RSP_Z84_RSP_Z84_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Z84_RSP_Z84_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Z84_RSP_Z84_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Z84_RSP_Z84_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Z84_RSP_Z84_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Z84_RSP_Z84_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Z84_RSP_Z84_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_Z84_RSP_Z84_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
    addObject<RDF>(RSP_Z84_RSP_Z84_RDF_10, "RDF.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_DSC_9);
  }
  RDF* getRDF_10(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, RSP_Z84_RSP_Z84_RDF_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDF_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Z84_RSP_Z84_RDF_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Z84_RSP_Z84_ */
} /* namespace HL7_29 */
#endif /*  __RSP_Z84_RSP_Z84__29_H__ */
