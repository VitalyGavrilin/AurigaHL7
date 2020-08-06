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


#ifndef __QCN_J01_QCN_J01__29_H__
#define __QCN_J01_QCN_J01__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QCN_J01_QCN_J01 : public HL7Message {
  QCN_J01_QCN_J01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QCN_J01_QCN_J01_MSH_1,
    QCN_J01_QCN_J01_SFT_2,
    QCN_J01_QCN_J01_UAC_3,
    QCN_J01_QCN_J01_QID_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "QCN_J01_QCN_J01"; }
  QCN_J01_QCN_J01* create() const { return new QCN_J01_QCN_J01(); }

 private:
  /* Initialize object */
  void init() {
    setName("QCN_J01_QCN_J01");
    addObject<MSH>(QCN_J01_QCN_J01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QCN_J01_QCN_J01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QCN_J01_QCN_J01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QID>(QCN_J01_QCN_J01_QID_4, "QID.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QCN_J01_QCN_J01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QCN_J01_QCN_J01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QCN_J01_QCN_J01_UAC_3);
  }
  QID* getQID_4(size_t index = 0) {
    return (QID*)this->getObjectSafe(index, QCN_J01_QCN_J01_QID_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_QCN_J01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_QCN_J01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_QCN_J01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQID_4(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_QCN_J01_QID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QCN_J01_QCN_J01_ */
} /* namespace HL7_29 */
#endif /*  __QCN_J01_QCN_J01__29_H__ */
