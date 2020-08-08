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


#ifndef __RDT_v29_H__
#define __RDT_v29_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* RDT */
class RDT : public HL7Segment {
 public:
  RDT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RDT_1,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RDT"; }
  RDT* create() const { return new RDT(); }

 private:
  void init() {
    setName("RDT");
    /* Init members */
    addObject<ST>(RDT_1, "RDT.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Column Value
   */

  ST* getRDT_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RDT_1);
  }

  ST* getColumnValue(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RDT_1);
  }

  bool isRDT_1(size_t index = 0) {
    try {
      return this->getObject(index, RDT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isColumnValue(size_t index = 0) {
    try {
      return this->getObject(index, RDT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RDT */

} /* End of namespace HL7_29 */
#endif /* __RDT_v29_H__ */
