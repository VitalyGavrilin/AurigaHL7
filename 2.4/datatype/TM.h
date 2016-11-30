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


#ifndef __TM_H__
#define __TM_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* time */
struct TM : public HL7DataElement {
  TM() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "TM"; }
  TM* create() const { return new TM(); }
};

} /* End of namespace HL7_24 */

#endif /* __TM_H__ */
