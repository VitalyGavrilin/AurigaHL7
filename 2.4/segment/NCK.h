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


#ifndef __NCK_v24_H__
#define __NCK_v24_H__

#include "../../common/Util.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* System clock */
class NCK : public HL7Segment {
 public:
  NCK() { this->init(); }

 private:
  /* */
  enum FIELD_ID { NCK_1, FIELD_ID_MAX };

 public:
  const char* className() const { return "NCK"; }
  NCK* create() const { return new NCK(); }

 private:
  void init() {
    setName("NCK");
    /* Init members */
    addObject<TS>(NCK_1, "NCK.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * System Date/Time
   */

  TS* getNCK_1(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NCK_1);
  }

  TS* getSystemDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, NCK_1);
  }

  bool isNCK_1(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemDateTime(size_t index = 0) {
    try {
      return this->getObject(index, NCK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NCK */

} /* End of namespace HL7_24 */
#endif /* __NCK_v24_H__ */
