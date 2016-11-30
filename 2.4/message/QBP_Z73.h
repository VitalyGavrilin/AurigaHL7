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


#ifndef __QBP_Z73__24_H__
#define __QBP_Z73__24_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"

namespace HL7_24 {

/* QBP_Z73 */
struct QBP_Z73 : public HL7Message {
  QBP_Z73() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { QBP_Z73_MSH_1, QBP_Z73_QPD_2, QBP_Z73_RCP_3, FIELD_ID_MAX };

  const char* className() const { return "QBP_Z73"; }
  QBP_Z73* create() const { return new QBP_Z73(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Z73");
    addObject<MSH>(QBP_Z73_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QBP_Z73_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<RCP>(QBP_Z73_RCP_3, "RCP.3", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Z73_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Z73_QPD_2);
  }
  RCP* getRCP_3(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Z73_RCP_3);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Z73_ */
} /* namespace HL7_24 */
#endif /*  __QBP_Z73__24_H__ */
