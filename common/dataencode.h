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

#include <string>
//#include <stdio.h>
#include <inttypes.h>
#include <sstream>
#include "Util.h"
//#include <algorithm>

#define MAX_DATE_SIZE              8
#define MIN_TIME_STAMP_SIZE        4
#define MAX_TIME_STAMP_SIZE        26

// TIME params
#define INIT_YEAR                  1990
#define MIN_YEAR                   1000
#define EMPTY_MONTH                -1
#define MIN_MONTH                  1
#define MAX_MONTH                  12
#define EMPTY_DAY                  -1
#define MIN_DAY                    1
#define MAX_DAY                    31
#define EMPTY_HOUR                 -1
#define MIN_HOUR                   0
#define MAX_HOUR                   23
#define EMPTY_MINUT                -1
#define MIN_MINUT                  0
#define MAX_MINUT                  59
#define EMPTY_SECONDS              -1
#define MIN_SECONDS                0
#define MAX_SECONDS                59
#define EMPTY_FRACTION_OF_SECONDS  -1
#define MIN_FRACTION_OF_SECONDS    0
#define MAX_FRACTION_OF_SECONDS    9999
#define EMPTY_OFFSET               9999
#define PLUS_SIGN                  '+'
#define MINUS_SIGN                 '-'

// pars string to int
//  i - output integer
//  s - input string
//  base - number base for string to integer conversion
bool parseInt( int& i, const std::string& s, const int base = 0 );

// check if string - float
//  s - input string
bool isFloat( const std::string& s );

// pars string to float
//  i - output int64
//  s - input string
//  base - number base for string to float conversion
bool parseInt64( int64_t& i, const std::string& s, const int base = 0 );

// encode data to string and set to object
//  obj - input/output object to set data to
//  val - input data for setting
template<typename T>
void toStr( HL7::HL7Object& obj, T val )
{
     std::stringstream out;
     out << val;
     obj.setData( out.str() );
     return;
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
     const std::string& data );

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
     std::string& data );

// pars string to time
//  hourPrecision - is minute value can be equal -1
//  data - input data
//  hour - output hour
//  minute - output minute or -1
//  second - output second or -1
//  fractionOfSec - output fractionOfSec or -1
//  offset - output time offset in format +/-HHMM as number or 9999
//  HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
int parseTM(
     bool hourPrecision,
     const std::string& data,
     int& hour,
     int& minute,
     int& second,
     int& fractionOfSec,
     int& offset );

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
     int minute = -1,
     int second = -1,
     int fractionOfSec = -1,
     char precision = 0,
     int offset = 9999 );

// pars string to date
//  data - output data
//  year - input hour
//  month - input month
//  day - input day
//  YYYY[MM[DD]]
int parseDT(
     const std::string& data,
     int& year,
     int& month,
     int& day );

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
     int day );

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
     int& offset );

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
     int offset );
