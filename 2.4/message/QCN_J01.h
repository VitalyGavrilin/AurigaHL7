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


#ifndef __QCN_J01__24_H__
#define __QCN_J01__24_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QID.h"

namespace HL7_24 {

/* QCN_J01 */
struct QCN_J01 : public HL7Message {
  QCN_J01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { QCN_J01_MSH_1, QCN_J01_QID_2, FIELD_ID_MAX };

  const char* className() const { return "QCN_J01"; }
  QCN_J01* create() const { return new QCN_J01(); }

 private:
  /* Initialize object */
  void init() {
    setName("QCN_J01");
    addObject<MSH>(QCN_J01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QID>(QCN_J01_QID_2, "QID.2", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QCN_J01_MSH_1);
  }
  QID* getQID_2(size_t index = 0) {
    return (QID*)this->getObjectSafe(index, QCN_J01_QID_2);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQID_2(size_t index = 0) {
    try {
      return this->getObject(index, QCN_J01_QID_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QCN_J01_ */
} /* namespace HL7_24 */
#endif /*  __QCN_J01__24_H__ */
