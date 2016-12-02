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


#ifndef __ED_v24_H__
#define __ED_v24_H__

#include "../../common/Util.h"
#include "../datatype/HD.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* encapsulated data */
class ED : public HL7Data {
 public:
  ED() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    ED_1, /* source application */
    ED_2, /* type of data */
    ED_3, /* data */
    ED_4, /* encoding */
    ED_5, /* data */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "ED"; }
  ED *create() const { return new ED(); }

 private:
  void init() {
    // setName("ED");
    /* Init members */
    addObject<HD>(ED_1, "ED.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ED_2, "ED.2", HL7::initialized, HL7::repetition_off);
    addParams(ED_2, "AP"); /* Other application data, typically uninterpreted
			      binary data  (HL7 V2.3 and later) */
    addParams(ED_2, "AU"); /* Audio data  (HL7 V2.3 and later) */
    addParams(ED_2, "FT"); /* Formatted text (HL7 V2.2 only) */
    addParams(ED_2, "IM"); /* Image data  (HL7 V2.3 and later) */
    addParams(ED_2, "multipart"); /* MIME multipart package */
    addParams(ED_2, "NS");	/* Non-scanned image (HL7 V2.2 only) */
    addParams(ED_2, "SD");	/* Scanned document (HL7 V2.2 only) */
    addParams(ED_2, "SI");	/* Scanned image (HL7 V2.2 only) */
    addParams(
	ED_2,
	"TEXT"); /* Machine readable text document (HL7 V2.3.1 and later) */
    addParams(ED_2, "TX"); /* Machine readable text document (HL7 V2.2 only) */
    addObject<ID>(ED_3, "ED.3", HL7::initialized, HL7::repetition_off);
    addParams(ED_3, "BASIC"); /* ISDN PCM audio data */
    addParams(ED_3,
	      "DICOM");     /* Digital Imaging and Communications in Medicine */
    addParams(ED_3, "FAX"); /* Facsimile data */
    addParams(ED_3, "GIF"); /* Graphics Interchange Format */
    addParams(ED_3, "HTML"); /* Hypertext Markup Language */
    addParams(ED_3, "JOT");  /* Electronic ink data (Jot 1.0 standard) */
    addParams(ED_3, "JPEG"); /* Joint Photographic Experts Group */
    addParams(ED_3, "Octet-stream"); /* Uninterpreted binary data */
    addParams(ED_3, "PICT");	 /* PICT format image data */
    addParams(ED_3, "PostScript");   /* PostScript program */
    addParams(ED_3, "RTF");	  /* Rich Text Format */
    addParams(ED_3,
	      "SGML"); /* Standard Generalized Markup Language (HL7 V2.3.1 and
			  later) */
    addParams(ED_3, "TIFF");		    /* TIFF image data */
    addParams(ED_3, "x-hl7-cda-level-one"); /* HL7 Clinical Document
					       Architecture Level One document
					       */
    addParams(ED_3,
	      "XML"); /* Extensible Markup Language (HL7 V2.3.1 and later) */
    addObject<ID>(ED_4, "ED.4", HL7::initialized, HL7::repetition_off);
    addParams(ED_4,
	      "A"); /* No encoding - data are displayable ASCII characters. */
    addParams(ED_4, "Base64"); /* Encoding as defined by MIME (Multipurpose
				  Internet Mail Extensions) standard RFC 1521.
				  Four consecutive ASCII characters represent
				  three consecutive octets of binary data.
				  Base64 utilizes a 65-character subset of
				  US-ASCII, consisting of both the upper a */
    addParams(ED_4, "Hex");    /* Hexadecimal encoding - consecutive pairs of
				  hexadecimal digits represent consecutive single
				  octets. */
    addObject<ST>(ED_5, "ED.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * source application
   */
  HD *getED_1(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, ED_1);
  }

  HD *getSourceApplication(size_t index = 0) {
    return (HD *)this->getObjectSafe(index, ED_1);
  }

  bool isED_1(size_t index = 0) {
    try {
      return this->getObject(index, ED_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceApplication(size_t index = 0) {
    try {
      return this->getObject(index, ED_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * type of data
   */
  ID *getED_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_2);
  }

  ID *getTypeOfData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_2);
  }

  bool isED_2(size_t index = 0) {
    try {
      return this->getObject(index, ED_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTypeOfData(size_t index = 0) {
    try {
      return this->getObject(index, ED_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * data
   */
  ID *getED_3(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_3);
  }

  ID *getData(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_3);
  }

  bool isED_3(size_t index = 0) {
    try {
      return this->getObject(index, ED_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isData(size_t index = 0) {
    try {
      return this->getObject(index, ED_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * encoding
   */
  ID *getED_4(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_4);
  }

  ID *getEncoding(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, ED_4);
  }

  bool isED_4(size_t index = 0) {
    try {
      return this->getObject(index, ED_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEncoding(size_t index = 0) {
    try {
      return this->getObject(index, ED_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * data
   */
  ST *getED_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, ED_5);
  }

  bool isED_5(size_t index = 0) {
    try {
      return this->getObject(index, ED_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End ED */

} /* End HL7_24 */

#endif /*__ED_v24_H__ */
