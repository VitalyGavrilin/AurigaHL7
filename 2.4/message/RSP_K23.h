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


#ifndef __RSP_K23__24_H__
#define __RSP_K23__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_24 {

/* RSP_K23 */
struct RSP_K23 : public HL7Message {
  RSP_K23() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K23_MSH_1,
    RSP_K23_MSA_2,
    RSP_K23_ERR_4,
    RSP_K23_QAK_6,
    RSP_K23_QPD_7,
    RSP_K23_PID_9,
    RSP_K23_DSC_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K23"; }
  RSP_K23* create() const { return new RSP_K23(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K23");
    addObject<MSH>(RSP_K23_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RSP_K23_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RSP_K23_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K23_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RSP_K23_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<PID>(RSP_K23_PID_9, "PID.9", HL7::optional, HL7::repetition_off);
    addObject<DSC>(RSP_K23_DSC_12, "DSC.12", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K23_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K23_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K23_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K23_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K23_QPD_7);
  }
  PID* getPID_9(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K23_PID_9);
  }
  DSC* getDSC_12(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K23_DSC_12);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_PID_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K23_DSC_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K23_ */
} /* namespace HL7_24 */
#endif /*  __RSP_K23__24_H__ */
