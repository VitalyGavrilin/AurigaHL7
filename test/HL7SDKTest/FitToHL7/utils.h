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

//#include "common.h"
#include <Windows.h>
#include <string>
#include "pugixml.hpp"
//#include <libxml/xmlreader.h>

#define USAGE \
     "FitToHL7 [command]\n"\
     "commands\n"\
     "\t--h or --?\t\t\t- this help.\n"\
     "\t--proxy=<Proxy>\t\t- proxy name for Internet connection\n"\
     "\t--dbg[=<file>]\t- print trace data to <file> or fthtrace.txt\n"\
     "\t--month\t\t\t- the first request will be for a month (for an hour by default)\n"\
     "\t--day\t\t\t- the first request will be for a day (for an hour by default)\n"\
     "\t--clientid=<client_ID>\t- google client ID\n"\
     "\t--clnsecret=<client_secret> - google client secret\n"\
     "\t--hisip=<HIS IP address>\t- HIS IP address\n"\
     "\t--hisportin=<HIS in port>\t- HIS port for receiving data\n"\
     "\t--clnportin=<client in port> - client port for receiving data from HIS\n"\
     "\t--set=<XML settings file>\t- XML file with settings\n"

typedef void( *fn_CallBack )( std::string type, std::string data, void* context );

std::string FileTimeToNanoString( SYSTEMTIME* st, FILETIME* offset );
void subMonth( SYSTEMTIME* time );
void subDay( SYSTEMTIME* time );
void subHour( SYSTEMTIME* time );
void subTimeInHour( int offset, SYSTEMTIME* time );

VALUE_TYPE getType( std::string val );
void resetData( pFIT_SESSION pSession );
void initSession( FIT_SESSION& sessin );
bool parsCommandLine( int argc, char* argv[], FIT_SESSION& sessin );

bool icompare( const std::string& str1, const std::string& str2 );
void loadXMLSettings( std::string file, FIT_SESSION* sessin );
void enumValues( pugi::xml_node& node, fn_CallBack call, void* context );

