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


#ifndef __DSR_P04__24_H__
#define __DSR_P04__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* DSR_P04 */
struct DSR_P04 : public HL7Message {
  DSR_P04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "DSR_P04"; }
  DSR_P04* create() const { return new DSR_P04(); }

 private:
  /* Initialize object */
  void init() { setName("DSR_P04"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* DSR_P04_ */
} /* namespace HL7_24 */
#endif /*  __DSR_P04__24_H__ */
