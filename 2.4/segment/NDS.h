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


#ifndef __NDS_v24_H__
#define __NDS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0367.h"
#include "../datatype/NM.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Notification Detail */
class NDS : public HL7Segment {
 public:
  NDS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { NDS_1, NDS_2, NDS_3, NDS_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "NDS"; }
  NDS* create() const { return new NDS(); }

 private:
  void init() {
    setName("NDS");
    /* Init members */
    addObject<NM>(NDS_1, "NDS.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(NDS_2, "NDS.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0367>(NDS_3, "NDS.3", HL7::initialized, HL7::repetition_off);
    addObject<CE>(NDS_4, "NDS.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Notification Reference Number
   */

  NM* getNDS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NDS_1);
  }

  NM* getNotificationReferenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, NDS_1);
  }

  bool isNDS_1(size_t index = 0) {
    try {
      return this->getObject(index, NDS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationReferenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, NDS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Date/Time
   */

  TS* getNDS_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NDS_2);
  }

  TS* getNotificationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NDS_2);
  }

  bool isNDS_2(size_t index = 0) {
    try {
      return this->getObject(index, NDS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NDS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Alert Severity
   */

  CE_0367* getNDS_3(size_t index = 0) {
    return (CE_0367*)this->getObjectSafe(index, NDS_3);
  }

  CE_0367* getNotificationAlertSeverity(size_t index = 0) {
    return (CE_0367*)this->getObjectSafe(index, NDS_3);
  }

  bool isNDS_3(size_t index = 0) {
    try {
      return this->getObject(index, NDS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationAlertSeverity(size_t index = 0) {
    try {
      return this->getObject(index, NDS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Notification Code
   */

  CE* getNDS_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, NDS_4);
  }

  CE* getNotificationCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, NDS_4);
  }

  bool isNDS_4(size_t index = 0) {
    try {
      return this->getObject(index, NDS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNotificationCode(size_t index = 0) {
    try {
      return this->getObject(index, NDS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NDS */

} /* End of namespace HL7_24 */
#endif /* __NDS_v24_H__ */
