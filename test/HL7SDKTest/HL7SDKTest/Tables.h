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

#ifndef _TABLES_GUARD
#define _TABLES_GUARD

#define ADDED_NOT_SHOWN_SEGM( message, header, value ) \
     if ( message && message->is##header##_##value( ) ) \
     {\
          if ( result.empty() ) \
               result = (string)message->getName() + ( string )" - "; \
          else \
               result += ", "; \
          result += ( string )#header + ( string )"_" + ( string )#value; \
     }

#define ADDED_NOT_SHOWN_SUB( header, value ) \
     if ( p##header->is##header##_##value() ) \
     {\
          if ( result.empty() ) \
               result = (std::string)#header + (std::string)" - "; \
          else \
               result += ", "; \
          result += (std::string)#header + (std::string)"_" + (std::string)#value; \
     }

#define ADDED_NOT_SHOWN_ITEM_SUB( header, value, func ) \
     if ( p##header->is##header##_##value() && !p##header->get##header##_##value()->get##func()->getData().empty() ) \
     {\
          if ( result.empty() ) \
               result = (string)#header + (string)" - "; \
                    else \
               result += ", "; \
          result += (string)#header + (string)"_" + (string)#value + (string)"/" + (string)#func; \
     }

#define ADDED_NOT_SHOWN_ITEM_SUB_COMP( header, value, func ) \
     if ( p##header->is##header##_##value() && p##header->get##header##_##value()->get##func() ) \
     {\
          if ( result.empty() ) \
               result = (string)#header + (string)" - "; \
          else \
               result += ", "; \
          result += (string)#header + (string)"_" + (string)#value + (string)"/" + (string)#func; \
     }

typedef enum _HL7_VERSION_ENUM
{
     HL7_23_VERSION,
     HL7_24_VERSION,
     HL7_UNSUPPORTED_VERSION,
}HL7_VERSION_ENUM;

typedef struct _DATA_TYPE
{
     wchar_t* value;
     wchar_t* desc;
}DATA_TYPE;

template<typename T>
class Tables
{
public:
     Tables( wchar_t* name, DATA_TYPE* ibase )
     {
          if ( !ibase )
               return;
          base = ibase;
          setName( name );
     }
     const wchar_t* getData(){ return base[ index ].value; }
     const wchar_t* getDesc(){ return base[ index ].desc; }
     void setName( wchar_t* name )
     {
          index = T::UNKNOWN;
          if ( !name )
               return;
          for ( int i = 0; i < (int)T::ENUM_LEN; i++ )
          {
               if ( wcscmp( name, base[ i ].value ) == 0 )
               {
                    index = (T)i;
                    break;
               }
          }
     }
     const DATA_TYPE* startEnum()
     { 
          enum_index = (T)0;
          return &base[ enum_index ];
     }
     const DATA_TYPE* nextEnum()
     {
          int i = (int)enum_index;
          i++;
          enum_index = (T)i;
          if ( enum_index >= T::UNKNOWN )
               return NULL;
          return &base[ enum_index ];
     }
     bool isUnknown()
     {
          if ( index == T::UNKNOWN )
               return true;
          return false;
     }

private:
     DATA_TYPE* base;
     T index;
     T enum_index;
};

#endif // _TABLES_GUARD
