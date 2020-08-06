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


#ifndef __RCP_v29_H__
#define __RCP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CQ.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/SRT.h"

namespace HL7_29 {

/* RCP */
class RCP : public HL7Segment {
 public:
  RCP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RCP_1,
    RCP_2,
    RCP_3,
    RCP_4,
    RCP_5,
    RCP_6,
    RCP_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RCP"; }
  RCP* create() const { return new RCP(); }

 private:
  void init() {
    setName("RCP");
    /* Init members */
    addObject<ID>(RCP_1, "RCP.1", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RCP_2, "RCP.2", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(RCP_3, "RCP.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RCP_4, "RCP.4", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RCP_5, "RCP.5", HL7::initialized, HL7::repetition_off);
    addObject<SRT>(RCP_6, "RCP.6", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RCP_7, "RCP.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Query Priority
   */

  ID* getRCP_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_1);
  }

  ID* getQueryPriority(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_1);
  }

  bool isRCP_1(size_t index = 0) {
    try {
      return this->getObject(index, RCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQueryPriority(size_t index = 0) {
    try {
      return this->getObject(index, RCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Quantity Limited Request
   */

  CQ* getRCP_2(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RCP_2);
  }

  CQ* getQuantityLimitedRequest(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RCP_2);
  }

  bool isRCP_2(size_t index = 0) {
    try {
      return this->getObject(index, RCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantityLimitedRequest(size_t index = 0) {
    try {
      return this->getObject(index, RCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Modality
   */

  CNE* getRCP_3(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, RCP_3);
  }

  CNE* getResponseModality(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, RCP_3);
  }

  bool isRCP_3(size_t index = 0) {
    try {
      return this->getObject(index, RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseModality(size_t index = 0) {
    try {
      return this->getObject(index, RCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Execution and Delivery Time
   */

  DTM* getRCP_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RCP_4);
  }

  DTM* getExecutionandDeliveryTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RCP_4);
  }

  bool isRCP_4(size_t index = 0) {
    try {
      return this->getObject(index, RCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExecutionandDeliveryTime(size_t index = 0) {
    try {
      return this->getObject(index, RCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modify Indicator
   */

  ID* getRCP_5(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_5);
  }

  ID* getModifyIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_5);
  }

  bool isRCP_5(size_t index = 0) {
    try {
      return this->getObject(index, RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifyIndicator(size_t index = 0) {
    try {
      return this->getObject(index, RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sort-by Field
   */

  SRT* getRCP_6(size_t index = 0) {
    return (SRT*)this->getObjectSafe(index, RCP_6);
  }

  SRT* getSortbyField(size_t index = 0) {
    return (SRT*)this->getObjectSafe(index, RCP_6);
  }

  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSortbyField(size_t index = 0) {
    try {
      return this->getObject(index, RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Segment group inclusion
   */

  ID* getRCP_7(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_7);
  }

  ID* getSegmentgroupinclusion(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RCP_7);
  }

  bool isRCP_7(size_t index = 0) {
    try {
      return this->getObject(index, RCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSegmentgroupinclusion(size_t index = 0) {
    try {
      return this->getObject(index, RCP_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RCP */

} /* End of namespace HL7_29 */
#endif /* __RCP_v29_H__ */
