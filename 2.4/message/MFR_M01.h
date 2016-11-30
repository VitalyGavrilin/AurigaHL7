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


#ifndef __MFR_M01__24_H__
#define __MFR_M01__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"
#include "../segment/Zxx.h"

namespace HL7_24 {

/* Internal structures/groups */
struct MFR_M01_MF_QUERY; /* MF_QUERY */

/* MF_QUERY */
struct MFR_M01_MF_QUERY : public HL7Group {
  MFR_M01_MF_QUERY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { MFR_M01_MFE_15, MFR_M01_Zxx_16, FIELD_ID_MAX };

  const char* className() const { return "MFR_M01_MF_QUERY"; }
  MFR_M01_MF_QUERY* create() const { return new MFR_M01_MF_QUERY(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFR_M01.MF_QUERY");
    addObject<MFE>(MFR_M01_MFE_15, "MFE.15", HL7::initialized,
		   HL7::repetition_off);
    addObject<Zxx>(MFR_M01_Zxx_16, "Zxx.16", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MFE* getMFE_15(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFR_M01_MFE_15);
  }
  Zxx* getZxx_16(size_t index = 0) {
    return (Zxx*)this->getObjectSafe(index, MFR_M01_Zxx_16);
  }

  /* Checker list */
  bool isMFE_15(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_MFE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isZxx_16(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_Zxx_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFR_M01_14 */

/* MFR_M01 */
struct MFR_M01 : public HL7Message {
  MFR_M01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFR_M01_MSH_1,
    MFR_M01_MSA_2,
    MFR_M01_ERR_4,
    MFR_M01_QAK_7,
    MFR_M01_QRD_9,
    MFR_M01_QRF_11,
    MFR_M01_MFI_13,
    MFR_M01_MF_QUERY_14,
    MFR_M01_DSC_21,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFR_M01"; }
  MFR_M01* create() const { return new MFR_M01(); }

  /* Initialize object */
  void init() {
    setName("MFR_M01");
    addObject<MSH>(MFR_M01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(MFR_M01_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(MFR_M01_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(MFR_M01_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(MFR_M01_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(MFR_M01_QRF_11, "QRF.11", HL7::optional,
		   HL7::repetition_off);
    addObject<MFI>(MFR_M01_MFI_13, "MFI.13", HL7::initialized,
		   HL7::repetition_off);
    addObject<MFR_M01_MF_QUERY>(MFR_M01_MF_QUERY_14, "MFR_M01.MF_QUERY",
				HL7::initialized, HL7::repetition_on);
    addObject<DSC>(MFR_M01_DSC_21, "DSC.21", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFR_M01_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, MFR_M01_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, MFR_M01_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, MFR_M01_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, MFR_M01_QRD_9);
  }
  QRF* getQRF_11(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, MFR_M01_QRF_11);
  }
  MFI* getMFI_13(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFR_M01_MFI_13);
  }
  MFR_M01_MF_QUERY* getMF_QUERY(size_t index = 0) {
    return (MFR_M01_MF_QUERY*)this->getObjectSafe(index, MFR_M01_MF_QUERY_14);
  }
  DSC* getDSC_21(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, MFR_M01_DSC_21);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_11(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_QRF_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_13(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_MFI_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMF_QUERY(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_MF_QUERY_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_21(size_t index = 0) {
    try {
      return this->getObject(index, MFR_M01_DSC_21) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFR_M01_ */
} /* namespace HL7_24 */
#endif /*  __MFR_M01__24_H__ */
