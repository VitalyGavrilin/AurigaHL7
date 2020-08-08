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


#ifndef __ADJ_v29_H__
#define __ADJ_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* ADJ */
class ADJ : public HL7Segment {
 public:
  ADJ() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ADJ_1,
    ADJ_2,
    ADJ_3,
    ADJ_4,
    ADJ_5,
    ADJ_6,
    ADJ_7,
    ADJ_8,
    ADJ_9,
    ADJ_10,
    ADJ_11,
    ADJ_12,
    ADJ_13,
    ADJ_14,
    ADJ_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ADJ"; }
  ADJ* create() const { return new ADJ(); }

 private:
  void init() {
    setName("ADJ");
    /* Init members */
    addObject<EI>(ADJ_1, "ADJ.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ADJ_2, "ADJ.2", HL7::initialized, HL7::repetition_off);
    addObject<SI>(ADJ_3, "ADJ.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ADJ_4, "ADJ.4", HL7::initialized, HL7::repetition_off);
    addObject<CP>(ADJ_5, "ADJ.5", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(ADJ_6, "ADJ.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ADJ_7, "ADJ.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ADJ_8, "ADJ.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ADJ_9, "ADJ.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ADJ_10, "ADJ.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ADJ_11, "ADJ.11", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ADJ_12, "ADJ.12", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ADJ_13, "ADJ.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ADJ_14, "ADJ.14", HL7::initialized, HL7::repetition_off);
    addObject<XON>(ADJ_15, "ADJ.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Provider Adjustment Number
   */

  EI* getADJ_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_1);
  }

  EI* getProviderAdjustmentNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_1);
  }

  bool isADJ_1(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderAdjustmentNumber(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payer Adjustment Number
   */

  EI* getADJ_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_2);
  }

  EI* getPayerAdjustmentNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_2);
  }

  bool isADJ_2(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayerAdjustmentNumber(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Sequence Number
   */

  SI* getADJ_3(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ADJ_3);
  }

  SI* getAdjustmentSequenceNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ADJ_3);
  }

  bool isADJ_3(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Category
   */

  CWE* getADJ_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_4);
  }

  CWE* getAdjustmentCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_4);
  }

  bool isADJ_4(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentCategory(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Amount
   */

  CP* getADJ_5(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, ADJ_5);
  }

  CP* getAdjustmentAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, ADJ_5);
  }

  bool isADJ_5(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentAmount(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Quantity
   */

  CQ* getADJ_6(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, ADJ_6);
  }

  CQ* getAdjustmentQuantity(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, ADJ_6);
  }

  bool isADJ_6(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentQuantity(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Reason PA
   */

  CWE* getADJ_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_7);
  }

  CWE* getAdjustmentReasonPA(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_7);
  }

  bool isADJ_7(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentReasonPA(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Description
   */

  ST* getADJ_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADJ_8);
  }

  ST* getAdjustmentDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ADJ_8);
  }

  bool isADJ_8(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentDescription(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Original Value
   */

  NM* getADJ_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ADJ_9);
  }

  NM* getOriginalValue(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ADJ_9);
  }

  bool isADJ_9(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginalValue(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Substitute Value
   */

  NM* getADJ_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ADJ_10);
  }

  NM* getSubstituteValue(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ADJ_10);
  }

  bool isADJ_10(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubstituteValue(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Action
   */

  CWE* getADJ_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_11);
  }

  CWE* getAdjustmentAction(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ADJ_11);
  }

  bool isADJ_11(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentAction(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Adjustment Number Cross
   */

  EI* getADJ_12(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_12);
  }

  EI* getProviderAdjustmentNumberCross(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_12);
  }

  bool isADJ_12(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderAdjustmentNumberCross(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Provider Product/Service Line Item Number
   */

  EI* getADJ_13(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_13);
  }

  EI* getProviderProductServiceLineItemNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ADJ_13);
  }

  bool isADJ_13(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProviderProductServiceLineItemNumber(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Adjustment Date
   */

  DTM* getADJ_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ADJ_14);
  }

  DTM* getAdjustmentDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ADJ_14);
  }

  bool isADJ_14(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdjustmentDate(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Responsible Organization
   */

  XON* getADJ_15(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ADJ_15);
  }

  XON* getResponsibleOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, ADJ_15);
  }

  bool isADJ_15(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponsibleOrganization(size_t index = 0) {
    try {
      return this->getObject(index, ADJ_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ADJ */

} /* End of namespace HL7_29 */
#endif /* __ADJ_v29_H__ */
