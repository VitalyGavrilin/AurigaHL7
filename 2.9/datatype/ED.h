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


#ifndef __ED_v29_H__
#define __ED_v29_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* encapsulated data */
class ED : public HL7Data {
 public:
  ED() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    ED_1, /* Source Application */
    ED_2, /* Type of Data */
    ED_3, /* Data Subtype */
    ED_4, /* Encoding */
    ED_5, /* Data */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "ED"; }
  ED *create() const { return new ED(); }

 private:
  void init() {
    setName("ED");
    /* Init members */
    addObject<HD>(ED_1, "ED.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ED_2, "ED.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ED_3, "ED.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ED_4, "ED.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ED_5, "ED.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Source Application
   */
  HD *getED_1(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, ED_1);
  }

  HD *getSourceApplication(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, ED_1);
  }

  bool isED_1(size_t index = 0) {
    try {
      return this->getObject(index, ED_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceApplication(size_t index = 0) {
    try {
      return this->getObject(index, ED_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Type of Data
   */
  ID *getED_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_2);
  }

  ID *getTypeofData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_2);
  }

  bool isED_2(size_t index = 0) {
    try {
      return this->getObject(index, ED_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeofData(size_t index = 0) {
    try {
      return this->getObject(index, ED_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Data Subtype
   */
  ID *getED_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_3);
  }

  ID *getDataSubtype(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_3);
  }

  bool isED_3(size_t index = 0) {
    try {
      return this->getObject(index, ED_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDataSubtype(size_t index = 0) {
    try {
      return this->getObject(index, ED_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Encoding
   */
  ID *getED_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_4);
  }

  ID *getEncoding(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_4);
  }

  bool isED_4(size_t index = 0) {
    try {
      return this->getObject(index, ED_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEncoding(size_t index = 0) {
    try {
      return this->getObject(index, ED_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Data
   */
  TX *getED_5(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, ED_5);
  }

  TX *getData(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, ED_5);
  }

  bool isED_5(size_t index = 0) {
    try {
      return this->getObject(index, ED_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isData(size_t index = 0) {
    try {
      return this->getObject(index, ED_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End ED */

} /* End HL7_29 */

#endif /* __ED_v29_H__ */
