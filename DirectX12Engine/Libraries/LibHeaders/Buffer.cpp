#include "pch.h"

#include <Buffer.h>

using namespace dx12lib;

Buffer::Buffer( Device& device, const D3D12_RESOURCE_DESC& resDesc )
: Resource( device, resDesc )
{}

Buffer::Buffer( Device& device, COMPTR<ID3D12Resource> resource )
: Resource( device, resource )
{}
