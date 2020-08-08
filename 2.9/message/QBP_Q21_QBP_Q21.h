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


#ifndef __QBP_Q21_QBP_Q21__29_H__
#define __QBP_Q21_QBP_Q21__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QBP_Q21_QBP_Q21 : public HL7Message {
  QBP_Q21_QBP_Q21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Q21_QBP_Q21_MSH_1,
    QBP_Q21_QBP_Q21_SFT_2,
    QBP_Q21_QBP_Q21_UAC_3,
    QBP_Q21_QBP_Q21_QPD_4,
    QBP_Q21_QBP_Q21_RCP_5,
    QBP_Q21_QBP_Q21_DSC_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Q21_QBP_Q21"; }
  QBP_Q21_QBP_Q21* create() const { return new QBP_Q21_QBP_Q21(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Q21_QBP_Q21");
    addObject<MSH>(QBP_Q21_QBP_Q21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QBP_Q21_QBP_Q21_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QBP_Q21_QBP_Q21_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QBP_Q21_QBP_Q21_QPD_4, "QPD.4", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QBP_Q21_QBP_Q21_RCP_5, "RCP.5", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(QBP_Q21_QBP_Q21_DSC_6, "DSC.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_UAC_3);
  }
  QPD* getQPD_4(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_QPD_4);
  }
  RCP* getRCP_5(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_RCP_5);
  }
  DSC* getDSC_6(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Q21_QBP_Q21_DSC_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_QPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_6(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QBP_Q21_DSC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q21_QBP_Q21_ */
} /* namespace HL7_29 */
#endif /*  __QBP_Q21_QBP_Q21__29_H__ */
