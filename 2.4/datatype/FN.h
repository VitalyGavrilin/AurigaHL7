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


#ifndef __FN_v24_H__
#define __FN_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* familiy name */
class FN : public HL7Data {
 public:
  FN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    FN_1, /* surname */
    FN_2, /* own surname prefix */
    FN_3, /* own surname */
    FN_4, /* surname prefix from partner/spouse */
    FN_5, /* surname from partner/spouse */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "FN"; }
  FN *create() const { return new FN(); }

 private:
  void init() {
    // setName("FN");
    /* Init members */
    addObject<ST>(FN_1, "FN.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_2, "FN.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_3, "FN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_4, "FN.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(FN_5, "FN.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * surname
   */
  ST *getFN_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_1);
  }

  ST *getSurname(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_1);
  }

  bool isFN_1(size_t index = 0) {
    try {
      return this->getObject(index, FN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurname(size_t index = 0) {
    try {
      return this->getObject(index, FN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * own surname prefix
   */
  ST *getFN_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_2);
  }

  ST *getOwnSurnamePrefix(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_2);
  }

  bool isFN_2(size_t index = 0) {
    try {
      return this->getObject(index, FN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOwnSurnamePrefix(size_t index = 0) {
    try {
      return this->getObject(index, FN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * own surname
   */
  ST *getFN_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_3);
  }

  ST *getOwnSurname(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_3);
  }

  bool isFN_3(size_t index = 0) {
    try {
      return this->getObject(index, FN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOwnSurname(size_t index = 0) {
    try {
      return this->getObject(index, FN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * surname prefix from partner/spouse
   */
  ST *getFN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_4);
  }

  ST *getSurnamePrefixFromPartnerSpouse(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_4);
  }

  bool isFN_4(size_t index = 0) {
    try {
      return this->getObject(index, FN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurnamePrefixFromPartnerSpouse(size_t index = 0) {
    try {
      return this->getObject(index, FN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * surname from partner/spouse
   */
  ST *getFN_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_5);
  }

  ST *getSurnameFromPartnerSpouse(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, FN_5);
  }

  bool isFN_5(size_t index = 0) {
    try {
      return this->getObject(index, FN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSurnameFromPartnerSpouse(size_t index = 0) {
    try {
      return this->getObject(index, FN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End FN */

} /* End HL7_24 */

#endif /*__FN_v24_H__ */
