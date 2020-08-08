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


#ifndef __SI_H__
#define __SI_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* Sequence ID */
struct SI : public HL7DataElement {
  SI() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "SI"; }
  SI* create() const { return new SI(); }
};

} /* End of namespace HL7_29 */

#endif /* __SI_H__ */
