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


#ifndef __PMT_v29_H__
#define __PMT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* PMT */
class PMT : public HL7Segment {
 public:
  PMT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PMT_1,
    PMT_2,
    PMT_3,
    PMT_4,
    PMT_5,
    PMT_6,
    PMT_7,
    PMT_8,
    PMT_9,
    PMT_10,
    PMT_11,
    PMT_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PMT"; }
  PMT* create() const { return new PMT(); }

 private:
  void init() {
    setName("PMT");
    /* Init members */
    addObject<EI>(PMT_1, "PMT.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PMT_2, "PMT.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PMT_3, "PMT.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PMT_4, "PMT.4", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PMT_5, "PMT.5", HL7::initialized, HL7::repetition_off);
    addObject<CP>(PMT_6, "PMT.6", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PMT_7, "PMT.7", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PMT_8, "PMT.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PMT_9, "PMT.9", HL7::initialized, HL7::repetition_off);
    addObject<CX>(PMT_10, "PMT.10", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PMT_11, "PMT.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PMT_12, "PMT.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Payment/Remittance Advice Number
   */

  EI* getPMT_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PMT_1);
  }

  EI* getPaymentRemittanceAdviceNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PMT_1);
  }

  bool isPMT_1(size_t index = 0) {
    try {
      return this->getObject(index, PMT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentRemittanceAdviceNumber(size_t index = 0) {
    try {
      return this->getObject(index, PMT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment/Remittance Effective Date/Time
   */

  DTM* getPMT_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_2);
  }

  DTM* getPaymentRemittanceEffectiveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_2);
  }

  bool isPMT_2(size_t index = 0) {
    try {
      return this->getObject(index, PMT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentRemittanceEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PMT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment/Remittance Expiration Date/Time
   */

  DTM* getPMT_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_3);
  }

  DTM* getPaymentRemittanceExpirationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_3);
  }

  bool isPMT_3(size_t index = 0) {
    try {
      return this->getObject(index, PMT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentRemittanceExpirationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PMT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Method
   */

  CWE* getPMT_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PMT_4);
  }

  CWE* getPaymentMethod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PMT_4);
  }

  bool isPMT_4(size_t index = 0) {
    try {
      return this->getObject(index, PMT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentMethod(size_t index = 0) {
    try {
      return this->getObject(index, PMT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment/Remittance Date/Time
   */

  DTM* getPMT_5(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_5);
  }

  DTM* getPaymentRemittanceDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PMT_5);
  }

  bool isPMT_5(size_t index = 0) {
    try {
      return this->getObject(index, PMT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentRemittanceDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PMT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment/Remittance Amount
   */

  CP* getPMT_6(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PMT_6);
  }

  CP* getPaymentRemittanceAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, PMT_6);
  }

  bool isPMT_6(size_t index = 0) {
    try {
      return this->getObject(index, PMT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentRemittanceAmount(size_t index = 0) {
    try {
      return this->getObject(index, PMT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Check Number
   */

  EI* getPMT_7(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PMT_7);
  }

  EI* getCheckNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PMT_7);
  }

  bool isPMT_7(size_t index = 0) {
    try {
      return this->getObject(index, PMT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCheckNumber(size_t index = 0) {
    try {
      return this->getObject(index, PMT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Bank Identification
   */

  XON* getPMT_8(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PMT_8);
  }

  XON* getPayeeBankIdentification(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PMT_8);
  }

  bool isPMT_8(size_t index = 0) {
    try {
      return this->getObject(index, PMT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeBankIdentification(size_t index = 0) {
    try {
      return this->getObject(index, PMT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Transit Number
   */

  ST* getPMT_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PMT_9);
  }

  ST* getPayeeTransitNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PMT_9);
  }

  bool isPMT_9(size_t index = 0) {
    try {
      return this->getObject(index, PMT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeTransitNumber(size_t index = 0) {
    try {
      return this->getObject(index, PMT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payee Bank Account ID
   */

  CX* getPMT_10(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PMT_10);
  }

  CX* getPayeeBankAccountID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PMT_10);
  }

  bool isPMT_10(size_t index = 0) {
    try {
      return this->getObject(index, PMT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayeeBankAccountID(size_t index = 0) {
    try {
      return this->getObject(index, PMT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Organization
   */

  XON* getPMT_11(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PMT_11);
  }

  XON* getPaymentOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PMT_11);
  }

  bool isPMT_11(size_t index = 0) {
    try {
      return this->getObject(index, PMT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentOrganization(size_t index = 0) {
    try {
      return this->getObject(index, PMT_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * ESR-Code-Line
   */

  ST* getPMT_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PMT_12);
  }

  ST* getESRCodeLine(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PMT_12);
  }

  bool isPMT_12(size_t index = 0) {
    try {
      return this->getObject(index, PMT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isESRCodeLine(size_t index = 0) {
    try {
      return this->getObject(index, PMT_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PMT */

} /* End of namespace HL7_29 */
#endif /* __PMT_v29_H__ */
