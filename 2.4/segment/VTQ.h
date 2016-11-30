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


#ifndef __VTQ_v24_H__
#define __VTQ_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/QSC.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* Virtual Table Query Request */
class VTQ : public HL7Segment {
 public:
  VTQ() { this->init(); }

 private:
  /* */
  enum FIELD_ID { VTQ_1, VTQ_2, VTQ_3, VTQ_4, VTQ_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "VTQ"; }
  VTQ* create() const { return new VTQ(); }

 private:
  void init() {
    setName("VTQ");
    /* Init members */
    addObject<ST>(VTQ_1, "VTQ.1", HL7::optional, HL7::repetition_off);
    addObject<ID>(VTQ_2, "VTQ.2", HL7::initialized, HL7::repetition_off);
    addObject<CE>(VTQ_3, "VTQ.3", HL7::initialized, HL7::repetition_off);
    addObject<CE>(VTQ_4, "VTQ.4", HL7::initialized, HL7::repetition_off);
    addObject<QSC>(VTQ_5, "VTQ.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Query Tag
   */

  ST* getVTQ_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VTQ_1);
  }

  ST* getQueryTag(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, VTQ_1);
  }

  bool isVTQ_1(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryTag(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query/Response Format Code
   */

  ID* getVTQ_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, VTQ_2);
  }

  ID* getQueryResponseFormatCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, VTQ_2);
  }

  bool isVTQ_2(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResponseFormatCode(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * VT Query Name
   */

  CE* getVTQ_3(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VTQ_3);
  }

  CE* getVTQueryName(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VTQ_3);
  }

  bool isVTQ_3(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVTQueryName(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Virtual Table Name
   */

  CE* getVTQ_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VTQ_4);
  }

  CE* getVirtualTableName(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, VTQ_4);
  }

  bool isVTQ_4(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVirtualTableName(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Selection Criteria
   */

  QSC* getVTQ_5(size_t index = 0) {
    return (QSC*)this->getObjectSafe(index, VTQ_5);
  }

  QSC* getSelectionCriteria(size_t index = 0) {
    return (QSC*)this->getObjectSafe(index, VTQ_5);
  }

  bool isVTQ_5(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, VTQ_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of VTQ */

} /* End of namespace HL7_24 */
#endif /* __VTQ_v24_H__ */
