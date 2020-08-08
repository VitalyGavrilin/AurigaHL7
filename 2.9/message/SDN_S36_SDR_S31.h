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


#ifndef __SDN_S36_SDR_S31__29_H__
#define __SDN_S36_SDR_S31__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/SCD.h"
#include "../segment/SDD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SDN_S36_SDR_S31_ANTI_MICROBIAL_DEVICE_DATA; /* ANTI_MICROBIAL_DEVICE_DATA */

/*  */
struct SDN_S36_SDR_S31 : public HL7Message {
  SDN_S36_SDR_S31() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SDN_S36_SDR_S31_MSH_1,
    SDN_S36_SDR_S31_SFT_2,
    SDN_S36_SDR_S31_UAC_3,
    SDN_S36_SDR_S31_SCD_5,
    SDN_S36_SDR_S31_SDD_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "SDN_S36_SDR_S31"; }
  SDN_S36_SDR_S31* create() const { return new SDN_S36_SDR_S31(); }

 private:
  /* Initialize object */
  void init() {
    setName("SDN_S36_SDR_S31");
    addObject<MSH>(SDN_S36_SDR_S31_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SDN_S36_SDR_S31_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SDN_S36_SDR_S31_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<SCD>(SDN_S36_SDR_S31_SCD_5, "SCD.5", HL7::optional, HL7::repetition_on);
    addObject<SDD>(SDN_S36_SDR_S31_SDD_6, "SDD.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SDN_S36_SDR_S31_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SDN_S36_SDR_S31_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SDN_S36_SDR_S31_UAC_3);
  }
  SCD* getSCD_5(size_t index = 0) {
    return (SCD*)this->getObjectSafe(index, SDN_S36_SDR_S31_SCD_5);
  }
  SDD* getSDD_6(size_t index = 0) {
    return (SDD*)this->getObjectSafe(index, SDN_S36_SDR_S31_SDD_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SDN_S36_SDR_S31_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SDN_S36_SDR_S31_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SDN_S36_SDR_S31_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCD_5(size_t index = 0) {
    try {
      return this->getObject(index, SDN_S36_SDR_S31_SCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSDD_6(size_t index = 0) {
    try {
      return this->getObject(index, SDN_S36_SDR_S31_SDD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SDN_S36_SDR_S31_ */
} /* namespace HL7_29 */
#endif /*  __SDN_S36_SDR_S31__29_H__ */
