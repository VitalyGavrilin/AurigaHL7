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


#ifndef __CM2_v24_H__
#define __CM2_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Clinical Study Schedule Master */
class CM2 : public HL7Segment {
 public:
  CM2() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CM2_1, CM2_2, CM2_3, CM2_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "CM2"; }
  CM2* create() const { return new CM2(); }

 private:
  void init() {
    setName("CM2");
    /* Init members */
    addObject<SI>(CM2_1, "CM2.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(CM2_2, "CM2.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CM2_3, "CM2.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(CM2_4, "CM2.4", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID- CM2
   */

  SI* getCM2_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM2_1);
  }

  SI* getSetIDCM2(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM2_1);
  }

  bool isCM2_1(size_t index = 0) {
    try {
      return this->getObject(index, CM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCM2(size_t index = 0) {
    try {
      return this->getObject(index, CM2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Time Point
   */

  CE* getCM2_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM2_2);
  }

  CE* getScheduledTimePoint(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM2_2);
  }

  bool isCM2_2(size_t index = 0) {
    try {
      return this->getObject(index, CM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description of Time Point
   */

  ST* getCM2_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM2_3);
  }

  ST* getDescriptionOfTimePoint(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM2_3);
  }

  bool isCM2_3(size_t index = 0) {
    try {
      return this->getObject(index, CM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionOfTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Events Scheduled This Time Point
   */

  CE* getCM2_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM2_4);
  }

  CE* getEventsScheduledThisTimePoint(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM2_4);
  }

  bool isCM2_4(size_t index = 0) {
    try {
      return this->getObject(index, CM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventsScheduledThisTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CM2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CM2 */

} /* End of namespace HL7_24 */
#endif /* __CM2_v24_H__ */
