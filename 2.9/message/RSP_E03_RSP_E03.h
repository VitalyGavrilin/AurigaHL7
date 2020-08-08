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


#ifndef __RSP_E03_RSP_E03__29_H__
#define __RSP_E03_RSP_E03__29_H__

#include "../../common/Util.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_29 {

/* Internal structures/groups */
struct RSP_E03_RSP_E03_QUERY_ACK_IPR; /* QUERY_ACK_IPR */

/*  */
struct RSP_E03_RSP_E03 : public HL7Message {
  RSP_E03_RSP_E03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_E03_RSP_E03_MSH_1,
    RSP_E03_RSP_E03_MSA_4,
    RSP_E03_RSP_E03_QAK_8,
    RSP_E03_RSP_E03_QPD_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_E03_RSP_E03"; }
  RSP_E03_RSP_E03* create() const { return new RSP_E03_RSP_E03(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_E03_RSP_E03");
    addObject<MSH>(RSP_E03_RSP_E03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(RSP_E03_RSP_E03_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<QAK>(RSP_E03_RSP_E03_QAK_8, "QAK.8", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_E03_RSP_E03_QPD_9, "QPD.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_E03_RSP_E03_MSH_1);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_E03_RSP_E03_MSA_4);
  }
  QAK* getQAK_8(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_E03_RSP_E03_QAK_8);
  }
  QPD* getQPD_9(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_E03_RSP_E03_QPD_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E03_RSP_E03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E03_RSP_E03_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E03_RSP_E03_QAK_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_E03_RSP_E03_QPD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_E03_RSP_E03_ */
} /* namespace HL7_29 */
#endif /*  __RSP_E03_RSP_E03__29_H__ */
