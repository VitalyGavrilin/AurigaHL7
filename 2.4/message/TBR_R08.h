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


#ifndef __TBR_R08__24_H__
#define __TBR_R08__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* TBR_R08 */
struct TBR_R08 : public HL7Message {
  TBR_R08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "TBR_R08"; }
  TBR_R08* create() const { return new TBR_R08(); }

 private:
  /* Initialize object */
  void init() { setName("TBR_R08"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* TBR_R08_ */
} /* namespace HL7_24 */
#endif /*  __TBR_R08__24_H__ */
