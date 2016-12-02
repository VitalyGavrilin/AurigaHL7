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


#ifndef __QPD_v24_H__
#define __QPD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0471.h"
#include "../datatype/ST.h"
#include "../datatype/varies.h"

namespace HL7_24 {

/* Query Parameter Definition */
class QPD : public HL7Segment {
 public:
  QPD() { this->init(); }

 private:
  /* */
  enum FIELD_ID { QPD_1, QPD_2, QPD_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "QPD"; }
  QPD* create() const { return new QPD(); }

 private:
  void init() {
    setName("QPD");
    /* Init members */
    addObject<CE_0471>(QPD_1, "QPD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QPD_2, "QPD.2", HL7::conditional, HL7::repetition_off);
    addObject<varies>(QPD_3, "QPD.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Message Query Name
   */

  CE_0471* getQPD_1(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QPD_1);
  }

  CE_0471* getMessageQueryName(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QPD_1);
  }

  bool isQPD_1(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QPD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Tag
   */

  ST* getQPD_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QPD_2);
  }

  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * User Parameters (in successive fields)
   */

  HL7Object* getQPD_3(size_t index = 0) {
    return (this->getObjectSafe(index, QPD_3));
  }

  HL7Object* getUserParameters(size_t index = 0) {
    return (this->getObjectSafe(index, QPD_3));
  }

  bool isQPD_3(size_t index = 0) {
    try {
      return (this->getObject(index, QPD_3) != NULL);
    } catch (...) {
    }
    return false;
  }

  bool isUserParameters(size_t index = 0) {
    try {
      return (this->getObject(index, QPD_3) != NULL);
    } catch (...) {
    }
    return false;
  }

}; /* End of QPD */

} /* End of namespace HL7_24 */
#endif /* __QPD_v24_H__ */
