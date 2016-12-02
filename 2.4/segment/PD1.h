/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __PD1_v24_H__
#define __PD1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0215.h"
#include "../datatype/CE_0435.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"

namespace HL7_24 {

/* patient additional demographic */
class PD1 : public HL7Segment {
 public:
  PD1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PD1_1,
    PD1_2,
    PD1_3,
    PD1_4,
    PD1_5,
    PD1_6,
    PD1_7,
    PD1_8,
    PD1_9,
    PD1_10,
    PD1_11,
    PD1_12,
    PD1_13,
    PD1_14,
    PD1_15,
    PD1_16,
    PD1_17,
    PD1_18,
    PD1_19,
    PD1_20,
    PD1_21,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PD1"; }
  PD1* create() const { return new PD1(); }

 private:
  void init() {
    setName("PD1");
    /* Init members */
    addObject<IS>(PD1_1, "PD1.1", HL7::optional, HL7::repetition_on);
    addObject<IS>(PD1_2, "PD1.2", HL7::optional, HL7::repetition_off);
    addObject<XON>(PD1_3, "PD1.3", HL7::optional, HL7::repetition_on);
    addObject<XCN>(PD1_4, "PD1.4", HL7::optional, HL7::repetition_on);
    addObject<IS>(PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_7, "PD1.7", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_8, "PD1.8", HL7::optional, HL7::repetition_off);
    addObject<ID>(PD1_9, "PD1.9", HL7::optional, HL7::repetition_off);
    addObject<CX>(PD1_10, "PD1.10", HL7::optional, HL7::repetition_on);
    addObject<CE_0215>(PD1_11, "PD1.11", HL7::optional, HL7::repetition_off);
    addObject<ID>(PD1_12, "PD1.12", HL7::optional, HL7::repetition_off);
    addObject<DT>(PD1_13, "PD1.13", HL7::optional, HL7::repetition_off);
    addObject<XON>(PD1_14, "PD1.14", HL7::optional, HL7::repetition_on);
    addObject<CE_0435>(PD1_15, "PD1.15", HL7::optional, HL7::repetition_on);
    addObject<IS>(PD1_16, "PD1.16", HL7::optional, HL7::repetition_off);
    addObject<DT>(PD1_17, "PD1.17", HL7::optional, HL7::repetition_off);
    addObject<DT>(PD1_18, "PD1.18", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_19, "PD1.19", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_20, "PD1.20", HL7::optional, HL7::repetition_off);
    addObject<IS>(PD1_21, "PD1.21", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Living Dependency
   */

  IS* getPD1_1(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_1);
  }

  IS* getLivingDependency(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_1);
  }

  bool isPD1_1(size_t index = 0) {
    try {
      return this->getObject(index, PD1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, PD1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  IS* getPD1_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_2);
  }

  IS* getLivingArrangement(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_2);
  }

  bool isPD1_2(size_t index = 0) {
    try {
      return this->getObject(index, PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Primary Facility
   */

  XON* getPD1_3(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_3);
  }

  XON* getPatientPrimaryFacility(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_3);
  }

  bool isPD1_3(size_t index = 0) {
    try {
      return this->getObject(index, PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientPrimaryFacility(size_t index = 0) {
    try {
      return this->getObject(index, PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Primary Care Provider Name & ID No.
   */

  XCN* getPD1_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PD1_4);
  }

  XCN* getPatientPrimaryCareProviderNameIDNo(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PD1_4);
  }

  bool isPD1_4(size_t index = 0) {
    try {
      return this->getObject(index, PD1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientPrimaryCareProviderNameIDNo(size_t index = 0) {
    try {
      return this->getObject(index, PD1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  IS* getPD1_5(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_5);
  }

  IS* getStudentIndicator(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_5);
  }

  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Handicap
   */

  IS* getPD1_6(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_6);
  }

  IS* getHandicap(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_6);
  }

  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHandicap(size_t index = 0) {
    try {
      return this->getObject(index, PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Will Code
   */

  IS* getPD1_7(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_7);
  }

  IS* getLivingWillCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_7);
  }

  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingWillCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organ Donor Code
   */

  IS* getPD1_8(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_8);
  }

  IS* getOrganDonorCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_8);
  }

  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganDonorCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Separate Bill
   */

  ID* getPD1_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_9);
  }

  ID* getSeparateBill(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_9);
  }

  bool isPD1_9(size_t index = 0) {
    try {
      return this->getObject(index, PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparateBill(size_t index = 0) {
    try {
      return this->getObject(index, PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duplicate Patient
   */

  CX* getPD1_10(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PD1_10);
  }

  CX* getDuplicatePatient(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PD1_10);
  }

  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuplicatePatient(size_t index = 0) {
    try {
      return this->getObject(index, PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CE_0215* getPD1_11(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, PD1_11);
  }

  CE_0215* getPublicityCode(size_t index = 0) {
    return (CE_0215*)this->getObjectSafe(index, PD1_11);
  }

  bool isPD1_11(size_t index = 0) {
    try {
      return this->getObject(index, PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getPD1_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_12);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_12);
  }

  bool isPD1_12(size_t index = 0) {
    try {
      return this->getObject(index, PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator Effective Date
   */

  DT* getPD1_13(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_13);
  }

  DT* getProtectionIndicatorEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_13);
  }

  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicatorEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Place of Worship
   */

  XON* getPD1_14(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_14);
  }

  XON* getPlaceOfWorship(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_14);
  }

  bool isPD1_14(size_t index = 0) {
    try {
      return this->getObject(index, PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlaceOfWorship(size_t index = 0) {
    try {
      return this->getObject(index, PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advance Directive Code
   */

  CE_0435* getPD1_15(size_t index = 0) {
    return (CE_0435*)this->getObjectSafe(index, PD1_15);
  }

  CE_0435* getAdvanceDirectiveCode(size_t index = 0) {
    return (CE_0435*)this->getObjectSafe(index, PD1_15);
  }

  bool isPD1_15(size_t index = 0) {
    try {
      return this->getObject(index, PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvanceDirectiveCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Immunization Registry Status
   */

  IS* getPD1_16(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_16);
  }

  IS* getImmunizationRegistryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_16);
  }

  bool isPD1_16(size_t index = 0) {
    try {
      return this->getObject(index, PD1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImmunizationRegistryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PD1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Immunization Registry Status Effective Date
   */

  DT* getPD1_17(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_17);
  }

  DT* getImmunizationRegistryStatusEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_17);
  }

  bool isPD1_17(size_t index = 0) {
    try {
      return this->getObject(index, PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImmunizationRegistryStatusEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code Effective Date
   */

  DT* getPD1_18(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_18);
  }

  DT* getPublicityCodeEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_18);
  }

  bool isPD1_18(size_t index = 0) {
    try {
      return this->getObject(index, PD1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCodeEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Branch
   */

  IS* getPD1_19(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_19);
  }

  IS* getMilitaryBranch(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_19);
  }

  bool isPD1_19(size_t index = 0) {
    try {
      return this->getObject(index, PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryBranch(size_t index = 0) {
    try {
      return this->getObject(index, PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Rank/Grade
   */

  IS* getPD1_20(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_20);
  }

  IS* getMilitaryRankGrade(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_20);
  }

  bool isPD1_20(size_t index = 0) {
    try {
      return this->getObject(index, PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRankGrade(size_t index = 0) {
    try {
      return this->getObject(index, PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Status
   */

  IS* getPD1_21(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_21);
  }

  IS* getMilitaryStatus(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PD1_21);
  }

  bool isPD1_21(size_t index = 0) {
    try {
      return this->getObject(index, PD1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PD1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PD1 */

} /* End of namespace HL7_24 */
#endif /* __PD1_v24_H__ */
