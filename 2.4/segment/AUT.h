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


#ifndef __AUT_v24_H__
#define __AUT_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0072.h"
#include "../datatype/CE_0285.h"
#include "../datatype/CP.h"
#include "../datatype/EI.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Authorization Information */
class AUT : public HL7Segment {
 public:
  AUT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AUT_1,
    AUT_2,
    AUT_3,
    AUT_4,
    AUT_5,
    AUT_6,
    AUT_7,
    AUT_8,
    AUT_9,
    AUT_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AUT"; }
  AUT* create() const { return new AUT(); }

 private:
  void init() {
    setName("AUT");
    /* Init members */
    addObject<CE_0072>(AUT_1, "AUT.1", HL7::optional, HL7::repetition_off);
    addObject<CE_0285>(AUT_2, "AUT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUT_3, "AUT.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(AUT_4, "AUT.4", HL7::optional, HL7::repetition_off);
    addObject<TS>(AUT_5, "AUT.5", HL7::optional, HL7::repetition_off);
    addObject<EI>(AUT_6, "AUT.6", HL7::conditional, HL7::repetition_off);
    addObject<CP>(AUT_7, "AUT.7", HL7::optional, HL7::repetition_off);
    addObject<NM>(AUT_8, "AUT.8", HL7::optional, HL7::repetition_off);
    addObject<NM>(AUT_9, "AUT.9", HL7::optional, HL7::repetition_off);
    addObject<TS>(AUT_10, "AUT.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Authorizing Payor, Plan ID
   */

  CE_0072* getAUT_1(size_t index = 0) {
    return (CE_0072*)this->getObjectSafe(index, AUT_1);
  }

  CE_0072* getAuthorizingPayorPlanID(size_t index = 0) {
    return (CE_0072*)this->getObjectSafe(index, AUT_1);
  }

  bool isAUT_1(size_t index = 0) {
    try {
      return this->getObject(index, AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorPlanID(size_t index = 0) {
    try {
      return this->getObject(index, AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorizing Payor, Company ID
   */

  CE_0285* getAUT_2(size_t index = 0) {
    return (CE_0285*)this->getObjectSafe(index, AUT_2);
  }

  CE_0285* getAuthorizingPayorCompanyID(size_t index = 0) {
    return (CE_0285*)this->getObjectSafe(index, AUT_2);
  }

  bool isAUT_2(size_t index = 0) {
    try {
      return this->getObject(index, AUT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorCompanyID(size_t index = 0) {
    try {
      return this->getObject(index, AUT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorizing Payor, Company Name
   */

  ST* getAUT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_3);
  }

  ST* getAuthorizingPayorCompanyName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, AUT_3);
  }

  bool isAUT_3(size_t index = 0) {
    try {
      return this->getObject(index, AUT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizingPayorCompanyName(size_t index = 0) {
    try {
      return this->getObject(index, AUT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Effective Date
   */

  TS* getAUT_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_4);
  }

  TS* getAuthorizationEffectiveDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_4);
  }

  bool isAUT_4(size_t index = 0) {
    try {
      return this->getObject(index, AUT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Expiration Date
   */

  TS* getAUT_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_5);
  }

  TS* getAuthorizationExpirationDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_5);
  }

  bool isAUT_5(size_t index = 0) {
    try {
      return this->getObject(index, AUT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorization Identifier
   */

  EI* getAUT_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, AUT_6);
  }

  EI* getAuthorizationIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, AUT_6);
  }

  bool isAUT_6(size_t index = 0) {
    try {
      return this->getObject(index, AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, AUT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Limit
   */

  CP* getAUT_7(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, AUT_7);
  }

  CP* getReimbursementLimit(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, AUT_7);
  }

  bool isAUT_7(size_t index = 0) {
    try {
      return this->getObject(index, AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementLimit(size_t index = 0) {
    try {
      return this->getObject(index, AUT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Number of Treatments
   */

  NM* getAUT_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AUT_8);
  }

  NM* getRequestedNumberOfTreatments(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AUT_8);
  }

  bool isAUT_8(size_t index = 0) {
    try {
      return this->getObject(index, AUT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedNumberOfTreatments(size_t index = 0) {
    try {
      return this->getObject(index, AUT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Number of Treatments
   */

  NM* getAUT_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AUT_9);
  }

  NM* getAuthorizedNumberOfTreatments(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AUT_9);
  }

  bool isAUT_9(size_t index = 0) {
    try {
      return this->getObject(index, AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedNumberOfTreatments(size_t index = 0) {
    try {
      return this->getObject(index, AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Date
   */

  TS* getAUT_10(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_10);
  }

  TS* getProcessDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, AUT_10);
  }

  bool isAUT_10(size_t index = 0) {
    try {
      return this->getObject(index, AUT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessDate(size_t index = 0) {
    try {
      return this->getObject(index, AUT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AUT */

} /* End of namespace HL7_24 */
#endif /* __AUT_v24_H__ */
