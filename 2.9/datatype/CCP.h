/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __CCP_v29_H__
#define __CCP_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* channel calibration parameters */
class CCP : public HL7Data {
 public:
  CCP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CCP_1, /* Channel Calibration Sensitivity Correction Factor */
    CCP_2, /* Channel Calibration Baseline */
    CCP_3, /* Channel Calibration Time Skew */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CCP"; }
  CCP *create() const { return new CCP(); }

 private:
  void init() {
    setName("CCP");
    /* Init members */
    addObject<NM>(CCP_1, "CCP.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CCP_2, "CCP.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(CCP_3, "CCP.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Channel Calibration Sensitivity Correction Factor
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
   * Channel Calibration Baseline
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
   * Channel Calibration Time Skew
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

} /* End HL7_29 */

#endif /* __CCP_v29_H__ */
