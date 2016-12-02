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


#ifndef __ACC_v24_H__
#define __ACC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0050.h"
#include "../datatype/CE_0347.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Accident */
class ACC : public HL7Segment {
 public:
  ACC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ACC_1,
    ACC_2,
    ACC_3,
    ACC_4,
    ACC_5,
    ACC_6,
    ACC_7,
    ACC_8,
    ACC_9,
    ACC_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ACC"; }
  ACC* create() const { return new ACC(); }

 private:
  void init() {
    setName("ACC");
    /* Init members */
    addObject<TS>(ACC_1, "ACC.1", HL7::optional, HL7::repetition_off);
    addObject<CE_0050>(ACC_2, "ACC.2", HL7::optional, HL7::repetition_off);
    addObject<ST>(ACC_3, "ACC.3", HL7::optional, HL7::repetition_off);
    addObject<CE_0347>(ACC_4, "ACC.4", HL7::optional, HL7::repetition_off);
    addObject<ID>(ACC_5, "ACC.5", HL7::optional, HL7::repetition_off);
    addObject<ID>(ACC_6, "ACC.6", HL7::optional, HL7::repetition_off);
    addObject<XCN>(ACC_7, "ACC.7", HL7::optional, HL7::repetition_off);
    addObject<ST>(ACC_8, "ACC.8", HL7::optional, HL7::repetition_off);
    addObject<ST>(ACC_9, "ACC.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(ACC_10, "ACC.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Accident Date/Time
   */

  TS* getACC_1(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ACC_1);
  }

  TS* getAccidentDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, ACC_1);
  }

  bool isACC_1(size_t index = 0) {
    try {
      return this->getObject(index, ACC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ACC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Code
   */

  CE_0050* getACC_2(size_t index = 0) {
    return (CE_0050*)this->getObjectSafe(index, ACC_2);
  }

  CE_0050* getAccidentCode(size_t index = 0) {
    return (CE_0050*)this->getObjectSafe(index, ACC_2);
  }

  bool isACC_2(size_t index = 0) {
    try {
      return this->getObject(index, ACC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentCode(size_t index = 0) {
    try {
      return this->getObject(index, ACC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Location
   */

  ST* getACC_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_3);
  }

  ST* getAccidentLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_3);
  }

  bool isACC_3(size_t index = 0) {
    try {
      return this->getObject(index, ACC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentLocation(size_t index = 0) {
    try {
      return this->getObject(index, ACC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto Accident State
   */

  CE_0347* getACC_4(size_t index = 0) {
    return (CE_0347*)this->getObjectSafe(index, ACC_4);
  }

  CE_0347* getAutoAccidentState(size_t index = 0) {
    return (CE_0347*)this->getObjectSafe(index, ACC_4);
  }

  bool isACC_4(size_t index = 0) {
    try {
      return this->getObject(index, ACC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoAccidentState(size_t index = 0) {
    try {
      return this->getObject(index, ACC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Job Related Indicator
   */

  ID* getACC_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_5);
  }

  ID* getAccidentJobRelatedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_5);
  }

  bool isACC_5(size_t index = 0) {
    try {
      return this->getObject(index, ACC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentJobRelatedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Death Indicator
   */

  ID* getACC_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_6);
  }

  ID* getAccidentDeathIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_6);
  }

  bool isACC_6(size_t index = 0) {
    try {
      return this->getObject(index, ACC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDeathIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getACC_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ACC_7);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ACC_7);
  }

  bool isACC_7(size_t index = 0) {
    try {
      return this->getObject(index, ACC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, ACC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Description
   */

  ST* getACC_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_8);
  }

  ST* getAccidentDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_8);
  }

  bool isACC_8(size_t index = 0) {
    try {
      return this->getObject(index, ACC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDescription(size_t index = 0) {
    try {
      return this->getObject(index, ACC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Brought In By
   */

  ST* getACC_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_9);
  }

  ST* getBroughtInBy(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_9);
  }

  bool isACC_9(size_t index = 0) {
    try {
      return this->getObject(index, ACC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBroughtInBy(size_t index = 0) {
    try {
      return this->getObject(index, ACC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Police Notified Indicator
   */

  ID* getACC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_10);
  }

  ID* getPoliceNotifiedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_10);
  }

  bool isACC_10(size_t index = 0) {
    try {
      return this->getObject(index, ACC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPoliceNotifiedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ACC */

} /* End of namespace HL7_24 */
#endif /* __ACC_v24_H__ */
