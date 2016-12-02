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


#ifndef __RCI_I05__24_H__
#define __RCI_I05__24_H__

#include "../../common/Util.h"
#include "../segment/AL1.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RCI_I05_PROVIDER;    /* PROVIDER */
struct RCI_I05_RESULTS;     /* RESULTS */
struct RCI_I05_OBSERVATION; /* OBSERVATION */

/* PROVIDER */
struct RCI_I05_PROVIDER : public HL7Group {
  RCI_I05_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RCI_I05_PRD_8, RCI_I05_CTD_11, FIELD_ID_MAX };

  const char* className() const { return "RCI_I05_PROVIDER"; }
  RCI_I05_PROVIDER* create() const { return new RCI_I05_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RCI_I05.PROVIDER");
    addObject<PRD>(RCI_I05_PRD_8, "PRD.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RCI_I05_CTD_11, "CTD.11", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_8(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RCI_I05_PRD_8);
  }
  CTD* getCTD_11(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RCI_I05_CTD_11);
  }

  /* Checker list */
  bool isPRD_8(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_PRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_11(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_CTD_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCI_I05_7 */

/* RESULTS */
struct RCI_I05_RESULTS : public HL7Group {
  RCI_I05_RESULTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RCI_I05_OBX_41, RCI_I05_NTE_44, FIELD_ID_MAX };

  const char* className() const { return "RCI_I05_RESULTS"; }
  RCI_I05_RESULTS* create() const { return new RCI_I05_RESULTS(); }

  /* Initialize object */
  void init() {
    setName("RCI_I05.RESULTS");
    addObject<OBX>(RCI_I05_OBX_41, "OBX.41", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RCI_I05_NTE_44, "NTE.44", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBX* getOBX_41(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RCI_I05_OBX_41);
  }
  NTE* getNTE_44(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RCI_I05_NTE_44);
  }

  /* Checker list */
  bool isOBX_41(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_OBX_41) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_44(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_NTE_44) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCI_I05_39 */

/* OBSERVATION */
struct RCI_I05_OBSERVATION : public HL7Group {
  RCI_I05_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RCI_I05_OBR_33,
    RCI_I05_NTE_36,
    RCI_I05_RESULTS_39,
    FIELD_ID_MAX
  };

  const char* className() const { return "RCI_I05_OBSERVATION"; }
  RCI_I05_OBSERVATION* create() const { return new RCI_I05_OBSERVATION(); }

  /* Initialize object */
  void init() {
    setName("RCI_I05.OBSERVATION");
    addObject<OBR>(RCI_I05_OBR_33, "OBR.33", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(RCI_I05_NTE_36, "NTE.36", HL7::optional, HL7::repetition_on);
    addObject<RCI_I05_RESULTS>(RCI_I05_RESULTS_39, "RCI_I05.RESULTS",
			       HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  OBR* getOBR_33(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RCI_I05_OBR_33);
  }
  NTE* getNTE_36(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RCI_I05_NTE_36);
  }
  RCI_I05_RESULTS* getRESULTS(size_t index = 0) {
    return (RCI_I05_RESULTS*)this->getObjectSafe(index, RCI_I05_RESULTS_39);
  }

  /* Checker list */
  bool isOBR_33(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_36(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_NTE_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRESULTS(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_RESULTS_39) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCI_I05_31 */

/* RCI_I05 */
struct RCI_I05 : public HL7Message {
  RCI_I05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RCI_I05_MSH_1,
    RCI_I05_MSA_2,
    RCI_I05_QRD_3,
    RCI_I05_QRF_5,
    RCI_I05_PROVIDER_7,
    RCI_I05_PID_15,
    RCI_I05_DG1_18,
    RCI_I05_DRG_23,
    RCI_I05_AL1_28,
    RCI_I05_OBSERVATION_31,
    RCI_I05_NTE_53,
    FIELD_ID_MAX
  };

  const char* className() const { return "RCI_I05"; }
  RCI_I05* create() const { return new RCI_I05(); }

  /* Initialize object */
  void init() {
    setName("RCI_I05");
    addObject<MSH>(RCI_I05_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RCI_I05_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(RCI_I05_QRD_3, "QRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RCI_I05_QRF_5, "QRF.5", HL7::optional, HL7::repetition_off);
    addObject<RCI_I05_PROVIDER>(RCI_I05_PROVIDER_7, "RCI_I05.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RCI_I05_PID_15, "PID.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<DG1>(RCI_I05_DG1_18, "DG1.18", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RCI_I05_DRG_23, "DRG.23", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RCI_I05_AL1_28, "AL1.28", HL7::optional, HL7::repetition_on);
    addObject<RCI_I05_OBSERVATION>(RCI_I05_OBSERVATION_31,
				   "RCI_I05.OBSERVATION", HL7::optional,
				   HL7::repetition_on);
    addObject<NTE>(RCI_I05_NTE_53, "NTE.53", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RCI_I05_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RCI_I05_MSA_2);
  }
  QRD* getQRD_3(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RCI_I05_QRD_3);
  }
  QRF* getQRF_5(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RCI_I05_QRF_5);
  }
  RCI_I05_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RCI_I05_PROVIDER*)this->getObjectSafe(index, RCI_I05_PROVIDER_7);
  }
  PID* getPID_15(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RCI_I05_PID_15);
  }
  DG1* getDG1_18(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RCI_I05_DG1_18);
  }
  DRG* getDRG_23(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RCI_I05_DRG_23);
  }
  AL1* getAL1_28(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RCI_I05_AL1_28);
  }
  RCI_I05_OBSERVATION* getOBSERVATION(size_t index = 0) {
    return (RCI_I05_OBSERVATION*)this->getObjectSafe(index,
						     RCI_I05_OBSERVATION_31);
  }
  NTE* getNTE_53(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RCI_I05_NTE_53);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_3(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_5(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_PROVIDER_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_15(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_PID_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_18(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_DG1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_23(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_DRG_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_28(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_AL1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBSERVATION(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_OBSERVATION_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_53(size_t index = 0) {
    try {
      return this->getObject(index, RCI_I05_NTE_53) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RCI_I05_ */
} /* namespace HL7_24 */
#endif /*  __RCI_I05__24_H__ */
