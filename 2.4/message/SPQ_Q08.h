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


#ifndef __SPQ_Q08__24_H__
#define __SPQ_Q08__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* SPQ_Q08 */
struct SPQ_Q08 : public HL7Message {
  SPQ_Q08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "SPQ_Q08"; }
  SPQ_Q08* create() const { return new SPQ_Q08(); }

 private:
  /* Initialize object */
  void init() { setName("SPQ_Q08"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* SPQ_Q08_ */
} /* namespace HL7_24 */
#endif /*  __SPQ_Q08__24_H__ */
