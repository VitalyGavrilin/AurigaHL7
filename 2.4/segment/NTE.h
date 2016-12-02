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


#ifndef __NTE_v24_H__
#define __NTE_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0364.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_24 {

/* Notes and Comments */
class NTE : public HL7Segment {
 public:
  NTE() { this->init(); }

 private:
  /* */
  enum FIELD_ID { NTE_1, NTE_2, NTE_3, NTE_4, FIELD_ID_MAX };

 public:
  const char* className() const { return "NTE"; }
  NTE* create() const { return new NTE(); }

 private:
  void init() {
    setName("NTE");
    /* Init members */
    addObject<SI>(NTE_1, "NTE.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(NTE_2, "NTE.2", HL7::optional, HL7::repetition_off);
    addObject<FT>(NTE_3, "NTE.3", HL7::optional, HL7::repetition_on);
    addObject<CE_0364>(NTE_4, "NTE.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - NTE
   */

  SI* getNTE_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NTE_1);
  }

  SI* getSetIDNTE(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, NTE_1);
  }

  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDNTE(size_t index = 0) {
    try {
      return this->getObject(index, NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source of Comment
   */

  ID* getNTE_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NTE_2);
  }

  ID* getSourceOfComment(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, NTE_2);
  }

  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceOfComment(size_t index = 0) {
    try {
      return this->getObject(index, NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */

  FT* getNTE_3(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, NTE_3);
  }

  FT* getComment(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, NTE_3);
  }

  bool isNTE_3(size_t index = 0) {
    try {
      return this->getObject(index, NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment Type
   */

  CE_0364* getNTE_4(size_t index = 0) {
    return (CE_0364*)this->getObjectSafe(index, NTE_4);
  }

  CE_0364* getCommentType(size_t index = 0) {
    return (CE_0364*)this->getObjectSafe(index, NTE_4);
  }

  bool isNTE_4(size_t index = 0) {
    try {
      return this->getObject(index, NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommentType(size_t index = 0) {
    try {
      return this->getObject(index, NTE_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of NTE */

} /* End of namespace HL7_24 */
#endif /* __NTE_v24_H__ */
