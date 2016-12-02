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


#ifndef __QBP_Q21__24_H__
#define __QBP_Q21__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"

namespace HL7_24 {

/* QBP_Q21 */
struct QBP_Q21 : public HL7Message {
  QBP_Q21() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Q21_MSH_1,
    QBP_Q21_QPD_2,
    QBP_Q21_RCP_3,
    QBP_Q21_DSC_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Q21"; }
  QBP_Q21* create() const { return new QBP_Q21(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Q21");
    addObject<MSH>(QBP_Q21_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QBP_Q21_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(QBP_Q21_RCP_3, "RCP.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(QBP_Q21_DSC_5, "DSC.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Q21_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Q21_QPD_2);
  }
  RCP* getRCP_3(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Q21_RCP_3);
  }
  DSC* getDSC_5(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Q21_DSC_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q21_DSC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q21_ */
} /* namespace HL7_24 */
#endif /*  __QBP_Q21__24_H__ */
