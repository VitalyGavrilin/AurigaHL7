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


#ifndef __CE_0006_v24_H__
#define __CE_0006_v24_H__

#include "../../common/Util.h"
#include "../datatype/IS.h"
#include "../datatype/ST.h"

namespace HL7_24 {

/* CE with table 6 */
class CE_0006 : public HL7Data {
 public:
  CE_0006() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    CE_0006_1, /* identifier (ST) */
    CE_0006_2, /* text */
    CE_0006_3, /* name of coding system */
    CE_0006_4, /* alternate identifier (ST) */
    CE_0006_5, /* alternate text */
    CE_0006_6, /* name of alternate coding system */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "CE_0006"; }
  CE_0006 *create() const { return new CE_0006(); }

 private:
  void init() {
    // setName("CE_0006");
    /* Init members */
    addObject<ST>(CE_0006_1, "CE_0006.1", HL7::initialized,
		  HL7::repetition_off);
    addParams(CE_0006_1, "ABC"); /* Christian: American Baptist Church */
    addParams(CE_0006_1, "AGN"); /* Agnostic */
    addParams(CE_0006_1,
	      "AME"); /* Christian: African Methodist Episcopal Zion */
    addParams(CE_0006_1, "AMT"); /* Christian: African Methodist Episcopal */
    addParams(CE_0006_1, "ANG"); /* Christian: Anglican */
    addParams(CE_0006_1, "AOG"); /* Christian: Assembly of God */
    addParams(CE_0006_1, "ATH"); /* Atheist */
    addParams(CE_0006_1, "BAH"); /* Baha'i */
    addParams(CE_0006_1, "BAP"); /* Christian: Baptist */
    addParams(CE_0006_1, "BMA"); /* Buddhist: Mahayana */
    addParams(CE_0006_1, "BOT"); /* Buddhist: Other */
    addParams(CE_0006_1, "BTA"); /* Buddhist: Tantrayana */
    addParams(CE_0006_1, "BTH"); /* Buddhist: Theravada */
    addParams(CE_0006_1, "BUD"); /* Buddhist */
    addParams(CE_0006_1, "CAT"); /* Christian: Roman Catholic */
    addParams(CE_0006_1, "CFR"); /* Chinese Folk Religionist */
    addParams(CE_0006_1, "CHR"); /* Christian */
    addParams(CE_0006_1, "CHS"); /* Christian: Christian Science */
    addParams(CE_0006_1, "CMA"); /* Christian: Christian Missionary Alliance */
    addParams(CE_0006_1, "CNF"); /* Confucian */
    addParams(CE_0006_1, "COC"); /* Christian: Church of Christ */
    addParams(CE_0006_1, "COG"); /* Christian: Church of God */
    addParams(CE_0006_1, "COI"); /* Christian: Church of God in Christ */
    addParams(CE_0006_1, "COL"); /* Christian: Congregational */
    addParams(CE_0006_1, "COM"); /* Christian: Community */
    addParams(CE_0006_1, "COP"); /* Christian: Other Pentecostal */
    addParams(CE_0006_1, "COT"); /* Christian: Other */
    addParams(CE_0006_1, "CRR"); /* Christian: Christian Reformed */
    addParams(CE_0006_1, "EOT"); /* Christian: Eastern Orthodox */
    addParams(CE_0006_1, "EPI"); /* Christian: Episcopalian */
    addParams(CE_0006_1, "ERL"); /* Ethnic Religionist */
    addParams(CE_0006_1, "EVC"); /* Christian: Evangelical Church */
    addParams(CE_0006_1, "FRQ"); /* Christian: Friends */
    addParams(CE_0006_1, "FWB"); /* Christian: Free Will Baptist */
    addParams(CE_0006_1, "GRE"); /* Christian: Greek Orthodox */
    addParams(CE_0006_1, "HIN"); /* Hindu */
    addParams(CE_0006_1, "HOT"); /* Hindu: Other */
    addParams(CE_0006_1, "HSH"); /* Hindu: Shaivites */
    addParams(CE_0006_1, "HVA"); /* Hindu: Vaishnavites */
    addParams(CE_0006_1, "JAI"); /* Jain */
    addParams(CE_0006_1, "JCO"); /* Jewish: Conservative */
    addParams(CE_0006_1, "JEW"); /* Jewish */
    addParams(CE_0006_1, "JOR"); /* Jewish: Orthodox */
    addParams(CE_0006_1, "JOT"); /* Jewish: Other */
    addParams(CE_0006_1, "JRC"); /* Jewish: Reconstructionist */
    addParams(CE_0006_1, "JRF"); /* Jewish: Reform */
    addParams(CE_0006_1, "JRN"); /* Jewish: Renewal */
    addParams(CE_0006_1, "JWN"); /* Christian: Jehovah's Witness */
    addParams(CE_0006_1, "LMS"); /* Christian: Lutheran Missouri Synod */
    addParams(CE_0006_1, "LUT"); /* Christian: Lutheran */
    addParams(CE_0006_1, "MEN"); /* Christian: Mennonite */
    addParams(CE_0006_1, "MET"); /* Christian: Methodist */
    addParams(CE_0006_1, "MOM"); /* Christian: Latter-day Saints */
    addParams(CE_0006_1, "MOS"); /* Muslim */
    addParams(CE_0006_1, "MOT"); /* Muslim: Other */
    addParams(CE_0006_1, "MSH"); /* Muslim: Shiite */
    addParams(CE_0006_1, "MSU"); /* Muslim: Sunni */
    addParams(CE_0006_1, "NAM"); /* Native American */
    addParams(CE_0006_1, "NAZ"); /* Christian: Church of the Nazarene */
    addParams(CE_0006_1, "NOE"); /* Nonreligious */
    addParams(CE_0006_1, "NRL"); /* New Religionist */
    addParams(CE_0006_1, "ORT"); /* Christian: Orthodox */
    addParams(CE_0006_1, "OTH"); /* Other */
    addParams(CE_0006_1, "PEN"); /* Christian: Pentecostal */
    addParams(CE_0006_1, "PRC"); /* Christian: Other Protestant */
    addParams(CE_0006_1, "PRE"); /* Christian: Presbyterian */
    addParams(CE_0006_1, "PRO"); /* Christian: Protestant */
    addParams(CE_0006_1, "QUA"); /* Christian: Friends */
    addParams(CE_0006_1, "REC"); /* Christian: Reformed Church */
    addParams(CE_0006_1,
	      "REO"); /* Christian: Reorganized Church of Jesus Christ-LDS */
    addParams(CE_0006_1, "SAA"); /* Christian: Salvation Army */
    addParams(CE_0006_1, "SEV"); /* Christian: Seventh Day Adventist */
    addParams(CE_0006_1, "SHN"); /* Shintoist */
    addParams(CE_0006_1, "SIK"); /* Sikh */
    addParams(CE_0006_1, "SOU"); /* Christian: Southern Baptist */
    addParams(CE_0006_1, "SPI"); /* Spiritist */
    addParams(CE_0006_1, "UCC"); /* Christian: United Church of Christ */
    addParams(CE_0006_1, "UMD"); /* Christian: United Methodist */
    addParams(CE_0006_1, "UNI"); /* Christian: Unitarian */
    addParams(CE_0006_1, "UNU"); /* Christian: Unitarian Universalist */
    addParams(CE_0006_1, "VAR"); /* Unknown */
    addParams(CE_0006_1, "WES"); /* Christian: Wesleyan */
    addParams(CE_0006_1, "WMC"); /* Christian: Wesleyan Methodist */
    addObject<ST>(CE_0006_2, "CE_0006.2", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0006_3, "CE_0006.3", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0006_4, "CE_0006.4", HL7::initialized,
		  HL7::repetition_off);
    addObject<ST>(CE_0006_5, "CE_0006.5", HL7::initialized,
		  HL7::repetition_off);
    addObject<IS>(CE_0006_6, "CE_0006.6", HL7::initialized,
		  HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * identifier (ST)
   */
  ST *getCE_0006_1(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_1);
  }

  ST *getIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_1);
  }

  bool isCE_0006_1(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * text
   */
  ST *getCE_0006_2(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_2);
  }

  ST *getText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_2);
  }

  bool isCE_0006_2(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of coding system
   */
  IS *getCE_0006_3(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0006_3);
  }

  IS *getNameOfCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0006_3);
  }

  bool isCE_0006_3(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate identifier (ST)
   */
  ST *getCE_0006_4(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_4);
  }

  ST *getAlternateIdentifier(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_4);
  }

  bool isCE_0006_4(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * alternate text
   */
  ST *getCE_0006_5(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_5);
  }

  ST *getAlternateText(size_t index = 0) {
    return (ST *)this->getObjectSafe(index, CE_0006_5);
  }

  bool isCE_0006_5(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternateText(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * name of alternate coding system
   */
  IS *getCE_0006_6(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0006_6);
  }

  IS *getNameOfAlternateCodingSystem(size_t index = 0) {
    return (IS *)this->getObjectSafe(index, CE_0006_6);
  }

  bool isCE_0006_6(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameOfAlternateCodingSystem(size_t index = 0) {
    try {
      return this->getObject(index, CE_0006_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End CE_0006 */

} /* End HL7_24 */

#endif /*__CE_0006_v24_H__ */
