//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "SecretLabs_NETMF_Diagnostics.h"
#include "SecretLabs_NETMF_Diagnostics_SecretLabs_NETMF_Diagnostics_Transport.h"

using namespace SecretLabs::NETMF::Diagnostics;


HRESULT Library_SecretLabs_NETMF_Diagnostics_SecretLabs_NETMF_Diagnostics_Transport::TransportInterface_Set___STATIC__VOID__U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 0, param0 ) );

        Transport::TransportInterface_Set( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_SecretLabs_NETMF_Diagnostics_SecretLabs_NETMF_Diagnostics_Transport::TransportInterface_Get___STATIC__U1( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT8 retVal = Transport::TransportInterface_Get( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_UINT8( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}
