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


#ifndef __CE_0278_v24_H__
#define __CE_0278_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0278 : public HL7Data {
 public:
  CE_0278() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0278_1, /* identifier (ST) */
    CE_0278_2, /* text */
    CE_0278_3, /* name of coding system */
    CE_0278_4, /* alternate identifier (ST) */
    CE_0278_5, /* alternate text */
    CE_0278_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0278"; }
  CE_0278 *create() const { return new CE_0278(); }

 private:
  void init() {
    // setName("CE_0278");
    /* Init members */
    addObject<ST>(CE_0278_1, "CE_0278.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0278_1,
	      "Blocked"); /* The indicated time slot(s) is(are) blocked */
    addParams(CE_0278_1, "Booked"); /* The indicated appointment is booked */
    addParams(CE_0278_1,
	      "Cancelled"); /* The indicated appointment was stopped from
			       occurring (canceled prior to starting) */
    addParams(CE_0278_1,
	      "Complete"); /* The indicated appointment has completed normally
			      (was not discontinued, canceled, or deleted) */
    addParams(
	CE_0278_1,
	"Dc"); /* The indicated appointment was discontinued (DC'ed while in
		  progress, discontinued parent appointment, or discontinued
		  child appointment) */
    addParams(CE_0278_1, "Deleted");  /* The indicated appointment was deleted
					 from the filler application */
    addParams(CE_0278_1, "Overbook"); /* The appointment has been confirmed;
					 however it is confirmed in an
					 overbooked state */
    addParams(CE_0278_1,
	      "Pending"); /* Appointment has not yet been confirmed */
    addParams(CE_0278_1,
	      "Started"); /* The indicated appointment has begun and is
			     currently in progress */
    addParams(
	CE_0278_1,
	"Waitlist"); /* Appointment has been placed on a waiting list for a
			particular slot, or set of slots */
    addObject<ST>(CE_0278_2, "CE_0278.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0278_3, "CE_0278.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0278_4, "CE_0278.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0278_5, "CE_0278.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0278_6, "CE_0278.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0278_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_1);
  }

  bool isCE_0278_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0278_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_2);
  }

  bool isCE_0278_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0278_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0278_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0278_3);
  }

  bool isCE_0278_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0278_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_4);
  }

  bool isCE_0278_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0278_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0278_5);
  }

  bool isCE_0278_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0278_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0278_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0278_6);
  }

  bool isCE_0278_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0278_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0278 */

} /* End HL7_24 */

#endif /*__CE_0278_v24_H__ */
