/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __RDF_v24_H__
#define __RDF_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/RCD.h"

namespace HL7_24 {

/* Table Row Definition */
class RDF : public HL7Segment {
 public:
  RDF() { this->init(); }

 private:
  /* */
  enum FIELD_ID { RDF_1, RDF_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "RDF"; }
  RDF* create() const { return new RDF(); }

 private:
  void init() {
    setName("RDF");
    /* Init members */
    addObject<NM>(RDF_1, "RDF.1", HL7::initialized, HL7::repetition_off);
    addObject<RCD>(RDF_2, "RDF.2", HL7::initialized, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Number of Columns per Row
   */

  NM* getRDF_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RDF_1);
  }

  NM* getNumberOfColumnsPerRow(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RDF_1);
  }

  bool isRDF_1(size_t index = 0) {
    try {
      return this->getObject(index, RDF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberOfColumnsPerRow(size_t index = 0) {
    try {
      return this->getObject(index, RDF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Column Description
   */

  RCD* getRDF_2(size_t index = 0) {
    return (RCD*)this->getObjectSafe(index, RDF_2);
  }

  RCD* getColumnDescription(size_t index = 0) {
    return (RCD*)this->getObjectSafe(index, RDF_2);
  }

  bool isRDF_2(size_t index = 0) {
    try {
      return this->getObject(index, RDF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isColumnDescription(size_t index = 0) {
    try {
      return this->getObject(index, RDF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RDF */

} /* End of namespace HL7_24 */
#endif /* __RDF_v24_H__ */
