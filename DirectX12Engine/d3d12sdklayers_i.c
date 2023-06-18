

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for Libraries\LibHeaders\d3d12sdklayers.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ID3D12Debug,0x344488b7,0x6846,0x474b,0xb9,0x89,0xf0,0x27,0x44,0x82,0x45,0xe0);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug1,0xaffaa4ca,0x63fe,0x4d8e,0xb8,0xad,0x15,0x90,0x00,0xaf,0x43,0x04);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug2,0x93a665c4,0xa3b2,0x4e5d,0xb6,0x92,0xa2,0x6a,0xe1,0x4e,0x33,0x74);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug3,0x5cf4e58f,0xf671,0x4ff1,0xa5,0x42,0x36,0x86,0xe3,0xd1,0x53,0xd1);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug4,0x014b816e,0x9ec5,0x4a2f,0xa8,0x45,0xff,0xbe,0x44,0x1c,0xe1,0x3a);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug5,0x548d6b12,0x09fa,0x40e0,0x90,0x69,0x5d,0xcd,0x58,0x9a,0x52,0xc9);


MIDL_DEFINE_GUID(IID, IID_ID3D12Debug6,0x82a816d6,0x5d01,0x4157,0x97,0xd0,0x49,0x75,0x46,0x3f,0xd1,0xed);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugDevice1,0xa9b71770,0xd099,0x4a65,0xa6,0x98,0x3d,0xee,0x10,0x02,0x0f,0x88);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugDevice,0x3febd6dd,0x4973,0x4787,0x81,0x94,0xe4,0x5f,0x9e,0x28,0x92,0x3e);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugDevice2,0x60eccbc1,0x378d,0x4df1,0x89,0x4c,0xf8,0xac,0x5c,0xe4,0xd7,0xdd);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandQueue,0x09e0bf36,0x54ac,0x484f,0x88,0x47,0x4b,0xae,0xea,0xb6,0x05,0x3a);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandQueue1,0x16be35a2,0xbfd6,0x49f2,0xbc,0xae,0xea,0xae,0x4a,0xff,0x86,0x2d);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandList1,0x102ca951,0x311b,0x4b01,0xb1,0x1f,0xec,0xb8,0x3e,0x06,0x1b,0x37);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandList,0x09e0bf36,0x54ac,0x484f,0x88,0x47,0x4b,0xae,0xea,0xb6,0x05,0x3f);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandList2,0xaeb575cf,0x4e06,0x48be,0xba,0x3b,0xc4,0x50,0xfc,0x96,0x65,0x2e);


MIDL_DEFINE_GUID(IID, IID_ID3D12DebugCommandList3,0x197d5e15,0x4d37,0x4d34,0xaf,0x78,0x72,0x4c,0xd7,0x0f,0xdb,0x1f);


MIDL_DEFINE_GUID(IID, IID_ID3D12SharingContract,0x0adf7d52,0x929c,0x4e61,0xad,0xdb,0xff,0xed,0x30,0xde,0x66,0xef);


MIDL_DEFINE_GUID(IID, IID_ID3D12ManualWriteTrackingResource,0x86ca3b85,0x49ad,0x4b6e,0xae,0xd5,0xed,0xdb,0x18,0x54,0x0f,0x41);


MIDL_DEFINE_GUID(IID, IID_ID3D12InfoQueue,0x0742a90b,0xc387,0x483f,0xb9,0x46,0x30,0xa7,0xe4,0xe6,0x14,0x58);


MIDL_DEFINE_GUID(IID, IID_ID3D12InfoQueue1,0x2852dd88,0xb484,0x4c0c,0xb6,0xb1,0x67,0x16,0x85,0x00,0xe6,0x00);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



