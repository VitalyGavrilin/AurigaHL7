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


#ifndef __RDY_K15__24_H__
#define __RDY_K15__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/DSP.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"

namespace HL7_24 {

/* RDY_K15 */
struct RDY_K15 : public HL7Message {
  RDY_K15() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RDY_K15_MSH_1,
    RDY_K15_MSA_2,
    RDY_K15_ERR_4,
    RDY_K15_QAK_6,
    RDY_K15_QPD_7,
    RDY_K15_DSP_10,
    RDY_K15_DSC_14,
    FIELD_ID_MAX
  };

  const char* className() const { return "RDY_K15"; }
  RDY_K15* create() const { return new RDY_K15(); }

 private:
  /* Initialize object */
  void init() {
    setName("RDY_K15");
    addObject<MSH>(RDY_K15_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RDY_K15_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RDY_K15_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RDY_K15_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RDY_K15_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSP>(RDY_K15_DSP_10, "DSP.10", HL7::optional, HL7::repetition_on);
    addObject<DSC>(RDY_K15_DSC_14, "DSC.14", HL7::optional,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RDY_K15_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RDY_K15_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RDY_K15_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RDY_K15_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RDY_K15_QPD_7);
  }
  DSP* getDSP_10(size_t index = 0) {
    return (DSP*)this->getObjectSafe(index, RDY_K15_DSP_10);
  }
  DSC* getDSC_14(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RDY_K15_DSC_14);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSP_10(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_DSP_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_14(size_t index = 0) {
    try {
      return this->getObject(index, RDY_K15_DSC_14) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RDY_K15_ */
} /* namespace HL7_24 */
#endif /*  __RDY_K15__24_H__ */
