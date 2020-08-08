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


#ifndef __RSP_E22_RSP_E22__29_H__
#define __RSP_E22_RSP_E22__29_H__

#include "../../common/Util.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PSG.h"
#include "../segment/PSL.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_E22_RSP_E22_QUERY_ACK; /* QUERY_ACK */
struct RSP_E22_RSP_E22_AUTHORIZATION_INFO; /* AUTHORIZATION_INFO */
struct RSP_E22_RSP_E22_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/*  */
struct RSP_E22_RSP_E22 : public HL7Message {
  RSP_E22_RSP_E22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_E22_RSP_E22_MSH_1,
    RSP_E22_RSP_E22_MSA_4,
    RSP_E22_RSP_E22_QAK_8,
    RSP_E22_RSP_E22_QPD_9,
    RSP_E22_RSP_E22_IVC_11,
    RSP_E22_RSP_E22_PSG_12,
    RSP_E22_RSP_E22_PSL_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_E22_RSP_E22"; }
  RSP_E22_RSP_E22* create() const { return new RSP_E22_RSP_E22(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_E22_RSP_E22");
    addObject<MSH>(RSP_E22_RSP_E22_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(RSP_E22_RSP_E22_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<QAK>(RSP_E22_RSP_E22_QAK_8, "QAK.8", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_E22_RSP_E22_QPD_9, "QPD.9", HL7::initialized, HL7::repetition_off);
    addObject<IVC>(RSP_E22_RSP_E22_IVC_11, "IVC.11", HL7::initialized, HL7::repetition_off);
    addObject<PSG>(RSP_E22_RSP_E22_PSG_12, "PSG.12", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(RSP_E22_RSP_E22_PSL_13, "PSL.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_E22_RSP_E22_MSH_1);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_E22_RSP_E22_MSA_4);
  }
  QAK* getQAK_8(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_E22_RSP_E22_QAK_8);
  }
  QPD* getQPD_9(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_E22_RSP_E22_QPD_9);
  }
  IVC* getIVC_11(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, RSP_E22_RSP_E22_IVC_11);
  }
  PSG* getPSG_12(size_t index = 0) {
    return (PSG*)this->getObjectSafe(index, RSP_E22_RSP_E22_PSG_12);
  }
  PSL* getPSL_13(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, RSP_E22_RSP_E22_PSL_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_QAK_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_QPD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_IVC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSG_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_PSG_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E22_RSP_E22_PSL_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_E22_RSP_E22_ */
} /* namespace HL7_29 */
#endif /*  __RSP_E22_RSP_E22__29_H__ */
