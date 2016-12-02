/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __CE_0048_v24_H__
#define __CE_0048_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* CE with table 48 */
class CE_0048 : public HL7Data {
 public:
  CE_0048() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0048_1, /* identifier (ST) */
    CE_0048_2, /* text */
    CE_0048_3, /* name of coding system */
    CE_0048_4, /* alternate identifier (ST) */
    CE_0048_5, /* alternate text */
    CE_0048_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0048"; }
  CE_0048 *create() const { return new CE_0048(); }

 private:
  void init() {
    // setName("CE_0048");
    /* Init members */
    addObject<ST>(CE_0048_1, "CE_0048.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0048_1, "ADV"); /* Advice/diagnosis */
    addParams(CE_0048_1, "ANU"); /* Nursing unit lookup (returns patients in
				    beds, excluding empty beds) */
    addParams(CE_0048_1,
	      "APA"); /* Account number query, return matching visit */
    addParams(CE_0048_1,
	      "APM"); /* Medical record number query, returns visits for a
			 medical record number */
    addParams(CE_0048_1, "APN"); /* Patient name lookup */
    addParams(CE_0048_1, "APP"); /* Physician lookup */
    addParams(CE_0048_1, "ARN"); /* Nursing unit lookup (returns patients in
				    beds, including empty beds) */
    addParams(CE_0048_1, "CAN"); /* Cancel.  Used to cancel a query */
    addParams(CE_0048_1, "DEM"); /* Demographics */
    addParams(CE_0048_1, "FIN"); /* Financial */
    addParams(CE_0048_1, "GID"); /* Generate new identifier */
    addParams(CE_0048_1, "GOL"); /* Goals */
    addParams(CE_0048_1, "MRI"); /* Most recent inpatient */
    addParams(CE_0048_1, "MRO"); /* Most recent outpatient */
    addParams(CE_0048_1, "NCK"); /* Network clock */
    addParams(CE_0048_1, "NSC"); /* Network status change */
    addParams(CE_0048_1, "NST"); /* Network statistic */
    addParams(CE_0048_1, "ORD"); /* Order */
    addParams(CE_0048_1, "OTH"); /* Other */
    addParams(CE_0048_1, "PRB"); /* Problems */
    addParams(CE_0048_1, "PRO"); /* Procedure */
    addParams(CE_0048_1, "RAR"); /* Pharmacy administration information */
    addParams(CE_0048_1, "RDR"); /* Pharmacy dispense information */
    addParams(CE_0048_1, "RER"); /* Pharmacy encoded order information */
    addParams(CE_0048_1, "RES"); /* Result */
    addParams(CE_0048_1, "RGR"); /* Pharmacy give information */
    addParams(CE_0048_1, "ROR"); /* Pharmacy prescription information */
    addParams(
	CE_0048_1, "SAL"); /* All schedule related information, including open
			      slots, booked slots, blocked slots */
    addParams(CE_0048_1, "SBK"); /* Booked slots on the identified schedule */
    addParams(CE_0048_1, "SBL"); /* Blocked slots on the identified schedule */
    addParams(CE_0048_1, "SOF"); /* First open slot on the identified schedule
				    after the start date/time */
    addParams(CE_0048_1, "SOP"); /* Open slots on the identified schedule */
    addParams(CE_0048_1,
	      "SSA"); /* Time slots available for a single appointment */
    addParams(CE_0048_1,
	      "SSR"); /* Time slots available for a recurring appointment */
    addParams(CE_0048_1, "STA"); /* Status */
    addParams(CE_0048_1, "VXI"); /* Vaccine Information */
    addParams(CE_0048_1, "XID"); /* Get cross-referenced identifiers */
    addObject<ST>(CE_0048_2, "CE_0048.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0048_3, "CE_0048.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0048_4, "CE_0048.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0048_5, "CE_0048.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0048_6, "CE_0048.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0048_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_1);
  }

  bool isCE_0048_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0048_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_2);
  }

  bool isCE_0048_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0048_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0048_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0048_3);
  }

  bool isCE_0048_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0048_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_4);
  }

  bool isCE_0048_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0048_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0048_5);
  }

  bool isCE_0048_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0048_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0048_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0048_6);
  }

  bool isCE_0048_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0048_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0048 */

} /* End HL7_24 */

#endif /*__CE_0048_v24_H__ */
