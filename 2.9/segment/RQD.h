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


#ifndef __RQD_v29_H__
#define __RQD_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"

namespace HL7_29 {

/* RQD */
class RQD : public HL7Segment {
 public:
  RQD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RQD_1,
    RQD_2,
    RQD_3,
    RQD_4,
    RQD_5,
    RQD_6,
    RQD_7,
    RQD_8,
    RQD_9,
    RQD_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RQD"; }
  RQD* create() const { return new RQD(); }

 private:
  void init() {
    setName("RQD");
    /* Init members */
    addObject<SI>(RQD_1, "RQD.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_2, "RQD.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_3, "RQD.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_4, "RQD.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(RQD_5, "RQD.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_6, "RQD.6", HL7::initialized, HL7::repetition_off);
    addObject<CX>(RQD_7, "RQD.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_8, "RQD.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RQD_9, "RQD.9", HL7::initialized, HL7::repetition_off);
    addObject<DT>(RQD_10, "RQD.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Requisition Line Number
   */

  SI* getRQD_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RQD_1);
  }

  SI* getRequisitionLineNumber(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, RQD_1);
  }

  bool isRQD_1(size_t index = 0) {
    try {
      return this->getObject(index, RQD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionLineNumber(size_t index = 0) {
    try {
      return this->getObject(index, RQD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Code - Internal
   */

  CWE* getRQD_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_2);
  }

  CWE* getItemCodeInternal(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_2);
  }

  bool isRQD_2(size_t index = 0) {
    try {
      return this->getObject(index, RQD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemCodeInternal(size_t index = 0) {
    try {
      return this->getObject(index, RQD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Code - External
   */

  CWE* getRQD_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_3);
  }

  CWE* getItemCodeExternal(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_3);
  }

  bool isRQD_3(size_t index = 0) {
    try {
      return this->getObject(index, RQD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemCodeExternal(size_t index = 0) {
    try {
      return this->getObject(index, RQD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hospital Item Code
   */

  CWE* getRQD_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_4);
  }

  CWE* getHospitalItemCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_4);
  }

  bool isRQD_4(size_t index = 0) {
    try {
      return this->getObject(index, RQD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHospitalItemCode(size_t index = 0) {
    try {
      return this->getObject(index, RQD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requisition Quantity
   */

  NM* getRQD_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RQD_5);
  }

  NM* getRequisitionQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RQD_5);
  }

  bool isRQD_5(size_t index = 0) {
    try {
      return this->getObject(index, RQD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionQuantity(size_t index = 0) {
    try {
      return this->getObject(index, RQD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requisition Unit of Measure
   */

  CWE* getRQD_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_6);
  }

  CWE* getRequisitionUnitofMeasure(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_6);
  }

  bool isRQD_6(size_t index = 0) {
    try {
      return this->getObject(index, RQD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequisitionUnitofMeasure(size_t index = 0) {
    try {
      return this->getObject(index, RQD_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cost Center Account Number
   */

  CX* getRQD_7(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, RQD_7);
  }

  CX* getCostCenterAccountNumber(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, RQD_7);
  }

  bool isRQD_7(size_t index = 0) {
    try {
      return this->getObject(index, RQD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCostCenterAccountNumber(size_t index = 0) {
    try {
      return this->getObject(index, RQD_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Item Natural Account Code
   */

  CWE* getRQD_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_8);
  }

  CWE* getItemNaturalAccountCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_8);
  }

  bool isRQD_8(size_t index = 0) {
    try {
      return this->getObject(index, RQD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isItemNaturalAccountCode(size_t index = 0) {
    try {
      return this->getObject(index, RQD_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Deliver To ID
   */

  CWE* getRQD_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_9);
  }

  CWE* getDeliverToID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RQD_9);
  }

  bool isRQD_9(size_t index = 0) {
    try {
      return this->getObject(index, RQD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeliverToID(size_t index = 0) {
    try {
      return this->getObject(index, RQD_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Needed
   */

  DT* getRQD_10(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, RQD_10);
  }

  DT* getDateNeeded(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, RQD_10);
  }

  bool isRQD_10(size_t index = 0) {
    try {
      return this->getObject(index, RQD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateNeeded(size_t index = 0) {
    try {
      return this->getObject(index, RQD_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RQD */

} /* End of namespace HL7_29 */
#endif /* __RQD_v29_H__ */
