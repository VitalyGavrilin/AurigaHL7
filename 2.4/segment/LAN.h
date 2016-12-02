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


#ifndef __LAN_v24_H__
#define __LAN_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0296.h"
#include "../datatype/CE_0403.h"
#include "../datatype/CE_0404.h"
#include "../datatype/SI.h"

namespace HL7_24 {

/* Language Detail */
class LAN : public HL7Segment {
 public:
  LAN() { this->init(); }

 private:
  /* */
  enum FIELD_ID { LAN_1, LAN_2, LAN_3, LAN_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "LAN"; }
  LAN* create() const { return new LAN(); }

 private:
  void init() {
    setName("LAN");
    /* Init members */
    addObject<SI>(LAN_1, "LAN.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0296>(LAN_2, "LAN.2", HL7::initialized, HL7::repetition_off);
    addObject<CE_0403>(LAN_3, "LAN.3", HL7::optional, HL7::repetition_on);
    addObject<CE_0404>(LAN_4, "LAN.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - LAN
   */

  SI* getLAN_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, LAN_1);
  }

  SI* getSetIDLAN(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, LAN_1);
  }

  bool isLAN_1(size_t index = 0) {
    try {
      return this->getObject(index, LAN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDLAN(size_t index = 0) {
    try {
      return this->getObject(index, LAN_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Code
   */

  CE_0296* getLAN_2(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, LAN_2);
  }

  CE_0296* getLanguageCode(size_t index = 0) {
    return (CE_0296*)this->getObjectSafe(index, LAN_2);
  }

  bool isLAN_2(size_t index = 0) {
    try {
      return this->getObject(index, LAN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Ability Code
   */

  CE_0403* getLAN_3(size_t index = 0) {
    return (CE_0403*)this->getObjectSafe(index, LAN_3);
  }

  CE_0403* getLanguageAbilityCode(size_t index = 0) {
    return (CE_0403*)this->getObjectSafe(index, LAN_3);
  }

  bool isLAN_3(size_t index = 0) {
    try {
      return this->getObject(index, LAN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageAbilityCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Language Proficiency Code
   */

  CE_0404* getLAN_4(size_t index = 0) {
    return (CE_0404*)this->getObjectSafe(index, LAN_4);
  }

  CE_0404* getLanguageProficiencyCode(size_t index = 0) {
    return (CE_0404*)this->getObjectSafe(index, LAN_4);
  }

  bool isLAN_4(size_t index = 0) {
    try {
      return this->getObject(index, LAN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLanguageProficiencyCode(size_t index = 0) {
    try {
      return this->getObject(index, LAN_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of LAN */

} /* End of namespace HL7_24 */
#endif /* __LAN_v24_H__ */
