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


#ifndef __ID_H__
#define __ID_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* Coded Value for HL7 Defined tables */
struct ID : public HL7DataElement {
  ID() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "ID"; }
  ID* create() const { return new ID(); }
};

} /* End of namespace HL7_29 */

#endif /* __ID_H__ */
