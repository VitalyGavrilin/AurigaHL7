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


#ifndef __PSS_v29_H__
#define __PSS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/EI.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* PSS */
class PSS : public HL7Segment {
 public:
  PSS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PSS_1,
    PSS_2,
    PSS_3,
    PSS_4,
    PSS_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PSS"; }
  PSS* create() const { return new PSS(); }

 private:
  void init() {
    setName("PSS");
    /* Init members */
    addObject<EI>(PSS_1, "PSS.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PSS_2, "PSS.2", HL7::initialized, HL7::repetition_off);
    addObject<SI>(PSS_3, "PSS.3", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PSS_4, "PSS.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PSS_5, "PSS.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Product/Service Section Number
   */

  EI* getPSS_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSS_1);
  }

  EI* getProviderProductServiceSectionNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSS_1);
  }

  bool isPSS_1(size_t index = 0) {
    try {
      return this->getObject(index, PSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderProductServiceSectionNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Product/Service Section Number
   */

  EI* getPSS_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSS_2);
  }

  EI* getPayerProductServiceSectionNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PSS_2);
  }

  bool isPSS_2(size_t index = 0) {
    try {
      return this->getObject(index, PSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerProductServiceSectionNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product/Service Section Sequence Number
   */

  SI* getPSS_3(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSS_3);
  }

  SI* getProductServiceSectionSequenceNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PSS_3);
  }

  bool isPSS_3(size_t index = 0) {
    try {
      return this->getObject(index, PSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductServiceSectionSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, PSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Billed Amount
   */

  CP* getPSS_4(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSS_4);
  }

  CP* getBilledAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PSS_4);
  }

  bool isPSS_4(size_t index = 0) {
    try {
      return this->getObject(index, PSS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBilledAmount(size_t index = 0) {
    try {
      return this->getObject(index, PSS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Section Description or Heading
   */

  ST* getPSS_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSS_5);
  }

  ST* getSectionDescriptionorHeading(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PSS_5);
  }

  bool isPSS_5(size_t index = 0) {
    try {
      return this->getObject(index, PSS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSectionDescriptionorHeading(size_t index = 0) {
    try {
      return this->getObject(index, PSS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PSS */

} /* End of namespace HL7_29 */
#endif /* __PSS_v29_H__ */
