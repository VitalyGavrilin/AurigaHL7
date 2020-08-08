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


#ifndef __OBR_v29_H__
#define __OBR_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/ID.h"
#include "../datatype/MOC.h"
#include "../datatype/NM.h"
#include "../datatype/PRL.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* OBR */
class OBR : public HL7Segment {
 public:
  OBR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OBR_1,
    OBR_2,
    OBR_3,
    OBR_4,
    OBR_5,
    OBR_6,
    OBR_7,
    OBR_8,
    OBR_9,
    OBR_10,
    OBR_11,
    OBR_12,
    OBR_13,
    OBR_14,
    OBR_15,
    OBR_16,
    OBR_17,
    OBR_18,
    OBR_19,
    OBR_20,
    OBR_21,
    OBR_22,
    OBR_23,
    OBR_24,
    OBR_25,
    OBR_26,
    OBR_27,
    OBR_28,
    OBR_29,
    OBR_30,
    OBR_31,
    OBR_32,
    OBR_33,
    OBR_34,
    OBR_35,
    OBR_36,
    OBR_37,
    OBR_38,
    OBR_39,
    OBR_40,
    OBR_41,
    OBR_42,
    OBR_43,
    OBR_44,
    OBR_45,
    OBR_46,
    OBR_47,
    OBR_48,
    OBR_49,
    OBR_50,
    OBR_51,
    OBR_52,
    OBR_53,
    OBR_54,
    OBR_55,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OBR"; }
  OBR* create() const { return new OBR(); }

 private:
  void init() {
    setName("OBR");
    /* Init members */
    addObject<SI>(OBR_1, "OBR.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBR_2, "OBR.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBR_3, "OBR.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_4, "OBR.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_5, "OBR.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_6, "OBR.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBR_7, "OBR.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBR_8, "OBR.8", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(OBR_9, "OBR.9", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(OBR_10, "OBR.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_11, "OBR.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_12, "OBR.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_13, "OBR.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBR_14, "OBR.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_15, "OBR.15", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_16, "OBR.16", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(OBR_17, "OBR.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_18, "OBR.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_19, "OBR.19", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_20, "OBR.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_21, "OBR.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBR_22, "OBR.22", HL7::initialized, HL7::repetition_off);
    addObject<MOC>(OBR_23, "OBR.23", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_24, "OBR.24", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_25, "OBR.25", HL7::initialized, HL7::repetition_off);
    addObject<PRL>(OBR_26, "OBR.26", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_27, "OBR.27", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_28, "OBR.28", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(OBR_29, "OBR.29", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_31, "OBR.31", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_32, "OBR.32", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_33, "OBR.33", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_34, "OBR.34", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_35, "OBR.35", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(OBR_36, "OBR.36", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OBR_37, "OBR.37", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_38, "OBR.38", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_39, "OBR.39", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_40, "OBR.40", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_41, "OBR.41", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_42, "OBR.42", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_43, "OBR.43", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(OBR_44, "OBR.44", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(OBR_45, "OBR.45", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_46, "OBR.46", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_47, "OBR.47", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_48, "OBR.48", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OBR_49, "OBR.49", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OBR_50, "OBR.50", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBR_51, "OBR.51", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OBR_52, "OBR.52", HL7::initialized, HL7::repetition_off);
    addObject<CX>(OBR_53, "OBR.53", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(OBR_54, "OBR.54", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OBR_55, "OBR.55", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID – OBR
   */

  SI* getOBR_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBR_1);
  }

  SI* getSetIDOBR(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OBR_1);
  }

  bool isOBR_1(size_t index = 0) {
    try {
      return this->getObject(index, OBR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDOBR(size_t index = 0) {
    try {
      return this->getObject(index, OBR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getOBR_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_2);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_2);
  }

  bool isOBR_2(size_t index = 0) {
    try {
      return this->getObject(index, OBR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, OBR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getOBR_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_3);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_3);
  }

  bool isOBR_3(size_t index = 0) {
    try {
      return this->getObject(index, OBR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, OBR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Identifier
   */

  CWE* getOBR_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_4);
  }

  CWE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_4);
  }

  bool isOBR_4(size_t index = 0) {
    try {
      return this->getObject(index, OBR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Priority
   */

  ST* getOBR_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_5);
  }

  ST* getPriority(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_5);
  }

  bool isOBR_5(size_t index = 0) {
    try {
      return this->getObject(index, OBR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriority(size_t index = 0) {
    try {
      return this->getObject(index, OBR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Date/Time
   */

  ST* getOBR_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_6);
  }

  ST* getRequestedDateTime(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_6);
  }

  bool isOBR_6(size_t index = 0) {
    try {
      return this->getObject(index, OBR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Date/Time #
   */

  DTM* getOBR_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_7);
  }

  DTM* getObservationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_7);
  }

  bool isOBR_7(size_t index = 0) {
    try {
      return this->getObject(index, OBR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation End Date/Time #
   */

  DTM* getOBR_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_8);
  }

  DTM* getObservationEndDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_8);
  }

  bool isOBR_8(size_t index = 0) {
    try {
      return this->getObject(index, OBR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Collection Volume Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  CQ* getOBR_9(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OBR_9);
  }

  CQ* getCollectionVolumeAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, OBR_9);
  }

  bool isOBR_9(size_t index = 0) {
    try {
      return this->getObject(index, OBR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCollectionVolumeAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Collector Identifier Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  XCN* getOBR_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBR_10);
  }

  XCN* getCollectorIdentifierAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, OBR_10);
  }

  bool isOBR_10(size_t index = 0) {
    try {
      return this->getObject(index, OBR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCollectorIdentifierAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Action Code Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  ID* getOBR_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_11);
  }

  ID* getSpecimenActionCodeAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_11);
  }

  bool isOBR_11(size_t index = 0) {
    try {
      return this->getObject(index, OBR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenActionCodeAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Danger Code
   */

  CWE* getOBR_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_12);
  }

  CWE* getDangerCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_12);
  }

  bool isOBR_12(size_t index = 0) {
    try {
      return this->getObject(index, OBR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDangerCode(size_t index = 0) {
    try {
      return this->getObject(index, OBR_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relevant Clinical Information
   */

  CWE* getOBR_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_13);
  }

  CWE* getRelevantClinicalInformation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_13);
  }

  bool isOBR_13(size_t index = 0) {
    try {
      return this->getObject(index, OBR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelevantClinicalInformation(size_t index = 0) {
    try {
      return this->getObject(index, OBR_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Received Date/Time
   */

  DTM* getOBR_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_14);
  }

  DTM* getSpecimenReceivedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_14);
  }

  bool isOBR_14(size_t index = 0) {
    try {
      return this->getObject(index, OBR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenReceivedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Source
   */

  ST* getOBR_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_15);
  }

  ST* getSpecimenSource(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_15);
  }

  bool isOBR_15(size_t index = 0) {
    try {
      return this->getObject(index, OBR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSource(size_t index = 0) {
    try {
      return this->getObject(index, OBR_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ordering Provider
   */

  ST* getOBR_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_16);
  }

  ST* getOrderingProvider(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_16);
  }

  bool isOBR_16(size_t index = 0) {
    try {
      return this->getObject(index, OBR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderingProvider(size_t index = 0) {
    try {
      return this->getObject(index, OBR_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Order Callback Phone Number
   */

  XTN* getOBR_17(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OBR_17);
  }

  XTN* getOrderCallbackPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, OBR_17);
  }

  bool isOBR_17(size_t index = 0) {
    try {
      return this->getObject(index, OBR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderCallbackPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, OBR_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Field 1
   */

  ST* getOBR_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_18);
  }

  ST* getPlacerField1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_18);
  }

  bool isOBR_18(size_t index = 0) {
    try {
      return this->getObject(index, OBR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerField1(size_t index = 0) {
    try {
      return this->getObject(index, OBR_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Field 2
   */

  ST* getOBR_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_19);
  }

  ST* getPlacerField2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_19);
  }

  bool isOBR_19(size_t index = 0) {
    try {
      return this->getObject(index, OBR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerField2(size_t index = 0) {
    try {
      return this->getObject(index, OBR_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Field 1 +
   */

  ST* getOBR_20(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_20);
  }

  ST* getFillerField1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_20);
  }

  bool isOBR_20(size_t index = 0) {
    try {
      return this->getObject(index, OBR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerField1(size_t index = 0) {
    try {
      return this->getObject(index, OBR_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Field 2 +
   */

  ST* getOBR_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_21);
  }

  ST* getFillerField2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_21);
  }

  bool isOBR_21(size_t index = 0) {
    try {
      return this->getObject(index, OBR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerField2(size_t index = 0) {
    try {
      return this->getObject(index, OBR_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Results Rpt/Status Chng – Date/Time +
   */

  DTM* getOBR_22(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_22);
  }

  DTM* getResultsRptStatusChngDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_22);
  }

  bool isOBR_22(size_t index = 0) {
    try {
      return this->getObject(index, OBR_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResultsRptStatusChngDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge to Practice +
   */

  MOC* getOBR_23(size_t index = 0) {
    return (MOC*)this->getObjectSafe(index, OBR_23);
  }

  MOC* getChargetoPractice(size_t index = 0) {
    return (MOC*)this->getObjectSafe(index, OBR_23);
  }

  bool isOBR_23(size_t index = 0) {
    try {
      return this->getObject(index, OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChargetoPractice(size_t index = 0) {
    try {
      return this->getObject(index, OBR_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Diagnostic Serv Sect ID
   */

  ID* getOBR_24(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_24);
  }

  ID* getDiagnosticServSectID(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_24);
  }

  bool isOBR_24(size_t index = 0) {
    try {
      return this->getObject(index, OBR_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticServSectID(size_t index = 0) {
    try {
      return this->getObject(index, OBR_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Result Status +
   */

  ID* getOBR_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_25);
  }

  ID* getResultStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_25);
  }

  bool isOBR_25(size_t index = 0) {
    try {
      return this->getObject(index, OBR_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResultStatus(size_t index = 0) {
    try {
      return this->getObject(index, OBR_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Result +
   */

  PRL* getOBR_26(size_t index = 0) {
    return (PRL*)this->getObjectSafe(index, OBR_26);
  }

  PRL* getParentResult(size_t index = 0) {
    return (PRL*)this->getObjectSafe(index, OBR_26);
  }

  bool isOBR_26(size_t index = 0) {
    try {
      return this->getObject(index, OBR_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentResult(size_t index = 0) {
    try {
      return this->getObject(index, OBR_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity/Timing
   */

  ST* getOBR_27(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_27);
  }

  ST* getQuantityTiming(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_27);
  }

  bool isOBR_27(size_t index = 0) {
    try {
      return this->getObject(index, OBR_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityTiming(size_t index = 0) {
    try {
      return this->getObject(index, OBR_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Result Copies To
   */

  ST* getOBR_28(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_28);
  }

  ST* getResultCopiesTo(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_28);
  }

  bool isOBR_28(size_t index = 0) {
    try {
      return this->getObject(index, OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResultCopiesTo(size_t index = 0) {
    try {
      return this->getObject(index, OBR_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Results Observation Identifier
   */

  EIP* getOBR_29(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBR_29);
  }

  EIP* getParentResultsObservationIdentifier(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBR_29);
  }

  bool isOBR_29(size_t index = 0) {
    try {
      return this->getObject(index, OBR_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentResultsObservationIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBR_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transportation Mode
   */

  ID* getOBR_30(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_30);
  }

  ID* getTransportationMode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_30);
  }

  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportationMode(size_t index = 0) {
    try {
      return this->getObject(index, OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reason for Study
   */

  CWE* getOBR_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_31);
  }

  CWE* getReasonforStudy(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_31);
  }

  bool isOBR_31(size_t index = 0) {
    try {
      return this->getObject(index, OBR_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReasonforStudy(size_t index = 0) {
    try {
      return this->getObject(index, OBR_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Principal Result Interpreter +
   */

  ST* getOBR_32(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_32);
  }

  ST* getPrincipalResultInterpreter(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_32);
  }

  bool isOBR_32(size_t index = 0) {
    try {
      return this->getObject(index, OBR_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrincipalResultInterpreter(size_t index = 0) {
    try {
      return this->getObject(index, OBR_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assistant Result Interpreter +
   */

  ST* getOBR_33(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_33);
  }

  ST* getAssistantResultInterpreter(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_33);
  }

  bool isOBR_33(size_t index = 0) {
    try {
      return this->getObject(index, OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssistantResultInterpreter(size_t index = 0) {
    try {
      return this->getObject(index, OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Technician +
   */

  ST* getOBR_34(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_34);
  }

  ST* getTechnician(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_34);
  }

  bool isOBR_34(size_t index = 0) {
    try {
      return this->getObject(index, OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTechnician(size_t index = 0) {
    try {
      return this->getObject(index, OBR_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transcriptionist +
   */

  ST* getOBR_35(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_35);
  }

  ST* getTranscriptionist(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_35);
  }

  bool isOBR_35(size_t index = 0) {
    try {
      return this->getObject(index, OBR_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTranscriptionist(size_t index = 0) {
    try {
      return this->getObject(index, OBR_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Scheduled Date/Time +
   */

  DTM* getOBR_36(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_36);
  }

  DTM* getScheduledDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, OBR_36);
  }

  bool isOBR_36(size_t index = 0) {
    try {
      return this->getObject(index, OBR_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduledDateTime(size_t index = 0) {
    try {
      return this->getObject(index, OBR_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Sample Containers Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  NM* getOBR_37(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBR_37);
  }

  NM* getNumberofSampleContainersAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OBR_37);
  }

  bool isOBR_37(size_t index = 0) {
    try {
      return this->getObject(index, OBR_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofSampleContainersAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transport Logistics of Collected Sample Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  CWE* getOBR_38(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_38);
  }

  CWE* getTransportLogisticsofCollectedSampleAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_38);
  }

  bool isOBR_38(size_t index = 0) {
    try {
      return this->getObject(index, OBR_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportLogisticsofCollectedSampleAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Collector's Comment Auriga Makefile Messages-All.txt OBR.fields OK-but-OLD-xsegs2hapi.sh OLD-segments.txt README Roccuccio SOLO.d Sections boh.sh common datatypes.txt do-case.sh groups.txt hapi2auriga.sh merge-and-split.sh messages.txt missing roccuccio segments.txt supported-messages.txt tmp unique.sh xcomments.sh xdts2hapi.sh xmsgs2hapi.sh xrocco.sh xsegs2hapi.sh ymsgs.sh
   */

  CWE* getOBR_39(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_39);
  }

  CWE* getCollectorsCommentAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_39);
  }

  bool isOBR_39(size_t index = 0) {
    try {
      return this->getObject(index, OBR_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCollectorsCommentAurigaMakefileMessagesAlltxtOBRfieldsOKbutOLDxsegs2hapishOLDsegmentstxtREADMERoccuccioSOLOdSectionsbohshcommondatatypestxtdocaseshgroupstxthapi2aurigashmergeandsplitshmessagestxtmissingroccucciosegmentstxtsupportedmessagestxttmpuniqueshxcommentsshxdts2hapishxmsgs2hapishxroccoshxsegs2hapishymsgssh(size_t index = 0) {
    try {
      return this->getObject(index, OBR_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transport Arrangement Responsibility
   */

  CWE* getOBR_40(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_40);
  }

  CWE* getTransportArrangementResponsibility(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_40);
  }

  bool isOBR_40(size_t index = 0) {
    try {
      return this->getObject(index, OBR_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportArrangementResponsibility(size_t index = 0) {
    try {
      return this->getObject(index, OBR_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transport Arranged
   */

  ID* getOBR_41(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_41);
  }

  ID* getTransportArranged(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_41);
  }

  bool isOBR_41(size_t index = 0) {
    try {
      return this->getObject(index, OBR_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTransportArranged(size_t index = 0) {
    try {
      return this->getObject(index, OBR_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Escort Required
   */

  ID* getOBR_42(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_42);
  }

  ID* getEscortRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_42);
  }

  bool isOBR_42(size_t index = 0) {
    try {
      return this->getObject(index, OBR_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEscortRequired(size_t index = 0) {
    try {
      return this->getObject(index, OBR_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Planned Patient Transport Comment
   */

  CWE* getOBR_43(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_43);
  }

  CWE* getPlannedPatientTransportComment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_43);
  }

  bool isOBR_43(size_t index = 0) {
    try {
      return this->getObject(index, OBR_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlannedPatientTransportComment(size_t index = 0) {
    try {
      return this->getObject(index, OBR_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code
   */

  CNE* getOBR_44(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBR_44);
  }

  CNE* getProcedureCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBR_44);
  }

  bool isOBR_44(size_t index = 0) {
    try {
      return this->getObject(index, OBR_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCode(size_t index = 0) {
    try {
      return this->getObject(index, OBR_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Procedure Code Modifier
   */

  CNE* getOBR_45(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBR_45);
  }

  CNE* getProcedureCodeModifier(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, OBR_45);
  }

  bool isOBR_45(size_t index = 0) {
    try {
      return this->getObject(index, OBR_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcedureCodeModifier(size_t index = 0) {
    try {
      return this->getObject(index, OBR_45) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Supplemental Service Information
   */

  CWE* getOBR_46(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_46);
  }

  CWE* getPlacerSupplementalServiceInformation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_46);
  }

  bool isOBR_46(size_t index = 0) {
    try {
      return this->getObject(index, OBR_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, OBR_46) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Supplemental Service Information
   */

  CWE* getOBR_47(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_47);
  }

  CWE* getFillerSupplementalServiceInformation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_47);
  }

  bool isOBR_47(size_t index = 0) {
    try {
      return this->getObject(index, OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, OBR_47) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Medically Necessary Duplicate Procedure
   */

  CWE* getOBR_48(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_48);
  }

  CWE* getMedicallyNecessaryDuplicateProcedure(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_48);
  }

  bool isOBR_48(size_t index = 0) {
    try {
      return this->getObject(index, OBR_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMedicallyNecessaryDuplicateProcedure(size_t index = 0) {
    try {
      return this->getObject(index, OBR_48) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Result Handling
   */

  CWE* getOBR_49(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_49);
  }

  CWE* getResultHandling(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OBR_49);
  }

  bool isOBR_49(size_t index = 0) {
    try {
      return this->getObject(index, OBR_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResultHandling(size_t index = 0) {
    try {
      return this->getObject(index, OBR_49) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Universal Service Identifier
   */

  ST* getOBR_50(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_50);
  }

  ST* getParentUniversalServiceIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OBR_50);
  }

  bool isOBR_50(size_t index = 0) {
    try {
      return this->getObject(index, OBR_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OBR_50) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation Group ID
   */

  EI* getOBR_51(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_51);
  }

  EI* getObservationGroupID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_51);
  }

  bool isOBR_51(size_t index = 0) {
    try {
      return this->getObject(index, OBR_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationGroupID(size_t index = 0) {
    try {
      return this->getObject(index, OBR_51) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Observation Group ID
   */

  EI* getOBR_52(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_52);
  }

  EI* getParentObservationGroupID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OBR_52);
  }

  bool isOBR_52(size_t index = 0) {
    try {
      return this->getObject(index, OBR_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentObservationGroupID(size_t index = 0) {
    try {
      return this->getObject(index, OBR_52) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Placer Order Number
   */

  CX* getOBR_53(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, OBR_53);
  }

  CX* getAlternatePlacerOrderNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, OBR_53);
  }

  bool isOBR_53(size_t index = 0) {
    try {
      return this->getObject(index, OBR_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternatePlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, OBR_53) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Order
   */

  EIP* getOBR_54(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBR_54);
  }

  EIP* getParentOrder(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, OBR_54);
  }

  bool isOBR_54(size_t index = 0) {
    try {
      return this->getObject(index, OBR_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentOrder(size_t index = 0) {
    try {
      return this->getObject(index, OBR_54) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOBR_55(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_55);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OBR_55);
  }

  bool isOBR_55(size_t index = 0) {
    try {
      return this->getObject(index, OBR_55) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OBR_55) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OBR */

} /* End of namespace HL7_29 */
#endif /* __OBR_v29_H__ */
