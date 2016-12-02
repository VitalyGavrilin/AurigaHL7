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


#ifndef __CE_0292_v24_H__
#define __CE_0292_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0292 : public HL7Data {
 public:
  CE_0292() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0292_1, /* identifier (ST) */
    CE_0292_2, /* text */
    CE_0292_3, /* name of coding system */
    CE_0292_4, /* alternate identifier (ST) */
    CE_0292_5, /* alternate text */
    CE_0292_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0292"; }
  CE_0292 *create() const { return new CE_0292(); }

 private:
  void init() {
    // setName("CE_0292");
    /* Init members */
    addObject<ST>(CE_0292_1, "CE_0292.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0292_1,
	      "01"); /* diphtheria, tetanus toxoids and pertussis vaccine */
    addParams(CE_0292_1, "02"); /* poliovirus vaccine, live, oral */
    addParams(CE_0292_1, "03"); /* measles, mumps and rubella virus vaccine */
    addParams(CE_0292_1, "04"); /* measles and rubella virus vaccine */
    addParams(CE_0292_1, "05"); /* measles virus vaccine */
    addParams(CE_0292_1, "06"); /* rubella virus vaccine */
    addParams(CE_0292_1, "07"); /* mumps virus vaccine */
    addParams(CE_0292_1, "08"); /* hepatitis B vaccine, pediatric or
				   pediatric/adolescent dosage */
    addParams(
	CE_0292_1,
	"09"); /* tetanus and diphtheria toxoids, adsorbed for adult use */
    addParams(CE_0292_1, "10"); /* poliovirus vaccine, inactivated */
    addParams(CE_0292_1,
	      "100"); /* pneumococcal conjugate vaccine, polyvalent */
    addParams(CE_0292_1,
	      "101");		/* Typhoid Vi capsular polysaccharide vaccine */
    addParams(CE_0292_1, "11"); /* pertussis vaccine */
    addParams(CE_0292_1, "12"); /* diphtheria antitoxin */
    addParams(CE_0292_1, "13"); /* tetanus immune globulin */
    addParams(CE_0292_1, "14"); /* immune globulin, NOS */
    addParams(CE_0292_1, "15"); /* influenza virus vaccine, split virus (incl.
				   purified surface antigen) */
    addParams(CE_0292_1, "16"); /* influenza virus vaccine, whole virus */
    addParams(CE_0292_1,
	      "17"); /* Haemophilus influenzae type b vaccine, conjugate NOS */
    addParams(CE_0292_1,
	      "18"); /* rabies vaccine, for intramuscular injection */
    addParams(CE_0292_1, "19"); /* Bacillus Calmette-Guerin vaccine */
    addParams(
	CE_0292_1,
	"20"); /* diphtheria, tetanus toxoids and acellular pertussis vaccine */
    addParams(CE_0292_1, "21"); /* varicella virus vaccine */
    addParams(CE_0292_1,
	      "22"); /* DTP-Haemophilus influenzae type b conjugate vaccine */
    addParams(CE_0292_1, "23"); /* plague vaccine */
    addParams(CE_0292_1, "24"); /* anthrax vaccine */
    addParams(CE_0292_1, "25"); /* typhoid vaccine, live, oral */
    addParams(CE_0292_1, "26"); /* cholera vaccine */
    addParams(CE_0292_1, "27"); /* botulinum antitoxin */
    addParams(
	CE_0292_1,
	"28"); /* diphtheria and tetanus toxoids, adsorbed for pediatric use */
    addParams(CE_0292_1,
	      "29"); /* cytomegalovirus immune globulin, intravenous */
    addParams(CE_0292_1, "30"); /* hepatitis B immune globulin */
    addParams(CE_0292_1, "31"); /* hepatitis A vaccine, pediatric dosage, NOS */
    addParams(CE_0292_1, "32"); /* meningococcal polysaccharide vaccine */
    addParams(CE_0292_1, "33"); /* pneumococcal  polysaccharide vaccine */
    addParams(CE_0292_1, "34"); /* rabies immune globulin */
    addParams(CE_0292_1, "35"); /* tetanus toxoid */
    addParams(CE_0292_1, "36"); /* varicella zoster immune globulin */
    addParams(CE_0292_1, "37"); /* yellow fever vaccine */
    addParams(CE_0292_1, "38"); /* rubella and mumps virus vaccine */
    addParams(CE_0292_1, "39"); /* Japanese encephalitis vaccine */
    addParams(CE_0292_1, "40"); /* rabies vaccine, for intradermal injection */
    addParams(CE_0292_1, "41"); /* typhoid vaccine, parenteral, other than
				   acetone-killed, dried */
    addParams(
	CE_0292_1,
	"42"); /* hepatitis B vaccine, adolescent/high risk infant dosage */
    addParams(CE_0292_1, "43"); /* hepatitis B vaccine, adult dosage */
    addParams(CE_0292_1,
	      "44"); /* hepatitis B vaccine, dialysis patient dosage */
    addParams(CE_0292_1, "45"); /* hepatitis B vaccine, NOS */
    addParams(
	CE_0292_1,
	"46"); /* Haemophilus influenzae type b vaccine, PRP-D conjugate */
    addParams(CE_0292_1,
	      "47"); /* Haemophilus influenzae type b vaccine, HbOC conjugate */
    addParams(
	CE_0292_1,
	"48"); /* Haemophilus influenzae type b vaccine, PRP-T conjugate */
    addParams(
	CE_0292_1,
	"49"); /* Haemophilus influenzae type b vaccine, PRP-OMP conjugate */
    addParams(CE_0292_1,
	      "50"); /* DTaP-Haemophilus influenzae type b conjugate vaccine */
    addParams(CE_0292_1, "51"); /* Haemophilus influenzae type b conjugate and
				   Hepatitis B vaccine */
    addParams(CE_0292_1, "52"); /* hepatitis A vaccine, adult dosage */
    addParams(
	CE_0292_1,
	"53"); /* typhoid vaccine, parenteral, acetone-killed, dried (U.S.
		  military) */
    addParams(CE_0292_1, "54"); /* adenovirus vaccine, type 4, live, oral */
    addParams(CE_0292_1, "55"); /* adenovirus vaccine, type 7, live, oral */
    addParams(CE_0292_1, "56"); /* dengue fever vaccine */
    addParams(CE_0292_1, "57"); /* hantavirus vaccine */
    addParams(CE_0292_1, "58"); /* hepatitis C vaccine */
    addParams(CE_0292_1, "59"); /* hepatitis E vaccine */
    addParams(CE_0292_1, "60"); /* herpes simplex virus, type 2 vaccine */
    addParams(CE_0292_1, "61"); /* human immunodeficiency virus vaccine */
    addParams(CE_0292_1, "62"); /* human papilloma virus vaccine */
    addParams(CE_0292_1, "63"); /* Junin virus vaccine */
    addParams(CE_0292_1, "64"); /* leishmaniasis vaccine */
    addParams(CE_0292_1, "65"); /* leprosy vaccine */
    addParams(CE_0292_1, "66"); /* Lyme disease vaccine */
    addParams(CE_0292_1, "67"); /* malaria vaccine */
    addParams(CE_0292_1, "68"); /* melanoma vaccine */
    addParams(CE_0292_1, "69"); /* parainfluenza-3 virus vaccine */
    addParams(CE_0292_1, "70"); /* Q fever vaccine */
    addParams(
	CE_0292_1,
	"71"); /* respiratory syncytial virus immune globulin, intravenous */
    addParams(CE_0292_1, "72"); /* rheumatic fever vaccine */
    addParams(CE_0292_1, "73"); /* Rift Valley fever vaccine */
    addParams(CE_0292_1, "74"); /* rotavirus vaccine, tetravalent, live, oral */
    addParams(CE_0292_1, "75"); /* smallpox vaccine */
    addParams(CE_0292_1, "76"); /* Staphylococcus bacteriophage lysate */
    addParams(CE_0292_1, "77"); /* tick-borne encephalitis vaccine */
    addParams(CE_0292_1, "78"); /* tularemia vaccine */
    addParams(CE_0292_1, "79"); /* vaccinia immune globulin */
    addParams(CE_0292_1,
	      "80"); /* Venezuelan equine encephalitis, live, attenuated */
    addParams(CE_0292_1,
	      "81"); /* Venezuelan equine encephalitis, inactivated */
    addParams(CE_0292_1, "82"); /* adenovirus vaccine, NOS */
    addParams(CE_0292_1, "83"); /* hepatitis A vaccine, pediatric/adolescent
				   dosage, 2 dose schedule */
    addParams(CE_0292_1, "84"); /* hepatitis A vaccine, pediatric/adolescent
				   dosage, 3 dose schedule */
    addParams(CE_0292_1, "85"); /* hepatitis A vaccine, NOS */
    addParams(CE_0292_1, "86"); /* immune globulin, intramuscular */
    addParams(CE_0292_1, "87"); /* immune globulin, intravenous */
    addParams(CE_0292_1, "88"); /* influenza virus vaccine, NOS */
    addParams(CE_0292_1, "89"); /* poliovirus vaccine, NOS */
    addParams(CE_0292_1, "90"); /* rabies vaccine, NOS */
    addParams(CE_0292_1, "91"); /* typhoid vaccine, NOS */
    addParams(CE_0292_1,
	      "92"); /* Venezuelan equine encephalitis vaccine, NOS */
    addParams(CE_0292_1, "93"); /* respiratory syncytial virus monoclonal
				   antibody (palivizumab), intramuscular */
    addParams(CE_0292_1,
	      "94"); /* measles, mumps, rubella, and varicella virus vaccine */
    addParams(
	CE_0292_1,
	"95"); /* tuberculin skin test; old tuberculin, multipuncture device */
    addParams(CE_0292_1, "96");  /* tuberculin skin test; purified protein
				    derivative solution, intradermal */
    addParams(CE_0292_1, "97");  /* tuberculin skin test; purified protein
				    derivative, multipuncture device */
    addParams(CE_0292_1, "98");  /* tuberculin skin test; NOS */
    addParams(CE_0292_1, "99");  /* RESERVED - do not use */
    addParams(CE_0292_1, "999"); /* unknown vaccine or immune globulin */
    addObject<ST>(CE_0292_2, "CE_0292.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0292_3, "CE_0292.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0292_4, "CE_0292.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0292_5, "CE_0292.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0292_6, "CE_0292.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0292_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_1);
  }

  bool isCE_0292_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0292_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_2);
  }

  bool isCE_0292_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0292_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0292_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0292_3);
  }

  bool isCE_0292_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0292_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_4);
  }

  bool isCE_0292_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0292_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0292_5);
  }

  bool isCE_0292_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0292_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0292_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0292_6);
  }

  bool isCE_0292_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0292_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0292 */

} /* End HL7_24 */

#endif /*__CE_0292_v24_H__ */
