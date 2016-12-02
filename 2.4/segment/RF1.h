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


#ifndef __RF1_v24_H__
#define __RF1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0280.h"
#include "../datatype/CE_0281.h"
#include "../datatype/CE_0282.h"
#include "../datatype/CE_0283.h"
#include "../datatype/CE_0284.h"
#include "../datatype/CE_0336.h"
#include "../datatype/EI.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Referral Information */
class RF1 : public HL7Segment {
 public:
  RF1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RF1_1,
    RF1_2,
    RF1_3,
    RF1_4,
    RF1_5,
    RF1_6,
    RF1_7,
    RF1_8,
    RF1_9,
    RF1_10,
    RF1_11,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RF1"; }
  RF1* create() const { return new RF1(); }

 private:
  void init() {
    setName("RF1");
    /* Init members */
    addObject<CE_0283>(RF1_1, "RF1.1", HL7::optional, HL7::repetition_off);
    addObject<CE_0280>(RF1_2, "RF1.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0281>(RF1_3, "RF1.3", HL7::optional, HL7::repetition_off);
    addObject<CE_0282>(RF1_4, "RF1.4", HL7::optional, HL7::repetition_on);
    addObject<CE_0284>(RF1_5, "RF1.5", HL7::optional, HL7::repetition_off);
    addObject<EI>(RF1_6, "RF1.6", HL7::initialized, HL7::repetition_off);
    addObject<TS>(RF1_7, "RF1.7", HL7::optional, HL7::repetition_off);
    addObject<TS>(RF1_8, "RF1.8", HL7::optional, HL7::repetition_off);
    addObject<TS>(RF1_9, "RF1.9", HL7::optional, HL7::repetition_off);
    addObject<CE_0336>(RF1_10, "RF1.10", HL7::optional, HL7::repetition_on);
    addObject<EI>(RF1_11, "RF1.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Referral Status
   */

  CE_0283* getRF1_1(size_t index = 0) {
    return (CE_0283*)this->getObjectSafe(index, RF1_1);
  }

  CE_0283* getReferralStatus(size_t index = 0) {
    return (CE_0283*)this->getObjectSafe(index, RF1_1);
  }

  bool isRF1_1(size_t index = 0) {
    try {
      return this->getObject(index, RF1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralStatus(size_t index = 0) {
    try {
      return this->getObject(index, RF1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Priority
   */

  CE_0280* getRF1_2(size_t index = 0) {
    return (CE_0280*)this->getObjectSafe(index, RF1_2);
  }

  CE_0280* getReferralPriority(size_t index = 0) {
    return (CE_0280*)this->getObjectSafe(index, RF1_2);
  }

  bool isRF1_2(size_t index = 0) {
    try {
      return this->getObject(index, RF1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralPriority(size_t index = 0) {
    try {
      return this->getObject(index, RF1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Type
   */

  CE_0281* getRF1_3(size_t index = 0) {
    return (CE_0281*)this->getObjectSafe(index, RF1_3);
  }

  CE_0281* getReferralType(size_t index = 0) {
    return (CE_0281*)this->getObjectSafe(index, RF1_3);
  }

  bool isRF1_3(size_t index = 0) {
    try {
      return this->getObject(index, RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralType(size_t index = 0) {
    try {
      return this->getObject(index, RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Disposition
   */

  CE_0282* getRF1_4(size_t index = 0) {
    return (CE_0282*)this->getObjectSafe(index, RF1_4);
  }

  CE_0282* getReferralDisposition(size_t index = 0) {
    return (CE_0282*)this->getObjectSafe(index, RF1_4);
  }

  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralDisposition(size_t index = 0) {
    try {
      return this->getObject(index, RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Category
   */

  CE_0284* getRF1_5(size_t index = 0) {
    return (CE_0284*)this->getObjectSafe(index, RF1_5);
  }

  CE_0284* getReferralCategory(size_t index = 0) {
    return (CE_0284*)this->getObjectSafe(index, RF1_5);
  }

  bool isRF1_5(size_t index = 0) {
    try {
      return this->getObject(index, RF1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralCategory(size_t index = 0) {
    try {
      return this->getObject(index, RF1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Originating Referral Identifier
   */

  EI* getRF1_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_6);
  }

  EI* getOriginatingReferralIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_6);
  }

  bool isRF1_6(size_t index = 0) {
    try {
      return this->getObject(index, RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginatingReferralIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */

  TS* getRF1_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_7);
  }

  TS* getEffectiveDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_7);
  }

  bool isRF1_7(size_t index = 0) {
    try {
      return this->getObject(index, RF1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */

  TS* getRF1_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_8);
  }

  TS* getExpirationDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_8);
  }

  bool isRF1_8(size_t index = 0) {
    try {
      return this->getObject(index, RF1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Date
   */

  TS* getRF1_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_9);
  }

  TS* getProcessDate(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RF1_9);
  }

  bool isRF1_9(size_t index = 0) {
    try {
      return this->getObject(index, RF1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Reason
   */

  CE_0336* getRF1_10(size_t index = 0) {
    return (CE_0336*)this->getObjectSafe(index, RF1_10);
  }

  CE_0336* getReferralReason(size_t index = 0) {
    return (CE_0336*)this->getObjectSafe(index, RF1_10);
  }

  bool isRF1_10(size_t index = 0) {
    try {
      return this->getObject(index, RF1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralReason(size_t index = 0) {
    try {
      return this->getObject(index, RF1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * External Referral Identifier
   */

  EI* getRF1_11(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_11);
  }

  EI* getExternalReferralIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_11);
  }

  bool isRF1_11(size_t index = 0) {
    try {
      return this->getObject(index, RF1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalReferralIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RF1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RF1 */

} /* End of namespace HL7_24 */
#endif /* __RF1_v24_H__ */
