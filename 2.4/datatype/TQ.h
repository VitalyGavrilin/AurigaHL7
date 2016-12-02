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


#ifndef __TQ_v24_H__
#define __TQ_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/OSD.h"
#include "../datatype/RI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* timing quantity */
class TQ : public HL7Data {
 public:
  TQ() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    TQ_1,  /* quantity */
    TQ_2,  /* interval */
    TQ_3,  /* duration */
    TQ_4,  /* start date/time */
    TQ_5,  /* end date/time */
    TQ_6,  /* priority */
    TQ_7,  /* condition */
    TQ_8,  /* text (TX) */
    TQ_9,  /* conjunction component */
    TQ_10, /* order sequencing */
    TQ_11, /* occurrence duration */
    TQ_12, /* total occurences */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "TQ"; }
  TQ *create() const { return new TQ(); }

 private:
  void init() {
    // setName("TQ");
    /* Init members */
    addObject<CQ>(TQ_1, "TQ.1", HL7::initialized, HL7::repetition_off);
    addObject<RI>(TQ_2, "TQ.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(TQ_3, "TQ.3", HL7::initialized, HL7::repetition_off);
    addObject<TS>(TQ_4, "TQ.4", HL7::initialized, HL7::repetition_off);
    addObject<TS>(TQ_5, "TQ.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(TQ_6, "TQ.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(TQ_7, "TQ.7", HL7::initialized, HL7::repetition_off);
    addObject<TX>(TQ_8, "TQ.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TQ_9, "TQ.9", HL7::initialized, HL7::repetition_off);
    addObject<OSD>(TQ_10, "TQ.10", HL7::initialized, HL7::repetition_off);
    addObject<CE>(TQ_11, "TQ.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(TQ_12, "TQ.12", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * quantity
   */
  CQ *getTQ_1(size_t index = 0) {
    return (CQ *)this->getObjectSafe(index, TQ_1);
  }

  CQ *getQuantity(size_t index = 0) {
    return (CQ *)this->getObjectSafe(index, TQ_1);
  }

  bool isTQ_1(size_t index = 0) {
    try {
      return this->getObject(index, TQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, TQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * interval
   */
  RI *getTQ_2(size_t index = 0) {
    return (RI *)this->getObjectSafe(index, TQ_2);
  }

  RI *getInterval(size_t index = 0) {
    return (RI *)this->getObjectSafe(index, TQ_2);
  }

  bool isTQ_2(size_t index = 0) {
    try {
      return this->getObject(index, TQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInterval(size_t index = 0) {
    try {
      return this->getObject(index, TQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * duration
   */
  ST *getTQ_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_3);
  }

  ST *getDuration(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_3);
  }

  bool isTQ_3(size_t index = 0) {
    try {
      return this->getObject(index, TQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuration(size_t index = 0) {
    try {
      return this->getObject(index, TQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * start date/time
   */
  TS *getTQ_4(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, TQ_4);
  }

  TS *getStartDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, TQ_4);
  }

  bool isTQ_4(size_t index = 0) {
    try {
      return this->getObject(index, TQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * end date/time
   */
  TS *getTQ_5(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, TQ_5);
  }

  TS *getEndDateTime(size_t index = 0) {
    return (TS *)this->getObjectSafe(index, TQ_5);
  }

  bool isTQ_5(size_t index = 0) {
    try {
      return this->getObject(index, TQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * priority
   */
  ST *getTQ_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_6);
  }

  ST *getPriority(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_6);
  }

  bool isTQ_6(size_t index = 0) {
    try {
      return this->getObject(index, TQ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPriority(size_t index = 0) {
    try {
      return this->getObject(index, TQ_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * condition
   */
  ST *getTQ_7(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_7);
  }

  ST *getCondition(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, TQ_7);
  }

  bool isTQ_7(size_t index = 0) {
    try {
      return this->getObject(index, TQ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCondition(size_t index = 0) {
    try {
      return this->getObject(index, TQ_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text (TX)
   */
  TX *getTQ_8(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, TQ_8);
  }

  TX *getText(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, TQ_8);
  }

  bool isTQ_8(size_t index = 0) {
    try {
      return this->getObject(index, TQ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, TQ_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * conjunction component
   */
  ID *getTQ_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, TQ_9);
  }

  ID *getConjunctionComponent(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, TQ_9);
  }

  bool isTQ_9(size_t index = 0) {
    try {
      return this->getObject(index, TQ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConjunctionComponent(size_t index = 0) {
    try {
      return this->getObject(index, TQ_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * order sequencing
   */
  OSD *getTQ_10(size_t index = 0) {
    return (OSD *)this->getObjectSafe(index, TQ_10);
  }

  OSD *getOrderSequencing(size_t index = 0) {
    return (OSD *)this->getObjectSafe(index, TQ_10);
  }

  bool isTQ_10(size_t index = 0) {
    try {
      return this->getObject(index, TQ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrderSequencing(size_t index = 0) {
    try {
      return this->getObject(index, TQ_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * occurrence duration
   */
  CE *getTQ_11(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, TQ_11);
  }

  CE *getOccurrenceDuration(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, TQ_11);
  }

  bool isTQ_11(size_t index = 0) {
    try {
      return this->getObject(index, TQ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceDuration(size_t index = 0) {
    try {
      return this->getObject(index, TQ_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * total occurences
   */
  NM *getTQ_12(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, TQ_12);
  }

  NM *getTotalOccurences(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, TQ_12);
  }

  bool isTQ_12(size_t index = 0) {
    try {
      return this->getObject(index, TQ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalOccurences(size_t index = 0) {
    try {
      return this->getObject(index, TQ_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End TQ */

} /* End HL7_24 */

#endif /*__TQ_v24_H__ */
