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


#ifndef __CE_0227_v24_H__
#define __CE_0227_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0227 : public HL7Data {
 public:
  CE_0227() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0227_1, /* identifier (ST) */
    CE_0227_2, /* text */
    CE_0227_3, /* name of coding system */
    CE_0227_4, /* alternate identifier (ST) */
    CE_0227_5, /* alternate text */
    CE_0227_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0227"; }
  CE_0227 *create() const { return new CE_0227(); }

 private:
  void init() {
    // setName("CE_0227");
    /* Init members */
    addObject<ST>(CE_0227_1, "CE_0227.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0227_1,
	      "AB"); /* Abbott Laboratories (includes Ross Products Division) */
    addParams(CE_0227_1, "AD");  /* Adams Laboratories */
    addParams(CE_0227_1, "ALP"); /* Alpha Therapeutic Corporation */
    addParams(CE_0227_1, "AR");  /* Armour [Inactive-use CEN] */
    addParams(CE_0227_1, "AVI"); /* Aviron */
    addParams(CE_0227_1, "BA");  /* Baxter Healthcare Corporation */
    addParams(CE_0227_1, "BAY"); /* Bayer Corporation(includes Miles, Inc. and
				    Cutter Laboratories) */
    addParams(CE_0227_1, "BP");  /* Berna Products [Inactive-use BPC] */
    addParams(CE_0227_1, "BPC"); /* Berna Products Corporation (includes Swiss
				    Serum and Vaccine Institute Berne) */
    addParams(
	CE_0227_1,
	"CEN"); /* Centeon L.L.C. (includes Armour Pharmaceutical Company) */
    addParams(CE_0227_1, "CHI"); /* Chiron Corporation */
    addParams(CE_0227_1, "CON"); /* Connaught [Inactive-use PMC] */
    addParams(CE_0227_1, "EVN"); /* Evans Medical Limited (an affiliate of
				    Medeva Pharmaceuticals, Inc.) */
    addParams(CE_0227_1, "GRE"); /* Greer Laboratories, Inc. */
    addParams(CE_0227_1, "IAG"); /* Immuno International AG */
    addParams(CE_0227_1, "IM");  /* Merieux [Inactive-use PMC] */
    addParams(CE_0227_1, "IUS"); /* Immuno-U.S., Inc. */
    addParams(CE_0227_1, "JPN"); /* The Research Foundation for Microbial
				    Diseases of Osaka University (BIKEN) */
    addParams(CE_0227_1, "KGC"); /* Korea Green Cross Corporation */
    addParams(CE_0227_1, "LED"); /* Lederle [Inactive-use WAL] */
    addParams(CE_0227_1,
	      "MA"); /* Massachusetts Public Health Biologic Laboratories */
    addParams(CE_0227_1, "MED"); /* MedImmune, Inc. */
    addParams(CE_0227_1, "MIL"); /* Miles [Inactive-use BAY] */
    addParams(CE_0227_1, "MIP"); /* Bioport Corporation (formerly Michigan
				    Biologic Products Institute) */
    addParams(CE_0227_1, "MSD"); /* Merck & Co., Inc. */
    addParams(CE_0227_1,
	      "NAB"); /* NABI (formerly North American Biologicals, Inc.) */
    addParams(CE_0227_1, "NAV"); /* North American Vaccine, Inc. */
    addParams(CE_0227_1, "NOV"); /* Novartis Pharmaceutical Corporation
				    (includes Ciba-Geigy Limited and Sandoz
				    Limited) */
    addParams(CE_0227_1, "NYB"); /* New York Blood Center */
    addParams(CE_0227_1, "ORT"); /* Ortho Diagnostic Systems, Inc. */
    addParams(CE_0227_1, "OTC"); /* Organon Teknika Corporation */
    addParams(CE_0227_1, "OTH"); /* Other manufacturer */
    addParams(CE_0227_1,
	      "PD"); /* Parkedale Pharmaceuticals (formerly Parke-Davis) */
    addParams(CE_0227_1, "PMC"); /* Aventis Pasteur Inc. (formerly Pasteur
				    Merieux Connaught; includes Connaught
				    Laboratories and Pasteur Merieux) */
    addParams(CE_0227_1, "PRX"); /* Praxis Biologics [Inactive-use WAL] */
    addParams(CE_0227_1, "SCL"); /* Sclavo, Inc. */
    addParams(CE_0227_1,
	      "SI"); /* Swiss Serum and Vaccine Inst. [Inactive-use BPC] */
    addParams(CE_0227_1, "SKB"); /* SmithKline Beecham */
    addParams(CE_0227_1, "UNK"); /* Unknown manufacturer */
    addParams(
	CE_0227_1,
	"USA"); /* United States Army Medical Research and Materiel Command */
    addParams(CE_0227_1, "WA"); /* Wyeth-Ayerst [Inactive-use WAL] */
    addParams(CE_0227_1,
	      "WAL"); /* Wyeth-Ayerst (includes Wyeth-Lederle Vaccines and
			 Pediatrics, Wyeth Laboratories, Lederle Laboratories,
			 and Praxis Biologics) */
    addObject<ST>(CE_0227_2, "CE_0227.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0227_3, "CE_0227.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0227_4, "CE_0227.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0227_5, "CE_0227.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0227_6, "CE_0227.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0227_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_1);
  }

  bool isCE_0227_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0227_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_2);
  }

  bool isCE_0227_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0227_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0227_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0227_3);
  }

  bool isCE_0227_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0227_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_4);
  }

  bool isCE_0227_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0227_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0227_5);
  }

  bool isCE_0227_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0227_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0227_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0227_6);
  }

  bool isCE_0227_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0227_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0227 */

} /* End HL7_24 */

#endif /*__CE_0227_v24_H__ */
