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


#ifndef __ECD_v24_H__
#define __ECD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0368.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"

namespace HL7_24 {

/* Equipment Command */
class ECD : public HL7Segment {
 public:
  ECD() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ECD_1, ECD_2, ECD_3, ECD_4, ECD_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "ECD"; }
  ECD* create() const { return new ECD(); }

 private:
  void init() {
    setName("ECD");
    /* Init members */
    addObject<NM>(ECD_1, "ECD.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0368>(ECD_2, "ECD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ECD_3, "ECD.3", HL7::optional, HL7::repetition_off);
    addObject<TQ>(ECD_4, "ECD.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(ECD_5, "ECD.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Reference Command Number
   */

  NM* getECD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  NM* getReferenceCommandNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  bool isECD_1(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceCommandNumber(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Remote Control Command
   */

  CE_0368* getECD_2(size_t index = 0) {
    return (CE_0368*)this->getObjectSafe(index, ECD_2);
  }

  CE_0368* getRemoteControlCommand(size_t index = 0) {
    return (CE_0368*)this->getObjectSafe(index, ECD_2);
  }

  bool isECD_2(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRemoteControlCommand(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Required
   */

  ID* getECD_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  ID* getResponseRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  bool isECD_3(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseRequired(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Completion Time
   */

  TQ* getECD_4(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, ECD_4);
  }

  TQ* getRequestedCompletionTime(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, ECD_4);
  }

  bool isECD_4(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedCompletionTime(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parameters
   */

  ST* getECD_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECD_5);
  }

  ST* getParameters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECD_5);
  }

  bool isECD_5(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameters(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ECD */

} /* End of namespace HL7_24 */
#endif /* __ECD_v24_H__ */
