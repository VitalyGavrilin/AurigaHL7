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


#ifndef __BLC_v24_H__
#define __BLC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0426.h"
#include "../datatype/CQ.h"

namespace HL7_24 {

/* Blood Code */
class BLC : public HL7Segment {
 public:
  BLC() { this->init(); }

 private:
  /* */
  enum FIELD_ID { BLC_1, BLC_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "BLC"; }
  BLC* create() const { return new BLC(); }

 private:
  void init() {
    setName("BLC");
    /* Init members */
    addObject<CE_0426>(BLC_1, "BLC.1", HL7::optional, HL7::repetition_off);
    addObject<CQ>(BLC_2, "BLC.2", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Blood Product Code
   */

  CE_0426* getBLC_1(size_t index = 0) {
    return (CE_0426*)this->getObjectSafe(index, BLC_1);
  }

  CE_0426* getBloodProductCode(size_t index = 0) {
    return (CE_0426*)this->getObjectSafe(index, BLC_1);
  }

  bool isBLC_1(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodProductCode(size_t index = 0) {
    try {
      return this->getObject(index, BLC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Blood Amount
   */

  CQ* getBLC_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  CQ* getBloodAmount(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, BLC_2);
  }

  bool isBLC_2(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBloodAmount(size_t index = 0) {
    try {
      return this->getObject(index, BLC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BLC */

} /* End of namespace HL7_24 */
#endif /* __BLC_v24_H__ */
