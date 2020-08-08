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


#ifndef __SMD_S32_SDR_S32__29_H__
#define __SMD_S32_SDR_S32__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/SCD.h"
#include "../segment/SDD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SMD_S32_SDR_S32_ANTI_MICROBIAL_DEVICE_CYCLE_DATA; /* ANTI_MICROBIAL_DEVICE_CYCLE_DATA */

/*  */
struct SMD_S32_SDR_S32 : public HL7Message {
  SMD_S32_SDR_S32() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SMD_S32_SDR_S32_MSH_1,
    SMD_S32_SDR_S32_SFT_2,
    SMD_S32_SDR_S32_UAC_3,
    SMD_S32_SDR_S32_SCD_5,
    SMD_S32_SDR_S32_SDD_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "SMD_S32_SDR_S32"; }
  SMD_S32_SDR_S32* create() const { return new SMD_S32_SDR_S32(); }

 private:
  /* Initialize object */
  void init() {
    setName("SMD_S32_SDR_S32");
    addObject<MSH>(SMD_S32_SDR_S32_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SMD_S32_SDR_S32_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SMD_S32_SDR_S32_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<SCD>(SMD_S32_SDR_S32_SCD_5, "SCD.5", HL7::optional, HL7::repetition_on);
    addObject<SDD>(SMD_S32_SDR_S32_SDD_6, "SDD.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SMD_S32_SDR_S32_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SMD_S32_SDR_S32_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SMD_S32_SDR_S32_UAC_3);
  }
  SCD* getSCD_5(size_t index = 0) {
    return (SCD*)this->getObjectSafe(index, SMD_S32_SDR_S32_SCD_5);
  }
  SDD* getSDD_6(size_t index = 0) {
    return (SDD*)this->getObjectSafe(index, SMD_S32_SDR_S32_SDD_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SMD_S32_SDR_S32_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SMD_S32_SDR_S32_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SMD_S32_SDR_S32_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCD_5(size_t index = 0) {
    try {
      return this->getObject(index, SMD_S32_SDR_S32_SCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSDD_6(size_t index = 0) {
    try {
      return this->getObject(index, SMD_S32_SDR_S32_SDD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SMD_S32_SDR_S32_ */
} /* namespace HL7_29 */
#endif /*  __SMD_S32_SDR_S32__29_H__ */
