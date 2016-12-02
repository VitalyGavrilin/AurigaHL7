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


#ifndef __CM0_v24_H__
#define __CM0_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Clinical Study Master */
class CM0 : public HL7Segment {
 public:
  CM0() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CM0_1,
    CM0_2,
    CM0_3,
    CM0_4,
    CM0_5,
    CM0_6,
    CM0_7,
    CM0_8,
    CM0_9,
    CM0_10,
    CM0_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CM0"; }
  CM0* create() const { return new CM0(); }

 private:
  void init() {
    setName("CM0");
    /* Init members */
    addObject<SI>(CM0_1, "CM0.1", HL7::optional, HL7::repetition_off);
    addObject<EI>(CM0_2, "CM0.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(CM0_3, "CM0.3", HL7::optional, HL7::repetition_on);
    addObject<ST>(CM0_4, "CM0.4", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(CM0_5, "CM0.5", HL7::optional, HL7::repetition_on);
    addObject<DT>(CM0_6, "CM0.6", HL7::optional, HL7::repetition_off);
    addObject<NM>(CM0_7, "CM0.7", HL7::optional, HL7::repetition_off);
    addObject<DT>(CM0_8, "CM0.8", HL7::optional, HL7::repetition_off);
    addObject<XCN>(CM0_9, "CM0.9", HL7::optional, HL7::repetition_on);
    addObject<XTN>(CM0_10, "CM0.10", HL7::optional, HL7::repetition_off);
    addObject<XAD>(CM0_11, "CM0.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - CM0
   */

  SI* getCM0_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM0_1);
  }

  SI* getSetIDCM0(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM0_1);
  }

  bool isCM0_1(size_t index = 0) {
    try {
      return this->getObject(index, CM0_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCM0(size_t index = 0) {
    try {
      return this->getObject(index, CM0_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sponsor Study ID
   */

  EI* getCM0_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CM0_2);
  }

  EI* getSponsorStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CM0_2);
  }

  bool isCM0_2(size_t index = 0) {
    try {
      return this->getObject(index, CM0_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSponsorStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CM0_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Study ID
   */

  EI* getCM0_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CM0_3);
  }

  EI* getAlternateStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CM0_3);
  }

  bool isCM0_3(size_t index = 0) {
    try {
      return this->getObject(index, CM0_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CM0_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Title of Study
   */

  ST* getCM0_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM0_4);
  }

  ST* getTitleOfStudy(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM0_4);
  }

  bool isCM0_4(size_t index = 0) {
    try {
      return this->getObject(index, CM0_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTitleOfStudy(size_t index = 0) {
    try {
      return this->getObject(index, CM0_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Chairman of Study
   */

  XCN* getCM0_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CM0_5);
  }

  XCN* getChairmanOfStudy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CM0_5);
  }

  bool isCM0_5(size_t index = 0) {
    try {
      return this->getObject(index, CM0_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChairmanOfStudy(size_t index = 0) {
    try {
      return this->getObject(index, CM0_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last IRB Approval Date
   */

  DT* getCM0_6(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, CM0_6);
  }

  DT* getLastIRBApprovalDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, CM0_6);
  }

  bool isCM0_6(size_t index = 0) {
    try {
      return this->getObject(index, CM0_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastIRBApprovalDate(size_t index = 0) {
    try {
      return this->getObject(index, CM0_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Accrual to Date
   */

  NM* getCM0_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CM0_7);
  }

  NM* getTotalAccrualToDate(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CM0_7);
  }

  bool isCM0_7(size_t index = 0) {
    try {
      return this->getObject(index, CM0_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalAccrualToDate(size_t index = 0) {
    try {
      return this->getObject(index, CM0_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Last Accrual Date
   */

  DT* getCM0_8(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, CM0_8);
  }

  DT* getLastAccrualDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, CM0_8);
  }

  bool isCM0_8(size_t index = 0) {
    try {
      return this->getObject(index, CM0_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLastAccrualDate(size_t index = 0) {
    try {
      return this->getObject(index, CM0_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact for Study
   */

  XCN* getCM0_9(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CM0_9);
  }

  XCN* getContactForStudy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, CM0_9);
  }

  bool isCM0_9(size_t index = 0) {
    try {
      return this->getObject(index, CM0_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactForStudy(size_t index = 0) {
    try {
      return this->getObject(index, CM0_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact's Telephone Number
   */

  XTN* getCM0_10(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CM0_10);
  }

  XTN* getContactSTelephoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CM0_10);
  }

  bool isCM0_10(size_t index = 0) {
    try {
      return this->getObject(index, CM0_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactSTelephoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, CM0_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact's Address
   */

  XAD* getCM0_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CM0_11);
  }

  XAD* getContactSAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CM0_11);
  }

  bool isCM0_11(size_t index = 0) {
    try {
      return this->getObject(index, CM0_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactSAddress(size_t index = 0) {
    try {
      return this->getObject(index, CM0_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CM0 */

} /* End of namespace HL7_24 */
#endif /* __CM0_v24_H__ */
