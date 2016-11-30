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


#ifndef __UDM_Q05__24_H__
#define __UDM_Q05__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* UDM_Q05 */
struct UDM_Q05 : public HL7Message {
  UDM_Q05() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "UDM_Q05"; }
  UDM_Q05* create() const { return new UDM_Q05(); }

 private:
  /* Initialize object */
  void init() { setName("UDM_Q05"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* UDM_Q05_ */
} /* namespace HL7_24 */
#endif /*  __UDM_Q05__24_H__ */
