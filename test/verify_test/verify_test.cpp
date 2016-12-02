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

#include <iostream>
#include <string.h>

#include "../../common/Util.h"
#include "../../common/validation.h"
#include "../../common/dataencode.h"
#include "../../2.4/datatype/DT.h"
#include "../../2.4/datatype/TM.h"
#include "../../2.4/datatype/TS.h"
#include "../../2.4/datatype/ID.h"
#include "../../2.4/datatype/IS.h"
#include "../../2.4/datatype/FT.h"
#include "../../2.4/datatype/TX.h"
#include "../../2.4/datatype/SI.h"
#include "../../2.4/datatype/NM.h"
#include "../../2.4/datatype/TN.h"

#define TEST_START_SIMPLE \
     { \
          bOk = true;

#define TEST_START( obj_type ) \
     TEST_START_SIMPLE \
     HL7_24::obj_type test_obj;

#define TEST_START_TS \
     TEST_START_SIMPLE \
     HL7_24::TS ts_test; \
     HL7_24::ST test_obj; \
     test_obj = *ts_test.getTS_1();
     //HL7_24::ST test_obj = *ts_test.getTS_1();

#define TEST_END( name ) \
          if ( !bOk ) \
          { \
               cout << "FAIL !!!! verify test for <" << name << ">" << endl; \
          } \
          else \
          { \
               cout << "PASS verify test for <" << name << ">" << endl; \
          } \
     }

#define TEST_VERIF_OK( ver, name, val ) \
     if ( !vr##ver.test( name, val ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify OK test for <" << name << "> - " << val << endl; \
     }

#define TEST_OK( ver, name, val ) \
     TEST_VERIF_OK( ver, name, val ) \
     if ( !vr##ver.test_set( &test_obj, name, val ) || \
        ( strcmp( test_obj.getData(), val ) != 0 ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify_set OK test for <" << name << "> - " << \
                         val << " ( " << test_obj.getData() << " ) " << endl; \
     } 

#define TEST_OK_TRIM_LEFT( ver, name, val ) \
     verif = "  \t  " + val; \
     TEST_VERIF_OK( ver, name, verif ) \
     if ( !vr##ver.test_set( &test_obj, name, verif ) || \
        ( strcmp( test_obj.getData(), val ) != 0 ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify_set OK test for <" << name << "> - " << \
                                                            verif << endl; \
     } 

#define TEST_OK_TRIM_RIGHT( ver, name, val ) \
     verif = val + std::string("  \t  "); \
     TEST_VERIF_OK( ver, name, verif ) \
     if ( !vr##ver.test_set( &test_obj, name, verif ) || \
        ( strcmp( test_obj.getData(), val ) != 0 ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify_set OK test for <" << name << "> - " << \
                                                            verif << endl; \
     } 

#define TEST_OK_TRIM_BOTH( ver, name, val ) \
     verif = std::string("  ") + val + "  \t"; \
     TEST_VERIF_OK( ver, name, verif ) \
     if ( !vr##ver.test_set( &test_obj, name, verif ) || \
        ( strcmp( test_obj.getData(), val ) != 0 ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify_set OK test for <" << name << "> - " << \
                                                            verif << endl; \
     } 

#define TEST_FUNC_OK( func, param, val ) \
     if ( !func( param, #val ) || ( param != val ) ) \
     { \
          bOk = false; \
          cout << "FAIL " << #func << " test for " << #val << " (" << \
                                                       param << ")" << endl; \
     }

#define TEST_BASE_FUNC_OK( func, param, val, base ) \
     if ( !func( param, #val, base ) || ( param != val ) ) \
     { \
          bOk = false; \
          cout << "FAIL " << #func << " test for " << #val << \
                    " with base " << base << " (" << param << ")" << endl; \
     }

#define TEST_ISFUNC_OK( func, val ) \
     if ( !func( val ) ) \
     { \
          bOk = false; \
          cout << "FAIL " << #func << " test for " << val << endl; \
     }

#define TEST_PHONENUMBER_OK( val, val_country, val_sity, val_number, \
                              val_extension, val_beeper, val_comment ) \
     { \
          country = 0; \
          sity = 0; \
          number = ""; \
          extension = 0; \
          beeper = 0; \
          comment = ""; \
          if ( !parsePhoneNumber( country, sity, number, extension, beeper, \
                                                            comment, val ) || \
               ( country != val_country ) || ( sity != val_sity ) || \
               ( number != val_number ) || ( extension != val_extension ) || \
               ( beeper != val_beeper ) || ( comment != val_comment ) ) \
          { \
               bOk = false; \
               cout << "FAIL parsePhoneNumber OK test for " << val << endl; \
          } \
          if ( !encodePhoneNumber( val_country, val_sity, val_number, \
                         val_extension, val_beeper, val_comment, result ) || \
               ( result != val ) ) \
          { \
               bOk = false; \
               cout << "FAIL encodePhoneNumber OK test for country=" << \
                    val_country << " sity=" << val_sity << " number=" << \
                    val_number << " extension=" << val_extension << \
                    " beeper=" << beeper << " comment=" << val_comment << endl; \
          } \
     }

// HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
#define TEST_TMENCODE_OK( val, hourPrecision, count, val_hour, val_minute, \
                    val_second, val_fractionOfSec, val_offset, val_precision ) \
     { \
          if ( ( count != parseTM( hourPrecision, val, hour, minute, second, \
                         fractionOfSec, offset ) ) || ( hour != val_hour ) || \
               ( minute != val_minute ) || ( val_second != second ) || \
               ( val_fractionOfSec != fractionOfSec ) || \
               ( val_offset != offset ) )\
          { \
               bOk = false; \
               cout << "FAIL parseTM OK test with hourPrecision=" << \
                                   hourPrecision << " for " << val << endl; \
          } \
          if ( !encodeTM( result, val_hour, val_minute, val_second, \
                         val_fractionOfSec, val_precision, val_offset ) || \
                         ( val != result ) ) \
          { \
               bOk = false; \
               cout << "FAIL encodeTM OK test for hour=" << val_hour << \
                    " minute=" << val_minute << " second=" << val_second << \
                    " fractionOfSec=" << val_fractionOfSec << \
                    " offset=" << val_offset << " precision=" << \
                    val_precision << endl; \
          } \
     }

#define TEST_TMENCODE_PR_OK( val, count, val_hour, val_minute, val_second, \
                              val_fractionOfSec, val_offset, val_precision ) \
     TEST_TMENCODE_OK( val, true, count, val_hour, val_minute, val_second, \
                              val_fractionOfSec, val_offset, val_precision ) \
     TEST_TMENCODE_OK( val, false, count, val_hour, val_minute, val_second, \
                              val_fractionOfSec, val_offset, val_precision ) \

// YYYY[MM[DD]]
#define TEST_DTENCODE_OK( val, count, val_year, val_month, val_day ) \
     { \
          if ( ( count != parseDT( val, year, month, day ) ) || \
               ( year != val_year ) || ( month != val_month ) || \
               ( day != val_day ) )\
          { \
               bOk = false; \
               cout << "FAIL parseDT OK test for " << val << endl; \
          } \
          if ( !encodeDT( result, val_year, val_month, val_day ) || \
                                                       ( val != result ) ) \
          { \
               bOk = false; \
               cout << "FAIL encodeDT OK test for year=" << val_year << \
                    " month=" << val_month << " day=" << val_day << endl; \
          } \
     }

//  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
#define TEST_TSENCODE_OK( val, count, val_year, val_month, val_day, val_hour, \
                    val_minute, val_second, val_fractionOfSec, val_offset ) \
     { \
          if ( ( count != parseTS( val, year, month, day, hour, minute, \
                    second, fractionOfSec, offset ) ) || \
               ( year != val_year ) || ( month != val_month ) || \
               ( day != val_day ) || ( hour != val_hour ) || \
               ( minute != val_minute ) || ( second != val_second ) || \
               ( fractionOfSec != val_fractionOfSec ) || \
               ( offset != val_offset ) ) \
          { \
               bOk = false; \
               cout << "FAIL parseTS OK test for " << val << endl; \
          } \
          if ( !encodeTS( result, val_year, val_month, val_day, val_hour, \
                    val_minute, val_second, val_fractionOfSec, val_offset ) || \
               ( val != result ) ) \
          { \
               bOk = false; \
               cout << "FAIL encodeTS OK test for year=" << val_year << \
                         " month=" << val_month << " day=" << val_day << \
                         " hour=" << val_hour << " minute=" << val_minute << \
                         " second=" << val_second << " fractionOfSec=" << \
                         val_fractionOfSec << " offset=" << val_offset << endl; \
          } \
     }

#define TEST_FUNC_ERROR( func, param, val ) \
     if ( func( param, val ) ) \
     { \
          bOk = false; \
          cout << "FAIL " << #func << " ERROR test for " << val << " (" << \
                                                       param << ")" << endl; \
     }

#define TEST_ISFUNC_ERROR( func, val ) \
     if ( func( val ) ) \
     { \
          bOk = false; \
          cout << "FAIL " << #func << " ERROR test for " << val << endl; \
     }

#define TEST_PHONENUMBER_PARSE_ERROR( val ) \
     if ( parsePhoneNumber( country, sity, number, extension, beeper, \
                                                       comment, val ) ) \
     { \
          bOk = false; \
          cout << "FAIL parsePhoneNumber ERROR test for " << val << endl; \
     }

#define TEST_PHONENUMBER_ENCODE_ERROR( val_country, val_sity, val_number, \
                              val_extension, val_beeper, val_comment ) \
     if ( encodePhoneNumber( val_country, val_sity, val_number, \
                    val_extension, val_beeper, val_comment, result ) ) \
     { \
          bOk = false; \
          cout << "FAIL encodePhoneNumber ERROR test for country=" << \
               val_country << " sity=" << val_sity << " number=" << \
               val_number << " extension=" << val_extension << " beeper=" << \
               val_beeper << " comment=" << val_comment << endl; \
     }

// HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
#define TEST_TMENCODE_ERROR( val, hourPrecision, val_hour, val_minute, \
                    val_second, val_fractionOfSec, val_offset, val_precision ) \
     { \
          if ( -1 != parseTM( hourPrecision, val, hour, minute, second, \
                                                  fractionOfSec, offset ) )\
          { \
               bOk = false; \
               cout << "FAIL parseTM ERROR test with hourPrecision=" << \
                                   hourPrecision << " for " << val << endl; \
          } \
          if ( encodeTM( result, val_hour, val_minute, val_second, \
                         val_fractionOfSec, val_precision, val_offset ) ) \
          { \
               bOk = false; \
               cout << "FAIL encodeTM ERROR test for hour=" << val_hour << \
                    " minute=" << val_minute << " second=" << val_second << \
                    " fractionOfSec=" << val_fractionOfSec << \
                    " offset=" << val_offset << " precision=" << \
                    val_precision << endl; \
          } \
     }

#define TEST_TMENCODE_PR_ERROR( val, val_hour, val_minute, val_second, \
                         val_fractionOfSec, val_offset, val_precision ) \
     TEST_TMENCODE_ERROR( val, true, val_hour, val_minute, val_second, \
                         val_fractionOfSec, val_offset, val_precision ) \
     TEST_TMENCODE_ERROR( val, false, val_hour, val_minute, val_second, \
                         val_fractionOfSec, val_offset, val_precision ) \

// HH[MM[SS[.S[S[S[S]]]]]][+/-ZZZZ] / HHMM[SS[.S[S[S[S]]]]][+/-ZZZZ]
#define TEST_TMPARSE_ERROR( val, hourPrecision ) \
     if ( -1 != parseTM( hourPrecision, val, hour, minute, second, \
               fractionOfSec, offset ) )\
     { \
          bOk = false; \
          cout << "FAIL parseTM ERROR test with hourPrecision=" << \
                                   hourPrecision << " for " << val << endl; \
     }

#define TEST_TMPARSE_PR_ERROR( val ) \
     TEST_TMPARSE_ERROR( val, true ) \
     TEST_TMPARSE_ERROR( val, false )

#define TEST_TMENC_ERROR( val_hour, val_minute, val_second, val_fractionOfSec, \
                                                  val_offset, val_precision ) \
     if ( encodeTM( result, val_hour, val_minute, val_second, \
                    val_fractionOfSec, val_precision, val_offset ) ) \
     { \
          bOk = false; \
          cout << "FAIL encodeTM ERROR test for hour=" << val_hour << \
               " minute=" << val_minute << " second=" << val_second << \
               " fractionOfSec=" << val_fractionOfSec << \
               " offset=" << val_offset << " precision=" << \
               val_precision << endl; \
     }

// YYYY[MM[DD]]
#define TEST_DTPRS_ERROR( val ) \
     if ( -1 != parseDT( val, year, month, day ) )\
     { \
          bOk = false; \
          cout << "FAIL parseDT ERROR test for " << val << endl; \
     }

// YYYY[MM[DD]]
#define TEST_DTENC_ERROR( val_year, val_month, val_day ) \
     if ( encodeDT( result, val_year, val_month, val_day ) ) \
     { \
          bOk = false; \
          cout << "FAIL encodeDT OK test for year=" << val_year << \
               " month=" << val_month << " day=" << val_day << endl; \
     }

#define TEST_DTENCODE_ERROR( val, val_year, val_month, val_day ) \
     { \
          TEST_DTPRS_ERROR( val ); \
          TEST_DTENC_ERROR( val_year, val_month, val_day ) \
     }

//  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
#define TEST_TSPRS_ERROR( val ) \
     if ( -1 != parseTS( val, year, month, day, hour, minute, \
                                        second, fractionOfSec, offset ) ) \
     { \
          bOk = false; \
          cout << "FAIL parseTS ERROR test for " << val << endl; \
     } \

//  YYYY[MM[DD[HH[MM[SS[.S[S[S[S]]]]]]]]][+/-ZZZZ]
#define TEST_TSENC_ERROR( val_year, val_month, val_day, val_hour, \
                    val_minute, val_second, val_fractionOfSec, val_offset ) \
     if ( encodeTS( result, val_year, val_month, val_day, val_hour, \
               val_minute, val_second, val_fractionOfSec, val_offset ) ) \
     { \
          bOk = false; \
          cout << "FAIL encodeTS ERROR test for year=" << val_year << \
                    " month=" << val_month << " day=" << val_day << \
                    " hour=" << val_hour << " minute=" << val_minute << \
                    " second=" << val_second << " fractionOfSec=" << \
                    val_fractionOfSec << " offset=" << val_offset << endl; \
     }

#define TEST_TSENCODE_ERROR( val, val_year, val_month, val_day, val_hour, \
                    val_minute, val_second, val_fractionOfSec, val_offset ) \
     { \
          TEST_TSPRS_ERROR( val ); \
          TEST_TSENC_ERROR( val_year, val_month, val_day, val_hour, \
                    val_minute, val_second, val_fractionOfSec, val_offset ) \
     }

#define TEST_VERIF_ERROR( ver, name, val ) \
     if ( vr##ver.test( name, val ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify ERROR test for <" << name << "> - " << \
                                                            val << endl; \
     }

#define TEST_ERROR( ver, name, val ) \
     TEST_VERIF_ERROR( ver, name, val ) \
     if ( vr##ver.test_set( &test_obj, name, val ) || \
        ( strcmp( test_obj.getData(), "" ) != 0 ) ) \
     { \
          bOk = false; \
          cout << "FAIL verify_set ERROR test for <" << name << \
                                                       "> - " << val << endl; \
     } 

#define TEST_OK_3_DT( val ) TEST_OK( 4, "DT", val )
#define TEST_ERROR_3_DT( val ) TEST_ERROR( 4, "DT", val )

#define TEST_OK_3_TM( val ) TEST_OK( 4, "TM", val )
#define TEST_ERROR_3_TM( val ) TEST_ERROR( 4, "TM", val )

#define TEST_OK_3_TS( val ) TEST_OK( 4, "TS.1", val )
#define TEST_ERROR_3_TS( val ) TEST_ERROR( 4, "TS.1", val )

#define TEST_OK_5_DT( val ) TEST_OK( 5, "DT", val )
#define TEST_ERROR_5_DT( val ) TEST_ERROR( 5, "DT", val )

#define TEST_OK_5_TM( val ) TEST_OK( 5, "TM", val )
#define TEST_ERROR_5_TM( val ) TEST_ERROR( 5, "TM", val )

#define TEST_OK_5_TS( val ) TEST_OK( 5, "TS", val )
#define TEST_ERROR_5_TS( val ) TEST_ERROR( 5, "TS", val )

#define TEST_PARSEINT_OK( val ) TEST_FUNC_OK( parseInt, dt, val )
#define TEST_PARSEINT_BASE_OK( val, base ) \
                              TEST_BASE_FUNC_OK( parseInt, dt, val, base )
#define TEST_PARSEINT_ERROR( val ) TEST_FUNC_ERROR( parseInt, dt, val )

#define TEST_ISFLOAT_OK( val ) TEST_ISFUNC_OK( isFloat, val )
#define TEST_ISFLOAT_ERROR( val ) TEST_ISFUNC_ERROR( isFloat, val ) 

#define TEST_PARSEINT64_OK( val ) TEST_FUNC_OK( parseInt64, dt64, val )
#define TEST_PARSEINT64_ERROR( val ) TEST_FUNC_ERROR( parseInt64, dt64, val )

#define COMPLEATE_LONG_STRING( val, size ) \
     for ( i = 0; i < size; i++ ) \
          val += "1";

using namespace std;


bool test_true( const std::string& )
{
     return true;
}

bool test_false( const std::string& )
{
     return false;
}

///////////////////////////////////////////////////////////////////////

int main()
{
     std::string verif;
     bool bOk = true;
     cout<<"---------------tests----------------"<<endl;
     verify vr4( "2.4" );
     cout << "---------------version 2.4----------------" << endl;
     TEST_START( DT ); // test DT value validation
          TEST_OK_3_DT( "" ); // empty
          TEST_ERROR_3_DT( "197" ); // error - not full year
          TEST_ERROR_3_DT( "1a97" ); // error - char in year
          TEST_OK_3_DT( "1974" ); // year
          TEST_ERROR_3_DT( "197a" ); // error - char in year at the end
          TEST_ERROR_3_DT( "19741" ); // error - not full month
          TEST_OK_3_DT( "197412" ); // year + month
          TEST_ERROR_3_DT( "19741a" ); // error - char in month
          TEST_ERROR_3_DT( "197413" ); // error - month above border
          TEST_ERROR_3_DT( "1974122" ); // error - not full day
          TEST_OK_3_DT( "19741225" ); // year + month + day
          TEST_ERROR_3_DT( "1974122a" ); // error - char in day
          TEST_ERROR_3_DT( "19741232" ); // error - day above border
          TEST_ERROR_3_DT( "19a41230" ); // error - char in data
          TEST_ERROR_3_DT( "197412224" ); // error - size above max value
     TEST_END( "DT" );
     TEST_START( TM ); // test TM value validation
          TEST_OK_3_TM( "" ); // empty
          TEST_ERROR_3_TM( "1" ); // error - not full hour
          TEST_ERROR_3_TM( "24" ); // error - hour above border
          TEST_OK_3_TM( "23" ); // hour
          TEST_ERROR_3_TM( "2a" ); // error - char in hour
          TEST_ERROR_3_TM( "236" ); // error - not full minutes
          TEST_OK_3_TM( "2359" ); // hour + minutes
          TEST_ERROR_3_TM( "235a" ); // error - char in minutes
          TEST_ERROR_3_TM( "2a59" ); // error - char in hour
          TEST_ERROR_3_TM( "2360" ); // error - minutes above border
          TEST_ERROR_3_TM( "23591" ); // error - not full seconds
          TEST_OK_3_TM( "235916" ); // hour + minutes + seconds
          TEST_ERROR_3_TM( "23591a" ); // error - char in seconds at the end
          TEST_ERROR_3_TM( "2359a1" ); // error - char in seconds
          TEST_ERROR_3_TM( "23a591" ); // error - char in minutes
          TEST_ERROR_3_TM( "235960" ); // error - seconds above border
          TEST_ERROR_3_TM( "2359166" ); // error - no dot after seconds
          TEST_ERROR_3_TM( "235916z" ); // error - no dot after seconds
          // error - dot without fractions of seconds
          TEST_ERROR_3_TM( "235916." ); 
          // hour + minutes + seconds + fraction of seconds with 1/10 precision
          TEST_OK_3_TM( "235916.1" ); 
          TEST_ERROR_3_TM( "235916.a" ); // error - char in fraction of seconds
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/100 precision
          TEST_OK_3_TM( "235916.21" );
          // error - char in fraction of secconds
          TEST_ERROR_3_TM( "235916.2a" ); 
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/1000 precision
          TEST_OK_3_TM( "235916.321" );
          // error - char in fraction of secconds
          TEST_ERROR_3_TM( "235916.32a" ); 
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision
          TEST_OK_3_TM( "235916.4321" );
          // error - char in fraction of secconds
          TEST_ERROR_3_TM( "235916.432a" ); 
          // error - no sign char after fraction
          TEST_ERROR_3_TM( "235916.43210" ); 
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision + plus offset
          TEST_OK_3_TM( "235916.4321+0156" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision + minus offset
          TEST_OK_3_TM( "235916.4321-0156" );
          TEST_ERROR_3_TM( "235916.4321+2d56" ); // error - char in offset
          // error - hour offset above border
          TEST_ERROR_3_TM( "235916.4321-2412" ); 
          // error - minutes offset above border
          TEST_ERROR_3_TM( "235916.432a+2360" ); 
          // hour + plus offset
          TEST_OK_3_TM( "23+2359" );
          // hour + minutes + minus offset
          TEST_OK_3_TM( "2359-0156" );
          // hour + minutes + seconds + minus offset
          TEST_OK_3_TM( "235916-0156" );
          // hour + minutes + seconds + fraction of seconds with 1/10 precision 
          //  + minus offset
          TEST_OK_3_TM( "235916.4-0156" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/100 precision + minus offset
          TEST_OK_3_TM( "235916.45-0156" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/1000 precision + minus offset
          TEST_OK_3_TM( "235916.456-0156" );
     TEST_END( "TM" );
     TEST_START_TS; // test TS value validation
          TEST_OK_3_TS( "" ); // empty
          TEST_ERROR_3_TS( "197" ); // error - not full year
          TEST_ERROR_3_TS( "1a97" ); // error - char in year
          TEST_OK_3_TS( "1974" ); // year
          TEST_ERROR_3_TS( "197a" ); // error - char in year at the end
          TEST_ERROR_3_TS( "19741" ); // error - not full month
          TEST_OK_3_TS( "197412" ); // year + month
          TEST_ERROR_3_TS( "19741a" ); // error - char in month
          TEST_ERROR_3_TS( "197413" ); // error - month above border
          TEST_ERROR_3_TS( "1974122" ); // error - not full day
          TEST_OK_3_TS( "19741225" ); // year + month + day
          TEST_ERROR_3_TS( "1974122a" ); // error - char in day
          TEST_ERROR_3_TS( "19741232" ); // error - day above border
          TEST_ERROR_3_TS( "19a41230" ); // error - char in data
          TEST_ERROR_3_TS( "197412224" ); // error - not full hour
          TEST_ERROR_3_TS( "1974132523" ); // error - month above border
          TEST_ERROR_3_TS( "1974122524" ); // error - hour above border
          TEST_ERROR_3_TS( "1974122523" ); // error - hour only
          TEST_ERROR_3_TS( "197412252a" ); // error - char in hour
          TEST_ERROR_3_TS( "19741225236" ); // error - not full minutes
          TEST_OK_3_TS( "197412252359" ); // year + month + day + minutes
          TEST_ERROR_3_TS( "19741225235a" ); // error - char in minutes
          TEST_ERROR_3_TS( "197412252a59" ); // error - char in hour
          TEST_ERROR_3_TS( "197412252360" ); // error - minutes above border
          TEST_ERROR_3_TS( "1974122523591" ); // error - not full seconds
          // year + month + day + minutes + seconds
          TEST_OK_3_TS( "19741225235916" ); 
          // error - char in seconds at the end
          TEST_ERROR_3_TS( "1974122523591a" ); 
          TEST_ERROR_3_TS( "197412252359a1" ); // error - char in seconds
          TEST_ERROR_3_TS( "1974122523a591" ); // error - char in minutes
          TEST_ERROR_3_TS( "19741225235960" ); // error - seconds above border
          TEST_ERROR_3_TS( "197412252359166" ); // error - no dot after seconds
          TEST_ERROR_3_TS( "19741225235916z" ); // error - no dot after seconds
          // error - dot without fractions 
          TEST_ERROR_3_TS( "19741225235916." ); 
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10 precision
          TEST_OK_3_TS( "19741225235916.1" );
          // error - char in fraction of seconds
          TEST_ERROR_3_TS( "19741225235916.a" ); 
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/100 precision
          TEST_OK_3_TS( "19741225235916.21" );
          // error - char in fraction of seconds
          TEST_ERROR_3_TS( "19741225235916.2a" ); 
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision 
          TEST_OK_3_TS( "19741225235916.321" );
          // error - char in fraction of seconds
          TEST_ERROR_3_TS( "19741225235916.32a" ); 
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10000 precision 
          TEST_OK_3_TS( "19741225235916.4321" );
          // error - char in fraction of seconds
          TEST_ERROR_3_TS( "19741225235916.432a" ); 
          TEST_ERROR_3_TS( "19741225235916.43210" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + plus offset
          TEST_OK_3_TS( "19741225235916.4321+0156" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + minus offset
          TEST_OK_3_TS( "19741225235916.4321-0156" );
          // error - char in offset hour
          TEST_ERROR_3_TS( "19741225235916.4321+2d56" ); 
          // error - offset hour above border
          TEST_ERROR_3_TS( "19741225235916.4321-2412" ); 
          // error - char in fraction of seconds
          TEST_ERROR_3_TS( "19741225235916.432a+2360" ); 
          TEST_ERROR_3_TS( "1974122323+2359" ); // error - only hour
          // year + month + day + hour + minutes + minus offset
          TEST_OK_3_TS( "197412232359-0156" );
          // year + month + day + hour + minutes + seconds + minus offset
          TEST_OK_3_TS( "19741223235916-0156" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10 precision + minus offset
          TEST_OK_3_TS( "19741223235916.4-0156" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/100 precision + minus offset
          TEST_OK_3_TS( "19741223235916.45-0156" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + minus offset
          TEST_OK_3_TS( "19741223235916.456-0156" );
     TEST_END( "TS" );
     TEST_START( ID ); // test ID value validation
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE );
          TEST_OK( 4, "ID", test.c_str() ); // error - size below border
          test = "";
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE + 1 );
          TEST_ERROR( 4, "ID", test.c_str() ); // error - size above border
     TEST_END( "ID" );
     TEST_START( IS ); // test IS value validation
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE );
          TEST_OK( 4, "IS", test.c_str() ); // error - size below border
          test = "";
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE + 1 );
          TEST_ERROR( 4, "IS", test.c_str() ); // error - size above border
     TEST_END( "IS" );
     TEST_START( FT ); // test FT value validation
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_FT_SIZE );
          TEST_OK( 4, "FT", test.c_str() ); // error - size below border
          test = "";
          COMPLEATE_LONG_STRING( test, MAX_FT_SIZE + 1 );
          TEST_ERROR( 4, "FT", test.c_str() ); // error - size above border
          TEST_OK_TRIM_BOTH( 4, "FT", "test" );
     TEST_END( "FT" );
     TEST_START( TX ); // test TX value validation
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_FT_SIZE );
          TEST_OK( 4, "TX", test.c_str() ); // error - size below border
          test = "";
          COMPLEATE_LONG_STRING( test, MAX_FT_SIZE + 1 );
          TEST_ERROR( 4, "TX", test.c_str() ); // error - size above border
          TEST_OK_TRIM_RIGHT( 4, "TX", "test" );
     TEST_END( "TX" );
     TEST_START( ST ); // test ST value validation
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE );
          TEST_OK( 4, "ST", test.c_str() ); // error - size below border
          test = "";
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE + 1 );
          TEST_ERROR( 4, "ST", test.c_str() ); // error - size above border
          TEST_OK_TRIM_BOTH( 4, "ST", "test" );
     TEST_END( "ST" );
     TEST_START( SI ); // test SI value validation
          TEST_OK( 4, "SI", "" ); // empty
          TEST_OK( 4, "SI", "19367" ); // correct non-negative number
          TEST_ERROR( 4, "SI", "1936.7" ); // error - float number
          TEST_ERROR( 4, "SI", "+19367" ); // error - sign exist
          TEST_ERROR( 4, "SI", "-19367" ); // error - size above border
          TEST_ERROR( 4, "SI", "1a367" ); // error - size above border
     TEST_END( "SI" );
     TEST_START( NM ); // test NM value validation
          TEST_OK( 4, "NM", "" ); // empty
          TEST_OK( 4, "NM", "19367" ); // correct number
          TEST_OK( 4, "NM", "-19367" ); // correct negative number
          TEST_OK( 4, "NM", "+19367." ); // correct positive number
          TEST_OK( 4, "NM", "-19367.23" ); // correct negative float number
          TEST_OK( 4, "NM", "-0.23" ); // correct negative float number
          TEST_ERROR( 4, "NM", "a1936.7" ); // error - char in number
          TEST_ERROR( 4, "NM", " +19367" ); // error - space in number
          TEST_ERROR( 4, "NM", ".19367.2" ); // error - space in number
          TEST_ERROR( 4, "NM", "19367.2 " ); // error - space in number
     TEST_END( "NM" );
     TEST_START( TN ); // test TN value validation
          TEST_OK( 4, "TN", "" ); // empty
          TEST_OK( 4, "TN", "987-6999" ); // correct number
          TEST_ERROR( 4, "TN", "19367-22" ); // error - incorrect phone format
          TEST_ERROR( 4, "TN", "193-67222" ); // error - incorrect size
          TEST_ERROR( 4, "TN", "19a-2223" ); // error - char in number
          TEST_ERROR( 4, "TN", "190-22k3" ); // error - char in number
          TEST_OK( 4, "TN", "7987-6999" ); // correct number with country code
          TEST_ERROR( 4, "TN", "a987-6999" ); // error - char in country code
          TEST_OK( 4, "TN", "(497)987-6999" ); // correct number with sity code
          TEST_ERROR( 4, "TN", "(497987-6999" ); // error - incorrect format
          TEST_ERROR( 4, "TN", "497)987-6999" ); // error - incorrect format
          TEST_ERROR( 4, "TN", "(49a)987-6999" ); // error - char in sity code
          // correct number with country and sity code
          TEST_OK( 4, "TN", "10(497)987-6999" ); 
          TEST_ERROR( 4, "TN", "10(497987-6999" ); // error - incorrect format
          TEST_ERROR( 4, "TN", "10497)987-6999" ); // error - incorrect format
          TEST_ERROR( 4, "TN", "10(49a)987-6999" ); // error - char in sity code
          TEST_ERROR( 4, "TN", "1a(497)987-6999" ); // error - char in sity code
          // correct number with country and sity code and extension
          TEST_OK( 4, "TN", "10(497)987-6999X103" );
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10(497987-6999X10300" ); 
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10497)987-6999X103" ); 
          // error - char in sity code
          TEST_ERROR( 4, "TN", "10(49a)987-6999X111" ); 
          // error - char in country code
          TEST_ERROR( 4, "TN", "1a(497)987-6999X4566" ); 
          // error - extension overflow
          TEST_ERROR( 4, "TN", "10(497)987-6999X145669" ); 
          // error - char in extension
          TEST_ERROR( 4, "TN", "10(497)987-6999X4f66" ); 
          TEST_OK( 4, "TN", "987-6999X1008" ); // correct number with extension
          TEST_ERROR( 4, "TN", "987-6999X5r5" ); // error - char in extension
          // correct number with country and sity code, extension and beeper
          TEST_OK( 4, "TN", "10(497)987-6999X103B809" );
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10(497987-6999X10300B109" ); 
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10497)987-6999X103B109" ); 
          // error - char in sity code
          TEST_ERROR( 4, "TN", "10(49a)987-6999X111B109" ); 
          // error - char in country code
          TEST_ERROR( 4, "TN", "1a(497)987-6999X4566B109" ); 
          // error - extension overflow
          TEST_ERROR( 4, "TN", "10(497)987-6999X145669B109" ); 
          // error - char in extension
          TEST_ERROR( 4, "TN", "10(497)987-6999X4f66B109" ); 
          // error - beeper overflow
          TEST_ERROR( 4, "TN", "10(497)987-6999X466B109999" ); 
          // error - char in beeper
          TEST_ERROR( 4, "TN", "10(497)987-6999X466Ba09" ); 
          // correct number with extension and beeper
          TEST_OK( 4, "TN", "987-6999X1008B109" );
          // error - char in extension
          TEST_ERROR( 4, "TN", "987-6999X5r5B498" ); 
          TEST_ERROR( 4, "TN", "987-6999X55B1a9" ); // error - char in beeper
          // correct number with beeper
          TEST_OK( 4, "TN", "987-6999B109" );
          TEST_ERROR( 4, "TN", "987-6999B1a9" ); // error - char in beeper
          // correct number with country and sity code, extension, beeper 
          //  and comment
          TEST_OK( 4, "TN", "10(497)987-6999X103B809Ctest \"dd" );
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10(497987-6999X10300B109Ctest \"dd" ); 
          // error - incorrect format
          TEST_ERROR( 4, "TN", "10497)987-6999X103B109Ctest \"dd" ); 
          // error - char in sity code
          TEST_ERROR( 4, "TN", "10(49a)987-6999X111B109Ctest \"dd" ); 
          // error - char in country code
          TEST_ERROR( 4, "TN", "1a(497)987-6999X4566B109Ctest \"dd" ); 
          // error - extension overflow
          TEST_ERROR( 4, "TN", "10(497)987-6999X145669B109Ctest \"dd" ); 
          // error - char in extension
          TEST_ERROR( 4, "TN", "10(497)987-6999X4f66B109Ctest \"dd" ); 
          // error - beeper overflow
          TEST_ERROR( 4, "TN", "10(497)987-6999X466B109999Ctest \"dd" ); 
          // error - char in beeper
          TEST_ERROR( 4, "TN", "10(497)987-6999X466Ba09Ctest \"dd" ); 
          // correct number with extension, beeper and comment
          TEST_OK( 4, "TN", "987-6999X1008B109Ctest \"dd" );
          // error - char in extension
          TEST_ERROR( 4, "TN", "987-6999X5r5B498Ctest \"dd" );
          // error - char in beeper
          TEST_ERROR( 4, "TN", "987-6999X55B1a9Ctest \"dd" ); 
          // correct number with beeper and comment
          TEST_OK( 4, "TN", "987-6999B109Ctest \"dd" );
          // error - char in beeper
          TEST_ERROR( 4, "TN", "987-6999B1a9Ctest \"dd" ); 
          // correct number with comment
          TEST_OK( 4, "TN", "987-6999Ctest \"dd" );
     TEST_END( "TN" );
     TEST_START_SIMPLE // int parsing function
          int dt;
          TEST_PARSEINT_OK( 897245 ); // correct positive number
          TEST_PARSEINT_OK( 2147483647 ); // maximum correct positive number
          TEST_PARSEINT_OK( -8 ); // correct negative number
          TEST_PARSEINT_OK( -2147483647 ); // minimum correct negative number
          // maximum correct positive number with base 16
          TEST_PARSEINT_BASE_OK( 0x7FFFFFFF, 16 ); 
          TEST_PARSEINT_ERROR( "2147483648" ); // error - overflow
          TEST_PARSEINT_ERROR( "-2147483649" ); // error - underflow
          TEST_PARSEINT_ERROR( "a7" ); // error - char in number
          TEST_PARSEINT_ERROR( "89j8" ); // error - char in number
          TEST_PARSEINT_ERROR( "98 " ); // error - space in number
          TEST_PARSEINT_ERROR( "" ); // error - empty string
     TEST_END( "parseInt" );
     TEST_START_SIMPLE // float validation function
          TEST_ISFLOAT_OK( "89.7245" ); // correct positive float
     // correct minimum positive float
          TEST_ISFLOAT_OK( "0.0000000000000000000000000000000000001175494351" );
          // correct maximum positive float
          TEST_ISFLOAT_OK( "340282346600000000000000000000000000000" ); 
          TEST_ISFLOAT_OK( "-2147.483647" ); // correct negative float
          // correct minumum negative float
          TEST_ISFLOAT_OK( "-340282346600000000000000000000000000000" ); 
          // correct maximum negative float
          TEST_ISFLOAT_OK( "-0.0000000000000000000000000000000000001175494351" ); 
          // error - underflow
          TEST_ISFLOAT_ERROR( "-3402823466000000000000000000000000000000" );
          // error - overflow
          TEST_ISFLOAT_ERROR( "3402823466000000000000000000000000000000" ); 
          TEST_ISFLOAT_ERROR( "a.7" ); // error - char in float
          TEST_ISFLOAT_ERROR( "89.j8" ); // error - char in float
          TEST_ISFLOAT_ERROR( "98. " ); // error - space in float
          TEST_ISFLOAT_ERROR( "" ); // error - empty string
     TEST_END( "isFloat" );
     TEST_START_SIMPLE // int64 parsing function
          __int64 dt64;
          TEST_PARSEINT64_OK( 897245029875 ); // correct int64 positive number
          TEST_PARSEINT64_OK( -897245029875 ); // correct int64 negative number
          // error - overflow
          TEST_PARSEINT64_ERROR( "0852089567928789724502987504986" ); 
          // error - underflow
          TEST_PARSEINT64_ERROR( "-08520895679287897245029875049860" ); 
     TEST_END( "parseInt64" );
     TEST_START_SIMPLE // Phone Number parsing function
          int country; // [NN] [(999)]999-9999[X99999][B99999][C any text]
          int sity;
          std::string number;
          int64_t extension;
          int64_t beeper;
          std::string comment;
          std::string result;
          // correct number
          TEST_PHONENUMBER_OK( "987-6999", 0, 0, "987-6999", 0, 0, "" );
          // error - incorrect phone format
          TEST_PHONENUMBER_PARSE_ERROR( "19367-22" ); 
          // error - incorrect size
          TEST_PHONENUMBER_PARSE_ERROR( "193-67222" ); 
          TEST_PHONENUMBER_PARSE_ERROR( "19a-2223" ); // error - char in number
          TEST_PHONENUMBER_PARSE_ERROR( "190-22k3" ); // error - char in number
          // correct number with country code
          TEST_PHONENUMBER_OK( "7987-6999", 7, 0, "987-6999", 0, 0, "" ); 
          // error - char in country code
          TEST_PHONENUMBER_PARSE_ERROR( "a987-6999" ); 
          // correct number with sity code
          TEST_PHONENUMBER_OK( "(497)987-6999", 0, 497, "987-6999", 0, 0, "" ); 
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "(497987-6999" ); 
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "497)987-6999" ); 
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "(49a)987-6999" ); 
          // correct number with country and sity code
          TEST_PHONENUMBER_OK( "10(497)987-6999", 
                                             10, 497, "987-6999", 0, 0, "" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10(497987-6999" ); 
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10497)987-6999" ); 
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "10(49a)987-6999" ); 
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "1a(497)987-6999" ); 
          // correct number with country and sity code and extension
          TEST_PHONENUMBER_OK( "10(497)987-6999X103",
                                             10, 497, "987-6999", 103, 0, "" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10(497987-6999X10300" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10497)987-6999X103" );
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "10(49a)987-6999X111" );
          // error - char in country code
          TEST_PHONENUMBER_PARSE_ERROR( "1a(497)987-6999X4566" );
          // error - extension overflow
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X145669" );
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X4f66" );
          // correct number with extension
          TEST_PHONENUMBER_OK( "987-6999X1008",
                                             0, 0, "987-6999", 1008, 0, "" ); 
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999X5r5" ); 
          // correct number with country and sity code, extension and beeper
          TEST_PHONENUMBER_OK( "10(497)987-6999X103B809",
                                        10, 497, "987-6999", 103, 809, "" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10(497987-6999X10300B109" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10497)987-6999X103B109" );
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "10(49a)987-6999X111B109" );
          // error - char in country code
          TEST_PHONENUMBER_PARSE_ERROR( "1a(497)987-6999X4566B109" );
          // error - extension overflow
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X145669B109" );
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X4f66B109" );
          // error - beeper overflow
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X466B109999" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X466Ba09" );
          // correct number with extension and beeper
          TEST_PHONENUMBER_OK( "987-6999X1008B109",
                                             0, 0, "987-6999", 1008, 109, "" );
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999X5r5B498" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999X55B1a9" ); 
          // correct number with beeper
          TEST_PHONENUMBER_OK( "987-6999B109", 0, 0, "987-6999", 0, 109, "" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999B1a9" ); 
          // correct number with country and sity code, extension, beeper 
          //  and comment
          TEST_PHONENUMBER_OK( "10(497)987-6999X103B809Ctest \"dd",
                              10, 497, "987-6999", 103, 809, "test \"dd" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10(497987-6999X10300B109Ctest \"dd" );
          // error - incorrect format
          TEST_PHONENUMBER_PARSE_ERROR( "10497)987-6999X103B109Ctest \"dd" );
          // error - char in sity code
          TEST_PHONENUMBER_PARSE_ERROR( "10(49a)987-6999X111B109Ctest \"dd" );
          // error - char in country code
          TEST_PHONENUMBER_PARSE_ERROR( "1a(497)987-6999X4566B109Ctest \"dd" );
          // error - extension overflow
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X145669B109Ctest \"dd" );
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X4f66B109Ctest \"dd" );
          // error - beeper overflow
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X466B109999Ctest \"dd" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "10(497)987-6999X466Ba09Ctest \"dd" );
          // correct number with extension, beeper and comment
          TEST_PHONENUMBER_OK( "987-6999X1008B109Ctest \"dd",
                                   0, 0, "987-6999", 1008, 109, "test \"dd" );
          // error - char in extension
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999X5r5B498Ctest \"dd" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999X55B1a9Ctest \"dd" );
          // correct number with beeper and comment
          TEST_PHONENUMBER_OK( "987-6999B109Ctest \"dd",
                                   0, 0, "987-6999", 0, 109, "test \"dd" );
          // error - char in beeper
          TEST_PHONENUMBER_PARSE_ERROR( "987-6999B1a9Ctest \"dd" );
          // correct number with comment
          TEST_PHONENUMBER_OK( "987-6999Ctest \"dd",
                                        0, 0, "987-6999", 0, 0, "test \"dd" );
          // error - invalid country
          TEST_PHONENUMBER_ENCODE_ERROR( -1, 497, "987-6999", 
                                                       103, 809, "test \"dd" );
          // error - invalid country
          TEST_PHONENUMBER_ENCODE_ERROR( 100, 497, "987-6999",
                                                       103, 809, "test \"dd" );
          // error - invalid sity
          TEST_PHONENUMBER_ENCODE_ERROR( 10, -1, "987-6999",
                                                       103, 809, "test \"dd" );
          // error - invalid sity
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 1000, "987-6999",
                                                       103, 809, "test \"dd" );
          // error - invalid number
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "987-69991",
                                                       103, 809, "test \"dd" );
          // error - invalid number
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "1987-6999",
                                                       103, 809, "test \"dd" );
          // error - invalid number
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "98-769991",
                                                       103, 809, "test \"dd" );
          // error - invalid extension
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "987-6999",
                                                       -13, 809, "test \"dd" );
          // error - invalid extension
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "987-6999",
                                                  103000, 809, "test \"dd" );
          // error - invalid beeper
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "987-6999",
                                                       103, -89, "test \"dd" );
          // error - invalid beeper
          TEST_PHONENUMBER_ENCODE_ERROR( 10, 497, "987-6999",
                                                  103, 809000, "test \"dd" );
     TEST_END( "parsePhoneNumber and encodePhoneNumber" );
     TEST_START_SIMPLE // TM parsing/encoding functions
          int hour = 0; 
          int minute = 0; 
          int second = 0; 
          int fractionOfSec = 0; 
          char precision = 0; 
          int offset = 0; 
          std::string result;
          TEST_TMPARSE_PR_ERROR( "1" ); // error - not full hour
          // error - hour above maximum border
          TEST_TMENCODE_PR_ERROR( "2416", 24, 16, -1, -1, 9999, 0 );
          // error - hour under minimum border
          TEST_TMENC_ERROR( -2, 16, -1, -1, 9999, 0 );
          // hour with hour precision
          TEST_TMENCODE_OK( "23", true, 1, 23, -1, -1, -1, 9999, 0 );
          // error - only hour without hour precision
          TEST_TMPARSE_ERROR( "23", false );
          // error - char in hour with hour precision
          TEST_TMPARSE_PR_ERROR( "2a" );
          // error - not full minutes with hour precision
          TEST_TMPARSE_PR_ERROR( "236" );
          // hour + minutes with hour precision
          TEST_TMENCODE_PR_OK( "2359", 2, 23, 59, -1, -1, 9999, 0 );
          TEST_TMPARSE_PR_ERROR( "235a" ); // error - char in minutes
          TEST_TMPARSE_PR_ERROR( "2a59" ); // error - char in hour
          // error - minutes above maximum border
          TEST_TMENCODE_PR_ERROR( "2360", 23, 60, -1, -1, 9999, 0 );
          // error - minutes under minimum border
          TEST_TMENC_ERROR( 23, -2, -1, -1, -1, 0 );
          TEST_TMPARSE_PR_ERROR( "23591" ); // error - not full seconds
          // hour + minutes + seconds
          TEST_TMENCODE_PR_OK( "235916", 3, 23, 59, 16, -1, 9999, 0 );
          // error - char in seconds at the end
          TEST_TMPARSE_PR_ERROR( "23591a" );
          TEST_TMPARSE_PR_ERROR( "2359a1" ); // error - char in seconds
          TEST_TMPARSE_PR_ERROR( "23a591" ); // error - char in minutes
          // error - seconds above maximum border
          TEST_TMENCODE_PR_ERROR( "235960", 23, 59, 60, -1, 9999, 0 );
          // error - seconds under minimum border
          TEST_TMENC_ERROR( 23, 59, -2, -1, -1, 0 );
          TEST_TMPARSE_PR_ERROR( "2359166" ); // error - no dot after seconds
          TEST_TMPARSE_PR_ERROR( "235916z" ); // error - no dot after seconds
          // error - dot without fractions of seconds
          TEST_TMPARSE_PR_ERROR( "235916." );
          // hour + minutes + seconds + fraction of seconds with 1/10 precision
          TEST_TMENCODE_PR_OK( "235916.1", 4, 23, 59, 16, 1000, 9999, 0 );
          // error - char in fraction of seconds
          TEST_TMPARSE_PR_ERROR( "235916.a" ); 
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/100 precision
          TEST_TMENCODE_PR_OK( "235916.21", 4, 23, 59, 16, 2100, 9999, 0 );
          // error - char in fraction of secconds
          TEST_TMPARSE_PR_ERROR( "235916.2a" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/1000 precision
          TEST_TMENCODE_PR_OK( "235916.321", 4, 23, 59, 16, 3210, 9999, 0 );
          // error - char in fraction of secconds
          TEST_TMPARSE_PR_ERROR( "235916.32a" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision
          TEST_TMENCODE_PR_OK( "235916.4321", 4, 23, 59, 16, 4321, 9999, 0 );
          // error - char in fraction of secconds
          TEST_TMPARSE_PR_ERROR( "235916.432a" );
          // error - no sign char after fraction
          TEST_TMPARSE_PR_ERROR( "235916.43210" );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision + plus offset
          TEST_TMENCODE_PR_OK( "235916.4321+0156", 5, 23, 59, 16, 4321, 116, 0 );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/10000 precision + minus offset
          TEST_TMENCODE_PR_OK( "235916.4321-0156", 5, 23, 59, 16, 4321, -116, 0 );
          TEST_TMPARSE_PR_ERROR( "235916.4321+2d56" ); // error - char in offset
          // error - fractions of second above maximum border
          TEST_TMENC_ERROR( 23, 59, 16, 16565, -1, 0 );
          // error - fractions of second under minimum border
          TEST_TMENC_ERROR( 23, 59, 16, -17, -1, 0 );
          // error - hour offset above maximum border
          TEST_TMENCODE_PR_ERROR( "235916.4321-2412", 23, 59, 16, 4321, -1452, 0 );
          // error - minutes offset above border
          TEST_TMENCODE_PR_ERROR( "235916.4321+2360", 23, 59, 16, 4321, 1440, 0 );
          // error - undefined sign
          TEST_TMENCODE_PR_ERROR( "235916.4321>2360", 23, 59, 16, 4321, 1439, 'k' );
          // hour + plus offset with hour precision
          TEST_TMENCODE_OK( "23+2359", true, 2, 23, -1, -1, -1, 1439, 0 );
          // error - only hour without hour precision
          TEST_TMPARSE_ERROR( "23+2359", false );
          // hour + minutes + minus offset
          TEST_TMENCODE_PR_OK( "2359-0156", 3, 23, 59, -1, -1, -116, 0 );
          // hour + minutes + seconds + minus offset
          TEST_TMENCODE_PR_OK( "235916-0156", 4, 23, 59, 16, -1, -116, 0 );
          // hour + minutes + seconds + fraction of seconds with 1/10 precision 
          //  + minus offset
          TEST_TMENCODE_PR_OK( "235916.4-0156", 5, 23, 59, 16, 4000, -116, 0 );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/100 precision + minus offset
          TEST_TMENCODE_PR_OK( "235916.45-0156", 5, 23, 59, 16, 4500, -116, 0 );
          // hour + minutes + seconds + fraction of seconds 
          //  with 1/1000 precision + minus offset
          TEST_TMENCODE_PR_OK( "235916.456-0156", 5, 23, 59, 16, 4560, -116, 0 );
     TEST_END( "parseTM and encodeTM" );
     TEST_START_SIMPLE // DT parsing/encoding functions
          int year = 0;
          int month = 0;
          int day = 0;
          std::string result;
          TEST_DTENCODE_ERROR( "197", 197, -1, -1 ); // error - not full year
          TEST_DTPRS_ERROR( "1a97" ); // error - char in year
          TEST_DTENCODE_OK( "1974", 1, 1974, -1, -1 ); // year
          TEST_DTPRS_ERROR( "197a" ); // error - char in year at the end
          TEST_DTPRS_ERROR( "19741" ); // error - not full month
          TEST_DTENCODE_OK( "197412", 2, 1974, 12, -1 ); // year + month
          TEST_DTPRS_ERROR( "19741a" ); // error - char in month
          // error - month above border
          TEST_DTENCODE_ERROR( "197413", 1974, 13, -1 ); 
          TEST_DTENC_ERROR( 1974, 0, -1 ); // error - month under border
          TEST_DTPRS_ERROR( "1974122" ); // error - not full day
          TEST_DTENCODE_OK( "19741225", 3, 1974, 12, 25 ); //year + month + day
          TEST_DTPRS_ERROR( "1974122a" ); // error - char in day
          // error - day above border
          TEST_DTENCODE_ERROR( "19741232", 1974, 12, 32 ); 
          TEST_DTENC_ERROR( 1974, 12, 0 ); // error - day under border
          TEST_DTPRS_ERROR( "19a41230" ); // error - char in data
          TEST_DTPRS_ERROR( "197412224" ); // error - size above max value
     TEST_END( "parseDT and encodeDT" );
     TEST_START_SIMPLE // TS parsing/encoding functions
          int year = 0;
          int month = 0;
          int day = 0;
          int hour = 0;
          int minute = 0;
          int second = 0;
          int fractionOfSec = 0;
          int offset = 0;
          std::string result;
          // error - not full year
          TEST_TSENCODE_ERROR( "197", 197, -1, -1, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "1a97" ); // error - char in year
          // year
          TEST_TSENCODE_OK( "1974", 1, 1974, -1, -1, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "197a" ); // error - char in year at the end
          TEST_TSPRS_ERROR( "19741" ); // error - not full month
          // year + month
          TEST_TSENCODE_OK( "197412", 2, 1974, 12, -1, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "19741a" ); // error - char in month
          // error - month above border
          TEST_TSENCODE_ERROR( "197413", 1974, 13, -1, -1, -1, -1, -1, 9999 );
          // error - month under border
          TEST_TSENCODE_ERROR( "197400", 1974, 0, -1, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "1974122" ); // error - not full day
          // year + month + day
          TEST_TSENCODE_OK( "19741225", 
                                   3, 1974, 12, 25, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "1974122a" ); // error - char in day
          // error - day above border
          TEST_TSENCODE_ERROR( "19741232", 
                                        1974, 12, 32, -1, -1, -1, -1, 9999 );
          // error - day under border
          TEST_TSENCODE_ERROR( "19741200", 1974, 12, 0, -1, -1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "19a41230" ); // error - char in data
          TEST_TSPRS_ERROR( "197412224" ); // error - not full hour
          // error - month above border
          TEST_TSENCODE_ERROR( "1974132523", 
                                        1974, 13, 25, 23, -1, -1, -1, 9999 );
          // error - month under border
          TEST_TSENCODE_ERROR( "1974002523",
                                        1974, 0, 25, 23, -1, -1, -1, 9999 );
          // error - hour above border
          TEST_TSENCODE_ERROR( "197412252401",
                                        1974, 12, 25, 24, 1, -1, -1, 9999 );
          // error - hour under border
          TEST_TSENC_ERROR( 1974, 12, 25, -3, 1, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "197412252a" ); // error - char in hour
          TEST_TSPRS_ERROR( "19741225236" ); // error - not full minutes
          // year + month + day + minutes
          TEST_TSENCODE_OK( "197412252359", 
                                   5, 1974, 12, 25, 23, 59, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "19741225235a" ); // error - char in minutes
          TEST_TSPRS_ERROR( "197412252a59" ); // error - char in hour
          // error - minutes above border
          TEST_TSENCODE_ERROR( "197412252360",
                                        1974, 12, 25, 23, 60, -1, -1, 9999 );
          // error - minutes under border
          TEST_TSENC_ERROR( 1974, 12, 25, 23, -5, -1, -1, 9999 );
          TEST_TSPRS_ERROR( "1974122523591" ); // error - not full seconds
          // year + month + day + minutes + seconds
          TEST_TSENCODE_OK( "19741225235916",
                                   6, 1974, 12, 25, 23, 59, 16, -1, 9999 );
          // error - char in seconds at the end
          TEST_TSPRS_ERROR( "1974122523591a" );
          TEST_TSPRS_ERROR( "197412252359a1" ); // error - char in seconds
          TEST_TSPRS_ERROR( "1974122523a591" ); // error - char in minutes
          // error - seconds above border
          TEST_TSENCODE_ERROR( "19741225235960",
                                        1974, 12, 25, 23, 59, 60, -1, 9999 );
          // error - seconds under border
          TEST_TSENC_ERROR( 1974, 12, 25, 23, 59, -3, -1, 9999 );
          TEST_TSPRS_ERROR( "197412252359166" ); // error - no dot after seconds
          TEST_TSPRS_ERROR( "19741225235916z" ); // error - no dot after seconds
          // error - dot without fractions 
          TEST_TSPRS_ERROR( "19741225235916." );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10 precision
          TEST_TSENCODE_OK( "19741225235916.1",
                                   7, 1974, 12, 25, 23, 59, 16, 1000, 9999 );
          // error - char in fraction of seconds
          TEST_TSPRS_ERROR( "19741225235916.a" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/100 precision
          TEST_TSENCODE_OK( "19741225235916.21",
                                   7, 1974, 12, 25, 23, 59, 16, 2100, 9999 );
          // error - char in fraction of seconds
          TEST_TSPRS_ERROR( "19741225235916.2a" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision 
          TEST_TSENCODE_OK( "19741225235916.321",
                                   7, 1974, 12, 25, 23, 59, 16, 3210, 9999 );
          // error - char in fraction of seconds
          TEST_TSPRS_ERROR( "19741225235916.32a" );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10000 precision 
          TEST_TSENCODE_OK( "19741225235916.4321",
                                   7, 1974, 12, 25, 23, 59, 16, 4321, 9999 );
          // error - char in fraction of seconds
          TEST_TSPRS_ERROR( "19741225235916.432a" );
          // error - fractions of seconds above border
          TEST_TSENCODE_ERROR( "19741225235916.43210",
                                   1974, 12, 25, 23, 59, 16, 43210, 9999 );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + plus offset
          TEST_TSENCODE_OK( "19741225235916.4321+0156",
                                   8, 1974, 12, 25, 23, 59, 16, 4321, 116 );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + minus offset
          TEST_TSENCODE_OK( "19741225235916.4321-0156",
                                   8, 1974, 12, 25, 23, 59, 16, 4321, -116 );
          // error - char in offset hour
          TEST_TSPRS_ERROR( "19741225235916.4321+2d56" );
          // error - offset hour above border
          TEST_TSENCODE_ERROR( "19741225235916.4321-2412",
                                   1974, 12, 25, 23, 59, 16, 4321, -1452 );
          // error - char in fraction of seconds
          TEST_TSPRS_ERROR( "19741225235916.432a+2360" );
          // year + month + day + hour + minutes + minus offset
          TEST_TSENCODE_OK( "197412232359-0156",
                                   6, 1974, 12, 23, 23, 59, -1, -1, -116 );
          // year + month + day + hour + minutes + seconds + minus offset
          TEST_TSENCODE_OK( "19741223235916-0156",
                                   7, 1974, 12, 23, 23, 59, 16, -1, -116 );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/10 precision + minus offset
          TEST_TSENCODE_OK( "19741223235916.4-0156",
                                   8, 1974, 12, 23, 23, 59, 16, 4000, -116 );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/100 precision + minus offset
          TEST_TSENCODE_OK( "19741223235916.45-0156",
                                   8, 1974, 12, 23, 23, 59, 16, 4500, -116 );
          // year + month + day + hour + minutes + seconds 
          //  + fraction of seconds with 1/1000 precision + minus offset
          TEST_TSENCODE_OK( "19741223235916.456-0156",
                                   8, 1974, 12, 23, 23, 59, 16, 4560, -116 );
     TEST_END( "parseTS and encodeTS" );
     TEST_START_SIMPLE; // test user validation base function
          std::string test = "";
          int i;
          COMPLEATE_LONG_STRING( test, MAX_ID_SIZE + 1 );
          // test for default function = false and user function = false
          vr4.add_test( "IS", test_false );
          TEST_VERIF_ERROR( 4, "IS", test );
          // delete function from base
          vr4.del_test( "IS", test_false );
          // test for default function = true and user function = true
          vr4.add_test( "IS", test_true );
          TEST_VERIF_OK( 4, "IS", "1" );
          // empty functions from base
          vr4.empty_test( "IS" );
          // test for default function = true and user function = false
          vr4.add_test( "IS", test_false );
          TEST_VERIF_ERROR( 4, "IS", "1" );
          // empty functions from base
          vr4.empty_test( "IS" );
          // test for default function = false and user function = true
          vr4.add_test( "IS", test_true );
          TEST_VERIF_ERROR( 4, "IS", test );
     TEST_END( "user functions" );
     verify vr5( "2.5" );
	return 0;
}


