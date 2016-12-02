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


#ifndef __DSP_v24_H__
#define __DSP_v24_H__

#include "../../common/Util.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* Display Data */
class DSP : public HL7Segment {
 public:
  DSP() { this->init(); }

 private:
  /* */
  enum FIELD_ID { DSP_1, DSP_2, DSP_3, DSP_4, DSP_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "DSP"; }
  DSP* create() const { return new DSP(); }

 private:
  void init() {
    setName("DSP");
    /* Init members */
    addObject<SI>(DSP_1, "DSP.1", HL7::optional, HL7::repetition_off);
    addObject<SI>(DSP_2, "DSP.2", HL7::optional, HL7::repetition_off);
    addObject<TX>(DSP_3, "DSP.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DSP_4, "DSP.4", HL7::optional, HL7::repetition_off);
    addObject<TX>(DSP_5, "DSP.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - DSP
   */

  SI* getDSP_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DSP_1);
  }

  SI* getSetIDDSP(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DSP_1);
  }

  bool isDSP_1(size_t index = 0) {
    try {
      return this->getObject(index, DSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDDSP(size_t index = 0) {
    try {
      return this->getObject(index, DSP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Display Level
   */

  SI* getDSP_2(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DSP_2);
  }

  SI* getDisplayLevel(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, DSP_2);
  }

  bool isDSP_2(size_t index = 0) {
    try {
      return this->getObject(index, DSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDisplayLevel(size_t index = 0) {
    try {
      return this->getObject(index, DSP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Data Line
   */

  TX* getDSP_3(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, DSP_3);
  }

  TX* getDataLine(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, DSP_3);
  }

  bool isDSP_3(size_t index = 0) {
    try {
      return this->getObject(index, DSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDataLine(size_t index = 0) {
    try {
      return this->getObject(index, DSP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Logical Break Point
   */

  ST* getDSP_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSP_4);
  }

  ST* getLogicalBreakPoint(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DSP_4);
  }

  bool isDSP_4(size_t index = 0) {
    try {
      return this->getObject(index, DSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLogicalBreakPoint(size_t index = 0) {
    try {
      return this->getObject(index, DSP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Result ID
   */

  TX* getDSP_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, DSP_5);
  }

  TX* getResultID(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, DSP_5);
  }

  bool isDSP_5(size_t index = 0) {
    try {
      return this->getObject(index, DSP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResultID(size_t index = 0) {
    try {
      return this->getObject(index, DSP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DSP */

} /* End of namespace HL7_24 */
#endif /* __DSP_v24_H__ */
