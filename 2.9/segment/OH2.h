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


#ifndef __OH2_v29_H__
#define __OH2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* OH2 */
class OH2 : public HL7Segment {
 public:
  OH2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    OH2_1,
    OH2_2,
    OH2_3,
    OH2_4,
    OH2_5,
    OH2_6,
    OH2_7,
    OH2_8,
    OH2_9,
    OH2_10,
    OH2_11,
    OH2_12,
    OH2_13,
    OH2_14,
    OH2_15,
    OH2_16,
    OH2_17,
    OH2_18,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "OH2"; }
  OH2* create() const { return new OH2(); }

 private:
  void init() {
    setName("OH2");
    /* Init members */
    addObject<SI>(OH2_1, "OH2.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OH2_2, "OH2.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH2_3, "OH2.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_4, "OH2.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_5, "OH2.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_6, "OH2.6", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH2_7, "OH2.7", HL7::initialized, HL7::repetition_off);
    addObject<DT>(OH2_8, "OH2.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_9, "OH2.9", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OH2_10, "OH2.10", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OH2_11, "OH2.11", HL7::initialized, HL7::repetition_off);
    addObject<XON>(OH2_12, "OH2.12", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(OH2_13, "OH2.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_14, "OH2.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OH2_15, "OH2.15", HL7::initialized, HL7::repetition_off);
    addObject<FT>(OH2_16, "OH2.16", HL7::initialized, HL7::repetition_off);
    addObject<EI>(OH2_17, "OH2.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(OH2_18, "OH2.18", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID
   */

  SI* getOH2_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH2_1);
  }

  SI* getSetID(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, OH2_1);
  }

  bool isOH2_1(size_t index = 0) {
    try {
      return this->getObject(index, OH2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetID(size_t index = 0) {
    try {
      return this->getObject(index, OH2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getOH2_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH2_2);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, OH2_2);
  }

  bool isOH2_2(size_t index = 0) {
    try {
      return this->getObject(index, OH2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, OH2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered Date
   */

  DT* getOH2_3(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_3);
  }

  DT* getEnteredDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_3);
  }

  bool isOH2_3(size_t index = 0) {
    try {
      return this->getObject(index, OH2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredDate(size_t index = 0) {
    try {
      return this->getObject(index, OH2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occupation
   */

  CWE* getOH2_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_4);
  }

  CWE* getOccupation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_4);
  }

  bool isOH2_4(size_t index = 0) {
    try {
      return this->getObject(index, OH2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccupation(size_t index = 0) {
    try {
      return this->getObject(index, OH2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Industry
   */

  CWE* getOH2_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_5);
  }

  CWE* getIndustry(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_5);
  }

  bool isOH2_5(size_t index = 0) {
    try {
      return this->getObject(index, OH2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndustry(size_t index = 0) {
    try {
      return this->getObject(index, OH2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Work Classification
   */

  CWE* getOH2_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_6);
  }

  CWE* getWorkClassification(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_6);
  }

  bool isOH2_6(size_t index = 0) {
    try {
      return this->getObject(index, OH2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWorkClassification(size_t index = 0) {
    try {
      return this->getObject(index, OH2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Start Date
   */

  DT* getOH2_7(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_7);
  }

  DT* getJobStartDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_7);
  }

  bool isOH2_7(size_t index = 0) {
    try {
      return this->getObject(index, OH2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobStartDate(size_t index = 0) {
    try {
      return this->getObject(index, OH2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job End Date
   */

  DT* getOH2_8(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_8);
  }

  DT* getJobEndDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, OH2_8);
  }

  bool isOH2_8(size_t index = 0) {
    try {
      return this->getObject(index, OH2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobEndDate(size_t index = 0) {
    try {
      return this->getObject(index, OH2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Work Schedule
   */

  CWE* getOH2_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_9);
  }

  CWE* getWorkSchedule(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_9);
  }

  bool isOH2_9(size_t index = 0) {
    try {
      return this->getObject(index, OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWorkSchedule(size_t index = 0) {
    try {
      return this->getObject(index, OH2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Average Hours worked per Day
   */

  NM* getOH2_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH2_10);
  }

  NM* getAverageHoursworkedperDay(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH2_10);
  }

  bool isOH2_10(size_t index = 0) {
    try {
      return this->getObject(index, OH2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAverageHoursworkedperDay(size_t index = 0) {
    try {
      return this->getObject(index, OH2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Average Days Worked per Week
   */

  NM* getOH2_11(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH2_11);
  }

  NM* getAverageDaysWorkedperWeek(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OH2_11);
  }

  bool isOH2_11(size_t index = 0) {
    try {
      return this->getObject(index, OH2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAverageDaysWorkedperWeek(size_t index = 0) {
    try {
      return this->getObject(index, OH2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Organization
   */

  XON* getOH2_12(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, OH2_12);
  }

  XON* getEmployerOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, OH2_12);
  }

  bool isOH2_12(size_t index = 0) {
    try {
      return this->getObject(index, OH2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerOrganization(size_t index = 0) {
    try {
      return this->getObject(index, OH2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Employer Address
   */

  XAD* getOH2_13(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OH2_13);
  }

  XAD* getEmployerAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, OH2_13);
  }

  bool isOH2_13(size_t index = 0) {
    try {
      return this->getObject(index, OH2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmployerAddress(size_t index = 0) {
    try {
      return this->getObject(index, OH2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supervisory Level
   */

  CWE* getOH2_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_14);
  }

  CWE* getSupervisoryLevel(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_14);
  }

  bool isOH2_14(size_t index = 0) {
    try {
      return this->getObject(index, OH2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupervisoryLevel(size_t index = 0) {
    try {
      return this->getObject(index, OH2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Duties
   */

  ST* getOH2_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OH2_15);
  }

  ST* getJobDuties(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OH2_15);
  }

  bool isOH2_15(size_t index = 0) {
    try {
      return this->getObject(index, OH2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobDuties(size_t index = 0) {
    try {
      return this->getObject(index, OH2_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occupational Hazards
   */

  FT* getOH2_16(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, OH2_16);
  }

  FT* getOccupationalHazards(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, OH2_16);
  }

  bool isOH2_16(size_t index = 0) {
    try {
      return this->getObject(index, OH2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccupationalHazards(size_t index = 0) {
    try {
      return this->getObject(index, OH2_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Job Unique Identifier
   */

  EI* getOH2_17(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH2_17);
  }

  EI* getJobUniqueIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, OH2_17);
  }

  bool isOH2_17(size_t index = 0) {
    try {
      return this->getObject(index, OH2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobUniqueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OH2_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Job Indicator
   */

  CWE* getOH2_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_18);
  }

  CWE* getCurrentJobIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, OH2_18);
  }

  bool isOH2_18(size_t index = 0) {
    try {
      return this->getObject(index, OH2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentJobIndicator(size_t index = 0) {
    try {
      return this->getObject(index, OH2_18) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OH2 */

} /* End of namespace HL7_29 */
#endif /* __OH2_v29_H__ */
