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


#ifndef __CNN_v29_H__
#define __CNN_v29_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* composite ID number and name simplified */
class CNN : public HL7Data {
 public:
  CNN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CNN_1, /* ID Number */
    CNN_2, /* Family Name */
    CNN_3, /* Given Name */
    CNN_4, /* Suffix */
    CNN_5, /* Prefix */
    CNN_6, /* Degree */
    CNN_7, /* Source Table */
    CNN_8, /* Assigning Authority - Namespace ID */
    CNN_9, /* Assigning Authority - Universal ID */
    CNN_10, /* Assigning Authority - Universal ID Type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CNN"; }
  CNN *create() const { return new CNN(); }

 private:
  void init() {
    setName("CNN");
    /* Init members */
    addObject<ST>(CNN_1, "CNN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_2, "CNN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_3, "CNN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_4, "CNN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_5, "CNN.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_6, "CNN.6", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_7, "CNN.7", HL7::initialized, HL7::repetition_off);
    addObject<IS>(CNN_8, "CNN.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CNN_9, "CNN.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CNN_10, "CNN.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * ID Number
   */
  ST *getCNN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_1);
  }

  ST *getIDNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_1);
  }

  bool isCNN_1(size_t index = 0) {
    try {
      return this->getObject(index, CNN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIDNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Family Name
   */
  ST *getCNN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_2);
  }

  ST *getFamilyName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_2);
  }

  bool isCNN_2(size_t index = 0) {
    try {
      return this->getObject(index, CNN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, CNN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Given Name
   */
  ST *getCNN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_3);
  }

  ST *getGivenName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_3);
  }

  bool isCNN_3(size_t index = 0) {
    try {
      return this->getObject(index, CNN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGivenName(size_t index = 0) {
    try {
      return this->getObject(index, CNN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Suffix
   */
  ST *getCNN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_4);
  }

  ST *getSuffix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_4);
  }

  bool isCNN_4(size_t index = 0) {
    try {
      return this->getObject(index, CNN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSuffix(size_t index = 0) {
    try {
      return this->getObject(index, CNN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Prefix
   */
  ST *getCNN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_5);
  }

  ST *getPrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_5);
  }

  bool isCNN_5(size_t index = 0) {
    try {
      return this->getObject(index, CNN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrefix(size_t index = 0) {
    try {
      return this->getObject(index, CNN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Degree
   */
  IS *getCNN_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_6);
  }

  IS *getDegree(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_6);
  }

  bool isCNN_6(size_t index = 0) {
    try {
      return this->getObject(index, CNN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegree(size_t index = 0) {
    try {
      return this->getObject(index, CNN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Table
   */
  IS *getCNN_7(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_7);
  }

  IS *getSourceTable(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_7);
  }

  bool isCNN_7(size_t index = 0) {
    try {
      return this->getObject(index, CNN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceTable(size_t index = 0) {
    try {
      return this->getObject(index, CNN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority - Namespace ID
   */
  IS *getCNN_8(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_8);
  }

  IS *getAssigningAuthorityNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CNN_8);
  }

  bool isCNN_8(size_t index = 0) {
    try {
      return this->getObject(index, CNN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, CNN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority - Universal ID
   */
  ST *getCNN_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_9);
  }

  ST *getAssigningAuthorityUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CNN_9);
  }

  bool isCNN_9(size_t index = 0) {
    try {
      return this->getObject(index, CNN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, CNN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigning Authority - Universal ID Type
   */
  ID *getCNN_10(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNN_10);
  }

  ID *getAssigningAuthorityUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CNN_10);
  }

  bool isCNN_10(size_t index = 0) {
    try {
      return this->getObject(index, CNN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssigningAuthorityUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, CNN_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CNN */

} /* End HL7_29 */

#endif /* __CNN_v29_H__ */
