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


#ifndef __ERP_R09__24_H__
#define __ERP_R09__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* ERP_R09 */
struct ERP_R09 : public HL7Message {
  ERP_R09() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "ERP_R09"; }
  ERP_R09* create() const { return new ERP_R09(); }

 private:
  /* Initialize object */
  void init() { setName("ERP_R09"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* ERP_R09_ */
} /* namespace HL7_24 */
#endif /*  __ERP_R09__24_H__ */
