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


#ifndef __LSU_U12__24_H__
#define __LSU_U12__24_H__

#include "../../common/Util.h"
#include "../segment/EQP.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* LSU_U12 */
struct LSU_U12 : public HL7Message {
  LSU_U12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    LSU_U12_MSH_1,
    LSU_U12_EQU_2,
    LSU_U12_EQP_4,
    LSU_U12_ROL_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "LSU_U12"; }
  LSU_U12* create() const { return new LSU_U12(); }

 private:
  /* Initialize object */
  void init() {
    setName("LSU_U12");
    addObject<MSH>(LSU_U12_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(LSU_U12_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQP>(LSU_U12_EQP_4, "EQP.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<ROL>(LSU_U12_ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, LSU_U12_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, LSU_U12_EQU_2);
  }
  EQP* getEQP_4(size_t index = 0) {
    return (EQP*)this->getObjectSafe(index, LSU_U12_EQP_4);
  }
  ROL* getROL_7(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, LSU_U12_ROL_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, LSU_U12_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, LSU_U12_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQP_4(size_t index = 0) {
    try {
      return this->getObject(index, LSU_U12_EQP_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, LSU_U12_ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* LSU_U12_ */
} /* namespace HL7_24 */
#endif /*  __LSU_U12__24_H__ */
