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


#ifndef __RDT_v24_H__
#define __RDT_v24_H__

#include "../../common/Util.h"
#include "../datatype/varies.h"

namespace HL7_24 {

/* Table Row Data */
class RDT : public HL7Segment {
 public:
  RDT() { this->init(); }

 private:
  /* */
  enum FIELD_ID { RDT_1, FIELD_ID_MAX };

 public:
  const char* className() const { return "RDT"; }
  RDT* create() const { return new RDT(); }

 private:
  void init() {
    setName("RDT");
    /* Init members */
    addObject<varies>(RDT_1, "RDT.1", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Column Value
   */

  HL7Object* getRDT_1(size_t index = 0) {
    return (this->getObjectSafe(index, RDT_1));
  }

  HL7Object* getColumnValue(size_t index = 0) {
    return (this->getObjectSafe(index, RDT_1));
  }

  bool isRDT_1(size_t index = 0) {
    try {
      return (this->getObject(index, RDT_1) != NULL);
    } catch (...) {
    }
    return false;
  }

  bool isColumnValue(size_t index = 0) {
    try {
      return (this->getObject(index, RDT_1) != NULL);
    } catch (...) {
    }
    return false;
  }

}; /* End of RDT */

} /* End of namespace HL7_24 */
#endif /* __RDT_v24_H__ */
