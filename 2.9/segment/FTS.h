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


#ifndef __FTS_v29_H__
#define __FTS_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* FTS */
class FTS : public HL7Segment {
 public:
  FTS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FTS_1,
    FTS_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "FTS"; }
  FTS* create() const { return new FTS(); }

 private:
  void init() {
    setName("FTS");
    /* Init members */
    addObject<NM>(FTS_1, "FTS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FTS_2, "FTS.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * File Batch Count
   */

  NM* getFTS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FTS_1);
  }

  NM* getFileBatchCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FTS_1);
  }

  bool isFTS_1(size_t index = 0) {
    try {
      return this->getObject(index, FTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileBatchCount(size_t index = 0) {
    try {
      return this->getObject(index, FTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Trailer Comment
   */

  ST* getFTS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FTS_2);
  }

  ST* getFileTrailerComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FTS_2);
  }

  bool isFTS_2(size_t index = 0) {
    try {
      return this->getObject(index, FTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileTrailerComment(size_t index = 0) {
    try {
      return this->getObject(index, FTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FTS */

} /* End of namespace HL7_29 */
#endif /* __FTS_v29_H__ */
