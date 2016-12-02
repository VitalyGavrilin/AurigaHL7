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


#ifndef __QRI_v24_H__
#define __QRI_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0393.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Query Response Instance */
class QRI : public HL7Segment {
 public:
  QRI() { this->init(); }

 private:
  /* */
  enum FIELD_ID { QRI_1, QRI_2, QRI_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "QRI"; }
  QRI* create() const { return new QRI(); }

 private:
  void init() {
    setName("QRI");
    /* Init members */
    addObject<NM>(QRI_1, "QRI.1", HL7::optional, HL7::repetition_off);
    addObject<IS>(QRI_2, "QRI.2", HL7::optional, HL7::repetition_on);
    addObject<CE_0393>(QRI_3, "QRI.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Candidate Confidence
   */

  NM* getQRI_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRI_1);
  }

  NM* getCandidateConfidence(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRI_1);
  }

  bool isQRI_1(size_t index = 0) {
    try {
      return this->getObject(index, QRI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCandidateConfidence(size_t index = 0) {
    try {
      return this->getObject(index, QRI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Match Reason Code
   */

  IS* getQRI_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, QRI_2);
  }

  IS* getMatchReasonCode(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, QRI_2);
  }

  bool isQRI_2(size_t index = 0) {
    try {
      return this->getObject(index, QRI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMatchReasonCode(size_t index = 0) {
    try {
      return this->getObject(index, QRI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Algorithm Descriptor
   */

  CE_0393* getQRI_3(size_t index = 0) {
    return (CE_0393*)this->getObjectSafe(index, QRI_3);
  }

  CE_0393* getAlgorithmDescriptor(size_t index = 0) {
    return (CE_0393*)this->getObjectSafe(index, QRI_3);
  }

  bool isQRI_3(size_t index = 0) {
    try {
      return this->getObject(index, QRI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlgorithmDescriptor(size_t index = 0) {
    try {
      return this->getObject(index, QRI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QRI */

} /* End of namespace HL7_24 */
#endif /* __QRI_v24_H__ */
