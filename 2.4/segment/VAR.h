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


#ifndef __VAR_v24_H__
#define __VAR_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Variance */
class VAR : public HL7Segment {
 public:
  VAR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "VAR"; }
  VAR* create() const { return new VAR(); }

 private:
  void init() {
    setName("VAR");
    /* Init members */
    addObject<EI>(VAR_1, "VAR.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(VAR_2, "VAR.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(VAR_3, "VAR.3", HL7::optional, HL7::repetition_off);
    addObject<XCN>(VAR_4, "VAR.4", HL7::optional, HL7::repetition_on);
    addObject<CE>(VAR_5, "VAR.5", HL7::optional, HL7::repetition_off);
    addObject<ST>(VAR_6, "VAR.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Variance Instance ID
   */

  EI* getVAR_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VAR_1);
  }

  EI* getVarianceInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, VAR_1);
  }

  bool isVAR_1(size_t index = 0) {
    try {
      return this->getObject(index, VAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, VAR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Documented Date/Time
   */

  TS* getVAR_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, VAR_2);
  }

  TS* getDocumentedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, VAR_2);
  }

  bool isVAR_2(size_t index = 0) {
    try {
      return this->getObject(index, VAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, VAR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Stated Variance Date/Time
   */

  TS* getVAR_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, VAR_3);
  }

  TS* getStatedVarianceDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, VAR_3);
  }

  bool isVAR_3(size_t index = 0) {
    try {
      return this->getObject(index, VAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatedVarianceDateTime(size_t index = 0) {
    try {
      return this->getObject(index, VAR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Originator
   */

  XCN* getVAR_4(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VAR_4);
  }

  XCN* getVarianceOriginator(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, VAR_4);
  }

  bool isVAR_4(size_t index = 0) {
    try {
      return this->getObject(index, VAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceOriginator(size_t index = 0) {
    try {
      return this->getObject(index, VAR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Classification
   */

  CE* getVAR_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VAR_5);
  }

  CE* getVarianceClassification(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VAR_5);
  }

  bool isVAR_5(size_t index = 0) {
    try {
      return this->getObject(index, VAR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceClassification(size_t index = 0) {
    try {
      return this->getObject(index, VAR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Variance Description
   */

  ST* getVAR_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VAR_6);
  }

  ST* getVarianceDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VAR_6);
  }

  bool isVAR_6(size_t index = 0) {
    try {
      return this->getObject(index, VAR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVarianceDescription(size_t index = 0) {
    try {
      return this->getObject(index, VAR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of VAR */

} /* End of namespace HL7_24 */
#endif /* __VAR_v24_H__ */
