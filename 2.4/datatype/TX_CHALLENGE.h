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


#ifndef __TX_CHALLENGE_v24_H__
#define __TX_CHALLENGE_v24_H__

#include "../../common/Util.h"
#include "../datatype/TX.h"

namespace HL7_24 {

/* challenge information */
class TX_CHALLENGE : public HL7Data {
 public:
  TX_CHALLENGE() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    TX_CHALLENGE_1, /*  */
    TX_CHALLENGE_2, /*  */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "TX_CHALLENGE"; }
  TX_CHALLENGE *create() const { return new TX_CHALLENGE(); }

 private:
  void init() {
    // setName("TX_CHALLENGE");
    /* Init members */
    addObject<TX>(TX_CHALLENGE_1, "TX_CHALLENGE.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(TX_CHALLENGE_1, "10D");  /* 10 days */
    addParams(TX_CHALLENGE_1, "10M");  /* 10 minutes post challenge */
    addParams(TX_CHALLENGE_1, "12H");  /* 12 hours post challenge */
    addParams(TX_CHALLENGE_1, "15M");  /* 15 minutes post challenge */
    addParams(TX_CHALLENGE_1, "1H");   /* 1 hour post challenge */
    addParams(TX_CHALLENGE_1, "1L");   /* 1 month (30 days) post challenge */
    addParams(TX_CHALLENGE_1, "1M");   /* 1 minute post challenge */
    addParams(TX_CHALLENGE_1, "1W");   /* 1 week */
    addParams(TX_CHALLENGE_1, "2.5H"); /* 2 1/2 hours post challenge */
    addParams(TX_CHALLENGE_1, "20M");  /* 20 minutes post challenge */
    addParams(TX_CHALLENGE_1, "24H");  /* 24 hours post challenge */
    addParams(TX_CHALLENGE_1, "25M");  /* 25 minutes post challenge */
    addParams(TX_CHALLENGE_1, "2D");   /* 2 days */
    addParams(TX_CHALLENGE_1, "2H");   /* 2 hours post challenge */
    addParams(TX_CHALLENGE_1, "2L");   /* 2 months (60 days) post challenge */
    addParams(TX_CHALLENGE_1, "2M");   /* 2 minutes post challenge */
    addParams(TX_CHALLENGE_1, "2W");   /* 2 weeks */
    addParams(TX_CHALLENGE_1, "30M");  /* 30 minutes post challenge */
    addParams(TX_CHALLENGE_1, "3D");   /* 3 days */
    addParams(TX_CHALLENGE_1, "3H");   /* 3 hours post challenge */
    addParams(TX_CHALLENGE_1, "3L");   /* 3 months (90 days) post challenge */
    addParams(TX_CHALLENGE_1, "3M");   /* 3 minutes post challenge */
    addParams(TX_CHALLENGE_1, "3W");   /* 3 weeks */
    addParams(TX_CHALLENGE_1, "4D");   /* 4 days */
    addParams(TX_CHALLENGE_1, "4H");   /* 4 hours post challenge */
    addParams(TX_CHALLENGE_1, "4M");   /* 4 minutes post challenge */
    addParams(TX_CHALLENGE_1, "4W");   /* 4 weeks */
    addParams(TX_CHALLENGE_1, "5D");   /* 5 days */
    addParams(TX_CHALLENGE_1, "5H");   /* 5  hours post challenge */
    addParams(TX_CHALLENGE_1, "5M");   /* 5 minutes post challenge */
    addParams(TX_CHALLENGE_1, "6D");   /* 6 days */
    addParams(TX_CHALLENGE_1, "6H");   /* 6 hours post challenge */
    addParams(TX_CHALLENGE_1, "6M");   /* 6 minutes post challenge */
    addParams(TX_CHALLENGE_1, "7D");   /* 7 days */
    addParams(TX_CHALLENGE_1, "7H");   /* 7 hours post challenge */
    addParams(TX_CHALLENGE_1, "7M");   /* 7 minutes post challenge */
    addParams(TX_CHALLENGE_1, "8H");   /* 8 hours post challenge */
    addParams(TX_CHALLENGE_1,
	      "8H SHIFT");	   /* 8 hours aligned on nursing shifts */
    addParams(TX_CHALLENGE_1, "8M"); /* 8 minutes post challenge */
    addParams(TX_CHALLENGE_1, "9M"); /* 9 minutes post challenge */
    addParams(TX_CHALLENGE_1,
	      "BS"); /* Baseline (time just before the challenge) */
    addParams(TX_CHALLENGE_1,
	      "PEAK"); /* The time post drug dose at which the highest drug
			  level is reached (differs by drug) */
    addParams(TX_CHALLENGE_1,
	      "RANDOM"); /* Time from the challenge, or dose not specified.
			    (random) */
    addParams(TX_CHALLENGE_1,
	      "TROUGH"); /* The time post drug dose at which the lowest drug
			    level is reached (varies with drug) */
    addObject<TX>(TX_CHALLENGE_2, "TX_CHALLENGE.2", HL7::initialized,
		  HL7::repetition_off);
    addParams(TX_CHALLENGE_2,
	      "CFST"); /* Fasting (no calorie intake) for the period specified
			  in the time component of the term, e.g., 1H POST CFST
			  */
    addParams(
	TX_CHALLENGE_2,
	"EXCZ"); /* Exercise undertaken as challenge (can be quantified) */
    addParams(TX_CHALLENGE_2,
	      "FFST"); /* No fluid intake for the period specified in the time
			  component of the term */
  }

 public:
  /* Getters */
  /****************************************
   *
   */
  TX *getTX_CHALLENGE_1(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, TX_CHALLENGE_1);
  }

  bool isTX_CHALLENGE_1(size_t index = 0) {
    try {
      return this->getObject(index, TX_CHALLENGE_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   *
   */
  TX *getTX_CHALLENGE_2(size_t index = 0) {
    return (TX *)this->getObjectSafe(index, TX_CHALLENGE_2);
  }

  bool isTX_CHALLENGE_2(size_t index = 0) {
    try {
      return this->getObject(index, TX_CHALLENGE_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End TX_CHALLENGE */

} /* End HL7_24 */

#endif /*__TX_CHALLENGE_v24_H__ */
