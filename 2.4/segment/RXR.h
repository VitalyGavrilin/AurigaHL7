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


#ifndef __RXR_v24_H__
#define __RXR_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CE_0162.h"
#include "../datatype/CE_0163.h"
#include "../datatype/CE_0164.h"
#include "../datatype/CE_0165.h"

namespace HL7_24 {

/* Pharmacy/Treatment Route */
class RXR : public HL7Segment {
 public:
  RXR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { RXR_1, RXR_2, RXR_3, RXR_4, RXR_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "RXR"; }
  RXR* create() const { return new RXR(); }

 private:
  void init() {
    setName("RXR");
    /* Init members */
    addObject<CE_0162>(RXR_1, "RXR.1", HL7::initialized, HL7::repetition_off);
    addObject<CE_0163>(RXR_2, "RXR.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0164>(RXR_3, "RXR.3", HL7::optional, HL7::repetition_off);
    addObject<CE_0165>(RXR_4, "RXR.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(RXR_5, "RXR.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Route
   */

  CE_0162* getRXR_1(size_t index = 0) {
    return (CE_0162*)this->getObjectSafe(index, RXR_1);
  }

  CE_0162* getRoute(size_t index = 0) {
    return (CE_0162*)this->getObjectSafe(index, RXR_1);
  }

  bool isRXR_1(size_t index = 0) {
    try {
      return this->getObject(index, RXR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoute(size_t index = 0) {
    try {
      return this->getObject(index, RXR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Site
   */

  CE_0163* getRXR_2(size_t index = 0) {
    return (CE_0163*)this->getObjectSafe(index, RXR_2);
  }

  CE_0163* getAdministrationSite(size_t index = 0) {
    return (CE_0163*)this->getObjectSafe(index, RXR_2);
  }

  bool isRXR_2(size_t index = 0) {
    try {
      return this->getObject(index, RXR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationSite(size_t index = 0) {
    try {
      return this->getObject(index, RXR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Device
   */

  CE_0164* getRXR_3(size_t index = 0) {
    return (CE_0164*)this->getObjectSafe(index, RXR_3);
  }

  CE_0164* getAdministrationDevice(size_t index = 0) {
    return (CE_0164*)this->getObjectSafe(index, RXR_3);
  }

  bool isRXR_3(size_t index = 0) {
    try {
      return this->getObject(index, RXR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationDevice(size_t index = 0) {
    try {
      return this->getObject(index, RXR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Administration Method
   */

  CE_0165* getRXR_4(size_t index = 0) {
    return (CE_0165*)this->getObjectSafe(index, RXR_4);
  }

  CE_0165* getAdministrationMethod(size_t index = 0) {
    return (CE_0165*)this->getObjectSafe(index, RXR_4);
  }

  bool isRXR_4(size_t index = 0) {
    try {
      return this->getObject(index, RXR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdministrationMethod(size_t index = 0) {
    try {
      return this->getObject(index, RXR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Routing Instruction
   */

  CE* getRXR_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXR_5);
  }

  CE* getRoutingInstruction(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, RXR_5);
  }

  bool isRXR_5(size_t index = 0) {
    try {
      return this->getObject(index, RXR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRoutingInstruction(size_t index = 0) {
    try {
      return this->getObject(index, RXR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RXR */

} /* End of namespace HL7_24 */
#endif /* __RXR_v24_H__ */
