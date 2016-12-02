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


#ifndef __CE_0259_v24_H__
#define __CE_0259_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0259 : public HL7Data {
 public:
  CE_0259() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0259_1, /* identifier (ST) */
    CE_0259_2, /* text */
    CE_0259_3, /* name of coding system */
    CE_0259_4, /* alternate identifier (ST) */
    CE_0259_5, /* alternate text */
    CE_0259_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0259"; }
  CE_0259 *create() const { return new CE_0259(); }

 private:
  void init() {
    // setName("CE_0259");
    /* Init members */
    addObject<ST>(CE_0259_1, "CE_0259.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0259_1, "AS"); /* Angioscopy */
    addParams(CE_0259_1, "BS"); /* Biomagnetic imaging */
    addParams(CE_0259_1, "CD"); /* Color flow Doppler */
    addParams(CE_0259_1, "CP"); /* Colposcopy */
    addParams(CE_0259_1, "CR"); /* Computed radiography */
    addParams(CE_0259_1, "CS"); /* Cystoscopy */
    addParams(CE_0259_1, "CT"); /* Computed tomography */
    addParams(CE_0259_1, "DD"); /* Duplex Doppler */
    addParams(CE_0259_1, "DG"); /* Diapanography */
    addParams(CE_0259_1, "DM"); /* Digital microscopy */
    addParams(CE_0259_1, "EC"); /* Echocardiography */
    addParams(CE_0259_1, "ES"); /* Endoscopy */
    addParams(CE_0259_1, "FA"); /* Fluorescein angiography */
    addParams(CE_0259_1, "FS"); /* Fundoscopy */
    addParams(CE_0259_1, "LP"); /* Laparoscopy */
    addParams(CE_0259_1, "LS"); /* Laser surface scan */
    addParams(CE_0259_1, "MA"); /* Magnetic resonance angiography */
    addParams(CE_0259_1, "MS"); /* Magnetic resonance spectroscopy */
    addParams(CE_0259_1, "NM"); /* Nuclear Medicine (radioisotope study) */
    addParams(CE_0259_1, "OT"); /* Other */
    addParams(CE_0259_1, "PT"); /* Positron emission tomography (PET) */
    addParams(CE_0259_1, "RF"); /* Radio fluoroscopy */
    addParams(CE_0259_1,
	      "ST"); /* Single photon emission computed tomography (SPECT) */
    addParams(CE_0259_1, "TG"); /* Thermography */
    addParams(CE_0259_1, "US"); /* Ultrasound */
    addParams(CE_0259_1, "XA"); /* X-ray Angiography */
    addObject<ST>(CE_0259_2, "CE_0259.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0259_3, "CE_0259.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0259_4, "CE_0259.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0259_5, "CE_0259.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0259_6, "CE_0259.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0259_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_1);
  }

  bool isCE_0259_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0259_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_2);
  }

  bool isCE_0259_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0259_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0259_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0259_3);
  }

  bool isCE_0259_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0259_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_4);
  }

  bool isCE_0259_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0259_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0259_5);
  }

  bool isCE_0259_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0259_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0259_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0259_6);
  }

  bool isCE_0259_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0259_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0259 */

} /* End HL7_24 */

#endif /*__CE_0259_v24_H__ */
