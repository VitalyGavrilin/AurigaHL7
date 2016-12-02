/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __PRB_v24_H__
#define __PRB_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Problem Details */
class PRB : public HL7Segment {
 public:
  PRB() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PRB_1,
    PRB_2,
    PRB_3,
    PRB_4,
    PRB_5,
    PRB_6,
    PRB_7,
    PRB_8,
    PRB_9,
    PRB_10,
    PRB_11,
    PRB_12,
    PRB_13,
    PRB_14,
    PRB_15,
    PRB_16,
    PRB_17,
    PRB_18,
    PRB_19,
    PRB_20,
    PRB_21,
    PRB_22,
    PRB_23,
    PRB_24,
    PRB_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PRB"; }
  PRB* create() const { return new PRB(); }

 private:
  void init() {
    setName("PRB");
    /* Init members */
    addObject<ID>(PRB_1, "PRB.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PRB_2, "PRB.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(PRB_3, "PRB.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRB_4, "PRB.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PRB_5, "PRB.5", HL7::optional, HL7::repetition_off);
    addObject<NM>(PRB_6, "PRB.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRB_7, "PRB.7", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRB_8, "PRB.8", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRB_9, "PRB.9", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_10, "PRB.10", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_11, "PRB.11", HL7::optional, HL7::repetition_on);
    addObject<CE>(PRB_12, "PRB.12", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_13, "PRB.13", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_14, "PRB.14", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRB_15, "PRB.15", HL7::optional, HL7::repetition_off);
    addObject<TS>(PRB_16, "PRB.16", HL7::optional, HL7::repetition_off);
    addObject<ST>(PRB_17, "PRB.17", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_18, "PRB.18", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_19, "PRB.19", HL7::optional, HL7::repetition_off);
    addObject<NM>(PRB_20, "PRB.20", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_21, "PRB.21", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_22, "PRB.22", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_23, "PRB.23", HL7::optional, HL7::repetition_off);
    addObject<ST>(PRB_24, "PRB.24", HL7::optional, HL7::repetition_off);
    addObject<CE>(PRB_25, "PRB.25", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Action Code
   */

  ID* getPRB_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRB_1);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PRB_1);
  }

  bool isPRB_1(size_t index = 0) {
    try {
      return this->getObject(index, PRB_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PRB_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Date/Time
   */

  TS* getPRB_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_2);
  }

  TS* getActionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_2);
  }

  bool isPRB_2(size_t index = 0) {
    try {
      return this->getObject(index, PRB_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRB_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem ID
   */

  CE* getPRB_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_3);
  }

  CE* getProblemID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_3);
  }

  bool isPRB_3(size_t index = 0) {
    try {
      return this->getObject(index, PRB_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemID(size_t index = 0) {
    try {
      return this->getObject(index, PRB_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Instance ID
   */

  EI* getPRB_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRB_4);
  }

  EI* getProblemInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRB_4);
  }

  bool isPRB_4(size_t index = 0) {
    try {
      return this->getObject(index, PRB_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, PRB_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Episode of Care ID
   */

  EI* getPRB_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRB_5);
  }

  EI* getEpisodeOfCareID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PRB_5);
  }

  bool isPRB_5(size_t index = 0) {
    try {
      return this->getObject(index, PRB_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEpisodeOfCareID(size_t index = 0) {
    try {
      return this->getObject(index, PRB_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem List Priority
   */

  NM* getPRB_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRB_6);
  }

  NM* getProblemListPriority(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRB_6);
  }

  bool isPRB_6(size_t index = 0) {
    try {
      return this->getObject(index, PRB_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemListPriority(size_t index = 0) {
    try {
      return this->getObject(index, PRB_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Established Date/Time
   */

  TS* getPRB_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_7);
  }

  TS* getProblemEstablishedDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_7);
  }

  bool isPRB_7(size_t index = 0) {
    try {
      return this->getObject(index, PRB_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemEstablishedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRB_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Anticipated Problem Resolution Date/Time
   */

  TS* getPRB_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_8);
  }

  TS* getAnticipatedProblemResolutionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_8);
  }

  bool isPRB_8(size_t index = 0) {
    try {
      return this->getObject(index, PRB_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnticipatedProblemResolutionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRB_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Actual Problem Resolution Date/Time
   */

  TS* getPRB_9(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_9);
  }

  TS* getActualProblemResolutionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_9);
  }

  bool isPRB_9(size_t index = 0) {
    try {
      return this->getObject(index, PRB_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActualProblemResolutionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRB_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Classification
   */

  CE* getPRB_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_10);
  }

  CE* getProblemClassification(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_10);
  }

  bool isPRB_10(size_t index = 0) {
    try {
      return this->getObject(index, PRB_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemClassification(size_t index = 0) {
    try {
      return this->getObject(index, PRB_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Management Discipline
   */

  CE* getPRB_11(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_11);
  }

  CE* getProblemManagementDiscipline(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_11);
  }

  bool isPRB_11(size_t index = 0) {
    try {
      return this->getObject(index, PRB_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemManagementDiscipline(size_t index = 0) {
    try {
      return this->getObject(index, PRB_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Persistence
   */

  CE* getPRB_12(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_12);
  }

  CE* getProblemPersistence(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_12);
  }

  bool isPRB_12(size_t index = 0) {
    try {
      return this->getObject(index, PRB_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemPersistence(size_t index = 0) {
    try {
      return this->getObject(index, PRB_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Confirmation Status
   */

  CE* getPRB_13(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_13);
  }

  CE* getProblemConfirmationStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_13);
  }

  bool isPRB_13(size_t index = 0) {
    try {
      return this->getObject(index, PRB_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemConfirmationStatus(size_t index = 0) {
    try {
      return this->getObject(index, PRB_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Life Cycle Status
   */

  CE* getPRB_14(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_14);
  }

  CE* getProblemLifeCycleStatus(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_14);
  }

  bool isPRB_14(size_t index = 0) {
    try {
      return this->getObject(index, PRB_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemLifeCycleStatus(size_t index = 0) {
    try {
      return this->getObject(index, PRB_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Life Cycle Status Date/Time
   */

  TS* getPRB_15(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_15);
  }

  TS* getProblemLifeCycleStatusDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_15);
  }

  bool isPRB_15(size_t index = 0) {
    try {
      return this->getObject(index, PRB_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemLifeCycleStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PRB_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Date of Onset
   */

  TS* getPRB_16(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_16);
  }

  TS* getProblemDateOfOnset(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PRB_16);
  }

  bool isPRB_16(size_t index = 0) {
    try {
      return this->getObject(index, PRB_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemDateOfOnset(size_t index = 0) {
    try {
      return this->getObject(index, PRB_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Onset Text
   */

  ST* getPRB_17(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRB_17);
  }

  ST* getProblemOnsetText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRB_17);
  }

  bool isPRB_17(size_t index = 0) {
    try {
      return this->getObject(index, PRB_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemOnsetText(size_t index = 0) {
    try {
      return this->getObject(index, PRB_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Ranking
   */

  CE* getPRB_18(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_18);
  }

  CE* getProblemRanking(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_18);
  }

  bool isPRB_18(size_t index = 0) {
    try {
      return this->getObject(index, PRB_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemRanking(size_t index = 0) {
    try {
      return this->getObject(index, PRB_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Certainty of Problem
   */

  CE* getPRB_19(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_19);
  }

  CE* getCertaintyOfProblem(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_19);
  }

  bool isPRB_19(size_t index = 0) {
    try {
      return this->getObject(index, PRB_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCertaintyOfProblem(size_t index = 0) {
    try {
      return this->getObject(index, PRB_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Probability of Problem (0-1)
   */

  NM* getPRB_20(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRB_20);
  }

  NM* getProbabilityOfProblem(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PRB_20);
  }

  bool isPRB_20(size_t index = 0) {
    try {
      return this->getObject(index, PRB_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProbabilityOfProblem(size_t index = 0) {
    try {
      return this->getObject(index, PRB_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Individual Awareness of Problem
   */

  CE* getPRB_21(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_21);
  }

  CE* getIndividualAwarenessOfProblem(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_21);
  }

  bool isPRB_21(size_t index = 0) {
    try {
      return this->getObject(index, PRB_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndividualAwarenessOfProblem(size_t index = 0) {
    try {
      return this->getObject(index, PRB_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Problem Prognosis
   */

  CE* getPRB_22(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_22);
  }

  CE* getProblemPrognosis(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_22);
  }

  bool isPRB_22(size_t index = 0) {
    try {
      return this->getObject(index, PRB_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProblemPrognosis(size_t index = 0) {
    try {
      return this->getObject(index, PRB_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Individual Awareness of Prognosis
   */

  CE* getPRB_23(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_23);
  }

  CE* getIndividualAwarenessOfPrognosis(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_23);
  }

  bool isPRB_23(size_t index = 0) {
    try {
      return this->getObject(index, PRB_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIndividualAwarenessOfPrognosis(size_t index = 0) {
    try {
      return this->getObject(index, PRB_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Family/Significant Other Awareness of Problem/Prognosis
   */

  ST* getPRB_24(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRB_24);
  }

  ST* getFamilySignificantOtherAwarenessOfProblemPrognosis(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PRB_24);
  }

  bool isPRB_24(size_t index = 0) {
    try {
      return this->getObject(index, PRB_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFamilySignificantOtherAwarenessOfProblemPrognosis(size_t index = 0) {
    try {
      return this->getObject(index, PRB_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Security/Sensitivity
   */

  CE* getPRB_25(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_25);
  }

  CE* getSecuritySensitivity(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PRB_25);
  }

  bool isPRB_25(size_t index = 0) {
    try {
      return this->getObject(index, PRB_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSecuritySensitivity(size_t index = 0) {
    try {
      return this->getObject(index, PRB_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PRB */

} /* End of namespace HL7_24 */
#endif /* __PRB_v24_H__ */
