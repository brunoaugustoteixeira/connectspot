

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Thu Feb 05 03:03:53 2009
 */
/* Compiler settings for .\OpcCmd.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_CATID_OPCCMDServer10,0x2D869D5C,0x3B05,0x41fb,0x85,0x1A,0x64,0x2F,0xB2,0xB8,0x01,0xA0);


MIDL_DEFINE_GUID(IID, IID_IOPCComandCallback,0x3104B527,0x2016,0x442d,0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78);


MIDL_DEFINE_GUID(IID, IID_IOPCCommandInformation,0x3104B525,0x2016,0x442d,0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78);


MIDL_DEFINE_GUID(IID, IID_IOPCCommandExecution,0x3104B526,0x2016,0x442d,0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78);


MIDL_DEFINE_GUID(IID, LIBID_OpcCmdLib,0x3104B520,0x2016,0x442d,0x96,0x96,0x12,0x75,0xDE,0x97,0x87,0x78);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



