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


#ifndef __PAC_v29_H__
#define __PAC_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/NA.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* PAC */
class PAC : public HL7Segment {
 public:
  PAC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PAC_1,
    PAC_2,
    PAC_3,
    PAC_4,
    PAC_5,
    PAC_6,
    PAC_7,
    PAC_8,
    PAC_9,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PAC"; }
  PAC* create() const { return new PAC(); }

 private:
  void init() {
    setName("PAC");
    /* Init members */
    addObject<SI>(PAC_1, "PAC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PAC_2, "PAC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PAC_3, "PAC.3", HL7::initialized, HL7::repetition_off);
    addObject<NA>(PAC_4, "PAC.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PAC_5, "PAC.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PAC_6, "PAC.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PAC_7, "PAC.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PAC_8, "PAC.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PAC_9, "PAC.9", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set Id – PAC
   */

  SI* getPAC_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PAC_1);
  }

  SI* getSetIdPAC(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, PAC_1);
  }

  bool isPAC_1(size_t index = 0) {
    try {
      return this->getObject(index, PAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIdPAC(size_t index = 0) {
    try {
      return this->getObject(index, PAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package ID
   */

  EI* getPAC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PAC_2);
  }

  EI* getPackageID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PAC_2);
  }

  bool isPAC_2(size_t index = 0) {
    try {
      return this->getObject(index, PAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageID(size_t index = 0) {
    try {
      return this->getObject(index, PAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Package ID
   */

  EI* getPAC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PAC_3);
  }

  EI* getParentPackageID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PAC_3);
  }

  bool isPAC_3(size_t index = 0) {
    try {
      return this->getObject(index, PAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentPackageID(size_t index = 0) {
    try {
      return this->getObject(index, PAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Position in Parent Package
   */

  NA* getPAC_4(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, PAC_4);
  }

  NA* getPositioninParentPackage(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, PAC_4);
  }

  bool isPAC_4(size_t index = 0) {
    try {
      return this->getObject(index, PAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPositioninParentPackage(size_t index = 0) {
    try {
      return this->getObject(index, PAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package Type
   */

  CWE* getPAC_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_5);
  }

  CWE* getPackageType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_5);
  }

  bool isPAC_5(size_t index = 0) {
    try {
      return this->getObject(index, PAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageType(size_t index = 0) {
    try {
      return this->getObject(index, PAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package Condition
   */

  CWE* getPAC_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_6);
  }

  CWE* getPackageCondition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_6);
  }

  bool isPAC_6(size_t index = 0) {
    try {
      return this->getObject(index, PAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageCondition(size_t index = 0) {
    try {
      return this->getObject(index, PAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package Handling Code
   */

  CWE* getPAC_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_7);
  }

  CWE* getPackageHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_7);
  }

  bool isPAC_7(size_t index = 0) {
    try {
      return this->getObject(index, PAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, PAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Package Risk Code
   */

  CWE* getPAC_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_8);
  }

  CWE* getPackageRiskCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PAC_8);
  }

  bool isPAC_8(size_t index = 0) {
    try {
      return this->getObject(index, PAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackageRiskCode(size_t index = 0) {
    try {
      return this->getObject(index, PAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getPAC_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PAC_9);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PAC_9);
  }

  bool isPAC_9(size_t index = 0) {
    try {
      return this->getObject(index, PAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, PAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PAC */

} /* End of namespace HL7_29 */
#endif /* __PAC_v29_H__ */
