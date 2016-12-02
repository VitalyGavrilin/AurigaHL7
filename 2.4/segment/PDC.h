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


#ifndef __PDC_v24_H__
#define __PDC_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE.h"
#include "../datatype/CQ.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/TS.h"
#include "../datatype/XON.h"

namespace HL7_24 {

/* Product Detail Country */
class PDC : public HL7Segment {
 public:
  PDC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PDC_1,
    PDC_2,
    PDC_3,
    PDC_4,
    PDC_5,
    PDC_6,
    PDC_7,
    PDC_8,
    PDC_9,
    PDC_10,
    PDC_11,
    PDC_12,
    PDC_13,
    PDC_14,
    PDC_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PDC"; }
  PDC* create() const { return new PDC(); }

 private:
  void init() {
    setName("PDC");
    /* Init members */
    addObject<XON>(PDC_1, "PDC.1", HL7::initialized, HL7::repetition_on);
    addObject<CE>(PDC_2, "PDC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_3, "PDC.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_4, "PDC.4", HL7::optional, HL7::repetition_off);
    addObject<CE>(PDC_5, "PDC.5", HL7::optional, HL7::repetition_off);
    addObject<ST>(PDC_6, "PDC.6", HL7::optional, HL7::repetition_on);
    addObject<ST>(PDC_7, "PDC.7", HL7::optional, HL7::repetition_off);
    addObject<ST>(PDC_8, "PDC.8", HL7::optional, HL7::repetition_on);
    addObject<CE>(PDC_9, "PDC.9", HL7::optional, HL7::repetition_off);
    addObject<ID>(PDC_10, "PDC.10", HL7::optional, HL7::repetition_off);
    addObject<ST>(PDC_11, "PDC.11", HL7::optional, HL7::repetition_off);
    addObject<CQ>(PDC_12, "PDC.12", HL7::optional, HL7::repetition_off);
    addObject<CQ>(PDC_13, "PDC.13", HL7::optional, HL7::repetition_off);
    addObject<TS>(PDC_14, "PDC.14", HL7::optional, HL7::repetition_off);
    addObject<TS>(PDC_15, "PDC.15", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Manufacturer/Distributor
   */

  XON* getPDC_1(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PDC_1);
  }

  XON* getManufacturerDistributor(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PDC_1);
  }

  bool isPDC_1(size_t index = 0) {
    try {
      return this->getObject(index, PDC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerDistributor(size_t index = 0) {
    try {
      return this->getObject(index, PDC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country
   */

  CE* getPDC_2(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_2);
  }

  CE* getCountry(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_2);
  }

  bool isPDC_2(size_t index = 0) {
    try {
      return this->getObject(index, PDC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, PDC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Brand Name
   */

  ST* getPDC_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_3);
  }

  ST* getBrandName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_3);
  }

  bool isPDC_3(size_t index = 0) {
    try {
      return this->getObject(index, PDC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBrandName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Family Name
   */

  ST* getPDC_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_4);
  }

  ST* getDeviceFamilyName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_4);
  }

  bool isPDC_4(size_t index = 0) {
    try {
      return this->getObject(index, PDC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Generic Name
   */

  CE* getPDC_5(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_5);
  }

  CE* getGenericName(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_5);
  }

  bool isPDC_5(size_t index = 0) {
    try {
      return this->getObject(index, PDC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenericName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Model Identifier
   */

  ST* getPDC_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_6);
  }

  ST* getModelIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_6);
  }

  bool isPDC_6(size_t index = 0) {
    try {
      return this->getObject(index, PDC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModelIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Catalogue Identifier
   */

  ST* getPDC_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_7);
  }

  ST* getCatalogueIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_7);
  }

  bool isPDC_7(size_t index = 0) {
    try {
      return this->getObject(index, PDC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCatalogueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Identifier
   */

  ST* getPDC_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_8);
  }

  ST* getOtherIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_8);
  }

  bool isPDC_8(size_t index = 0) {
    try {
      return this->getObject(index, PDC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Code
   */

  CE* getPDC_9(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_9);
  }

  CE* getProductCode(size_t index = 0) {
    return (CE*)this->getObjectSafe(index, PDC_9);
  }

  bool isPDC_9(size_t index = 0) {
    try {
      return this->getObject(index, PDC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductCode(size_t index = 0) {
    try {
      return this->getObject(index, PDC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marketing Basis
   */

  ID* getPDC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDC_10);
  }

  ID* getMarketingBasis(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDC_10);
  }

  bool isPDC_10(size_t index = 0) {
    try {
      return this->getObject(index, PDC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMarketingBasis(size_t index = 0) {
    try {
      return this->getObject(index, PDC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marketing Approval ID
   */

  ST* getPDC_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_11);
  }

  ST* getMarketingApprovalID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_11);
  }

  bool isPDC_11(size_t index = 0) {
    try {
      return this->getObject(index, PDC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMarketingApprovalID(size_t index = 0) {
    try {
      return this->getObject(index, PDC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Labeled Shelf Life
   */

  CQ* getPDC_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_12);
  }

  CQ* getLabeledShelfLife(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_12);
  }

  bool isPDC_12(size_t index = 0) {
    try {
      return this->getObject(index, PDC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLabeledShelfLife(size_t index = 0) {
    try {
      return this->getObject(index, PDC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Shelf Life
   */

  CQ* getPDC_13(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_13);
  }

  CQ* getExpectedShelfLife(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_13);
  }

  bool isPDC_13(size_t index = 0) {
    try {
      return this->getObject(index, PDC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedShelfLife(size_t index = 0) {
    try {
      return this->getObject(index, PDC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date First Marketed
   */

  TS* getPDC_14(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDC_14);
  }

  TS* getDateFirstMarketed(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDC_14);
  }

  bool isPDC_14(size_t index = 0) {
    try {
      return this->getObject(index, PDC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateFirstMarketed(size_t index = 0) {
    try {
      return this->getObject(index, PDC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Last Marketed
   */

  TS* getPDC_15(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDC_15);
  }

  TS* getDateLastMarketed(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, PDC_15);
  }

  bool isPDC_15(size_t index = 0) {
    try {
      return this->getObject(index, PDC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateLastMarketed(size_t index = 0) {
    try {
      return this->getObject(index, PDC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PDC */

} /* End of namespace HL7_24 */
#endif /* __PDC_v24_H__ */
