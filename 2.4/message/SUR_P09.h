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


#ifndef __SUR_P09__24_H__
#define __SUR_P09__24_H__

#include "../../common/Util.h"
#include "../segment/FAC.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PDC.h"
#include "../segment/PSH.h"

namespace HL7_24 {

/* Internal structures/groups */
struct SUR_P09_PRODUCT;		/* PRODUCT */
struct SUR_P09_FACILITY_DETAIL; /* FACILITY_DETAIL */
struct SUR_P09_FACILITY;	/* FACILITY */

/* PRODUCT */
struct SUR_P09_PRODUCT : public HL7Group {
  SUR_P09_PRODUCT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SUR_P09_PSH_5, SUR_P09_PDC_6, FIELD_ID_MAX };

  const char* className() const { return "SUR_P09_PRODUCT"; }
  SUR_P09_PRODUCT* create() const { return new SUR_P09_PRODUCT(); }

 private:
  /* Initialize object */
  void init() {
    setName("SUR_P09.PRODUCT");
    addObject<PSH>(SUR_P09_PSH_5, "PSH.5", HL7::initialized,
		   HL7::repetition_off);
    addObject<PDC>(SUR_P09_PDC_6, "PDC.6", HL7::initialized,
		   HL7::repetition_off);
  }

 public:
  /* Getters list */
  PSH* getPSH_5(size_t index = 0) {
    return (PSH*)this->getObjectSafe(index, SUR_P09_PSH_5);
  }
  PDC* getPDC_6(size_t index = 0) {
    return (PDC*)this->getObjectSafe(index, SUR_P09_PDC_6);
  }

  /* Checker list */
  bool isPSH_5(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_PSH_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDC_6(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_PDC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SUR_P09_4 */

/* FACILITY_DETAIL */
struct SUR_P09_FACILITY_DETAIL : public HL7Group {
  SUR_P09_FACILITY_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SUR_P09_FAC_10,
    SUR_P09_PDC_11,
    SUR_P09_NTE_12,
    FIELD_ID_MAX
  };

  const char* className() const { return "SUR_P09_FACILITY_DETAIL"; }
  SUR_P09_FACILITY_DETAIL* create() const {
    return new SUR_P09_FACILITY_DETAIL();
  }

  /* Initialize object */
  void init() {
    setName("SUR_P09.FACILITY_DETAIL");
    addObject<FAC>(SUR_P09_FAC_10, "FAC.10", HL7::initialized,
		   HL7::repetition_off);
    addObject<PDC>(SUR_P09_PDC_11, "PDC.11", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(SUR_P09_NTE_12, "NTE.12", HL7::initialized,
		   HL7::repetition_off);
  }

  /* Getters list */
  FAC* getFAC_10(size_t index = 0) {
    return (FAC*)this->getObjectSafe(index, SUR_P09_FAC_10);
  }
  PDC* getPDC_11(size_t index = 0) {
    return (PDC*)this->getObjectSafe(index, SUR_P09_PDC_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, SUR_P09_NTE_12);
  }

  /* Checker list */
  bool isFAC_10(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_FAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPDC_11(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_PDC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SUR_P09_9 */

/* FACILITY */
struct SUR_P09_FACILITY : public HL7Group {
  SUR_P09_FACILITY() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SUR_P09_FAC_3,
    SUR_P09_PRODUCT_4,
    SUR_P09_PSH_8,
    SUR_P09_FACILITY_DETAIL_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "SUR_P09_FACILITY"; }
  SUR_P09_FACILITY* create() const { return new SUR_P09_FACILITY(); }

  /* Initialize object */
  void init() {
    setName("SUR_P09.FACILITY");
    addObject<FAC>(SUR_P09_FAC_3, "FAC.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<SUR_P09_PRODUCT>(SUR_P09_PRODUCT_4, "SUR_P09.PRODUCT",
			       HL7::initialized, HL7::repetition_on);
    addObject<PSH>(SUR_P09_PSH_8, "PSH.8", HL7::initialized,
		   HL7::repetition_off);
    addObject<SUR_P09_FACILITY_DETAIL>(SUR_P09_FACILITY_DETAIL_9,
				       "SUR_P09.FACILITY_DETAIL",
				       HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  FAC* getFAC_3(size_t index = 0) {
    return (FAC*)this->getObjectSafe(index, SUR_P09_FAC_3);
  }
  SUR_P09_PRODUCT* getPRODUCT(size_t index = 0) {
    return (SUR_P09_PRODUCT*)this->getObjectSafe(index, SUR_P09_PRODUCT_4);
  }
  PSH* getPSH_8(size_t index = 0) {
    return (PSH*)this->getObjectSafe(index, SUR_P09_PSH_8);
  }
  SUR_P09_FACILITY_DETAIL* getFACILITY_DETAIL(size_t index = 0) {
    return (SUR_P09_FACILITY_DETAIL*)this->getObjectSafe(
	index, SUR_P09_FACILITY_DETAIL_9);
  }

  /* Checker list */
  bool isFAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_FAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRODUCT(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_PRODUCT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSH_8(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_PSH_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFACILITY_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_FACILITY_DETAIL_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SUR_P09_2 */

/* SUR_P09 */
struct SUR_P09 : public HL7Message {
  SUR_P09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { SUR_P09_MSH_1, SUR_P09_FACILITY_2, FIELD_ID_MAX };

  const char* className() const { return "SUR_P09"; }
  SUR_P09* create() const { return new SUR_P09(); }

  /* Initialize object */
  void init() {
    setName("SUR_P09");
    addObject<MSH>(SUR_P09_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<SUR_P09_FACILITY>(SUR_P09_FACILITY_2, "SUR_P09.FACILITY",
				HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SUR_P09_MSH_1);
  }
  SUR_P09_FACILITY* getFACILITY(size_t index = 0) {
    return (SUR_P09_FACILITY*)this->getObjectSafe(index, SUR_P09_FACILITY_2);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isFACILITY(size_t index = 0) {
    try {
      return this->getObject(index, SUR_P09_FACILITY_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SUR_P09_ */
} /* namespace HL7_24 */
#endif /*  __SUR_P09__24_H__ */
