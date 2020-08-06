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


#ifndef __AFF_v29_H__
#define __AFF_v29_H__

#include "../../common/Util.h"
#include "../datatype/DR.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* AFF */
class AFF : public HL7Segment {
 public:
  AFF() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AFF_1,
    AFF_2,
    AFF_3,
    AFF_4,
    AFF_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AFF"; }
  AFF* create() const { return new AFF(); }

 private:
  void init() {
    setName("AFF");
    /* Init members */
    addObject<SI>(AFF_1, "AFF.1", HL7::initialized, HL7::repetition_off);
    addObject<XON>(AFF_2, "AFF.2", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(AFF_3, "AFF.3", HL7::initialized, HL7::repetition_off);
    addObject<DR>(AFF_4, "AFF.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AFF_5, "AFF.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – AFF
   */

  SI* getAFF_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AFF_1);
  }

  SI* getSetIDAFF(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AFF_1);
  }

  bool isAFF_1(size_t index = 0) {
    try {
      return this->getObject(index, AFF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAFF(size_t index = 0) {
    try {
      return this->getObject(index, AFF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Organization
   */

  XON* getAFF_2(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, AFF_2);
  }

  XON* getProfessionalOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, AFF_2);
  }

  bool isAFF_2(size_t index = 0) {
    try {
      return this->getObject(index, AFF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalOrganization(size_t index = 0) {
    try {
      return this->getObject(index, AFF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Organization Address
   */

  XAD* getAFF_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, AFF_3);
  }

  XAD* getProfessionalOrganizationAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, AFF_3);
  }

  bool isAFF_3(size_t index = 0) {
    try {
      return this->getObject(index, AFF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalOrganizationAddress(size_t index = 0) {
    try {
      return this->getObject(index, AFF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Organization Affiliation Date
   */

  DR* getAFF_4(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, AFF_4);
  }

  DR* getProfessionalOrganizationAffiliationDate(size_t index = 0) {
    return (DR*)this->getObjectSafe(index, AFF_4);
  }

  bool isAFF_4(size_t index = 0) {
    try {
      return this->getObject(index, AFF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalOrganizationAffiliationDate(size_t index = 0) {
    try {
      return this->getObject(index, AFF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Professional Affiliation Additional
   */

  ST* getAFF_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AFF_5);
  }

  ST* getProfessionalAffiliationAdditional(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AFF_5);
  }

  bool isAFF_5(size_t index = 0) {
    try {
      return this->getObject(index, AFF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProfessionalAffiliationAdditional(size_t index = 0) {
    try {
      return this->getObject(index, AFF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AFF */

} /* End of namespace HL7_29 */
#endif /* __AFF_v29_H__ */
