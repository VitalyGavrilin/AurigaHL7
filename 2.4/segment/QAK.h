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


#ifndef __QAK_v24_H__
#define __QAK_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0471.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Query Acknowledgment */
class QAK : public HL7Segment {
 public:
  QAK() { this->init(); }

 private:
  /* */
  enum FIELD_ID { QAK_1, QAK_2, QAK_3, QAK_4, QAK_5, QAK_6, FIELD_ID_MAX };

 public:
  const char* className() const { return "QAK"; }
  QAK* create() const { return new QAK(); }

 private:
  void init() {
    setName("QAK");
    /* Init members */
    addObject<ST>(QAK_1, "QAK.1", HL7::conditional, HL7::repetition_off);
    addObject<ID>(QAK_2, "QAK.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0471>(QAK_3, "QAK.3", HL7::optional, HL7::repetition_off);
    addObject<NM>(QAK_4, "QAK.4", HL7::optional, HL7::repetition_off);
    addObject<NM>(QAK_5, "QAK.5", HL7::optional, HL7::repetition_off);
    addObject<NM>(QAK_6, "QAK.6", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getQAK_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QAK_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QAK_1);
  }

  bool isQAK_1(size_t index = 0) {
    try {
      return this->getObject(index, QAK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, QAK_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Response Status
   */

  ID* getQAK_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QAK_2);
  }

  ID* getQueryResponseStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QAK_2);
  }

  bool isQAK_2(size_t index = 0) {
    try {
      return this->getObject(index, QAK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResponseStatus(size_t index = 0) {
    try {
      return this->getObject(index, QAK_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Message Query Name
   */

  CE_0471* getQAK_3(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QAK_3);
  }

  CE_0471* getMessageQueryName(size_t index = 0) {
    return (CE_0471*)this->getObjectSafe(index, QAK_3);
  }

  bool isQAK_3(size_t index = 0) {
    try {
      return this->getObject(index, QAK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMessageQueryName(size_t index = 0) {
    try {
      return this->getObject(index, QAK_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hit Count Total
   */

  NM* getQAK_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_4);
  }

  NM* getHitCountTotal(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_4);
  }

  bool isQAK_4(size_t index = 0) {
    try {
      return this->getObject(index, QAK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHitCountTotal(size_t index = 0) {
    try {
      return this->getObject(index, QAK_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * This payload
   */

  NM* getQAK_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_5);
  }

  NM* getThisPayload(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_5);
  }

  bool isQAK_5(size_t index = 0) {
    try {
      return this->getObject(index, QAK_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isThisPayload(size_t index = 0) {
    try {
      return this->getObject(index, QAK_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hits remaining
   */

  NM* getQAK_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_6);
  }

  NM* getHitsRemaining(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QAK_6);
  }

  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHitsRemaining(size_t index = 0) {
    try {
      return this->getObject(index, QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QAK */

} /* End of namespace HL7_24 */
#endif /* __QAK_v24_H__ */
