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


#ifndef __OM6_v24_H__
#define __OM6_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* Observations that are Calculated from Other Observ */
class OM6 : public HL7Segment {
 public:
  OM6() { this->init(); }

 private:
  /* */
  enum FIELD_ID { OM6_1, OM6_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "OM6"; }
  OM6* create() const { return new OM6(); }

 private:
  void init() {
    setName("OM6");
    /* Init members */
    addObject<NM>(OM6_1, "OM6.1", HL7::optional, HL7::repetition_off);
    addObject<TX>(OM6_2, "OM6.2", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sequence Number - Test/ Observation Master File
   */

  NM* getOM6_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM6_1);
  }

  NM* getSequenceNumberTestObservationMasterFile(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, OM6_1);
  }

  bool isOM6_1(size_t index = 0) {
    try {
      return this->getObject(index, OM6_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceNumberTestObservationMasterFile(size_t index = 0) {
    try {
      return this->getObject(index, OM6_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Derivation Rule
   */

  TX* getOM6_2(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM6_2);
  }

  TX* getDerivationRule(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, OM6_2);
  }

  bool isOM6_2(size_t index = 0) {
    try {
      return this->getObject(index, OM6_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDerivationRule(size_t index = 0) {
    try {
      return this->getObject(index, OM6_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of OM6 */

} /* End of namespace HL7_24 */
#endif /* __OM6_v24_H__ */
