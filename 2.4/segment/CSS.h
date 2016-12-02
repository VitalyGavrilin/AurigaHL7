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


#ifndef __CSS_v24_H__
#define __CSS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Clinical Study Data Schedule Segment */
class CSS : public HL7Segment {
 public:
  CSS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CSS_1, CSS_2, CSS_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "CSS"; }
  CSS* create() const { return new CSS(); }

 private:
  void init() {
    setName("CSS");
    /* Init members */
    addObject<CE>(CSS_1, "CSS.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(CSS_2, "CSS.2", HL7::optional, HL7::repetition_off);
    addObject<CE>(CSS_3, "CSS.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Study Scheduled Time Point
   */

  CE* getCSS_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSS_1);
  }

  CE* getStudyScheduledTimePoint(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSS_1);
  }

  bool isCSS_1(size_t index = 0) {
    try {
      return this->getObject(index, CSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CSS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Scheduled Patient Time Point
   */

  TS* getCSS_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSS_2);
  }

  TS* getStudyScheduledPatientTimePoint(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSS_2);
  }

  bool isCSS_2(size_t index = 0) {
    try {
      return this->getObject(index, CSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledPatientTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CSS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Quality Control Codes
   */

  CE* getCSS_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSS_3);
  }

  CE* getStudyQualityControlCodes(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSS_3);
  }

  bool isCSS_3(size_t index = 0) {
    try {
      return this->getObject(index, CSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyQualityControlCodes(size_t index = 0) {
    try {
      return this->getObject(index, CSS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CSS */

} /* End of namespace HL7_24 */
#endif /* __CSS_v24_H__ */
