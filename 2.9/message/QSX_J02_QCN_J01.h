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


#ifndef __QSX_J02_QCN_J01__29_H__
#define __QSX_J02_QCN_J01__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QID.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QSX_J02_QCN_J01 : public HL7Message {
  QSX_J02_QCN_J01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QSX_J02_QCN_J01_MSH_1,
    QSX_J02_QCN_J01_SFT_2,
    QSX_J02_QCN_J01_UAC_3,
    QSX_J02_QCN_J01_QID_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "QSX_J02_QCN_J01"; }
  QSX_J02_QCN_J01* create() const { return new QSX_J02_QCN_J01(); }

 private:
  /* Initialize object */
  void init() {
    setName("QSX_J02_QCN_J01");
    addObject<MSH>(QSX_J02_QCN_J01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QSX_J02_QCN_J01_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QSX_J02_QCN_J01_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QID>(QSX_J02_QCN_J01_QID_4, "QID.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QSX_J02_QCN_J01_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QSX_J02_QCN_J01_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QSX_J02_QCN_J01_UAC_3);
  }
  QID* getQID_4(size_t index = 0) {
    return (QID*)this->getObjectSafe(index, QSX_J02_QCN_J01_QID_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QSX_J02_QCN_J01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QSX_J02_QCN_J01_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QSX_J02_QCN_J01_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQID_4(size_t index = 0) {
    try {
      return this->getObject(index, QSX_J02_QCN_J01_QID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QSX_J02_QCN_J01_ */
} /* namespace HL7_29 */
#endif /*  __QSX_J02_QCN_J01__29_H__ */
