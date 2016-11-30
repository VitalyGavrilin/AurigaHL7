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


#ifndef __CRM_C01__24_H__
#define __CRM_C01__24_H__

#include "../../common/Util.h"
#include "../segment/CSP.h"
#include "../segment/CSR.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/PV1.h"

namespace HL7_24 {

/* Internal structures/groups */
struct CRM_C01_PATIENT; /* PATIENT */

/* PATIENT */
struct CRM_C01_PATIENT : public HL7Group {
  CRM_C01_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    CRM_C01_PID_3,
    CRM_C01_PV1_5,
    CRM_C01_CSR_7,
    CRM_C01_CSP_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "CRM_C01_PATIENT"; }
  CRM_C01_PATIENT* create() const { return new CRM_C01_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("CRM_C01.PATIENT");
    addObject<PID>(CRM_C01_PID_3, "PID.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<PV1>(CRM_C01_PV1_5, "PV1.5", HL7::optional, HL7::repetition_off);
    addObject<CSR>(CRM_C01_CSR_7, "CSR.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<CSP>(CRM_C01_CSP_10, "CSP.10", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, CRM_C01_PID_3);
  }
  PV1* getPV1_5(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, CRM_C01_PV1_5);
  }
  CSR* getCSR_7(size_t index = 0) {
    return (CSR*)this->getObjectSafe(index, CRM_C01_CSR_7);
  }
  CSP* getCSP_10(size_t index = 0) {
    return (CSP*)this->getObjectSafe(index, CRM_C01_CSP_10);
  }

  /* Checker list */
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_5(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_PV1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCSR_7(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_CSR_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCSP_10(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_CSP_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CRM_C01_2 */

/* CRM_C01 */
struct CRM_C01 : public HL7Message {
  CRM_C01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { CRM_C01_MSH_1, CRM_C01_PATIENT_2, FIELD_ID_MAX };

  const char* className() const { return "CRM_C01"; }
  CRM_C01* create() const { return new CRM_C01(); }

  /* Initialize object */
  void init() {
    setName("CRM_C01");
    addObject<MSH>(CRM_C01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<CRM_C01_PATIENT>(CRM_C01_PATIENT_2, "CRM_C01.PATIENT",
			       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, CRM_C01_MSH_1);
  }
  CRM_C01_PATIENT* getPATIENT(size_t index = 0) {
    return (CRM_C01_PATIENT*)this->getObjectSafe(index, CRM_C01_PATIENT_2);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPATIENT(size_t index = 0) {
    try {
      return this->getObject(index, CRM_C01_PATIENT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* CRM_C01_ */
} /* namespace HL7_24 */
#endif /*  __CRM_C01__24_H__ */
