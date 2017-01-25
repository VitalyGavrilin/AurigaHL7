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

#include <climits>
#include <string>
#include <stdio.h>
#include <sstream>
#include <inttypes.h>
#include <algorithm>
#include "dataencode.h"

#ifndef WIN32
#include <string.h>
#endif // WIN32

// pars string to int
//  i - output integer
//  s - input string
//  base - number base for string to integer conversion
bool parseInt( int& i, const std::string& s, const int base )
{
     char *end;
     long  l;
     errno = 0;
     // convert string to number
     l = strtol( s.c_str(), &end, base );
     // check for overflow
     if ( ( errno == ERANGE && l == LONG_MAX ) || l > INT_MAX )
     {
          return false;
     }
     // check for underflow
     if ( ( errno == ERANGE && l == LONG_MIN ) || l < INT_MIN )
     {
          return false;
     }
     // check for full translation of input data
     if ( s[ 0 ] == '\0' || *end != '\0' )
     {
          return false;
     }
     // save returned data (does not change original data in case of error)
     i = l;
     return true;
}

// check if string - float
//  s - input string
bool isFloat( const std::string& s )
{
     char *end;
     float  l = 0.;
     errno = 0;
     // convert string to float
     l = (float)strtod( s.c_str(), &end );
     // check for overflow or underflow
     if ( ( errno == ERANGE ) || ( l == HUGE_VAL ) || ( l == -HUGE_VAL ) )
     {
          return false;
     }
     // check for full translation of input data
     if ( s[ 0 ] == '\0' || *end != '\0' )
     {
          return false;
     }
     // data in correct float format
     return true;
}

// pars string to float
//  i - output int64
//  s - input string
//  base - number base for string to float conversion
bool parseInt64( int64_t& i, const std::string& s, const int base )
{
     char *end;
     errno = 0;
     // convert string to long long
     bool negative = ( s[ 0 ] == '-' ) ? true : false;
     // get usigned value
     unsigned long long x = strtoull( ( negative ) ? s.substr( 1 ).c_str() : s.c_str(), &end, 0 );
     // check for overflow
     if ( errno == ERANGE )
     {
          return false;
     }
     // check for full translation of input data
     if ( s[ 0 ] == '\0' || *end != '\0' )
     {
          return false;
     }
     // add sign and save returned data (does not change original data in case of error)
     i = negative ? -(long long)( x - 1 ) - 1 : x;
     return true;
}

// pars string to phone number
//  country - output country code or 0
//  sity - output sity code or 0
//  number - output number string
//  extension - output extension or ""
//  beeper - output beeper code or ""
//  comment - output comment or ""
//  data - input data
//  [NN] [(999)]999-9999[X99999][B99999][C any text]
bool parsePhoneNumber(
     int& country,
     int& sity,
     std::string& number,
     int64_t& extension,
     int64_t& beeper,
     std::string& comment,
     const std::string& data )
{
     int _country = 0;
     int _sity = 0;
     int64_t _extension = 0;
     int64_t _beeper = 0;
     std::string _comment = "";
     //char*end;
     std::string to_conv;
     std::string save_data = data;
     std::transform( save_data.begin(), save_data.end(), save_data.begin(), ::tolower );
     // find comment if any
     std::string::iterator it = std::find( save_data.begin(), save_data.end(), 'c' );
     if ( it != save_data.end() )
     {
          _comment = save_data.substr( std::distance( save_data.begin(), it ) + 1 );
          save_data = save_data.substr( 0, std::distance( save_data.begin(), it ) );
     }
     it = std::find( save_data.begin(), save_data.end(), 'b' );
     if ( it != save_data.end() )
     {
          to_conv = save_data.substr( std::distance( save_data.begin(), it ) + 1 );
          save_data = save_data.substr( 0, std::distance( save_data.begin(), it ) );
          if ( !parseInt64( _beeper, to_conv ) )
               return false;
          if ( _beeper > 99999 )
               return false;
     }
     it = std::find( save_data.begin(), save_data.end(), 'x' );
     if ( it != save_data.end() )
     {
          to_conv = save_data.substr( std::distance( save_data.begin(), it ) + 1 );
          save_data = save_data.substr( 0, std::distance( save_data.begin(), it ) );
          if ( !parseInt64( _extension, to_conv ) )
               return false;
          if ( _extension > 99999 )
               return false;
     }
     it = std::find( save_data.begin(), save_data.end(), '(' );
     if ( it != save_data.end() )
     {
          if ( it != save_data.begin() )
          {
               to_conv = save_data.substr( 0, std::distance( save_data.begin(), it ) );
               save_data = save_data.substr( std::distance( save_data.begin(), it ) + 1 );
               if ( !parseInt( _country, to_conv ) )
                    return false;
          }
          else
               save_data = save_data.substr( 1 );
          std::string::iterator it_e = std::find( save_data.begin(), save_data.end(), ')' );
          if ( it_e != save_data.end() )
          {
               to_conv = save_data.substr( 0, std::distance( save_data.begin(), it_e ) );
               save_data = save_data.substr( std::distance( save_data.begin(), it_e ) + 1 );
               if ( !parseInt( _sity, to_conv ) )
                    return false;
          }
          else
               return false;
          if ( save_data[ 3 ] != '-' )
               return false;
          int len;
          if ( !parseInt( len, save_data.substr( 0, 3 ) ) ||
               !parseInt( len, save_data.substr( 4 ) ) )
               return false;
          comment = _comment;
          beeper = _beeper;
          extension = _extension;
          number = save_data;
          sity = _sity;
          country = _country;
          return true;
     }
     if ( ( save_data.length() < 8 ) || ( save_data.length() > 10 ) )
          return false;
     if ( save_data.length() > 8 )
     {
          to_conv = save_data.substr( 0, save_data.length() - 8 );
          save_data = save_data.substr( save_data.length() - 8 );
          if ( !parseInt( _country, to_conv ) )
               return false;
     }
     if ( save_data[ 3 ] != '-' )
          return false;
     int len;
     if ( !parseInt( len, save_data.substr( 0, 3 ) ) ||
          !parseInt( len, save_data.substr( 4 ) ) )
          return false;
     comment = _comment;
     beeper = _beeper;
     extension = _extension;
     number = save_data;
     sity = _sity;
     country = _country;
     return true;
}

// encode string to phone number
//  country - output country code or 0
//  sity - output sity code or 0
//  number - output number string
//  extension - output extension or ""
//  beeper - output beeper code or ""
//  comment - output comment or ""
//  data - output data
//  [NN] [(999)]999-9999[X99999][B99999][C any text]
bool encodePhoneNumber(
     int country,
     int sity,
     const std::string& number,
     int64_t extension,
     int64_t beeper,
     const std::string& comment,
     std::string& data )
{
     char cnv_data[ 6 ];
     int size = 9;
     data = "";
     if ( ( country < 0 ) || ( country > 99 ) ||
          ( sity < 0 ) || ( sity > 999 ) ||
          ( number.length() != 8 ) || ( number[ 3 ] != '-' ) ||
          ( extension < 0 ) || ( extension > 99999 ) ||
          ( beeper < 0 ) || ( beeper > 99999 ) 
     )
          return false;
     if ( country > 0 )
     {
          sprintf( cnv_data, "%d", country );
          data += cnv_data;
     }
     if ( sity > 0 )
     {
          sprintf( cnv_data, "(%.3d)", sity );
          data += cnv_data;
     }
     data += number;
     if ( extension > 0 )
     {
          sprintf( cnv_data, "%d", extension );
          data += std::string( "X" ) + cnv_data;
     }
     if ( beeper > 0 )
     {
          sprintf( cnv_data, "%d", beeper );
          data += std::string( "B" ) + cnv_data;
     }
     if ( comment.length() > 0 )
          data += std::string( "C" ) + comment;
     return true;
}

// pars string to time
//  hourPrecision - is minute value can be equal -1
//  data - input data
//  hour - output hour
//  minute - output minute or -1
//  second - output second or -1
//  fractionOfSec - output fractionOfSec or -1
//  offset - output time offset in format +/-M as number or 9999
//  HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
int parseTM(
     bool hourPrecision, 
     const std::string& data, 
     int& hour,
     int& minute,
     int& second,
     int& fractionOfSec,
     int& offset )
{
     int params = -1;
     bool _omitOffsetFg = false;
     std::basic_string <char>::size_type sg = data.find_first_of( '+', 0 );
     if ( sg == std::string::npos )
          sg = data.find_first_of( '-', 0 );
     if ( sg == std::string::npos )
          _omitOffsetFg = true;

     hour = EMPTY_HOUR;
     minute = EMPTY_MINUT;
     second = EMPTY_SECONDS;
     fractionOfSec = EMPTY_FRACTION_OF_SECONDS;
     offset = EMPTY_OFFSET;
     int _offSet = EMPTY_MINUT;
     int hOffset = EMPTY_HOUR;
     char _test_ch[ 20 ];
     char sign = PLUS_SIGN;
     switch ( data.length() )
     {
     case 16: // HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ]
          if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%4d%c%2d%2d%s",
               &hour, &minute, &second, &fractionOfSec, &sign, &hOffset,
               &_offSet, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 5;
          break;
     case 15: // HH[MM[SS[.S[S[S]]]]][+/-ZZZZ]
          if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%3d%c%2d%2d%s",
               &hour, &minute, &second, &fractionOfSec, &sign, &hOffset,
               &_offSet, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          // shift fractions of second
          fractionOfSec = fractionOfSec * 10;
          params = 5;
          break;
     case 14: // HH[MM[SS[.S[S]]]][+/-ZZZZ]
          if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%2d%c%2d%2d%s",
               &hour, &minute, &second, &fractionOfSec, &sign, &hOffset,
               &_offSet, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          // shift fractions of second
          fractionOfSec = fractionOfSec * 100;
          params = 5;
          break;
     case 13: // HH[MM[SS[.S]]][+/-ZZZZ]
          if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%1d%c%2d%2d%s",
               &hour, &minute, &second, &fractionOfSec, &sign, &hOffset,
               &_offSet, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          // shift fractions of second
          fractionOfSec = fractionOfSec * 1000;
          params = 5;
          break;
     case 11:
          if ( _omitOffsetFg )
          {
               // HH[MM[SS[.S[S[S[S]]]]]]
               if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%4d%s",
                    &hour, &minute, &second, &fractionOfSec, &_test_ch ) )
               {
#ifdef TRACE_ENABLE
                    std::cerr << "[verifyTM]: format not matched - <" <<
                         data << ">" << std::endl;
#endif //TRACE_ENABLE
                    return params;
               }
          }
          else
          {
               // HH[MM[SS]][+/-ZZZZ]
               if ( 6 != sscanf( data.c_str(), "%2d%2d%2d%c%2d%2d%s",
                    &hour, &minute, &second, &sign, &hOffset, &_offSet,
                    &_test_ch ) )
               {
#ifdef TRACE_ENABLE
                    std::cerr << "[verifyTM]: format not matched - <" <<
                         data << ">" << std::endl;
#endif //TRACE_ENABLE
                    return params;
               }
          }
          params = 4;
          break;
     case 10: // HH[MM[SS[.S[S[S]]]]]
          if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%3d%s",
               &hour, &minute, &second, &fractionOfSec, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          // shift fractions of second
          fractionOfSec = fractionOfSec * 10;
          params = 4;
          break;
     case 9:
          if ( !_omitOffsetFg )
          {
               // HH[MM][+/-ZZZZ]
               if ( 5 != sscanf( data.c_str(), "%2d%2d%c%2d%2d%s",
                    &hour, &minute, &sign, &hOffset, &_offSet, &_test_ch ) )
               {
#ifdef TRACE_ENABLE
                    std::cerr << "[verifyTM]: format not matched - <" <<
                         data << ">" << std::endl;
#endif //TRACE_ENABLE
                    return params;
               }
               params = 3;
          }
          else
          {
               // HH[MM[SS[.S[S]]]]
               if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%2d%s",
                    &hour, &minute, &second, &fractionOfSec, &_test_ch ) )
               {
#ifdef TRACE_ENABLE
                    std::cerr << "[verifyTM]: format not matched - <" <<
                         data << ">" << std::endl;
#endif //TRACE_ENABLE
                    return params;
               }
               // shift fractions of second
               fractionOfSec = fractionOfSec * 100;
               params = 4;
          }
          break;
     case 8: // HH[MM[SS[.S]]]
          if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%1d%s",
               &hour, &minute, &second, &fractionOfSec, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          // shift fractions of second
          fractionOfSec = fractionOfSec * 1000;
          params = 4;
          break;
     case 7: // HH[+/-ZZZZ]
          if ( !hourPrecision ) // check if houe precision is possible
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          if ( 4 != sscanf( data.c_str(), "%2d%c%2d%2d%s",
               &hour, &sign, &hOffset, &_offSet, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 2;
          break;
     case 6: // HH[MM[SS]]
          if ( 3 != sscanf( data.c_str(), "%2d%2d%2d%s",
               &hour, &minute, &second, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 3;
          break;
     case 4: // HH[MM]
          if ( 2 != sscanf( data.c_str(), "%2d%2d%s",
               &hour, &minute, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 2;
          break;
     case 2: // HH
          if ( !hourPrecision ) // check if houe precision is possible
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          if ( 1 != sscanf( data.c_str(), "%2d%s", &hour, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyTM]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 1;
          break;
     default:
#ifdef TRACE_ENABLE
          std::cerr << "[verifyTM]: format not matched - <" << data <<
               ">" << std::endl;
#endif //TRACE_ENABLE
          return params;
     }

     // check data borders
     if ( ( hour < MIN_HOUR ) || ( hour > MAX_HOUR ) ||
          ( ( minute < MIN_MINUT ) && 
               ( 
                    ( minute != EMPTY_MINUT ) || 
                    ( _omitOffsetFg && ( params > 1 ) ) || 
                    ( !_omitOffsetFg && ( params > 2 ) ) )
               ) || ( minute > MAX_MINUT ) ||
          ( ( second < MIN_SECONDS ) &&
               (
                    ( second != EMPTY_SECONDS ) ||
                    ( _omitOffsetFg && ( params > 2 ) ) ||
                    ( !_omitOffsetFg && ( params > 3 ) ) )
               ) || ( second > MAX_SECONDS ) ||
          ( ( fractionOfSec < MIN_FRACTION_OF_SECONDS ) &&
               (
                    ( fractionOfSec != EMPTY_FRACTION_OF_SECONDS ) ||
                    ( _omitOffsetFg && ( params > 3 ) ) ||
                    ( !_omitOffsetFg && ( params > 4 ) ) )
               ) || ( fractionOfSec > MAX_FRACTION_OF_SECONDS ) ||
          ( !_omitOffsetFg && ( ( hOffset > MAX_HOUR ) || ( _offSet > MAX_MINUT ) ) ) ||
          ( ( sign != PLUS_SIGN ) && ( sign != MINUS_SIGN ) ) )
     {
#ifdef TRACE_ENABLE
          std::cerr << "[verifyTM]: border not matched - <" << data << ">" <<
               std::endl;
#endif //TRACE_ENABLE
          return -1;
     }
     if ( !_omitOffsetFg )
     {
          offset = ( hOffset * 60 ) + _offSet;
          if ( sign == MINUS_SIGN )
               offset *= -1;
     }

     return params;
}

// encode time to string 
//  data - output data
//  hour - input hour
//  minute - input minute or default = -1
//  second - input second or default = -1
//  fractionOfSec - input fractionOfSec or default = -1
//  precision - input precision [HMS] or 0 for autodetect
//  offset - input time offset in format +/-M as number or default = 9999
//  HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
bool encodeTM(
     std::string& data,
     int hour,
     int minute,
     int second,
     int fractionOfSec,
     char precision,
     int offset )
{
     char formatter[ 6 ];
     std::string saver;
     // check precision
     if ( ( precision != 'H' ) && ( precision != 'M' ) && 
          ( precision != 'S' ) && ( precision != 'h' ) && 
          ( precision != 'm' ) && ( precision != 's' ) && ( precision != 0 ) )
          return false;
     // check data borders
     if ( ( hour < MIN_HOUR ) || ( hour > MAX_HOUR ) )
          return false;
     sprintf( formatter, "%.2d", hour );
     saver += formatter;
     do
     {
          if ( ( precision == 'Y' ) || ( precision == 'y' ) ||
               ( ( precision == 0 ) && ( minute == -1 ) )
          )
               break;
          if ( ( minute < MIN_MINUT ) || ( minute > MAX_MINUT ) )
               return false;
          sprintf( formatter, "%.2d", minute );
          saver += formatter;
          if ( ( precision == 'M' ) || ( precision == 'm' ) ||
               ( ( precision == 0 ) && ( second == -1 ) )
               )
               break;
          if ( ( second < MIN_SECONDS ) || ( second > MAX_SECONDS ) )
               return false;
          sprintf( formatter, "%.2d", second );
          saver += formatter;
          if ( ( precision == 'S' ) || ( precision == 's' ) ||
               ( ( precision == 0 ) && ( fractionOfSec == -1 ) )
               )
               break;
          if ( ( fractionOfSec < MIN_FRACTION_OF_SECONDS ) || 
               ( fractionOfSec > MAX_FRACTION_OF_SECONDS ) 
          )
               return false;
          sprintf( formatter, "%04.4d", fractionOfSec );
          while ( formatter[ strlen( formatter ) - 1 ] == '0' )
               formatter[ strlen( formatter ) - 1 ] = 0;
          saver += std::string( "." ) + formatter;
     } while ( 0 );
     if ( offset != 9999 )
     {
          char sign = PLUS_SIGN;
          int abs_off = offset;
          if ( abs_off < 0 )
          {
               sign = MINUS_SIGN;
               abs_off *= -1;
          }
          if ( ( ( abs_off / 60 ) > MAX_HOUR ) || ( ( abs_off % 60 ) > MAX_MINUT ) )
               return false;
          sprintf( formatter, "%c%.2d%.2d", sign, abs_off / 60, abs_off % 60 );
          saver += formatter;
     }
     data = saver;
     return true;
}

// pars string to date
//  data - input data
//  year - output hour
//  month - output month
//  day - output day
//  YYYY[MM[DD]]
int parseDT( 
     const std::string& data,
     int& year,
     int& month,
     int& day )
{
     int params = -1;
     char _test_ch[ 10 ];
     year = INIT_YEAR;
     month = EMPTY_MONTH;
     day = EMPTY_DAY;
     switch ( data.length() )
     {
     case 8: // YYYY[MM[DD]]
          if ( 3 != sscanf( data.c_str(), "%4d%2d%2d%s",
               &year, &month, &day, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyDT]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 3;
          break;
     case 6: // YYYY[MM]
          if ( 2 != sscanf( data.c_str(), "%4d%2d%s",
               &year, &month, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyDT]: format not matched - <" << data <<
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 2;
          break;
     case 4: // YYYY
          if ( 1 != sscanf( data.c_str(), "%4d%s", &year, &_test_ch ) )
          {
#ifdef TRACE_ENABLE
               std::cerr << "[verifyDT]: format not matched - <" << data << 
                    ">" << std::endl;
#endif //TRACE_ENABLE
               return params;
          }
          params = 1;
          break;
     default:
#ifdef TRACE_ENABLE
          std::cerr << "[verifyDT]: format not matched - <" << data <<
               ">" << std::endl;
#endif //TRACE_ENABLE
          return params;
     }

     if ( ( year < MIN_YEAR ) ||
          ( month > MAX_MONTH ) || ( ( month < MIN_MONTH ) && 
               ( ( month != EMPTY_MONTH ) || ( params > 1 ) ) ) ||
          ( day > MAX_DAY ) || ( ( day < MIN_DAY ) &&
               ( ( day != EMPTY_DAY ) || ( params > 2 ) ) )
     )
     {
#ifdef TRACE_ENABLE
          std::cerr << "[verifyDT]: border not matched - <" << data <<
               ">" << std::endl;
#endif //TRACE_ENABLE
          return -1;
     }
     return params;
}

// encode string to date
//  data - output data
//  year - input hour
//  month - input month
//  day - input day
//  YYYY[MM[DD]]
bool encodeDT(
     std::string& data,
     int year,
     int month,
     int day )
{
     char formatter[ 5 ];
     std::string saver;
     // check data borders
     if ( year < MIN_YEAR ) 
          return false;
     sprintf( formatter, "%.4d", year );
     saver += formatter;
     do
     {
          if ( month == -1 )
               break;
          if ( ( month > MAX_MONTH ) || ( month < MIN_MONTH ) )
               return false;
          sprintf( formatter, "%.2d", month );
          saver += formatter;
          if ( day == -1 )
               break;
          if ( ( day > MAX_DAY ) || ( day < MIN_DAY ) )
               return false;
          sprintf( formatter, "%.2d", day );
          saver += formatter;
     } while ( 0 );
     data = saver;
     return true;
}

// pars string to timestamp
//  data - input data
//  year - output hour
//  month - output month
//  day - output day
//  hour - output hour or default = -1
//  minute - output minute or default = -1
//  second - output second or default = -1
//  fractionOfSec - output fractionOfSec or default = -1
//  offset - output time offset in format +/-M as number or default = 9999
//  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
int parseTS(
     const std::string& data,
     int& year,
     int& month,
     int& day,
     int& hour,
     int& minute,
     int& second,
     int& fractionOfSec,
     int& offset )
{
     int paramsDT = -1;
     paramsDT = parseDT( data.substr( 0, MAX_DATE_SIZE ), year, month, day );
     if ( -1 == paramsDT )
          return paramsDT;
     if ( data.length() > MAX_DATE_SIZE )
     {
          int paramsTM = -1;
          paramsTM = parseTM( true, data.substr( MAX_DATE_SIZE ), 
               hour, minute, second, fractionOfSec, offset );
          if ( -1 == paramsTM )
               return paramsTM;
          paramsDT += paramsTM;
     }
     else
     {
          hour = EMPTY_HOUR;
          minute = EMPTY_MINUT;
          second = EMPTY_SECONDS;
          fractionOfSec = EMPTY_FRACTION_OF_SECONDS;
          offset = EMPTY_OFFSET;
     }
     return paramsDT;
}

// encode string to timestamp
//  data - output data
//  year - input hour
//  month - input month
//  day - input day
//  hour - input hour or default = -1
//  minute - input minute or default = -1
//  second - input second or default = -1
//  fractionOfSec - input fractionOfSec or default = -1
//  offset - input time offset in format +/-M as number or default = 9999
//  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
bool encodeTS(
     std::string& data,
     int year,
     int month,
     int day,
     int hour,
     int minute,
     int second,
     int fractionOfSec,
     int offset )
{
     std::string saver;
     if ( ( hour != EMPTY_HOUR ) || ( minute != EMPTY_MINUT ) || \
          ( second != EMPTY_SECONDS ) || ( offset != EMPTY_OFFSET ) || \
          ( fractionOfSec != EMPTY_FRACTION_OF_SECONDS ) )
     {
          if ( !encodeTM( saver, hour, minute, second, fractionOfSec, 0, offset ) )
               return false;
     }
     if ( !encodeDT( data, year, month, day ) )
          return false;
     data += saver;
     return true;
}
