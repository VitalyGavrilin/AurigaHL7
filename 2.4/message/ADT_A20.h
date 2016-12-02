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


#ifndef __ADT_A20__24_H__
#define __ADT_A20__24_H__

#include "../../common/Util.h"
#include "../segment/EVN.h"
#include "../segment/MSH.h"
#include "../segment/NPU.h"

namespace HL7_24 {

/* ADT_A20 */
struct ADT_A20 : public HL7Message {
  ADT_A20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADT_A20_MSH_1, ADT_A20_EVN_2, ADT_A20_NPU_3, FIELD_ID_MAX };

  const char* className() const { return "ADT_A20"; }
  ADT_A20* create() const { return new ADT_A20(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADT_A20");
    addObject<MSH>(ADT_A20_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EVN>(ADT_A20_EVN_2, "EVN.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<NPU>(ADT_A20_NPU_3, "NPU.3", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADT_A20_MSH_1);
  }
  EVN* getEVN_2(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADT_A20_EVN_2);
  }
  NPU* getNPU_3(size_t index = 0) {
    return (NPU*)this->getObjectSafe(index, ADT_A20_NPU_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEVN_2(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_EVN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNPU_3(size_t index = 0) {
    try {
      return this->getObject(index, ADT_A20_NPU_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADT_A20_ */
} /* namespace HL7_24 */
#endif /*  __ADT_A20__24_H__ */
