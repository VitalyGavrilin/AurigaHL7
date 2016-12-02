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


#ifndef __CCP_v24_H__
#define __CCP_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* channel calibration parameters */
class CCP : public HL7Data {
 public:
  CCP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CCP_1, /* channel calibration sensitivity correction factor */
    CCP_2, /* channel calibration baseline */
    CCP_3, /* channel calibration time skew */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CCP"; }
  CCP *create() const { return new CCP(); }

 private:
  void init() {
    // setName("CCP");
    /* Init members */
    addObject<NM>(CCP_1, "CCP.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CCP_2, "CCP.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CCP_3, "CCP.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * channel calibration sensitivity correction factor
   */
  NM *getCCP_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_1);
  }

  NM *getChannelCalibrationSensitivityCorrectionFactor(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_1);
  }

  bool isCCP_1(size_t index = 0) {
    try {
      return this->getObject(index, CCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelCalibrationSensitivityCorrectionFactor(size_t index = 0) {
    try {
      return this->getObject(index, CCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * channel calibration baseline
   */
  NM *getCCP_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_2);
  }

  NM *getChannelCalibrationBaseline(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_2);
  }

  bool isCCP_2(size_t index = 0) {
    try {
      return this->getObject(index, CCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelCalibrationBaseline(size_t index = 0) {
    try {
      return this->getObject(index, CCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * channel calibration time skew
   */
  NM *getCCP_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_3);
  }

  NM *getChannelCalibrationTimeSkew(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, CCP_3);
  }

  bool isCCP_3(size_t index = 0) {
    try {
      return this->getObject(index, CCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelCalibrationTimeSkew(size_t index = 0) {
    try {
      return this->getObject(index, CCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CCP */

} /* End HL7_24 */

#endif /*__CCP_v24_H__ */
