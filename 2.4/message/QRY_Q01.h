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


#ifndef __QRY_Q01__24_H__
#define __QRY_Q01__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* QRY_Q01 */
struct QRY_Q01 : public HL7Message {
  QRY_Q01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QRY_Q01_MSH_1,
    QRY_Q01_QRD_2,
    QRY_Q01_QRF_4,
    QRY_Q01_DSC_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "QRY_Q01"; }
  QRY_Q01* create() const { return new QRY_Q01(); }

 private:
  /* Initialize object */
  void init() {
    setName("QRY_Q01");
    addObject<MSH>(QRY_Q01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRD>(QRY_Q01_QRD_2, "QRD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(QRY_Q01_QRF_4, "QRF.4", HL7::optional, HL7::repetition_off);
    addObject<DSC>(QRY_Q01_DSC_7, "DSC.7", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QRY_Q01_MSH_1);
  }
  QRD* getQRD_2(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, QRY_Q01_QRD_2);
  }
  QRF* getQRF_4(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, QRY_Q01_QRF_4);
  }
  DSC* getDSC_7(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QRY_Q01_DSC_7);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QRY_Q01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_2(size_t index = 0) {
    try {
      return this->getObject(index, QRY_Q01_QRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_4(size_t index = 0) {
    try {
      return this->getObject(index, QRY_Q01_QRF_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_7(size_t index = 0) {
    try {
      return this->getObject(index, QRY_Q01_DSC_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QRY_Q01_ */
} /* namespace HL7_24 */
#endif /*  __QRY_Q01__24_H__ */
