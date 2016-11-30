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


#ifndef __SAD_v24_H__
#define __SAD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* street address */
class SAD : public HL7Data {
 public:
  SAD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SAD_1, /* street or mailing address */
    SAD_2, /* street name */
    SAD_3, /* dwelling number */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SAD"; }
  SAD *create() const { return new SAD(); }

 private:
  void init() {
    // setName("SAD");
    /* Init members */
    addObject<ST>(SAD_1, "SAD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SAD_2, "SAD.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SAD_3, "SAD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * street or mailing address
   */
  ST *getSAD_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_1);
  }

  ST *getStreetOrMailingAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_1);
  }

  bool isSAD_1(size_t index = 0) {
    try {
      return this->getObject(index, SAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetOrMailingAddress(size_t index = 0) {
    try {
      return this->getObject(index, SAD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * street name
   */
  ST *getSAD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_2);
  }

  ST *getStreetName(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_2);
  }

  bool isSAD_2(size_t index = 0) {
    try {
      return this->getObject(index, SAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStreetName(size_t index = 0) {
    try {
      return this->getObject(index, SAD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * dwelling number
   */
  ST *getSAD_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_3);
  }

  ST *getDwellingNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, SAD_3);
  }

  bool isSAD_3(size_t index = 0) {
    try {
      return this->getObject(index, SAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDwellingNumber(size_t index = 0) {
    try {
      return this->getObject(index, SAD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SAD */

} /* End HL7_24 */

#endif /*__SAD_v24_H__ */
