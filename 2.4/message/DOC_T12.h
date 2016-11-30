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


#ifndef __DOC_T12__24_H__
#define __DOC_T12__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* DOC_T12 */
struct DOC_T12 : public HL7Message {
  DOC_T12() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "DOC_T12"; }
  DOC_T12* create() const { return new DOC_T12(); }

 private:
  /* Initialize object */
  void init() { setName("DOC_T12"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* DOC_T12_ */
} /* namespace HL7_24 */
#endif /*  __DOC_T12__24_H__ */
