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


#ifndef __RMI_v29_H__
#define __RMI_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"

namespace HL7_29 {

/* RMI */
class RMI : public HL7Segment {
 public:
  RMI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RMI_1,
    RMI_2,
    RMI_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RMI"; }
  RMI* create() const { return new RMI(); }

 private:
  void init() {
    setName("RMI");
    /* Init members */
    addObject<CWE>(RMI_1, "RMI.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RMI_2, "RMI.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RMI_3, "RMI.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Risk Management Incident Code
   */

  CWE* getRMI_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RMI_1);
  }

  CWE* getRiskManagementIncidentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RMI_1);
  }

  bool isRMI_1(size_t index = 0) {
    try {
      return this->getObject(index, RMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRiskManagementIncidentCode(size_t index = 0) {
    try {
      return this->getObject(index, RMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Incident
   */

  DTM* getRMI_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RMI_2);
  }

  DTM* getDateTimeIncident(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RMI_2);
  }

  bool isRMI_2(size_t index = 0) {
    try {
      return this->getObject(index, RMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeIncident(size_t index = 0) {
    try {
      return this->getObject(index, RMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Incident Type Code
   */

  CWE* getRMI_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RMI_3);
  }

  CWE* getIncidentTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RMI_3);
  }

  bool isRMI_3(size_t index = 0) {
    try {
      return this->getObject(index, RMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIncidentTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, RMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RMI */

} /* End of namespace HL7_29 */
#endif /* __RMI_v29_H__ */
