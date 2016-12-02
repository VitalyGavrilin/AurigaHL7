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


#ifndef __RGS_v24_H__
#define __RGS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/SI.h"

namespace HL7_24 {

/* Resource Group */
class RGS : public HL7Segment {
 public:
  RGS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { RGS_1, RGS_2, RGS_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "RGS"; }
  RGS* create() const { return new RGS(); }

 private:
  void init() {
    setName("RGS");
    /* Init members */
    addObject<SI>(RGS_1, "RGS.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RGS_2, "RGS.2", HL7::conditional, HL7::repetition_off);
    addObject<CE>(RGS_3, "RGS.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - RGS
   */

  SI* getRGS_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RGS_1);
  }

  SI* getSetIDRGS(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RGS_1);
  }

  bool isRGS_1(size_t index = 0) {
    try {
      return this->getObject(index, RGS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDRGS(size_t index = 0) {
    try {
      return this->getObject(index, RGS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment Action Code
   */

  ID* getRGS_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RGS_2);
  }

  ID* getSegmentActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RGS_2);
  }

  bool isRGS_2(size_t index = 0) {
    try {
      return this->getObject(index, RGS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentActionCode(size_t index = 0) {
    try {
      return this->getObject(index, RGS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Group ID
   */

  CE* getRGS_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RGS_3);
  }

  CE* getResourceGroupID(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RGS_3);
  }

  bool isRGS_3(size_t index = 0) {
    try {
      return this->getObject(index, RGS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceGroupID(size_t index = 0) {
    try {
      return this->getObject(index, RGS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RGS */

} /* End of namespace HL7_24 */
#endif /* __RGS_v24_H__ */
