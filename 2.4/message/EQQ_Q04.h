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


#ifndef __EQQ_Q04__24_H__
#define __EQQ_Q04__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* EQQ_Q04 */
struct EQQ_Q04 : public HL7Message {
  EQQ_Q04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "EQQ_Q04"; }
  EQQ_Q04* create() const { return new EQQ_Q04(); }

 private:
  /* Initialize object */
  void init() { setName("EQQ_Q04"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* EQQ_Q04_ */
} /* namespace HL7_24 */
#endif /*  __EQQ_Q04__24_H__ */
