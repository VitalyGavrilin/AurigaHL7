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


#ifndef __RMC_v29_H__
#define __RMC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/MOP.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* room coverage */
class RMC : public HL7Data {
 public:
  RMC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    RMC_1, /* Room Type */
    RMC_2, /* Amount Type */
    RMC_3, /* Coverage Amount */
    RMC_4, /* Money or Percentage */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "RMC"; }
  RMC *create() const { return new RMC(); }

 private:
  void init() {
    setName("RMC");
    /* Init members */
    addObject<CWE>(RMC_1, "RMC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RMC_2, "RMC.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RMC_3, "RMC.3", HL7::initialized, HL7::repetition_off);
    addObject<MOP>(RMC_4, "RMC.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Room Type
   */
  CWE *getRMC_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RMC_1);
  }

  CWE *getRoomType(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RMC_1);
  }

  bool isRMC_1(size_t index = 0) {
    try {
      return this->getObject(index, RMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoomType(size_t index = 0) {
    try {
      return this->getObject(index, RMC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Amount Type
   */
  CWE *getRMC_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RMC_2);
  }

  CWE *getAmountType(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, RMC_2);
  }

  bool isRMC_2(size_t index = 0) {
    try {
      return this->getObject(index, RMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountType(size_t index = 0) {
    try {
      return this->getObject(index, RMC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Coverage Amount
   */
  NM *getRMC_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RMC_3);
  }

  NM *getCoverageAmount(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, RMC_3);
  }

  bool isRMC_3(size_t index = 0) {
    try {
      return this->getObject(index, RMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoverageAmount(size_t index = 0) {
    try {
      return this->getObject(index, RMC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Money or Percentage
   */
  MOP *getRMC_4(size_t index = 0) {
    return (MOP *)this->getObjectSafe(index, RMC_4);
  }

  MOP *getMoneyorPercentage(size_t index = 0) {
    return (MOP *)this->getObjectSafe(index, RMC_4);
  }

  bool isRMC_4(size_t index = 0) {
    try {
      return this->getObject(index, RMC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyorPercentage(size_t index = 0) {
    try {
      return this->getObject(index, RMC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End RMC */

} /* End HL7_29 */

#endif /* __RMC_v29_H__ */
