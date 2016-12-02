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


#ifndef __RCL_I06__24_H__
#define __RCL_I06__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/DSC.h"
#include "../segment/DSP.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RCL_I06_PROVIDER; /* PROVIDER */

/* PROVIDER */
struct RCL_I06_PROVIDER : public HL7Group {
  RCL_I06_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RCL_I06_PRD_8, RCL_I06_CTD_11, FIELD_ID_MAX };

  const char* className() const { return "RCL_I06_PROVIDER"; }
  RCL_I06_PROVIDER* create() const { return new RCL_I06_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RCL_I06.PROVIDER");
    addObject<PRD>(RCL_I06_PRD_8, "PRD.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RCL_I06_CTD_11, "CTD.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_8(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RCL_I06_PRD_8);
  }
  CTD* getCTD_11(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RCL_I06_CTD_11);
  }

  /* Checker list */
  bool isPRD_8(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_11(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_CTD_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCL_I06_7 */

/* RCL_I06 */
struct RCL_I06 : public HL7Message {
  RCL_I06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RCL_I06_MSH_1,
    RCL_I06_MSA_2,
    RCL_I06_QRD_3,
    RCL_I06_QRF_5,
    RCL_I06_PROVIDER_7,
    RCL_I06_PID_15,
    RCL_I06_DG1_18,
    RCL_I06_DRG_23,
    RCL_I06_AL1_28,
    RCL_I06_NTE_33,
    RCL_I06_DSP_38,
    RCL_I06_DSC_42,
    FIELD_ID_MAX
  };

  const char* className() const { return "RCL_I06"; }
  RCL_I06* create() const { return new RCL_I06(); }

  /* Initialize object */
  void init() {
    setName("RCL_I06");
    addObject<MSH>(RCL_I06_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RCL_I06_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(RCL_I06_QRD_3, "QRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RCL_I06_QRF_5, "QRF.5", HL7::optional, HL7::repetition_off);
    addObject<RCL_I06_PROVIDER>(RCL_I06_PROVIDER_7, "RCL_I06.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RCL_I06_PID_15, "PID.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<DG1>(RCL_I06_DG1_18, "DG1.18", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RCL_I06_DRG_23, "DRG.23", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RCL_I06_AL1_28, "AL1.28", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RCL_I06_NTE_33, "NTE.33", HL7::optional, HL7::repetition_on);
    addObject<DSP>(RCL_I06_DSP_38, "DSP.38", HL7::optional, HL7::repetition_on);
    addObject<DSC>(RCL_I06_DSC_42, "DSC.42", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RCL_I06_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RCL_I06_MSA_2);
  }
  QRD* getQRD_3(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RCL_I06_QRD_3);
  }
  QRF* getQRF_5(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RCL_I06_QRF_5);
  }
  RCL_I06_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RCL_I06_PROVIDER*)this->getObjectSafe(index, RCL_I06_PROVIDER_7);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RCL_I06_PID_15);
  }
  DG1* getDG1_18(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RCL_I06_DG1_18);
  }
  DRG* getDRG_23(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RCL_I06_DRG_23);
  }
  AL1* getAL1_28(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RCL_I06_AL1_28);
  }
  NTE* getNTE_33(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RCL_I06_NTE_33);
  }
  DSP* getDSP_38(size_t index = 0) {
    return (DSP*)this->getObjectSafe(index, RCL_I06_DSP_38);
  }
  DSC* getDSC_42(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RCL_I06_DSC_42);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_3(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_5(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_PROVIDER_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_18(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_23(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_DRG_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_28(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_AL1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_33(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_NTE_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSP_38(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_DSP_38) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_42(size_t index = 0) {
    try {
      return this->getObject(index, RCL_I06_DSC_42) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCL_I06_ */
} /* namespace HL7_24 */
#endif /*  __RCL_I06__24_H__ */
