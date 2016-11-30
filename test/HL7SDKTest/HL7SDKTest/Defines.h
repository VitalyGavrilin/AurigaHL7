#ifndef _DEFINES_GUARD
#define _DEFINES_GUARD

#define TABLE_LOAD( table_type, table, table_init, combo, combo_id ) \
     Tables<table_type::table_type> table( NULL, table_init ); \
     { \
          combo = (CComboBox*)GetDlgItem( combo_id ); \
          const DATA_TYPE* nextItem = table.startEnum(); \
          while ( nextItem ) \
          { \
               combo->AddString( nextItem->desc ); \
               nextItem = table.nextEnum(); \
          } \
     }

#define TABLE_RELOAD( table_type, table, table_init, combo_id ) \
     Tables<table_type::table_type> table( NULL, table_init ); \
     { \
          CComboBox* combo = (CComboBox*)GetDlgItem( combo_id ); \
          combo->ResetContent(); \
          const DATA_TYPE* nextItem = table.startEnum(); \
          while ( nextItem ) \
          { \
               combo->AddString( nextItem->desc ); \
               nextItem = table.nextEnum(); \
          } \
     }

#define TABLE_RELOAD_VAL( table_type, table, table_init, combo_id ) \
     Tables<table_type::table_type> table( NULL, table_init ); \
     { \
          CComboBox* combo = (CComboBox*)GetDlgItem( combo_id ); \
          combo->ResetContent(); \
          const DATA_TYPE* nextItem = table.startEnum(); \
          while ( nextItem ) \
          { \
               combo->AddString( nextItem->value ); \
               nextItem = table.nextEnum(); \
          } \
     }

#define IS_TABLE_VALUE_CORRECT( result, table_type, table_init, value ) \
     { \
          Tables<table_type::table_type> cmp_table( value, table_init ); \
          result = cmp_table.isUnknown(); \
     }

#define  SHOW_EDIT_DATA( edit_id, value )  \
     value->getData( param ); \
     GetDlgItem( edit_id )->SetWindowText( getWString( param ).c_str( ) );
#define  SHOW_EDIT_STRING( edit_id, value )  \
     GetDlgItem( edit_id )->SetWindowText( getWString( value ).c_str( ) );
#define  RESHOW_COMBO_DATA( table, combo_id, value ) \
     table.setName( (wchar_t*)getWString( value ).c_str( ) ); \
     ( (CComboBox*)GetDlgItem( combo_id ) )->SelectString( -1, table.getData( ) );
#define  SHOW_COMBO_DATA( table, combo, value ) \
     value->getData( param );\
     table.setName( (wchar_t*)getWString( param ).c_str( ) ); \
     combo->SelectString( -1, table.getDesc() );
#define  SHOW_EDIT_ADDRESS_DATA( edit_id, value ) GetDlgItem( edit_id )->SetWindowText( constructAddress( value ).c_str( ) );
#define  SHOW_EDIT_NAME_DATA( edit_id, value ) GetDlgItem( edit_id )->SetWindowText( constructName( value ).c_str( ) );
#define  SHOW_EDIT_TIME_DATA( edit_id, value ) GetDlgItem( edit_id )->SetWindowText( constructDateTime( value ).c_str( ) );


#define  GET_TABLE_DATA( item_id, message, table_type, table_init, func ) \
     { \
          GetDlgItem( item_id )->GetWindowTextW( message ); \
          Tables<table_type::table_type> table( (wchar_t*)message.GetString( ), table_init ); \
          if ( !table.isUnknown() ) \
               func->setData( getAString( table.getData() ) ); \
     }
//#define GET_EDIT_DATA( item_id, message, func ) \
//     GetDlgItem( item_id )->GetWindowTextW( message ); \
//     if ( !message.IsEmpty() ) \
//          func->setData( getAString( message.GetString( ) ) );
#define SAVE_DATA( data, func ) \
     if ( !##data##.IsEmpty() ) \
          func->setData( getAString( ##data##.GetString() ) );

#define SHOW_XPN_DLG( value, name, ID ) \
     std::string param;\
     value->getIDNumber()->getData( param );\
     CXPNPerson XPNEdit( getAsXPN( value ), name, getWString( param ).c_str() ); \
     if ( IDOK == XPNEdit.DoModal() ) \
     { \
          value->getIDNumber()->setData( getAString( XPNEdit.getID().GetString() ) ); \
          SHOW_EDIT_NAME_DATA( ID, value ); \
     }

#endif // _DEFINES_GUARD
