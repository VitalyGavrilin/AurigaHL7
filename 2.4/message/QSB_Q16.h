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


#ifndef __QSB_Q16__24_H__
#define __QSB_Q16__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"

namespace HL7_24 {

/* QSB_Q16 */
struct QSB_Q16 : public HL7Message {
  QSB_Q16() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QSB_Q16_MSH_1,
    QSB_Q16_QPD_2,
    QSB_Q16_RCP_3,
    QSB_Q16_DSC_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "QSB_Q16"; }
  QSB_Q16* create() const { return new QSB_Q16(); }

 private:
  /* Initialize object */
  void init() {
    setName("QSB_Q16");
    addObject<MSH>(QSB_Q16_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QSB_Q16_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(QSB_Q16_RCP_3, "RCP.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(QSB_Q16_DSC_5, "DSC.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QSB_Q16_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QSB_Q16_QPD_2);
  }
  RCP* getRCP_3(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QSB_Q16_RCP_3);
  }
  DSC* getDSC_5(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QSB_Q16_DSC_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_3(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_5(size_t index = 0) {
    try {
      return this->getObject(index, QSB_Q16_DSC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QSB_Q16_ */
} /* namespace HL7_24 */
#endif /*  __QSB_Q16__24_H__ */
