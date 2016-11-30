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


#ifndef __BTS_v24_H__
#define __BTS_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Batch Trailer */
class BTS : public HL7Segment {
 public:
  BTS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { BTS_1, BTS_2, BTS_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "BTS"; }
  BTS* create() const { return new BTS(); }

 private:
  void init() {
    setName("BTS");
    /* Init members */
    addObject<ST>(BTS_1, "BTS.1", HL7::optional, HL7::repetition_off);
    addObject<ST>(BTS_2, "BTS.2", HL7::optional, HL7::repetition_off);
    addObject<NM>(BTS_3, "BTS.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Batch Message Count
   */

  ST* getBTS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_1);
  }

  ST* getBatchMessageCount(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_1);
  }

  bool isBTS_1(size_t index = 0) {
    try {
      return this->getObject(index, BTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchMessageCount(size_t index = 0) {
    try {
      return this->getObject(index, BTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Comment
   */

  ST* getBTS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_2);
  }

  ST* getBatchComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BTS_2);
  }

  bool isBTS_2(size_t index = 0) {
    try {
      return this->getObject(index, BTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchComment(size_t index = 0) {
    try {
      return this->getObject(index, BTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Totals
   */

  NM* getBTS_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTS_3);
  }

  NM* getBatchTotals(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, BTS_3);
  }

  bool isBTS_3(size_t index = 0) {
    try {
      return this->getObject(index, BTS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchTotals(size_t index = 0) {
    try {
      return this->getObject(index, BTS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BTS */

} /* End of namespace HL7_24 */
#endif /* __BTS_v24_H__ */
