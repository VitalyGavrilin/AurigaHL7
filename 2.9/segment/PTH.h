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


#ifndef __PTH_v29_H__
#define __PTH_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"

namespace HL7_29 {

/* PTH */
class PTH : public HL7Segment {
 public:
  PTH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PTH_1,
    PTH_2,
    PTH_3,
    PTH_4,
    PTH_5,
    PTH_6,
    PTH_7,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PTH"; }
  PTH* create() const { return new PTH(); }

 private:
  void init() {
    setName("PTH");
    /* Init members */
    addObject<ID>(PTH_1, "PTH.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PTH_2, "PTH.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PTH_3, "PTH.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PTH_4, "PTH.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PTH_5, "PTH.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PTH_6, "PTH.6", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(PTH_7, "PTH.7", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Action Code
   */

  ID* getPTH_1(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PTH_1);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PTH_1);
  }

  bool isPTH_1(size_t index = 0) {
    try {
      return this->getObject(index, PTH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PTH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway ID
   */

  CWE* getPTH_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PTH_2);
  }

  CWE* getPathwayID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PTH_2);
  }

  bool isPTH_2(size_t index = 0) {
    try {
      return this->getObject(index, PTH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayID(size_t index = 0) {
    try {
      return this->getObject(index, PTH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Instance ID
   */

  EI* getPTH_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PTH_3);
  }

  EI* getPathwayInstanceID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PTH_3);
  }

  bool isPTH_3(size_t index = 0) {
    try {
      return this->getObject(index, PTH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayInstanceID(size_t index = 0) {
    try {
      return this->getObject(index, PTH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Established Date/Time
   */

  DTM* getPTH_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PTH_4);
  }

  DTM* getPathwayEstablishedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PTH_4);
  }

  bool isPTH_4(size_t index = 0) {
    try {
      return this->getObject(index, PTH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayEstablishedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PTH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pathway Life Cycle Status
   */

  CWE* getPTH_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PTH_5);
  }

  CWE* getPathwayLifeCycleStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PTH_5);
  }

  bool isPTH_5(size_t index = 0) {
    try {
      return this->getObject(index, PTH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPathwayLifeCycleStatus(size_t index = 0) {
    try {
      return this->getObject(index, PTH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Change Pathway Life Cycle Status Date/Time
   */

  DTM* getPTH_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PTH_6);
  }

  DTM* getChangePathwayLifeCycleStatusDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PTH_6);
  }

  bool isPTH_6(size_t index = 0) {
    try {
      return this->getObject(index, PTH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isChangePathwayLifeCycleStatusDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PTH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Mood Code
   */

  CNE* getPTH_7(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PTH_7);
  }

  CNE* getMoodCode(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, PTH_7);
  }

  bool isPTH_7(size_t index = 0) {
    try {
      return this->getObject(index, PTH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoodCode(size_t index = 0) {
    try {
      return this->getObject(index, PTH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PTH */

} /* End of namespace HL7_29 */
#endif /* __PTH_v29_H__ */
