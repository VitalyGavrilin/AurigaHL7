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


#ifndef __NMR_N01__24_H__
#define __NMR_N01__24_H__

#include "../../common/Util.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NCK.h"
#include "../segment/NSC.h"
#include "../segment/NST.h"
#include "../segment/NTE.h"
#include "../segment/QRD.h"

namespace HL7_24 {

/* Internal structures/groups */
struct
    NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT; /* CLOCK_AND_STATS_WITH_NOTES_ALT */

/* CLOCK_AND_STATS_WITH_NOTES_ALT */
struct NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT : public HL7Group {
  NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMR_N01_NCK_11,
    NMR_N01_NTE_15,
    NMR_N01_NST_19,
    NMR_N01_NTE_23,
    NMR_N01_NSC_27,
    NMR_N01_NTE_31,
    FIELD_ID_MAX
  };

  const char* className() const {
    return "NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT";
  }
  NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT* create() const {
    return new NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT();
  }

 private:
  /* Initialize object */
  void init() {
    setName("NMR_N01.CLOCK_AND_STATS_WITH_NOTES_ALT");
    addObject<NCK>(NMR_N01_NCK_11, "NCK.11", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(NMR_N01_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
    addObject<NST>(NMR_N01_NST_19, "NST.19", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(NMR_N01_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
    addObject<NSC>(NMR_N01_NSC_27, "NSC.27", HL7::optional,
		   HL7::repetition_off);
    addObject<NTE>(NMR_N01_NTE_31, "NTE.31", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NCK* getNCK_11(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMR_N01_NCK_11);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMR_N01_NTE_15);
  }
  NST* getNST_19(size_t index = 0) {
    return (NST*)this->getObjectSafe(index, NMR_N01_NST_19);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMR_N01_NTE_23);
  }
  NSC* getNSC_27(size_t index = 0) {
    return (NSC*)this->getObjectSafe(index, NMR_N01_NSC_27);
  }
  NTE* getNTE_31(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMR_N01_NTE_31);
  }

  /* Checker list */
  bool isNCK_11(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NCK_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNST_19(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NST_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNSC_27(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NSC_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_31(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_NTE_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMR_N01_9 */

/* NMR_N01 */
struct NMR_N01 : public HL7Message {
  NMR_N01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMR_N01_MSH_1,
    NMR_N01_MSA_2,
    NMR_N01_ERR_4,
    NMR_N01_QRD_7,
    NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMR_N01"; }
  NMR_N01* create() const { return new NMR_N01(); }

  /* Initialize object */
  void init() {
    setName("NMR_N01");
    addObject<MSH>(NMR_N01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(NMR_N01_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(NMR_N01_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QRD>(NMR_N01_QRD_7, "QRD.7", HL7::optional, HL7::repetition_off);
    addObject<NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT>(
	NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT_9,
	"NMR_N01.CLOCK_AND_STATS_WITH_NOTES_ALT", HL7::initialized,
	HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, NMR_N01_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, NMR_N01_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, NMR_N01_ERR_4);
  }
  QRD* getQRD_7(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, NMR_N01_QRD_7);
  }
  NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT* getCLOCK_AND_STATS_WITH_NOTES_ALT(
      size_t index = 0) {
    return (NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT*)this->getObjectSafe(
	index, NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRD_7(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_QRD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCLOCK_AND_STATS_WITH_NOTES_ALT(size_t index = 0) {
    try {
      return this->getObject(index, NMR_N01_CLOCK_AND_STATS_WITH_NOTES_ALT_9) !=
	     NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMR_N01_ */
} /* namespace HL7_24 */
#endif /*  __NMR_N01__24_H__ */
