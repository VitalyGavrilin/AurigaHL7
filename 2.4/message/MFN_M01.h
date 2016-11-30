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


#ifndef __MFN_M01__24_H__
#define __MFN_M01__24_H__

#include "../../common/Util.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/Zxx.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFN_M01_MF; /* MF */

/* MF */
struct MFN_M01_MF : public HL7Group {
  MFN_M01_MF() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M01_MFE_4, MFN_M01_Zxx_6, FIELD_ID_MAX };

  const char* className() const { return "MFN_M01_MF"; }
  MFN_M01_MF* create() const { return new MFN_M01_MF(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M01.MF");
    addObject<MFE>(MFN_M01_MFE_4, "MFE.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<Zxx>(MFN_M01_Zxx_6, "Zxx.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_4(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M01_MFE_4);
  }
  Zxx* getZxx_6(size_t index = 0) {
    return (Zxx*)this->getObjectSafe(index, MFN_M01_Zxx_6);
  }

  /* Checker list */
  bool isMFE_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M01_MFE_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isZxx_6(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M01_Zxx_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M01_3 */

/* MFN_M01 */
struct MFN_M01 : public HL7Message {
  MFN_M01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFN_M01_MSH_1, MFN_M01_MFI_2, MFN_M01_MF_3, FIELD_ID_MAX };

  const char* className() const { return "MFN_M01"; }
  MFN_M01* create() const { return new MFN_M01(); }

  /* Initialize object */
  void init() {
    setName("MFN_M01");
    addObject<MSH>(MFN_M01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFI>(MFN_M01_MFI_2, "MFI.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFN_M01_MF>(MFN_M01_MF_3, "MFN_M01.MF", HL7::initialized,
			  HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M01_MSH_1);
  }
  MFI* getMFI_2(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M01_MFI_2);
  }
  MFN_M01_MF* getMF(size_t index = 0) {
    return (MFN_M01_MF*)this->getObjectSafe(index, MFN_M01_MF_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M01_MFI_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M01_MF_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M01_ */
} /* namespace HL7_24 */
#endif /*  __MFN_M01__24_H__ */
