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


#ifndef __TX_H__
#define __TX_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* Text data */
struct TX : public HL7DataElement {
  TX() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "TX"; }
  TX* create() const { return new TX(); }
};

} /* End of namespace HL7_29 */

#endif /* __TX_H__ */
