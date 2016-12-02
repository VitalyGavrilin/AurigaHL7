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


#ifndef __INU_U05__24_H__
#define __INU_U05__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/INV.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* INU_U05 */
struct INU_U05 : public HL7Message {
  INU_U05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    INU_U05_MSH_1,
    INU_U05_EQU_2,
    INU_U05_INV_4,
    INU_U05_ROL_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "INU_U05"; }
  INU_U05* create() const { return new INU_U05(); }

 private:
  /* Initialize object */
  void init() {
    setName("INU_U05");
    addObject<MSH>(INU_U05_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(INU_U05_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<INV>(INU_U05_INV_4, "INV.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<ROL>(INU_U05_ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, INU_U05_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, INU_U05_EQU_2);
  }
  INV* getINV_4(size_t index = 0) {
    return (INV*)this->getObjectSafe(index, INU_U05_INV_4);
  }
  ROL* getROL_7(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, INU_U05_ROL_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, INU_U05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, INU_U05_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINV_4(size_t index = 0) {
    try {
      return this->getObject(index, INU_U05_INV_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, INU_U05_ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* INU_U05_ */
} /* namespace HL7_24 */
#endif /*  __INU_U05__24_H__ */
