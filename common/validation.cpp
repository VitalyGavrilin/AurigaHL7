/*
 * This file is part of Auriga HL7 library.
 *
 * Auriga HL7 library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Auriga HL7 library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Auriga HL7 library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string>
//#include "util.h"
#include "validation.h"
#include "dataencode.h"

verify::verify( std::string ver )
{
     // save version for verification rules
     version = ver;
}

bool verify::add_test( const std::string& val_type, fn_test f_vrf )
{
     if ( !f_vrf )
          return false;
     std::map< std::string, std::vector<fn_test>>::iterator it =
          verify_base.find( val_type );
     if ( it != verify_base.end() )
          it->second.push_back( f_vrf );
     else
     { 
          std::vector<fn_test> new_queue;
          new_queue.push_back( f_vrf );
          verify_base[ val_type ] = new_queue;
     }
     return true;
}

bool verify::del_test( const std::string& val_type, fn_test f_vrf )
{
     if ( !f_vrf )
          return false;
     std::map< std::string, std::vector<fn_test>>::iterator it =
          verify_base.find( val_type );
     if ( it != verify_base.end() )
     {
          for ( std::vector<fn_test>::iterator i = it->second.begin(); 
               i != it->second.end(); i++ )
          {
               if ( ( *i ) == f_vrf )
               {
                    it->second.erase( i );
                    break;
               }
          }
     }
     return true;
}

bool verify::empty_test( const std::string& val_type )
{
     verify_base.erase( val_type );
     return true;
}

bool verify::test_set( 
     HL7::HL7Object* result,
     const std::string& val_type, 
     const std::string& data )
{
     // verify data
     if ( !base_test( val_type, data ) )
     {
          // set empty string in case verification error
          result->setData( "" );
          return false;
     }

     // correct strings in case verification is passed
     std::string corrected = data;
     std::string whitespace = " \t";
     if ( ( val_type == "TX" ) || ( val_type == "FT" ) || ( val_type == "ST" ) ) //trimRight
     {
          std::string::size_type strEnd = corrected.find_last_not_of( whitespace );
          if ( strEnd == std::string::npos )
               corrected = ""; // no content
          else
               corrected = corrected.substr( 0, strEnd + 1 );
     }
     if ( ( val_type == "FT" ) || ( val_type == "ST" ) ) // trimLeft
     {
          const auto strBegin = corrected.find_first_not_of( whitespace );
          if ( strBegin == std::string::npos )
               corrected = ""; // no content
          else
               corrected = corrected.substr( strBegin );
     }
     // save verified and corrected data
     result->setData( corrected );
     return true;
}

// base verification function
// FT - max_length( 64000 ), после проверки trim_left, trim_right
// ST - trim_left (max_length( 200 )?)
// TX - trim_right max_length( 64000 )
// ID, IS - max_length( 200 ) ( ID, IS - like ST format: ID - HL7 table number, IS - HL7 user-defined table number )
// SI - non_negative_int_or_zero (like NM)
//NM - number_or_zero (+/-,.) [+/-]x[.x]
// DT - date_or_empty
// TM - time_or_empty
//NULLDT - withdrawn
// TSComponentOne - dateTime_or_empty
// TSComponentOne, DTM - dateTime25_or_empty
//TN - usPhoneNumber_or_empty - [NN] [(999)]999-9999[X99999][B99999][C any text]
////The optional first two digits are the country code.The optional X portion gives an extension.The optional
////B portion gives a beeper code.The optional C portion may be used for comments like, After 6:00. While
////no explicit limit is placed on the text field, receiving systems may be expected to truncate values that are
////more than 10 characters long.To accommodate the variability of institutional phone systems, the length of
////the extension and beeper numbers may be extended by local agreement.Examples :
////| ( 415 )925 - 0121X305 |
////| 234 - 4532CWEEKENDS |
bool verify::base_test( const std::string& val_type, const std::string& data )
{
     // DT verification = empty or YYYY[MM[DD]]
     if ( val_type == "DT" )
     {
          if ( !data.length() )
               return true;
          return verifyDT( data );
     }
     // TM verification = empty or HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ]
     if ( val_type == "TM" )
     {
          if ( !data.length() )
               return true;
          return verifyTM( true, data );
     }
     // DTS or TSComponentOne verification = empty or 
     //  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ] / 
     //   YYYY[MM[DD[HHMM[SS[.S[S[S[S]]]]]]]][+/-ZZZZ]
     if ( ( val_type == "TS.1" ) || ( val_type == "DTS" ) )
     {
          if ( !data.length() )
               return true;
          if ( version == "2.5" )
               return verifyTS_2_5( data );
          else
               return verifyTS( data );
     }
     // ST, ID and IS verification = max length = 200
     if ( ( val_type == "ID" ) || ( val_type == "IS" ) || ( val_type == "ST" ) )
     {
          if ( data.length() > MAX_ID_SIZE )
               return false;
          return true;
     }
     // TX, FT verification = max length = 64000
     if ( ( val_type == "FT" ) || ( val_type == "TX" ) )
     {
          if ( data.length() > MAX_FT_SIZE )
               return false;
          return true;
     }
     // SI verification - non_negative_int_or_zero (like NM)
     if ( val_type == "SI" )
     {
          int si = 0;
          if ( !data.length() )
               return true;
          if ( ( data[ 0 ] < '0' ) || ( data[ 0 ] > '9' ) )
               return false;
          // try to convert string data to non-negative integer
          return parseInt( si, data );
     }
     // NM verification - number_or_zero (+/-,.) [+/-]x[.x]
     if ( val_type == "NM" )
     {
          if ( !data.length() )
               return true;
          if ( ( ( data[ 0 ] < '0' ) || ( data[ 0 ] > '9' ) ) && 
               ( data[ 0 ] != '-' ) && ( data[ 0 ] != '+' ) )
               return false;
          // try to convert string data to float
          return isFloat( data );
     }
     // TN verification - usPhoneNumber_or_empty 
     //     [NN] [(999)]999-9999[X99999][B99999][C any text]
     if ( val_type == "TN" )
     {
          float si = 0.;
          if ( !data.length() )
               return true;
          int country;
          int sity;
          std::string number;
          int64_t ext;
          int64_t beeper;
          std::string comment;
          // try to convert string data to phone format parts
          if ( !parsePhoneNumber( country, sity, number, ext, beeper, comment, data ) )
               return false;
          return true;
     }

     return true;
}


bool verify::test( const std::string& val_type, const std::string& data )
{
     // standard verification
     if ( !base_test( val_type, data ) )
          return false;
     // enum user verification vector
     if ( verify_base.size() )
     {
          std::map< std::string, std::vector<fn_test>>::iterator it = 
               verify_base.find( val_type );
          if ( it != verify_base.end() )
          {
               for ( std::vector<fn_test>::iterator i = it->second.begin(); 
                    i != it->second.end(); i++ )
               {
                    // execute user verification in the order of adding
                    if ( !(*i)( data ) )
                         return false;
               }
          }
     }
     return true;
}

// time verification HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
bool verify::verifyTM( bool hourPrecision, const std::string& data )
{
     int _hour = MIN_HOUR;
     int _minute = MIN_MINUT;
     int _second = MIN_SECONDS;
     int _fractionOfSec = MIN_FRACTION_OF_SECONDS;
     int _offSet = ( MIN_HOUR * 60 ) + MIN_MINUT;
     if ( -1 == parseTM( hourPrecision, data, _hour, _minute, _second, _fractionOfSec, _offSet ) )
          return false;
     return true;
}

// date verification YYYY[MM[DD]]
bool verify::verifyDT( const std::string& data )
{
     int _year = INIT_YEAR;
     int _month = MIN_MONTH;
     int _day = MIN_DAY;
     if ( -1 == parseDT( data, _year, _month, _day ) )
          return false;
     return true;
}

// time stamp verification YYYY[MM[DD[HHMM[SS[.S[S[S[S]]]]]]]][+/-ZZZZ]
bool verify::verifyTS( const std::string& data )
{
     if ( ( data.length() < MIN_TIME_STAMP_SIZE ) || 
          ( data.length() > MAX_TIME_STAMP_SIZE ) )
     {
#ifdef TRACE_ENABLE
          std::cerr << "[verifyTS]: length not matched - <" << data << 
               ">" << std::endl;
#endif //TRACE_ENABLE
          return false;
     }

     // date verification
     if ( !verifyDT( data.substr( 0, MAX_DATE_SIZE ) ) )
          return false;
     if ( data.length() <= MAX_DATE_SIZE )
          return true;
     // time verification
     if ( !verifyTM( false, data.substr( MAX_DATE_SIZE ) ) )
          return false;
     return true;
}

// time stamp verification YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
bool verify::verifyTS_2_5( const std::string& data )
{
     if ( ( data.length() < MIN_TIME_STAMP_SIZE ) || 
          ( data.length() > MAX_TIME_STAMP_SIZE ) )
     {
#ifdef TRACE_ENABLE
          std::cerr << "[verifyTS]: length not matched - <" << data << 
               ">" << std::endl;
#endif //TRACE_ENABLE
          return false;
     }

     // date verification
     if ( !verifyDT( data.substr( 0, MAX_DATE_SIZE ) ) )
          return false;
     if ( data.length() <= MAX_DATE_SIZE )
          return true;
     // time verification
     if ( !verifyTM( true, data.substr( MAX_DATE_SIZE ) ) )
          return false;
     return true;
}

