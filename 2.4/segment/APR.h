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


#ifndef __APR_v24_H__
#define __APR_v24_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"
#include "../datatype/SCV.h"

namespace HL7_24 {

/* Appointment Preferences */
class APR : public HL7Segment {
 public:
  APR() { this->init(); }

 private:
  /* */
  enum FIELD_ID { APR_1, APR_2, APR_3, APR_4, APR_5, FIELD_ID_MAX };

 public:
  const char* className() const { return "APR"; }
  APR* create() const { return new APR(); }

 private:
  void init() {
    setName("APR");
    /* Init members */
    addObject<SCV>(APR_1, "APR.1", HL7::optional, HL7::repetition_on);
    addObject<SCV>(APR_2, "APR.2", HL7::optional, HL7::repetition_on);
    addObject<SCV>(APR_3, "APR.3", HL7::optional, HL7::repetition_on);
    addObject<NM>(APR_4, "APR.4", HL7::optional, HL7::repetition_off);
    addObject<SCV>(APR_5, "APR.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters */
  /****************************************
   * Time Selection Criteria
   */

  SCV* getAPR_1(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_1);
  }

  SCV* getTimeSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_1);
  }

  bool isAPR_1(size_t index = 0) {
    try {
      return this->getObject(index, APR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTimeSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Resource Selection Criteria
   */

  SCV* getAPR_2(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_2);
  }

  SCV* getResourceSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_2);
  }

  bool isAPR_2(size_t index = 0) {
    try {
      return this->getObject(index, APR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResourceSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location Selection Criteria
   */

  SCV* getAPR_3(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_3);
  }

  SCV* getLocationSelectionCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_3);
  }

  bool isAPR_3(size_t index = 0) {
    try {
      return this->getObject(index, APR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocationSelectionCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Slot Spacing Criteria
   */

  NM* getAPR_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, APR_4);
  }

  NM* getSlotSpacingCriteria(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, APR_4);
  }

  bool isAPR_4(size_t index = 0) {
    try {
      return this->getObject(index, APR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSlotSpacingCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Override Criteria
   */

  SCV* getAPR_5(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_5);
  }

  SCV* getFillerOverrideCriteria(size_t index = 0) {
    return (SCV*)this->getObjectSafe(index, APR_5);
  }

  bool isAPR_5(size_t index = 0) {
    try {
      return this->getObject(index, APR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOverrideCriteria(size_t index = 0) {
    try {
      return this->getObject(index, APR_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of APR */

} /* End of namespace HL7_24 */
#endif /* __APR_v24_H__ */
