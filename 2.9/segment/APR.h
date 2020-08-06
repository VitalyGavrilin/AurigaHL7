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


#ifndef __APR_v29_H__
#define __APR_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/SCV.h"

namespace HL7_29 {

/* APR */
class APR : public HL7Segment {
 public:
  APR() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    APR_1,
    APR_2,
    APR_3,
    APR_4,
    APR_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "APR"; }
  APR* create() const { return new APR(); }

 private:
  void init() {
    setName("APR");
    /* Init members */
    addObject<SCV>(APR_1, "APR.1", HL7::initialized, HL7::repetition_off);
    addObject<SCV>(APR_2, "APR.2", HL7::initialized, HL7::repetition_off);
    addObject<SCV>(APR_3, "APR.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(APR_4, "APR.4", HL7::initialized, HL7::repetition_off);
    addObject<SCV>(APR_5, "APR.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Time Selection Criteria
   */

  SCV* getAPR_1(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_1);
  }

  SCV* getTimeSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_1);
  }

  bool isAPR_1(size_t index = 0) {
    try {
      return this->getObject(index, APR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTimeSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Selection Criteria
   */

  SCV* getAPR_2(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_2);
  }

  SCV* getResourceSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_2);
  }

  bool isAPR_2(size_t index = 0) {
    try {
      return this->getObject(index, APR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Selection Criteria
   */

  SCV* getAPR_3(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_3);
  }

  SCV* getLocationSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_3);
  }

  bool isAPR_3(size_t index = 0) {
    try {
      return this->getObject(index, APR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Slot Spacing Criteria
   */

  NM* getAPR_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, APR_4);
  }

  NM* getSlotSpacingCriteria(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, APR_4);
  }

  bool isAPR_4(size_t index = 0) {
    try {
      return this->getObject(index, APR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSlotSpacingCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Override Criteria
   */

  SCV* getAPR_5(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_5);
  }

  SCV* getFillerOverrideCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_5);
  }

  bool isAPR_5(size_t index = 0) {
    try {
      return this->getObject(index, APR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOverrideCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of APR */

} /* End of namespace HL7_29 */
#endif /* __APR_v29_H__ */
