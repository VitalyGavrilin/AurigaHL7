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


#ifndef __PYE_v29_H__
#define __PYE_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/SI.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* PYE */
class PYE : public HL7Segment {
 public:
  PYE() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PYE_1,
    PYE_2,
    PYE_3,
    PYE_4,
    PYE_5,
    PYE_6,
    PYE_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PYE"; }
  PYE* create() const { return new PYE(); }

 private:
  void init() {
    setName("PYE");
    /* Init members */
    addObject<SI>(PYE_1, "PYE.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PYE_2, "PYE.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PYE_3, "PYE.3", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PYE_4, "PYE.4", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(PYE_5, "PYE.5", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PYE_6, "PYE.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PYE_7, "PYE.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – PYE
   */

  SI* getPYE_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PYE_1);
  }

  SI* getSetIDPYE(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PYE_1);
  }

  bool isPYE_1(size_t index = 0) {
    try {
      return this->getObject(index, PYE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPYE(size_t index = 0) {
    try {
      return this->getObject(index, PYE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Type
   */

  CWE* getPYE_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_2);
  }

  CWE* getPayeeType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_2);
  }

  bool isPYE_2(size_t index = 0) {
    try {
      return this->getObject(index, PYE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeType(size_t index = 0) {
    try {
      return this->getObject(index, PYE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Relationship to Invoice
   */

  CWE* getPYE_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_3);
  }

  CWE* getPayeeRelationshiptoInvoice(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_3);
  }

  bool isPYE_3(size_t index = 0) {
    try {
      return this->getObject(index, PYE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeRelationshiptoInvoice(size_t index = 0) {
    try {
      return this->getObject(index, PYE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Identification List
   */

  XON* getPYE_4(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PYE_4);
  }

  XON* getPayeeIdentificationList(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PYE_4);
  }

  bool isPYE_4(size_t index = 0) {
    try {
      return this->getObject(index, PYE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeIdentificationList(size_t index = 0) {
    try {
      return this->getObject(index, PYE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Person Name
   */

  XPN* getPYE_5(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PYE_5);
  }

  XPN* getPayeePersonName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PYE_5);
  }

  bool isPYE_5(size_t index = 0) {
    try {
      return this->getObject(index, PYE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeePersonName(size_t index = 0) {
    try {
      return this->getObject(index, PYE_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Address
   */

  XAD* getPYE_6(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PYE_6);
  }

  XAD* getPayeeAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PYE_6);
  }

  bool isPYE_6(size_t index = 0) {
    try {
      return this->getObject(index, PYE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeAddress(size_t index = 0) {
    try {
      return this->getObject(index, PYE_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Method
   */

  CWE* getPYE_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_7);
  }

  CWE* getPaymentMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PYE_7);
  }

  bool isPYE_7(size_t index = 0) {
    try {
      return this->getObject(index, PYE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentMethod(size_t index = 0) {
    try {
      return this->getObject(index, PYE_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PYE */

} /* End of namespace HL7_29 */
#endif /* __PYE_v29_H__ */
