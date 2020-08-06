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


#ifndef __NCK_v29_H__
#define __NCK_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* NCK */
class NCK : public HL7Segment {
 public:
  NCK() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NCK_1,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NCK"; }
  NCK* create() const { return new NCK(); }

 private:
  void init() {
    setName("NCK");
    /* Init members */
    addObject<DTM>(NCK_1, "NCK.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * System Date/Time
   */

  DTM* getNCK_1(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NCK_1);
  }

  DTM* getSystemDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, NCK_1);
  }

  bool isNCK_1(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NCK */

} /* End of namespace HL7_29 */
#endif /* __NCK_v29_H__ */
