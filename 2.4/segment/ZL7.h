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


#ifndef __ZL7_v24_H__
#define __ZL7_v24_H__

#include "../../common/Util.h"

namespace HL7_24 {

/* diverses */
class ZL7 : public HL7Segment {
 public:
  ZL7() { this->init(); }

 private:
  /* */
  enum FIELD_ID { FIELD_ID_MAX };

 public:
  const char* className() const { return "ZL7"; }
  ZL7* create() const { return new ZL7(); }

 private:
  void init() {
    setName("ZL7");
    /* Init members */
  }

 public:
  /* Getters */
}; /* End of ZL7 */

} /* End of namespace HL7_24 */
#endif /* __ZL7_v24_H__ */
