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


#ifndef __NMQ_N01__24_H__
#define __NMQ_N01__24_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/NCK.h"
#include "../segment/NSC.h"
#include "../segment/NST.h"
#include "../segment/QRD.h"
#include "../segment/QRF.h"

namespace HL7_24 {

/* Internal structures/groups */
struct NMQ_N01_QRY_WITH_DETAIL;      /* QRY_WITH_DETAIL */
struct NMQ_N01_CLOCK_AND_STATISTICS; /* CLOCK_AND_STATISTICS */

/* QRY_WITH_DETAIL */
struct NMQ_N01_QRY_WITH_DETAIL : public HL7Group {
  NMQ_N01_QRY_WITH_DETAIL() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { NMQ_N01_QRD_3, NMQ_N01_QRF_5, FIELD_ID_MAX };

  const char* className() const { return "NMQ_N01_QRY_WITH_DETAIL"; }
  NMQ_N01_QRY_WITH_DETAIL* create() const {
    return new NMQ_N01_QRY_WITH_DETAIL();
  }

 private:
  /* Initialize object */
  void init() {
    setName("NMQ_N01.QRY_WITH_DETAIL");
    addObject<QRD>(NMQ_N01_QRD_3, "QRD.3", HL7::initialized,
		   HL7::repetition_off);
    addObject<QRF>(NMQ_N01_QRF_5, "QRF.5", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  QRD* getQRD_3(size_t index = 0) {
    return (QRD*)this->getObjectSafe(index, NMQ_N01_QRD_3);
  }
  QRF* getQRF_5(size_t index = 0) {
    return (QRF*)this->getObjectSafe(index, NMQ_N01_QRF_5);
  }

  /* Checker list */
  bool isQRD_3(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_QRD_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRF_5(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_QRF_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMQ_N01_2 */

/* CLOCK_AND_STATISTICS */
struct NMQ_N01_CLOCK_AND_STATISTICS : public HL7Group {
  NMQ_N01_CLOCK_AND_STATISTICS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMQ_N01_NCK_10,
    NMQ_N01_NST_13,
    NMQ_N01_NSC_16,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMQ_N01_CLOCK_AND_STATISTICS"; }
  NMQ_N01_CLOCK_AND_STATISTICS* create() const {
    return new NMQ_N01_CLOCK_AND_STATISTICS();
  }

  /* Initialize object */
  void init() {
    setName("NMQ_N01.CLOCK_AND_STATISTICS");
    addObject<NCK>(NMQ_N01_NCK_10, "NCK.10", HL7::optional,
		   HL7::repetition_off);
    addObject<NST>(NMQ_N01_NST_13, "NST.13", HL7::optional,
		   HL7::repetition_off);
    addObject<NSC>(NMQ_N01_NSC_16, "NSC.16", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  NCK* getNCK_10(size_t index = 0) {
    return (NCK*)this->getObjectSafe(index, NMQ_N01_NCK_10);
  }
  NST* getNST_13(size_t index = 0) {
    return (NST*)this->getObjectSafe(index, NMQ_N01_NST_13);
  }
  NSC* getNSC_16(size_t index = 0) {
    return (NSC*)this->getObjectSafe(index, NMQ_N01_NSC_16);
  }

  /* Checker list */
  bool isNCK_10(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_NCK_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNST_13(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_NST_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNSC_16(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_NSC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMQ_N01_8 */

/* NMQ_N01 */
struct NMQ_N01 : public HL7Message {
  NMQ_N01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    NMQ_N01_MSH_1,
    NMQ_N01_QRY_WITH_DETAIL_2,
    NMQ_N01_CLOCK_AND_STATISTICS_8,
    FIELD_ID_MAX
  };

  const char* className() const { return "NMQ_N01"; }
  NMQ_N01* create() const { return new NMQ_N01(); }

  /* Initialize object */
  void init() {
    setName("NMQ_N01");
    addObject<MSH>(NMQ_N01_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<NMQ_N01_QRY_WITH_DETAIL>(NMQ_N01_QRY_WITH_DETAIL_2,
				       "NMQ_N01.QRY_WITH_DETAIL", HL7::optional,
				       HL7::repetition_off);
    addObject<NMQ_N01_CLOCK_AND_STATISTICS>(
	NMQ_N01_CLOCK_AND_STATISTICS_8, "NMQ_N01.CLOCK_AND_STATISTICS",
	HL7::initialized, HL7::repetition_on);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, NMQ_N01_MSH_1);
  }
  NMQ_N01_QRY_WITH_DETAIL* getQRY_WITH_DETAIL(size_t index = 0) {
    return (NMQ_N01_QRY_WITH_DETAIL*)this->getObjectSafe(
	index, NMQ_N01_QRY_WITH_DETAIL_2);
  }
  NMQ_N01_CLOCK_AND_STATISTICS* getCLOCK_AND_STATISTICS(size_t index = 0) {
    return (NMQ_N01_CLOCK_AND_STATISTICS*)this->getObjectSafe(
	index, NMQ_N01_CLOCK_AND_STATISTICS_8);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRY_WITH_DETAIL(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_QRY_WITH_DETAIL_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCLOCK_AND_STATISTICS(size_t index = 0) {
    try {
      return this->getObject(index, NMQ_N01_CLOCK_AND_STATISTICS_8) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* NMQ_N01_ */
} /* namespace HL7_24 */
#endif /*  __NMQ_N01__24_H__ */
