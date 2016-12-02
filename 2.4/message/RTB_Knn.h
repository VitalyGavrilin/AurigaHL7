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


#ifndef __RTB_Knn__24_H__
#define __RTB_Knn__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_24 {

/* RTB_Knn */
struct RTB_Knn : public HL7Message {
  RTB_Knn() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RTB_Knn_MSH_1,
    RTB_Knn_MSA_2,
    RTB_Knn_ERR_4,
    RTB_Knn_QAK_6,
    RTB_Knn_QPD_7,
    RTB_Knn_DSC_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RTB_Knn"; }
  RTB_Knn* create() const { return new RTB_Knn(); }

 private:
  /* Initialize object */
  void init() {
    setName("RTB_Knn");
    addObject<MSH>(RTB_Knn_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RTB_Knn_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RTB_Knn_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RTB_Knn_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RTB_Knn_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(RTB_Knn_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RTB_Knn_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RTB_Knn_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RTB_Knn_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RTB_Knn_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RTB_Knn_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RTB_Knn_DSC_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RTB_Knn_ */
} /* namespace HL7_24 */
#endif /*  __RTB_Knn__24_H__ */
