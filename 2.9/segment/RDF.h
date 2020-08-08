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


#ifndef __RDF_v29_H__
#define __RDF_v29_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/RCD.h"

namespace HL7_29 {

/* RDF */
class RDF : public HL7Segment {
 public:
  RDF() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RDF_1,
    RDF_2,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RDF"; }
  RDF* create() const { return new RDF(); }

 private:
  void init() {
    setName("RDF");
    /* Init members */
    addObject<NM>(RDF_1, "RDF.1", HL7::initialized, HL7::repetition_off);
    addObject<RCD>(RDF_2, "RDF.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Number of Columns per Row
   */

  NM* getRDF_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RDF_1);
  }

  NM* getNumberofColumnsperRow(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, RDF_1);
  }

  bool isRDF_1(size_t index = 0) {
    try {
      return this->getObject(index, RDF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofColumnsperRow(size_t index = 0) {
    try {
      return this->getObject(index, RDF_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Column Description
   */

  RCD* getRDF_2(size_t index = 0) {
    return (RCD*)this->getObjectSafe(index, RDF_2);
  }

  RCD* getColumnDescription(size_t index = 0) {
    return (RCD*)this->getObjectSafe(index, RDF_2);
  }

  bool isRDF_2(size_t index = 0) {
    try {
      return this->getObject(index, RDF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isColumnDescription(size_t index = 0) {
    try {
      return this->getObject(index, RDF_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RDF */

} /* End of namespace HL7_29 */
#endif /* __RDF_v29_H__ */
