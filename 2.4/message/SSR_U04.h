/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __SSR_U04__24_H__
#define __SSR_U04__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"

namespace HL7_24 {

/* SSR_U04 */
struct SSR_U04 : public HL7Message {
  SSR_U04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SSR_U04_MSH_1,
    SSR_U04_EQU_2,
    SSR_U04_SAC_4,
    SSR_U04_ROL_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "SSR_U04"; }
  SSR_U04* create() const { return new SSR_U04(); }

 private:
  /* Initialize object */
  void init() {
    setName("SSR_U04");
    addObject<MSH>(SSR_U04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(SSR_U04_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<SAC>(SSR_U04_SAC_4, "SAC.4", HL7::initialized,
		   HL7::repetition_on);
    addObject<ROL>(SSR_U04_ROL_7, "ROL.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SSR_U04_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, SSR_U04_EQU_2);
  }
  SAC* getSAC_4(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, SSR_U04_SAC_4);
  }
  ROL* getROL_7(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, SSR_U04_ROL_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_4(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_SAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_7(size_t index = 0) {
    try {
      return this->getObject(index, SSR_U04_ROL_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SSR_U04_ */
} /* namespace HL7_24 */
#endif /*  __SSR_U04__24_H__ */
