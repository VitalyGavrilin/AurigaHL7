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


#ifndef __HD_v24_H__
#define __HD_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* hierarchic designator */
class HD : public HL7Data {
 public:
  HD() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    HD_1, /* namespace ID */
    HD_2, /* universal ID */
    HD_3, /* universal ID type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "HD"; }
  HD *create() const { return new HD(); }

 private:
  void init() {
    // setName("HD");
    /* Init members */
    addObject<IS>(HD_1, "HD.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(HD_2, "HD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(HD_3, "HD.3", HL7::initialized, HL7::repetition_off);
    addParams(
	HD_3,
	"DNS"); /* An Internet dotted name. Either in ASCII or as integers */
    addParams(HD_3, "GUID"); /* Same as UUID. */
    addParams(HD_3,
	      "HCD");       /* The CEN Healthcare Coding Scheme Designator.
			       (Identifiers used in DICOM follow this assignment
			       scheme.) */
    addParams(HD_3, "HL7"); /* Reserved for future HL7 registration schemes */
    addParams(
	HD_3,
	"ISO"); /* An International Standards Organization Object Identifier */
    addParams(
	HD_3,
	"L,M,N"); /* These are reserved for locally defined coding schemes. */
    addParams(HD_3, "Random"); /* Usually a base64 encoded string of random
				  bits.   The uniqueness depends on the length
				  of the bits.  Mail systems often generate
				  ASCII string  "unique names," from a
				  combination of random bits and system names.
				  Obviously, such identifiers will not be con */
    addParams(HD_3, "UUID");   /* The DCE Universal Unique Identifier */
    addParams(HD_3, "x400");   /* An X.400 MHS format identifier */
    addParams(HD_3, "x500");   /* An X.500 directory name */
  }

 public:
  /* Getters */
  /****************************************
   * namespace ID
   */
  IS *getHD_1(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, HD_1);
  }

  IS *getNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, HD_1);
  }

  bool isHD_1(size_t index = 0) {
    try {
      return this->getObject(index, HD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, HD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * universal ID
   */
  ST *getHD_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, HD_2);
  }

  ST *getUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, HD_2);
  }

  bool isHD_2(size_t index = 0) {
    try {
      return this->getObject(index, HD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, HD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * universal ID type
   */
  ID *getHD_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, HD_3);
  }

  ID *getUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, HD_3);
  }

  bool isHD_3(size_t index = 0) {
    try {
      return this->getObject(index, HD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, HD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End HD */

} /* End HL7_24 */

#endif /*__HD_v24_H__ */
