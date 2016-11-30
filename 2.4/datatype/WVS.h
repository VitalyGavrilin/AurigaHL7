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


#ifndef __WVS_v24_H__
#define __WVS_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* waveform source */
class WVS : public HL7Data {
 public:
  WVS() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    WVS_1, /* source name 1 */
    WVS_2, /* source name 2 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "WVS"; }
  WVS *create() const { return new WVS(); }

 private:
  void init() {
    // setName("WVS");
    /* Init members */
    addObject<ST>(WVS_1, "WVS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(WVS_2, "WVS.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * source name 1
   */
  ST *getWVS_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_1);
  }

  ST *getSourceName1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_1);
  }

  bool isWVS_1(size_t index = 0) {
    try {
      return this->getObject(index, WVS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceName1(size_t index = 0) {
    try {
      return this->getObject(index, WVS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source name 2
   */
  ST *getWVS_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_2);
  }

  ST *getSourceName2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVS_2);
  }

  bool isWVS_2(size_t index = 0) {
    try {
      return this->getObject(index, WVS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceName2(size_t index = 0) {
    try {
      return this->getObject(index, WVS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End WVS */

} /* End HL7_24 */

#endif /*__WVS_v24_H__ */
