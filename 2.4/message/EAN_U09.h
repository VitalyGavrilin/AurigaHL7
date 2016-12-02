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


#ifndef __EAN_U09__24_H__
#define __EAN_U09__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/NDS.h"
#include "../segment/NTE.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* Internal structures/groups */
struct EAN_U09_NOTIFICATION; /* NOTIFICATION */

/* NOTIFICATION */
struct EAN_U09_NOTIFICATION : public HL7Group {
  EAN_U09_NOTIFICATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { EAN_U09_NDS_4, EAN_U09_NTE_6, FIELD_ID_MAX };

  const char* className() const { return "EAN_U09_NOTIFICATION"; }
  EAN_U09_NOTIFICATION* create() const { return new EAN_U09_NOTIFICATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAN_U09.NOTIFICATION");
    addObject<NDS>(EAN_U09_NDS_4, "NDS.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(EAN_U09_NTE_6, "NTE.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  NDS* getNDS_4(size_t index = 0) {
    return (NDS*)this->getObjectSafe(index, EAN_U09_NDS_4);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EAN_U09_NTE_6);
  }

  /* Checker list */
  bool isNDS_4(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NDS_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAN_U09_3 */

/* EAN_U09 */
struct EAN_U09 : public HL7Message {
  EAN_U09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAN_U09_MSH_1,
    EAN_U09_EQU_2,
    EAN_U09_NOTIFICATION_3,
    EAN_U09_ROL_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAN_U09"; }
  EAN_U09* create() const { return new EAN_U09(); }

  /* Initialize object */
  void init() {
    setName("EAN_U09");
    addObject<MSH>(EAN_U09_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(EAN_U09_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<EAN_U09_NOTIFICATION>(EAN_U09_NOTIFICATION_3,
				    "EAN_U09.NOTIFICATION", HL7::initialized,
				    HL7::repetition_on);
    addObject<ROL>(EAN_U09_ROL_10, "ROL.10", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAN_U09_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAN_U09_EQU_2);
  }
  EAN_U09_NOTIFICATION* getNOTIFICATION(size_t index = 0) {
    return (EAN_U09_NOTIFICATION*)this->getObjectSafe(index,
						      EAN_U09_NOTIFICATION_3);
  }
  ROL* getROL_10(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAN_U09_ROL_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNOTIFICATION(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_NOTIFICATION_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, EAN_U09_ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAN_U09_ */
} /* namespace HL7_24 */
#endif /*  __EAN_U09__24_H__ */
