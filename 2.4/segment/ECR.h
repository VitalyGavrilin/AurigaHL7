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


#ifndef __ECR_v24_H__
#define __ECR_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0387.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Equipment Command Response */
class ECR : public HL7Segment {
 public:
  ECR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { ECR_1, ECR_2, ECR_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "ECR"; }
  ECR* create() const { return new ECR(); }

 private:
  void init() {
    setName("ECR");
    /* Init members */
    addObject<CE_0387>(ECR_1, "ECR.1", HL7::initialized, HL7::repetition_off);
    addObject<TS>(ECR_2, "ECR.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ECR_3, "ECR.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Command Response
   */

  CE_0387* getECR_1(size_t index = 0) {
    return (CE_0387*)this->getObjectSafe(index, ECR_1);
  }

  CE_0387* getCommandResponse(size_t index = 0) {
    return (CE_0387*)this->getObjectSafe(index, ECR_1);
  }

  bool isECR_1(size_t index = 0) {
    try {
      return this->getObject(index, ECR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommandResponse(size_t index = 0) {
    try {
      return this->getObject(index, ECR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Completed
   */

  TS* getECR_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ECR_2);
  }

  TS* getDateTimeCompleted(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ECR_2);
  }

  bool isECR_2(size_t index = 0) {
    try {
      return this->getObject(index, ECR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeCompleted(size_t index = 0) {
    try {
      return this->getObject(index, ECR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Command Response Parameters
   */

  ST* getECR_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECR_3);
  }

  ST* getCommandResponseParameters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ECR_3);
  }

  bool isECR_3(size_t index = 0) {
    try {
      return this->getObject(index, ECR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCommandResponseParameters(size_t index = 0) {
    try {
      return this->getObject(index, ECR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ECR */

} /* End of namespace HL7_24 */
#endif /* __ECR_v24_H__ */
