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


#ifndef __BHS_v24_H__
#define __BHS_v24_H__

#include "../../common/Util.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Batch Header */
class BHS : public HL7Segment {
 public:
  BHS() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    BHS_1,
    BHS_2,
    BHS_3,
    BHS_4,
    BHS_5,
    BHS_6,
    BHS_7,
    BHS_8,
    BHS_9,
    BHS_10,
    BHS_11,
    BHS_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "BHS"; }
  BHS* create() const { return new BHS(); }

 private:
  void init() {
    setName("BHS");
    /* Init members */
    addObject<ST>(BHS_1, "BHS.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_2, "BHS.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(BHS_3, "BHS.3", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_4, "BHS.4", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_5, "BHS.5", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_6, "BHS.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(BHS_7, "BHS.7", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_8, "BHS.8", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_9, "BHS.9", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_10, "BHS.10", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_11, "BHS.11", HL7::optional, HL7::repetition_off);
    addObject<ST>(BHS_12, "BHS.12", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Batch Field Separator
   */

  ST* getBHS_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_1);
  }

  ST* getBatchFieldSeparator(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_1);
  }

  bool isBHS_1(size_t index = 0) {
    try {
      return this->getObject(index, BHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchFieldSeparator(size_t index = 0) {
    try {
      return this->getObject(index, BHS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Encoding Characters
   */

  ST* getBHS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_2);
  }

  ST* getBatchEncodingCharacters(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_2);
  }

  bool isBHS_2(size_t index = 0) {
    try {
      return this->getObject(index, BHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchEncodingCharacters(size_t index = 0) {
    try {
      return this->getObject(index, BHS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Sending Application
   */

  ST* getBHS_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_3);
  }

  ST* getBatchSendingApplication(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_3);
  }

  bool isBHS_3(size_t index = 0) {
    try {
      return this->getObject(index, BHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSendingApplication(size_t index = 0) {
    try {
      return this->getObject(index, BHS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Sending Facility
   */

  ST* getBHS_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_4);
  }

  ST* getBatchSendingFacility(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_4);
  }

  bool isBHS_4(size_t index = 0) {
    try {
      return this->getObject(index, BHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSendingFacility(size_t index = 0) {
    try {
      return this->getObject(index, BHS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Receiving Application
   */

  ST* getBHS_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_5);
  }

  ST* getBatchReceivingApplication(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_5);
  }

  bool isBHS_5(size_t index = 0) {
    try {
      return this->getObject(index, BHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchReceivingApplication(size_t index = 0) {
    try {
      return this->getObject(index, BHS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Receiving Facility
   */

  ST* getBHS_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_6);
  }

  ST* getBatchReceivingFacility(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_6);
  }

  bool isBHS_6(size_t index = 0) {
    try {
      return this->getObject(index, BHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchReceivingFacility(size_t index = 0) {
    try {
      return this->getObject(index, BHS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Creation Date/Time
   */

  TS* getBHS_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, BHS_7);
  }

  TS* getBatchCreationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, BHS_7);
  }

  bool isBHS_7(size_t index = 0) {
    try {
      return this->getObject(index, BHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchCreationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, BHS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Security
   */

  ST* getBHS_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_8);
  }

  ST* getBatchSecurity(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_8);
  }

  bool isBHS_8(size_t index = 0) {
    try {
      return this->getObject(index, BHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchSecurity(size_t index = 0) {
    try {
      return this->getObject(index, BHS_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Name/ID/Type
   */

  ST* getBHS_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_9);
  }

  ST* getBatchNameIDType(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_9);
  }

  bool isBHS_9(size_t index = 0) {
    try {
      return this->getObject(index, BHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchNameIDType(size_t index = 0) {
    try {
      return this->getObject(index, BHS_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Comment
   */

  ST* getBHS_10(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_10);
  }

  ST* getBatchComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_10);
  }

  bool isBHS_10(size_t index = 0) {
    try {
      return this->getObject(index, BHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchComment(size_t index = 0) {
    try {
      return this->getObject(index, BHS_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Batch Control ID
   */

  ST* getBHS_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_11);
  }

  ST* getBatchControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_11);
  }

  bool isBHS_11(size_t index = 0) {
    try {
      return this->getObject(index, BHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBatchControlID(size_t index = 0) {
    try {
      return this->getObject(index, BHS_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reference Batch Control ID
   */

  ST* getBHS_12(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_12);
  }

  ST* getReferenceBatchControlID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, BHS_12);
  }

  bool isBHS_12(size_t index = 0) {
    try {
      return this->getObject(index, BHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceBatchControlID(size_t index = 0) {
    try {
      return this->getObject(index, BHS_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of BHS */

} /* End of namespace HL7_24 */
#endif /* __BHS_v24_H__ */
