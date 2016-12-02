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


#ifndef __PCF_v24_H__
#define __PCF_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Pre-certification required */
class PCF : public HL7Data {
 public:
  PCF() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PCF_1, /* pre-certification patient type */
    PCF_2, /* pre-certification required */
    PCF_3, /* pre-certification window */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PCF"; }
  PCF *create() const { return new PCF(); }

 private:
  void init() {
    // setName("PCF");
    /* Init members */
    addObject<IS>(PCF_1, "PCF.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PCF_2, "PCF.2", HL7::initialized, HL7::repetition_off);
    addObject<TS>(PCF_3, "PCF.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * pre-certification patient type
   */
  IS *getPCF_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PCF_1);
  }

  IS *getPreCertificationPatientType(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, PCF_1);
  }

  bool isPCF_1(size_t index = 0) {
    try {
      return this->getObject(index, PCF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreCertificationPatientType(size_t index = 0) {
    try {
      return this->getObject(index, PCF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * pre-certification required
   */
  ID *getPCF_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PCF_2);
  }

  ID *getPreCertificationRequired(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, PCF_2);
  }

  bool isPCF_2(size_t index = 0) {
    try {
      return this->getObject(index, PCF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreCertificationRequired(size_t index = 0) {
    try {
      return this->getObject(index, PCF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * pre-certification window
   */
  TS *getPCF_3(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, PCF_3);
  }

  TS *getPreCertificationWindow(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, PCF_3);
  }

  bool isPCF_3(size_t index = 0) {
    try {
      return this->getObject(index, PCF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreCertificationWindow(size_t index = 0) {
    try {
      return this->getObject(index, PCF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PCF */

} /* End HL7_24 */

#endif /*__PCF_v24_H__ */
