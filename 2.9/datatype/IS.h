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


#ifndef __IS_H__
#define __IS_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* Coded Value for User-Defined tables */
struct IS : public HL7DataElement {
  IS() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "IS"; }
  IS* create() const { return new IS(); }
};

} /* End of namespace HL7_29 */

#endif /* __IS_H__ */
