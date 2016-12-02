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


#ifndef __SSU_U03__24_H__
#define __SSU_U03__24_H__

#include "../../common/Util.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/OBX.h"
#include "../segment/ROL.h"
#include "../segment/SAC.h"

namespace HL7_24 {

/* Internal structures/groups */
struct SSU_U03_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */

/* SPECIMEN_CONTAINER */
struct SSU_U03_SPECIMEN_CONTAINER : public HL7Group {
  SSU_U03_SPECIMEN_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SSU_U03_SAC_4, SSU_U03_OBX_6, FIELD_ID_MAX };

  const char* className() const { return "SSU_U03_SPECIMEN_CONTAINER"; }
  SSU_U03_SPECIMEN_CONTAINER* create() const {
    return new SSU_U03_SPECIMEN_CONTAINER();
  }

 private:
  /* Initialize object */
  void init() {
    setName("SSU_U03.SPECIMEN_CONTAINER");
    addObject<SAC>(SSU_U03_SAC_4, "SAC.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<OBX>(SSU_U03_OBX_6, "OBX.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  SAC* getSAC_4(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, SSU_U03_SAC_4);
  }
  OBX* getOBX_6(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, SSU_U03_OBX_6);
  }

  /* Checker list */
  bool isSAC_4(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_6(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_OBX_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SSU_U03_3 */

/* SSU_U03 */
struct SSU_U03 : public HL7Message {
  SSU_U03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SSU_U03_MSH_1,
    SSU_U03_EQU_2,
    SSU_U03_SPECIMEN_CONTAINER_3,
    SSU_U03_ROL_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "SSU_U03"; }
  SSU_U03* create() const { return new SSU_U03(); }

  /* Initialize object */
  void init() {
    setName("SSU_U03");
    addObject<MSH>(SSU_U03_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<EQU>(SSU_U03_EQU_2, "EQU.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<SSU_U03_SPECIMEN_CONTAINER>(SSU_U03_SPECIMEN_CONTAINER_3,
					  "SSU_U03.SPECIMEN_CONTAINER",
					  HL7::initialized, HL7::repetition_on);
    addObject<ROL>(SSU_U03_ROL_10, "ROL.10", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SSU_U03_MSH_1);
  }
  EQU* getEQU_2(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, SSU_U03_EQU_2);
  }
  SSU_U03_SPECIMEN_CONTAINER* getSPECIMEN_CONTAINER(size_t index = 0) {
    return (SSU_U03_SPECIMEN_CONTAINER*)this->getObjectSafe(
	index, SSU_U03_SPECIMEN_CONTAINER_3);
  }
  ROL* getROL_10(size_t index = 0) {
    return (ROL*)this->getObjectSafe(index, SSU_U03_ROL_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPECIMEN_CONTAINER(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_SPECIMEN_CONTAINER_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROL_10(size_t index = 0) {
    try {
      return this->getObject(index, SSU_U03_ROL_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SSU_U03_ */
} /* namespace HL7_24 */
#endif /*  __SSU_U03__24_H__ */
