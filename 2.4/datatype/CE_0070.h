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


#ifndef __CE_0070_v24_H__
#define __CE_0070_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/*  */
class CE_0070 : public HL7Data {
 public:
  CE_0070() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0070_1, /* identifier (ST) */
    CE_0070_2, /* text */
    CE_0070_3, /* name of coding system */
    CE_0070_4, /* alternate identifier (ST) */
    CE_0070_5, /* alternate text */
    CE_0070_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0070"; }
  CE_0070 *create() const { return new CE_0070(); }

 private:
  void init() {
    // setName("CE_0070");
    /* Init members */
    addObject<ST>(CE_0070_1, "CE_0070.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0070_1, "ABS");   /* Abscess */
    addParams(CE_0070_1, "AMN");   /* Amniotic fluid */
    addParams(CE_0070_1, "ASP");   /* Aspirate */
    addParams(CE_0070_1, "BBL");   /* Blood bag */
    addParams(CE_0070_1, "BDY");   /* Whole body */
    addParams(CE_0070_1, "BIFL");  /* Bile fluid */
    addParams(CE_0070_1, "BLD");   /* Whole blood */
    addParams(CE_0070_1, "BLDA");  /* Blood  arterial */
    addParams(CE_0070_1, "BLDC");  /* Blood  capillary */
    addParams(CE_0070_1, "BLDCO"); /* Cord blood */
    addParams(CE_0070_1, "BLDV");  /* Blood  venous */
    addParams(CE_0070_1, "BON");   /* Bone */
    addParams(CE_0070_1, "BPH");   /* Basophils */
    addParams(CE_0070_1, "BPU");   /* Blood product unit */
    addParams(CE_0070_1, "BRN");   /* Burn */
    addParams(CE_0070_1, "BRO");   /* Bronchial */
    addParams(CE_0070_1, "BRTH");  /* Breath (use EXHLD) */
    addParams(CE_0070_1, "CALC");  /* Calculus (=Stone) */
    addParams(CE_0070_1, "CBLD");  /* Cord blood */
    addParams(CE_0070_1, "CDM");   /* Cardiac muscle */
    addParams(CE_0070_1, "CNJT");  /* Conjunctiva */
    addParams(CE_0070_1, "CNL");   /* Cannula */
    addParams(CE_0070_1, "COL");   /* Colostrum */
    addParams(CE_0070_1, "CSF");   /* Cerebral spinal fluid */
    addParams(CE_0070_1, "CTP");   /* Catheter tip */
    addParams(CE_0070_1, "CUR");   /* Curettage */
    addParams(CE_0070_1, "CVM");   /* Cervical mucus */
    addParams(CE_0070_1, "CVX");   /* Cervix */
    addParams(CE_0070_1, "CYST");  /* Cyst */
    addParams(CE_0070_1, "DIAF");  /* Dialysis fluid */
    addParams(CE_0070_1, "DOSE");  /* Dose med or substance */
    addParams(CE_0070_1, "DRN");   /* Drain */
    addParams(CE_0070_1, "DUFL");  /* Duodenal fluid */
    addParams(CE_0070_1, "EAR");   /* Ear */
    addParams(CE_0070_1, "EARW");  /* Ear wax (cerumen) */
    addParams(CE_0070_1, "ELT");   /* Electrode */
    addParams(CE_0070_1, "ENDC");  /* Endocardium */
    addParams(CE_0070_1, "ENDM");  /* Endometrium */
    addParams(CE_0070_1, "EOS");   /* Eosinophils */
    addParams(CE_0070_1, "EXG");   /* Exhaled gas (=breath) */
    addParams(CE_0070_1, "EXHLD"); /* Exhaled gas (=breath) */
    addParams(CE_0070_1, "EYE");   /* Eye */
    addParams(CE_0070_1, "FIB");   /* Fibroblasts */
    addParams(CE_0070_1, "FIST");  /* Fistula */
    addParams(CE_0070_1, "FLT");   /* Filter */
    addParams(CE_0070_1, "FLU");   /* Body fluid, unsp */
    addParams(CE_0070_1, "GAS");   /* Gas */
    addParams(CE_0070_1, "GAST");  /* Gastric fluid/contents */
    addParams(CE_0070_1, "GEN");   /* Genital */
    addParams(CE_0070_1, "GENC");  /* Genital cervix */
    addParams(CE_0070_1, "GENL");  /* Genital lochia */
    addParams(CE_0070_1, "GENV");  /* Genital vaginal */
    addParams(CE_0070_1, "HAR");   /* Hair */
    addParams(CE_0070_1, "IHG");   /* Inhaled Gas */
    addParams(CE_0070_1, "ISLT");  /* Isolate */
    addParams(CE_0070_1, "IT");    /* Intubation tube */
    addParams(CE_0070_1, "LAM");   /* Lamella */
    addParams(CE_0070_1, "LIQ");   /* Liquid NOS */
    addParams(CE_0070_1, "LN");    /* Line */
    addParams(CE_0070_1, "LNA");   /* Line arterial */
    addParams(CE_0070_1, "LNV");   /* Line venous */
    addParams(CE_0070_1, "LYM");   /* Lymphocytes */
    addParams(CE_0070_1, "MAC");   /* Macrophages */
    addParams(CE_0070_1, "MAR");   /* Marrow */
    addParams(CE_0070_1, "MBLD");  /* Menstrual blood */
    addParams(CE_0070_1, "MEC");   /* Meconium */
    addParams(CE_0070_1, "MILK");  /* Breast milk */
    addParams(CE_0070_1, "MLK");   /* Milk */
    addParams(CE_0070_1, "NAIL");  /* Nail */
    addParams(CE_0070_1, "NOS");   /* Nose (nasal passage) */
    addParams(CE_0070_1, "ORH");   /* Other */
    addParams(CE_0070_1, "PAFL");  /* Pancreatic fluid */
    addParams(CE_0070_1, "PAT");   /* Patient */
    addParams(CE_0070_1, "PLAS");  /* Plasma */
    addParams(CE_0070_1, "PLB");   /* Plasma bag */
    addParams(CE_0070_1, "PLC");   /* Placenta */
    addParams(CE_0070_1, "PLR");   /* Pleural fluid (thoracentesis fld) */
    addParams(CE_0070_1, "PMN");   /* Polymorphonuclear neutrophils */
    addParams(CE_0070_1, "PPP");   /* Platelet poor plasma */
    addParams(CE_0070_1, "PRP");   /* Platelet rich plasma */
    addParams(CE_0070_1, "PRT");   /* Peritoneal fluid /ascites */
    addParams(CE_0070_1, "PUS");   /* Pus */
    addParams(CE_0070_1, "RBC");   /* Erythrocytes */
    addParams(CE_0070_1, "RT");    /* Route of medicine */
    addParams(CE_0070_1, "SAL");   /* Saliva */
    addParams(CE_0070_1, "SEM");   /* Seminal fluid */
    addParams(CE_0070_1, "SER");   /* Serum */
    addParams(CE_0070_1, "SKM");   /* Skeletal muscle */
    addParams(CE_0070_1, "SKN");   /* Skin */
    addParams(CE_0070_1, "SMN");   /* Seminal fluid */
    addParams(CE_0070_1, "SNV");   /* Synovial fluid (Joint fluid) */
    addParams(CE_0070_1, "SPRM");  /* Spermatozoa */
    addParams(CE_0070_1, "SPT");   /* Sputum */
    addParams(CE_0070_1, "SPTC");  /* Sputum - coughed */
    addParams(CE_0070_1, "SPTT");  /* Sputum - tracheal aspirate */
    addParams(CE_0070_1, "STL");   /* Stool = Fecal */
    addParams(CE_0070_1, "STON");  /* Stone (use CALC) */
    addParams(CE_0070_1, "SWT");   /* Sweat */
    addParams(CE_0070_1, "TEAR");  /* Tears */
    addParams(CE_0070_1, "THRB");  /* Thrombocyte (platelet) */
    addParams(CE_0070_1, "THRT");  /* Throat */
    addParams(CE_0070_1, "TISG");  /* Tissue gall bladder */
    addParams(CE_0070_1, "TISPL"); /* Tissue placenta */
    addParams(CE_0070_1, "TISS");  /* Tissue */
    addParams(CE_0070_1, "TISU");  /* Tissue ulcer */
    addParams(CE_0070_1, "TLGI");  /* Tissue large intestine */
    addParams(CE_0070_1, "TLNG");  /* Tissue lung */
    addParams(CE_0070_1, "TSMI");  /* Tissue small intestine */
    addParams(CE_0070_1, "TUB");   /* Tube NOS */
    addParams(CE_0070_1, "ULC");   /* Ulcer */
    addParams(CE_0070_1, "UMB");   /* Umbilical blood */
    addParams(CE_0070_1, "UMED");  /* Unknown medicine */
    addParams(CE_0070_1, "UR");    /* Urine */
    addParams(CE_0070_1, "URC");   /* Urine clean catch */
    addParams(CE_0070_1, "URNS");  /* Urine sediment */
    addParams(CE_0070_1, "URT");   /* Urine catheter */
    addParams(CE_0070_1, "URTH");  /* Urethra */
    addParams(CE_0070_1, "USUB");  /* Unknown substance */
    addParams(CE_0070_1, "VITF");  /* Vitreous Fluid */
    addParams(CE_0070_1, "VOM");   /* Vomitus */
    addParams(CE_0070_1, "WAT");   /* Water */
    addParams(CE_0070_1, "WBC");   /* Leukocytes */
    addParams(CE_0070_1, "WICK");  /* Wick */
    addParams(CE_0070_1, "WND");   /* Wound */
    addParams(CE_0070_1, "WNDA");  /* Wound abscess */
    addParams(CE_0070_1, "WNDD");  /* Wound drainage */
    addParams(CE_0070_1, "WNDE");  /* Wound exudate */
    addParams(CE_0070_1,
	      "XXX"); /* To be specified in another part of the message */
    addObject<ST>(CE_0070_2, "CE_0070.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0070_3, "CE_0070.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0070_4, "CE_0070.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0070_5, "CE_0070.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0070_6, "CE_0070.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0070_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_1);
  }

  bool isCE_0070_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0070_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_2);
  }

  bool isCE_0070_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0070_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0070_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0070_3);
  }

  bool isCE_0070_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0070_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_4);
  }

  bool isCE_0070_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0070_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0070_5);
  }

  bool isCE_0070_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0070_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0070_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0070_6);
  }

  bool isCE_0070_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0070_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0070 */

} /* End HL7_24 */

#endif /*__CE_0070_v24_H__ */
