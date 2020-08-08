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


#ifndef __SNM_H__
#define __SNM_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* String of telephone number digits */
struct SNM : public HL7DataElement {
  SNM() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "SNM"; }
  SNM* create() const { return new SNM(); }
};

} /* End of namespace HL7_29 */

#endif /* __SNM_H__ */
