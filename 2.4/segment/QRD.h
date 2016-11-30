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


#ifndef __QRD_v24_H__
#define __QRD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0048.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/VR.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Original-Style Query Definition */
class QRD : public HL7Segment {
 public:
  QRD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QRD_1,
    QRD_2,
    QRD_3,
    QRD_4,
    QRD_5,
    QRD_6,
    QRD_7,
    QRD_8,
    QRD_9,
    QRD_10,
    QRD_11,
    QRD_12,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QRD"; }
  QRD* create() const { return new QRD(); }

 private:
  void init() {
    setName("QRD");
    /* Init members */
    addObject<TS>(QRD_1, "QRD.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QRD_2, "QRD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QRD_3, "QRD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(QRD_4, "QRD.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(QRD_5, "QRD.5", HL7::optional, HL7::repetition_off);
    addObject<TS>(QRD_6, "QRD.6", HL7::optional, HL7::repetition_off);
    addObject<CQ>(QRD_7, "QRD.7", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(QRD_8, "QRD.8", HL7::initialized, HL7::repetition_on);
    addObject<CE_0048>(QRD_9, "QRD.9", HL7::initialized, HL7::repetition_on);
    addObject<CE>(QRD_10, "QRD.10", HL7::initialized, HL7::repetition_on);
    addObject<VR>(QRD_11, "QRD.11", HL7::optional, HL7::repetition_on);
    addObject<ID>(QRD_12, "QRD.12", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Date/Time
   */

  TS* getQRD_1(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRD_1);
  }

  TS* getQueryDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRD_1);
  }

  bool isQRD_1(size_t index = 0) {
    try {
      return this->getObject(index, QRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryDateTime(size_t index = 0) {
    try {
      return this->getObject(index, QRD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Format Code
   */

  ID* getQRD_2(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_2);
  }

  ID* getQueryFormatCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_2);
  }

  bool isQRD_2(size_t index = 0) {
    try {
      return this->getObject(index, QRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryFormatCode(size_t index = 0) {
    try {
      return this->getObject(index, QRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Priority
   */

  ID* getQRD_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_3);
  }

  ID* getQueryPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_3);
  }

  bool isQRD_3(size_t index = 0) {
    try {
      return this->getObject(index, QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryPriority(size_t index = 0) {
    try {
      return this->getObject(index, QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query ID
   */

  ST* getQRD_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRD_4);
  }

  ST* getQueryID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRD_4);
  }

  bool isQRD_4(size_t index = 0) {
    try {
      return this->getObject(index, QRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryID(size_t index = 0) {
    try {
      return this->getObject(index, QRD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deferred Response Type
   */

  ID* getQRD_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_5);
  }

  ID* getDeferredResponseType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_5);
  }

  bool isQRD_5(size_t index = 0) {
    try {
      return this->getObject(index, QRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeferredResponseType(size_t index = 0) {
    try {
      return this->getObject(index, QRD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deferred Response Date/Time
   */

  TS* getQRD_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRD_6);
  }

  TS* getDeferredResponseDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRD_6);
  }

  bool isQRD_6(size_t index = 0) {
    try {
      return this->getObject(index, QRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeferredResponseDateTime(size_t index = 0) {
    try {
      return this->getObject(index, QRD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Limited Request
   */

  CQ* getQRD_7(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, QRD_7);
  }

  CQ* getQuantityLimitedRequest(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, QRD_7);
  }

  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityLimitedRequest(size_t index = 0) {
    try {
      return this->getObject(index, QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Who Subject Filter
   */

  XCN* getQRD_8(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, QRD_8);
  }

  XCN* getWhoSubjectFilter(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, QRD_8);
  }

  bool isQRD_8(size_t index = 0) {
    try {
      return this->getObject(index, QRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhoSubjectFilter(size_t index = 0) {
    try {
      return this->getObject(index, QRD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * What Subject Filter
   */

  CE_0048* getQRD_9(size_t index = 0) {
    return (CE_0048*)this->getObjectSafe(index, QRD_9);
  }

  CE_0048* getWhatSubjectFilter(size_t index = 0) {
    return (CE_0048*)this->getObjectSafe(index, QRD_9);
  }

  bool isQRD_9(size_t index = 0) {
    try {
      return this->getObject(index, QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhatSubjectFilter(size_t index = 0) {
    try {
      return this->getObject(index, QRD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * What Department Data Code
   */

  CE* getQRD_10(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, QRD_10);
  }

  CE* getWhatDepartmentDataCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, QRD_10);
  }

  bool isQRD_10(size_t index = 0) {
    try {
      return this->getObject(index, QRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhatDepartmentDataCode(size_t index = 0) {
    try {
      return this->getObject(index, QRD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * What Data Code Value Qual.
   */

  VR* getQRD_11(size_t index = 0) {
    return (VR*)this->getObjectSafe(index, QRD_11);
  }

  VR* getWhatDataCodeValueQual(size_t index = 0) {
    return (VR*)this->getObjectSafe(index, QRD_11);
  }

  bool isQRD_11(size_t index = 0) {
    try {
      return this->getObject(index, QRD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhatDataCodeValueQual(size_t index = 0) {
    try {
      return this->getObject(index, QRD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Query Results Level
   */

  ID* getQRD_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_12);
  }

  ID* getQueryResultsLevel(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRD_12);
  }

  bool isQRD_12(size_t index = 0) {
    try {
      return this->getObject(index, QRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryResultsLevel(size_t index = 0) {
    try {
      return this->getObject(index, QRD_12) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QRD */

} /* End of namespace HL7_24 */
#endif /* __QRD_v24_H__ */
