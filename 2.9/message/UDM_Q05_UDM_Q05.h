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


#ifndef __UDM_Q05_UDM_Q05__29_H__
#define __UDM_Q05_UDM_Q05__29_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"
#include "../segment/URD.h"
#include "../segment/URS.h"

namespace HL7_29 {

/*  */
struct UDM_Q05_UDM_Q05 : public HL7Message {
  UDM_Q05_UDM_Q05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    UDM_Q05_UDM_Q05_MSH_1,
    UDM_Q05_UDM_Q05_SFT_2,
    UDM_Q05_UDM_Q05_UAC_3,
    UDM_Q05_UDM_Q05_URD_4,
    UDM_Q05_UDM_Q05_URS_5,
    UDM_Q05_UDM_Q05_DSC_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "UDM_Q05_UDM_Q05"; }
  UDM_Q05_UDM_Q05* create() const { return new UDM_Q05_UDM_Q05(); }

 private:
  /* Initialize object */
  void init() {
    setName("UDM_Q05_UDM_Q05");
    addObject<MSH>(UDM_Q05_UDM_Q05_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(UDM_Q05_UDM_Q05_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(UDM_Q05_UDM_Q05_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<URD>(UDM_Q05_UDM_Q05_URD_4, "URD.4", HL7::initialized, HL7::repetition_off);
    addObject<URS>(UDM_Q05_UDM_Q05_URS_5, "URS.5", HL7::optional, HL7::repetition_off);
    addObject<DSC>(UDM_Q05_UDM_Q05_DSC_7, "DSC.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_UAC_3);
  }
  URD* getURD_4(size_t index = 0) {
    return (URD*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_URD_4);
  }
  URS* getURS_5(size_t index = 0) {
    return (URS*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_URS_5);
  }
  DSC* getDSC_7(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, UDM_Q05_UDM_Q05_DSC_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isURD_4(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_URD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isURS_5(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_URS_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_7(size_t index = 0) {
    try {
      return this->getObject(index, UDM_Q05_UDM_Q05_DSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* UDM_Q05_UDM_Q05_ */
} /* namespace HL7_29 */
#endif /*  __UDM_Q05_UDM_Q05__29_H__ */
