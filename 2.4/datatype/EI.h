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


#ifndef __EI_v24_H__
#define __EI_v24_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* entity identifier */
class EI : public HL7Data {
 public:
  EI() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    EI_1, /* entity identifier */
    EI_2, /* namespace ID */
    EI_3, /* universal ID */
    EI_4, /* universal ID type */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "EI"; }
  EI *create() const { return new EI(); }

 private:
  void init() {
    // setName("EI");
    /* Init members */
    addObject<ST>(EI_1, "EI.1", HL7::initialized, HL7::repetition_off);
    addObject<IS>(EI_2, "EI.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(EI_3, "EI.3", HL7::initialized, HL7::repetition_off);
    addObject<ID>(EI_4, "EI.4", HL7::initialized, HL7::repetition_off);
    addParams(
	EI_4,
	"DNS"); /* An Internet dotted name. Either in ASCII or as integers */
    addParams(EI_4, "GUID"); /* Same as UUID. */
    addParams(EI_4,
	      "HCD");       /* The CEN Healthcare Coding Scheme Designator.
			       (Identifiers used in DICOM follow this assignment
			       scheme.) */
    addParams(EI_4, "HL7"); /* Reserved for future HL7 registration schemes */
    addParams(
	EI_4,
	"ISO"); /* An International Standards Organization Object Identifier */
    addParams(
	EI_4,
	"L,M,N"); /* These are reserved for locally defined coding schemes. */
    addParams(EI_4, "Random"); /* Usually a base64 encoded string of random
				  bits.   The uniqueness depends on the length
				  of the bits.  Mail systems often generate
				  ASCII string  "unique names," from a
				  combination of random bits and system names.
				  Obviously, such identifiers will not be con */
    addParams(EI_4, "UUID");   /* The DCE Universal Unique Identifier */
    addParams(EI_4, "x400");   /* An X.400 MHS format identifier */
    addParams(EI_4, "x500");   /* An X.500 directory name */
  }

 public:
  /* Getters */
  /****************************************
   * entity identifier
   */
  ST *getEI_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_1);
  }

  ST *getEntityIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_1);
  }

  bool isEI_1(size_t index = 0) {
    try {
      return this->getObject(index, EI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEntityIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * namespace ID
   */
  IS *getEI_2(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, EI_2);
  }

  IS *getNamespaceID(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, EI_2);
  }

  bool isEI_2(size_t index = 0) {
    try {
      return this->getObject(index, EI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNamespaceID(size_t index = 0) {
    try {
      return this->getObject(index, EI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * universal ID
   */
  ST *getEI_3(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_3);
  }

  ST *getUniversalID(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, EI_3);
  }

  bool isEI_3(size_t index = 0) {
    try {
      return this->getObject(index, EI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalID(size_t index = 0) {
    try {
      return this->getObject(index, EI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * universal ID type
   */
  ID *getEI_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, EI_4);
  }

  ID *getUniversalIDType(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, EI_4);
  }

  bool isEI_4(size_t index = 0) {
    try {
      return this->getObject(index, EI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isUniversalIDType(size_t index = 0) {
    try {
      return this->getObject(index, EI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End EI */

} /* End HL7_24 */

#endif /*__EI_v24_H__ */
