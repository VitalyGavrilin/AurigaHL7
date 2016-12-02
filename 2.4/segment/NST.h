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


#ifndef __NST_v24_H__
#define __NST_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Application control level statistics */
class NST : public HL7Segment {
 public:
  NST() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    NST_1,
    NST_2,
    NST_3,
    NST_4,
    NST_5,
    NST_6,
    NST_7,
    NST_8,
    NST_9,
    NST_10,
    NST_11,
    NST_12,
    NST_13,
    NST_14,
    NST_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "NST"; }
  NST* create() const { return new NST(); }

 private:
  void init() {
    setName("NST");
    /* Init members */
    addObject<ID>(NST_1, "NST.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(NST_2, "NST.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(NST_3, "NST.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(NST_4, "NST.4", HL7::initialized, HL7::repetition_off);
    addObject<TS>(NST_5, "NST.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_6, "NST.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_7, "NST.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_8, "NST.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_9, "NST.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_10, "NST.10", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_11, "NST.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_12, "NST.12", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_13, "NST.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_14, "NST.14", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NST_15, "NST.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Statistics Available
   */

  ID* getNST_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NST_1);
  }

  ID* getStatisticsAvailable(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NST_1);
  }

  bool isNST_1(size_t index = 0) {
    try {
      return this->getObject(index, NST_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatisticsAvailable(size_t index = 0) {
    try {
      return this->getObject(index, NST_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Identifier
   */

  ST* getNST_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NST_2);
  }

  ST* getSourceIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, NST_2);
  }

  bool isNST_2(size_t index = 0) {
    try {
      return this->getObject(index, NST_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, NST_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Type
   */

  ID* getNST_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NST_3);
  }

  ID* getSourceType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NST_3);
  }

  bool isNST_3(size_t index = 0) {
    try {
      return this->getObject(index, NST_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceType(size_t index = 0) {
    try {
      return this->getObject(index, NST_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statistics Start
   */

  TS* getNST_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NST_4);
  }

  TS* getStatisticsStart(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NST_4);
  }

  bool isNST_4(size_t index = 0) {
    try {
      return this->getObject(index, NST_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatisticsStart(size_t index = 0) {
    try {
      return this->getObject(index, NST_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Statistics End
   */

  TS* getNST_5(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NST_5);
  }

  TS* getStatisticsEnd(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NST_5);
  }

  bool isNST_5(size_t index = 0) {
    try {
      return this->getObject(index, NST_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatisticsEnd(size_t index = 0) {
    try {
      return this->getObject(index, NST_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Receive Character Count
   */

  NM* getNST_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_6);
  }

  NM* getReceiveCharacterCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_6);
  }

  bool isNST_6(size_t index = 0) {
    try {
      return this->getObject(index, NST_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReceiveCharacterCount(size_t index = 0) {
    try {
      return this->getObject(index, NST_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Send Character Count
   */

  NM* getNST_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_7);
  }

  NM* getSendCharacterCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_7);
  }

  bool isNST_7(size_t index = 0) {
    try {
      return this->getObject(index, NST_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSendCharacterCount(size_t index = 0) {
    try {
      return this->getObject(index, NST_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Messages Received
   */

  NM* getNST_8(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_8);
  }

  NM* getMessagesReceived(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_8);
  }

  bool isNST_8(size_t index = 0) {
    try {
      return this->getObject(index, NST_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessagesReceived(size_t index = 0) {
    try {
      return this->getObject(index, NST_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Messages Sent
   */

  NM* getNST_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_9);
  }

  NM* getMessagesSent(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_9);
  }

  bool isNST_9(size_t index = 0) {
    try {
      return this->getObject(index, NST_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessagesSent(size_t index = 0) {
    try {
      return this->getObject(index, NST_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Checksum Errors Received
   */

  NM* getNST_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_10);
  }

  NM* getChecksumErrorsReceived(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_10);
  }

  bool isNST_10(size_t index = 0) {
    try {
      return this->getObject(index, NST_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChecksumErrorsReceived(size_t index = 0) {
    try {
      return this->getObject(index, NST_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Length Errors Received
   */

  NM* getNST_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_11);
  }

  NM* getLengthErrorsReceived(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_11);
  }

  bool isNST_11(size_t index = 0) {
    try {
      return this->getObject(index, NST_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLengthErrorsReceived(size_t index = 0) {
    try {
      return this->getObject(index, NST_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Errors Received
   */

  NM* getNST_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_12);
  }

  NM* getOtherErrorsReceived(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_12);
  }

  bool isNST_12(size_t index = 0) {
    try {
      return this->getObject(index, NST_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherErrorsReceived(size_t index = 0) {
    try {
      return this->getObject(index, NST_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Connect Timeouts
   */

  NM* getNST_13(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_13);
  }

  NM* getConnectTimeouts(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_13);
  }

  bool isNST_13(size_t index = 0) {
    try {
      return this->getObject(index, NST_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConnectTimeouts(size_t index = 0) {
    try {
      return this->getObject(index, NST_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Receive Timeouts
   */

  NM* getNST_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_14);
  }

  NM* getReceiveTimeouts(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_14);
  }

  bool isNST_14(size_t index = 0) {
    try {
      return this->getObject(index, NST_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReceiveTimeouts(size_t index = 0) {
    try {
      return this->getObject(index, NST_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Application control-level Errors
   */

  NM* getNST_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_15);
  }

  NM* getApplicationControlLevelErrors(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NST_15);
  }

  bool isNST_15(size_t index = 0) {
    try {
      return this->getObject(index, NST_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isApplicationControlLevelErrors(size_t index = 0) {
    try {
      return this->getObject(index, NST_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NST */

} /* End of namespace HL7_24 */
#endif /* __NST_v24_H__ */
