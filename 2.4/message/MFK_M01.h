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


#ifndef __MFK_M01__24_H__
#define __MFK_M01__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MFA.h"
#include "../segment/MFI.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"

namespace HL7_24 {

/* MFK_M01 */
struct MFK_M01 : public HL7Message {
  MFK_M01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFK_M01_MSH_1,
    MFK_M01_MSA_2,
    MFK_M01_ERR_3,
    MFK_M01_MFI_4,
    MFK_M01_MFA_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFK_M01"; }
  MFK_M01* create() const { return new MFK_M01(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFK_M01");
    addObject<MSH>(MFK_M01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(MFK_M01_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(MFK_M01_ERR_3, "ERR.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFK_M01_MFI_4, "MFI.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFA>(MFK_M01_MFA_6, "MFA.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFK_M01_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, MFK_M01_MSA_2);
  }
  ERR* getERR_3(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, MFK_M01_ERR_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFK_M01_MFI_4);
  }
  MFA* getMFA_6(size_t index = 0) {
    return (MFA*)this->getObjectSafe(index, MFK_M01_MFA_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M01_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M01_ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M01_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFA_6(size_t index = 0) {
    try {
      return this->getObject(index, MFK_M01_MFA_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFK_M01_ */
} /* namespace HL7_24 */
#endif /*  __MFK_M01__24_H__ */
