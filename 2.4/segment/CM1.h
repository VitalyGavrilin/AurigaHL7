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


#ifndef __CM1_v24_H__
#define __CM1_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Clinical Study Phase Master */
class CM1 : public HL7Segment {
 public:
  CM1() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CM1_1, CM1_2, CM1_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "CM1"; }
  CM1* create() const { return new CM1(); }

 private:
  void init() {
    setName("CM1");
    /* Init members */
    addObject<SI>(CM1_1, "CM1.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(CM1_2, "CM1.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CM1_3, "CM1.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - CM1
   */

  SI* getCM1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM1_1);
  }

  SI* getSetIDCM1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM1_1);
  }

  bool isCM1_1(size_t index = 0) {
    try {
      return this->getObject(index, CM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCM1(size_t index = 0) {
    try {
      return this->getObject(index, CM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Identifier
   */

  CE* getCM1_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM1_2);
  }

  CE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CM1_2);
  }

  bool isCM1_2(size_t index = 0) {
    try {
      return this->getObject(index, CM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description of Study Phase
   */

  ST* getCM1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM1_3);
  }

  ST* getDescriptionOfStudyPhase(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM1_3);
  }

  bool isCM1_3(size_t index = 0) {
    try {
      return this->getObject(index, CM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionOfStudyPhase(size_t index = 0) {
    try {
      return this->getObject(index, CM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CM1 */

} /* End of namespace HL7_24 */
#endif /* __CM1_v24_H__ */
