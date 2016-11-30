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


#ifndef __SQM_S25__24_H__
#define __SQM_S25__24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* SQM_S25 */
struct SQM_S25 : public HL7Message {
  SQM_S25() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID { FIELD_ID_MAX };

  const char* className() const { return "SQM_S25"; }
  SQM_S25* create() const { return new SQM_S25(); }

 private:
  /* Initialize object */
  void init() { setName("SQM_S25"); }

 public:
  /* Getters list */

  /* Checker list */
}; /* SQM_S25_ */
} /* namespace HL7_24 */
#endif /*  __SQM_S25__24_H__ */
