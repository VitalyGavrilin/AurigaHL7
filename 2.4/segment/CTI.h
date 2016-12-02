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


#ifndef __CTI_v24_H__
#define __CTI_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/EI.h"

namespace HL7_24 {

/* Clinical Trial Identification */
class CTI : public HL7Segment {
 public:
  CTI() { this->init(); }

 private:
  /* */
  enum FIELD_ID { CTI_1, CTI_2, CTI_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "CTI"; }
  CTI* create() const { return new CTI(); }

 private:
  void init() {
    setName("CTI");
    /* Init members */
    addObject<EI>(CTI_1, "CTI.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(CTI_2, "CTI.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(CTI_3, "CTI.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sponsor Study ID
   */

  EI* getCTI_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTI_1);
  }

  EI* getSponsorStudyID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, CTI_1);
  }

  bool isCTI_1(size_t index = 0) {
    try {
      return this->getObject(index, CTI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSponsorStudyID(size_t index = 0) {
    try {
      return this->getObject(index, CTI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Identifier
   */

  CE* getCTI_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CTI_2);
  }

  CE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CTI_2);
  }

  bool isCTI_2(size_t index = 0) {
    try {
      return this->getObject(index, CTI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CTI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Scheduled Time Point
   */

  CE* getCTI_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CTI_3);
  }

  CE* getStudyScheduledTimePoint(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, CTI_3);
  }

  bool isCTI_3(size_t index = 0) {
    try {
      return this->getObject(index, CTI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyScheduledTimePoint(size_t index = 0) {
    try {
      return this->getObject(index, CTI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CTI */

} /* End of namespace HL7_24 */
#endif /* __CTI_v24_H__ */
