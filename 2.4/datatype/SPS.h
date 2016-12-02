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


#ifndef __SPS_v24_H__
#define __SPS_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* specimen source */
class SPS : public HL7Data {
 public:
  SPS() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    SPS_1, /* specimen source name or code */
    SPS_2, /* additives */
    SPS_3, /* freetext */
    SPS_4, /* body site */
    SPS_5, /* site modifier */
    SPS_6, /* collection modifier method code */
    SPS_7, /* specimen role */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "SPS"; }
  SPS *create() const { return new SPS(); }

 private:
  void init() {
    // setName("SPS");
    /* Init members */
    addObject<CE>(SPS_1, "SPS.1", HL7::initialized, HL7::repetition_off);
    addObject<TX>(SPS_2, "SPS.2", HL7::initialized, HL7::repetition_off);
    addObject<TX>(SPS_3, "SPS.3", HL7::initialized, HL7::repetition_off);
    addObject<CE>(SPS_4, "SPS.4", HL7::initialized, HL7::repetition_off);
    addObject<CE>(SPS_5, "SPS.5", HL7::initialized, HL7::repetition_off);
    addObject<CE>(SPS_6, "SPS.6", HL7::initialized, HL7::repetition_off);
    addObject<CE>(SPS_7, "SPS.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * specimen source name or code
   */
  CE *getSPS_1(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_1);
  }

  CE *getSpecimenSourceNameOrCode(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_1);
  }

  bool isSPS_1(size_t index = 0) {
    try {
      return this->getObject(index, SPS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSourceNameOrCode(size_t index = 0) {
    try {
      return this->getObject(index, SPS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * additives
   */
  TX *getSPS_2(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, SPS_2);
  }

  TX *getAdditives(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, SPS_2);
  }

  bool isSPS_2(size_t index = 0) {
    try {
      return this->getObject(index, SPS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditives(size_t index = 0) {
    try {
      return this->getObject(index, SPS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * freetext
   */
  TX *getSPS_3(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, SPS_3);
  }

  TX *getFreetext(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, SPS_3);
  }

  bool isSPS_3(size_t index = 0) {
    try {
      return this->getObject(index, SPS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFreetext(size_t index = 0) {
    try {
      return this->getObject(index, SPS_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * body site
   */
  CE *getSPS_4(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_4);
  }

  CE *getBodySite(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_4);
  }

  bool isSPS_4(size_t index = 0) {
    try {
      return this->getObject(index, SPS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBodySite(size_t index = 0) {
    try {
      return this->getObject(index, SPS_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * site modifier
   */
  CE *getSPS_5(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_5);
  }

  CE *getSiteModifier(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_5);
  }

  bool isSPS_5(size_t index = 0) {
    try {
      return this->getObject(index, SPS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSiteModifier(size_t index = 0) {
    try {
      return this->getObject(index, SPS_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * collection modifier method code
   */
  CE *getSPS_6(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_6);
  }

  CE *getCollectionModifierMethodCode(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_6);
  }

  bool isSPS_6(size_t index = 0) {
    try {
      return this->getObject(index, SPS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCollectionModifierMethodCode(size_t index = 0) {
    try {
      return this->getObject(index, SPS_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * specimen role
   */
  CE *getSPS_7(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_7);
  }

  CE *getSpecimenRole(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, SPS_7);
  }

  bool isSPS_7(size_t index = 0) {
    try {
      return this->getObject(index, SPS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenRole(size_t index = 0) {
    try {
      return this->getObject(index, SPS_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End SPS */

} /* End HL7_24 */

#endif /*__SPS_v24_H__ */
