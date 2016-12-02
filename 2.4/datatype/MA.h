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


#ifndef __MA_v24_H__
#define __MA_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_24 {

/* multiplexed array */
class MA : public HL7Data {
 public:
  MA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MA_1, /* sample 1 from channel 1 */
    MA_2, /* sample 1 from channel 2 */
    MA_3, /* sample 1 from channel 3 */
    MA_4, /* sample 1 from channel 4 */
    MA_5, /* sample 1 from channel 5 */
    MA_6, /* sample 1 from channel 6 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MA"; }
  MA *create() const { return new MA(); }

 private:
  void init() {
    // setName("MA");
    /* Init members */
    addObject<NM>(MA_1, "MA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_2, "MA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_3, "MA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_4, "MA.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_5, "MA.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(MA_6, "MA.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * sample 1 from channel 1
   */
  NM *getMA_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_1);
  }

  NM *getSample1FromChannel1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_1);
  }

  bool isMA_1(size_t index = 0) {
    try {
      return this->getObject(index, MA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel1(size_t index = 0) {
    try {
      return this->getObject(index, MA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sample 1 from channel 2
   */
  NM *getMA_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_2);
  }

  NM *getSample1FromChannel2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_2);
  }

  bool isMA_2(size_t index = 0) {
    try {
      return this->getObject(index, MA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel2(size_t index = 0) {
    try {
      return this->getObject(index, MA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sample 1 from channel 3
   */
  NM *getMA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_3);
  }

  NM *getSample1FromChannel3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_3);
  }

  bool isMA_3(size_t index = 0) {
    try {
      return this->getObject(index, MA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel3(size_t index = 0) {
    try {
      return this->getObject(index, MA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sample 1 from channel 4
   */
  NM *getMA_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_4);
  }

  NM *getSample1FromChannel4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_4);
  }

  bool isMA_4(size_t index = 0) {
    try {
      return this->getObject(index, MA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel4(size_t index = 0) {
    try {
      return this->getObject(index, MA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sample 1 from channel 5
   */
  NM *getMA_5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_5);
  }

  NM *getSample1FromChannel5(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_5);
  }

  bool isMA_5(size_t index = 0) {
    try {
      return this->getObject(index, MA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel5(size_t index = 0) {
    try {
      return this->getObject(index, MA_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * sample 1 from channel 6
   */
  NM *getMA_6(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_6);
  }

  NM *getSample1FromChannel6(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MA_6);
  }

  bool isMA_6(size_t index = 0) {
    try {
      return this->getObject(index, MA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSample1FromChannel6(size_t index = 0) {
    try {
      return this->getObject(index, MA_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MA */

} /* End HL7_24 */

#endif /*__MA_v24_H__ */
