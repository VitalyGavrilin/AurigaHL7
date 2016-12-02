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


#ifndef __PMU_B03__24_H__
#define __PMU_B03__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/STF.h"

namespace HL7_24 {

/* PMU_B03 */
struct PMU_B03 : public HL7Message {
  PMU_B03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { PMU_B03_MSH_1, PMU_B03_EVN_2, PMU_B03_STF_3, FIELD_ID_MAX };

  const char* className() const { return "PMU_B03"; }
  PMU_B03* create() const { return new PMU_B03(); }

 private:
  /* Initialize object */
  void init() {
    setName("PMU_B03");
    addObject<MSH>(PMU_B03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(PMU_B03_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<STF>(PMU_B03_STF_3, "STF.3", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, PMU_B03_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, PMU_B03_EVN_2);
  }
  STF* getSTF_3(size_t index = 0) {
    return (STF*)this->getObjectSafe(index, PMU_B03_STF_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B03_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSTF_3(size_t index = 0) {
    try {
      return this->getObject(index, PMU_B03_STF_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* PMU_B03_ */
} /* namespace HL7_24 */
#endif /*  __PMU_B03__24_H__ */
