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


#ifndef __QVR_Q17__24_H__
#define __QVR_Q17__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/Zxx.h"

namespace HL7_24 {

/* QVR_Q17 */
struct QVR_Q17 : public HL7Message {
  QVR_Q17() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QVR_Q17_MSH_1,
    QVR_Q17_QPD_2,
    QVR_Q17_Zxx_4,
    QVR_Q17_RCP_6,
    QVR_Q17_DSC_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "QVR_Q17"; }
  QVR_Q17* create() const { return new QVR_Q17(); }

 private:
  /* Initialize object */
  void init() {
    setName("QVR_Q17");
    addObject<MSH>(QVR_Q17_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QVR_Q17_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<Zxx>(QVR_Q17_Zxx_4, "Zxx.4", HL7::optional, HL7::repetition_off);
    addObject<RCP>(QVR_Q17_RCP_6, "RCP.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(QVR_Q17_DSC_8, "DSC.8", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QVR_Q17_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QVR_Q17_QPD_2);
  }
  Zxx* getZxx_4(size_t index = 0) {
    return (Zxx*)this->getObjectSafe(index, QVR_Q17_Zxx_4);
  }
  RCP* getRCP_6(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QVR_Q17_RCP_6);
  }
  DSC* getDSC_8(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QVR_Q17_DSC_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isZxx_4(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_Zxx_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_8(size_t index = 0) {
    try {
      return this->getObject(index, QVR_Q17_DSC_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QVR_Q17_ */
} /* namespace HL7_24 */
#endif /*  __QVR_Q17__24_H__ */
