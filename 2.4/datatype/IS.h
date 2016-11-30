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


#ifndef __IS_H__
#define __IS_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* coded value for user-defined tables */
struct IS : public HL7DataElement {
  IS() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "IS"; }
  IS* create() const { return new IS(); }
};

} /* End of namespace HL7_24 */

#endif /* __IS_H__ */
