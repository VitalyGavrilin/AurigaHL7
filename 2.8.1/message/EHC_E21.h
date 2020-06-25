/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:26 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __EHC_E21__281_H__
#define __EHC_E21__281_H__

#include "../../common/Util.h"
#include "../segment/AUT.h"
#include "../segment/IVC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PSL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EHC_E21_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/* PSL_ITEM_INFO */
struct EHC_E21_PSL_ITEM_INFO : public HL7Group {
  EHC_E21_PSL_ITEM_INFO() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E21_AUT_1,
    EHC_E21_NTE_2,
    EHC_E21_PSL_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E21_PSL_ITEM_INFO"; }
  EHC_E21_PSL_ITEM_INFO* create() const { return new EHC_E21_PSL_ITEM_INFO(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E21.PSL_ITEM_INFO");
    addObject<AUT>(EHC_E21_AUT_1, "AUT.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(EHC_E21_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E21_PSL_3, "PSL.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AUT* getAUT_1(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E21_AUT_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E21_NTE_2);
  }
  PSL* getPSL_3(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E21_PSL_3);
  }

  /* Checker list */
  bool isAUT_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_PSL_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E21_PSL_ITEM_INFO */

/* EHC_E21 */
struct EHC_E21 : public HL7Message {
  EHC_E21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E21_MSH_1,
    EHC_E21_SFT_2,
    EHC_E21_UAC_3,
    EHC_E21_IVC_4,
    EHC_E21_PSL_6,
    EHC_E21_NTE_7,
    EHC_E21_AUT_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E21"; }
  EHC_E21* create() const { return new EHC_E21(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E21");
    addObject<MSH>(EHC_E21_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E21_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E21_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E21_IVC_4, "IVC.4", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(EHC_E21_PSL_6, "PSL.6", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(EHC_E21_NTE_7, "NTE.7", HL7::optional, HL7::repetition_off);
    addObject<AUT>(EHC_E21_AUT_8, "AUT.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E21_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E21_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E21_UAC_3);
  }
  IVC* getIVC_4(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E21_IVC_4);
  }
  PSL* getPSL_6(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E21_PSL_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, EHC_E21_NTE_7);
  }
  AUT* getAUT_8(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E21_AUT_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_IVC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_PSL_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E21_AUT_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E21_ */
} /* namespace HL7_281 */
#endif /*  __EHC_E21__281_H__ */