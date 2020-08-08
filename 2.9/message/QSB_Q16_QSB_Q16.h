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


#ifndef __QSB_Q16_QSB_Q16__29_H__
#define __QSB_Q16_QSB_Q16__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QSB_Q16_QSB_Q16 : public HL7Message {
  QSB_Q16_QSB_Q16() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QSB_Q16_QSB_Q16_MSH_1,
    QSB_Q16_QSB_Q16_SFT_2,
    QSB_Q16_QSB_Q16_UAC_3,
    QSB_Q16_QSB_Q16_QPD_4,
    QSB_Q16_QSB_Q16_RCP_5,
    QSB_Q16_QSB_Q16_DSC_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "QSB_Q16_QSB_Q16"; }
  QSB_Q16_QSB_Q16* create() const { return new QSB_Q16_QSB_Q16(); }

 private:
  /* Initialize object */
  void init() {
    setName("QSB_Q16_QSB_Q16");
    addObject<MSH>(QSB_Q16_QSB_Q16_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QSB_Q16_QSB_Q16_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QSB_Q16_QSB_Q16_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QSB_Q16_QSB_Q16_QPD_4, "QPD.4", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QSB_Q16_QSB_Q16_RCP_5, "RCP.5", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(QSB_Q16_QSB_Q16_DSC_6, "DSC.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_UAC_3);
  }
  QPD* getQPD_4(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_QPD_4);
  }
  RCP* getRCP_5(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_RCP_5);
  }
  DSC* getDSC_6(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QSB_Q16_QSB_Q16_DSC_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_4(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_QPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_5(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_6(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QSB_Q16_DSC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QSB_Q16_QSB_Q16_ */
} /* namespace HL7_29 */
#endif /*  __QSB_Q16_QSB_Q16__29_H__ */
