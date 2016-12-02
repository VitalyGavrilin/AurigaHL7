/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __PR1_v24_H__
#define __PR1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0051.h"
#include "../datatype/CE_0059.h"
#include "../datatype/CE_0088.h"
#include "../datatype/CE_0340.h"
#include "../datatype/CE_0417.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Procedures */
class PR1 : public HL7Segment {
 public:
  PR1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PR1_1,
    PR1_2,
    PR1_3,
    PR1_4,
    PR1_5,
    PR1_6,
    PR1_7,
    PR1_8,
    PR1_9,
    PR1_10,
    PR1_11,
    PR1_12,
    PR1_13,
    PR1_14,
    PR1_15,
    PR1_16,
    PR1_17,
    PR1_18,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PR1"; }
  PR1* create() const { return new PR1(); }

 private:
  void init() {
    setName("PR1");
    /* Init members */
    addObject<SI>(PR1_1, "PR1.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PR1_2, "PR1.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0088>(PR1_3, "PR1.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PR1_4, "PR1.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(PR1_5, "PR1.5", HL7::initialized, HL7::repetition_off);
    addObject<IS>(PR1_6, "PR1.6", HL7::optional, HL7::repetition_off);
    addObject<NM>(PR1_7, "PR1.7", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PR1_8, "PR1.8", HL7::optional, HL7::repetition_on);
    addObject<IS>(PR1_9, "PR1.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(PR1_10, "PR1.10", HL7::optional, HL7::repetition_off);
    addObject<XCN>(PR1_11, "PR1.11", HL7::optional, HL7::repetition_on);
    addObject<XCN>(PR1_12, "PR1.12", HL7::optional, HL7::repetition_on);
    addObject<CE_0059>(PR1_13, "PR1.13", HL7::optional, HL7::repetition_off);
    addObject<ID>(PR1_14, "PR1.14", HL7::optional, HL7::repetition_off);
    addObject<CE_0051>(PR1_15, "PR1.15", HL7::optional, HL7::repetition_off);
    addObject<CE_0340>(PR1_16, "PR1.16", HL7::optional, HL7::repetition_on);
    addObject<IS>(PR1_17, "PR1.17", HL7::optional, HL7::repetition_off);
    addObject<CE_0417>(PR1_18, "PR1.18", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - PR1
   */

  SI* getPR1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PR1_1);
  }

  SI* getSetIDPR1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PR1_1);
  }

  bool isPR1_1(size_t index = 0) {
    try {
      return this->getObject(index, PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDPR1(size_t index = 0) {
    try {
      return this->getObject(index, PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Coding Method
   */

  IS* getPR1_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_2);
  }

  IS* getProcedureCodingMethod(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_2);
  }

  bool isPR1_2(size_t index = 0) {
    try {
      return this->getObject(index, PR1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodingMethod(size_t index = 0) {
    try {
      return this->getObject(index, PR1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CE_0088* getPR1_3(size_t index = 0) {
    return (CE_0088*)this->getObjectSafe(index, PR1_3);
  }

  CE_0088* getProcedureCode(size_t index = 0) {
    return (CE_0088*)this->getObjectSafe(index, PR1_3);
  }

  bool isPR1_3(size_t index = 0) {
    try {
      return this->getObject(index, PR1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Description
   */

  ST* getPR1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_4);
  }

  ST* getProcedureDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PR1_4);
  }

  bool isPR1_4(size_t index = 0) {
    try {
      return this->getObject(index, PR1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDescription(size_t index = 0) {
    try {
      return this->getObject(index, PR1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Date/Time
   */

  TS* getPR1_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PR1_5);
  }

  TS* getProcedureDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PR1_5);
  }

  bool isPR1_5(size_t index = 0) {
    try {
      return this->getObject(index, PR1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PR1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Functional Type
   */

  IS* getPR1_6(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_6);
  }

  IS* getProcedureFunctionalType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_6);
  }

  bool isPR1_6(size_t index = 0) {
    try {
      return this->getObject(index, PR1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureFunctionalType(size_t index = 0) {
    try {
      return this->getObject(index, PR1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Minutes
   */

  NM* getPR1_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_7);
  }

  NM* getProcedureMinutes(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_7);
  }

  bool isPR1_7(size_t index = 0) {
    try {
      return this->getObject(index, PR1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureMinutes(size_t index = 0) {
    try {
      return this->getObject(index, PR1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesiologist
   */

  XCN* getPR1_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_8);
  }

  XCN* getAnesthesiologist(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_8);
  }

  bool isPR1_8(size_t index = 0) {
    try {
      return this->getObject(index, PR1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiologist(size_t index = 0) {
    try {
      return this->getObject(index, PR1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesia Code
   */

  IS* getPR1_9(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_9);
  }

  IS* getAnesthesiaCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_9);
  }

  bool isPR1_9(size_t index = 0) {
    try {
      return this->getObject(index, PR1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiaCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anesthesia Minutes
   */

  NM* getPR1_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_10);
  }

  NM* getAnesthesiaMinutes(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PR1_10);
  }

  bool isPR1_10(size_t index = 0) {
    try {
      return this->getObject(index, PR1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnesthesiaMinutes(size_t index = 0) {
    try {
      return this->getObject(index, PR1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Surgeon
   */

  XCN* getPR1_11(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_11);
  }

  XCN* getSurgeon(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_11);
  }

  bool isPR1_11(size_t index = 0) {
    try {
      return this->getObject(index, PR1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurgeon(size_t index = 0) {
    try {
      return this->getObject(index, PR1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Practitioner
   */

  XCN* getPR1_12(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_12);
  }

  XCN* getProcedurePractitioner(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PR1_12);
  }

  bool isPR1_12(size_t index = 0) {
    try {
      return this->getObject(index, PR1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedurePractitioner(size_t index = 0) {
    try {
      return this->getObject(index, PR1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Consent Code
   */

  CE_0059* getPR1_13(size_t index = 0) {
    return (CE_0059*)this->getObjectSafe(index, PR1_13);
  }

  CE_0059* getConsentCode(size_t index = 0) {
    return (CE_0059*)this->getObjectSafe(index, PR1_13);
  }

  bool isPR1_13(size_t index = 0) {
    try {
      return this->getObject(index, PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConsentCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Priority
   */

  ID* getPR1_14(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_14);
  }

  ID* getProcedurePriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PR1_14);
  }

  bool isPR1_14(size_t index = 0) {
    try {
      return this->getObject(index, PR1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedurePriority(size_t index = 0) {
    try {
      return this->getObject(index, PR1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Associated Diagnosis Code
   */

  CE_0051* getPR1_15(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, PR1_15);
  }

  CE_0051* getAssociatedDiagnosisCode(size_t index = 0) {
    return (CE_0051*)this->getObjectSafe(index, PR1_15);
  }

  bool isPR1_15(size_t index = 0) {
    try {
      return this->getObject(index, PR1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssociatedDiagnosisCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CE_0340* getPR1_16(size_t index = 0) {
    return (CE_0340*)this->getObjectSafe(index, PR1_16);
  }

  CE_0340* getProcedureCodeModifier(size_t index = 0) {
    return (CE_0340*)this->getObjectSafe(index, PR1_16);
  }

  bool isPR1_16(size_t index = 0) {
    try {
      return this->getObject(index, PR1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, PR1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure DRG Type
   */

  IS* getPR1_17(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_17);
  }

  IS* getProcedureDRGType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, PR1_17);
  }

  bool isPR1_17(size_t index = 0) {
    try {
      return this->getObject(index, PR1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureDRGType(size_t index = 0) {
    try {
      return this->getObject(index, PR1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Tissue Type Code
   */

  CE_0417* getPR1_18(size_t index = 0) {
    return (CE_0417*)this->getObjectSafe(index, PR1_18);
  }

  CE_0417* getTissueTypeCode(size_t index = 0) {
    return (CE_0417*)this->getObjectSafe(index, PR1_18);
  }

  bool isPR1_18(size_t index = 0) {
    try {
      return this->getObject(index, PR1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTissueTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, PR1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PR1 */

} /* End of namespace HL7_24 */
#endif /* __PR1_v24_H__ */
