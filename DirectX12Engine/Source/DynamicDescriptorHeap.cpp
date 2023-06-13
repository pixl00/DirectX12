#include "pch.h"
#include "DynamicDescriptorHeap.h"

#include <Application.h>
#include <CommandList.h>
#include <RootSignature.h>

DynamicDescriptorHeap::DynamicDescriptorHeap( D3D12_DESCRIPTOR_HEAP_TYPE heapType, uint32_t numDescriptorsPerHeap )
    : m_DescriptorHeapType( heapType )
    , m_NumDescriptorsPerHeap( numDescriptorsPerHeap )
    , m_DescriptorTableBitMask( 0 )
    , m_StaleDescriptorTableBitMask( 0 )
    , m_CurrentCPUDescriptorHandle( D3D12_DEFAULT )
    , m_CurrentGPUDescriptorHandle( D3D12_DEFAULT )
    , m_NumFreeHandles( 0 )
{
    m_DescriptorHandleIncrementSize = Application::Get().GetDescriptorHandleIncrementSize( heapType );

    // Allocate space for staging CPU visible descriptors.
    m_DescriptorHandleCache = std::make_unique<D3D12_CPU_DESCRIPTOR_HANDLE[]>( m_NumDescriptorsPerHeap );
}

DynamicDescriptorHeap::~DynamicDescriptorHeap()
{}

void DynamicDescriptorHeap::StageDescriptors( uint32_t rootParameterIndex, uint32_t offset, uint32_t numDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE srcDescriptors )
{}

void DynamicDescriptorHeap::CommitStagedDescriptors( CommandList& commandList,
	std::function<void(ID3D12GraphicsCommandList*, UINT, D3D12_GPU_DESCRIPTOR_HANDLE)> setFunc )
{
}

void DynamicDescriptorHeap::CommitStagedDescriptorsForDraw( CommandList& commandList )
{}

void DynamicDescriptorHeap::CommitStagedDescriptorsForDispatch( CommandList & commandList )
{}

D3D12_GPU_DESCRIPTOR_HANDLE DynamicDescriptorHeap::CopyDescriptor( CommandList& commandList, D3D12_CPU_DESCRIPTOR_HANDLE cpuDescriptor )
{
    return D3D12_GPU_DESCRIPTOR_HANDLE();
}

void DynamicDescriptorHeap::ParseRootSignature( const RootSignature& rootSignature )
{
    // If the root signature changes, all descriptors must be (re)bound to the
    // command list.
    m_StaleDescriptorTableBitMask = 0;

    const auto& rootSignatureDesc = rootSignature.GetRootSignatureDesc();

    // Get a bit mask that represents the root parameter indices that match the 
   // descriptor heap type for this dynamic descriptor heap.
    m_DescriptorTableBitMask = rootSignature.GetDescriptorTableBitMask( m_DescriptorHeapType );
    uint32_t descriptorTableBitMask = m_DescriptorTableBitMask;

    uint32_t currentOffset = 0;
    DWORD rootIndex;
    while( _BitScanForward( &rootIndex, descriptorTableBitMask ) && rootIndex < rootSignatureDesc.NumParameters )
    {
        uint32_t numDescriptors = rootSignature.GetNumDescriptors( rootIndex );

        DescriptorTableCache& descriptorTableCache = m_DescriptorTableCache[rootIndex];
        descriptorTableCache.NumDescriptors = numDescriptors;
        descriptorTableCache.BaseDescriptor = m_DescriptorHandleCache.get() + currentOffset;

        currentOffset += numDescriptors;

        // Flip the descriptor table bit so it's not scanned again for the current index.
        descriptorTableBitMask ^= (1 << rootIndex);
    }

    // Make sure the maximum number of descriptors per descriptor heap has not been exceeded.
    assert( currentOffset <= m_NumDescriptorsPerHeap && "The root signature requires more than the maximum number of descriptors per descriptor heap. Consider increasing the maximum number of descriptors per descriptor heap." );
}

void DynamicDescriptorHeap::Reset()
{}

Microsoft::WRL::ComPtr<ID3D12DescriptorHeap> DynamicDescriptorHeap::RequestDescriptorHeap()
{
    return Microsoft::WRL::ComPtr<ID3D12DescriptorHeap>();
}

Microsoft::WRL::ComPtr<ID3D12DescriptorHeap> DynamicDescriptorHeap::CreateDescriptorHeap()
{
    return Microsoft::WRL::ComPtr<ID3D12DescriptorHeap>();
}

uint32_t DynamicDescriptorHeap::ComputeStaleDescriptorCount() const
{
    return 0;
}
