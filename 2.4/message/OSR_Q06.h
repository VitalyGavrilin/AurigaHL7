/*
 * This file is part of HCPPL.
 *
 * HCPPL is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * HCPPL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HCPPL.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __OSR_Q06__24_H__
#define __OSR_Q06__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* OSR_Q06 */
struct OSR_Q06 : public HL7Message {
  OSR_Q06() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "OSR_Q06"; }
  OSR_Q06* create() const { return new OSR_Q06(); }

 private:
  /* Initialize object */
  void init() { setName("OSR_Q06"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* OSR_Q06_ */
} /* namespace HL7_24 */
#endif /*  __OSR_Q06__24_H__ */
