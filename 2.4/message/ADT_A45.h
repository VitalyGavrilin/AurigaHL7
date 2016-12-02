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


#ifndef __ADT_A45__24_H__
#define __ADT_A45__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MRG.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ADT_A45_MERGE_INFO; /* MERGE_INFO */

/* MERGE_INFO */
struct ADT_A45_MERGE_INFO : public HL7Group {
  ADT_A45_MERGE_INFO() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A45_MRG_8, ADT_A45_PV1_9, FIELD_ID_MAX };

  const char* className() const { return "ADT_A45_MERGE_INFO"; }
  ADT_A45_MERGE_INFO* create() const { return new ADT_A45_MERGE_INFO(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A45.MERGE_INFO");
    addObject<MRG>(ADT_A45_MRG_8, "MRG.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(ADT_A45_PV1_9, "PV1.9", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MRG* getMRG_8(size_t index = 0) {
    return (MRG*)this->getObjectSafe(index, ADT_A45_MRG_8);
  }
  PV1* getPV1_9(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADT_A45_PV1_9);
  }

  /* Checker list */
  bool isMRG_8(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_MRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_9(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_PV1_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A45_7 */

/* ADT_A45 */
struct ADT_A45 : public HL7Message {
  ADT_A45() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADT_A45_MSH_1,
    ADT_A45_EVN_2,
    ADT_A45_PID_3,
    ADT_A45_PD1_5,
    ADT_A45_MERGE_INFO_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADT_A45"; }
  ADT_A45* create() const { return new ADT_A45(); }

  /* Initialize object */
  void init() {
    setName("ADT_A45");
    addObject<MSH>(ADT_A45_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A45_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(ADT_A45_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADT_A45_PD1_5, "PD1.5", HL7::optional, HL7::repetition_off);
    addObject<ADT_A45_MERGE_INFO>(ADT_A45_MERGE_INFO_7, "ADT_A45.MERGE_INFO",
				  HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A45_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A45_EVN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADT_A45_PID_3);
  }
  PD1* getPD1_5(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADT_A45_PD1_5);
  }
  ADT_A45_MERGE_INFO* getMERGE_INFO(size_t index = 0) {
    return (ADT_A45_MERGE_INFO*)this->getObjectSafe(index,
						    ADT_A45_MERGE_INFO_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMERGE_INFO(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A45_MERGE_INFO_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A45_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A45__24_H__ */
