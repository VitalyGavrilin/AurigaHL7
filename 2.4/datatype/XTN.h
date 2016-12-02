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


#ifndef __XTN_v24_H__
#define __XTN_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TN.h"

namespace HL7_24 {

/* extended telecommunication number */
class XTN : public HL7Data {
 public:
  XTN() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    XTN_1, /* [(999)] 999-9999 [X99999][C any text] */
    XTN_2, /* telecommunication use code */
    XTN_3, /* telecommunication equipment type (ID) */
    XTN_4, /* Email address */
    XTN_5, /* Country Code */
    XTN_6, /* Area/city code */
    XTN_7, /* Phone number */
    XTN_8, /* Extension */
    XTN_9, /* any text */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "XTN"; }
  XTN *create() const { return new XTN(); }

 private:
  void init() {
    // setName("XTN");
    /* Init members */
    addObject<TN>(XTN_1, "XTN.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XTN_2, "XTN.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(XTN_3, "XTN.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_4, "XTN.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XTN_5, "XTN.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XTN_6, "XTN.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XTN_7, "XTN.7", HL7::initialized, HL7::repetition_off);
    addObject<NM>(XTN_8, "XTN.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(XTN_9, "XTN.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * [(999)] 999-9999 [X99999][C any text]
   */
  TN *getXTN_1(size_t index = 0) {
    return (TN *)this->getObjectSafe(index, XTN_1);
  }

  bool isXTN_1(size_t index = 0) {
    try {
      return this->getObject(index, XTN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * telecommunication use code
   */
  ID *getXTN_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_2);
  }

  ID *getTelecommunicationUseCode(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_2);
  }

  bool isXTN_2(size_t index = 0) {
    try {
      return this->getObject(index, XTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelecommunicationUseCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * telecommunication equipment type (ID)
   */
  ID *getXTN_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_3);
  }

  ID *getTelecommunicationEquipmentType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, XTN_3);
  }

  bool isXTN_3(size_t index = 0) {
    try {
      return this->getObject(index, XTN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTelecommunicationEquipmentType(size_t index = 0) {
    try {
      return this->getObject(index, XTN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Email address
   */
  ST *getXTN_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_4);
  }

  ST *getEmailAddress(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_4);
  }

  bool isXTN_4(size_t index = 0) {
    try {
      return this->getObject(index, XTN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEmailAddress(size_t index = 0) {
    try {
      return this->getObject(index, XTN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country Code
   */
  NM *getXTN_5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_5);
  }

  NM *getCountryCode(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_5);
  }

  bool isXTN_5(size_t index = 0) {
    try {
      return this->getObject(index, XTN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountryCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Area/city code
   */
  NM *getXTN_6(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_6);
  }

  NM *getAreaCityCode(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_6);
  }

  bool isXTN_6(size_t index = 0) {
    try {
      return this->getObject(index, XTN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAreaCityCode(size_t index = 0) {
    try {
      return this->getObject(index, XTN_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Phone number
   */
  NM *getXTN_7(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_7);
  }

  NM *getPhoneNumber(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_7);
  }

  bool isXTN_7(size_t index = 0) {
    try {
      return this->getObject(index, XTN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, XTN_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Extension
   */
  NM *getXTN_8(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_8);
  }

  NM *getExtension(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, XTN_8);
  }

  bool isXTN_8(size_t index = 0) {
    try {
      return this->getObject(index, XTN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExtension(size_t index = 0) {
    try {
      return this->getObject(index, XTN_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * any text
   */
  ST *getXTN_9(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_9);
  }

  ST *getAnyText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, XTN_9);
  }

  bool isXTN_9(size_t index = 0) {
    try {
      return this->getObject(index, XTN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAnyText(size_t index = 0) {
    try {
      return this->getObject(index, XTN_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End XTN */

} /* End HL7_24 */

#endif /*__XTN_v24_H__ */
