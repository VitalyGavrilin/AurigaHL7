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


#ifndef __NMD_N02__24_H__
#define __NMD_N02__24_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/NCK.h"
#include "../segment/NSC.h"
#include "../segment/NST.h"
#include "../segment/NTE.h"

namespace HL7_24 {

/* Internal structures/groups */
struct NMD_N02_CLOCK;			   /* CLOCK */
struct NMD_N02_APP_STATS;		   /* APP_STATS */
struct NMD_N02_APP_STATUS;		   /* APP_STATUS */
struct NMD_N02_CLOCK_AND_STATS_WITH_NOTES; /* CLOCK_AND_STATS_WITH_NOTES */

/* CLOCK */
struct NMD_N02_CLOCK : public HL7Group {
  NMD_N02_CLOCK() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { NMD_N02_NCK_4, NMD_N02_NTE_7, FIELD_ID_MAX };

  const char* className() const { return "NMD_N02_CLOCK"; }
  NMD_N02_CLOCK* create() const { return new NMD_N02_CLOCK(); }

 private:
  /* Initialize object */
  void init() {
    setName("NMD_N02.CLOCK");
    addObject<NCK>(NMD_N02_NCK_4, "NCK.4", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(NMD_N02_NTE_7, "NTE.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NCK* getNCK_4(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMD_N02_NCK_4);
  }
  NTE* getNTE_7(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NTE_7);
  }

  /* Checker list */
  bool isNCK_4(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NCK_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_7(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NTE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_3 */

/* APP_STATS */
struct NMD_N02_APP_STATS : public HL7Group {
  NMD_N02_APP_STATS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { NMD_N02_NST_12, NMD_N02_NTE_15, FIELD_ID_MAX };

  const char* className() const { return "NMD_N02_APP_STATS"; }
  NMD_N02_APP_STATS* create() const { return new NMD_N02_APP_STATS(); }

  /* Initialize object */
  void init() {
    setName("NMD_N02.APP_STATS");
    addObject<NST>(NMD_N02_NST_12, "NST.12", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(NMD_N02_NTE_15, "NTE.15", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  NST* getNST_12(size_t index = 0) {
    return (NST*)this->getObjectSafe(index, NMD_N02_NST_12);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NTE_15);
  }

  /* Checker list */
  bool isNST_12(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NST_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_11 */

/* APP_STATUS */
struct NMD_N02_APP_STATUS : public HL7Group {
  NMD_N02_APP_STATUS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { NMD_N02_NSC_20, NMD_N02_NTE_23, FIELD_ID_MAX };

  const char* className() const { return "NMD_N02_APP_STATUS"; }
  NMD_N02_APP_STATUS* create() const { return new NMD_N02_APP_STATUS(); }

  /* Initialize object */
  void init() {
    setName("NMD_N02.APP_STATUS");
    addObject<NSC>(NMD_N02_NSC_20, "NSC.20", HL7::initialized,
		   HL7::repetition_off);
    addObject<NTE>(NMD_N02_NTE_23, "NTE.23", HL7::optional, HL7::repetition_on);
  }

  /* Getters list */
  NSC* getNSC_20(size_t index = 0) {
    return (NSC*)this->getObjectSafe(index, NMD_N02_NSC_20);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, NMD_N02_NTE_23);
  }

  /* Checker list */
  bool isNSC_20(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NSC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_19 */

/* CLOCK_AND_STATS_WITH_NOTES */
struct NMD_N02_CLOCK_AND_STATS_WITH_NOTES : public HL7Group {
  NMD_N02_CLOCK_AND_STATS_WITH_NOTES() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMD_N02_CLOCK_3,
    NMD_N02_APP_STATS_11,
    NMD_N02_APP_STATUS_19,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMD_N02_CLOCK_AND_STATS_WITH_NOTES"; }
  NMD_N02_CLOCK_AND_STATS_WITH_NOTES* create() const {
    return new NMD_N02_CLOCK_AND_STATS_WITH_NOTES();
  }

  /* Initialize object */
  void init() {
    setName("NMD_N02.CLOCK_AND_STATS_WITH_NOTES");
    addObject<NMD_N02_CLOCK>(NMD_N02_CLOCK_3, "NMD_N02.CLOCK", HL7::optional,
			     HL7::repetition_off);
    addObject<NMD_N02_APP_STATS>(NMD_N02_APP_STATS_11, "NMD_N02.APP_STATS",
				 HL7::optional, HL7::repetition_off);
    addObject<NMD_N02_APP_STATUS>(NMD_N02_APP_STATUS_19, "NMD_N02.APP_STATUS",
				  HL7::optional, HL7::repetition_off);
  }

  /* Getters list */
  NMD_N02_CLOCK* getCLOCK(size_t index = 0) {
    return (NMD_N02_CLOCK*)this->getObjectSafe(index, NMD_N02_CLOCK_3);
  }
  NMD_N02_APP_STATS* getAPP_STATS(size_t index = 0) {
    return (NMD_N02_APP_STATS*)this->getObjectSafe(index, NMD_N02_APP_STATS_11);
  }
  NMD_N02_APP_STATUS* getAPP_STATUS(size_t index = 0) {
    return (NMD_N02_APP_STATUS*)this->getObjectSafe(index,
						    NMD_N02_APP_STATUS_19);
  }

  /* Checker list */
  bool isCLOCK(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_CLOCK_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPP_STATS(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_APP_STATS_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAPP_STATUS(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_APP_STATUS_19) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_2 */

/* NMD_N02 */
struct NMD_N02 : public HL7Message {
  NMD_N02() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMD_N02_MSH_1,
    NMD_N02_CLOCK_AND_STATS_WITH_NOTES_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMD_N02"; }
  NMD_N02* create() const { return new NMD_N02(); }

  /* Initialize object */
  void init() {
    setName("NMD_N02");
    addObject<MSH>(NMD_N02_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NMD_N02_CLOCK_AND_STATS_WITH_NOTES>(
	NMD_N02_CLOCK_AND_STATS_WITH_NOTES_2,
	"NMD_N02.CLOCK_AND_STATS_WITH_NOTES", HL7::initialized,
	HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, NMD_N02_MSH_1);
  }
  NMD_N02_CLOCK_AND_STATS_WITH_NOTES* getCLOCK_AND_STATS_WITH_NOTES(
      size_t index = 0) {
    return (NMD_N02_CLOCK_AND_STATS_WITH_NOTES*)this->getObjectSafe(
	index, NMD_N02_CLOCK_AND_STATS_WITH_NOTES_2);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCLOCK_AND_STATS_WITH_NOTES(size_t index = 0) {
    try {
      return this->getObject(index, NMD_N02_CLOCK_AND_STATS_WITH_NOTES_2) !=
	     NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMD_N02_ */
} /* namespace HL7_24 */
#endif /*  __NMD_N02__24_H__ */
