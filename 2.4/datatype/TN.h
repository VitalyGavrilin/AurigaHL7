/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __TN_H__
#define __TN_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* telephone number */
struct TN : public HL7DataElement {
  TN() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "TN"; }
  TN* create() const { return new TN(); }
};

} /* End of namespace HL7_24 */

#endif /* __TN_H__ */
