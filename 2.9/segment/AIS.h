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


#ifndef __AIS_v29_H__
#define __AIS_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* AIS */
class AIS : public HL7Segment {
 public:
  AIS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    AIS_1,
    AIS_2,
    AIS_3,
    AIS_4,
    AIS_5,
    AIS_6,
    AIS_7,
    AIS_8,
    AIS_9,
    AIS_10,
    AIS_11,
    AIS_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "AIS"; }
  AIS* create() const { return new AIS(); }

 private:
  void init() {
    setName("AIS");
    /* Init members */
    addObject<SI>(AIS_1, "AIS.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(AIS_2, "AIS.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIS_3, "AIS.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(AIS_4, "AIS.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(AIS_5, "AIS.5", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(AIS_6, "AIS.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(AIS_7, "AIS.7", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(AIS_8, "AIS.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIS_9, "AIS.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIS_10, "AIS.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIS_11, "AIS.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(AIS_12, "AIS.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - AIS
   */

  SI* getAIS_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIS_1);
  }

  SI* getSetIDAIS(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, AIS_1);
  }

  bool isAIS_1(size_t index = 0) {
    try {
      return this->getObject(index, AIS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDAIS(size_t index = 0) {
    try {
      return this->getObject(index, AIS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getAIS_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIS_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, AIS_2);
  }

  bool isAIS_2(size_t index = 0) {
    try {
      return this->getObject(index, AIS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Identifier
   */

  CWE* getAIS_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_3);
  }

  CWE* getUniversalServiceIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_3);
  }

  bool isAIS_3(size_t index = 0) {
    try {
      return this->getObject(index, AIS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServiceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, AIS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time
   */

  DTM* getAIS_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AIS_4);
  }

  DTM* getStartDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, AIS_4);
  }

  bool isAIS_4(size_t index = 0) {
    try {
      return this->getObject(index, AIS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, AIS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset
   */

  NM* getAIS_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_5);
  }

  NM* getStartDateTimeOffset(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_5);
  }

  bool isAIS_5(size_t index = 0) {
    try {
      return this->getObject(index, AIS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffset(size_t index = 0) {
    try {
      return this->getObject(index, AIS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Start Date/Time Offset Units
   */

  CNE* getAIS_6(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIS_6);
  }

  CNE* getStartDateTimeOffsetUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIS_6);
  }

  bool isAIS_6(size_t index = 0) {
    try {
      return this->getObject(index, AIS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTimeOffsetUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration
   */

  NM* getAIS_7(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_7);
  }

  NM* getDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, AIS_7);
  }

  bool isAIS_7(size_t index = 0) {
    try {
      return this->getObject(index, AIS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, AIS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duration Units
   */

  CNE* getAIS_8(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIS_8);
  }

  CNE* getDurationUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, AIS_8);
  }

  bool isAIS_8(size_t index = 0) {
    try {
      return this->getObject(index, AIS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, AIS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Allow Substitution Code
   */

  CWE* getAIS_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_9);
  }

  CWE* getAllowSubstitutionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_9);
  }

  bool isAIS_9(size_t index = 0) {
    try {
      return this->getObject(index, AIS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAllowSubstitutionCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CWE* getAIS_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_10);
  }

  CWE* getFillerStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_10);
  }

  bool isAIS_10(size_t index = 0) {
    try {
      return this->getObject(index, AIS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, AIS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Supplemental Service Information
   */

  CWE* getAIS_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_11);
  }

  CWE* getPlacerSupplementalServiceInformation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_11);
  }

  bool isAIS_11(size_t index = 0) {
    try {
      return this->getObject(index, AIS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, AIS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Supplemental Service Information
   */

  CWE* getAIS_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_12);
  }

  CWE* getFillerSupplementalServiceInformation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, AIS_12);
  }

  bool isAIS_12(size_t index = 0) {
    try {
      return this->getObject(index, AIS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerSupplementalServiceInformation(size_t index = 0) {
    try {
      return this->getObject(index, AIS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of AIS */

} /* End of namespace HL7_29 */
#endif /* __AIS_v29_H__ */
