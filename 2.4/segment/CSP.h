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


#ifndef __CSP_v24_H__
#define __CSP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Clinical Study Phase */
class CSP : public HL7Segment {
 public:
  CSP() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CSP_1, CSP_2, CSP_3, CSP_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "CSP"; }
  CSP* create() const { return new CSP(); }

 private:
  void init() {
    setName("CSP");
    /* Init members */
    addObject<CE>(CSP_1, "CSP.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(CSP_2, "CSP.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(CSP_3, "CSP.3", HL7::optional, HL7::repetition_off);
    addObject<CE>(CSP_4, "CSP.4", HL7::conditional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Study Phase Identifier
   */

  CE* getCSP_1(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSP_1);
  }

  CE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSP_1);
  }

  bool isCSP_1(size_t index = 0) {
    try {
      return this->getObject(index, CSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/time Study Phase Began
   */

  TS* getCSP_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSP_2);
  }

  TS* getDateTimeStudyPhaseBegan(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSP_2);
  }

  bool isCSP_2(size_t index = 0) {
    try {
      return this->getObject(index, CSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStudyPhaseBegan(size_t index = 0) {
    try {
      return this->getObject(index, CSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/time Study Phase Ended
   */

  TS* getCSP_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSP_3);
  }

  TS* getDateTimeStudyPhaseEnded(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, CSP_3);
  }

  bool isCSP_3(size_t index = 0) {
    try {
      return this->getObject(index, CSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeStudyPhaseEnded(size_t index = 0) {
    try {
      return this->getObject(index, CSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Evaluability
   */

  CE* getCSP_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSP_4);
  }

  CE* getStudyPhaseEvaluability(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CSP_4);
  }

  bool isCSP_4(size_t index = 0) {
    try {
      return this->getObject(index, CSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseEvaluability(size_t index = 0) {
    try {
      return this->getObject(index, CSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CSP */

} /* End of namespace HL7_24 */
#endif /* __CSP_v24_H__ */
