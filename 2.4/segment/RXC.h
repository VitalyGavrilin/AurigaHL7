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


#ifndef __RXC_v24_H__
#define __RXC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* Pharmacy/Treatment Component Order */
class RXC : public HL7Segment {
 public:
  RXC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RXC_1,
    RXC_2,
    RXC_3,
    RXC_4,
    RXC_5,
    RXC_6,
    RXC_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RXC"; }
  RXC* create() const { return new RXC(); }

 private:
  void init() {
    setName("RXC");
    /* Init members */
    addObject<ID>(RXC_1, "RXC.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXC_2, "RXC.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_3, "RXC.3", HL7::initialized, HL7::repetition_off);
    addObject<CE>(RXC_4, "RXC.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RXC_5, "RXC.5", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXC_6, "RXC.6", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXC_7, "RXC.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * RX Component Type
   */

  ID* getRXC_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXC_1);
  }

  ID* getRXComponentType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RXC_1);
  }

  bool isRXC_1(size_t index = 0) {
    try {
      return this->getObject(index, RXC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRXComponentType(size_t index = 0) {
    try {
      return this->getObject(index, RXC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Code
   */

  CE* getRXC_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_2);
  }

  CE* getComponentCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_2);
  }

  bool isRXC_2(size_t index = 0) {
    try {
      return this->getObject(index, RXC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentCode(size_t index = 0) {
    try {
      return this->getObject(index, RXC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Amount
   */

  NM* getRXC_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_3);
  }

  NM* getComponentAmount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_3);
  }

  bool isRXC_3(size_t index = 0) {
    try {
      return this->getObject(index, RXC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentAmount(size_t index = 0) {
    try {
      return this->getObject(index, RXC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Units
   */

  CE* getRXC_4(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_4);
  }

  CE* getComponentUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_4);
  }

  bool isRXC_4(size_t index = 0) {
    try {
      return this->getObject(index, RXC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Strength
   */

  NM* getRXC_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_5);
  }

  NM* getComponentStrength(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RXC_5);
  }

  bool isRXC_5(size_t index = 0) {
    try {
      return this->getObject(index, RXC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentStrength(size_t index = 0) {
    try {
      return this->getObject(index, RXC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Component Strength Units
   */

  CE* getRXC_6(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_6);
  }

  CE* getComponentStrengthUnits(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_6);
  }

  bool isRXC_6(size_t index = 0) {
    try {
      return this->getObject(index, RXC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComponentStrengthUnits(size_t index = 0) {
    try {
      return this->getObject(index, RXC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Supplementary Code
   */

  CE* getRXC_7(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_7);
  }

  CE* getSupplementaryCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXC_7);
  }

  bool isRXC_7(size_t index = 0) {
    try {
      return this->getObject(index, RXC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSupplementaryCode(size_t index = 0) {
    try {
      return this->getObject(index, RXC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXC */

} /* End of namespace HL7_24 */
#endif /* __RXC_v24_H__ */
