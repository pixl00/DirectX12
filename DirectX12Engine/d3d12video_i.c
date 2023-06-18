

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for Libraries\LibHeaders\d3d12video.idl:
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

MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecoderHeap,0x0946B7C9,0xEBF6,0x4047,0xBB,0x73,0x86,0x83,0xE2,0x7D,0xBB,0x1F);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDevice,0x1F052807,0x0B46,0x4ACC,0x8A,0x89,0x36,0x4F,0x79,0x37,0x18,0xA4);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecoder,0xC59B6BDC,0x7720,0x4074,0xA1,0x36,0x17,0xA1,0x56,0x03,0x74,0x70);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessor,0x304FDB32,0xBEDE,0x410A,0x85,0x45,0x94,0x3A,0xC6,0xA4,0x61,0x38);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecodeCommandList,0x3B60536E,0xAD29,0x4E64,0xA2,0x69,0xF8,0x53,0x83,0x7E,0x5E,0x53);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessCommandList,0xAEB2543A,0x167F,0x4682,0xAC,0xC8,0xD1,0x59,0xED,0x4A,0x62,0x09);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecodeCommandList1,0xD52F011B,0xB56E,0x453C,0xA0,0x5A,0xA7,0xF3,0x11,0xC8,0xF4,0x72);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessCommandList1,0x542C5C4D,0x7596,0x434F,0x8C,0x93,0x4E,0xFA,0x67,0x66,0xF2,0x67);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoMotionEstimator,0x33FDAE0E,0x098B,0x428F,0x87,0xBB,0x34,0xB6,0x95,0xDE,0x08,0xF8);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoMotionVectorHeap,0x5BE17987,0x743A,0x4061,0x83,0x4B,0x23,0xD2,0x2D,0xAE,0xA5,0x05);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDevice1,0x981611AD,0xA144,0x4C83,0x98,0x90,0xF3,0x0E,0x26,0xD6,0x58,0xAB);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncodeCommandList,0x8455293A,0x0CBD,0x4831,0x9B,0x39,0xFB,0xDB,0xAB,0x72,0x47,0x23);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecoder1,0x79A2E5FB,0xCCD2,0x469A,0x9F,0xDE,0x19,0x5D,0x10,0x95,0x1F,0x7E);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecoderHeap1,0xDA1D98C5,0x539F,0x41B2,0xBF,0x6B,0x11,0x98,0xA0,0x3B,0x6D,0x26);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessor1,0xF3CFE615,0x553F,0x425C,0x86,0xD8,0xEE,0x8C,0x1B,0x1F,0xB0,0x1C);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoExtensionCommand,0x554E41E8,0xAE8E,0x4A8C,0xB7,0xD2,0x5B,0x4F,0x27,0x4A,0x30,0xE4);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDevice2,0xF019AC49,0xF838,0x4A95,0x9B,0x17,0x57,0x94,0x37,0xC8,0xF5,0x13);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecodeCommandList2,0x6e120880,0xc114,0x4153,0x80,0x36,0xd2,0x47,0x05,0x1e,0x17,0x29);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDecodeCommandList3,0x2aee8c37,0x9562,0x42da,0x8a,0xbf,0x61,0xef,0xeb,0x2e,0x45,0x13);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessCommandList2,0xdb525ae4,0x6ad6,0x473c,0xba,0xa7,0x59,0xb2,0xe3,0x70,0x82,0xe4);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoProcessCommandList3,0x1a0a4ca4,0x9f08,0x40ce,0x95,0x58,0xb4,0x11,0xfd,0x26,0x66,0xff);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncodeCommandList1,0x94971eca,0x2bdb,0x4769,0x88,0xcf,0x36,0x75,0xea,0x75,0x7e,0xbc);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncoder,0x2E0D212D,0x8DF9,0x44A6,0xA7,0x70,0xBB,0x28,0x9B,0x18,0x27,0x37);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncoderHeap,0x22B35D96,0x876A,0x44C0,0xB2,0x5E,0xFB,0x8C,0x9C,0x7F,0x1C,0x4A);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoDevice3,0x4243ADB4,0x3A32,0x4666,0x97,0x3C,0x0C,0xCC,0x56,0x25,0xDC,0x44);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncodeCommandList2,0x895491e2,0xe701,0x46a9,0x9a,0x1f,0x8d,0x34,0x80,0xed,0x86,0x7a);


MIDL_DEFINE_GUID(IID, IID_ID3D12VideoEncodeCommandList3,0x7f027b22,0x1515,0x4e85,0xaa,0x0d,0x02,0x64,0x86,0x58,0x05,0x76);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



