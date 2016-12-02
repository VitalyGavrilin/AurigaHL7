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


#ifndef __QBP_Q13__24_H__
#define __QBP_Q13__24_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/RDF.h"
#include "../segment/Zxx.h"

namespace HL7_24 {

/* Internal structures/groups */
struct QBP_Q13_QBP; /* QBP */

/* QBP */
struct QBP_Q13_QBP : public HL7Group {
  QBP_Q13_QBP() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { QBP_Q13_Zxx_4, FIELD_ID_MAX };

  const char* className() const { return "QBP_Q13_QBP"; }
  QBP_Q13_QBP* create() const { return new QBP_Q13_QBP(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Q13.QBP");
    addObject<Zxx>(QBP_Q13_Zxx_4, "Zxx.4", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  Zxx* getZxx_4(size_t index = 0) {
    return (Zxx*)this->getObjectSafe(index, QBP_Q13_Zxx_4);
  }

  /* Checker list */
  bool isZxx_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_Zxx_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q13_3 */

/* QBP_Q13 */
struct QBP_Q13 : public HL7Message {
  QBP_Q13() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Q13_MSH_1,
    QBP_Q13_QPD_2,
    QBP_Q13_QBP_3,
    QBP_Q13_RDF_7,
    QBP_Q13_RCP_9,
    QBP_Q13_DSC_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Q13"; }
  QBP_Q13* create() const { return new QBP_Q13(); }

  /* Initialize object */
  void init() {
    setName("QBP_Q13");
    addObject<MSH>(QBP_Q13_MSH_1, "MSH.1", HL7::initialized,
		   HL7::repetition_off);
    addObject<QPD>(QBP_Q13_QPD_2, "QPD.2", HL7::initialized,
		   HL7::repetition_off);
    addObject<QBP_Q13_QBP>(QBP_Q13_QBP_3, "QBP_Q13.QBP", HL7::optional,
			   HL7::repetition_off);
    addObject<RDF>(QBP_Q13_RDF_7, "RDF.7", HL7::optional, HL7::repetition_off);
    addObject<RCP>(QBP_Q13_RCP_9, "RCP.9", HL7::initialized,
		   HL7::repetition_off);
    addObject<DSC>(QBP_Q13_DSC_11, "DSC.11", HL7::optional,
		   HL7::repetition_off);
  }

  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Q13_MSH_1);
  }
  QPD* getQPD_2(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Q13_QPD_2);
  }
  QBP_Q13_QBP* getQBP(size_t index = 0) {
    return (QBP_Q13_QBP*)this->getObjectSafe(index, QBP_Q13_QBP_3);
  }
  RDF* getRDF_7(size_t index = 0) {
    return (RDF*)this->getObjectSafe(index, QBP_Q13_RDF_7);
  }
  RCP* getRCP_9(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Q13_RCP_9);
  }
  DSC* getDSC_11(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, QBP_Q13_DSC_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_QPD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQBP(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_QBP_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRDF_7(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_RDF_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_9(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_RCP_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_11(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Q13_DSC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Q13_ */
} /* namespace HL7_24 */
#endif /*  __QBP_Q13__24_H__ */
