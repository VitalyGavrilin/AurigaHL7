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


#ifndef __QBP_Q11_QBP_Q11__29_H__
#define __QBP_Q11_QBP_Q11__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QBP_Q11_QBP_Q11 : public HL7Message {
  QBP_Q11_QBP_Q11() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Q11_QBP_Q11_MSH_1,
    QBP_Q11_QBP_Q11_ARV_2,
    QBP_Q11_QBP_Q11_SFT_3,
    QBP_Q11_QBP_Q11_UAC_4,
    QBP_Q11_QBP_Q11_QPD_5,
    QBP_Q11_QBP_Q11_RCP_6,
    QBP_Q11_QBP_Q11_DSC_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Q11_QBP_Q11"; }
  QBP_Q11_QBP_Q11* create() const { return new QBP_Q11_QBP_Q11(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Q11_QBP_Q11");
    addObject<MSH>(QBP_Q11_QBP_Q11_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(QBP_Q11_QBP_Q11_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(QBP_Q11_QBP_Q11_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QBP_Q11_QBP_Q11_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QBP_Q11_QBP_Q11_QPD_5, "QPD.5", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QBP_Q11_QBP_Q11_RCP_6, "RCP.6", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(QBP_Q11_QBP_Q11_DSC_7, "DSC.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_UAC_4);
  }
  QPD* getQPD_5(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_QPD_5);
  }
  RCP* getRCP_6(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_RCP_6);
  }
  DSC* getDSC_7(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Q11_QBP_Q11_DSC_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_QPD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_7(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q11_QBP_Q11_DSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q11_QBP_Q11_ */
} /* namespace HL7_29 */
#endif /*  __QBP_Q11_QBP_Q11__29_H__ */
