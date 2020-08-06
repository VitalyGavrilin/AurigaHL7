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


#ifndef __GTS_H__
#define __GTS_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* General timing specification */
struct GTS : public HL7DataElement {
  GTS() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "GTS"; }
  GTS* create() const { return new GTS(); }
};

} /* End of namespace HL7_29 */

#endif /* __GTS_H__ */
