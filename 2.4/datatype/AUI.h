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


#ifndef __AUI_v24_H__
#define __AUI_v24_H__

#include "../../common/Util.h"
#include "../datatype/DT.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* authorization information */
class AUI : public HL7Data {
 public:
  AUI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    AUI_1, /* authorization number */
    AUI_2, /* date */
    AUI_3, /* source */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "AUI"; }
  AUI *create() const { return new AUI(); }

 private:
  void init() {
    // setName("AUI");
    /* Init members */
    addObject<ST>(AUI_1, "AUI.1", HL7::initialized, HL7::repetition_off);
    addObject<DT>(AUI_2, "AUI.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(AUI_3, "AUI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * authorization number
   */
  ST *getAUI_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_1);
  }

  ST *getAuthorizationNumber(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_1);
  }

  bool isAUI_1(size_t index = 0) {
    try {
      return this->getObject(index, AUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizationNumber(size_t index = 0) {
    try {
      return this->getObject(index, AUI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * date
   */
  DT *getAUI_2(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, AUI_2);
  }

  DT *getDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, AUI_2);
  }

  bool isAUI_2(size_t index = 0) {
    try {
      return this->getObject(index, AUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDate(size_t index = 0) {
    try {
      return this->getObject(index, AUI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * source
   */
  ST *getAUI_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_3);
  }

  ST *getSource(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, AUI_3);
  }

  bool isAUI_3(size_t index = 0) {
    try {
      return this->getObject(index, AUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSource(size_t index = 0) {
    try {
      return this->getObject(index, AUI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End AUI */

} /* End HL7_24 */

#endif /*__AUI_v24_H__ */
