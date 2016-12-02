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


#ifndef __RSP_K21__24_H__
#define __RSP_K21__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RSP_K21_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* QUERY_RESPONSE */
struct RSP_K21_QUERY_RESPONSE : public HL7Group {
  RSP_K21_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RSP_K21_PID_9, RSP_K21_PD1_11, FIELD_ID_MAX };

  const char* className() const { return "RSP_K21_QUERY_RESPONSE"; }
  RSP_K21_QUERY_RESPONSE* create() const {
    return new RSP_K21_QUERY_RESPONSE();
  }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K21.QUERY_RESPONSE");
    addObject<PID>(RSP_K21_PID_9, "PID.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<PD1>(RSP_K21_PD1_11, "PD1.11", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K21_PID_9);
  }
  PD1* getPD1_11(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K21_PD1_11);
  }

  /* Checker list */
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K21_8 */

/* RSP_K21 */
struct RSP_K21 : public HL7Message {
  RSP_K21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K21_MSH_1,
    RSP_K21_MSA_2,
    RSP_K21_ERR_4,
    RSP_K21_QAK_6,
    RSP_K21_QPD_7,
    RSP_K21_QUERY_RESPONSE_8,
    RSP_K21_DSC_15,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K21"; }
  RSP_K21* create() const { return new RSP_K21(); }

  /* Initialize object */
  void init() {
    setName("RSP_K21");
    addObject<MSH>(RSP_K21_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_K21_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_K21_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K21_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_K21_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RSP_K21_QUERY_RESPONSE>(RSP_K21_QUERY_RESPONSE_8,
				      "RSP_K21.QUERY_RESPONSE", HL7::optional,
				      HL7::repetition_off);
    addObject<DSC>(RSP_K21_DSC_15, "DSC.15", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K21_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K21_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K21_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K21_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K21_QPD_7);
  }
  RSP_K21_QUERY_RESPONSE* getQUERY_RESPONSE(size_t index = 0) {
    return (RSP_K21_QUERY_RESPONSE*)this->getObjectSafe(
	index, RSP_K21_QUERY_RESPONSE_8);
  }
  DSC* getDSC_15(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K21_DSC_15);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQUERY_RESPONSE(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_QUERY_RESPONSE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_15(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K21_DSC_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K21_ */
} /* namespace HL7_24 */
#endif /*  __RSP_K21__24_H__ */
