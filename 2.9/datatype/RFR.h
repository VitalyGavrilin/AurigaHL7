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


#ifndef __RFR_v29_H__
#define __RFR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/NR.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_29 {

/* reference range */
class RFR : public HL7Data {
 public:
  RFR() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RFR_1, /* Numeric Range */
    RFR_2, /* Administrative Sex */
    RFR_3, /* Age Range */
    RFR_4, /* Gestational Age Range */
    RFR_5, /* Species */
    RFR_6, /* Race/subspecies */
    RFR_7, /* Conditions */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RFR"; }
  RFR *create() const { return new RFR(); }

 private:
  void init() {
    setName("RFR");
    /* Init members */
    addObject<NR>(RFR_1, "RFR.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RFR_2, "RFR.2", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_3, "RFR.3", HL7::initialized, HL7::repetition_off);
    addObject<NR>(RFR_4, "RFR.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(RFR_5, "RFR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RFR_6, "RFR.6", HL7::initialized, HL7::repetition_off);
    addObject<TX>(RFR_7, "RFR.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Numeric Range
   */
  NR *getRFR_1(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  NR *getNumericRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_1);
  }

  bool isRFR_1(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumericRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administrative Sex
   */
  CWE *getRFR_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RFR_2);
  }

  CWE *getAdministrativeSex(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RFR_2);
  }

  bool isRFR_2(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrativeSex(size_t index = 0) {
    try {
      return this->getObject(index, RFR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Age Range
   */
  NR *getRFR_3(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  NR *getAgeRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_3);
  }

  bool isRFR_3(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAgeRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Gestational Age Range
   */
  NR *getRFR_4(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  NR *getGestationalAgeRange(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, RFR_4);
  }

  bool isRFR_4(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGestationalAgeRange(size_t index = 0) {
    try {
      return this->getObject(index, RFR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Species
   */
  TX *getRFR_5(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_5);
  }

  TX *getSpecies(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_5);
  }

  bool isRFR_5(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Race/subspecies
   */
  ST *getRFR_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  ST *getRacesubspecies(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, RFR_6);
  }

  bool isRFR_6(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRacesubspecies(size_t index = 0) {
    try {
      return this->getObject(index, RFR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Conditions
   */
  TX *getRFR_7(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  TX *getConditions(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, RFR_7);
  }

  bool isRFR_7(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditions(size_t index = 0) {
    try {
      return this->getObject(index, RFR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RFR */

} /* End HL7_29 */

#endif /* __RFR_v29_H__ */
