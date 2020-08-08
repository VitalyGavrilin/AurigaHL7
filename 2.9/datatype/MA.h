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


#ifndef __MA_v29_H__
#define __MA_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* multiplexed array */
class MA : public HL7Data {
 public:
  MA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MA_1, /* Sample Y From Channel 1 */
    MA_2, /* Sample Y From Channel 2 */
    MA_3, /* Sample Y From Channel 3 */
    MA_4, /* Sample Y From Channel 4 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MA"; }
  MA *create() const { return new MA(); }

 private:
  void init() {
    setName("MA");
    /* Init members */
    addObject<NM>(MA_1, "MA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_2, "MA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_3, "MA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_4, "MA.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sample Y From Channel 1
   */
  NM *getMA_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_1);
  }

  NM *getSampleYFromChannel1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_1);
  }

  bool isMA_1(size_t index = 0) {
    try {
      return this->getObject(index, MA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSampleYFromChannel1(size_t index = 0) {
    try {
      return this->getObject(index, MA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sample Y From Channel 2
   */
  NM *getMA_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_2);
  }

  NM *getSampleYFromChannel2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_2);
  }

  bool isMA_2(size_t index = 0) {
    try {
      return this->getObject(index, MA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSampleYFromChannel2(size_t index = 0) {
    try {
      return this->getObject(index, MA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sample Y From Channel 3
   */
  NM *getMA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_3);
  }

  NM *getSampleYFromChannel3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_3);
  }

  bool isMA_3(size_t index = 0) {
    try {
      return this->getObject(index, MA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSampleYFromChannel3(size_t index = 0) {
    try {
      return this->getObject(index, MA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sample Y From Channel 4
   */
  NM *getMA_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_4);
  }

  NM *getSampleYFromChannel4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_4);
  }

  bool isMA_4(size_t index = 0) {
    try {
      return this->getObject(index, MA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSampleYFromChannel4(size_t index = 0) {
    try {
      return this->getObject(index, MA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MA */

} /* End HL7_29 */

#endif /* __MA_v29_H__ */
