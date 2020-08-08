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


#ifndef __URD_v281_H__
#define __URD_v281_H__

#include "../../common/Util.h"

namespace HL7_281 {

/*  */
class URD : public HL7Segment {
 public:
  URD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "URD"; }
  URD* create() const { return new URD(); }

 private:
  void init() {
    setName("URD");
    /* Init members */
  }

 public:
  /* Getters */
}; /* End of URD */

} /* End of namespace HL7_281 */
#endif /* __URD_v281_H__ */
