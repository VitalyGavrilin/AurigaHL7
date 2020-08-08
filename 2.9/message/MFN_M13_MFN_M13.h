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


#ifndef __MFN_M13_MFN_M13__29_H__
#define __MFN_M13_MFN_M13__29_H__

#include "../../common/Util.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct MFN_M13_MFN_M13 : public HL7Message {
  MFN_M13_MFN_M13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M13_MFN_M13_MSH_1,
    MFN_M13_MFN_M13_SFT_2,
    MFN_M13_MFN_M13_UAC_3,
    MFN_M13_MFN_M13_MFI_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M13_MFN_M13"; }
  MFN_M13_MFN_M13* create() const { return new MFN_M13_MFN_M13(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M13_MFN_M13");
    addObject<MSH>(MFN_M13_MFN_M13_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M13_MFN_M13_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M13_MFN_M13_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M13_MFN_M13_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M13_MFN_M13_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M13_MFN_M13_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M13_MFN_M13_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M13_MFN_M13_MFI_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M13_MFN_M13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M13_MFN_M13_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M13_MFN_M13_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M13_MFN_M13_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M13_MFN_M13_ */
} /* namespace HL7_29 */
#endif /*  __MFN_M13_MFN_M13__29_H__ */
