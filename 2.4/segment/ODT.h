/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __ODT_v24_H__
#define __ODT_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0160.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Diet Tray Instructions */
class ODT : public HL7Segment {
 public:
  ODT() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ODT_1, ODT_2, ODT_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "ODT"; }
  ODT* create() const { return new ODT(); }

 private:
  void init() {
    setName("ODT");
    /* Init members */
    addObject<CE_0160>(ODT_1, "ODT.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(ODT_2, "ODT.2", HL7::optional, HL7::repetition_on);
    addObject<ST>(ODT_3, "ODT.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Tray Type
   */

  CE_0160* getODT_1(size_t index = 0) {
    return (CE_0160*)this->getObjectSafe(index, ODT_1);
  }

  CE_0160* getTrayType(size_t index = 0) {
    return (CE_0160*)this->getObjectSafe(index, ODT_1);
  }

  bool isODT_1(size_t index = 0) {
    try {
      return this->getObject(index, ODT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTrayType(size_t index = 0) {
    try {
      return this->getObject(index, ODT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Period
   */

  CE* getODT_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODT_2);
  }

  CE* getServicePeriod(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, ODT_2);
  }

  bool isODT_2(size_t index = 0) {
    try {
      return this->getObject(index, ODT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServicePeriod(size_t index = 0) {
    try {
      return this->getObject(index, ODT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Instruction
   */

  ST* getODT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODT_3);
  }

  ST* getTextInstruction(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODT_3);
  }

  bool isODT_3(size_t index = 0) {
    try {
      return this->getObject(index, ODT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextInstruction(size_t index = 0) {
    try {
      return this->getObject(index, ODT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ODT */

} /* End of namespace HL7_24 */
#endif /* __ODT_v24_H__ */
