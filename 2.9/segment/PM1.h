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


#ifndef __PM1_v29_H__
#define __PM1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* PM1 */
class PM1 : public HL7Segment {
 public:
  PM1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PM1_1,
    PM1_2,
    PM1_3,
    PM1_4,
    PM1_5,
    PM1_6,
    PM1_7,
    PM1_8,
    PM1_9,
    PM1_10,
    PM1_11,
    PM1_12,
    PM1_13,
    PM1_14,
    PM1_15,
    PM1_16,
    PM1_17,
    PM1_18,
    PM1_19,
    PM1_20,
    PM1_21,
    PM1_22,
    PM1_23,
    PM1_24,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PM1"; }
  PM1* create() const { return new PM1(); }

 private:
  void init() {
    setName("PM1");
    /* Init members */
    addObject<CWE>(PM1_1, "PM1.1", HL7::initialized, HL7::repetition_off);
    addObject<CX>(PM1_2, "PM1.2", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PM1_3, "PM1.3", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PM1_4, "PM1.4", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(PM1_5, "PM1.5", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PM1_6, "PM1.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PM1_7, "PM1.7", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PM1_8, "PM1.8", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PM1_9, "PM1.9", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PM1_10, "PM1.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_11, "PM1.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_12, "PM1.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_13, "PM1.13", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_14, "PM1.14", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_15, "PM1.15", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_16, "PM1.16", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_17, "PM1.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_18, "PM1.18", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_19, "PM1.19", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_20, "PM1.20", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_21, "PM1.21", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PM1_22, "PM1.22", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PM1_23, "PM1.23", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PM1_24, "PM1.24", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Health Plan ID
   */

  CWE* getPM1_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PM1_1);
  }

  CWE* getHealthPlanID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PM1_1);
  }

  bool isPM1_1(size_t index = 0) {
    try {
      return this->getObject(index, PM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHealthPlanID(size_t index = 0) {
    try {
      return this->getObject(index, PM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company ID
   */

  CX* getPM1_2(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PM1_2);
  }

  CX* getInsuranceCompanyID(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PM1_2);
  }

  bool isPM1_2(size_t index = 0) {
    try {
      return this->getObject(index, PM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyID(size_t index = 0) {
    try {
      return this->getObject(index, PM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company Name
   */

  XON* getPM1_3(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PM1_3);
  }

  XON* getInsuranceCompanyName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PM1_3);
  }

  bool isPM1_3(size_t index = 0) {
    try {
      return this->getObject(index, PM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyName(size_t index = 0) {
    try {
      return this->getObject(index, PM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Company Address
   */

  XAD* getPM1_4(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PM1_4);
  }

  XAD* getInsuranceCompanyAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PM1_4);
  }

  bool isPM1_4(size_t index = 0) {
    try {
      return this->getObject(index, PM1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCompanyAddress(size_t index = 0) {
    try {
      return this->getObject(index, PM1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Contact Person
   */

  XPN* getPM1_5(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PM1_5);
  }

  XPN* getInsuranceCoContactPerson(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, PM1_5);
  }

  bool isPM1_5(size_t index = 0) {
    try {
      return this->getObject(index, PM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, PM1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Insurance Co Phone Number
   */

  XTN* getPM1_6(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PM1_6);
  }

  XTN* getInsuranceCoPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PM1_6);
  }

  bool isPM1_6(size_t index = 0) {
    try {
      return this->getObject(index, PM1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInsuranceCoPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, PM1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Number
   */

  ST* getPM1_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_7);
  }

  ST* getGroupNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_7);
  }

  bool isPM1_7(size_t index = 0) {
    try {
      return this->getObject(index, PM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, PM1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Name
   */

  XON* getPM1_8(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PM1_8);
  }

  XON* getGroupName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PM1_8);
  }

  bool isPM1_8(size_t index = 0) {
    try {
      return this->getObject(index, PM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupName(size_t index = 0) {
    try {
      return this->getObject(index, PM1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Plan Effective Date
   */

  DT* getPM1_9(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PM1_9);
  }

  DT* getPlanEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PM1_9);
  }

  bool isPM1_9(size_t index = 0) {
    try {
      return this->getObject(index, PM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlanEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PM1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Plan Expiration Date
   */

  DT* getPM1_10(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PM1_10);
  }

  DT* getPlanExpirationDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PM1_10);
  }

  bool isPM1_10(size_t index = 0) {
    try {
      return this->getObject(index, PM1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlanExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PM1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient DOB Required
   */

  ID* getPM1_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_11);
  }

  ID* getPatientDOBRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_11);
  }

  bool isPM1_11(size_t index = 0) {
    try {
      return this->getObject(index, PM1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientDOBRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Gender Required
   */

  ID* getPM1_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_12);
  }

  ID* getPatientGenderRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_12);
  }

  bool isPM1_12(size_t index = 0) {
    try {
      return this->getObject(index, PM1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientGenderRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Relationship Required
   */

  ID* getPM1_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_13);
  }

  ID* getPatientRelationshipRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_13);
  }

  bool isPM1_13(size_t index = 0) {
    try {
      return this->getObject(index, PM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientRelationshipRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Signature Required
   */

  ID* getPM1_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_14);
  }

  ID* getPatientSignatureRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_14);
  }

  bool isPM1_14(size_t index = 0) {
    try {
      return this->getObject(index, PM1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientSignatureRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnosis Required
   */

  ID* getPM1_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_15);
  }

  ID* getDiagnosisRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_15);
  }

  bool isPM1_15(size_t index = 0) {
    try {
      return this->getObject(index, PM1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosisRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Required
   */

  ID* getPM1_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_16);
  }

  ID* getServiceRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_16);
  }

  bool isPM1_16(size_t index = 0) {
    try {
      return this->getObject(index, PM1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServiceRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Name Required
   */

  ID* getPM1_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_17);
  }

  ID* getPatientNameRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_17);
  }

  bool isPM1_17(size_t index = 0) {
    try {
      return this->getObject(index, PM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientNameRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Address Required
   */

  ID* getPM1_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_18);
  }

  ID* getPatientAddressRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_18);
  }

  bool isPM1_18(size_t index = 0) {
    try {
      return this->getObject(index, PM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientAddressRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Subscribers Name Required
   */

  ID* getPM1_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_19);
  }

  ID* getSubscribersNameRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_19);
  }

  bool isPM1_19(size_t index = 0) {
    try {
      return this->getObject(index, PM1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSubscribersNameRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Workman's Comp Indicator
   */

  ID* getPM1_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_20);
  }

  ID* getWorkmansCompIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_20);
  }

  bool isPM1_20(size_t index = 0) {
    try {
      return this->getObject(index, PM1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWorkmansCompIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PM1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bill Type Required
   */

  ID* getPM1_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_21);
  }

  ID* getBillTypeRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_21);
  }

  bool isPM1_21(size_t index = 0) {
    try {
      return this->getObject(index, PM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBillTypeRequired(size_t index = 0) {
    try {
      return this->getObject(index, PM1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Commercial Carrier Name and Address
   */

  ID* getPM1_22(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_22);
  }

  ID* getCommercialCarrierNameandAddress(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PM1_22);
  }

  bool isPM1_22(size_t index = 0) {
    try {
      return this->getObject(index, PM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommercialCarrierNameandAddress(size_t index = 0) {
    try {
      return this->getObject(index, PM1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Policy Number Pattern
   */

  ST* getPM1_23(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_23);
  }

  ST* getPolicyNumberPattern(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_23);
  }

  bool isPM1_23(size_t index = 0) {
    try {
      return this->getObject(index, PM1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyNumberPattern(size_t index = 0) {
    try {
      return this->getObject(index, PM1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Group Number Pattern
   */

  ST* getPM1_24(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_24);
  }

  ST* getGroupNumberPattern(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PM1_24);
  }

  bool isPM1_24(size_t index = 0) {
    try {
      return this->getObject(index, PM1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGroupNumberPattern(size_t index = 0) {
    try {
      return this->getObject(index, PM1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PM1 */

} /* End of namespace HL7_29 */
#endif /* __PM1_v29_H__ */
