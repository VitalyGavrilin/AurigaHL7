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


#ifndef __WVI_v24_H__
#define __WVI_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* channel identifier */
class WVI : public HL7Data {
 public:
  WVI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    WVI_1, /* Channel Number */
    WVI_2, /* Channel Name */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "WVI"; }
  WVI *create() const { return new WVI(); }

 private:
  void init() {
    // setName("WVI");
    /* Init members */
    addObject<NM>(WVI_1, "WVI.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(WVI_2, "WVI.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Channel Number
   */
  NM *getWVI_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, WVI_1);
  }

  NM *getChannelNumber(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, WVI_1);
  }

  bool isWVI_1(size_t index = 0) {
    try {
      return this->getObject(index, WVI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelNumber(size_t index = 0) {
    try {
      return this->getObject(index, WVI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Channel Name
   */
  ST *getWVI_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVI_2);
  }

  ST *getChannelName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, WVI_2);
  }

  bool isWVI_2(size_t index = 0) {
    try {
      return this->getObject(index, WVI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChannelName(size_t index = 0) {
    try {
      return this->getObject(index, WVI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End WVI */

} /* End HL7_24 */

#endif /*__WVI_v24_H__ */
