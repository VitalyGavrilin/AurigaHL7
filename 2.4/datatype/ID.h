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


#ifndef __ID_H__
#define __ID_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* coded value for HL7 defined tables */
struct ID : public HL7DataElement {
  ID() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "ID"; }
  ID* create() const { return new ID(); }
};

} /* End of namespace HL7_24 */

#endif /* __ID_H__ */
