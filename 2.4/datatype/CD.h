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


#ifndef __CD_v24_H__
#define __CD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CCP.h"
#include "../datatype/CSU.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"
#include "../datatype/WVI.h"
#include "../datatype/WVS.h"

namespace HL7_24 {

/* channel definition */
class CD : public HL7Data {
 public:
  CD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CD_1, /* channel identifier */
    CD_2, /* waveform source */
    CD_3, /* channel sensitivity/units */
    CD_4, /* channel calibration parameters */
    CD_5, /* channel sampling frequency */
    CD_6, /* minimum/maximum data values */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CD"; }
  CD *create() const { return new CD(); }

 private:
  void init() {
    // setName("CD");
    /* Init members */
    addObject<WVI>(CD_1, "CD.1", HL7::initialized, HL7::repetition_off);
    addObject<WVS>(CD_2, "CD.2", HL7::initialized, HL7::repetition_off);
    addObject<CSU>(CD_3, "CD.3", HL7::initialized, HL7::repetition_off);
    addObject<CCP>(CD_4, "CD.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CD_5, "CD.5", HL7::initialized, HL7::repetition_off);
    addObject<NR>(CD_6, "CD.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * channel identifier
   */
  WVI *getCD_1(size_t index = 0) {
    return (WVI *)this->getObjectSafe(index, CD_1);
  }

  WVI *getChannelIdentifier(size_t index = 0) {
    return (WVI *)this->getObjectSafe(index, CD_1);
  }

  bool isCD_1(size_t index = 0) {
    try {
      return this->getObject(index, CD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * waveform source
   */
  WVS *getCD_2(size_t index = 0) {
    return (WVS *)this->getObjectSafe(index, CD_2);
  }

  WVS *getWaveformSource(size_t index = 0) {
    return (WVS *)this->getObjectSafe(index, CD_2);
  }

  bool isCD_2(size_t index = 0) {
    try {
      return this->getObject(index, CD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWaveformSource(size_t index = 0) {
    try {
      return this->getObject(index, CD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * channel sensitivity/units
   */
  CSU *getCD_3(size_t index = 0) {
    return (CSU *)this->getObjectSafe(index, CD_3);
  }

  CSU *getChannelSensitivityUnits(size_t index = 0) {
    return (CSU *)this->getObjectSafe(index, CD_3);
  }

  bool isCD_3(size_t index = 0) {
    try {
      return this->getObject(index, CD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSensitivityUnits(size_t index = 0) {
    try {
      return this->getObject(index, CD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * channel calibration parameters
   */
  CCP *getCD_4(size_t index = 0) {
    return (CCP *)this->getObjectSafe(index, CD_4);
  }

  CCP *getChannelCalibrationParameters(size_t index = 0) {
    return (CCP *)this->getObjectSafe(index, CD_4);
  }

  bool isCD_4(size_t index = 0) {
    try {
      return this->getObject(index, CD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelCalibrationParameters(size_t index = 0) {
    try {
      return this->getObject(index, CD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * channel sampling frequency
   */
  NM *getCD_5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CD_5);
  }

  NM *getChannelSamplingFrequency(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CD_5);
  }

  bool isCD_5(size_t index = 0) {
    try {
      return this->getObject(index, CD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelSamplingFrequency(size_t index = 0) {
    try {
      return this->getObject(index, CD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * minimum/maximum data values
   */
  NR *getCD_6(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, CD_6);
  }

  NR *getMinimumMaximumDataValues(size_t index = 0) {
    return (NR *)this->getObjectSafe(index, CD_6);
  }

  bool isCD_6(size_t index = 0) {
    try {
      return this->getObject(index, CD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMinimumMaximumDataValues(size_t index = 0) {
    try {
      return this->getObject(index, CD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CD */

} /* End HL7_24 */

#endif /*__CD_v24_H__ */
