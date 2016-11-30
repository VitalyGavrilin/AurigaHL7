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


#ifndef __EAR_U08__24_H__
#define __EAR_U08__24_H__

#include "../../common/Util.h"
#include "../segment/ECD.h"
#include "../segment/ECR.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"

namespace HL7_24 {

/* Internal structures/groups */
struct EAR_U08_COMMAND_RESPONSE; /* COMMAND_RESPONSE */

/* COMMAND_RESPONSE */
struct EAR_U08_COMMAND_RESPONSE : public HL7Group {
  EAR_U08_COMMAND_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { EAR_U08_ECD_4, EAR_U08_SAC_6, EAR_U08_ECR_8, FIELD_ID_MAX };

  const char* className() const { return "EAR_U08_COMMAND_RESPONSE"; }
  EAR_U08_COMMAND_RESPONSE* create() const {
    return new EAR_U08_COMMAND_RESPONSE();
  }

 private:
  /* Initialize object */
  void init() {
    setName("EAR_U08.COMMAND_RESPONSE");
    addObject<ECD>(EAR_U08_ECD_4, "ECD.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<SAC>(EAR_U08_SAC_6, "SAC.6", HL7::optional, HL7::repetition_off);
    addObject<ECR>(EAR_U08_ECR_8, "ECR.8", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  ECD* getECD_4(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAR_U08_ECD_4);
  }
  SAC* getSAC_6(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAR_U08_SAC_6);
  }
  ECR* getECR_8(size_t index = 0) {
    return (ECR*)this->getObjectSafe(index, EAR_U08_ECR_8);
  }

  /* Checker list */
  bool isECD_4(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_6(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECR_8(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECR_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_3 */

/* EAR_U08 */
struct EAR_U08 : public HL7Message {
  EAR_U08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAR_U08_MSH_1,
    EAR_U08_EQU_2,
    EAR_U08_COMMAND_RESPONSE_3,
    EAR_U08_ROL_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAR_U08"; }
  EAR_U08* create() const { return new EAR_U08(); }

  /* Initialize object */
  void init() {
    setName("EAR_U08");
    addObject<MSH>(EAR_U08_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(EAR_U08_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<EAR_U08_COMMAND_RESPONSE>(EAR_U08_COMMAND_RESPONSE_3,
					"EAR_U08.COMMAND_RESPONSE",
					HL7::initialized, HL7::repetition_on);
    addObject<ROL>(EAR_U08_ROL_11, "ROL.11", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAR_U08_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAR_U08_EQU_2);
  }
  EAR_U08_COMMAND_RESPONSE* getCOMMAND_RESPONSE(size_t index = 0) {
    return (EAR_U08_COMMAND_RESPONSE*)this->getObjectSafe(
	index, EAR_U08_COMMAND_RESPONSE_3);
  }
  ROL* getROL_11(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, EAR_U08_ROL_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCOMMAND_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_COMMAND_RESPONSE_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_11(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ROL_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_ */
} /* namespace HL7_24 */
#endif /*  __EAR_U08__24_H__ */
