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


#ifndef __QBP_Z99_QBP_Q13__29_H__
#define __QBP_Z99_QBP_Q13__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/RDF.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QBP_Z99_QBP_Q13 : public HL7Message {
  QBP_Z99_QBP_Q13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Z99_QBP_Q13_MSH_1,
    QBP_Z99_QBP_Q13_SFT_2,
    QBP_Z99_QBP_Q13_UAC_3,
    QBP_Z99_QBP_Q13_QPD_4,
    QBP_Z99_QBP_Q13_PID_5,
    QBP_Z99_QBP_Q13_RDF_6,
    QBP_Z99_QBP_Q13_RCP_7,
    QBP_Z99_QBP_Q13_RDF_8,
    QBP_Z99_QBP_Q13_DSC_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Z99_QBP_Q13"; }
  QBP_Z99_QBP_Q13* create() const { return new QBP_Z99_QBP_Q13(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Z99_QBP_Q13");
    addObject<MSH>(QBP_Z99_QBP_Q13_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QBP_Z99_QBP_Q13_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QBP_Z99_QBP_Q13_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QBP_Z99_QBP_Q13_QPD_4, "QPD.4", HL7::initialized, HL7::repetition_off);
    addObject<PID>(QBP_Z99_QBP_Q13_PID_5, "PID.5", HL7::optional, HL7::repetition_off);
    addObject<RDF>(QBP_Z99_QBP_Q13_RDF_6, "RDF.6", HL7::optional, HL7::repetition_off);
    addObject<RCP>(QBP_Z99_QBP_Q13_RCP_7, "RCP.7", HL7::initialized, HL7::repetition_off);
    addObject<RDF>(QBP_Z99_QBP_Q13_RDF_8, "RDF.8", HL7::optional, HL7::repetition_off);
    addObject<DSC>(QBP_Z99_QBP_Q13_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_UAC_3);
  }
  QPD* getQPD_4(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_QPD_4);
  }
  PID* getPID_5(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_PID_5);
  }
  RDF* getRDF_6(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_RDF_6);
  }
  RCP* getRCP_7(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_RCP_7);
  }
  RDF* getRDF_8(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_RDF_8);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Z99_QBP_Q13_DSC_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_QPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_PID_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDF_6(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_RDF_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_7(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_RCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDF_8(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_RDF_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z99_QBP_Q13_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Z99_QBP_Q13_ */
} /* namespace HL7_29 */
#endif /*  __QBP_Z99_QBP_Q13__29_H__ */
