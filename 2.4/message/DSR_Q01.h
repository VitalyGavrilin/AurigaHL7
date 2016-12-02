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


#ifndef __DSR_Q01__24_H__
#define __DSR_Q01__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* DSR_Q01 */
struct DSR_Q01 : public HL7Message {
  DSR_Q01() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "DSR_Q01"; }
  DSR_Q01* create() const { return new DSR_Q01(); }

 private:
  /* Initialize object */
  void init() { setName("DSR_Q01"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* DSR_Q01_ */
} /* namespace HL7_24 */
#endif /*  __DSR_Q01__24_H__ */
