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


#ifndef __CE_0254_v24_H__
#define __CE_0254_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* CE_NORM mit Tab. 0255 */
class CE_0254 : public HL7Data {
 public:
  CE_0254() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0254_1, /* identifier (ST) */
    CE_0254_2, /* text */
    CE_0254_3, /* name of coding system */
    CE_0254_4, /* alternate identifier (ST) */
    CE_0254_5, /* alternate text */
    CE_0254_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0254"; }
  CE_0254 *create() const { return new CE_0254(); }

 private:
  void init() {
    // setName("CE_0254");
    /* Init members */
    addObject<ST>(CE_0254_1, "CE_0254.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0254_1, "ABS");     /* Absorbance */
    addParams(CE_0254_1, "ACNC");    /* Concentration, Arbitrary Substance */
    addParams(CE_0254_1, "ACT");     /* *Activity */
    addParams(CE_0254_1, "APER");    /* Appearance */
    addParams(CE_0254_1, "ARB");     /* *Arbitrary */
    addParams(CE_0254_1, "AREA");    /* Area */
    addParams(CE_0254_1, "ASPECT");  /* Aspect */
    addParams(CE_0254_1, "CACT");    /* *Catalytic Activity */
    addParams(CE_0254_1, "CCNT");    /* *Catalytic Content */
    addParams(CE_0254_1, "CCRTO");   /* Catalytic Concentration Ratio */
    addParams(CE_0254_1, "CFR");     /* *Catalytic Fraction */
    addParams(CE_0254_1, "CLAS");    /* Class */
    addParams(CE_0254_1, "CNC");     /* *Catalytic Concentration */
    addParams(CE_0254_1, "CNST");    /* *Constant */
    addParams(CE_0254_1, "COEF");    /* *Coefficient */
    addParams(CE_0254_1, "COLOR");   /* Color */
    addParams(CE_0254_1, "CONS");    /* Consistency */
    addParams(CE_0254_1, "CRAT");    /* *Catalytic Rate */
    addParams(CE_0254_1, "CRTO");    /* Catalytic Ratio */
    addParams(CE_0254_1, "DEN");     /* Density */
    addParams(CE_0254_1, "DEV");     /* Device */
    addParams(CE_0254_1, "DIFF");    /* *Difference */
    addParams(CE_0254_1, "ELAS");    /* Elasticity */
    addParams(CE_0254_1, "ELPOT");   /* Electrical Potential (Voltage) */
    addParams(CE_0254_1, "ELRAT");   /* Electrical current (amperage) */
    addParams(CE_0254_1, "ELRES");   /* Electrical Resistance */
    addParams(CE_0254_1, "ENGR");    /* Energy */
    addParams(CE_0254_1, "ENT");     /* *Entitic */
    addParams(CE_0254_1, "ENTCAT");  /* *Entitic Catalytic Activity */
    addParams(CE_0254_1, "ENTNUM");  /* *Entitic Number */
    addParams(CE_0254_1, "ENTSUB");  /* *Entitic Substance of Amount */
    addParams(CE_0254_1, "ENTVOL");  /* *Entitic Volume */
    addParams(CE_0254_1, "EQL");     /* Equilibrium */
    addParams(CE_0254_1, "FORCE");   /* Mechanical force */
    addParams(CE_0254_1, "FREQ");    /* Frequency */
    addParams(CE_0254_1, "IMP");     /* Impression/ interpretation of study */
    addParams(CE_0254_1, "KINV");    /* *Kinematic Viscosity */
    addParams(CE_0254_1, "LEN");     /* Length */
    addParams(CE_0254_1, "LINC");    /* *Length Increment */
    addParams(CE_0254_1, "LIQ");     /* *Liquefaction */
    addParams(CE_0254_1, "MASS");    /* *Mass */
    addParams(CE_0254_1, "MCNC");    /* *Mass Concentration */
    addParams(CE_0254_1, "MCNT");    /* Mass Content */
    addParams(CE_0254_1, "MCRTO");   /* *Mass Concentration Ratio */
    addParams(CE_0254_1, "MFR");     /* *Mass Fraction */
    addParams(CE_0254_1, "MGFLUX");  /* Magnetic flux */
    addParams(CE_0254_1, "MINC");    /* *Mass Increment */
    addParams(CE_0254_1, "MORPH");   /* Morphology */
    addParams(CE_0254_1, "MOTIL");   /* Motility */
    addParams(CE_0254_1, "MRAT");    /* *Mass Rate */
    addParams(CE_0254_1, "MRTO");    /* *Mass Ratio */
    addParams(CE_0254_1, "NCNC");    /* *Number Concentration */
    addParams(CE_0254_1, "NCNT");    /* *Number Content */
    addParams(CE_0254_1, "NFR");     /* *Number Fraction */
    addParams(CE_0254_1, "NRTO");    /* *Number Ratio */
    addParams(CE_0254_1, "NUM");     /* *Number */
    addParams(CE_0254_1, "OD");      /* Optical density */
    addParams(CE_0254_1, "OSMOL");   /* *Osmolality */
    addParams(CE_0254_1, "PRES");    /* *Pressure (Partial) */
    addParams(CE_0254_1, "PRID");    /* Presence/Identity/Existence */
    addParams(CE_0254_1, "PWR");     /* Power (wattage) */
    addParams(CE_0254_1, "RANGE");   /* *Ranges */
    addParams(CE_0254_1, "RATIO");   /* *Ratios */
    addParams(CE_0254_1, "RCRLTM");  /* *Reciprocal Relative Time */
    addParams(CE_0254_1, "RDEN");    /* *Relative Density */
    addParams(CE_0254_1, "REL");     /* *Relative */
    addParams(CE_0254_1, "RLMCNC");  /* *Relative Mass Concentration */
    addParams(CE_0254_1, "RLSCNC");  /* *Relative Substance Concentration */
    addParams(CE_0254_1, "RLTM");    /* *Relative Time */
    addParams(CE_0254_1, "SATFR");   /* *Saturation Fraction */
    addParams(CE_0254_1, "SCNC");    /* *Substance Concentration */
    addParams(CE_0254_1, "SCNCIN");  /* *Substance Concentration Increment */
    addParams(CE_0254_1, "SCNT");    /* *Substance Content */
    addParams(CE_0254_1, "SCNTR");   /* *Substance Content Rate */
    addParams(CE_0254_1, "SCRTO");   /* *Substance Concentration Ratio */
    addParams(CE_0254_1, "SFR");     /* *Substance Fraction */
    addParams(CE_0254_1, "SHAPE");   /* Shape */
    addParams(CE_0254_1, "SMELL");   /* Smell */
    addParams(CE_0254_1, "SRAT");    /* *Substance Rate */
    addParams(CE_0254_1, "SRTO");    /* *Substance Ratio */
    addParams(CE_0254_1, "SUB");     /* *Substance Amount */
    addParams(CE_0254_1, "SUSC");    /* *Susceptibility */
    addParams(CE_0254_1, "TASTE");   /* Taste */
    addParams(CE_0254_1, "TEMP");    /* *Temperature */
    addParams(CE_0254_1, "TEMPDF");  /* *Temperature Difference */
    addParams(CE_0254_1, "TEMPIN");  /* *Temperature Increment */
    addParams(CE_0254_1, "THRMCNC"); /* *Threshold Mass Concentration */
    addParams(CE_0254_1, "THRSCNC"); /* *Threshold Substance Concentration */
    addParams(CE_0254_1, "TIME");    /* *Time (e.g. seconds) */
    addParams(CE_0254_1, "TITR");    /* *Dilution Factor (Titer) */
    addParams(CE_0254_1, "TMDF");    /* *Time Difference */
    addParams(CE_0254_1, "TMSTP");   /* *Time Stamp -- Date and Time */
    addParams(CE_0254_1, "TRTO");    /* *Time Ratio */
    addParams(CE_0254_1, "TYPE");    /* *Type */
    addParams(CE_0254_1, "VCNT");    /* *Volume Content */
    addParams(CE_0254_1, "VEL");     /* *Velocity */
    addParams(CE_0254_1, "VELRT");   /* *Velocity Ratio */
    addParams(CE_0254_1, "VFR");     /* *Volume Fraction */
    addParams(CE_0254_1, "VISC");    /* *Viscosity */
    addParams(CE_0254_1, "VOL");     /* *Volume */
    addParams(CE_0254_1, "VRAT");    /* *Volume Rate */
    addParams(CE_0254_1, "VRTO");    /* *Volume Ratio */
    addObject<ST>(CE_0254_2, "CE_0254.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0254_3, "CE_0254.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0254_4, "CE_0254.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0254_5, "CE_0254.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0254_6, "CE_0254.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0254_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_1);
  }

  bool isCE_0254_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0254_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_2);
  }

  bool isCE_0254_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0254_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0254_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0254_3);
  }

  bool isCE_0254_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0254_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_4);
  }

  bool isCE_0254_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0254_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0254_5);
  }

  bool isCE_0254_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0254_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0254_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0254_6);
  }

  bool isCE_0254_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0254_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0254 */

} /* End HL7_24 */

#endif /*__CE_0254_v24_H__ */
