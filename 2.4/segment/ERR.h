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


#ifndef __ERR_v24_H__
#define __ERR_v24_H__

#include "../../common/Util.h"
#include "../datatype/ELD.h"

namespace HL7_24 {

/* Error */
class ERR : public HL7Segment {
 public:
  ERR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ERR_1, FIELD_ID_MAX };

 public:
  const char* className() const { return "ERR"; }
  ERR* create() const { return new ERR(); }

 private:
  void init() {
    setName("ERR");
    /* Init members */
    addObject<ELD>(ERR_1, "ERR.1", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Error Code and Location
   */

  ELD* getERR_1(size_t index = 0) {
    return (ELD*)this->getObjectSafe(index, ERR_1);
  }

  ELD* getErrorCodeAndLocation(size_t index = 0) {
    return (ELD*)this->getObjectSafe(index, ERR_1);
  }

  bool isERR_1(size_t index = 0) {
    try {
      return this->getObject(index, ERR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isErrorCodeAndLocation(size_t index = 0) {
    try {
      return this->getObject(index, ERR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ERR */

} /* End of namespace HL7_24 */
#endif /* __ERR_v24_H__ */
