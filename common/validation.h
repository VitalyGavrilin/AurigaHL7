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

#ifndef VALIDATION_H_
#define VALIDATION_H_

#include <string>
#include <vector>
#include <map>
#include "Util.h"

typedef bool ( *fn_test )( const std::string& );

// length params
#define MAX_ID_SIZE                200
#define MAX_FT_SIZE                64000

class verify
{
public:
     verify( std::string ver );
     ~verify(){};
     // verify data
     // val_type - type of data like "SI"
     // data - data to verify
     bool test( const std::string& val_type, const std::string& data );
     // verify data and set to object
     // result - object to store verifies data. If verification fail - result = ""
     // val_type - type of data like "SI"
     // data - data to verify
     // 
     bool test_set( HL7::HL7Object* result,
          const std::string& val_type, const std::string& data );
     // add user test function
     bool add_test( const std::string& val_type, fn_test f_vrf );
     // delete user test function
     bool del_test( const std::string& val_type, fn_test f_vrf );
     // empty user test function vector
     bool empty_test( const std::string& val_type );

protected:
     std::string version;
     std::map< std::string, std::vector<fn_test>> verify_base;
     
     bool base_test( const std::string& val_type, const std::string& data );
     bool verifyTM( bool hourPrecision, const std::string& data );
     bool verifyDT( const std::string& data );
     bool verifyTS( const std::string& data );
     bool verifyTS_2_5( const std::string& data );
};

#endif // VALIDATION_H_
