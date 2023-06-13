#include "pch.h"

#include <ByteAddressBuffer.h>
#include <Device.h>

using namespace dx12lib;

ByteAddressBuffer::ByteAddressBuffer( Device& device, const D3D12_RESOURCE_DESC& resDesc )
: Buffer( device, resDesc )
{}

ByteAddressBuffer::ByteAddressBuffer( Device& device, COMPTR<ID3D12Resource> resource )
: Buffer( device, resource )
{}

