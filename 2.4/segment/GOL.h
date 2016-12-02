/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __GOL_v24_H__
#define __GOL_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"
#include "../datatype/XPN.h"

namespace HL7_24 {

/* Goal Detail */
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
    addObject<TS>(GOL_2, "GOL.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(GOL_3, "GOL.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(GOL_4, "GOL.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(GOL_5, "GOL.5", HL7::optional, HL7::repetition_off);
    addObject<NM>(GOL_6, "GOL.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_7, "GOL.7", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_8, "GOL.8", HL7::optional, HL7::repetition_off);
    addObject<CE>(GOL_9, "GOL.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(GOL_10, "GOL.10", HL7::optional, HL7::repetition_off);
    addObject<CE>(GOL_11, "GOL.11", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_12, "GOL.12", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_13, "GOL.13", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_14, "GOL.14", HL7::optional, HL7::repetition_off);
    addObject<TQ>(GOL_15, "GOL.15", HL7::optional, HL7::repetition_off);
    addObject<CE>(GOL_16, "GOL.16", HL7::optional, HL7::repetition_off);
    addObject<ST>(GOL_17, "GOL.17", HL7::optional, HL7::repetition_on);
    addObject<CE>(GOL_18, "GOL.18", HL7::optional, HL7::repetition_off);
    addObject<TS>(GOL_19, "GOL.19", HL7::optional, HL7::repetition_off);
    addObject<CE>(GOL_20, "GOL.20", HL7::optional, HL7::repetition_on);
    addObject<XPN>(GOL_21, "GOL.21", HL7::optional, HL7::repetition_on);
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

  TS* getGOL_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_2);
  }

  TS* getActionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_2);
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

  CE* getGOL_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_3);
  }

  CE* getGoalID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_3);
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

  EI* getEpisodeOfCareID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, GOL_5);
  }

  bool isGOL_5(size_t index = 0) {
    try {
      return this->getObject(index, GOL_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEpisodeOfCareID(size_t index = 0) {
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

  TS* getGOL_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_7);
  }

  TS* getGoalEstablishedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_7);
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

  TS* getGOL_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_8);
  }

  TS* getExpectedGoalAchieveDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_8);
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

  CE* getGOL_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_9);
  }

  CE* getGoalClassification(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_9);
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

  CE* getGOL_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_10);
  }

  CE* getGoalManagementDiscipline(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_10);
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

  CE* getGOL_11(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_11);
  }

  CE* getCurrentGoalReviewStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_11);
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

  TS* getGOL_12(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_12);
  }

  TS* getCurrentGoalReviewDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_12);
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

  TS* getGOL_13(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_13);
  }

  TS* getNextGoalReviewDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_13);
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

  TS* getGOL_14(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_14);
  }

  TS* getPreviousGoalReviewDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_14);
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

  TQ* getGOL_15(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, GOL_15);
  }

  TQ* getGoalReviewInterval(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, GOL_15);
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

  CE* getGOL_16(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_16);
  }

  CE* getGoalEvaluation(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_16);
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

  CE* getGOL_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_18);
  }

  CE* getGoalLifeCycleStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_18);
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

  TS* getGOL_19(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_19);
  }

  TS* getGoalLifeCycleStatusDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, GOL_19);
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

  CE* getGOL_20(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_20);
  }

  CE* getGoalTargetType(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, GOL_20);
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

}; /* End of GOL */

} /* End of namespace HL7_24 */
#endif /* __GOL_v24_H__ */
