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


#ifndef __MCP_v29_H__
#define __MCP_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/MO.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* MCP */
class MCP : public HL7Segment {
 public:
  MCP() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    MCP_1,
    MCP_2,
    MCP_3,
    MCP_4,
    MCP_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "MCP"; }
  MCP* create() const { return new MCP(); }

 private:
  void init() {
    setName("MCP");
    /* Init members */
    addObject<SI>(MCP_1, "MCP.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(MCP_2, "MCP.2", HL7::initialized, HL7::repetition_off);
    addObject<MO>(MCP_3, "MCP.3", HL7::initialized, HL7::repetition_off);
    addObject<MO>(MCP_4, "MCP.4", HL7::initialized, HL7::repetition_off);
    addObject<ST>(MCP_5, "MCP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - MCP
   */

  SI* getMCP_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, MCP_1);
  }

  SI* getSetIDMCP(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, MCP_1);
  }

  bool isMCP_1(size_t index = 0) {
    try {
      return this->getObject(index, MCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDMCP(size_t index = 0) {
    try {
      return this->getObject(index, MCP_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Producer's Service/Test/Observation ID
   */

  CWE* getMCP_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MCP_2);
  }

  CWE* getProducersServiceTestObservationID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, MCP_2);
  }

  bool isMCP_2(size_t index = 0) {
    try {
      return this->getObject(index, MCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProducersServiceTestObservationID(size_t index = 0) {
    try {
      return this->getObject(index, MCP_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Price Range – Low Value
   */

  MO* getMCP_3(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, MCP_3);
  }

  MO* getUniversalServicePriceRangeLowValue(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, MCP_3);
  }

  bool isMCP_3(size_t index = 0) {
    try {
      return this->getObject(index, MCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServicePriceRangeLowValue(size_t index = 0) {
    try {
      return this->getObject(index, MCP_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Universal Service Price Range – High Value
   */

  MO* getMCP_4(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, MCP_4);
  }

  MO* getUniversalServicePriceRangeHighValue(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, MCP_4);
  }

  bool isMCP_4(size_t index = 0) {
    try {
      return this->getObject(index, MCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalServicePriceRangeHighValue(size_t index = 0) {
    try {
      return this->getObject(index, MCP_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reason for Universal Service Cost Range
   */

  ST* getMCP_5(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MCP_5);
  }

  ST* getReasonforUniversalServiceCostRange(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, MCP_5);
  }

  bool isMCP_5(size_t index = 0) {
    try {
      return this->getObject(index, MCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReasonforUniversalServiceCostRange(size_t index = 0) {
    try {
      return this->getObject(index, MCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of MCP */

} /* End of namespace HL7_29 */
#endif /* __MCP_v29_H__ */
