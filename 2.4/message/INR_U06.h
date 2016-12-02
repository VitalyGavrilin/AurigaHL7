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


#ifndef __INR_U06__24_H__
#define __INR_U06__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/INV.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* INR_U06 */
struct INR_U06 : public HL7Message {
  INR_U06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    INR_U06_MSH_1,
    INR_U06_EQU_2,
    INR_U06_INV_4,
    INR_U06_ROL_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "INR_U06"; }
  INR_U06* create() const { return new INR_U06(); }

 private:
  /* Initialize object */
  void init() {
    setName("INR_U06");
    addObject<MSH>(INR_U06_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(INR_U06_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<INV>(INR_U06_INV_4, "INV.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<ROL>(INR_U06_ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, INR_U06_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, INR_U06_EQU_2);
  }
  INV* getINV_4(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, INR_U06_INV_4);
  }
  ROL* getROL_7(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, INR_U06_ROL_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, INR_U06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, INR_U06_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_4(size_t index = 0) {
    try {
      return this->getObject(index, INR_U06_INV_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, INR_U06_ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* INR_U06_ */
} /* namespace HL7_24 */
#endif /*  __INR_U06__24_H__ */
