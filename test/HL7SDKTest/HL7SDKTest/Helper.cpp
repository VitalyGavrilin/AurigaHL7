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

#include "stdafx.h"
#include <sstream>
#include "Helper.h"

#include "Tables.h"
#include "dataencode.h"

using namespace std;

DATA_TYPE CountryTypeTbl[ ] = {
     { L"ABW", L"ARUBA" },
     { L"AFG", L"AFGHANISTAN" },
     { L"AFT", L"FRENCH SOUTHERN TERRITORIES" },
     { L"AGO", L"ANGOLA" },
     { L"AIA", L"ANGUILLA" },
     { L"ALB", L"ALBANIA" },
     { L"AND", L"ANDORRA" },
     { L"ANT", L"NETHERLANDS ANTILLES" },
     { L"ARE", L"UNITED ARAB EMIRATES" },
     { L"ARG", L"ARGENTINA" },
     { L"ARM", L"ARMENIA" },
     { L"ASM", L"AMERICAN SAMOA" },
     { L"ATA", L"ANTARCTICA" },
     { L"ATG", L"ANTIGUA AND BARBUDA" },
     { L"AUS", L"AUSTRALIA" },
     { L"AUT", L"AUSTRIA" },
     { L"AZE", L"AZERBAIJAN" },
     { L"BDI", L"BURUNDI" },
     { L"BEL", L"BELGIUM" },
     { L"BEN", L"BENIN" },
     { L"BFA", L"BURKINA FASO" },
     { L"BGD", L"BANGLADESH" },
     { L"BGR", L"BULGARIA" },
     { L"BHR", L"BAHRAIN" },
     { L"BHS", L"BAHAMAS" },
     { L"BIH", L"BOSNIA AND HERZEGOVINA" },
     { L"BLR", L"BELARUS" },
     { L"BLZ", L"BELIZE" },
     { L"BMU", L"BERMUDA" },
     { L"BOL", L"BOLIVIA" },
     { L"BRA", L"BRAZIL" },
     { L"BRB", L"BARBADOS" },
     { L"BRN", L"BRUNEI DARUSSALAM" },
     { L"BTN", L"BHUTAN" },
     { L"BVT", L"BOUVET ISLAND" },
     { L"BWA", L"BOTSWANA" },
     { L"CAF", L"CENTRAL AFRICAN REPUBLIC" },
     { L"CAN", L"CANADA" },
     { L"CCK", L"COCOS( KEELING ) ISLANDS" },
     { L"CHE", L"SWITZERLAND" },
     { L"CHL", L"CHILE" },
     { L"CHN", L"CHINA" },
     { L"CIV", L"COTE D'VOIRE" },
     { L"CMR", L"CAMEROON" },
     { L"COD", L"CONGO, THE DEMOCRATIC REPUBLIC OF THE" },
     { L"COG", L"CONGO" },
     { L"COK", L"COOK ISLAND" },
     { L"COL", L"COLOMBIA" },
     { L"COM", L"COMOROS" },
     { L"CPV", L"CAPE VERDE" },
     { L"CRI", L"COSTA RICA" },
     { L"CUB", L"CUBA" },
     { L"CXR", L"CHRISTMAS ISLAND" },
     { L"CYM", L"CAYMAN ISLANDS" },
     { L"CYP", L"CYPRUS" },
     { L"CZE", L"CZECH REPUBLIC" },
     { L"DEU", L"GERMANY" },
     { L"DJI", L"DJIBOUTI" },
     { L"DMA", L"DOMINICA" },
     { L"DNK", L"DENMARK" },
     { L"DOM", L"DOMINICAN REPUBLIC" },
     { L"DZA", L"ALGERIA" },
     { L"ECU", L"ECUADOR" },
     { L"EGY", L"EGYPT" },
     { L"ERI", L"ERITREA" },
     { L"ESH", L"WESTERN SAHARA" },
     { L"ESP", L"SPAIN" },
     { L"EST", L"ESTONIA" },
     { L"ETH", L"ETHIOPIA" },
     { L"FIN", L"FINLAND" },
     { L"FJI", L"FIJI" },
     { L"FLK", L"FALKLAND ISLANDS( MALVINAS )" },
     { L"FRA", L"FRANCE" },
     { L"FRO", L"FAROE ISLANDS" },
     { L"FSM", L"MICRONESIA, FEDERATED STATES OF" },
     { L"GAB", L"GABON" },
     { L"GBR", L"UNITED KINGDOM" },
     { L"GEO", L"GEORGIA" },
     { L"GHA", L"GHANA" },
     { L"GIB", L"GIBRALTAR" },
     { L"GIN", L"GUINEA" },
     { L"GLP", L"GUADELOUPE" },
     { L"GMB", L"GAMBIA" },
     { L"GNB", L"GUINEA - BISSAU" },
     { L"GNQ", L"EQUATORIAL GUINEA" },
     { L"GRC", L"GREECE" },
     { L"GRD", L"GRENADA" },
     { L"GRL", L"GREENLAND" },
     { L"GTM", L"GUATEMALA" },
     { L"GUF", L"FRENCH GUIANA" },
     { L"GUM", L"GUAM" },
     { L"GUY", L"GUYANA" },
     { L"HKG", L"HONG KONG" },
     { L"HMD", L"HEARD ISLAND AND MCDONALD ISLANDS" },
     { L"HND", L"HONDURAS" },
     { L"HRV", L"CROATIA" },
     { L"HTI", L"HAITI" },
     { L"HUN", L"HUNGARY" },
     { L"IDN", L"INDONESIA" },
     { L"IND", L"INDIA" },
     { L"IOT", L"BRITISH INDIAN OCEAN TERRITORY" },
     { L"IRL", L"IRELAND" },
     { L"IRN", L"IRAN, ISLAMIC REPUBLIC OF" },
     { L"IRQ", L"IRAQ" },
     { L"ISL", L"ICELAND" },
     { L"ISR", L"ISRAEL" },
     { L"ITA", L"ITALY" },
     { L"JAM", L"JAMAICA" },
     { L"JOR", L"JORDAN" },
     { L"JPN", L"JAPAN" },
     { L"KAZ", L"KAZAKSTAN" },
     { L"KEN", L"KENYA" },
     { L"KGZ", L"KYRGYZSTAN" },
     { L"KHM", L"CAMBODIA" },
     { L"KIR", L"KIRIBATI" },
     { L"KNA", L"SAINT KITTS AND NEVIS" },
     { L"KOR", L"KOREA, REPUBLIC OF" },
     { L"KWT", L"KUWAIT" },
     { L"LAO", L"LAO PEOPLE'S DEMOCRATIC REPUBLIC" },
     { L"LBN", L"LEBANNON" },
     { L"LBR", L"LIBERIA" },
     { L"LBY", L"LIBYAN ARAB JAMAHIRIYA" },
     { L"LCA", L"SAINT LUCIA" },
     { L"LIE", L"LIECHTENSTEIN" },
     { L"LKA", L"SRI LANKA" },
     { L"LSO", L"LESOTHO" },
     { L"LTU", L"LITHUANIA" },
     { L"LUX", L"LUXEMBOURG" },
     { L"LVA", L"LATIVA" },
     { L"MAC", L"MACAU" },
     { L"MAR", L"MOROCCO" },
     { L"MCO", L"MONACO" },
     { L"MDA", L"MOLDOVA, REPUBLIC OF" },
     { L"MDG", L"MADAGASCAR" },
     { L"MDV", L"MALDIVES" },
     { L"MEX", L"MEXICO" },
     { L"MHL", L"MARSHALL ISLANDS" },
     { L"MKD", L"MACEDONIA, THE FORMER YUGOSLAV REPUBLIC OF" },
     { L"MLI", L"MALI" },
     { L"MLT", L"MALTA" },
     { L"MMR", L"MYANMAR" },
     { L"MNG", L"MONGOLIA" },
     { L"MNP", L"NORTHERN MARIANA ISLANDS" },
     { L"MOZ", L"MOZAMBIQUE" },
     { L"MRT", L"MAURITANIA" },
     { L"MSR", L"MONTSERRAT" },
     { L"MTQ", L"MARTINIQUE" },
     { L"MUS", L"MAURITUS" },
     { L"MWI", L"MALAWI" },
     { L"MYS", L"MALAYSIA" },
     { L"MYT", L"MAYOTTE" },
     { L"NAM", L"NAMIBIA" },
     { L"NCL", L"NEW CALEDONIA" },
     { L"NER", L"NIGER" },
     { L"NFK", L"NORFOLK ISLAND" },
     { L"NGA", L"NIGERIA" },
     { L"NIC", L"NICARAGUA" },
     { L"NIU", L"NIUE" },
     { L"NLD", L"NETHERLANDS" },
     { L"NOR", L"NORWAY" },
     { L"NPL", L"NEPAL" },
     { L"NRU", L"NAURU" },
     { L"NZL", L"NEW ZEALAND" },
     { L"OMN", L"OMAN" },
     { L"PAK", L"PAKISTAN" },
     { L"PAN", L"PANAMA" },
     { L"PCN", L"PITCAIRN" },
     { L"PER", L"PERU" },
     { L"PHL", L"PHILIPPINES" },
     { L"PLW", L"PALAU" },
     { L"PNG", L"PAPUA NEW GUINEA" },
     { L"POL", L"POLAND" },
     { L"PRI", L"PUERTO RICO" },
     { L"PRK", L"KOREA, DEMOCRATIC PEOPLE'S REPUBLIC OF" },
     { L"PRT", L"PORTUGAL" },
     { L"PRY", L"PARAGUAY" },
     { L"PYF", L"FRENCH POLYNESIA" },
     { L"QAT", L"QATAR" },
     { L"REU", L"REUNION" },
     { L"ROM", L"ROMANIA" },
     { L"RUS", L"RUSSIAN FEDERATION" },
     { L"RWA", L"RWANDA" },
     { L"SAU", L"SAUDI ARABIA" },
     { L"SDN", L"SUDAN" },
     { L"SEN", L"SENEGAL" },
     { L"SGP", L"SINGAPORE" },
     { L"SGS", L"SOUTH GEORGIA AND THE SOUTH SANDWICH ISLANDS" },
     { L"SHN", L"SAINT HELENA" },
     { L"SJM", L"SVALBARD AND JAN MAYEN" },
     { L"SLB", L"SOLOMON ISLANDS" },
     { L"SLE", L"SIERRA LEONE" },
     { L"SLV", L"EL SALVADOR" },
     { L"SMR", L"SAN MARINO" },
     { L"SOM", L"SOMALIA" },
     { L"SPM", L"SAINT PIERRE AND MIQUELON" },
     { L"STP", L"SAO TOME AND PRINCIPE" },
     { L"SUR", L"SURINAME" },
     { L"SVK", L"SLOVAKIA" },
     { L"SVN", L"SLOVENIA" },
     { L"SWE", L"SWEDEN" },
     { L"SWZ", L"SWAZILAND" },
     { L"SYC", L"SEYCHELLES" },
     { L"SYR", L"SYRIAN ARAB REPUBLIC" },
     { L"TCA", L"TURKS AND CAICOS ISLANDS" },
     { L"TCD", L"CHAD" },
     { L"TGO", L"TOGO" },
     { L"THA", L"THAILAND" },
     { L"TJK", L"TAJIKISTAN" },
     { L"TKL", L"TOKELAU" },
     { L"TKM", L"TURKMENISTAN" },
     { L"TMP", L"EAST TIMOR" },
     { L"TON", L"TONGA" },
     { L"TTO", L"TRINIDAD AND TOBAGO" },
     { L"TUN", L"TUNISIA" },
     { L"TUR", L"TURKEY" },
     { L"TUV", L"TUVALU" },
     { L"TWN", L"TAIWAN, PROVINCE OF CHINA" },
     { L"TZA", L"TANZANIA, UNITED REPUBLIC OF" },
     { L"UGA", L"UGANDA" },
     { L"UKR", L"UKRAINE" },
     { L"UMI", L"UNITED STATES MINOR OUTLYING ISLANDS" },
     { L"URY", L"URUGUAY" },
     { L"USA", L"UNITED STATES" },
     { L"UZB", L"UZBEKISTAN" },
     { L"VAT", L"HOLY SEE( VATICAN CITY STATE )" },
     { L"VCT", L"SAINT VINCENT AND THE GRENADINES" },
     { L"VEN", L"VENEZUELA" },
     { L"VGB", L"VIRGIN ISLANDS, BRITISH" },
     { L"VIR", L"VIRGIN ISLANDS, U.S." },
     { L"VNM", L"VIET NAM" },
     { L"VUT", L"VANUATU" },
     { L"WLF", L"WALLIS AND FUTUNA" },
     { L"WSM", L"SAMOA" },
     { L"YEM", L"YEMEN" },
     { L"YUG", L"YUGOSLAVIA" },
     { L"ZAF", L"SOUTH AFRICA" },
     { L"ZMB", L"ZAMBIA" },
     { L"ZWE", L"ZIMBABWE" },
     { L"", L"Unknown" },
     { L"", L"" },
};

CHelper::CHelper()
{
     show_missed = "";
}


CHelper::~CHelper()
{
}

wstring CHelper::constructName( HL7_24::XPN* pXPN )
{
     std::string param;
     wstring address;
     pXPN->getDegree()->getData( param );
     address += getWString( param ) + L" ";
     pXPN->getPrefix()->getData( param );
     address += getWString( param ) + L" ";
     pXPN->getFamilyName()->getSurname()->getData( param );
     address += getWString( param ) + L" ";
     pXPN->getGivenName()->getData( param );
     address += getWString( param ) + L" ";
     pXPN->getSecondAndFurtherGivenNamesOrInitialsThereof()->getData( param );
     address += getWString( param ) + L" ";
     pXPN->getSuffix()->getData( param );
     address += getWString( param );
     return address;
}

wstring CHelper::constructAddress( HL7_24::XAD* pXAD )
{
     std::string param;
     wstring address;
     pXAD->getZipOrPostalCode()->getData( param );
     address += getWString( param ) + L" ";
     if ( pXAD->isXAD_6() )
     {
          pXAD->getCountry()->getData( param );
          Tables<KNOWN_COUNTRY_TYPE::KNOWN_COUNTRY_TYPE> countryType( (wchar_t*)getWString( param ).c_str( ), CountryTypeTbl );
          if ( !countryType.isUnknown() )
               address += wstring( countryType.getDesc() ) + L", ";
          else
          {
               pXAD->getCountry()->getData( param );
               address += getWString( param ) + L", ";
          }
     }
     pXAD->getStateOrProvince()->getData( param );
     address += getWString( param ) + L", ";
     pXAD->getCity()->getData( param );
     address += getWString( param ) + L", ";
     pXAD->getOtherDesignation()->getData( param );
     address += getWString( param ) + L", ";
     pXAD->getStreetAddress()->getStreetOrMailingAddress()->getData( param );
     address += getWString( param ) + L", ";
     pXAD->getStreetAddress()->getStreetName()->getData( param );
     address += getWString( param ) + L" ";
     pXAD->getStreetAddress()->getDwellingNumber()->getData( param );
     address += getWString( param ) + L", ";
     return address;
}

wstring CHelper::constructName( HL7_24::XCN* pXCN )
{
     std::string param;
     wstring address;
     pXCN->getIDNumber()->getData( param );
     address += L"ID: " + getWString( param ) + L", ";
     pXCN->getDegree()->getData( param );
     address += getWString( param ) + L" ";
     pXCN->getPrefix()->getData( param );
     address += getWString( param ) + L" ";
     pXCN->getFamilyName()->getSurname()->getData( param );
     address += getWString( param ) + L" ";
     pXCN->getGivenName()->getData( param );
     address += getWString( param ) + L" ";
     pXCN->getSecondAndFurtherGivenNamesOrInitialsThereof()->getData( param );
     address += getWString( param ) + L" ";
     pXCN->getSuffix()->getData( param );
     address += getWString( param );
     return address;
}

HL7_24::XPN* CHelper::getAsXPN( HL7_24::XCN* pXCN )
{
     HL7_24::XPN* pXPN = new HL7_24::XPN();
     if ( !pXPN )
          return pXPN;
     std::stringstream data;
     *pXPN->getFamilyName() = *pXCN->getFamilyName();
     *pXPN->getGivenName() = *pXCN->getGivenName();
     *pXPN->getSecondAndFurtherGivenNamesOrInitialsThereof() = *pXCN->getSecondAndFurtherGivenNamesOrInitialsThereof();
     *pXPN->getSuffix() = *pXCN->getSuffix();
     *pXPN->getPrefix() = *pXCN->getPrefix();
     *pXPN->getDegree() = *pXCN->getDegree();
     //pXCN->getFamilyName()->encode( data );
     //pXPN->getFamilyName()->initFromPipe( data.str() );
     //pXPN->getGivenName()->setData( pXCN->getGivenName()->getData() );
     //pXPN->getSecondAndFurtherGivenNamesOrInitialsThereof()->setData( pXCN->getSecondAndFurtherGivenNamesOrInitialsThereof()->getData() );
     //pXPN->getSuffix()->setData( pXCN->getSuffix()->getData() );
     //pXPN->getPrefix()->setData( pXCN->getPrefix()->getData() );
     //pXPN->getDegree()->setData( pXCN->getDegree()->getData() );
     return pXPN;
}

wstring CHelper::constructDateTime( HL7_24::TS* pTS )
{
     int year;
     int month;
     int day;
     int hour;
     int minute;
     int second;
     int fractionOfSec;
     int offset;
     wchar_t wdata[ 7 ];
     std::wstring buffer = L"";
     //std::string data = "";
     std::string precision = "";
     std::string param;

     if ( !pTS )
          return buffer;
     if ( pTS->isTS_2() )
          pTS->getDegreeOfPrecision()->getData( precision );
     pTS->getTimeOfAnEvent()->getData( param );
     if ( parseTS( param, year, month, day, hour, minute, second, fractionOfSec, offset ) )
     {
          wdata[ 0 ] = 0;
          if ( day != EMPTY_DAY )
               wsprintf( wdata, L"%.2d", day );
          buffer += wdata + std::wstring( L"/" );
          wdata[ 0 ] = 0;
          if ( month != EMPTY_MONTH )
               wsprintf( wdata, L"%.2d", month );
          buffer += wdata + std::wstring( L"/" );
          wdata[ 0 ] = 0;
          wsprintf( wdata, L"%.4d", year );
          buffer += wdata;
          if ( hour != EMPTY_HOUR )
          {
               wdata[ 0 ] = 0;
               wsprintf( wdata, L"%.2d", month );
               buffer += std::wstring( L" " ) + wdata + std::wstring( L":" );
               wdata[ 0 ] = 0;
               if ( minute != EMPTY_MINUT )
                    wsprintf( wdata, L"%.2d", minute );
               buffer += wdata + std::wstring( L":" );
               wdata[ 0 ] = 0;
               if ( second != EMPTY_SECONDS )
                    wsprintf( wdata, L"%.2d", second );
               buffer += wdata;
          }
          if ( fractionOfSec != EMPTY_FRACTION_OF_SECONDS )
          {
               wdata[ 0 ] = 0;
               wsprintf( wdata, L"%.4d", fractionOfSec );
               buffer += std::wstring( L"." ) + wdata;
          }
          if ( offset != EMPTY_OFFSET )
          {
               memset( wdata, 0, 50 );
               wsprintf( wdata, L" %c%.2d:%.2d", ( offset > 0 ) ? '+' : '-', abs( offset ) / 60, abs( offset ) % 60 );
               buffer += wdata;
          }
     }
     switch ( precision[0] )
     {
     case 'y':
     case 'Y':
          buffer += L" Year precision";
          break;
     case 'l':
     case 'L':
          buffer += L" Month precision";
          break;
     case 'd':
     case 'D':
          buffer += L" Day precision";
          break;
     case 'h':
     case 'H':
          buffer += L" Hour precision";
          break;
     case 'm':
     case 'M':
          buffer += L" Minute precision";
          break;
     case 's':
     case 'S':
          buffer += L" Second precision";
          break;
     }
     return buffer;
}

wstring CHelper::constructDateTime( HL7_24::DT* pTS )
{
     wchar_t wdata[ 15 ];
     std::wstring buffer = L"";
     std::string data;
     if ( !pTS )
          return buffer;
     memset( wdata, 0, 15 * sizeof( wchar_t ) );
     int year;
     int month;
     int day;
     pTS->getData( data );
     if ( -1 != parseDT( data, year, month, day ) )
     {
          wsprintf( wdata, L"%.2d/%.2d/%.4d", day, month, year );
          buffer = wdata;
     }
     return buffer;
}
