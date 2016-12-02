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


#ifndef __ACK__24_H__
#define __ACK__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"

namespace HL7_24 {

/* ACK */
struct ACK : public HL7Message {
  ACK() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { ACK_MSH_1, ACK_MSA_2, ACK_ERR_4, FIELD_ID_MAX };

  const char* className() const { return "ACK"; }
  ACK* create() const { return new ACK(); }

 private:
  /* Initialize object */
  void init() {
    setName("ACK");
    addObject<MSH>(ACK_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ACK_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ACK_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ACK_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ACK_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ACK_ERR_4);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ACK_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ACK_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, ACK_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ACK_ */
} /* namespace HL7_24 */
#endif /*  __ACK__24_H__ */
