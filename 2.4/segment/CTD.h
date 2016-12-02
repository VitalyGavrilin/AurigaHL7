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


#ifndef __CTD_v24_H__
#define __CTD_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0131.h"
#include "../datatype/CE_0185.h"
#include "../datatype/PI.h"
#include "../datatype/PL.h"
#include "../datatype/XAD.h"
#include "../datatype/XPN.h"
#include "../datatype/XTN.h"

namespace HL7_24 {

/* Contact Data */
class CTD : public HL7Segment {
 public:
  CTD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CTD_1,
    CTD_2,
    CTD_3,
    CTD_4,
    CTD_5,
    CTD_6,
    CTD_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CTD"; }
  CTD* create() const { return new CTD(); }

 private:
  void init() {
    setName("CTD");
    /* Init members */
    addObject<CE_0131>(CTD_1, "CTD.1", HL7::initialized, HL7::repetition_on);
    addObject<XPN>(CTD_2, "CTD.2", HL7::optional, HL7::repetition_on);
    addObject<XAD>(CTD_3, "CTD.3", HL7::optional, HL7::repetition_on);
    addObject<PL>(CTD_4, "CTD.4", HL7::optional, HL7::repetition_off);
    addObject<XTN>(CTD_5, "CTD.5", HL7::optional, HL7::repetition_on);
    addObject<CE_0185>(CTD_6, "CTD.6", HL7::optional, HL7::repetition_off);
    addObject<PI>(CTD_7, "CTD.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Contact Role
   */

  CE_0131* getCTD_1(size_t index = 0) {
    return (CE_0131*)this->getObjectSafe(index, CTD_1);
  }

  CE_0131* getContactRole(size_t index = 0) {
    return (CE_0131*)this->getObjectSafe(index, CTD_1);
  }

  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactRole(size_t index = 0) {
    try {
      return this->getObject(index, CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Name
   */

  XPN* getCTD_2(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTD_2);
  }

  XPN* getContactName(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, CTD_2);
  }

  bool isCTD_2(size_t index = 0) {
    try {
      return this->getObject(index, CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactName(size_t index = 0) {
    try {
      return this->getObject(index, CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Address
   */

  XAD* getCTD_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CTD_3);
  }

  XAD* getContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, CTD_3);
  }

  bool isCTD_3(size_t index = 0) {
    try {
      return this->getObject(index, CTD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, CTD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Location
   */

  PL* getCTD_4(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, CTD_4);
  }

  PL* getContactLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, CTD_4);
  }

  bool isCTD_4(size_t index = 0) {
    try {
      return this->getObject(index, CTD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactLocation(size_t index = 0) {
    try {
      return this->getObject(index, CTD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Communication Information
   */

  XTN* getCTD_5(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CTD_5);
  }

  XTN* getContactCommunicationInformation(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, CTD_5);
  }

  bool isCTD_5(size_t index = 0) {
    try {
      return this->getObject(index, CTD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactCommunicationInformation(size_t index = 0) {
    try {
      return this->getObject(index, CTD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Preferred Method of Contact
   */

  CE_0185* getCTD_6(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, CTD_6);
  }

  CE_0185* getPreferredMethodOfContact(size_t index = 0) {
    return (CE_0185*)this->getObjectSafe(index, CTD_6);
  }

  bool isCTD_6(size_t index = 0) {
    try {
      return this->getObject(index, CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPreferredMethodOfContact(size_t index = 0) {
    try {
      return this->getObject(index, CTD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Contact Identifiers
   */

  PI* getCTD_7(size_t index = 0) {
    return (PI*)this->getObjectSafe(index, CTD_7);
  }

  PI* getContactIdentifiers(size_t index = 0) {
    return (PI*)this->getObjectSafe(index, CTD_7);
  }

  bool isCTD_7(size_t index = 0) {
    try {
      return this->getObject(index, CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContactIdentifiers(size_t index = 0) {
    try {
      return this->getObject(index, CTD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CTD */

} /* End of namespace HL7_24 */
#endif /* __CTD_v24_H__ */
