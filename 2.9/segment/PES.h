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


#ifndef __PES_v29_H__
#define __PES_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/FT.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* PES */
class PES : public HL7Segment {
 public:
  PES() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PES_1,
    PES_2,
    PES_3,
    PES_4,
    PES_5,
    PES_6,
    PES_7,
    PES_8,
    PES_9,
    PES_10,
    PES_11,
    PES_12,
    PES_13,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PES"; }
  PES* create() const { return new PES(); }

 private:
  void init() {
    setName("PES");
    /* Init members */
    addObject<XON>(PES_1, "PES.1", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(PES_2, "PES.2", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(PES_3, "PES.3", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(PES_4, "PES.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(PES_5, "PES.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(PES_6, "PES.6", HL7::initialized, HL7::repetition_off);
    addObject<FT>(PES_7, "PES.7", HL7::initialized, HL7::repetition_off);
    addObject<FT>(PES_8, "PES.8", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PES_9, "PES.9", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PES_10, "PES.10", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PES_11, "PES.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PES_12, "PES.12", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PES_13, "PES.13", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Sender Organization Name
   */

  XON* getPES_1(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PES_1);
  }

  XON* getSenderOrganizationName(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PES_1);
  }

  bool isPES_1(size_t index = 0) {
    try {
      return this->getObject(index, PES_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderOrganizationName(size_t index = 0) {
    try {
      return this->getObject(index, PES_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Individual Name
   */

  XCN* getPES_2(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PES_2);
  }

  XCN* getSenderIndividualName(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, PES_2);
  }

  bool isPES_2(size_t index = 0) {
    try {
      return this->getObject(index, PES_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderIndividualName(size_t index = 0) {
    try {
      return this->getObject(index, PES_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Address
   */

  XAD* getPES_3(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PES_3);
  }

  XAD* getSenderAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, PES_3);
  }

  bool isPES_3(size_t index = 0) {
    try {
      return this->getObject(index, PES_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderAddress(size_t index = 0) {
    try {
      return this->getObject(index, PES_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Telephone
   */

  XTN* getPES_4(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PES_4);
  }

  XTN* getSenderTelephone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, PES_4);
  }

  bool isPES_4(size_t index = 0) {
    try {
      return this->getObject(index, PES_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderTelephone(size_t index = 0) {
    try {
      return this->getObject(index, PES_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Event Identifier
   */

  EI* getPES_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PES_5);
  }

  EI* getSenderEventIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, PES_5);
  }

  bool isPES_5(size_t index = 0) {
    try {
      return this->getObject(index, PES_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderEventIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PES_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Sequence Number
   */

  NM* getPES_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PES_6);
  }

  NM* getSenderSequenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, PES_6);
  }

  bool isPES_6(size_t index = 0) {
    try {
      return this->getObject(index, PES_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderSequenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, PES_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Event Description
   */

  FT* getPES_7(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PES_7);
  }

  FT* getSenderEventDescription(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PES_7);
  }

  bool isPES_7(size_t index = 0) {
    try {
      return this->getObject(index, PES_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderEventDescription(size_t index = 0) {
    try {
      return this->getObject(index, PES_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Comment
   */

  FT* getPES_8(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PES_8);
  }

  FT* getSenderComment(size_t index = 0) {
    return (FT*)this->getObjectSafe(index, PES_8);
  }

  bool isPES_8(size_t index = 0) {
    try {
      return this->getObject(index, PES_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderComment(size_t index = 0) {
    try {
      return this->getObject(index, PES_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Sender Aware Date/Time
   */

  DTM* getPES_9(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PES_9);
  }

  DTM* getSenderAwareDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PES_9);
  }

  bool isPES_9(size_t index = 0) {
    try {
      return this->getObject(index, PES_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSenderAwareDateTime(size_t index = 0) {
    try {
      return this->getObject(index, PES_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Report Date
   */

  DTM* getPES_10(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PES_10);
  }

  DTM* getEventReportDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PES_10);
  }

  bool isPES_10(size_t index = 0) {
    try {
      return this->getObject(index, PES_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReportDate(size_t index = 0) {
    try {
      return this->getObject(index, PES_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Report Timing/Type
   */

  ID* getPES_11(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_11);
  }

  ID* getEventReportTimingType(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_11);
  }

  bool isPES_11(size_t index = 0) {
    try {
      return this->getObject(index, PES_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReportTimingType(size_t index = 0) {
    try {
      return this->getObject(index, PES_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Report Source
   */

  ID* getPES_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_12);
  }

  ID* getEventReportSource(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_12);
  }

  bool isPES_12(size_t index = 0) {
    try {
      return this->getObject(index, PES_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReportSource(size_t index = 0) {
    try {
      return this->getObject(index, PES_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Reported To
   */

  ID* getPES_13(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_13);
  }

  ID* getEventReportedTo(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PES_13);
  }

  bool isPES_13(size_t index = 0) {
    try {
      return this->getObject(index, PES_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReportedTo(size_t index = 0) {
    try {
      return this->getObject(index, PES_13) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PES */

} /* End of namespace HL7_29 */
#endif /* __PES_v29_H__ */
