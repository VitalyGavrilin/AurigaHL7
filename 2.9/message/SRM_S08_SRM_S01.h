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


#ifndef __SRM_S08_SRM_S01__29_H__
#define __SRM_S08_SRM_S01__29_H__

#include "../../common/Util.h"
#include "../segment/AIG.h"
#include "../segment/AIL.h"
#include "../segment/AIP.h"
#include "../segment/AIS.h"
#include "../segment/APR.h"
#include "../segment/ARQ.h"
#include "../segment/DG1.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RGS.h"

namespace HL7_29 {

/* Internal structures/groups */
struct SRM_S08_SRM_S01_PATIENT; /* PATIENT */
struct SRM_S08_SRM_S01_RESOURCES; /* RESOURCES */
struct SRM_S08_SRM_S01_SERVICE; /* SERVICE */
struct SRM_S08_SRM_S01_GENERAL_RESOURCE; /* GENERAL_RESOURCE */
struct SRM_S08_SRM_S01_LOCATION_RESOURCE; /* LOCATION_RESOURCE */
struct SRM_S08_SRM_S01_PERSONNEL_RESOURCE; /* PERSONNEL_RESOURCE */

/*  */
struct SRM_S08_SRM_S01 : public HL7Message {
  SRM_S08_SRM_S01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SRM_S08_SRM_S01_MSH_1,
    SRM_S08_SRM_S01_ARQ_2,
    SRM_S08_SRM_S01_APR_3,
    SRM_S08_SRM_S01_NTE_4,
    SRM_S08_SRM_S01_DG1_9,
    SRM_S08_SRM_S01_OBX_10,
    SRM_S08_SRM_S01_PID_11,
    SRM_S08_SRM_S01_PRT_12,
    SRM_S08_SRM_S01_PRT_13,
    SRM_S08_SRM_S01_PV1_14,
    SRM_S08_SRM_S01_PV2_15,
    SRM_S08_SRM_S01_RGS_20,
    SRM_S08_SRM_S01_AIS_21,
    SRM_S08_SRM_S01_APR_22,
    SRM_S08_SRM_S01_NTE_23,
    SRM_S08_SRM_S01_AIS_24,
    SRM_S08_SRM_S01_APR_25,
    SRM_S08_SRM_S01_NTE_26,
    SRM_S08_SRM_S01_AIG_27,
    SRM_S08_SRM_S01_APR_28,
    SRM_S08_SRM_S01_NTE_29,
    SRM_S08_SRM_S01_AIS_30,
    SRM_S08_SRM_S01_APR_31,
    SRM_S08_SRM_S01_NTE_32,
    SRM_S08_SRM_S01_AIG_33,
    SRM_S08_SRM_S01_APR_34,
    SRM_S08_SRM_S01_NTE_35,
    SRM_S08_SRM_S01_AIL_36,
    SRM_S08_SRM_S01_APR_37,
    SRM_S08_SRM_S01_NTE_38,
    SRM_S08_SRM_S01_AIS_39,
    SRM_S08_SRM_S01_APR_40,
    SRM_S08_SRM_S01_NTE_41,
    SRM_S08_SRM_S01_AIG_42,
    SRM_S08_SRM_S01_APR_43,
    SRM_S08_SRM_S01_NTE_44,
    SRM_S08_SRM_S01_AIL_45,
    SRM_S08_SRM_S01_APR_46,
    SRM_S08_SRM_S01_NTE_47,
    SRM_S08_SRM_S01_AIP_48,
    SRM_S08_SRM_S01_APR_49,
    SRM_S08_SRM_S01_NTE_50,
    FIELD_ID_MAX
  };

  const char* className() const { return "SRM_S08_SRM_S01"; }
  SRM_S08_SRM_S01* create() const { return new SRM_S08_SRM_S01(); }

 private:
  /* Initialize object */
  void init() {
    setName("SRM_S08_SRM_S01");
    addObject<MSH>(SRM_S08_SRM_S01_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<ARQ>(SRM_S08_SRM_S01_ARQ_2, "ARQ.2", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_3, "APR.3", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_4, "NTE.4", HL7::optional, HL7::repetition_on);
    addObject<DG1>(SRM_S08_SRM_S01_DG1_9, "DG1.9", HL7::optional, HL7::repetition_on);
    addObject<OBX>(SRM_S08_SRM_S01_OBX_10, "OBX.10", HL7::initialized, HL7::repetition_off);
    addObject<PID>(SRM_S08_SRM_S01_PID_11, "PID.11", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(SRM_S08_SRM_S01_PRT_12, "PRT.12", HL7::optional, HL7::repetition_on);
    addObject<PRT>(SRM_S08_SRM_S01_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<PV1>(SRM_S08_SRM_S01_PV1_14, "PV1.14", HL7::optional, HL7::repetition_off);
    addObject<PV2>(SRM_S08_SRM_S01_PV2_15, "PV2.15", HL7::optional, HL7::repetition_off);
    addObject<RGS>(SRM_S08_SRM_S01_RGS_20, "RGS.20", HL7::initialized, HL7::repetition_off);
    addObject<AIS>(SRM_S08_SRM_S01_AIS_21, "AIS.21", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_22, "APR.22", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRM_S08_SRM_S01_AIS_24, "AIS.24", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_25, "APR.25", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_26, "NTE.26", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRM_S08_SRM_S01_AIG_27, "AIG.27", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_28, "APR.28", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_29, "NTE.29", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRM_S08_SRM_S01_AIS_30, "AIS.30", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_31, "APR.31", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_32, "NTE.32", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRM_S08_SRM_S01_AIG_33, "AIG.33", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_34, "APR.34", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SRM_S08_SRM_S01_AIL_36, "AIL.36", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_37, "APR.37", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_38, "NTE.38", HL7::optional, HL7::repetition_on);
    addObject<AIS>(SRM_S08_SRM_S01_AIS_39, "AIS.39", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_40, "APR.40", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_41, "NTE.41", HL7::optional, HL7::repetition_on);
    addObject<AIG>(SRM_S08_SRM_S01_AIG_42, "AIG.42", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_43, "APR.43", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
    addObject<AIL>(SRM_S08_SRM_S01_AIL_45, "AIL.45", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_46, "APR.46", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_47, "NTE.47", HL7::optional, HL7::repetition_on);
    addObject<AIP>(SRM_S08_SRM_S01_AIP_48, "AIP.48", HL7::initialized, HL7::repetition_off);
    addObject<APR>(SRM_S08_SRM_S01_APR_49, "APR.49", HL7::optional, HL7::repetition_off);
    addObject<NTE>(SRM_S08_SRM_S01_NTE_50, "NTE.50", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SRM_S08_SRM_S01_MSH_1);
  }
  ARQ* getARQ_2(size_t index = 0) {
    return (ARQ*)this->getObjectSafe(index, SRM_S08_SRM_S01_ARQ_2);
  }
  APR* getAPR_3(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_3);
  }
  NTE* getNTE_4(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_4);
  }
  DG1* getDG1_9(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, SRM_S08_SRM_S01_DG1_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SRM_S08_SRM_S01_OBX_10);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, SRM_S08_SRM_S01_PID_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SRM_S08_SRM_S01_PRT_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, SRM_S08_SRM_S01_PRT_13);
  }
  PV1* getPV1_14(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, SRM_S08_SRM_S01_PV1_14);
  }
  PV2* getPV2_15(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, SRM_S08_SRM_S01_PV2_15);
  }
  RGS* getRGS_20(size_t index = 0) {
    return (RGS*)this->getObjectSafe(index, SRM_S08_SRM_S01_RGS_20);
  }
  AIS* getAIS_21(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIS_21);
  }
  APR* getAPR_22(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_23);
  }
  AIS* getAIS_24(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIS_24);
  }
  APR* getAPR_25(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_26);
  }
  AIG* getAIG_27(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIG_27);
  }
  APR* getAPR_28(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_28);
  }
  NTE* getNTE_29(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_29);
  }
  AIS* getAIS_30(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIS_30);
  }
  APR* getAPR_31(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_31);
  }
  NTE* getNTE_32(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_32);
  }
  AIG* getAIG_33(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIG_33);
  }
  APR* getAPR_34(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_34);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_35);
  }
  AIL* getAIL_36(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIL_36);
  }
  APR* getAPR_37(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_37);
  }
  NTE* getNTE_38(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_38);
  }
  AIS* getAIS_39(size_t index = 0) {
    return (AIS*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIS_39);
  }
  APR* getAPR_40(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_40);
  }
  NTE* getNTE_41(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_41);
  }
  AIG* getAIG_42(size_t index = 0) {
    return (AIG*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIG_42);
  }
  APR* getAPR_43(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_43);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_44);
  }
  AIL* getAIL_45(size_t index = 0) {
    return (AIL*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIL_45);
  }
  APR* getAPR_46(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_46);
  }
  NTE* getNTE_47(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_47);
  }
  AIP* getAIP_48(size_t index = 0) {
    return (AIP*)this->getObjectSafe(index, SRM_S08_SRM_S01_AIP_48);
  }
  APR* getAPR_49(size_t index = 0) {
    return (APR*)this->getObjectSafe(index, SRM_S08_SRM_S01_APR_49);
  }
  NTE* getNTE_50(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SRM_S08_SRM_S01_NTE_50);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARQ_2(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_ARQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_3(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_9(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_DG1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_14(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_PV1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_15(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_PV2_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRGS_20(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_RGS_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_21(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIS_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_22(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_24(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIS_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_25(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_27(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIG_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_28(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_29(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_30(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIS_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_31(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_32(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_33(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIG_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_34(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_36(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIL_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_37(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_38(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIS_39(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIS_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_40(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_41(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIG_42(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIG_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_43(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIL_45(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIL_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_46(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_47(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAIP_48(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_AIP_48) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPR_49(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_APR_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_50(size_t index = 0) {
    try {
      return this->getObject(index, SRM_S08_SRM_S01_NTE_50) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SRM_S08_SRM_S01_ */
} /* namespace HL7_29 */
#endif /*  __SRM_S08_SRM_S01__29_H__ */
