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


#ifndef __EQP_v24_H__
#define __EQP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0450.h"
#include "../datatype/FT.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Equipment/log Service */
class EQP : public HL7Segment {
 public:
  EQP() { this->init(); }

 private:
  /* */
  enum FIELD_ID { EQP_1, EQP_2, EQP_3, EQP_4, EQP_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "EQP"; }
  EQP* create() const { return new EQP(); }

 private:
  void init() {
    setName("EQP");
    /* Init members */
    addObject<CE_0450>(EQP_1, "EQP.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(EQP_2, "EQP.2", HL7::optional, HL7::repetition_off);
    addObject<TS>(EQP_3, "EQP.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(EQP_4, "EQP.4", HL7::optional, HL7::repetition_off);
    addObject<FT>(EQP_5, "EQP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Event type
   */

  CE_0450* getEQP_1(size_t index = 0) {
    return (CE_0450*)this->getObjectSafe(index, EQP_1);
  }

  CE_0450* getEventType(size_t index = 0) {
    return (CE_0450*)this->getObjectSafe(index, EQP_1);
  }

  bool isEQP_1(size_t index = 0) {
    try {
      return this->getObject(index, EQP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventType(size_t index = 0) {
    try {
      return this->getObject(index, EQP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Name
   */

  ST* getEQP_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQP_2);
  }

  ST* getFileName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, EQP_2);
  }

  bool isEQP_2(size_t index = 0) {
    try {
      return this->getObject(index, EQP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileName(size_t index = 0) {
    try {
      return this->getObject(index, EQP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  TS* getEQP_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQP_3);
  }

  TS* getStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQP_3);
  }

  bool isEQP_3(size_t index = 0) {
    try {
      return this->getObject(index, EQP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * End Date/Time
   */

  TS* getEQP_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQP_4);
  }

  TS* getEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, EQP_4);
  }

  bool isEQP_4(size_t index = 0) {
    try {
      return this->getObject(index, EQP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transaction Data
   */

  FT* getEQP_5(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, EQP_5);
  }

  FT* getTransactionData(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, EQP_5);
  }

  bool isEQP_5(size_t index = 0) {
    try {
      return this->getObject(index, EQP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransactionData(size_t index = 0) {
    try {
      return this->getObject(index, EQP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EQP */

} /* End of namespace HL7_24 */
#endif /* __EQP_v24_H__ */
