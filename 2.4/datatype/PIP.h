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


#ifndef __PIP_v24_H__
#define __PIP_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/DT.h"
#include "../datatype/EI.h"

namespace HL7_24 {

/* Privileges */
class PIP : public HL7Data {
 public:
  PIP() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PIP_1, /* privilege */
    PIP_2, /* privilege class */
    PIP_3, /* expiration date */
    PIP_4, /* activation date */
    PIP_5, /* facility (EI) */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PIP"; }
  PIP *create() const { return new PIP(); }

 private:
  void init() {
    // setName("PIP");
    /* Init members */
    addObject<CE>(PIP_1, "PIP.1", HL7::initialized, HL7::repetition_off);
    addObject<CE>(PIP_2, "PIP.2", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PIP_3, "PIP.3", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PIP_4, "PIP.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PIP_5, "PIP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * privilege
   */
  CE *getPIP_1(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PIP_1);
  }

  CE *getPrivilege(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PIP_1);
  }

  bool isPIP_1(size_t index = 0) {
    try {
      return this->getObject(index, PIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrivilege(size_t index = 0) {
    try {
      return this->getObject(index, PIP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * privilege class
   */
  CE *getPIP_2(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PIP_2);
  }

  CE *getPrivilegeClass(size_t index = 0) {
    return (CE *)this->getObjectSafe(index, PIP_2);
  }

  bool isPIP_2(size_t index = 0) {
    try {
      return this->getObject(index, PIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrivilegeClass(size_t index = 0) {
    try {
      return this->getObject(index, PIP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * expiration date
   */
  DT *getPIP_3(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_3);
  }

  DT *getExpirationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_3);
  }

  bool isPIP_3(size_t index = 0) {
    try {
      return this->getObject(index, PIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, PIP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * activation date
   */
  DT *getPIP_4(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_4);
  }

  DT *getActivationDate(size_t index = 0) {
    return (DT *)this->getObjectSafe(index, PIP_4);
  }

  bool isPIP_4(size_t index = 0) {
    try {
      return this->getObject(index, PIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActivationDate(size_t index = 0) {
    try {
      return this->getObject(index, PIP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * facility (EI)
   */
  EI *getPIP_5(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PIP_5);
  }

  EI *getFacility(size_t index = 0) {
    return (EI *)this->getObjectSafe(index, PIP_5);
  }

  bool isPIP_5(size_t index = 0) {
    try {
      return this->getObject(index, PIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFacility(size_t index = 0) {
    try {
      return this->getObject(index, PIP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PIP */

} /* End HL7_24 */

#endif /*__PIP_v24_H__ */
