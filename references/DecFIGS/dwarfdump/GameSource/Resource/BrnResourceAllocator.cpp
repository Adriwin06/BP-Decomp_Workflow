// ps3mem.h:5
namespace BrnResource {
	// BrnResourceAllocator.cpp:655
	// Declaration
	extern void PrintConsoleMemory(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResourceAllocator.cpp:660
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:694
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:695
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:696
		using namespace CgsDev::Message;

	}

	// BrnResourceAllocator.cpp:711
	extern uint32_t GetAvailableMemory();

	// BrnResourceAllocator.cpp:632
	extern void ClearResource(Resource &, const ResourceDescriptor &);

}

// BrnResourceAllocator.cpp:257
void BrnResource::Allocators::GetMemoryStats(HeapMalloc::GeneralAllocator *  lpGeneralAllocator, uint32_t *  lpuOutUsed, uint32_t *  lpuOutFree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:259
		BrnResource::Allocators::GenAllocUsage lUsage;

	}
}

// BrnResourceAllocator.cpp:278
void BrnResource::Allocators::GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *  pBlockInfo, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:280
		BrnResource::Allocators::GenAllocUsage * lpUsage;

	}
}

// BrnResourceAllocator.cpp:227
void BrnResource::Allocators::GetMemoryStats(rw::core::GeneralResourceAllocator *  lpGeneralAllocator, const Entry::ResourceDescriptor &  lUsed, const Entry::ResourceDescriptor &  lFree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:229
		uint32_t luUsed;

		// BrnResourceAllocator.cpp:229
		uint32_t luFree;

	}
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
}

// BrnResourceAllocator.cpp:304
void BrnResource::Allocators::ConstructGlobalSystemMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:306
		ResourceDescriptor lResourceDescriptor;

		// BrnResourceAllocator.cpp:307
		Resource lMemResource;

		// BrnResourceAllocator.cpp:308
		ResourceDescriptor lSystemAllocatorDescriptor;

		// BrnResourceAllocator.cpp:335
		uint32_t luRequiredMainMem;

		// BrnResourceAllocator.cpp:336
		uint32_t luRequiredGrSysMem;

		// BrnResourceAllocator.cpp:337
		uint32_t luRequiredGrLocMem;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:375
void BrnResource::Allocators::ConstructGlobalDebugMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:377
		ResourceDescriptor lResourceDescriptor;

		// BrnResourceAllocator.cpp:378
		Resource lMemResource;

		// BrnResourceAllocator.cpp:379
		ResourceDescriptor lExtendedDescriptor;

		// BrnResourceAllocator.cpp:403
		uint32_t luRequiredMainMem;

		// BrnResourceAllocator.cpp:404
		uint32_t luRequiredGrLocMem;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:439
void BrnResource::Allocators::ConstructGlobalGraphicsMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:441
		ResourceDescriptor lResourceDescriptor;

		// BrnResourceAllocator.cpp:442
		Resource lMemResource;

		// BrnResourceAllocator.cpp:443
		ResourceDescriptor lExtendedDescriptor;

		// BrnResourceAllocator.cpp:464
		uint32_t luRequiredMainMem;

		// BrnResourceAllocator.cpp:465
		uint32_t luRequiredGrSysMem;

		// BrnResourceAllocator.cpp:466
		uint32_t luRequiredGrLocMem;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:502
void BrnResource::Allocators::ConstructGlobalResourceMemory(const CgsMemory::MemoryBank::Params *  mpRootBankParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:504
		ResourceDescriptor lResourceDescriptor;

		// BrnResourceAllocator.cpp:505
		Resource lMemResource;

		// BrnResourceAllocator.cpp:506
		ResourceDescriptor lExtendedDescriptor;

		// BrnResourceAllocator.cpp:527
		uint32_t luRequiredMainMem;

		// BrnResourceAllocator.cpp:528
		uint32_t luRequiredGrSysMem;

		// BrnResourceAllocator.cpp:529
		uint32_t luRequiredGrLocMem;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:564
void BrnResource::Allocators::ConstructChildAllocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:567
		ResourceDescriptor lRunTimeDescriptor;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		GetSystemAllocator(/* parameters */);
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		{
			// BrnResourceAllocator.cpp:574
			ResourceDescriptor lEmbeddedTextureDescriptor;

			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
			rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		~ResourceDescriptor(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:140
void BrnResource::Allocators::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:148
		MemoryMap * lpMap;

		// BrnResourceAllocator.cpp:151
		const CgsMemory::MemoryBank::Params * lpParams;

	}
	CgsMemory::MemoryMapBank::GetParams(/* parameters */);
}

// BrnResourceAllocator.cpp:207
void BrnResource::Allocators::GetMemoryStats(rw::LinearResourceAllocator *  lpLinearAllocator, const Entry::ResourceDescriptor &  lUsed, const Entry::ResourceDescriptor &  lFree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:209
		ResourceDescriptor lRWUsed;

		// BrnResourceAllocator.cpp:210
		ResourceDescriptor lRWFree;

	}
	CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
	CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::ResourceDescriptor::GetDisposableResourceDescriptor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

// BrnResourceAllocator.cpp:81
void BrnResource::Allocators::InitMemoryMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:86
		MemoryMap * lpMap;

		// BrnResourceAllocator.cpp:87
		Resource lResource;

		// BrnResourceAllocator.cpp:91
		const CgsMemory::MemoryBank::Params * lpParams;

		// BrnResourceAllocator.cpp:104
		sys_addr_t lAddr;

		// BrnResourceAllocator.cpp:112
		int32_t liMemoryContainerCreate;

	}
	rw::Resource::Resource(/* parameters */);
	sys_memory_allocate(/* parameters */);
	sys_memory_container_create(/* parameters */);
	sys_memory_container_create(/* parameters */);
	{
		// BrnResourceAllocator.cpp:116
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:99
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResourceAllocator.cpp:185
void BrnResource::Allocators::DebugWriteXMLStatus(const CgsDev::StrStreamBase &  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.cpp:66
// BrnResourceAllocator.cpp:32
// BrnResourceAllocator.cpp:34
// BrnResourceAllocator.cpp:35
// BrnResourceAllocator.cpp:36
// BrnResourceAllocator.cpp:37
// BrnResourceAllocator.cpp:39
// BrnResourceAllocator.cpp:40
// BrnResourceAllocator.cpp:41
// BrnResourceAllocator.cpp:42
// BrnResourceAllocator.cpp:44
// BrnResourceAllocator.cpp:45
// BrnResourceAllocator.cpp:46
// BrnResourceAllocator.cpp:47
// BrnResourceAllocator.cpp:49
// BrnResourceAllocator.cpp:50
// BrnResourceAllocator.cpp:51
// BrnResourceAllocator.cpp:52
// BrnResourceAllocator.cpp:54
// BrnResourceAllocator.cpp:55
// BrnResourceAllocator.cpp:57
// BrnResourceAllocator.cpp:62
// BrnResourceAllocator.cpp:63
// BrnResourceAllocator.cpp:64
// BrnResourceAllocator.cpp:60
// BrnResourceAllocator.cpp:61
