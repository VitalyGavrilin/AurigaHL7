/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu  2 Jul 07:42:27 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus Auriga HL7-based applications.
 *
 * In more details I decided to extend Auriga HL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with Auriga HL7 is a bit outdated (October 2000).
 *
 * All files in this fork were automatically generated by [hawk], an hacca-based tool
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __URD_v29_H__
#define __URD_v29_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* withdrawn */
class URD : public HL7Segment {
 public:
  URD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "URD"; }
  URD* create() const { return new URD(); }

 private:
  void init() {
    setName("URD");
    /* Init members */
  }

 public:
  /* Getters */
}; /* End of URD */

} /* End of namespace HL7_29 */
#endif /* __URD_v29_H__ */