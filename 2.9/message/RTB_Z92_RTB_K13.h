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


#ifndef __RTB_Z92_RTB_K13__29_H__
#define __RTB_Z92_RTB_K13__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RDF.h"
#include "../segment/RDT.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RTB_Z92_RTB_K13_ROW_DEFINITION; /* ROW_DEFINITION */

/*  */
struct RTB_Z92_RTB_K13 : public HL7Message {
  RTB_Z92_RTB_K13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RTB_Z92_RTB_K13_MSH_1,
    RTB_Z92_RTB_K13_SFT_2,
    RTB_Z92_RTB_K13_UAC_3,
    RTB_Z92_RTB_K13_MSA_4,
    RTB_Z92_RTB_K13_ERR_5,
    RTB_Z92_RTB_K13_QAK_6,
    RTB_Z92_RTB_K13_QPD_7,
    RTB_Z92_RTB_K13_DSC_9,
    RTB_Z92_RTB_K13_RDF_10,
    RTB_Z92_RTB_K13_RDT_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "RTB_Z92_RTB_K13"; }
  RTB_Z92_RTB_K13* create() const { return new RTB_Z92_RTB_K13(); }

 private:
  /* Initialize object */
  void init() {
    setName("RTB_Z92_RTB_K13");
    addObject<MSH>(RTB_Z92_RTB_K13_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RTB_Z92_RTB_K13_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RTB_Z92_RTB_K13_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RTB_Z92_RTB_K13_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RTB_Z92_RTB_K13_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RTB_Z92_RTB_K13_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RTB_Z92_RTB_K13_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RTB_Z92_RTB_K13_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
    addObject<RDF>(RTB_Z92_RTB_K13_RDF_10, "RDF.10", HL7::initialized, HL7::repetition_off);
    addObject<RDT>(RTB_Z92_RTB_K13_RDT_11, "RDT.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RTB_Z92_RTB_K13_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RTB_Z92_RTB_K13_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RTB_Z92_RTB_K13_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RTB_Z92_RTB_K13_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RTB_Z92_RTB_K13_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RTB_Z92_RTB_K13_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RTB_Z92_RTB_K13_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RTB_Z92_RTB_K13_DSC_9);
  }
  RDF* getRDF_10(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, RTB_Z92_RTB_K13_RDF_10);
  }
  RDT* getRDT_11(size_t index = 0) {
    return (RDT*)this->getObjectSafe(index, RTB_Z92_RTB_K13_RDT_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDF_10(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_RDF_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDT_11(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Z92_RTB_K13_RDT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RTB_Z92_RTB_K13_ */
} /* namespace HL7_29 */
#endif /*  __RTB_Z92_RTB_K13__29_H__ */
