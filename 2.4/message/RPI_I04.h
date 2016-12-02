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


#ifndef __RPI_I04__24_H__
#define __RPI_I04__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RPI_I04_PROVIDER;	    /* PROVIDER */
struct RPI_I04_INSURANCE;	   /* INSURANCE */
struct RPI_I04_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */

/* PROVIDER */
struct RPI_I04_PROVIDER : public HL7Group {
  RPI_I04_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPI_I04_PRD_4, RPI_I04_CTD_7, FIELD_ID_MAX };

  const char* className() const { return "RPI_I04_PROVIDER"; }
  RPI_I04_PROVIDER* create() const { return new RPI_I04_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPI_I04.PROVIDER");
    addObject<PRD>(RPI_I04_PRD_4, "PRD.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RPI_I04_CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_4(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPI_I04_PRD_4);
  }
  CTD* getCTD_7(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPI_I04_CTD_7);
  }

  /* Checker list */
  bool isPRD_4(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPI_I04_3 */

/* INSURANCE */
struct RPI_I04_INSURANCE : public HL7Group {
  RPI_I04_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPI_I04_IN1_24,
    RPI_I04_IN2_26,
    RPI_I04_IN3_29,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPI_I04_INSURANCE"; }
  RPI_I04_INSURANCE* create() const { return new RPI_I04_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("RPI_I04.INSURANCE");
    addObject<IN1>(RPI_I04_IN1_24, "IN1.24", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(RPI_I04_IN2_26, "IN2.26", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(RPI_I04_IN3_29, "IN3.29", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  IN1* getIN1_24(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RPI_I04_IN1_24);
  }
  IN2* getIN2_26(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RPI_I04_IN2_26);
  }
  IN3* getIN3_29(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RPI_I04_IN3_29);
  }

  /* Checker list */
  bool isIN1_24(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_IN1_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_26(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_IN2_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_29(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_IN3_29) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPI_I04_23 */

/* GUARANTOR_INSURANCE */
struct RPI_I04_GUARANTOR_INSURANCE : public HL7Group {
  RPI_I04_GUARANTOR_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPI_I04_GT1_20, RPI_I04_INSURANCE_23, FIELD_ID_MAX };

  const char* className() const { return "RPI_I04_GUARANTOR_INSURANCE"; }
  RPI_I04_GUARANTOR_INSURANCE* create() const {
    return new RPI_I04_GUARANTOR_INSURANCE();
  }

  /* Initialize object */
  void init() {
    setName("RPI_I04.GUARANTOR_INSURANCE");
    addObject<GT1>(RPI_I04_GT1_20, "GT1.20", HL7::optional, HL7::repetition_on);
    addObject<RPI_I04_INSURANCE>(RPI_I04_INSURANCE_23, "RPI_I04.INSURANCE",
				 HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  GT1* getGT1_20(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RPI_I04_GT1_20);
  }
  RPI_I04_INSURANCE* getINSURANCE(size_t index = 0) {
    return (RPI_I04_INSURANCE*)this->getObjectSafe(index, RPI_I04_INSURANCE_23);
  }

  /* Checker list */
  bool isGT1_20(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_GT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_INSURANCE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPI_I04_17 */

/* RPI_I04 */
struct RPI_I04 : public HL7Message {
  RPI_I04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPI_I04_MSH_1,
    RPI_I04_MSA_2,
    RPI_I04_PROVIDER_3,
    RPI_I04_PID_11,
    RPI_I04_NK1_14,
    RPI_I04_GUARANTOR_INSURANCE_17,
    RPI_I04_NTE_35,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPI_I04"; }
  RPI_I04* create() const { return new RPI_I04(); }

  /* Initialize object */
  void init() {
    setName("RPI_I04");
    addObject<MSH>(RPI_I04_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RPI_I04_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RPI_I04_PROVIDER>(RPI_I04_PROVIDER_3, "RPI_I04.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RPI_I04_PID_11, "PID.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RPI_I04_NK1_14, "NK1.14", HL7::optional, HL7::repetition_on);
    addObject<RPI_I04_GUARANTOR_INSURANCE>(RPI_I04_GUARANTOR_INSURANCE_17,
					   "RPI_I04.GUARANTOR_INSURANCE",
					   HL7::optional, HL7::repetition_off);
    addObject<NTE>(RPI_I04_NTE_35, "NTE.35", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPI_I04_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPI_I04_MSA_2);
  }
  RPI_I04_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RPI_I04_PROVIDER*)this->getObjectSafe(index, RPI_I04_PROVIDER_3);
  }
  PID* getPID_11(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RPI_I04_PID_11);
  }
  NK1* getNK1_14(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RPI_I04_NK1_14);
  }
  RPI_I04_GUARANTOR_INSURANCE* getGUARANTOR_INSURANCE(size_t index = 0) {
    return (RPI_I04_GUARANTOR_INSURANCE*)this->getObjectSafe(
	index, RPI_I04_GUARANTOR_INSURANCE_17);
  }
  NTE* getNTE_35(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPI_I04_NTE_35);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_PROVIDER_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_11(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_PID_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_14(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_NK1_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGUARANTOR_INSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_GUARANTOR_INSURANCE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_35(size_t index = 0) {
    try {
      return this->getObject(index, RPI_I04_NTE_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPI_I04_ */
} /* namespace HL7_24 */
#endif /*  __RPI_I04__24_H__ */
