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


#ifndef __JCC_v24_H__
#define __JCC_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"

namespace HL7_24 {

/* job code/class */
class JCC : public HL7Data {
 public:
  JCC() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    JCC_1, /* job code */
    JCC_2, /* job class */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "JCC"; }
  JCC *create() const { return new JCC(); }

 private:
  void init() {
    // setName("JCC");
    /* Init members */
    addObject<IS>(JCC_1, "JCC.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(JCC_2, "JCC.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * job code
   */
  IS *getJCC_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, JCC_1);
  }

  IS *getJobCode(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, JCC_1);
  }

  bool isJCC_1(size_t index = 0) {
    try {
      return this->getObject(index, JCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobCode(size_t index = 0) {
    try {
      return this->getObject(index, JCC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * job class
   */
  IS *getJCC_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, JCC_2);
  }

  IS *getJobClass(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, JCC_2);
  }

  bool isJCC_2(size_t index = 0) {
    try {
      return this->getObject(index, JCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isJobClass(size_t index = 0) {
    try {
      return this->getObject(index, JCC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End JCC */

} /* End HL7_24 */

#endif /*__JCC_v24_H__ */
