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


#ifndef __DPR_O48_DPR_O48__29_H__
#define __DPR_O48_DPR_O48__29_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/ARV.h"
#include "../segment/BUI.h"
#include "../segment/DON.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct DPR_O48_DPR_O48_DONOR; /* DONOR */
struct DPR_O48_DPR_O48_DONATION_ORDER; /* DONATION_ORDER */
struct DPR_O48_DPR_O48_DONATION; /* DONATION */
struct DPR_O48_DPR_O48_DONATION_OBSERVATIONS; /* DONATION_OBSERVATIONS */
struct DPR_O48_DPR_O48_BLOOD_UNIT; /* BLOOD_UNIT */
struct DPR_O48_DPR_O48_DONOR_OBSERVATIONS; /* DONOR_OBSERVATIONS */
struct DPR_O48_DPR_O48_DONOR_REGISTRATION; /* DONOR_REGISTRATION */

/*  */
struct DPR_O48_DPR_O48 : public HL7Message {
  DPR_O48_DPR_O48() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    DPR_O48_DPR_O48_MSH_1,
    DPR_O48_DPR_O48_ARV_2,
    DPR_O48_DPR_O48_SFT_3,
    DPR_O48_DPR_O48_UAC_4,
    DPR_O48_DPR_O48_DON_10,
    DPR_O48_DPR_O48_NTE_11,
    DPR_O48_DPR_O48_OBX_12,
    DPR_O48_DPR_O48_PRT_13,
    DPR_O48_DPR_O48_OBX_14,
    DPR_O48_DPR_O48_PRT_15,
    DPR_O48_DPR_O48_BUI_16,
    DPR_O48_DPR_O48_NTE_17,
    DPR_O48_DPR_O48_NTE_18,
    DPR_O48_DPR_O48_OBR_19,
    DPR_O48_DPR_O48_PRT_20,
    DPR_O48_DPR_O48_AL1_23,
    DPR_O48_DPR_O48_ARV_24,
    DPR_O48_DPR_O48_NTE_25,
    DPR_O48_DPR_O48_PD1_26,
    DPR_O48_DPR_O48_PID_27,
    DPR_O48_DPR_O48_PRT_28,
    DPR_O48_DPR_O48_OBX_29,
    DPR_O48_DPR_O48_PRT_30,
    DPR_O48_DPR_O48_OBX_31,
    DPR_O48_DPR_O48_PRT_32,
    DPR_O48_DPR_O48_NTE_33,
    DPR_O48_DPR_O48_PRT_34,
    DPR_O48_DPR_O48_PV1_35,
    FIELD_ID_MAX
  };

  const char* className() const { return "DPR_O48_DPR_O48"; }
  DPR_O48_DPR_O48* create() const { return new DPR_O48_DPR_O48(); }

 private:
  /* Initialize object */
  void init() {
    setName("DPR_O48_DPR_O48");
    addObject<MSH>(DPR_O48_DPR_O48_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(DPR_O48_DPR_O48_ARV_2, "ARV.2", HL7::optional, HL7::repetition_on);
    addObject<SFT>(DPR_O48_DPR_O48_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(DPR_O48_DPR_O48_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<DON>(DPR_O48_DPR_O48_DON_10, "DON.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(DPR_O48_DPR_O48_NTE_11, "NTE.11", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DPR_O48_DPR_O48_OBX_12, "OBX.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DPR_O48_DPR_O48_OBX_14, "OBX.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<BUI>(DPR_O48_DPR_O48_BUI_16, "BUI.16", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DPR_O48_DPR_O48_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DPR_O48_DPR_O48_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
    addObject<OBR>(DPR_O48_DPR_O48_OBR_19, "OBR.19", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_20, "PRT.20", HL7::optional, HL7::repetition_on);
    addObject<AL1>(DPR_O48_DPR_O48_AL1_23, "AL1.23", HL7::optional, HL7::repetition_on);
    addObject<ARV>(DPR_O48_DPR_O48_ARV_24, "ARV.24", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DPR_O48_DPR_O48_NTE_25, "NTE.25", HL7::optional, HL7::repetition_on);
    addObject<PD1>(DPR_O48_DPR_O48_PD1_26, "PD1.26", HL7::optional, HL7::repetition_off);
    addObject<PID>(DPR_O48_DPR_O48_PID_27, "PID.27", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_28, "PRT.28", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DPR_O48_DPR_O48_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<OBX>(DPR_O48_DPR_O48_OBX_31, "OBX.31", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<NTE>(DPR_O48_DPR_O48_NTE_33, "NTE.33", HL7::optional, HL7::repetition_on);
    addObject<PRT>(DPR_O48_DPR_O48_PRT_34, "PRT.34", HL7::optional, HL7::repetition_on);
    addObject<PV1>(DPR_O48_DPR_O48_PV1_35, "PV1.35", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, DPR_O48_DPR_O48_MSH_1);
  }
  ARV* getARV_2(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DPR_O48_DPR_O48_ARV_2);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, DPR_O48_DPR_O48_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, DPR_O48_DPR_O48_UAC_4);
  }
  DON* getDON_10(size_t index = 0) {
    return (DON*)this->getObjectSafe(index, DPR_O48_DPR_O48_DON_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DPR_O48_DPR_O48_NTE_11);
  }
  OBX* getOBX_12(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DPR_O48_DPR_O48_OBX_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_13);
  }
  OBX* getOBX_14(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DPR_O48_DPR_O48_OBX_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_15);
  }
  BUI* getBUI_16(size_t index = 0) {
    return (BUI*)this->getObjectSafe(index, DPR_O48_DPR_O48_BUI_16);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DPR_O48_DPR_O48_NTE_17);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DPR_O48_DPR_O48_NTE_18);
  }
  OBR* getOBR_19(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, DPR_O48_DPR_O48_OBR_19);
  }
  PRT* getPRT_20(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_20);
  }
  AL1* getAL1_23(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, DPR_O48_DPR_O48_AL1_23);
  }
  ARV* getARV_24(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, DPR_O48_DPR_O48_ARV_24);
  }
  NTE* getNTE_25(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DPR_O48_DPR_O48_NTE_25);
  }
  PD1* getPD1_26(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, DPR_O48_DPR_O48_PD1_26);
  }
  PID* getPID_27(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, DPR_O48_DPR_O48_PID_27);
  }
  PRT* getPRT_28(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DPR_O48_DPR_O48_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_30);
  }
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, DPR_O48_DPR_O48_OBX_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_32);
  }
  NTE* getNTE_33(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, DPR_O48_DPR_O48_NTE_33);
  }
  PRT* getPRT_34(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, DPR_O48_DPR_O48_PRT_34);
  }
  PV1* getPV1_35(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, DPR_O48_DPR_O48_PV1_35);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_2(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_ARV_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDON_10(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_DON_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_14(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_OBX_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isBUI_16(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_BUI_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_19(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_OBR_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_20(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_23(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_AL1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_24(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_ARV_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_25(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_NTE_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_26(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PD1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_27(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PID_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_28(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_33(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_NTE_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_34(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PRT_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_35(size_t index = 0) {
    try {
      return this->getObject(index, DPR_O48_DPR_O48_PV1_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* DPR_O48_DPR_O48_ */
} /* namespace HL7_29 */
#endif /*  __DPR_O48_DPR_O48__29_H__ */
