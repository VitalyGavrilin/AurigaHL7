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


#ifndef __GOL_v29_H__
#define __GOL_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* GOL */
class GOL : public HL7Segment {
 public:
  GOL() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    GOL_1,
    GOL_2,
    GOL_3,
    GOL_4,
    GOL_5,
    GOL_6,
    GOL_7,
    GOL_8,
    GOL_9,
    GOL_10,
    GOL_11,
    GOL_12,
    GOL_13,
    GOL_14,
    GOL_15,
    GOL_16,
    GOL_17,
    GOL_18,
    GOL_19,
    GOL_20,
    GOL_21,
    GOL_22,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "GOL"; }
  GOL* create() const { return new GOL(); }

 private:
  void init() {
    setName("GOL");
    /* Init members */
    addObject<ID>(GOL_1, "GOL.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_2, "GOL.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_3, "GOL.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(GOL_4, "GOL.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(GOL_5, "GOL.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(GOL_6, "GOL.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_7, "GOL.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_8, "GOL.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_9, "GOL.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_10, "GOL.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_11, "GOL.11", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_12, "GOL.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_13, "GOL.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_14, "GOL.14", HL7::initialized, HL7::repetition_off);
    addObject<ST>(GOL_15, "GOL.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_16, "GOL.16", HL7::initialized, HL7::repetition_off);
    addObject<ST>(GOL_17, "GOL.17", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_18, "GOL.18", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(GOL_19, "GOL.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GOL_20, "GOL.20", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(GOL_21, "GOL.21", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(GOL_22, "GOL.22", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Action Code
   */

  ID* getGOL_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GOL_1);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, GOL_1);
  }

  bool isGOL_1(size_t index = 0) {
    try {
      return this->getObject(index, GOL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, GOL_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Date/Time
   */

  DTM* getGOL_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_2);
  }

  DTM* getActionDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_2);
  }

  bool isGOL_2(size_t index = 0) {
    try {
      return this->getObject(index, GOL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal ID
   */

  CWE* getGOL_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_3);
  }

  CWE* getGoalID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_3);
  }

  bool isGOL_3(size_t index = 0) {
    try {
      return this->getObject(index, GOL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalID(size_t index = 0) {
    try {
      return this->getObject(index, GOL_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Instance ID
   */

  EI* getGOL_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, GOL_4);
  }

  EI* getGoalInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, GOL_4);
  }

  bool isGOL_4(size_t index = 0) {
    try {
      return this->getObject(index, GOL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, GOL_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Episode of Care ID
   */

  EI* getGOL_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, GOL_5);
  }

  EI* getEpisodeofCareID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, GOL_5);
  }

  bool isGOL_5(size_t index = 0) {
    try {
      return this->getObject(index, GOL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEpisodeofCareID(size_t index = 0) {
    try {
      return this->getObject(index, GOL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal List Priority
   */

  NM* getGOL_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GOL_6);
  }

  NM* getGoalListPriority(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GOL_6);
  }

  bool isGOL_6(size_t index = 0) {
    try {
      return this->getObject(index, GOL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalListPriority(size_t index = 0) {
    try {
      return this->getObject(index, GOL_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Established Date/Time
   */

  DTM* getGOL_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_7);
  }

  DTM* getGoalEstablishedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_7);
  }

  bool isGOL_7(size_t index = 0) {
    try {
      return this->getObject(index, GOL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalEstablishedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Goal Achieve Date/Time
   */

  DTM* getGOL_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_8);
  }

  DTM* getExpectedGoalAchieveDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_8);
  }

  bool isGOL_8(size_t index = 0) {
    try {
      return this->getObject(index, GOL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedGoalAchieveDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Classification
   */

  CWE* getGOL_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_9);
  }

  CWE* getGoalClassification(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_9);
  }

  bool isGOL_9(size_t index = 0) {
    try {
      return this->getObject(index, GOL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalClassification(size_t index = 0) {
    try {
      return this->getObject(index, GOL_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Management Discipline
   */

  CWE* getGOL_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_10);
  }

  CWE* getGoalManagementDiscipline(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_10);
  }

  bool isGOL_10(size_t index = 0) {
    try {
      return this->getObject(index, GOL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalManagementDiscipline(size_t index = 0) {
    try {
      return this->getObject(index, GOL_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Goal Review Status
   */

  CWE* getGOL_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_11);
  }

  CWE* getCurrentGoalReviewStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_11);
  }

  bool isGOL_11(size_t index = 0) {
    try {
      return this->getObject(index, GOL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentGoalReviewStatus(size_t index = 0) {
    try {
      return this->getObject(index, GOL_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Current Goal Review Date/Time
   */

  DTM* getGOL_12(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_12);
  }

  DTM* getCurrentGoalReviewDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_12);
  }

  bool isGOL_12(size_t index = 0) {
    try {
      return this->getObject(index, GOL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCurrentGoalReviewDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Next Goal Review Date/Time
   */

  DTM* getGOL_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_13);
  }

  DTM* getNextGoalReviewDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_13);
  }

  bool isGOL_13(size_t index = 0) {
    try {
      return this->getObject(index, GOL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNextGoalReviewDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Previous Goal Review Date/Time
   */

  DTM* getGOL_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_14);
  }

  DTM* getPreviousGoalReviewDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_14);
  }

  bool isGOL_14(size_t index = 0) {
    try {
      return this->getObject(index, GOL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreviousGoalReviewDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Review Interval
   */

  ST* getGOL_15(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GOL_15);
  }

  ST* getGoalReviewInterval(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GOL_15);
  }

  bool isGOL_15(size_t index = 0) {
    try {
      return this->getObject(index, GOL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalReviewInterval(size_t index = 0) {
    try {
      return this->getObject(index, GOL_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Evaluation
   */

  CWE* getGOL_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_16);
  }

  CWE* getGoalEvaluation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_16);
  }

  bool isGOL_16(size_t index = 0) {
    try {
      return this->getObject(index, GOL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalEvaluation(size_t index = 0) {
    try {
      return this->getObject(index, GOL_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Evaluation Comment
   */

  ST* getGOL_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GOL_17);
  }

  ST* getGoalEvaluationComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, GOL_17);
  }

  bool isGOL_17(size_t index = 0) {
    try {
      return this->getObject(index, GOL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalEvaluationComment(size_t index = 0) {
    try {
      return this->getObject(index, GOL_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Life Cycle Status
   */

  CWE* getGOL_18(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_18);
  }

  CWE* getGoalLifeCycleStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_18);
  }

  bool isGOL_18(size_t index = 0) {
    try {
      return this->getObject(index, GOL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalLifeCycleStatus(size_t index = 0) {
    try {
      return this->getObject(index, GOL_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Life Cycle Status Date/Time
   */

  DTM* getGOL_19(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_19);
  }

  DTM* getGoalLifeCycleStatusDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, GOL_19);
  }

  bool isGOL_19(size_t index = 0) {
    try {
      return this->getObject(index, GOL_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalLifeCycleStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, GOL_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Target Type
   */

  CWE* getGOL_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_20);
  }

  CWE* getGoalTargetType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GOL_20);
  }

  bool isGOL_20(size_t index = 0) {
    try {
      return this->getObject(index, GOL_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalTargetType(size_t index = 0) {
    try {
      return this->getObject(index, GOL_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Goal Target Name
   */

  XPN* getGOL_21(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GOL_21);
  }

  XPN* getGoalTargetName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, GOL_21);
  }

  bool isGOL_21(size_t index = 0) {
    try {
      return this->getObject(index, GOL_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGoalTargetName(size_t index = 0) {
    try {
      return this->getObject(index, GOL_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mood Code
   */

  CNE* getGOL_22(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, GOL_22);
  }

  CNE* getMoodCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, GOL_22);
  }

  bool isGOL_22(size_t index = 0) {
    try {
      return this->getObject(index, GOL_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoodCode(size_t index = 0) {
    try {
      return this->getObject(index, GOL_22) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GOL */

} /* End of namespace HL7_29 */
#endif /* __GOL_v29_H__ */
