/*
 * This file is part of AurigaHL7.
 *
 * AurigaHL7 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AurigaHL7 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AurigaHL7.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __DT_H__
#define __DT_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* date */
struct DT : public HL7DataElement {
  DT() { this->init(); }

 private:
  void init() {}

 public:
  const char* className() const { return "DT"; }
  DT* create() const { return new DT(); }
};

} /* End of namespace HL7_24 */

#endif /* __DT_H__ */
