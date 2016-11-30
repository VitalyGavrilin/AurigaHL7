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


#ifndef __RQC_I05__24_H__
#define __RQC_I05__24_H__

#include "../../common/Util.h"
#include "../segment/CTD.h"
#include "../segment/GT1.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/PID.h"
#include "../segment/PRD.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RQC_I05_PROVIDER; /* PROVIDER */

/* PROVIDER */
struct RQC_I05_PROVIDER : public HL7Group {
  RQC_I05_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RQC_I05_PRD_7, RQC_I05_CTD_10, FIELD_ID_MAX };

  const char* className() const { return "RQC_I05_PROVIDER"; }
  RQC_I05_PROVIDER* create() const { return new RQC_I05_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQC_I05.PROVIDER");
    addObject<PRD>(RQC_I05_PRD_7, "PRD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<CTD>(RQC_I05_CTD_10, "CTD.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PRD* getPRD_7(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQC_I05_PRD_7);
  }
  CTD* getCTD_10(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQC_I05_CTD_10);
  }

  /* Checker list */
  bool isPRD_7(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_PRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_10(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_CTD_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQC_I05_6 */

/* RQC_I05 */
struct RQC_I05 : public HL7Message {
  RQC_I05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQC_I05_MSH_1,
    RQC_I05_QRD_2,
    RQC_I05_QRF_4,
    RQC_I05_PROVIDER_6,
    RQC_I05_PID_14,
    RQC_I05_NK1_17,
    RQC_I05_GT1_18,
    RQC_I05_NTE_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQC_I05"; }
  RQC_I05* create() const { return new RQC_I05(); }

  /* Initialize object */
  void init() {
    setName("RQC_I05");
    addObject<MSH>(RQC_I05_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(RQC_I05_QRD_2, "QRD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(RQC_I05_QRF_4, "QRF.4", HL7::optional, HL7::repetition_off);
    addObject<RQC_I05_PROVIDER>(RQC_I05_PROVIDER_6, "RQC_I05.PROVIDER",
				HL7::initialized, HL7::repetition_on);
    addObject<PID>(RQC_I05_PID_14, "PID.14", HL7::initialized,
		   HL7::repetition_off);
    addObject<NK1>(RQC_I05_NK1_17, "NK1.17", HL7::optional, HL7::repetition_on);
    addObject<GT1>(RQC_I05_GT1_18, "GT1.18", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RQC_I05_NTE_19, "NTE.19", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQC_I05_MSH_1);
  }
  QRD* getQRD_2(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, RQC_I05_QRD_2);
  }
  QRF* getQRF_4(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, RQC_I05_QRF_4);
  }
  RQC_I05_PROVIDER* getPROVIDER(size_t index = 0) {
    return (RQC_I05_PROVIDER*)this->getObjectSafe(index, RQC_I05_PROVIDER_6);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQC_I05_PID_14);
  }
  NK1* getNK1_17(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQC_I05_NK1_17);
  }
  GT1* getGT1_18(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQC_I05_GT1_18);
  }
  NTE* getNTE_19(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQC_I05_NTE_19);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_2(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_QRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_4(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_QRF_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROVIDER(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_PROVIDER_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_17(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_NK1_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_18(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_GT1_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_19(size_t index = 0) {
    try {
      return this->getObject(index, RQC_I05_NTE_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQC_I05_ */
} /* namespace HL7_24 */
#endif /*  __RQC_I05__24_H__ */
