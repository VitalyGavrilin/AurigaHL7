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


#ifndef __OPR_O38_OPR_O38__29_H__
#define __OPR_O38_OPR_O38__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OPR_O38_OPR_O38_RESPONSE; /* RESPONSE */
struct OPR_O38_OPR_O38_ORDER; /* ORDER */
struct OPR_O38_OPR_O38_PATIENT; /* PATIENT */
struct OPR_O38_OPR_O38_SPECIMEN; /* SPECIMEN */
struct OPR_O38_OPR_O38_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OPR_O38_OPR_O38_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */
struct OPR_O38_OPR_O38_TIMING; /* TIMING */

/*  */
struct OPR_O38_OPR_O38 : public HL7Message {
  OPR_O38_OPR_O38() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OPR_O38_OPR_O38_MSH_1,
    OPR_O38_OPR_O38_MSA_2,
    OPR_O38_OPR_O38_ARV_3,
    OPR_O38_OPR_O38_ERR_4,
    OPR_O38_OPR_O38_SFT_5,
    OPR_O38_OPR_O38_UAC_6,
    OPR_O38_OPR_O38_NTE_7,
    OPR_O38_OPR_O38_ARV_13,
    OPR_O38_OPR_O38_PID_14,
    OPR_O38_OPR_O38_PRT_15,
    OPR_O38_OPR_O38_ARV_16,
    OPR_O38_OPR_O38_PID_17,
    OPR_O38_OPR_O38_PRT_18,
    OPR_O38_OPR_O38_SAC_22,
    OPR_O38_OPR_O38_SPM_23,
    OPR_O38_OPR_O38_OBX_24,
    OPR_O38_OPR_O38_PRT_25,
    OPR_O38_OPR_O38_OBX_26,
    OPR_O38_OPR_O38_PRT_27,
    OPR_O38_OPR_O38_OBR_28,
    OPR_O38_OPR_O38_ORC_29,
    OPR_O38_OPR_O38_PRT_30,
    OPR_O38_OPR_O38_PRT_31,
    OPR_O38_OPR_O38_OBX_32,
    OPR_O38_OPR_O38_PRT_33,
    OPR_O38_OPR_O38_OBR_34,
    OPR_O38_OPR_O38_ORC_35,
    OPR_O38_OPR_O38_PRT_36,
    OPR_O38_OPR_O38_PRT_37,
    OPR_O38_OPR_O38_TQ1_38,
    OPR_O38_OPR_O38_TQ2_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "OPR_O38_OPR_O38"; }
  OPR_O38_OPR_O38* create() const { return new OPR_O38_OPR_O38(); }

 private:
  /* Initialize object */
  void init() {
    setName("OPR_O38_OPR_O38");
    addObject<MSH>(OPR_O38_OPR_O38_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(OPR_O38_OPR_O38_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OPR_O38_OPR_O38_ARV_3, "ARV.3", HL7::optional, HL7::repetition_on);
    addObject<ERR>(OPR_O38_OPR_O38_ERR_4, "ERR.4", HL7::optional, HL7::repetition_on);
    addObject<SFT>(OPR_O38_OPR_O38_SFT_5, "SFT.5", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OPR_O38_OPR_O38_UAC_6, "UAC.6", HL7::optional, HL7::repetition_off);
    addObject<NTE>(OPR_O38_OPR_O38_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPR_O38_OPR_O38_ARV_13, "ARV.13", HL7::optional, HL7::repetition_on);
    addObject<PID>(OPR_O38_OPR_O38_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_15, "PRT.15", HL7::optional, HL7::repetition_on);
    addObject<ARV>(OPR_O38_OPR_O38_ARV_16, "ARV.16", HL7::optional, HL7::repetition_on);
    addObject<PID>(OPR_O38_OPR_O38_PID_17, "PID.17", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_18, "PRT.18", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OPR_O38_OPR_O38_SAC_22, "SAC.22", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OPR_O38_OPR_O38_SPM_23, "SPM.23", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OPR_O38_OPR_O38_OBX_24, "OBX.24", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_25, "PRT.25", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPR_O38_OPR_O38_OBX_26, "OBX.26", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_27, "PRT.27", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPR_O38_OPR_O38_OBR_28, "OBR.28", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPR_O38_OPR_O38_ORC_29, "ORC.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_31, "PRT.31", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OPR_O38_OPR_O38_OBX_32, "OBX.32", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_33, "PRT.33", HL7::optional, HL7::repetition_on);
    addObject<OBR>(OPR_O38_OPR_O38_OBR_34, "OBR.34", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(OPR_O38_OPR_O38_ORC_35, "ORC.35", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_36, "PRT.36", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OPR_O38_OPR_O38_PRT_37, "PRT.37", HL7::optional, HL7::repetition_on);
    addObject<TQ1>(OPR_O38_OPR_O38_TQ1_38, "TQ1.38", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(OPR_O38_OPR_O38_TQ2_39, "TQ2.39", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OPR_O38_OPR_O38_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, OPR_O38_OPR_O38_MSA_2);
  }
  ARV* getARV_3(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPR_O38_OPR_O38_ARV_3);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, OPR_O38_OPR_O38_ERR_4);
  }
  SFT* getSFT_5(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OPR_O38_OPR_O38_SFT_5);
  }
  UAC* getUAC_6(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OPR_O38_OPR_O38_UAC_6);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, OPR_O38_OPR_O38_NTE_7);
  }
  ARV* getARV_13(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPR_O38_OPR_O38_ARV_13);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPR_O38_OPR_O38_PID_14);
  }
  PRT* getPRT_15(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_15);
  }
  ARV* getARV_16(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OPR_O38_OPR_O38_ARV_16);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OPR_O38_OPR_O38_PID_17);
  }
  PRT* getPRT_18(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_18);
  }
  SAC* getSAC_22(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OPR_O38_OPR_O38_SAC_22);
  }
  SPM* getSPM_23(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OPR_O38_OPR_O38_SPM_23);
  }
  OBX* getOBX_24(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPR_O38_OPR_O38_OBX_24);
  }
  PRT* getPRT_25(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_25);
  }
  OBX* getOBX_26(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPR_O38_OPR_O38_OBX_26);
  }
  PRT* getPRT_27(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_27);
  }
  OBR* getOBR_28(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPR_O38_OPR_O38_OBR_28);
  }
  ORC* getORC_29(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPR_O38_OPR_O38_ORC_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_31);
  }
  OBX* getOBX_32(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OPR_O38_OPR_O38_OBX_32);
  }
  PRT* getPRT_33(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_33);
  }
  OBR* getOBR_34(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, OPR_O38_OPR_O38_OBR_34);
  }
  ORC* getORC_35(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, OPR_O38_OPR_O38_ORC_35);
  }
  PRT* getPRT_36(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_36);
  }
  PRT* getPRT_37(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OPR_O38_OPR_O38_PRT_37);
  }
  TQ1* getTQ1_38(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, OPR_O38_OPR_O38_TQ1_38);
  }
  TQ2* getTQ2_39(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, OPR_O38_OPR_O38_TQ2_39);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_3(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ARV_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_6(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_UAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_13(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ARV_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_15(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_16(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ARV_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_18(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_22(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_SAC_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_23(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_SPM_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_24(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_OBX_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_25(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_26(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_OBX_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_27(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_28(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_29(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ORC_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_32(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_OBX_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_33(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_35(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_ORC_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_36(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_37(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_PRT_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_38(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_TQ1_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_39(size_t index = 0) {
    try {
      return this->getObject(index, OPR_O38_OPR_O38_TQ2_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OPR_O38_OPR_O38_ */
} /* namespace HL7_29 */
#endif /*  __OPR_O38_OPR_O38__29_H__ */
