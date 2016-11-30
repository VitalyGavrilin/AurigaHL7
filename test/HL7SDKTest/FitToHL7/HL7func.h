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

bool initBaseMSH( HL7_24::MSH* msh );
bool initBaseOBR( HL7_24::OBR* obr );
bool initMSH( HL7_24::MSH* msh, std::string curTime, FIT_SESSION* pSession );
bool initOBR( HL7_24::OBR* obr, std::string startTime, std::string endTime, char* dataStreamName );
bool initOBX( HL7_24::OBX* obx, int index, int val_index, TYPE_DATA* val_map, int map_index,
     __int64 ft_offset, short zone, const rapidjson::Value& ds, const rapidjson::Value& point );
bool initQRD( HL7_24::QRD* qrd, std::string clientId, FIT_SESSION* session );
//HL7_24::PID initPsevdoPID( std::string clientId, FIT_SESSION* session );
bool initPsevdoPID( std::string clientId, FIT_SESSION* session, HL7_24::PID* pid );

bool initBaseORUMessageData( HL7_24::ORU_R01& oru, std::string clientId, FIT_SESSION* session );
bool initORUMessageData( HL7_24::ORU_R01& oru, FIT_SESSION* session, 
     char* dataStreamName, const rapidjson::Value& ds, rapidjson::Document& dataset );

std::string encodeTimeStamp( SYSTEMTIME& st, short zone );
std::string GoogleFitValueToHL7( VALUE_TYPE type );
std::string getGFitSourceDescription( std::string stream );
std::string getUnitsByGFitSource( std::string stream );
std::string getUnitsDescriptionByGFitSource( std::string stream );

bool getClientPID( HL7_24::MSH& head, std::string clientId, FIT_SESSION* session, HL7_24::PID* res_pid );
//HL7_24::PID& getClientPID( HL7_24::MSH& head, std::string clientId, FIT_SESSION* session );
bool sendORU( HL7_24::ORU_R01& oru, FIT_SESSION* session );
bool setVariesTypeData( HL7::HL7Object* val, VALUE_TYPE type, const rapidjson::Value& json, int map_index );

void freeMap( TYPE_DATA* data, int size );

