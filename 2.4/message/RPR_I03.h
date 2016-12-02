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


#ifndef __RPR_I03__24_H__
#define __RPR_I03__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RPR_I03_PROVIDER; /* PROVIDER */

/* PROVIDER */
struct RPR_I03_PROVIDER : public HL7Group {
  RPR_I03_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPR_I03_PRD_4, RPR_I03_CTD_7, FIELD_ID_MAX };

  const char* className() const { return "RPR_I03_PROVIDER"; }
  RPR_I03_PROVIDER* create() const { return new RPR_I03_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPR_I03.PROVIDER");
    addObject<PRD>(RPR_I03_PRD_4, "PRD.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RPR_I03_CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_4(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPR_I03_PRD_4);
  }
  CTD* getCTD_7(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPR_I03_CTD_7);
  }

  /* Checker list */
  bool isPRD_4(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPR_I03_3 */

/* RPR_I03 */
struct RPR_I03 : public HL7Message {
  RPR_I03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPR_I03_MSH_1,
    RPR_I03_MSA_2,
    RPR_I03_PROVIDER_3,
    RPR_I03_PID_13,
    RPR_I03_NTE_18,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPR_I03"; }
  RPR_I03* create() const { return new RPR_I03(); }

  /* Initialize object */
  void init() {
    setName("RPR_I03");
    addObject<MSH>(RPR_I03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RPR_I03_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RPR_I03_PROVIDER>(RPR_I03_PROVIDER_3, "RPR_I03.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RPR_I03_PID_13, "PID.13", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RPR_I03_NTE_18, "NTE.18", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPR_I03_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPR_I03_MSA_2);
  }
  RPR_I03_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RPR_I03_PROVIDER*)this->getObjectSafe(index, RPR_I03_PROVIDER_3);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RPR_I03_PID_13);
  }
  NTE* getNTE_18(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPR_I03_NTE_18);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_PROVIDER_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_18(size_t index = 0) {
    try {
      return this->getObject(index, RPR_I03_NTE_18) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPR_I03_ */
} /* namespace HL7_24 */
#endif /*  __RPR_I03__24_H__ */
