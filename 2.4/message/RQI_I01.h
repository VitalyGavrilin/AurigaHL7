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


#ifndef __RQI_I01__24_H__
#define __RQI_I01__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RQI_I01_PROVIDER;	    /* PROVIDER */
struct RQI_I01_INSURANCE;	   /* INSURANCE */
struct RQI_I01_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */

/* PROVIDER */
struct RQI_I01_PROVIDER : public HL7Group {
  RQI_I01_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQI_I01_PRD_3, RQI_I01_CTD_6, FIELD_ID_MAX };

  const char* className() const { return "RQI_I01_PROVIDER"; }
  RQI_I01_PROVIDER* create() const { return new RQI_I01_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQI_I01.PROVIDER");
    addObject<PRD>(RQI_I01_PRD_3, "PRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RQI_I01_CTD_6, "CTD.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_3(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQI_I01_PRD_3);
  }
  CTD* getCTD_6(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQI_I01_CTD_6);
  }

  /* Checker list */
  bool isPRD_3(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_PRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_6(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQI_I01_2 */

/* INSURANCE */
struct RQI_I01_INSURANCE : public HL7Group {
  RQI_I01_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQI_I01_IN1_23,
    RQI_I01_IN2_25,
    RQI_I01_IN3_28,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQI_I01_INSURANCE"; }
  RQI_I01_INSURANCE* create() const { return new RQI_I01_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("RQI_I01.INSURANCE");
    addObject<IN1>(RQI_I01_IN1_23, "IN1.23", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(RQI_I01_IN2_25, "IN2.25", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(RQI_I01_IN3_28, "IN3.28", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_23(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RQI_I01_IN1_23);
  }
  IN2* getIN2_25(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RQI_I01_IN2_25);
  }
  IN3* getIN3_28(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RQI_I01_IN3_28);
  }

  /* Checker list */
  bool isIN1_23(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_IN1_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_25(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_IN2_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_28(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_IN3_28) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQI_I01_22 */

/* GUARANTOR_INSURANCE */
struct RQI_I01_GUARANTOR_INSURANCE : public HL7Group {
  RQI_I01_GUARANTOR_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQI_I01_GT1_19, RQI_I01_INSURANCE_22, FIELD_ID_MAX };

  const char* className() const { return "RQI_I01_GUARANTOR_INSURANCE"; }
  RQI_I01_GUARANTOR_INSURANCE* create() const {
    return new RQI_I01_GUARANTOR_INSURANCE();
  }

  /* Initialize object */
  void init() {
    setName("RQI_I01.GUARANTOR_INSURANCE");
    addObject<GT1>(RQI_I01_GT1_19, "GT1.19", HL7::optional, HL7::repetition_on);
    addObject<RQI_I01_INSURANCE>(RQI_I01_INSURANCE_22, "RQI_I01.INSURANCE",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  GT1* getGT1_19(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQI_I01_GT1_19);
  }
  RQI_I01_INSURANCE* getINSURANCE(size_t index = 0) {
    return (RQI_I01_INSURANCE*)this->getObjectSafe(index, RQI_I01_INSURANCE_22);
  }

  /* Checker list */
  bool isGT1_19(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_GT1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_INSURANCE_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQI_I01_16 */

/* RQI_I01 */
struct RQI_I01 : public HL7Message {
  RQI_I01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQI_I01_MSH_1,
    RQI_I01_PROVIDER_2,
    RQI_I01_PID_10,
    RQI_I01_NK1_13,
    RQI_I01_GUARANTOR_INSURANCE_16,
    RQI_I01_NTE_34,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQI_I01"; }
  RQI_I01* create() const { return new RQI_I01(); }

  /* Initialize object */
  void init() {
    setName("RQI_I01");
    addObject<MSH>(RQI_I01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<RQI_I01_PROVIDER>(RQI_I01_PROVIDER_2, "RQI_I01.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RQI_I01_PID_10, "PID.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RQI_I01_NK1_13, "NK1.13", HL7::optional, HL7::repetition_on);
    addObject<RQI_I01_GUARANTOR_INSURANCE>(RQI_I01_GUARANTOR_INSURANCE_16,
					   "RQI_I01.GUARANTOR_INSURANCE",
					   HL7::optional, HL7::repetition_off);
    addObject<NTE>(RQI_I01_NTE_34, "NTE.34", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQI_I01_MSH_1);
  }
  RQI_I01_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RQI_I01_PROVIDER*)this->getObjectSafe(index, RQI_I01_PROVIDER_2);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQI_I01_PID_10);
  }
  NK1* getNK1_13(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQI_I01_NK1_13);
  }
  RQI_I01_GUARANTOR_INSURANCE* getGUARANTOR_INSURANCE(size_t index = 0) {
    return (RQI_I01_GUARANTOR_INSURANCE*)this->getObjectSafe(
	index, RQI_I01_GUARANTOR_INSURANCE_16);
  }
  NTE* getNTE_34(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQI_I01_NTE_34);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_PROVIDER_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_13(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_NK1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGUARANTOR_INSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_GUARANTOR_INSURANCE_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_34(size_t index = 0) {
    try {
      return this->getObject(index, RQI_I01_NTE_34) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQI_I01_ */
} /* namespace HL7_24 */
#endif /*  __RQI_I01__24_H__ */
