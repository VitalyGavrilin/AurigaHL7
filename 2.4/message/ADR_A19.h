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


#ifndef __ADR_A19__24_H__
#define __ADR_A19__24_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/DB1.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/EVN.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/OBX.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/QAK.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"
#include "../segment/ROL.h"
#include "../segment/UB1.h"
#include "../segment/UB2.h"

namespace HL7_24 {

/* Internal structures/groups */
struct ADR_A19_PROCEDURE;      /* PROCEDURE */
struct ADR_A19_INSURANCE;      /* INSURANCE */
struct ADR_A19_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* PROCEDURE */
struct ADR_A19_PROCEDURE : public HL7Group {
  ADR_A19_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ADR_A19_PR1_65, ADR_A19_ROL_68, FIELD_ID_MAX };

  const char* className() const { return "ADR_A19_PROCEDURE"; }
  ADR_A19_PROCEDURE* create() const { return new ADR_A19_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ADR_A19.PROCEDURE");
    addObject<PR1>(ADR_A19_PR1_65, "PR1.65", HL7::initialized,
		   HL7::repetition_off);
    addObject<ROL>(ADR_A19_ROL_68, "ROL.68", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_65(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, ADR_A19_PR1_65);
  }
  ROL* getROL_68(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADR_A19_ROL_68);
  }

  /* Checker list */
  bool isPR1_65(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PR1_65) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_68(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ROL_68) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADR_A19_63 */

/* INSURANCE */
struct ADR_A19_INSURANCE : public HL7Group {
  ADR_A19_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADR_A19_IN1_80,
    ADR_A19_IN2_82,
    ADR_A19_IN3_86,
    ADR_A19_ROL_91,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADR_A19_INSURANCE"; }
  ADR_A19_INSURANCE* create() const { return new ADR_A19_INSURANCE(); }

  /* Initialize object */
  void init() {
    setName("ADR_A19.INSURANCE");
    addObject<IN1>(ADR_A19_IN1_80, "IN1.80", HL7::initialized,
		   HL7::repetition_off);
    addObject<IN2>(ADR_A19_IN2_82, "IN2.82", HL7::optional,
		   HL7::repetition_off);
    addObject<IN3>(ADR_A19_IN3_86, "IN3.86", HL7::optional, HL7::repetition_on);
    addObject<ROL>(ADR_A19_ROL_91, "ROL.91", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  IN1* getIN1_80(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, ADR_A19_IN1_80);
  }
  IN2* getIN2_82(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, ADR_A19_IN2_82);
  }
  IN3* getIN3_86(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, ADR_A19_IN3_86);
  }
  ROL* getROL_91(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADR_A19_ROL_91);
  }

  /* Checker list */
  bool isIN1_80(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_IN1_80) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_82(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_IN2_82) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_86(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_IN3_86) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_91(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ROL_91) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADR_A19_78 */

/* QUERY_RESPONSE */
struct ADR_A19_QUERY_RESPONSE : public HL7Group {
  ADR_A19_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADR_A19_EVN_15,
    ADR_A19_PID_17,
    ADR_A19_PD1_19,
    ADR_A19_ROL_23,
    ADR_A19_NK1_28,
    ADR_A19_PV1_31,
    ADR_A19_PV2_33,
    ADR_A19_ROL_37,
    ADR_A19_DB1_42,
    ADR_A19_OBX_47,
    ADR_A19_AL1_52,
    ADR_A19_DG1_57,
    ADR_A19_DRG_61,
    ADR_A19_PROCEDURE_63,
    ADR_A19_GT1_75,
    ADR_A19_INSURANCE_78,
    ADR_A19_ACC_97,
    ADR_A19_UB1_100,
    ADR_A19_UB2_103,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADR_A19_QUERY_RESPONSE"; }
  ADR_A19_QUERY_RESPONSE* create() const {
    return new ADR_A19_QUERY_RESPONSE();
  }

  /* Initialize object */
  void init() {
    setName("ADR_A19.QUERY_RESPONSE");
    addObject<EVN>(ADR_A19_EVN_15, "EVN.15", HL7::optional,
		   HL7::repetition_off);
    addObject<PID>(ADR_A19_PID_17, "PID.17", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(ADR_A19_PD1_19, "PD1.19", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(ADR_A19_ROL_23, "ROL.23", HL7::optional, HL7::repetition_on);
    addObject<NK1>(ADR_A19_NK1_28, "NK1.28", HL7::optional, HL7::repetition_on);
    addObject<PV1>(ADR_A19_PV1_31, "PV1.31", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV2>(ADR_A19_PV2_33, "PV2.33", HL7::optional,
		   HL7::repetition_off);
    addObject<ROL>(ADR_A19_ROL_37, "ROL.37", HL7::optional, HL7::repetition_on);
    addObject<DB1>(ADR_A19_DB1_42, "DB1.42", HL7::optional, HL7::repetition_on);
    addObject<OBX>(ADR_A19_OBX_47, "OBX.47", HL7::optional, HL7::repetition_on);
    addObject<AL1>(ADR_A19_AL1_52, "AL1.52", HL7::optional, HL7::repetition_on);
    addObject<DG1>(ADR_A19_DG1_57, "DG1.57", HL7::optional, HL7::repetition_on);
    addObject<DRG>(ADR_A19_DRG_61, "DRG.61", HL7::optional,
		   HL7::repetition_off);
    addObject<ADR_A19_PROCEDURE>(ADR_A19_PROCEDURE_63, "ADR_A19.PROCEDURE",
				 HL7::optional, HL7::repetition_on);
    addObject<GT1>(ADR_A19_GT1_75, "GT1.75", HL7::optional, HL7::repetition_on);
    addObject<ADR_A19_INSURANCE>(ADR_A19_INSURANCE_78, "ADR_A19.INSURANCE",
				 HL7::optional, HL7::repetition_on);
    addObject<ACC>(ADR_A19_ACC_97, "ACC.97", HL7::optional,
		   HL7::repetition_off);
    addObject<UB1>(ADR_A19_UB1_100, "UB1.100", HL7::optional,
		   HL7::repetition_off);
    addObject<UB2>(ADR_A19_UB2_103, "UB2.103", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  EVN* getEVN_15(size_t index = 0) {
    return (EVN*)this->getObjectSafe(index, ADR_A19_EVN_15);
  }
  PID* getPID_17(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ADR_A19_PID_17);
  }
  PD1* getPD1_19(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, ADR_A19_PD1_19);
  }
  ROL* getROL_23(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADR_A19_ROL_23);
  }
  NK1* getNK1_28(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, ADR_A19_NK1_28);
  }
  PV1* getPV1_31(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, ADR_A19_PV1_31);
  }
  PV2* getPV2_33(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, ADR_A19_PV2_33);
  }
  ROL* getROL_37(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, ADR_A19_ROL_37);
  }
  DB1* getDB1_42(size_t index = 0) {
    return (DB1*)this->getObjectSafe(index, ADR_A19_DB1_42);
  }
  OBX* getOBX_47(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ADR_A19_OBX_47);
  }
  AL1* getAL1_52(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, ADR_A19_AL1_52);
  }
  DG1* getDG1_57(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, ADR_A19_DG1_57);
  }
  DRG* getDRG_61(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, ADR_A19_DRG_61);
  }
  ADR_A19_PROCEDURE* getPROCEDURE(size_t index = 0) {
    return (ADR_A19_PROCEDURE*)this->getObjectSafe(index, ADR_A19_PROCEDURE_63);
  }
  GT1* getGT1_75(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, ADR_A19_GT1_75);
  }
  ADR_A19_INSURANCE* getINSURANCE(size_t index = 0) {
    return (ADR_A19_INSURANCE*)this->getObjectSafe(index, ADR_A19_INSURANCE_78);
  }
  ACC* getACC_97(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, ADR_A19_ACC_97);
  }
  UB1* getUB1_100(size_t index = 0) {
    return (UB1*)this->getObjectSafe(index, ADR_A19_UB1_100);
  }
  UB2* getUB2_103(size_t index = 0) {
    return (UB2*)this->getObjectSafe(index, ADR_A19_UB2_103);
  }

  /* Checker list */
  bool isEVN_15(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_EVN_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_17(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PID_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_19(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_23(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ROL_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_28(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_NK1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_31(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PV1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_33(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PV2_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_37(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ROL_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDB1_42(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_DB1_42) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_47(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_OBX_47) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_52(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_AL1_52) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_57(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_DG1_57) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_61(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_DRG_61) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPROCEDURE(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_PROCEDURE_63) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_75(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_GT1_75) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isINSURANCE(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_INSURANCE_78) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_97(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ACC_97) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB1_100(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_UB1_100) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUB2_103(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_UB2_103) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADR_A19_13 */

/* ADR_A19 */
struct ADR_A19 : public HL7Message {
  ADR_A19() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ADR_A19_MSH_1,
    ADR_A19_MSA_2,
    ADR_A19_ERR_4,
    ADR_A19_QAK_7,
    ADR_A19_QRD_9,
    ADR_A19_QRF_11,
    ADR_A19_QUERY_RESPONSE_13,
    ADR_A19_DSC_107,
    FIELD_ID_MAX
  };

  const char* className() const { return "ADR_A19"; }
  ADR_A19* create() const { return new ADR_A19(); }

  /* Initialize object */
  void init() {
    setName("ADR_A19");
    addObject<MSH>(ADR_A19_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(ADR_A19_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(ADR_A19_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(ADR_A19_QAK_7, "QAK.7", HL7::optional, HL7::repetition_off);
    addObject<QRD>(ADR_A19_QRD_9, "QRD.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(ADR_A19_QRF_11, "QRF.11", HL7::optional,
		   HL7::repetition_off);
    addObject<ADR_A19_QUERY_RESPONSE>(ADR_A19_QUERY_RESPONSE_13,
				      "ADR_A19.QUERY_RESPONSE",
				      HL7::initialized, HL7::repetition_on);
    addObject<DSC>(ADR_A19_DSC_107, "DSC.107", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ADR_A19_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ADR_A19_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ADR_A19_ERR_4);
  }
  QAK* getQAK_7(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, ADR_A19_QAK_7);
  }
  QRD* getQRD_9(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, ADR_A19_QRD_9);
  }
  QRF* getQRF_11(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, ADR_A19_QRF_11);
  }
  ADR_A19_QUERY_RESPONSE* getQUERY_RESPONSE(size_t index = 0) {
    return (ADR_A19_QUERY_RESPONSE*)this->getObjectSafe(
	index, ADR_A19_QUERY_RESPONSE_13);
  }
  DSC* getDSC_107(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, ADR_A19_DSC_107);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_7(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_QAK_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_11(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_QRF_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQUERY_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_QUERY_RESPONSE_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_107(size_t index = 0) {
    try {
      return this->getObject(index, ADR_A19_DSC_107) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ADR_A19_ */
} /* namespace HL7_24 */
#endif /*  __ADR_A19__24_H__ */
