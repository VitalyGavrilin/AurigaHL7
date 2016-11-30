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


#ifndef __QBP_Q15__24_H__
#define __QBP_Q15__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/Zxx.h"

namespace HL7_24 {

/* QBP_Q15 */
struct QBP_Q15 : public HL7Message {
  QBP_Q15() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Q15_MSH_1,
    QBP_Q15_QPD_2,
    QBP_Q15_Zxx_4,
    QBP_Q15_RCP_6,
    QBP_Q15_DSC_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Q15"; }
  QBP_Q15* create() const { return new QBP_Q15(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Q15");
    addObject<MSH>(QBP_Q15_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QBP_Q15_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<Zxx>(QBP_Q15_Zxx_4, "Zxx.4", HL7::optional, HL7::repetition_off);
    addObject<RCP>(QBP_Q15_RCP_6, "RCP.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(QBP_Q15_DSC_8, "DSC.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Q15_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Q15_QPD_2);
  }
  Zxx* getZxx_4(size_t index = 0) {
    return (Zxx*)this->getObjectSafe(index, QBP_Q15_Zxx_4);
  }
  RCP* getRCP_6(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Q15_RCP_6);
  }
  DSC* getDSC_8(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Q15_DSC_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q15_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q15_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isZxx_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q15_Zxx_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q15_RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_8(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q15_DSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q15_ */
} /* namespace HL7_24 */
#endif /*  __QBP_Q15__24_H__ */
