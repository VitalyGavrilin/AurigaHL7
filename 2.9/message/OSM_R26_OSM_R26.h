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


#ifndef __OSM_R26_OSM_R26__29_H__
#define __OSM_R26_OSM_R26__29_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBX.h"
#include "../segment/PAC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SHP.h"
#include "../segment/SPM.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/* Internal structures/groups */
struct OSM_R26_OSM_R26_SHIPMENT; /* SHIPMENT */
struct OSM_R26_OSM_R26_SHIPPING_OBSERVATION; /* SHIPPING_OBSERVATION */
struct OSM_R26_OSM_R26_PACKAGE; /* PACKAGE */
struct OSM_R26_OSM_R26_SPECIMEN; /* SPECIMEN */
struct OSM_R26_OSM_R26_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct OSM_R26_OSM_R26_CONTAINER; /* CONTAINER */
struct OSM_R26_OSM_R26_SUBJECT_PERSON_OR_ANIMAL_IDENTIFICATION; /* SUBJECT_PERSON_OR_ANIMAL_IDENTIFICATION */
struct OSM_R26_OSM_R26_SUBJECT_POPULATION_OR_LOCATION_IDENTIFICATION; /* SUBJECT_POPULATION_OR_LOCATION_IDENTIFICATION */
struct OSM_R26_OSM_R26_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OSM_R26_OSM_R26_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OSM_R26_OSM_R26_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OSM_R26_OSM_R26_CONTAINER_OBSERVATION; /* CONTAINER_OBSERVATION */
struct OSM_R26_OSM_R26_PATIENT_OBSERVATION; /* PATIENT_OBSERVATION */
struct OSM_R26_OSM_R26_PATIENT_VISIT_OBSERVATION; /* PATIENT_VISIT_OBSERVATION */

/*  */
struct OSM_R26_OSM_R26 : public HL7Message {
  OSM_R26_OSM_R26() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    OSM_R26_OSM_R26_MSH_1,
    OSM_R26_OSM_R26_SFT_3,
    OSM_R26_OSM_R26_UAC_4,
    OSM_R26_OSM_R26_SHP_9,
    OSM_R26_OSM_R26_OBX_10,
    OSM_R26_OSM_R26_PRT_11,
    OSM_R26_OSM_R26_OBX_12,
    OSM_R26_OSM_R26_PRT_13,
    OSM_R26_OSM_R26_PAC_15,
    OSM_R26_OSM_R26_PRT_16,
    OSM_R26_OSM_R26_PRT_21,
    OSM_R26_OSM_R26_SPM_22,
    OSM_R26_OSM_R26_OBX_23,
    OSM_R26_OSM_R26_PRT_24,
    OSM_R26_OSM_R26_OBX_25,
    OSM_R26_OSM_R26_PRT_26,
    OSM_R26_OSM_R26_SAC_28,
    OSM_R26_OSM_R26_OBX_29,
    OSM_R26_OSM_R26_PRT_30,
    OSM_R26_OSM_R26_OBX_31,
    OSM_R26_OSM_R26_PRT_32,
    OSM_R26_OSM_R26_SAC_34,
    OSM_R26_OSM_R26_ARV_36,
    OSM_R26_OSM_R26_NK1_37,
    OSM_R26_OSM_R26_PID_38,
    OSM_R26_OSM_R26_PRT_39,
    OSM_R26_OSM_R26_OBX_40,
    OSM_R26_OSM_R26_PRT_41,
    OSM_R26_OSM_R26_OBX_42,
    OSM_R26_OSM_R26_PRT_43,
    OSM_R26_OSM_R26_OBX_44,
    OSM_R26_OSM_R26_PRT_45,
    OSM_R26_OSM_R26_OBX_46,
    OSM_R26_OSM_R26_PRT_47,
    OSM_R26_OSM_R26_SAC_49,
    OSM_R26_OSM_R26_ARV_51,
    OSM_R26_OSM_R26_NK1_52,
    OSM_R26_OSM_R26_PID_53,
    OSM_R26_OSM_R26_PRT_54,
    OSM_R26_OSM_R26_NK1_56,
    OSM_R26_OSM_R26_PID_57,
    OSM_R26_OSM_R26_PRT_58,
    OSM_R26_OSM_R26_PRT_59,
    OSM_R26_OSM_R26_PV1_60,
    OSM_R26_OSM_R26_OBX_61,
    OSM_R26_OSM_R26_PRT_62,
    OSM_R26_OSM_R26_OBX_63,
    OSM_R26_OSM_R26_PRT_64,
    OSM_R26_OSM_R26_OBX_65,
    OSM_R26_OSM_R26_PRT_66,
    OSM_R26_OSM_R26_OBX_67,
    OSM_R26_OSM_R26_PRT_68,
    OSM_R26_OSM_R26_OBX_69,
    OSM_R26_OSM_R26_PRT_70,
    OSM_R26_OSM_R26_OBX_71,
    OSM_R26_OSM_R26_PRT_72,
    FIELD_ID_MAX
  };

  const char* className() const { return "OSM_R26_OSM_R26"; }
  OSM_R26_OSM_R26* create() const { return new OSM_R26_OSM_R26(); }

 private:
  /* Initialize object */
  void init() {
    setName("OSM_R26_OSM_R26");
    addObject<MSH>(OSM_R26_OSM_R26_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(OSM_R26_OSM_R26_SFT_3, "SFT.3", HL7::optional, HL7::repetition_on);
    addObject<UAC>(OSM_R26_OSM_R26_UAC_4, "UAC.4", HL7::optional, HL7::repetition_off);
    addObject<SHP>(OSM_R26_OSM_R26_SHP_9, "SHP.9", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_10, "OBX.10", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_11, "PRT.11", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_12, "OBX.12", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_13, "PRT.13", HL7::optional, HL7::repetition_on);
    addObject<PAC>(OSM_R26_OSM_R26_PAC_15, "PAC.15", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_16, "PRT.16", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_21, "PRT.21", HL7::optional, HL7::repetition_on);
    addObject<SPM>(OSM_R26_OSM_R26_SPM_22, "SPM.22", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_23, "OBX.23", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_24, "PRT.24", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_25, "OBX.25", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_26, "PRT.26", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OSM_R26_OSM_R26_SAC_28, "SAC.28", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_29, "OBX.29", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_30, "PRT.30", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_31, "OBX.31", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_32, "PRT.32", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OSM_R26_OSM_R26_SAC_34, "SAC.34", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OSM_R26_OSM_R26_ARV_36, "ARV.36", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OSM_R26_OSM_R26_NK1_37, "NK1.37", HL7::optional, HL7::repetition_on);
    addObject<PID>(OSM_R26_OSM_R26_PID_38, "PID.38", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_39, "PRT.39", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_40, "OBX.40", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_41, "PRT.41", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_42, "OBX.42", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_43, "PRT.43", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_44, "OBX.44", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_45, "PRT.45", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_46, "OBX.46", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_47, "PRT.47", HL7::optional, HL7::repetition_on);
    addObject<SAC>(OSM_R26_OSM_R26_SAC_49, "SAC.49", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(OSM_R26_OSM_R26_ARV_51, "ARV.51", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OSM_R26_OSM_R26_NK1_52, "NK1.52", HL7::optional, HL7::repetition_on);
    addObject<PID>(OSM_R26_OSM_R26_PID_53, "PID.53", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_54, "PRT.54", HL7::optional, HL7::repetition_on);
    addObject<NK1>(OSM_R26_OSM_R26_NK1_56, "NK1.56", HL7::optional, HL7::repetition_on);
    addObject<PID>(OSM_R26_OSM_R26_PID_57, "PID.57", HL7::optional, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_58, "PRT.58", HL7::optional, HL7::repetition_on);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_59, "PRT.59", HL7::optional, HL7::repetition_on);
    addObject<PV1>(OSM_R26_OSM_R26_PV1_60, "PV1.60", HL7::initialized, HL7::repetition_off);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_61, "OBX.61", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_62, "PRT.62", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_63, "OBX.63", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_64, "PRT.64", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_65, "OBX.65", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_66, "PRT.66", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_67, "OBX.67", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_68, "PRT.68", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_69, "OBX.69", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_70, "PRT.70", HL7::optional, HL7::repetition_on);
    addObject<OBX>(OSM_R26_OSM_R26_OBX_71, "OBX.71", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(OSM_R26_OSM_R26_PRT_72, "PRT.72", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, OSM_R26_OSM_R26_MSH_1);
  }
  SFT* getSFT_3(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, OSM_R26_OSM_R26_SFT_3);
  }
  UAC* getUAC_4(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, OSM_R26_OSM_R26_UAC_4);
  }
  SHP* getSHP_9(size_t index = 0) {
    return (SHP*)this->getObjectSafe(index, OSM_R26_OSM_R26_SHP_9);
  }
  OBX* getOBX_10(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_10);
  }
  PRT* getPRT_11(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_11);
  }
  OBX* getOBX_12(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_12);
  }
  PRT* getPRT_13(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_13);
  }
  PAC* getPAC_15(size_t index = 0) {
    return (PAC*)this->getObjectSafe(index, OSM_R26_OSM_R26_PAC_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_16);
  }
  PRT* getPRT_21(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_21);
  }
  SPM* getSPM_22(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, OSM_R26_OSM_R26_SPM_22);
  }
  OBX* getOBX_23(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_23);
  }
  PRT* getPRT_24(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_24);
  }
  OBX* getOBX_25(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_25);
  }
  PRT* getPRT_26(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_26);
  }
  SAC* getSAC_28(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OSM_R26_OSM_R26_SAC_28);
  }
  OBX* getOBX_29(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_29);
  }
  PRT* getPRT_30(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_30);
  }
  OBX* getOBX_31(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_31);
  }
  PRT* getPRT_32(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_32);
  }
  SAC* getSAC_34(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OSM_R26_OSM_R26_SAC_34);
  }
  ARV* getARV_36(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSM_R26_OSM_R26_ARV_36);
  }
  NK1* getNK1_37(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OSM_R26_OSM_R26_NK1_37);
  }
  PID* getPID_38(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OSM_R26_OSM_R26_PID_38);
  }
  PRT* getPRT_39(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_39);
  }
  OBX* getOBX_40(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_40);
  }
  PRT* getPRT_41(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_41);
  }
  OBX* getOBX_42(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_42);
  }
  PRT* getPRT_43(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_43);
  }
  OBX* getOBX_44(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_44);
  }
  PRT* getPRT_45(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_45);
  }
  OBX* getOBX_46(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_46);
  }
  PRT* getPRT_47(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_47);
  }
  SAC* getSAC_49(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, OSM_R26_OSM_R26_SAC_49);
  }
  ARV* getARV_51(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, OSM_R26_OSM_R26_ARV_51);
  }
  NK1* getNK1_52(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OSM_R26_OSM_R26_NK1_52);
  }
  PID* getPID_53(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OSM_R26_OSM_R26_PID_53);
  }
  PRT* getPRT_54(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_54);
  }
  NK1* getNK1_56(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, OSM_R26_OSM_R26_NK1_56);
  }
  PID* getPID_57(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, OSM_R26_OSM_R26_PID_57);
  }
  PRT* getPRT_58(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_58);
  }
  PRT* getPRT_59(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_59);
  }
  PV1* getPV1_60(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, OSM_R26_OSM_R26_PV1_60);
  }
  OBX* getOBX_61(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_61);
  }
  PRT* getPRT_62(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_62);
  }
  OBX* getOBX_63(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_63);
  }
  PRT* getPRT_64(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_64);
  }
  OBX* getOBX_65(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_65);
  }
  PRT* getPRT_66(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_66);
  }
  OBX* getOBX_67(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_67);
  }
  PRT* getPRT_68(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_68);
  }
  OBX* getOBX_69(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_69);
  }
  PRT* getPRT_70(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_70);
  }
  OBX* getOBX_71(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, OSM_R26_OSM_R26_OBX_71);
  }
  PRT* getPRT_72(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, OSM_R26_OSM_R26_PRT_72);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_4(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_UAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSHP_9(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SHP_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_10(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_11(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_12(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_13(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPAC_15(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PAC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_21(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_22(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SPM_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_23(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_24(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_25(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_26(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_28(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SAC_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_29(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_30(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_31(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_32(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_34(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SAC_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_36(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_ARV_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_37(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_NK1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_38(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PID_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_39(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_39) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_40(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_40) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_41(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_42(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_43(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_43) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_44(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_44) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_45(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_45) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_46(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_46) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_47(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_49(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_SAC_49) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_51(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_ARV_51) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_52(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_NK1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_53(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PID_53) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_54(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_54) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_56(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_NK1_56) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_57(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PID_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_58(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_58) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_59(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_59) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_60(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PV1_60) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_61(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_62(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_62) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_63(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_64(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_64) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_65(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_66(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_66) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_67(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_67) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_68(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_68) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_69(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_69) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_70(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_70) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_71(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_OBX_71) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_72(size_t index = 0) {
    try {
      return this->getObject(index, OSM_R26_OSM_R26_PRT_72) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* OSM_R26_OSM_R26_ */
} /* namespace HL7_29 */
#endif /*  __OSM_R26_OSM_R26__29_H__ */
