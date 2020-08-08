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


#ifndef __SFT_v29_H__
#define __SFT_v29_H__

#include "../../common/Util.h"
#include "../datatype/DTM.h"
#include "../datatype/ST.h"
#include "../datatype/TX.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* SFT */
class SFT : public HL7Segment {
 public:
  SFT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SFT_1,
    SFT_2,
    SFT_3,
    SFT_4,
    SFT_5,
    SFT_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SFT"; }
  SFT* create() const { return new SFT(); }

 private:
  void init() {
    setName("SFT");
    /* Init members */
    addObject<XON>(SFT_1, "SFT.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SFT_2, "SFT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SFT_3, "SFT.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SFT_4, "SFT.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(SFT_5, "SFT.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SFT_6, "SFT.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Software Vendor Organization
   */

  XON* getSFT_1(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, SFT_1);
  }

  XON* getSoftwareVendorOrganization(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, SFT_1);
  }

  bool isSFT_1(size_t index = 0) {
    try {
      return this->getObject(index, SFT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareVendorOrganization(size_t index = 0) {
    try {
      return this->getObject(index, SFT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Certified Version or Release
   */

  ST* getSFT_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_2);
  }

  ST* getSoftwareCertifiedVersionorRelease(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_2);
  }

  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareCertifiedVersionorRelease(size_t index = 0) {
    try {
      return this->getObject(index, SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Product Name
   */

  ST* getSFT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_3);
  }

  ST* getSoftwareProductName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_3);
  }

  bool isSFT_3(size_t index = 0) {
    try {
      return this->getObject(index, SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareProductName(size_t index = 0) {
    try {
      return this->getObject(index, SFT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Binary ID
   */

  ST* getSFT_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_4);
  }

  ST* getSoftwareBinaryID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SFT_4);
  }

  bool isSFT_4(size_t index = 0) {
    try {
      return this->getObject(index, SFT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareBinaryID(size_t index = 0) {
    try {
      return this->getObject(index, SFT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Product Information
   */

  TX* getSFT_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SFT_5);
  }

  TX* getSoftwareProductInformation(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, SFT_5);
  }

  bool isSFT_5(size_t index = 0) {
    try {
      return this->getObject(index, SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareProductInformation(size_t index = 0) {
    try {
      return this->getObject(index, SFT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Software Install Date
   */

  DTM* getSFT_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SFT_6);
  }

  DTM* getSoftwareInstallDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SFT_6);
  }

  bool isSFT_6(size_t index = 0) {
    try {
      return this->getObject(index, SFT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSoftwareInstallDate(size_t index = 0) {
    try {
      return this->getObject(index, SFT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SFT */

} /* End of namespace HL7_29 */
#endif /* __SFT_v29_H__ */
