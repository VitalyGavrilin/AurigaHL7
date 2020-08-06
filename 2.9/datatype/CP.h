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


#ifndef __CP_v29_H__
#define __CP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* composite price */
class CP : public HL7Data {
 public:
  CP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CP_1, /* Price */
    CP_2, /* Price Type */
    CP_3, /* From Value */
    CP_4, /* To Value */
    CP_5, /* Range Units */
    CP_6, /* Range Type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CP"; }
  CP *create() const { return new CP(); }

 private:
  void init() {
    setName("CP");
    /* Init members */
    addObject<MO>(CP_1, "CP.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CP_2, "CP.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CP_3, "CP.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CP_4, "CP.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CP_5, "CP.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(CP_6, "CP.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Price
   */
  MO *getCP_1(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, CP_1);
  }

  MO *getPrice(size_t index = 0) {
    return (MO *)this->getObjectSafe(index, CP_1);
  }

  bool isCP_1(size_t index = 0) {
    try {
      return this->getObject(index, CP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrice(size_t index = 0) {
    try {
      return this->getObject(index, CP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Price Type
   */
  ID *getCP_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_2);
  }

  ID *getPriceType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_2);
  }

  bool isCP_2(size_t index = 0) {
    try {
      return this->getObject(index, CP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriceType(size_t index = 0) {
    try {
      return this->getObject(index, CP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * From Value
   */
  NM *getCP_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_3);
  }

  NM *getFromValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_3);
  }

  bool isCP_3(size_t index = 0) {
    try {
      return this->getObject(index, CP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFromValue(size_t index = 0) {
    try {
      return this->getObject(index, CP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * To Value
   */
  NM *getCP_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_4);
  }

  NM *getToValue(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CP_4);
  }

  bool isCP_4(size_t index = 0) {
    try {
      return this->getObject(index, CP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isToValue(size_t index = 0) {
    try {
      return this->getObject(index, CP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Range Units
   */
  CWE *getCP_5(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CP_5);
  }

  CWE *getRangeUnits(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, CP_5);
  }

  bool isCP_5(size_t index = 0) {
    try {
      return this->getObject(index, CP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeUnits(size_t index = 0) {
    try {
      return this->getObject(index, CP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Range Type
   */
  ID *getCP_6(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_6);
  }

  ID *getRangeType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, CP_6);
  }

  bool isCP_6(size_t index = 0) {
    try {
      return this->getObject(index, CP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRangeType(size_t index = 0) {
    try {
      return this->getObject(index, CP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CP */

} /* End HL7_29 */

#endif /* __CP_v29_H__ */
