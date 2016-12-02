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


#ifndef __OSD_v24_H__
#define __OSD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* order sequence */
class OSD : public HL7Data {
 public:
  OSD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    OSD_1,  /* sequence/results flag */
    OSD_2,  /* placer order number: entity identifier */
    OSD_3,  /* placer order number: namespace ID */
    OSD_4,  /* filler order number: entity identifier */
    OSD_5,  /* filler order number: namespace ID */
    OSD_6,  /* sequence condition value */
    OSD_7,  /* maximum number of repeats */
    OSD_8,  /* placer order number: universal ID */
    OSD_9,  /* placer order number; universal ID type */
    OSD_10, /* filler order number: universal ID */
    OSD_11, /* filler order number: universal ID type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "OSD"; }
  OSD *create() const { return new OSD(); }

 private:
  void init() {
    // setName("OSD");
    /* Init members */
    addObject<ID>(OSD_1, "OSD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OSD_2, "OSD.2", HL7::initialized, HL7::repetition_off);
    addObject<IS>(OSD_3, "OSD.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OSD_4, "OSD.4", HL7::initialized, HL7::repetition_off);
    addObject<IS>(OSD_5, "OSD.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OSD_6, "OSD.6", HL7::initialized, HL7::repetition_off);
    addObject<NM>(OSD_7, "OSD.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OSD_8, "OSD.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OSD_9, "OSD.9", HL7::initialized, HL7::repetition_off);
    addObject<ST>(OSD_10, "OSD.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(OSD_11, "OSD.11", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * sequence/results flag
   */
  ID *getOSD_1(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_1);
  }

  ID *getSequenceResultsFlag(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_1);
  }

  bool isOSD_1(size_t index = 0) {
    try {
      return this->getObject(index, OSD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceResultsFlag(size_t index = 0) {
    try {
      return this->getObject(index, OSD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * placer order number: entity identifier
   */
  ST *getOSD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_2);
  }

  ST *getPlacerOrderNumberEntityIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_2);
  }

  bool isOSD_2(size_t index = 0) {
    try {
      return this->getObject(index, OSD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumberEntityIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OSD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * placer order number: namespace ID
   */
  IS *getOSD_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OSD_3);
  }

  IS *getPlacerOrderNumberNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OSD_3);
  }

  bool isOSD_3(size_t index = 0) {
    try {
      return this->getObject(index, OSD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumberNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, OSD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * filler order number: entity identifier
   */
  ST *getOSD_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_4);
  }

  ST *getFillerOrderNumberEntityIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_4);
  }

  bool isOSD_4(size_t index = 0) {
    try {
      return this->getObject(index, OSD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumberEntityIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, OSD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * filler order number: namespace ID
   */
  IS *getOSD_5(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OSD_5);
  }

  IS *getFillerOrderNumberNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, OSD_5);
  }

  bool isOSD_5(size_t index = 0) {
    try {
      return this->getObject(index, OSD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumberNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, OSD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sequence condition value
   */
  ST *getOSD_6(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_6);
  }

  ST *getSequenceConditionValue(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_6);
  }

  bool isOSD_6(size_t index = 0) {
    try {
      return this->getObject(index, OSD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSequenceConditionValue(size_t index = 0) {
    try {
      return this->getObject(index, OSD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * maximum number of repeats
   */
  NM *getOSD_7(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OSD_7);
  }

  NM *getMaximumNumberOfRepeats(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, OSD_7);
  }

  bool isOSD_7(size_t index = 0) {
    try {
      return this->getObject(index, OSD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMaximumNumberOfRepeats(size_t index = 0) {
    try {
      return this->getObject(index, OSD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * placer order number: universal ID
   */
  ST *getOSD_8(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_8);
  }

  ST *getPlacerOrderNumberUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_8);
  }

  bool isOSD_8(size_t index = 0) {
    try {
      return this->getObject(index, OSD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumberUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, OSD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * placer order number; universal ID type
   */
  ID *getOSD_9(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_9);
  }

  ID *getPlacerOrderNumberUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_9);
  }

  bool isOSD_9(size_t index = 0) {
    try {
      return this->getObject(index, OSD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumberUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, OSD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * filler order number: universal ID
   */
  ST *getOSD_10(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_10);
  }

  ST *getFillerOrderNumberUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, OSD_10);
  }

  bool isOSD_10(size_t index = 0) {
    try {
      return this->getObject(index, OSD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumberUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, OSD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * filler order number: universal ID type
   */
  ID *getOSD_11(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_11);
  }

  ID *getFillerOrderNumberUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, OSD_11);
  }

  bool isOSD_11(size_t index = 0) {
    try {
      return this->getObject(index, OSD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumberUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, OSD_11) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End OSD */

} /* End HL7_24 */

#endif /*__OSD_v24_H__ */
