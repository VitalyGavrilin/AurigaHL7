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


// DateTimeValidation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "../../HL7v2/common/util.h"

#include <iostream>
#include <string>
#include <regex>

struct TM23 : public DataElement
{
     TM23() : DataElement( "TM" ) 
     {
//          mask.assign( "([012]\\d([0-5]\\d([0-5]\\d(\\.\\d(\\d(\\d(\\d)?)?)?)?)?)?)?([\\+\\-]\\d{4})?" );
     }

     template<typename T>
     void eval( T& t, int level )
     {
          t.eval( *this, level );
     }
     bool verify( std::string data )
     {
          bool _omitOffsetFg = false;
          std::basic_string <char>::size_type sg = data.find_first_of( '+', 0 );
          if ( sg == std::string::npos )
               sg = data.find_first_of( '-', 0 );
          if ( sg == std::string::npos )
               _omitOffsetFg = true;

          //// Check size
          //if ( ( data.length() > 16 ) || ( data.length() < 2 ) ||
          //     ( _omitOffsetFg && ( data.length() != 2 ) && ( data.length() != 4 ) && ( data.length() != 6 ) && ( data.length() != 11 ) ) ||
          //     ( !_omitOffsetFg && ( data.length() != 7 ) && ( data.length() != 9 ) && ( data.length() != 11 ) && ( data.length() != 16 ) ) )
          //{
          //     //std::cerr << "<TM::setValue> TM value <" << value << "> does not conform to an allowable format. Format should conform to ";
          //     return false;
          //}
          int _hour = 0;
          int _minute = 0;
          int _second = 0;
          int _fractionOfSec = 0;
          int _offSet = 0;
          int hOffset;
          bool error = false;
          char sign = '+';
          switch ( data.length() )
          {
          case 16:
               if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%4d%c%2d%2d", &_hour, &_minute, &_second, &_fractionOfSec, &sign, &hOffset, &_offSet ) )
                    return false;
               break;
          case 15:
               if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%3d%c%2d%2d", &_hour, &_minute, &_second, &_fractionOfSec, &sign, &hOffset, &_offSet ) )
                    return false;
               _fractionOfSec = _fractionOfSec * 10;
               break;
          case 14:
               if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%2d%c%2d%2d", &_hour, &_minute, &_second, &_fractionOfSec, &sign, &hOffset, &_offSet ) )
                    return false;
               _fractionOfSec = _fractionOfSec * 100;
               break;
          case 13:
               if ( 7 != sscanf( data.c_str(), "%2d%2d%2d.%1d%c%2d%2d", &_hour, &_minute, &_second, &_fractionOfSec, &sign, &hOffset, &_offSet ) )
                    return false;
               _fractionOfSec = _fractionOfSec * 1000;
               break;
          case 11:
               if ( _omitOffsetFg )
               {
                    if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%4d", &_hour, &_minute, &_second, &_fractionOfSec ) )
                         return false;
               }
               else
               {
                    if ( 6 != sscanf( data.c_str(), "%2d%2d%2d%c%2d%2d", &_hour, &_minute, &_second, &sign, &hOffset, &_offSet ) )
                         return false;
               }
               break;
          case 10:
               if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%3d", &_hour, &_minute, &_second, &_fractionOfSec ) )
                    return false;
               _fractionOfSec = _fractionOfSec * 10;
               break;
          case 9:
               if ( !_omitOffsetFg )
               {
                    if ( 5 != sscanf( data.c_str(), "%2d%2d%c%2d%2d", &_hour, &_minute, &sign, &hOffset, &_offSet ) )
                         return false;
               }
               else
               {
                    if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%2d", &_hour, &_minute, &_second, &_fractionOfSec ) )
                         return false;
                    _fractionOfSec = _fractionOfSec * 100;
               }
               break;
          case 8:
               if ( 4 != sscanf( data.c_str(), "%2d%2d%2d.%1d", &_hour, &_minute, &_second, &_fractionOfSec ) )
                    return false;
               _fractionOfSec = _fractionOfSec * 1000;
               break;
          case 7:
               if ( 4 != sscanf( data.c_str(), "%2d%c%2d%2d", &_hour, &sign, &hOffset, &_offSet ) )
                    return false;
               break;
          case 6:
               if ( 3 != sscanf( data.c_str(), "%2d%2d%2d", &_hour, &_minute, &_second ) )
                    return false;
               break;
          case 4:
               if ( 2 != sscanf( data.c_str(), "%2d%2d", &_hour, &_minute ) )
                    return false;
               break;
          case 2:
               if ( 1 != sscanf( data.c_str(), "%2d", &_hour ) )
                    return false;
               break;
          default:
               return false;
          }

          if ( ( _hour < 0 ) || ( _hour > 24 ) || ( _minute < 0 ) || ( _minute >= 60 ) ||
               ( _second < 0 ) || ( _second >= 60 ) || ( _fractionOfSec < 0 ) || ( _fractionOfSec > 9999 ) ||
               ( !_omitOffsetFg && ( ( hOffset > 24 ) || ( _offSet >= 60 ) ) ) )
          {
               //std::cerr << "<TM::setValue> TM value <" << value << "> invalid date for _Hour = " << _hour << ", Minute = " << _minute <<
               //     ", Second = " << _second << ", Fraction = " << _fractionOfSec << ", Offset = ";
               return false;
          }

          return true;
     }
     bool verify_reg( std::string data )
     {
          return std::tr1::regex_match( data, mask );
     }

     std::string TM_1; /* */
     std::tr1::regex mask;
};
struct DT23 : public DataElement
{
     DT23() : DataElement( "DT" ) 
     {
//          mask.assign( "(\\d{4}([01]\\d(\\d{2})?)?)?" );
     }

     template<typename T>
     void eval( T& t, int level )
     {
          t.eval( *this, level );
     }
     bool verify( std::string data )
     {
          int _year;
          int _month;
          int _day;
          switch ( data.length() )
          {
          case 8:
               if ( 3 != sscanf( data.c_str(), "%4d%2d%2d", &_year, &_month, &_day ) )
                    return false;
               break;
          case 6:
               if ( 2 != sscanf( data.c_str(), "%4d%2d", &_year, &_month ) )
                    return false;
               break;
          case 4:
               if ( 1 != sscanf( data.c_str(), "%4d", &_year ) )
                    return false;
               break;
          default:
               return false;
          }

          if ( ( _month > 12 ) || ( _day > 31 ) || ( _month < 1 ) || ( _day < 1 ) )
          {
               //std::cerr << "<DT::setValue> DT value <" << value << "> invalid date for Year = " << _year << ", Month = " << _month << ", Day = " << _day << std::endl;
               return false;
          }
          return true;
     }
     bool verify_reg( std::string data )
     {
          return std::tr1::regex_match( data, mask );
     }

     std::tr1::regex mask;
     std::string DT_1; /* */
};
struct TS23 : public DataElement
{
     TS23() : DataElement( "TS" ) 
     {
//          mask.assign( "(\\d{4}([01]\\d(\\d{2}([012]\\d([0-5]\\d([0-5]\\d(\\.\\d(\\d(\\d(\\d)?)?)?)?)?)?)?)?)?)?([\\+\\-]\\d{4})?" );
     }

     template<typename T>
     void eval( T& t, int level )
     {
          t.eval( *this, level );
     }
     bool verify( std::string data )
     {
          if ( ( data.length() < 8 ) || ( data.length() > 26 ) )
          {
               //std::cerr << "<TS::setValue> TS value <" << value << "> does not conform to an allowable format. Format should conform to ";
               return false;
          }

          DT23 _dt;
          if ( !_dt.verify( data.substr( 0, 8 ) ) )
               return false;
          TM23 _tm;
          if ( !_tm.verify( data.substr( 8 ) ) )
               return false;
          return true;
     }
     bool verify_reg( std::string data )
     {
          return std::tr1::regex_match( data, mask );
     }

     std::tr1::regex mask;
     std::string TS_1; /* A SI contains a single String value */
};

int _tmain( int argc, _TCHAR* argv[] )
{
     TS23 _dt;
     int i;
     DWORD dStartTick;
     DWORD dFinishTick;

     //if ( !_dt.verify( "20021101085904.9099+1130" ) )
     //{
     //     std::cout << "20021101085904.9099+1130 can not be parsed." << std::endl;
     //     return -1;
     //}
     //if ( !_dt.verify_reg( "20021101085904.9099+1130" ) )
     //{
     //     std::cout << "20021101085904.9099+1130 can not be parsed." << std::endl;
     //     return -1;
     //}
     //std::cout << "20021101085904.9099+1130 verification:\n";
     dStartTick = GetTickCount();
     for ( i = 0; i < 1000; i++ )
          _dt.verify( "20021101085904.9099+1130" );
     dFinishTick = GetTickCount();
     std::cout << "manual check = " << dFinishTick - dStartTick << "ms\n";
     //dStartTick = GetTickCount();
     //for ( i = 0; i < 1000; i++ )
     //     _dt.verify_reg( "20021101085904.9099+1130" );
     //dFinishTick = GetTickCount();
     //std::cout << "regex check = " << dFinishTick - dStartTick << "ms\n";

     if ( _dt.verify( "200" ) )
     {
          std::cout << "200 can not be parsed." << std::endl;
          return -1;
     }
     //if ( _dt.verify_reg( "200" ) )
     //{
     //     std::cout << "200 can not be parsed." << std::endl;
     //     return -1;
     //}
     std::cout << "200 verification:\n";
     dStartTick = GetTickCount();
//     for ( i = 0; i < 1000; i++ )
          _dt.verify( "200" );
     dFinishTick = GetTickCount();
     std::cout << "manual check = " << dFinishTick - dStartTick << "ms\n";
//     dStartTick = GetTickCount();
////     for ( i = 0; i < 1000; i++ )
//          _dt.verify_reg( "200" );
//     dFinishTick = GetTickCount();
//     std::cout << "regex check = " << dFinishTick - dStartTick << "ms\n";

     return 0;
}

