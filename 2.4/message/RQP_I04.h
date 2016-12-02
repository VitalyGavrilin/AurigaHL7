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


#ifndef __RQP_I04__24_H__
#define __RQP_I04__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RQP_I04_PROVIDER; /* PROVIDER */

/* PROVIDER */
struct RQP_I04_PROVIDER : public HL7Group {
  RQP_I04_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQP_I04_PRD_3, RQP_I04_CTD_6, FIELD_ID_MAX };

  const char* className() const { return "RQP_I04_PROVIDER"; }
  RQP_I04_PROVIDER* create() const { return new RQP_I04_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQP_I04.PROVIDER");
    addObject<PRD>(RQP_I04_PRD_3, "PRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RQP_I04_CTD_6, "CTD.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_3(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQP_I04_PRD_3);
  }
  CTD* getCTD_6(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQP_I04_CTD_6);
  }

  /* Checker list */
  bool isPRD_3(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_6(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQP_I04_2 */

/* RQP_I04 */
struct RQP_I04 : public HL7Message {
  RQP_I04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQP_I04_MSH_1,
    RQP_I04_PROVIDER_2,
    RQP_I04_PID_10,
    RQP_I04_NK1_13,
    RQP_I04_GT1_18,
    RQP_I04_NTE_23,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQP_I04"; }
  RQP_I04* create() const { return new RQP_I04(); }

  /* Initialize object */
  void init() {
    setName("RQP_I04");
    addObject<MSH>(RQP_I04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQP_I04_PROVIDER>(RQP_I04_PROVIDER_2, "RQP_I04.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RQP_I04_PID_10, "PID.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RQP_I04_NK1_13, "NK1.13", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RQP_I04_GT1_18, "GT1.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RQP_I04_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQP_I04_MSH_1);
  }
  RQP_I04_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RQP_I04_PROVIDER*)this->getObjectSafe(index, RQP_I04_PROVIDER_2);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQP_I04_PID_10);
  }
  NK1* getNK1_13(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQP_I04_NK1_13);
  }
  GT1* getGT1_18(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQP_I04_GT1_18);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQP_I04_NTE_23);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_PROVIDER_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_13(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_NK1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_18(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_GT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, RQP_I04_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQP_I04_ */
} /* namespace HL7_24 */
#endif /*  __RQP_I04__24_H__ */
