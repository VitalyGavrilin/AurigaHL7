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


#ifndef __RPL_I02__24_H__
#define __RPL_I02__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/DSC.h"
#include "../segment/DSP.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RPL_I02_PROVIDER; /* PROVIDER */

/* PROVIDER */
struct RPL_I02_PROVIDER : public HL7Group {
  RPL_I02_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RPL_I02_PRD_4, RPL_I02_CTD_7, FIELD_ID_MAX };

  const char* className() const { return "RPL_I02_PROVIDER"; }
  RPL_I02_PROVIDER* create() const { return new RPL_I02_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RPL_I02.PROVIDER");
    addObject<PRD>(RPL_I02_PRD_4, "PRD.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RPL_I02_CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_4(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RPL_I02_PRD_4);
  }
  CTD* getCTD_7(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RPL_I02_CTD_7);
  }

  /* Checker list */
  bool isPRD_4(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_PRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPL_I02_3 */

/* RPL_I02 */
struct RPL_I02 : public HL7Message {
  RPL_I02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RPL_I02_MSH_1,
    RPL_I02_MSA_2,
    RPL_I02_PROVIDER_3,
    RPL_I02_NTE_13,
    RPL_I02_DSP_18,
    RPL_I02_DSC_22,
    FIELD_ID_MAX
  };

  const char* className() const { return "RPL_I02"; }
  RPL_I02* create() const { return new RPL_I02(); }

  /* Initialize object */
  void init() {
    setName("RPL_I02");
    addObject<MSH>(RPL_I02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RPL_I02_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RPL_I02_PROVIDER>(RPL_I02_PROVIDER_3, "RPL_I02.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<NTE>(RPL_I02_NTE_13, "NTE.13", HL7::optional, HL7::repetition_on);
    addObject<DSP>(RPL_I02_DSP_18, "DSP.18", HL7::optional, HL7::repetition_on);
    addObject<DSC>(RPL_I02_DSC_22, "DSC.22", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RPL_I02_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RPL_I02_MSA_2);
  }
  RPL_I02_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RPL_I02_PROVIDER*)this->getObjectSafe(index, RPL_I02_PROVIDER_3);
  }
  NTE* getNTE_13(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RPL_I02_NTE_13);
  }
  DSP* getDSP_18(size_t index = 0) {
    return (DSP*)this->getObjectSafe(index, RPL_I02_DSP_18);
  }
  DSC* getDSC_22(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RPL_I02_DSC_22);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_PROVIDER_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_13(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_NTE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSP_18(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_DSP_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_22(size_t index = 0) {
    try {
      return this->getObject(index, RPL_I02_DSC_22) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RPL_I02_ */
} /* namespace HL7_24 */
#endif /*  __RPL_I02__24_H__ */
