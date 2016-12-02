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


#ifndef __MSA_v24_H__
#define __MSA_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0357.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Message Acknowledgment */
class MSA : public HL7Segment {
 public:
  MSA() { this->init(); }

 private:
  /* */
  enum FIELD_ID { MSA_1, MSA_2, MSA_3, MSA_4, MSA_5, MSA_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "MSA"; }
  MSA* create() const { return new MSA(); }

 private:
  void init() {
    setName("MSA");
    /* Init members */
    addObject<ID>(MSA_1, "MSA.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSA_3, "MSA.3", HL7::optional, HL7::repetition_off);
    addObject<NM>(MSA_4, "MSA.4", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSA_5, "MSA.5", HL7::optional, HL7::repetition_off);
    addObject<CE_0357>(MSA_6, "MSA.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Acknowledgement Code
   */

  ID* getMSA_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_1);
  }

  ID* getAcknowledgementCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_1);
  }

  bool isMSA_1(size_t index = 0) {
    try {
      return this->getObject(index, MSA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcknowledgementCode(size_t index = 0) {
    try {
      return this->getObject(index, MSA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Control ID
   */

  ST* getMSA_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_2);
  }

  ST* getMessageControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_2);
  }

  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageControlID(size_t index = 0) {
    try {
      return this->getObject(index, MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Message
   */

  ST* getMSA_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_3);
  }

  ST* getTextMessage(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSA_3);
  }

  bool isMSA_3(size_t index = 0) {
    try {
      return this->getObject(index, MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextMessage(size_t index = 0) {
    try {
      return this->getObject(index, MSA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Sequence Number
   */

  NM* getMSA_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_4);
  }

  NM* getExpectedSequenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSA_4);
  }

  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Delayed Acknowledgment Type
   */

  ID* getMSA_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_5);
  }

  ID* getDelayedAcknowledgmentType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSA_5);
  }

  bool isMSA_5(size_t index = 0) {
    try {
      return this->getObject(index, MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDelayedAcknowledgmentType(size_t index = 0) {
    try {
      return this->getObject(index, MSA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Error Condition
   */

  CE_0357* getMSA_6(size_t index = 0) {
    return (CE_0357*)this->getObjectSafe(index, MSA_6);
  }

  CE_0357* getErrorCondition(size_t index = 0) {
    return (CE_0357*)this->getObjectSafe(index, MSA_6);
  }

  bool isMSA_6(size_t index = 0) {
    try {
      return this->getObject(index, MSA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isErrorCondition(size_t index = 0) {
    try {
      return this->getObject(index, MSA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MSA */

} /* End of namespace HL7_24 */
#endif /* __MSA_v24_H__ */
