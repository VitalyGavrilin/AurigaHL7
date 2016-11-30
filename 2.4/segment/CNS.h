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


#ifndef __CNS_v24_H__
#define __CNS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/NM.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Clear Notification */
class CNS : public HL7Segment {
 public:
  CNS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CNS_1, CNS_2, CNS_3, CNS_4, CNS_5, CNS_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "CNS"; }
  CNS* create() const { return new CNS(); }

 private:
  void init() {
    setName("CNS");
    /* Init members */
    addObject<NM>(CNS_1, "CNS.1", HL7::optional, HL7::repetition_off);
    addObject<NM>(CNS_2, "CNS.2", HL7::optional, HL7::repetition_off);
    addObject<TS>(CNS_3, "CNS.3", HL7::optional, HL7::repetition_off);
    addObject<TS>(CNS_4, "CNS.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(CNS_5, "CNS.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(CNS_6, "CNS.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Starting Notification Reference Number
   */

  NM* getCNS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_1);
  }

  NM* getStartingNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_1);
  }

  bool isCNS_1(size_t index = 0) {
    try {
      return this->getObject(index, CNS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Reference Number
   */

  NM* getCNS_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_2);
  }

  NM* getEndingNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, CNS_2);
  }

  bool isCNS_2(size_t index = 0) {
    try {
      return this->getObject(index, CNS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, CNS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Starting Notification Date/Time
   */

  TS* getCNS_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CNS_3);
  }

  TS* getStartingNotificationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CNS_3);
  }

  bool isCNS_3(size_t index = 0) {
    try {
      return this->getObject(index, CNS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CNS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Date/Time
   */

  TS* getCNS_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CNS_4);
  }

  TS* getEndingNotificationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CNS_4);
  }

  bool isCNS_4(size_t index = 0) {
    try {
      return this->getObject(index, CNS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, CNS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Starting Notification Code
   */

  CE* getCNS_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CNS_5);
  }

  CE* getStartingNotificationCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CNS_5);
  }

  bool isCNS_5(size_t index = 0) {
    try {
      return this->getObject(index, CNS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartingNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, CNS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ending Notification Code
   */

  CE* getCNS_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CNS_6);
  }

  CE* getEndingNotificationCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CNS_6);
  }

  bool isCNS_6(size_t index = 0) {
    try {
      return this->getObject(index, CNS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndingNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, CNS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CNS */

} /* End of namespace HL7_24 */
#endif /* __CNS_v24_H__ */
