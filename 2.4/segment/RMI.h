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


#ifndef __RMI_v24_H__
#define __RMI_v24_H__

#include "../../common/Util.h"
#include "../datatype/CE_0427.h"
#include "../datatype/CE_0428.h"
#include "../datatype/TS.h"

namespace HL7_24 {

/* Risk Management Incident */
class RMI : public HL7Segment {
 public:
  RMI() { this->init(); }

 private:
  /* */
  enum FIELD_ID { RMI_1, RMI_2, RMI_3, FIELD_ID_MAX };

 public:
  const char* className() const { return "RMI"; }
  RMI* create() const { return new RMI(); }

 private:
  void init() {
    setName("RMI");
    /* Init members */
    addObject<CE_0427>(RMI_1, "RMI.1", HL7::optional, HL7::repetition_off);
    addObject<TS>(RMI_2, "RMI.2", HL7::optional, HL7::repetition_off);
    addObject<CE_0428>(RMI_3, "RMI.3", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Risk Management Incident Code
   */

  CE_0427* getRMI_1(size_t index = 0) {
    return (CE_0427*)this->getObjectSafe(index, RMI_1);
  }

  CE_0427* getRiskManagementIncidentCode(size_t index = 0) {
    return (CE_0427*)this->getObjectSafe(index, RMI_1);
  }

  bool isRMI_1(size_t index = 0) {
    try {
      return this->getObject(index, RMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRiskManagementIncidentCode(size_t index = 0) {
    try {
      return this->getObject(index, RMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date/Time Incident
   */

  TS* getRMI_2(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RMI_2);
  }

  TS* getDateTimeIncident(size_t index = 0) {
    return (TS*)this->getObjectSafe(index, RMI_2);
  }

  bool isRMI_2(size_t index = 0) {
    try {
      return this->getObject(index, RMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateTimeIncident(size_t index = 0) {
    try {
      return this->getObject(index, RMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Incident Type Code
   */

  CE_0428* getRMI_3(size_t index = 0) {
    return (CE_0428*)this->getObjectSafe(index, RMI_3);
  }

  CE_0428* getIncidentTypeCode(size_t index = 0) {
    return (CE_0428*)this->getObjectSafe(index, RMI_3);
  }

  bool isRMI_3(size_t index = 0) {
    try {
      return this->getObject(index, RMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIncidentTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, RMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RMI */

} /* End of namespace HL7_24 */
#endif /* __RMI_v24_H__ */
