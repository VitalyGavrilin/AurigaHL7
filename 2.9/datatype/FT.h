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


#ifndef __FT_H__
#define __FT_H__

#include "../../common/Util.h"

namespace HL7_29 {

/* Formatted text data */
struct FT : public HL7DataElement {
  FT() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "FT"; }
  FT* create() const { return new FT(); }
};

} /* End of namespace HL7_29 */

#endif /* __FT_H__ */
