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


#ifndef __RTB_K13__24_H__
#define __RTB_K13__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/RDF.h"
#include "../segment/RDT.h"

namespace HL7_24 {

/* Internal structures/groups */
struct RTB_K13_ROW_DEFINITION; /* ROW_DEFINITION */

/* ROW_DEFINITION */
struct RTB_K13_ROW_DEFINITION : public HL7Group {
  RTB_K13_ROW_DEFINITION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { RTB_K13_RDF_9, RTB_K13_RDT_12, FIELD_ID_MAX };

  const char* className() const { return "RTB_K13_ROW_DEFINITION"; }
  RTB_K13_ROW_DEFINITION* create() const {
    return new RTB_K13_ROW_DEFINITION();
  }

 private:
  /* Initialize object */
  void init() {
    setName("RTB_K13.ROW_DEFINITION");
    addObject<RDF>(RTB_K13_RDF_9, "RDF.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<RDT>(RTB_K13_RDT_12, "RDT.12", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  RDF* getRDF_9(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, RTB_K13_RDF_9);
  }
  RDT* getRDT_12(size_t index = 0) {
    return (RDT*)this->getObjectSafe(index, RTB_K13_RDT_12);
  }

  /* Checker list */
  bool isRDF_9(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_RDF_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDT_12(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_RDT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RTB_K13_8 */

/* RTB_K13 */
struct RTB_K13 : public HL7Message {
  RTB_K13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RTB_K13_MSH_1,
    RTB_K13_MSA_2,
    RTB_K13_ERR_4,
    RTB_K13_QAK_6,
    RTB_K13_QPD_7,
    RTB_K13_ROW_DEFINITION_8,
    RTB_K13_DSC_17,
    FIELD_ID_MAX
  };

  const char* className() const { return "RTB_K13"; }
  RTB_K13* create() const { return new RTB_K13(); }

  /* Initialize object */
  void init() {
    setName("RTB_K13");
    addObject<MSH>(RTB_K13_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<MSA>(RTB_K13_MSA_2, "MSA.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<ERR>(RTB_K13_ERR_4, "ERR.4", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RTB_K13_QAK_6, "QAK.6", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(RTB_K13_QPD_7, "QPD.7", HL7::initialized,
		   HL7::repetition_off);
    addObject<RTB_K13_ROW_DEFINITION>(RTB_K13_ROW_DEFINITION_8,
				      "RTB_K13.ROW_DEFINITION", HL7::optional,
				      HL7::repetition_off);
    addObject<DSC>(RTB_K13_DSC_17, "DSC.17", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RTB_K13_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RTB_K13_MSA_2);
  }
  ERR* getERR_4(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RTB_K13_ERR_4);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RTB_K13_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RTB_K13_QPD_7);
  }
  RTB_K13_ROW_DEFINITION* getROW_DEFINITION(size_t index = 0) {
    return (RTB_K13_ROW_DEFINITION*)this->getObjectSafe(
	index, RTB_K13_ROW_DEFINITION_8);
  }
  DSC* getDSC_17(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RTB_K13_DSC_17);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_4(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_ERR_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isROW_DEFINITION(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_ROW_DEFINITION_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_17(size_t index = 0) {
    try {
      return this->getObject(index, RTB_K13_DSC_17) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RTB_K13_ */
} /* namespace HL7_24 */
#endif /*  __RTB_K13__24_H__ */
