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


#ifndef __QRF_v24_H__
#define __QRF_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/TQ.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Original Style Query Filter */
class QRF : public HL7Segment {
 public:
  QRF() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    QRF_1,
    QRF_2,
    QRF_3,
    QRF_4,
    QRF_5,
    QRF_6,
    QRF_7,
    QRF_8,
    QRF_9,
    QRF_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "QRF"; }
  QRF* create() const { return new QRF(); }

 private:
  void init() {
    setName("QRF");
    /* Init members */
    addObject<ST>(QRF_1, "QRF.1", HL7::initialized, HL7::repetition_on);
    addObject<TS>(QRF_2, "QRF.2", HL7::optional, HL7::repetition_off);
    addObject<TS>(QRF_3, "QRF.3", HL7::optional, HL7::repetition_off);
    addObject<ST>(QRF_4, "QRF.4", HL7::optional, HL7::repetition_on);
    addObject<ST>(QRF_5, "QRF.5", HL7::optional, HL7::repetition_on);
    addObject<ID>(QRF_6, "QRF.6", HL7::optional, HL7::repetition_on);
    addObject<ID>(QRF_7, "QRF.7", HL7::optional, HL7::repetition_on);
    addObject<ID>(QRF_8, "QRF.8", HL7::optional, HL7::repetition_on);
    addObject<TQ>(QRF_9, "QRF.9", HL7::optional, HL7::repetition_off);
    addObject<NM>(QRF_10, "QRF.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Where Subject Filter
   */

  ST* getQRF_1(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_1);
  }

  ST* getWhereSubjectFilter(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_1);
  }

  bool isQRF_1(size_t index = 0) {
    try {
      return this->getObject(index, QRF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhereSubjectFilter(size_t index = 0) {
    try {
      return this->getObject(index, QRF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * When Data Start Date/Time
   */

  TS* getQRF_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRF_2);
  }

  TS* getWhenDataStartDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRF_2);
  }

  bool isQRF_2(size_t index = 0) {
    try {
      return this->getObject(index, QRF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhenDataStartDateTime(size_t index = 0) {
    try {
      return this->getObject(index, QRF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * When Data End Date/Time
   */

  TS* getQRF_3(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRF_3);
  }

  TS* getWhenDataEndDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, QRF_3);
  }

  bool isQRF_3(size_t index = 0) {
    try {
      return this->getObject(index, QRF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhenDataEndDateTime(size_t index = 0) {
    try {
      return this->getObject(index, QRF_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * What User Qualifier
   */

  ST* getQRF_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_4);
  }

  ST* getWhatUserQualifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_4);
  }

  bool isQRF_4(size_t index = 0) {
    try {
      return this->getObject(index, QRF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhatUserQualifier(size_t index = 0) {
    try {
      return this->getObject(index, QRF_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other QRY Subject Filter
   */

  ST* getQRF_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_5);
  }

  ST* getOtherQRYSubjectFilter(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, QRF_5);
  }

  bool isQRF_5(size_t index = 0) {
    try {
      return this->getObject(index, QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherQRYSubjectFilter(size_t index = 0) {
    try {
      return this->getObject(index, QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Which Date/Time Qualifier
   */

  ID* getQRF_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_6);
  }

  ID* getWhichDateTimeQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_6);
  }

  bool isQRF_6(size_t index = 0) {
    try {
      return this->getObject(index, QRF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhichDateTimeQualifier(size_t index = 0) {
    try {
      return this->getObject(index, QRF_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Which Date/Time Status Qualifier
   */

  ID* getQRF_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_7);
  }

  ID* getWhichDateTimeStatusQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_7);
  }

  bool isQRF_7(size_t index = 0) {
    try {
      return this->getObject(index, QRF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhichDateTimeStatusQualifier(size_t index = 0) {
    try {
      return this->getObject(index, QRF_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Selection Qualifier
   */

  ID* getQRF_8(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_8);
  }

  ID* getDateTimeSelectionQualifier(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, QRF_8);
  }

  bool isQRF_8(size_t index = 0) {
    try {
      return this->getObject(index, QRF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeSelectionQualifier(size_t index = 0) {
    try {
      return this->getObject(index, QRF_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * When Quantity/Timing Qualifier
   */

  TQ* getQRF_9(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, QRF_9);
  }

  TQ* getWhenQuantityTimingQualifier(size_t index = 0) {
    return (TQ*)this->getObjectSafe(index, QRF_9);
  }

  bool isQRF_9(size_t index = 0) {
    try {
      return this->getObject(index, QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isWhenQuantityTimingQualifier(size_t index = 0) {
    try {
      return this->getObject(index, QRF_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Search Confidence Threshold
   */

  NM* getQRF_10(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRF_10);
  }

  NM* getSearchConfidenceThreshold(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, QRF_10);
  }

  bool isQRF_10(size_t index = 0) {
    try {
      return this->getObject(index, QRF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSearchConfidenceThreshold(size_t index = 0) {
    try {
      return this->getObject(index, QRF_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of QRF */

} /* End of namespace HL7_24 */
#endif /* __QRF_v24_H__ */
