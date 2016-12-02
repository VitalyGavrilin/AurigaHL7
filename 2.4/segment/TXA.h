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


#ifndef __TXA_v24_H__
#define __TXA_v24_H__

#include "../../common/Util.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/PPN.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XCN.h"

namespace HL7_24 {

/* Transcription Document Header */
class TXA : public HL7Segment {
 public:
  TXA() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    TXA_1,
    TXA_2,
    TXA_3,
    TXA_4,
    TXA_5,
    TXA_6,
    TXA_7,
    TXA_8,
    TXA_9,
    TXA_10,
    TXA_11,
    TXA_12,
    TXA_13,
    TXA_14,
    TXA_15,
    TXA_16,
    TXA_17,
    TXA_18,
    TXA_19,
    TXA_20,
    TXA_21,
    TXA_22,
    TXA_23,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "TXA"; }
  TXA* create() const { return new TXA(); }

 private:
  void init() {
    setName("TXA");
    /* Init members */
    addObject<SI>(TXA_1, "TXA.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(TXA_2, "TXA.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TXA_3, "TXA.3", HL7::conditional, HL7::repetition_off);
    addObject<TS>(TXA_4, "TXA.4", HL7::optional, HL7::repetition_off);
    addObject<XCN>(TXA_5, "TXA.5", HL7::conditional, HL7::repetition_on);
    addObject<TS>(TXA_6, "TXA.6", HL7::optional, HL7::repetition_off);
    addObject<TS>(TXA_7, "TXA.7", HL7::conditional, HL7::repetition_off);
    addObject<TS>(TXA_8, "TXA.8", HL7::optional, HL7::repetition_on);
    addObject<XCN>(TXA_9, "TXA.9", HL7::optional, HL7::repetition_on);
    addObject<XCN>(TXA_10, "TXA.10", HL7::optional, HL7::repetition_on);
    addObject<XCN>(TXA_11, "TXA.11", HL7::conditional, HL7::repetition_on);
    addObject<EI>(TXA_12, "TXA.12", HL7::initialized, HL7::repetition_off);
    addObject<EI>(TXA_13, "TXA.13", HL7::conditional, HL7::repetition_off);
    addObject<EI>(TXA_14, "TXA.14", HL7::optional, HL7::repetition_on);
    addObject<EI>(TXA_15, "TXA.15", HL7::optional, HL7::repetition_off);
    addObject<ST>(TXA_16, "TXA.16", HL7::optional, HL7::repetition_off);
    addObject<ID>(TXA_17, "TXA.17", HL7::initialized, HL7::repetition_off);
    addObject<ID>(TXA_18, "TXA.18", HL7::optional, HL7::repetition_off);
    addObject<ID>(TXA_19, "TXA.19", HL7::optional, HL7::repetition_off);
    addObject<ID>(TXA_20, "TXA.20", HL7::optional, HL7::repetition_off);
    addObject<ST>(TXA_21, "TXA.21", HL7::conditional, HL7::repetition_off);
    addObject<PPN>(TXA_22, "TXA.22", HL7::conditional, HL7::repetition_on);
    addObject<XCN>(TXA_23, "TXA.23", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID- TXA
   */

  SI* getTXA_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TXA_1);
  }

  SI* getSetIDTXA(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, TXA_1);
  }

  bool isTXA_1(size_t index = 0) {
    try {
      return this->getObject(index, TXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDTXA(size_t index = 0) {
    try {
      return this->getObject(index, TXA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Type
   */

  IS* getTXA_2(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, TXA_2);
  }

  IS* getDocumentType(size_t index = 0) {
    return (IS*)this->getObjectSafe(index, TXA_2);
  }

  bool isTXA_2(size_t index = 0) {
    try {
      return this->getObject(index, TXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentType(size_t index = 0) {
    try {
      return this->getObject(index, TXA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Content Presentation
   */

  ID* getTXA_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_3);
  }

  ID* getDocumentContentPresentation(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_3);
  }

  bool isTXA_3(size_t index = 0) {
    try {
      return this->getObject(index, TXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentContentPresentation(size_t index = 0) {
    try {
      return this->getObject(index, TXA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Activity Date/Time
   */

  TS* getTXA_4(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_4);
  }

  TS* getActivityDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_4);
  }

  bool isTXA_4(size_t index = 0) {
    try {
      return this->getObject(index, TXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActivityDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TXA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary Activity Provider Code/Name
   */

  XCN* getTXA_5(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_5);
  }

  XCN* getPrimaryActivityProviderCodeName(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_5);
  }

  bool isTXA_5(size_t index = 0) {
    try {
      return this->getObject(index, TXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimaryActivityProviderCodeName(size_t index = 0) {
    try {
      return this->getObject(index, TXA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Origination Date/Time
   */

  TS* getTXA_6(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_6);
  }

  TS* getOriginationDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_6);
  }

  bool isTXA_6(size_t index = 0) {
    try {
      return this->getObject(index, TXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TXA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transcription Date/Time
   */

  TS* getTXA_7(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_7);
  }

  TS* getTranscriptionDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_7);
  }

  bool isTXA_7(size_t index = 0) {
    try {
      return this->getObject(index, TXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTranscriptionDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TXA_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Edit Date/Time
   */

  TS* getTXA_8(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_8);
  }

  TS* getEditDateTime(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, TXA_8);
  }

  bool isTXA_8(size_t index = 0) {
    try {
      return this->getObject(index, TXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEditDateTime(size_t index = 0) {
    try {
      return this->getObject(index, TXA_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Originator Code/Name
   */

  XCN* getTXA_9(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_9);
  }

  XCN* getOriginatorCodeName(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_9);
  }

  bool isTXA_9(size_t index = 0) {
    try {
      return this->getObject(index, TXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginatorCodeName(size_t index = 0) {
    try {
      return this->getObject(index, TXA_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Assigned Document Authenticator
   */

  XCN* getTXA_10(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_10);
  }

  XCN* getAssignedDocumentAuthenticator(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_10);
  }

  bool isTXA_10(size_t index = 0) {
    try {
      return this->getObject(index, TXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAssignedDocumentAuthenticator(size_t index = 0) {
    try {
      return this->getObject(index, TXA_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Transcriptionist Code/Name
   */

  XCN* getTXA_11(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_11);
  }

  XCN* getTranscriptionistCodeName(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_11);
  }

  bool isTXA_11(size_t index = 0) {
    try {
      return this->getObject(index, TXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTranscriptionistCodeName(size_t index = 0) {
    try {
      return this->getObject(index, TXA_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unique Document Number
   */

  EI* getTXA_12(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_12);
  }

  EI* getUniqueDocumentNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_12);
  }

  bool isTXA_12(size_t index = 0) {
    try {
      return this->getObject(index, TXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniqueDocumentNumber(size_t index = 0) {
    try {
      return this->getObject(index, TXA_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Document Number
   */

  EI* getTXA_13(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_13);
  }

  EI* getParentDocumentNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_13);
  }

  bool isTXA_13(size_t index = 0) {
    try {
      return this->getObject(index, TXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentDocumentNumber(size_t index = 0) {
    try {
      return this->getObject(index, TXA_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getTXA_14(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_14);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_14);
  }

  bool isTXA_14(size_t index = 0) {
    try {
      return this->getObject(index, TXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, TXA_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getTXA_15(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_15);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, TXA_15);
  }

  bool isTXA_15(size_t index = 0) {
    try {
      return this->getObject(index, TXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, TXA_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Unique Document File Name
   */

  ST* getTXA_16(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, TXA_16);
  }

  ST* getUniqueDocumentFileName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, TXA_16);
  }

  bool isTXA_16(size_t index = 0) {
    try {
      return this->getObject(index, TXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniqueDocumentFileName(size_t index = 0) {
    try {
      return this->getObject(index, TXA_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Completion Status
   */

  ID* getTXA_17(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_17);
  }

  ID* getDocumentCompletionStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_17);
  }

  bool isTXA_17(size_t index = 0) {
    try {
      return this->getObject(index, TXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentCompletionStatus(size_t index = 0) {
    try {
      return this->getObject(index, TXA_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Confidentiality Status
   */

  ID* getTXA_18(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_18);
  }

  ID* getDocumentConfidentialityStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_18);
  }

  bool isTXA_18(size_t index = 0) {
    try {
      return this->getObject(index, TXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentConfidentialityStatus(size_t index = 0) {
    try {
      return this->getObject(index, TXA_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Availability Status
   */

  ID* getTXA_19(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_19);
  }

  ID* getDocumentAvailabilityStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_19);
  }

  bool isTXA_19(size_t index = 0) {
    try {
      return this->getObject(index, TXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentAvailabilityStatus(size_t index = 0) {
    try {
      return this->getObject(index, TXA_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Storage Status
   */

  ID* getTXA_20(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_20);
  }

  ID* getDocumentStorageStatus(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, TXA_20);
  }

  bool isTXA_20(size_t index = 0) {
    try {
      return this->getObject(index, TXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentStorageStatus(size_t index = 0) {
    try {
      return this->getObject(index, TXA_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Document Change Reason
   */

  ST* getTXA_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, TXA_21);
  }

  ST* getDocumentChangeReason(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, TXA_21);
  }

  bool isTXA_21(size_t index = 0) {
    try {
      return this->getObject(index, TXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDocumentChangeReason(size_t index = 0) {
    try {
      return this->getObject(index, TXA_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authentication Person, Time Stamp
   */

  PPN* getTXA_22(size_t index = 0) {
    return (PPN*)this->getObjectSafe(index, TXA_22);
  }

  PPN* getAuthenticationPersonTimeStamp(size_t index = 0) {
    return (PPN*)this->getObjectSafe(index, TXA_22);
  }

  bool isTXA_22(size_t index = 0) {
    try {
      return this->getObject(index, TXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthenticationPersonTimeStamp(size_t index = 0) {
    try {
      return this->getObject(index, TXA_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Distributed Copies (Code and Name of Recipients)
   */

  XCN* getTXA_23(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_23);
  }

  XCN* getDistributedCopies(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, TXA_23);
  }

  bool isTXA_23(size_t index = 0) {
    try {
      return this->getObject(index, TXA_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDistributedCopies(size_t index = 0) {
    try {
      return this->getObject(index, TXA_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of TXA */

} /* End of namespace HL7_24 */
#endif /* __TXA_v24_H__ */
