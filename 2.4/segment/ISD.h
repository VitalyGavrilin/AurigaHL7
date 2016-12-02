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


#ifndef __ISD_v24_H__
#define __ISD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0368.h"
#include "../datatype/CE_0387.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Interaction Status Detail */
class ISD : public HL7Segment {
 public:
  ISD() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ISD_1, ISD_2, ISD_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "ISD"; }
  ISD* create() const { return new ISD(); }

 private:
  void init() {
    setName("ISD");
    /* Init members */
    addObject<NM>(ISD_1, "ISD.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0368>(ISD_2, "ISD.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0387>(ISD_3, "ISD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Reference Interaction Number (unique identifier)
   */

  NM* getISD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ISD_1);
  }

  NM* getReferenceInteractionNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ISD_1);
  }

  bool isISD_1(size_t index = 0) {
    try {
      return this->getObject(index, ISD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceInteractionNumber(size_t index = 0) {
    try {
      return this->getObject(index, ISD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interaction Type Identifier
   */

  CE_0368* getISD_2(size_t index = 0) {
    return (CE_0368*)this->getObjectSafe(index, ISD_2);
  }

  CE_0368* getInteractionTypeIdentifier(size_t index = 0) {
    return (CE_0368*)this->getObjectSafe(index, ISD_2);
  }

  bool isISD_2(size_t index = 0) {
    try {
      return this->getObject(index, ISD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInteractionTypeIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ISD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Interaction Active State
   */

  CE_0387* getISD_3(size_t index = 0) {
    return (CE_0387*)this->getObjectSafe(index, ISD_3);
  }

  CE_0387* getInteractionActiveState(size_t index = 0) {
    return (CE_0387*)this->getObjectSafe(index, ISD_3);
  }

  bool isISD_3(size_t index = 0) {
    try {
      return this->getObject(index, ISD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInteractionActiveState(size_t index = 0) {
    try {
      return this->getObject(index, ISD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ISD */

} /* End of namespace HL7_24 */
#endif /* __ISD_v24_H__ */
