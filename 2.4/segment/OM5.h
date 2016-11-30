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


#ifndef __OM5_v24_H__
#define __OM5_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Observation Batteries (Sets) */
class OM5 : public HL7Segment {
 public:
  OM5() { this->init(); }

 private:
  /* */
  enum FIELD_ID { OM5_1, OM5_2, OM5_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "OM5"; }
  OM5* create() const { return new OM5(); }

 private:
  void init() {
    setName("OM5");
    /* Init members */
    addObject<NM>(OM5_1, "OM5.1", HL7::optional, HL7::repetition_off);
    addObject<CE>(OM5_2, "OM5.2", HL7::optional, HL7::repetition_on);
    addObject<ST>(OM5_3, "OM5.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM5_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM5_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM5_1);
  }

  bool isOM5_1(size_t index = 0) {
    try {
      return this->getObject(index, OM5_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM5_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Test/Observations Included within an Ordered Test Battery
   */

  CE* getOM5_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM5_2);
  }

  CE* getTestObservationsIncludedWithinAnOrderedTestBattery(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, OM5_2);
  }

  bool isOM5_2(size_t index = 0) {
    try {
      return this->getObject(index, OM5_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTestObservationsIncludedWithinAnOrderedTestBattery(size_t index = 0) {
    try {
      return this->getObject(index, OM5_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Observation ID Suffixes
   */

  ST* getOM5_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM5_3);
  }

  ST* getObservationIDSuffixes(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, OM5_3);
  }

  bool isOM5_3(size_t index = 0) {
    try {
      return this->getObject(index, OM5_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isObservationIDSuffixes(size_t index = 0) {
    try {
      return this->getObject(index, OM5_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM5 */

} /* End of namespace HL7_24 */
#endif /* __OM5_v24_H__ */
