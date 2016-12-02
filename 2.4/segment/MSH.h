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


#ifndef __MSH_v24_H__
#define __MSH_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/MSG.h"
#include "../datatype/NM.h"
#include "../datatype/PT.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/VID.h"

namespace HL7_24 {

/* Message Header */
class MSH : public HL7Segment {
 public:
  MSH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MSH_1,
    MSH_2,
    MSH_3,
    MSH_4,
    MSH_5,
    MSH_6,
    MSH_7,
    MSH_8,
    MSH_9,
    MSH_10,
    MSH_11,
    MSH_12,
    MSH_13,
    MSH_14,
    MSH_15,
    MSH_16,
    MSH_17,
    MSH_18,
    MSH_19,
    MSH_20,
    MSH_21,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MSH"; }
  MSH* create() const { return new MSH(); }

 private:
  void init() {
    setName("MSH");
    /* Init members */
    addObject<ST>(MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSH_2, "MSH.2", HL7::initialized, HL7::repetition_off);
    addObject<HD>(MSH_3, "MSH.3", HL7::optional, HL7::repetition_off);
    addObject<HD>(MSH_4, "MSH.4", HL7::optional, HL7::repetition_off);
    addObject<HD>(MSH_5, "MSH.5", HL7::optional, HL7::repetition_off);
    addObject<HD>(MSH_6, "MSH.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(MSH_7, "MSH.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSH_8, "MSH.8", HL7::optional, HL7::repetition_off);
    addObject<MSG>(MSH_9, "MSH.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MSH_10, "MSH.10", HL7::initialized, HL7::repetition_off);
    addObject<PT>(MSH_11, "MSH.11", HL7::initialized, HL7::repetition_off);
    addObject<VID>(MSH_12, "MSH.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MSH_13, "MSH.13", HL7::optional, HL7::repetition_off);
    addObject<ST>(MSH_14, "MSH.14", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_15, "MSH.15", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_16, "MSH.16", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_17, "MSH.17", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_18, "MSH.18", HL7::optional, HL7::repetition_on);
    addObject<CE>(MSH_19, "MSH.19", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_20, "MSH.20", HL7::optional, HL7::repetition_off);
    addObject<ID>(MSH_21, "MSH.21", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Field Separator
   */

  ST* getMSH_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_1);
  }

  ST* getFieldSeparator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_1);
  }

  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFieldSeparator(size_t index = 0) {
    try {
      return this->getObject(index, MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Encoding Characters
   */

  ST* getMSH_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_2);
  }

  ST* getEncodingCharacters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_2);
  }

  bool isMSH_2(size_t index = 0) {
    try {
      return this->getObject(index, MSH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEncodingCharacters(size_t index = 0) {
    try {
      return this->getObject(index, MSH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sending Application
   */

  HD* getMSH_3(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_3);
  }

  HD* getSendingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_3);
  }

  bool isMSH_3(size_t index = 0) {
    try {
      return this->getObject(index, MSH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSendingApplication(size_t index = 0) {
    try {
      return this->getObject(index, MSH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sending Facility
   */

  HD* getMSH_4(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_4);
  }

  HD* getSendingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_4);
  }

  bool isMSH_4(size_t index = 0) {
    try {
      return this->getObject(index, MSH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSendingFacility(size_t index = 0) {
    try {
      return this->getObject(index, MSH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Receiving Application
   */

  HD* getMSH_5(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_5);
  }

  HD* getReceivingApplication(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_5);
  }

  bool isMSH_5(size_t index = 0) {
    try {
      return this->getObject(index, MSH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReceivingApplication(size_t index = 0) {
    try {
      return this->getObject(index, MSH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Receiving Facility
   */

  HD* getMSH_6(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_6);
  }

  HD* getReceivingFacility(size_t index = 0) {
    return (HD*)this->getObjectSafe(index, MSH_6);
  }

  bool isMSH_6(size_t index = 0) {
    try {
      return this->getObject(index, MSH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReceivingFacility(size_t index = 0) {
    try {
      return this->getObject(index, MSH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Of Message
   */

  TS* getMSH_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MSH_7);
  }

  TS* getDateTimeOfMessage(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, MSH_7);
  }

  bool isMSH_7(size_t index = 0) {
    try {
      return this->getObject(index, MSH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeOfMessage(size_t index = 0) {
    try {
      return this->getObject(index, MSH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security
   */

  ST* getMSH_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_8);
  }

  ST* getSecurity(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_8);
  }

  bool isMSH_8(size_t index = 0) {
    try {
      return this->getObject(index, MSH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecurity(size_t index = 0) {
    try {
      return this->getObject(index, MSH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Type
   */

  MSG* getMSH_9(size_t index = 0) {
    return (MSG*)this->getObjectSafe(index, MSH_9);
  }

  MSG* getMessageType(size_t index = 0) {
    return (MSG*)this->getObjectSafe(index, MSH_9);
  }

  bool isMSH_9(size_t index = 0) {
    try {
      return this->getObject(index, MSH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageType(size_t index = 0) {
    try {
      return this->getObject(index, MSH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Control ID
   */

  ST* getMSH_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_10);
  }

  ST* getMessageControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_10);
  }

  bool isMSH_10(size_t index = 0) {
    try {
      return this->getObject(index, MSH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageControlID(size_t index = 0) {
    try {
      return this->getObject(index, MSH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Processing ID
   */

  PT* getMSH_11(size_t index = 0) {
    return (PT*)this->getObjectSafe(index, MSH_11);
  }

  PT* getProcessingID(size_t index = 0) {
    return (PT*)this->getObjectSafe(index, MSH_11);
  }

  bool isMSH_11(size_t index = 0) {
    try {
      return this->getObject(index, MSH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessingID(size_t index = 0) {
    try {
      return this->getObject(index, MSH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Version ID
   */

  VID* getMSH_12(size_t index = 0) {
    return (VID*)this->getObjectSafe(index, MSH_12);
  }

  VID* getVersionID(size_t index = 0) {
    return (VID*)this->getObjectSafe(index, MSH_12);
  }

  bool isMSH_12(size_t index = 0) {
    try {
      return this->getObject(index, MSH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVersionID(size_t index = 0) {
    try {
      return this->getObject(index, MSH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sequence Number
   */

  NM* getMSH_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSH_13);
  }

  NM* getSequenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, MSH_13);
  }

  bool isMSH_13(size_t index = 0) {
    try {
      return this->getObject(index, MSH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, MSH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Continuation Pointer
   */

  ST* getMSH_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_14);
  }

  ST* getContinuationPointer(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MSH_14);
  }

  bool isMSH_14(size_t index = 0) {
    try {
      return this->getObject(index, MSH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContinuationPointer(size_t index = 0) {
    try {
      return this->getObject(index, MSH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accept Acknowledgment Type
   */

  ID* getMSH_15(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_15);
  }

  ID* getAcceptAcknowledgmentType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_15);
  }

  bool isMSH_15(size_t index = 0) {
    try {
      return this->getObject(index, MSH_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAcceptAcknowledgmentType(size_t index = 0) {
    try {
      return this->getObject(index, MSH_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application Acknowledgment Type
   */

  ID* getMSH_16(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_16);
  }

  ID* getApplicationAcknowledgmentType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_16);
  }

  bool isMSH_16(size_t index = 0) {
    try {
      return this->getObject(index, MSH_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationAcknowledgmentType(size_t index = 0) {
    try {
      return this->getObject(index, MSH_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country Code
   */

  ID* getMSH_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_17);
  }

  ID* getCountryCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_17);
  }

  bool isMSH_17(size_t index = 0) {
    try {
      return this->getObject(index, MSH_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountryCode(size_t index = 0) {
    try {
      return this->getObject(index, MSH_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Character Set
   */

  ID* getMSH_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_18);
  }

  ID* getCharacterSet(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_18);
  }

  bool isMSH_18(size_t index = 0) {
    try {
      return this->getObject(index, MSH_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCharacterSet(size_t index = 0) {
    try {
      return this->getObject(index, MSH_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Principal Language Of Message
   */

  CE* getMSH_19(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, MSH_19);
  }

  CE* getPrincipalLanguageOfMessage(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, MSH_19);
  }

  bool isMSH_19(size_t index = 0) {
    try {
      return this->getObject(index, MSH_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrincipalLanguageOfMessage(size_t index = 0) {
    try {
      return this->getObject(index, MSH_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Character Set Handling Scheme
   */

  ID* getMSH_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_20);
  }

  ID* getAlternateCharacterSetHandlingScheme(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_20);
  }

  bool isMSH_20(size_t index = 0) {
    try {
      return this->getObject(index, MSH_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateCharacterSetHandlingScheme(size_t index = 0) {
    try {
      return this->getObject(index, MSH_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Conformance Statement ID
   */

  ID* getMSH_21(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_21);
  }

  ID* getConformanceStatementID(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, MSH_21);
  }

  bool isMSH_21(size_t index = 0) {
    try {
      return this->getObject(index, MSH_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConformanceStatementID(size_t index = 0) {
    try {
      return this->getObject(index, MSH_21) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MSH */

} /* End of namespace HL7_24 */
#endif /* __MSH_v24_H__ */
