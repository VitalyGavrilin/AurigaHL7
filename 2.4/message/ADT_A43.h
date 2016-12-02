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


#ifndef __ADT_A43__24_H__
#define __ADT_A43__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ADT_A43_PATIENT; /* PATIENT */

/* PATIENT */
struct ADT_A43_PATIENT : public HL7Group {
  ADT_A43_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A43_PID_4, ADT_A43_PD1_6, ADT_A43_MRG_8, FIELD_ID_MAX };

  const char* className() const { return "ADT_A43_PATIENT"; }
  ADT_A43_PATIENT* create() const { return new ADT_A43_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A43.PATIENT");
    addObject<PID>(ADT_A43_PID_4, "PID.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A43_PD1_6, "PD1.6", HL7::optional, HL7::repetition_off);
    addObject<MRG>(ADT_A43_MRG_8, "MRG.8", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PID* getPID_4(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A43_PID_4);
  }
  PD1* getPD1_6(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A43_PD1_6);
  }
  MRG* getMRG_8(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A43_MRG_8);
  }

  /* Checker list */
  bool isPID_4(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PID_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMRG_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_MRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A43_3 */

/* ADT_A43 */
struct ADT_A43 : public HL7Message {
  ADT_A43() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A43_MSH_1,
    ADT_A43_EVN_2,
    ADT_A43_PATIENT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A43"; }
  ADT_A43* create() const { return new ADT_A43(); }

  /* Initialize object */
  void init() {
    setName("ADT_A43");
    addObject<MSH>(ADT_A43_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A43_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ADT_A43_PATIENT>(ADT_A43_PATIENT_3, "ADT_A43.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A43_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A43_EVN_2);
  }
  ADT_A43_PATIENT* getPATIENT(size_t index = 0) {
    return (ADT_A43_PATIENT*)this->getObjectSafe(index, ADT_A43_PATIENT_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A43_PATIENT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A43_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A43__24_H__ */
