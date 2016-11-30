/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __IN3_v24_H__
#define __IN3_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0233.h"
#include "../datatype/CE_0345.h"
#include "../datatype/CE_0346.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/DTN.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/MOP.h"
#include "../datatype/PCF.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Insurance Additional Information, Certification */
class IN3 : public HL7Segment {
 public:
  IN3() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    IN3_1,
    IN3_2,
    IN3_3,
    IN3_4,
    IN3_5,
    IN3_6,
    IN3_7,
    IN3_8,
    IN3_9,
    IN3_10,
    IN3_11,
    IN3_12,
    IN3_13,
    IN3_14,
    IN3_15,
    IN3_16,
    IN3_17,
    IN3_18,
    IN3_19,
    IN3_20,
    IN3_21,
    IN3_22,
    IN3_23,
    IN3_24,
    IN3_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "IN3"; }
  IN3* create() const { return new IN3(); }

 private:
  void init() {
    setName("IN3");
    /* Init members */
    addObject<SI>(IN3_1, "IN3.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(IN3_2, "IN3.2", HL7::optional, HL7::repetition_off);
    addObject<XCN>(IN3_3, "IN3.3", HL7::optional, HL7::repetition_on);
    addObject<ID>(IN3_4, "IN3.4", HL7::optional, HL7::repetition_off);
    addObject<MOP>(IN3_5, "IN3.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(IN3_6, "IN3.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(IN3_7, "IN3.7", HL7::optional, HL7::repetition_off);
    addObject<XCN>(IN3_8, "IN3.8", HL7::optional, HL7::repetition_on);
    addObject<DT>(IN3_9, "IN3.9", HL7::optional, HL7::repetition_off);
    addObject<DT>(IN3_10, "IN3.10", HL7::optional, HL7::repetition_off);
    addObject<DTN>(IN3_11, "IN3.11", HL7::optional, HL7::repetition_off);
    addObject<CE_0233>(IN3_12, "IN3.12", HL7::optional, HL7::repetition_off);
    addObject<TS>(IN3_13, "IN3.13", HL7::optional, HL7::repetition_off);
    addObject<XCN>(IN3_14, "IN3.14", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN3_15, "IN3.15", HL7::optional, HL7::repetition_off);
    addObject<XTN>(IN3_16, "IN3.16", HL7::optional, HL7::repetition_on);
    addObject<CE_0345>(IN3_17, "IN3.17", HL7::optional, HL7::repetition_off);
    addObject<CE_0346>(IN3_18, "IN3.18", HL7::optional, HL7::repetition_off);
    addObject<XTN>(IN3_19, "IN3.19", HL7::optional, HL7::repetition_on);
    addObject<PCF>(IN3_20, "IN3.20", HL7::optional, HL7::repetition_on);
    addObject<ST>(IN3_21, "IN3.21", HL7::optional, HL7::repetition_off);
    addObject<DT>(IN3_22, "IN3.22", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN3_23, "IN3.23", HL7::optional, HL7::repetition_off);
    addObject<IS>(IN3_24, "IN3.24", HL7::optional, HL7::repetition_on);
    addObject<XCN>(IN3_25, "IN3.25", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - IN3
   */

  SI* getIN3_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IN3_1);
  }

  SI* getSetIDIN3(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, IN3_1);
  }

  bool isIN3_1(size_t index = 0) {
    try {
      return this->getObject(index, IN3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDIN3(size_t index = 0) {
    try {
      return this->getObject(index, IN3_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Number
   */

  CX* getIN3_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN3_2);
  }

  CX* getCertificationNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, IN3_2);
  }

  bool isIN3_2(size_t index = 0) {
    try {
      return this->getObject(index, IN3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN3_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certified By
   */

  XCN* getIN3_3(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_3);
  }

  XCN* getCertifiedBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_3);
  }

  bool isIN3_3(size_t index = 0) {
    try {
      return this->getObject(index, IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertifiedBy(size_t index = 0) {
    try {
      return this->getObject(index, IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Required
   */

  ID* getIN3_4(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN3_4);
  }

  ID* getCertificationRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, IN3_4);
  }

  bool isIN3_4(size_t index = 0) {
    try {
      return this->getObject(index, IN3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationRequired(size_t index = 0) {
    try {
      return this->getObject(index, IN3_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Penalty
   */

  MOP* getIN3_5(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, IN3_5);
  }

  MOP* getPenalty(size_t index = 0) {
    return (MOP*)this->getObjectSafe(index, IN3_5);
  }

  bool isIN3_5(size_t index = 0) {
    try {
      return this->getObject(index, IN3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPenalty(size_t index = 0) {
    try {
      return this->getObject(index, IN3_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Date/Time
   */

  TS* getIN3_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_6);
  }

  TS* getCertificationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_6);
  }

  bool isIN3_6(size_t index = 0) {
    try {
      return this->getObject(index, IN3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IN3_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Modify Date/Time
   */

  TS* getIN3_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_7);
  }

  TS* getCertificationModifyDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_7);
  }

  bool isIN3_7(size_t index = 0) {
    try {
      return this->getObject(index, IN3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationModifyDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IN3_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Operator
   */

  XCN* getIN3_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_8);
  }

  XCN* getOperator(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_8);
  }

  bool isIN3_8(size_t index = 0) {
    try {
      return this->getObject(index, IN3_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOperator(size_t index = 0) {
    try {
      return this->getObject(index, IN3_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Begin Date
   */

  DT* getIN3_9(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_9);
  }

  DT* getCertificationBeginDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_9);
  }

  bool isIN3_9(size_t index = 0) {
    try {
      return this->getObject(index, IN3_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationBeginDate(size_t index = 0) {
    try {
      return this->getObject(index, IN3_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification End Date
   */

  DT* getIN3_10(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_10);
  }

  DT* getCertificationEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_10);
  }

  bool isIN3_10(size_t index = 0) {
    try {
      return this->getObject(index, IN3_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationEndDate(size_t index = 0) {
    try {
      return this->getObject(index, IN3_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Days
   */

  DTN* getIN3_11(size_t index = 0) {
    return (DTN*)this->getObjectSafe(index, IN3_11);
  }

  DTN* getDays(size_t index = 0) {
    return (DTN*)this->getObjectSafe(index, IN3_11);
  }

  bool isIN3_11(size_t index = 0) {
    try {
      return this->getObject(index, IN3_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDays(size_t index = 0) {
    try {
      return this->getObject(index, IN3_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-Concur Code/Description
   */

  CE_0233* getIN3_12(size_t index = 0) {
    return (CE_0233*)this->getObjectSafe(index, IN3_12);
  }

  CE_0233* getNonConcurCodeDescription(size_t index = 0) {
    return (CE_0233*)this->getObjectSafe(index, IN3_12);
  }

  bool isIN3_12(size_t index = 0) {
    try {
      return this->getObject(index, IN3_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonConcurCodeDescription(size_t index = 0) {
    try {
      return this->getObject(index, IN3_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Non-Concur Effective Date/Time
   */

  TS* getIN3_13(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_13);
  }

  TS* getNonConcurEffectiveDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, IN3_13);
  }

  bool isIN3_13(size_t index = 0) {
    try {
      return this->getObject(index, IN3_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNonConcurEffectiveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, IN3_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Physician Reviewer
   */

  XCN* getIN3_14(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_14);
  }

  XCN* getPhysicianReviewer(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_14);
  }

  bool isIN3_14(size_t index = 0) {
    try {
      return this->getObject(index, IN3_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhysicianReviewer(size_t index = 0) {
    try {
      return this->getObject(index, IN3_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Contact
   */

  ST* getIN3_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN3_15);
  }

  ST* getCertificationContact(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN3_15);
  }

  bool isIN3_15(size_t index = 0) {
    try {
      return this->getObject(index, IN3_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationContact(size_t index = 0) {
    try {
      return this->getObject(index, IN3_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Contact Phone Number
   */

  XTN* getIN3_16(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN3_16);
  }

  XTN* getCertificationContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN3_16);
  }

  bool isIN3_16(size_t index = 0) {
    try {
      return this->getObject(index, IN3_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN3_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appeal Reason
   */

  CE_0345* getIN3_17(size_t index = 0) {
    return (CE_0345*)this->getObjectSafe(index, IN3_17);
  }

  CE_0345* getAppealReason(size_t index = 0) {
    return (CE_0345*)this->getObjectSafe(index, IN3_17);
  }

  bool isIN3_17(size_t index = 0) {
    try {
      return this->getObject(index, IN3_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppealReason(size_t index = 0) {
    try {
      return this->getObject(index, IN3_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Agency
   */

  CE_0346* getIN3_18(size_t index = 0) {
    return (CE_0346*)this->getObjectSafe(index, IN3_18);
  }

  CE_0346* getCertificationAgency(size_t index = 0) {
    return (CE_0346*)this->getObjectSafe(index, IN3_18);
  }

  bool isIN3_18(size_t index = 0) {
    try {
      return this->getObject(index, IN3_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationAgency(size_t index = 0) {
    try {
      return this->getObject(index, IN3_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certification Agency Phone Number
   */

  XTN* getIN3_19(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN3_19);
  }

  XTN* getCertificationAgencyPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, IN3_19);
  }

  bool isIN3_19(size_t index = 0) {
    try {
      return this->getObject(index, IN3_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertificationAgencyPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, IN3_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pre-Certification Req/Window
   */

  PCF* getIN3_20(size_t index = 0) {
    return (PCF*)this->getObjectSafe(index, IN3_20);
  }

  PCF* getPreCertificationReqWindow(size_t index = 0) {
    return (PCF*)this->getObjectSafe(index, IN3_20);
  }

  bool isIN3_20(size_t index = 0) {
    try {
      return this->getObject(index, IN3_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreCertificationReqWindow(size_t index = 0) {
    try {
      return this->getObject(index, IN3_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Case Manager
   */

  ST* getIN3_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN3_21);
  }

  ST* getCaseManager(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, IN3_21);
  }

  bool isIN3_21(size_t index = 0) {
    try {
      return this->getObject(index, IN3_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCaseManager(size_t index = 0) {
    try {
      return this->getObject(index, IN3_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Opinion Date
   */

  DT* getIN3_22(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_22);
  }

  DT* getSecondOpinionDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, IN3_22);
  }

  bool isIN3_22(size_t index = 0) {
    try {
      return this->getObject(index, IN3_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondOpinionDate(size_t index = 0) {
    try {
      return this->getObject(index, IN3_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Opinion Status
   */

  IS* getIN3_23(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN3_23);
  }

  IS* getSecondOpinionStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN3_23);
  }

  bool isIN3_23(size_t index = 0) {
    try {
      return this->getObject(index, IN3_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondOpinionStatus(size_t index = 0) {
    try {
      return this->getObject(index, IN3_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Opinion Documentation Received
   */

  IS* getIN3_24(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN3_24);
  }

  IS* getSecondOpinionDocumentationReceived(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, IN3_24);
  }

  bool isIN3_24(size_t index = 0) {
    try {
      return this->getObject(index, IN3_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondOpinionDocumentationReceived(size_t index = 0) {
    try {
      return this->getObject(index, IN3_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Second Opinion Physician
   */

  XCN* getIN3_25(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_25);
  }

  XCN* getSecondOpinionPhysician(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, IN3_25);
  }

  bool isIN3_25(size_t index = 0) {
    try {
      return this->getObject(index, IN3_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecondOpinionPhysician(size_t index = 0) {
    try {
      return this->getObject(index, IN3_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of IN3 */

} /* End of namespace HL7_24 */
#endif /* __IN3_v24_H__ */
