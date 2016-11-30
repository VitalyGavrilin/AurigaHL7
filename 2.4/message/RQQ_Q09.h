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


#ifndef __RQQ_Q09__24_H__
#define __RQQ_Q09__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* RQQ_Q09 */
struct RQQ_Q09 : public HL7Message {
  RQQ_Q09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "RQQ_Q09"; }
  RQQ_Q09* create() const { return new RQQ_Q09(); }

 private:
  /* Initialize object */
  void init() { setName("RQQ_Q09"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* RQQ_Q09_ */
} /* namespace HL7_24 */
#endif /*  __RQQ_Q09__24_H__ */
