/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __ACC_v29_H__
#define __ACC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"

namespace HL7_29 {

/* ACC */
class ACC : public HL7Segment {
 public:
  ACC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ACC_1,
    ACC_2,
    ACC_3,
    ACC_4,
    ACC_5,
    ACC_6,
    ACC_7,
    ACC_8,
    ACC_9,
    ACC_10,
    ACC_11,
    ACC_12,
    ACC_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ACC"; }
  ACC* create() const { return new ACC(); }

 private:
  void init() {
    setName("ACC");
    /* Init members */
    addObject<DTM>(ACC_1, "ACC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ACC_2, "ACC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ACC_3, "ACC.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ACC_4, "ACC.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ACC_5, "ACC.5", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ACC_6, "ACC.6", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(ACC_7, "ACC.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ACC_8, "ACC.8", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ACC_9, "ACC.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ACC_10, "ACC.10", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(ACC_11, "ACC.11", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ACC_12, "ACC.12", HL7::initialized, HL7::repetition_off);
    addObject<EI>(ACC_13, "ACC.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Accident Date/Time
   */

  DTM* getACC_1(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ACC_1);
  }

  DTM* getAccidentDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ACC_1);
  }

  bool isACC_1(size_t index = 0) {
    try {
      return this->getObject(index, ACC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDateTime(size_t index = 0) {
    try {
      return this->getObject(index, ACC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Code
   */

  CWE* getACC_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ACC_2);
  }

  CWE* getAccidentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ACC_2);
  }

  bool isACC_2(size_t index = 0) {
    try {
      return this->getObject(index, ACC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentCode(size_t index = 0) {
    try {
      return this->getObject(index, ACC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Location
   */

  ST* getACC_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_3);
  }

  ST* getAccidentLocation(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_3);
  }

  bool isACC_3(size_t index = 0) {
    try {
      return this->getObject(index, ACC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentLocation(size_t index = 0) {
    try {
      return this->getObject(index, ACC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Auto Accident State
   */

  CWE* getACC_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ACC_4);
  }

  CWE* getAutoAccidentState(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ACC_4);
  }

  bool isACC_4(size_t index = 0) {
    try {
      return this->getObject(index, ACC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAutoAccidentState(size_t index = 0) {
    try {
      return this->getObject(index, ACC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Job Related Indicator
   */

  ID* getACC_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_5);
  }

  ID* getAccidentJobRelatedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_5);
  }

  bool isACC_5(size_t index = 0) {
    try {
      return this->getObject(index, ACC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentJobRelatedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Death Indicator
   */

  ID* getACC_6(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_6);
  }

  ID* getAccidentDeathIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_6);
  }

  bool isACC_6(size_t index = 0) {
    try {
      return this->getObject(index, ACC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDeathIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By
   */

  XCN* getACC_7(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ACC_7);
  }

  XCN* getEnteredBy(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, ACC_7);
  }

  bool isACC_7(size_t index = 0) {
    try {
      return this->getObject(index, ACC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredBy(size_t index = 0) {
    try {
      return this->getObject(index, ACC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Description
   */

  ST* getACC_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_8);
  }

  ST* getAccidentDescription(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_8);
  }

  bool isACC_8(size_t index = 0) {
    try {
      return this->getObject(index, ACC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentDescription(size_t index = 0) {
    try {
      return this->getObject(index, ACC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Brought In By
   */

  ST* getACC_9(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_9);
  }

  ST* getBroughtInBy(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ACC_9);
  }

  bool isACC_9(size_t index = 0) {
    try {
      return this->getObject(index, ACC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBroughtInBy(size_t index = 0) {
    try {
      return this->getObject(index, ACC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Police Notified Indicator
   */

  ID* getACC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_10);
  }

  ID* getPoliceNotifiedIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ACC_10);
  }

  bool isACC_10(size_t index = 0) {
    try {
      return this->getObject(index, ACC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPoliceNotifiedIndicator(size_t index = 0) {
    try {
      return this->getObject(index, ACC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Address
   */

  XAD* getACC_11(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ACC_11);
  }

  XAD* getAccidentAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, ACC_11);
  }

  bool isACC_11(size_t index = 0) {
    try {
      return this->getObject(index, ACC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentAddress(size_t index = 0) {
    try {
      return this->getObject(index, ACC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Degree of patient liability
   */

  NM* getACC_12(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ACC_12);
  }

  NM* getDegreeofpatientliability(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ACC_12);
  }

  bool isACC_12(size_t index = 0) {
    try {
      return this->getObject(index, ACC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDegreeofpatientliability(size_t index = 0) {
    try {
      return this->getObject(index, ACC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accident Identifier
   */

  EI* getACC_13(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ACC_13);
  }

  EI* getAccidentIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, ACC_13);
  }

  bool isACC_13(size_t index = 0) {
    try {
      return this->getObject(index, ACC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccidentIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, ACC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ACC */

} /* End of namespace HL7_29 */
#endif /* __ACC_v29_H__ */
