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


#ifndef __ESU_U01__24_H__
#define __ESU_U01__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/ISD.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"

namespace HL7_24 {

/* ESU_U01 */
struct ESU_U01 : public HL7Message {
  ESU_U01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ESU_U01_MSH_1,
    ESU_U01_EQU_2,
    ESU_U01_ISD_5,
    ESU_U01_ROL_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "ESU_U01"; }
  ESU_U01* create() const { return new ESU_U01(); }

 private:
  /* Initialize object */
  void init() {
    setName("ESU_U01");
    addObject<MSH>(ESU_U01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(ESU_U01_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ISD>(ESU_U01_ISD_5, "ISD.5", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ESU_U01_ROL_9, "ROL.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ESU_U01_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, ESU_U01_EQU_2);
  }
  ISD* getISD_5(size_t index = 0) {
    return (ISD*)this->getObjectSafe(index, ESU_U01_ISD_5);
  }
  ROL* getROL_9(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ESU_U01_ROL_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ESU_U01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, ESU_U01_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isISD_5(size_t index = 0) {
    try {
      return this->getObject(index, ESU_U01_ISD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_9(size_t index = 0) {
    try {
      return this->getObject(index, ESU_U01_ROL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ESU_U01_ */
} /* namespace HL7_24 */
#endif /*  __ESU_U01__24_H__ */
