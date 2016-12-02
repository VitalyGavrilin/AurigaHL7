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


#ifndef __FTS_v24_H__
#define __FTS_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* File Trailer */
class FTS : public HL7Segment {
 public:
  FTS() { this->init(); }

 private:
  /* */
  enum FIELD_ID { FTS_1, FTS_2, FIELD_ID_MAX };

 public:
  const char* className() const { return "FTS"; }
  FTS* create() const { return new FTS(); }

 private:
  void init() {
    setName("FTS");
    /* Init members */
    addObject<NM>(FTS_1, "FTS.1", HL7::optional, HL7::repetition_off);
    addObject<ST>(FTS_2, "FTS.2", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * File Batch Count
   */

  NM* getFTS_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FTS_1);
  }

  NM* getFileBatchCount(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, FTS_1);
  }

  bool isFTS_1(size_t index = 0) {
    try {
      return this->getObject(index, FTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileBatchCount(size_t index = 0) {
    try {
      return this->getObject(index, FTS_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * File Trailer Comment
   */

  ST* getFTS_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FTS_2);
  }

  ST* getFileTrailerComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, FTS_2);
  }

  bool isFTS_2(size_t index = 0) {
    try {
      return this->getObject(index, FTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFileTrailerComment(size_t index = 0) {
    try {
      return this->getObject(index, FTS_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of FTS */

} /* End of namespace HL7_24 */
#endif /* __FTS_v24_H__ */
