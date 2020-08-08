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


#ifndef __UB1_v29_H__
#define __UB1_v29_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* UB1 */
class UB1 : public HL7Segment {
 public:
  UB1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    UB1_1,
    UB1_2,
    UB1_3,
    UB1_4,
    UB1_5,
    UB1_6,
    UB1_7,
    UB1_8,
    UB1_9,
    UB1_10,
    UB1_11,
    UB1_12,
    UB1_13,
    UB1_14,
    UB1_15,
    UB1_16,
    UB1_17,
    UB1_18,
    UB1_19,
    UB1_20,
    UB1_21,
    UB1_22,
    UB1_23,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "UB1"; }
  UB1* create() const { return new UB1(); }

 private:
  void init() {
    setName("UB1");
    /* Init members */
    addObject<SI>(UB1_1, "UB1.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_2, "UB1.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_3, "UB1.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_4, "UB1.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_5, "UB1.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_6, "UB1.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_7, "UB1.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_8, "UB1.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_9, "UB1.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_10, "UB1.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_11, "UB1.11", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_12, "UB1.12", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_13, "UB1.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_14, "UB1.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_15, "UB1.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_16, "UB1.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_17, "UB1.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_18, "UB1.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_19, "UB1.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_20, "UB1.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_21, "UB1.21", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_22, "UB1.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(UB1_23, "UB1.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - UB1
   */

  SI* getUB1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, UB1_1);
  }

  SI* getSetIDUB1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, UB1_1);
  }

  bool isUB1_1(size_t index = 0) {
    try {
      return this->getObject(index, UB1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDUB1(size_t index = 0) {
    try {
      return this->getObject(index, UB1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Deductible
   */

  ST* getUB1_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_2);
  }

  ST* getBloodDeductible(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_2);
  }

  bool isUB1_2(size_t index = 0) {
    try {
      return this->getObject(index, UB1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodDeductible(size_t index = 0) {
    try {
      return this->getObject(index, UB1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Furnished-Pints
   */

  ST* getUB1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_3);
  }

  ST* getBloodFurnishedPints(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_3);
  }

  bool isUB1_3(size_t index = 0) {
    try {
      return this->getObject(index, UB1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodFurnishedPints(size_t index = 0) {
    try {
      return this->getObject(index, UB1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Replaced-Pints
   */

  ST* getUB1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_4);
  }

  ST* getBloodReplacedPints(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_4);
  }

  bool isUB1_4(size_t index = 0) {
    try {
      return this->getObject(index, UB1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodReplacedPints(size_t index = 0) {
    try {
      return this->getObject(index, UB1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Not Replaced-Pints
   */

  ST* getUB1_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_5);
  }

  ST* getBloodNotReplacedPints(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_5);
  }

  bool isUB1_5(size_t index = 0) {
    try {
      return this->getObject(index, UB1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodNotReplacedPints(size_t index = 0) {
    try {
      return this->getObject(index, UB1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Co-Insurance Days
   */

  ST* getUB1_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_6);
  }

  ST* getCoInsuranceDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_6);
  }

  bool isUB1_6(size_t index = 0) {
    try {
      return this->getObject(index, UB1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoInsuranceDays(size_t index = 0) {
    try {
      return this->getObject(index, UB1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Condition Code
   */

  ST* getUB1_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_7);
  }

  ST* getConditionCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_7);
  }

  bool isUB1_7(size_t index = 0) {
    try {
      return this->getObject(index, UB1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConditionCode(size_t index = 0) {
    try {
      return this->getObject(index, UB1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Covered Days
   */

  ST* getUB1_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_8);
  }

  ST* getCoveredDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_8);
  }

  bool isUB1_8(size_t index = 0) {
    try {
      return this->getObject(index, UB1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoveredDays(size_t index = 0) {
    try {
      return this->getObject(index, UB1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non Covered Days
   */

  ST* getUB1_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_9);
  }

  ST* getNonCoveredDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_9);
  }

  bool isUB1_9(size_t index = 0) {
    try {
      return this->getObject(index, UB1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonCoveredDays(size_t index = 0) {
    try {
      return this->getObject(index, UB1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value Amount & Code
   */

  ST* getUB1_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_10);
  }

  ST* getValueAmountCode(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_10);
  }

  bool isUB1_10(size_t index = 0) {
    try {
      return this->getObject(index, UB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValueAmountCode(size_t index = 0) {
    try {
      return this->getObject(index, UB1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number Of Grace Days
   */

  ST* getUB1_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_11);
  }

  ST* getNumberOfGraceDays(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_11);
  }

  bool isUB1_11(size_t index = 0) {
    try {
      return this->getObject(index, UB1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfGraceDays(size_t index = 0) {
    try {
      return this->getObject(index, UB1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Program Indicator
   */

  ST* getUB1_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_12);
  }

  ST* getSpecialProgramIndicator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_12);
  }

  bool isUB1_12(size_t index = 0) {
    try {
      return this->getObject(index, UB1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialProgramIndicator(size_t index = 0) {
    try {
      return this->getObject(index, UB1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PSRO/UR Approval Indicator
   */

  ST* getUB1_13(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_13);
  }

  ST* getPSROURApprovalIndicator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_13);
  }

  bool isUB1_13(size_t index = 0) {
    try {
      return this->getObject(index, UB1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPSROURApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, UB1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PSRO/UR Approved Stay-Fm
   */

  ST* getUB1_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_14);
  }

  ST* getPSROURApprovedStayFm(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_14);
  }

  bool isUB1_14(size_t index = 0) {
    try {
      return this->getObject(index, UB1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPSROURApprovedStayFm(size_t index = 0) {
    try {
      return this->getObject(index, UB1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PSRO/UR Approved Stay-To
   */

  ST* getUB1_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_15);
  }

  ST* getPSROURApprovedStayTo(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_15);
  }

  bool isUB1_15(size_t index = 0) {
    try {
      return this->getObject(index, UB1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPSROURApprovedStayTo(size_t index = 0) {
    try {
      return this->getObject(index, UB1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence
   */

  ST* getUB1_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_16);
  }

  ST* getOccurrence(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_16);
  }

  bool isUB1_16(size_t index = 0) {
    try {
      return this->getObject(index, UB1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrence(size_t index = 0) {
    try {
      return this->getObject(index, UB1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Span
   */

  ST* getUB1_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_17);
  }

  ST* getOccurrenceSpan(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_17);
  }

  bool isUB1_17(size_t index = 0) {
    try {
      return this->getObject(index, UB1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceSpan(size_t index = 0) {
    try {
      return this->getObject(index, UB1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occur Span Start Date
   */

  ST* getUB1_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_18);
  }

  ST* getOccurSpanStartDate(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_18);
  }

  bool isUB1_18(size_t index = 0) {
    try {
      return this->getObject(index, UB1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurSpanStartDate(size_t index = 0) {
    try {
      return this->getObject(index, UB1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occur Span End Date
   */

  ST* getUB1_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_19);
  }

  ST* getOccurSpanEndDate(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_19);
  }

  bool isUB1_19(size_t index = 0) {
    try {
      return this->getObject(index, UB1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurSpanEndDate(size_t index = 0) {
    try {
      return this->getObject(index, UB1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UB-82 Locator 2
   */

  ST* getUB1_20(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_20);
  }

  ST* getUB82Locator2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_20);
  }

  bool isUB1_20(size_t index = 0) {
    try {
      return this->getObject(index, UB1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUB82Locator2(size_t index = 0) {
    try {
      return this->getObject(index, UB1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UB-82 Locator 9
   */

  ST* getUB1_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_21);
  }

  ST* getUB82Locator9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_21);
  }

  bool isUB1_21(size_t index = 0) {
    try {
      return this->getObject(index, UB1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUB82Locator9(size_t index = 0) {
    try {
      return this->getObject(index, UB1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UB-82 Locator 27
   */

  ST* getUB1_22(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_22);
  }

  ST* getUB82Locator27(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_22);
  }

  bool isUB1_22(size_t index = 0) {
    try {
      return this->getObject(index, UB1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUB82Locator27(size_t index = 0) {
    try {
      return this->getObject(index, UB1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * UB-82 Locator 45
   */

  ST* getUB1_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_23);
  }

  ST* getUB82Locator45(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, UB1_23);
  }

  bool isUB1_23(size_t index = 0) {
    try {
      return this->getObject(index, UB1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUB82Locator45(size_t index = 0) {
    try {
      return this->getObject(index, UB1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of UB1 */

} /* End of namespace HL7_29 */
#endif /* __UB1_v29_H__ */
