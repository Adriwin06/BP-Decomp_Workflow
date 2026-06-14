struct _CGprogram;

struct _CGparameter;

void EA::Allocator::ICoreAllocator::~ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ICoreAllocator::~ICoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMallocCoreAllocator::Construct(void *  lpBuffer, int32_t  lnBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMallocCoreAllocator::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::LinearMalloc::IsRWAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::DebugComponentMemory::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::InitBanks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:936
		uint32_t luBankIndex;

	}
}

void CgsMemory::MemoryModule::DebugPrintBlockStart(uint32_t  luBlockIndex, uint32_t  luBlockCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::Construct(const CgsMemory::MemoryModule *  lpMemoryModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::IsUseful() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::Construct(const CgsMemory::MemoryModule *  lpMemoryModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapBank>(MemoryMapBank *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapBank>(const MemoryMapBank *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapBank>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapBank>(MemoryMapBank *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMallocCoreAllocator::~HeapMallocCoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~HeapMalloc(/* parameters */);
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsModule::BaseEventReceiverQueue>(const BaseEventReceiverQueue *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:148
		uint32_t i;

	}
}

void rw::BaseResourceDescriptor::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapRWGeneralAllocator>(MemoryMapRWGeneralAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapRWGeneralAllocator>(const MemoryMapRWGeneralAllocator *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapRWGeneralAllocator>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapRWGeneralAllocator>(MemoryMapRWGeneralAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapRWLinearAllocator>(MemoryMapRWLinearAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapRWLinearAllocator>(const MemoryMapRWLinearAllocator *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapRWLinearAllocator>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapRWLinearAllocator>(MemoryMapRWLinearAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapHeapAllocator>(MemoryMapHeapAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapHeapAllocator>(const MemoryMapHeapAllocator *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapHeapAllocator>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapHeapAllocator>(MemoryMapHeapAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapLinearAllocator>(MemoryMapLinearAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapLinearAllocator>(const MemoryMapLinearAllocator *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapLinearAllocator>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapLinearAllocator>(MemoryMapLinearAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapRawResource>(MemoryMapRawResource *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapRawResource>(const MemoryMapRawResource *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapRawResource>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapRawResource>(MemoryMapRawResource *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsMemory::MemoryMapPool>(MemoryMapPool *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsMemory::MemoryMapPool>(const MemoryMapPool *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsMemory::MemoryMapPool>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsMemory::MemoryMapPool>(MemoryMapPool *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetNumBlocks(int32_t  liResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetBlockSize(int32_t  liResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:140
		const MemoryBank * lpRootBank;

	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNext(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNodeInList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNextIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::InitBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:898
		uint32_t luBlockIndex;

		{
			// CgsMemoryModule.cpp:909
			const MemoryBlock & lBlock;

		}
		CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	}
}

void rw::EndianSwap<CgsMemory::HeapMalloc>(const HeapMalloc *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::LinearMalloc>(const LinearMalloc *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::ComputeBankHeight(uint32_t  luBankIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:248
		const const Metrics & lMetrics;

		// CgsDebugComponentMemory.cpp:251
		float32_t lfHeight;

		// CgsDebugComponentMemory.cpp:254
		float32_t lfMaxChildHeight;

		// CgsDebugComponentMemory.cpp:255
		uint32_t luChildBankIndex;

	}
	{
		// CgsDebugComponentMemory.cpp:259
		const MemoryBank * lpChildBank;

	}
	{
		// CgsDebugComponentMemory.cpp:263
		float32_t lfChildHeight;

	}
}

void CgsMemory::MemoryBankMenuItem::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:217
		const const Metrics & lMetrics;

	}
}

void CgsMemory::DataStreamResultPoster::GetReaderEncodedStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:431
		uint64_t nValue;

	}
}

void CgsMemory::DataStreamResultReader::DecodeStatus(const const uint64_t &  luStatus, uint8_t *  lpuNumUsers, uint32_t *  lpuNumResults, uint32_t *  lpuDataBufferUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamResultReader::EncodeStatus(uint8_t  luNumUsers, uint32_t  luNumResults, uint32_t  luDataBufferUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamResultPoster::SetReaderEncodedStatusConditional(uint64_t  luNewValue, uint64_t  luOldValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValueConditional(uint64_t  n, uint64_t  condition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:486
		uint64_t nOriginalValue;

	}
}

void CgsMemory::DataStreamCommandReader::GetPosterEncodedStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.h:135
		uint64_t luResult;

	}
}

void CgsMemory::DataStreamCommandPoster::DecodeStatus(const const uint64_t &  luStatus, uint8_t *  lpuNumUsers, uint32_t *  lpuNextCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamCommandPoster::EncodeStatus(uint8_t  luNumUsers, uint32_t  luNextCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamCommandReader::SetPosterEncodedStatusConditional(uint64_t  luNewValue, uint64_t  luOldValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandReader.h:148
		bool lbResult;

	}
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsMemory::MemoryBankMenuItem::MemoryBankMenuItem(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
}

void CgsResource::Events::PoolEvent::GetPoolId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::EndianSwap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:148
		uint32_t i;

	}
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapRWGeneralAllocator>(MemoryMapRWGeneralAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapRWGeneralAllocator>(MemoryMapRWGeneralAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapHeapAllocator>(MemoryMapHeapAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapHeapAllocator>(MemoryMapHeapAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapRWLinearAllocator>(MemoryMapRWLinearAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapRWLinearAllocator>(MemoryMapRWLinearAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapBank>(MemoryMapBank *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapBank>(MemoryMapBank *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapPool>(MemoryMapPool *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapPool>(MemoryMapPool *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapRawResource>(MemoryMapRawResource *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapRawResource>(MemoryMapRawResource *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsMemory::MemoryMapLinearAllocator>(MemoryMapLinearAllocator *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsMemory::MemoryMapLinearAllocator>(MemoryMapLinearAllocator *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamCommandReader::GetNumCommandsInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamCommandReader::GetCommandSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamResultPoster::GetMaxResultsInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DataStreamResultPoster::GetResultSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapBank>(const MemoryMapBank *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapPool>(const MemoryMapPool *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapRawResource>(const MemoryMapRawResource *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapLinearAllocator>(const MemoryMapLinearAllocator *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapHeapAllocator>(const MemoryMapHeapAllocator *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapRWLinearAllocator>(const MemoryMapRWLinearAllocator *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsMemory::MemoryMapRWGeneralAllocator>(const MemoryMapRWGeneralAllocator *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3AddressToOffset(void *  address) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2268
		uint32_t offset;

		// device.h:2270
		int32_t result;

	}
}

void CgsMemory::MemoryIO::CreateResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::SetBankId(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::SetLinearAllocator(LinearMalloc *  lpLinearAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::SetHeapAllocator(HeapMalloc *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::FindContiguousFreeBlocks(uint32_t  luNumBlocks, uint32_t  luStartIndex, bool  lbAllowFragmentation, uint32_t *  lpOutFirstCount, uint32_t *  lpOutFirstIndex, uint32_t *  lpOutLastCount, uint32_t *  lpOutLastIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1587
		uint32_t luCurrentStartCount;

		// CgsMemoryModule.cpp:1588
		uint32_t luCurrentEndCount;

		// CgsMemoryModule.cpp:1589
		uint32_t luCurrentStartIndex;

		// CgsMemoryModule.cpp:1590
		uint32_t luCurrentEndIndex;

		// CgsMemoryModule.cpp:1598
		uint32_t luFreeCount;

	}
}

void CgsDev::DebugUI::MenuItem::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetFirstBlock(int32_t  liResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBankMenuItem::RenderBank(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, uint32_t  luBankIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:300
		const const Metrics & lMetrics;

		// CgsDebugComponentMemory.cpp:301
		const const Palette & lPalette;

		// CgsDebugComponentMemory.cpp:304
		const MemoryBank * lpBank;

		// CgsDebugComponentMemory.cpp:307
		float32_t lfMaxBankWidth;

		// CgsDebugComponentMemory.cpp:308
		float32_t lfTotalBankWidth;

		// CgsDebugComponentMemory.cpp:311
		const char * lpcBankName;

	}
	{
		// CgsDebugComponentMemory.cpp:323
		float32_t lfBlockDrawWidth;

		// CgsDebugComponentMemory.cpp:326
		uint32_t luCurrentChildBank;

		// CgsDebugComponentMemory.cpp:327
		float32_t lfBoxWidth;

		// CgsDebugComponentMemory.cpp:328
		float32_t lfDrawOffsetX;

		// CgsDebugComponentMemory.cpp:329
		RGBA lColour;

		// CgsDebugComponentMemory.cpp:332
		uint32_t luBlockIndex;

		MemoryBank::GetFirstBlock(/* parameters */);
		{
			// CgsDebugComponentMemory.cpp:336
			MemoryBlock * lpBlock;

		}
	}
}

void CgsMemory::MemoryBankMenuItem::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:182
		const const Metrics & lMetrics;

		// CgsDebugComponentMemory.cpp:183
		const const Palette & lPalette;

		// CgsDebugComponentMemory.cpp:186
		float32_t lfKeyBoxSize;

		// CgsDebugComponentMemory.cpp:187
		float32_t lfKeyBoxPosX;

		// CgsDebugComponentMemory.cpp:188
		float32_t lfKeyBoxPosY;

		// CgsDebugComponentMemory.cpp:198
		float32_t lfSize;

	}
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<5120,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<5120,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13312,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsMemory::TraceFunc(const char *  lpcText, void *  lpContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMallocCoreAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHeapMalloc.cpp:250
		void * lpAllocation;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsHeapMalloc.cpp:251
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::HeapMallocCoreAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags, unsigned int  align, unsigned int  alignOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHeapMalloc.cpp:267
		void * lpAllocation;

	}
	{
		// CgsHeapMalloc.cpp:265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsHeapMalloc.cpp:268
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::HeapMallocCoreAllocator::Free(void *  block, size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsMemory::MemoryModule::GetOverheadRequired(const CgsMemory::MemoryModule::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.h:393
		uint32_t luRequiredSize;

	}
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::Construct(CgsMemory::MemoryModule::InitOptions *  lpInitOptions, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:53
		uint32_t luRequiredSize;

		// CgsMemoryModule.cpp:54
		uint32_t luBankIndex;

		// CgsMemoryModule.cpp:85
		int32_t liResourceType;

	}
	GetOverheadRequired(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	{
		// CgsMemoryModule.cpp:57
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:58
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:206
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<5120,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<5120,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<5120,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<5120,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<5120,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<5120,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[170] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

		GetEventPaddingSize(/* parameters */);
		OutputQueueContents(/* parameters */);
		{
			// CgsVariableEventQueue.h:464
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::GetBankIndexFromId(int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.h:346
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::MemoryBank::GetIsLeaf() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::GetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetLastBlock(int32_t  liResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::DestroyBank(int32_t  liBankId, bool  lbIsLeaf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1182
		int32_t liResourceType;

		// CgsMemoryModule.cpp:1183
		uint32_t luBankIndex;

		// CgsMemoryModule.cpp:1184
		MemoryBank * lpBank;

		// CgsMemoryModule.cpp:1185
		MemoryBank * lpParentBank;

	}
	GetBankIndexFromId(/* parameters */);
	GetBankIndexFromId(/* parameters */);
	{
		// CgsMemoryModule.cpp:1208
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1190
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1197
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1215
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1261
		uint32_t luBlockIndex;

		// CgsMemoryModule.cpp:1262
		uint32_t luLastBlock;

		// CgsMemoryModule.cpp:1263
		bool lbLastBank;

		MemoryBank::GetLastBlock(/* parameters */);
		{
			// CgsMemoryModule.cpp:1282
			MemoryBlock * mpBlock;

		}
		CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
		{
			// CgsMemoryModule.cpp:1314
			uint32_t luFirstChildBlock;

			// CgsMemoryModule.cpp:1315
			uint32_t luLastChildBlock;

			MemoryBank::GetLastBlock(/* parameters */);
			MemoryBank::GetFirstBlock(/* parameters */);
		}
	}
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	{
		// CgsMemoryModule.cpp:1231
		uint32_t luBlockIndex;

		MemoryBank::GetFirstBlock(/* parameters */);
		{
			// CgsMemoryModule.cpp:1244
			MemoryBlock * mpBlock;

		}
		{
			// CgsMemoryModule.cpp:1248
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsMemory::MemoryIO::MemoryEvent::GetUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyAllocatorResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyAllocatorRequest::GetHeapAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyAllocatorRequest::GetLinearAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryResponse::SetResult(CgsMemory::MemoryIO::ResultCodes  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::OutputBuffer::GetMemoryResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModuleIO.h:786
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::MemoryIO::MemoryEvent::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessDestroyAllocatorRequest(const DestroyAllocatorRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:840
		DestroyAllocatorResponse lResponse;

		// CgsMemoryModule.cpp:841
		CgsMemory::MemoryIO::ResultCodes lResult;

		MemoryIO::DestroyAllocatorResponse::Construct(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
	MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
	MemoryIO::DestroyAllocatorRequest::GetHeapAllocator(/* parameters */);
	{
		// CgsMemoryModule.cpp:856
		HeapMalloc * lpHeapAllocator;

	}
	{
		// CgsMemoryModule.cpp:876
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
	MemoryIO::DestroyAllocatorRequest::GetLinearAllocator(/* parameters */);
	{
		// CgsMemoryModule.cpp:862
		LinearMalloc * lpLinearAllocator;

	}
}

void CgsMemory::MemoryIO::DestroyBankResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyBankRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessDestroyBankRequest(const DestroyBankRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:729
		DestroyBankResponse lResponse;

		MemoryIO::DestroyBankResponse::Construct(/* parameters */);
	}
	MemoryIO::MemoryEvent::GetEventId(/* parameters */);
	MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::AllocateBlocks(uint16_t  lu16NumBlocks, uint16_t  lu16BankIndex, uint16_t  lu16ResourceType, bool  lbIsLeafBank, uint32_t *  lpOutFirstBlock, uint32_t *  lpOutLastBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1367
		uint16_t lu16Count;

		// CgsMemoryModule.cpp:1368
		uint32_t luBlockIndex;

		// CgsMemoryModule.cpp:1369
		uint32_t luFirstBlockIndex;

		// CgsMemoryModule.cpp:1370
		uint32_t luLastBlockIndex;

		{
			// CgsMemoryModule.cpp:1386
			const MemoryBlock & lBlock;

		}
		CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
		{
			// CgsMemoryModule.cpp:1383
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsMemoryModule.cpp:1356
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1355
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryBank::SetID(int16_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetParent(uint8_t  lu8Parent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetAllowFragmentation(bool  lbAllowFragmentation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetIsLeaf(bool  lbIsLeaf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetNumBlocks(int32_t  liResourceType, uint16_t  lu16NumBlocks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetBlockSize(int32_t  liResourceType, uint16_t  lu16BlockSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetFirstBlock(int32_t  liResourceType, uint32_t  luFirstBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetLastBlock(int32_t  liResourceType, uint32_t  luLastBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::SetData(int32_t  liResourceType, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::CreateRootBank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:958
		int32_t liResourceType;

		// CgsMemoryModule.cpp:959
		uint32_t luBlockSize;

		// CgsMemoryModule.cpp:961
		const MemoryBank & lRoot;

		MemoryBank::SetID(/* parameters */);
	}
	MemoryBank::SetParent(/* parameters */);
	MemoryBank::SetIsLeaf(/* parameters */);
	MemoryBank::SetNumBlocks(/* parameters */);
	MemoryBank::SetBlockSize(/* parameters */);
	MemoryBank::SetFirstBlock(/* parameters */);
	MemoryBank::SetData(/* parameters */);
	MemoryBank::SetLastBlock(/* parameters */);
	{
		// CgsMemoryModule.cpp:990
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1002
		uint32_t luFirstBlock;

		// CgsMemoryModule.cpp:1002
		uint32_t luLastBlock;

		{
			// CgsMemoryModule.cpp:1007
			CgsDev::StrStream lStrStream;

		}
		MemoryBank::SetFirstBlock(/* parameters */);
	}
	MemoryBank::SetData(/* parameters */);
	MemoryBank::SetLastBlock(/* parameters */);
	{
		// CgsMemoryModule.cpp:976
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:989
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:991
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:975
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1011
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsMemory::MemoryModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::MarkRangeAsUsed(uint16_t  lu16ChildBank, uint32_t  luFirstIndex, uint32_t  luNumBlocks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1659
		uint32_t luCurrentCount;

		// CgsMemoryModule.cpp:1660
		uint32_t luCurrentIndex;

	}
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsMemoryModule.cpp:1672
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1671
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1662
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryBank::IsUsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetAllowFragmentation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryBank::GetData(int32_t  liResourceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::AllocateIntoBank(CgsMemory::MemoryModule::InternalBankCreateParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1448
		const MemoryBank & lParent;

		// CgsMemoryModule.cpp:1449
		const MemoryBank & lChild;

		// CgsMemoryModule.cpp:1454
		uint32_t[6] luFirstParentCount;

		// CgsMemoryModule.cpp:1455
		uint32_t[6] luLastParentCount;

		// CgsMemoryModule.cpp:1456
		uint32_t[6] luFirstParentIndex;

		// CgsMemoryModule.cpp:1457
		uint32_t[6] luLastParentIndex;

		// CgsMemoryModule.cpp:1458
		uint32_t[6] luRequiredChildBlocks;

		// CgsMemoryModule.cpp:1460
		int32_t liResource;

		// CgsMemoryModule.cpp:1461
		uint32_t luTotalBlocksNeeded;

	}
	{
		// CgsMemoryModule.cpp:1446
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1488
		uint32_t luSize;

	}
	{
		// CgsMemoryModule.cpp:1521
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1445
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1444
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1530
		uint32_t luFirstBlockIndex;

		// CgsMemoryModule.cpp:1530
		uint32_t luLastBlockIndex;

		MemoryBank::SetData(/* parameters */);
		MemoryBank::SetFirstBlock(/* parameters */);
		MemoryBank::SetBlockSize(/* parameters */);
		MemoryBank::SetLastBlock(/* parameters */);
		MemoryBank::SetNumBlocks(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1483
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1493
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1510
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1544
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::GetBank(uint8_t  luBankIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.h:377
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::MemoryModule::CreateBank(const CgsMemory::MemoryBank::Params *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1067
		uint8_t luBankIndex;

		// CgsMemoryModule.cpp:1083
		CgsMemory::MemoryModule::InternalBankCreateParams lInternalParams;

		// CgsMemoryModule.cpp:1089
		int32_t liResource;

		// CgsMemoryModule.cpp:1137
		CgsMemory::MemoryIO::ResultCodes leResult;

	}
	{
		// CgsMemoryModule.cpp:1046
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetBankIndexFromId(/* parameters */);
	{
		// CgsMemoryModule.cpp:1053
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetBankIndexFromId(/* parameters */);
	{
		// CgsMemoryModule.cpp:1060
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetBank(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1077
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetBankIndexFromId(/* parameters */);
	{
		// CgsMemoryModule.cpp:1117
		uint32_t luChildBlockSize;

		// CgsMemoryModule.cpp:1118
		uint32_t luParentBlockSize;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsMemoryModule.cpp:1140
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1144
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryBank::SetID(/* parameters */);
	MemoryBank::SetParent(/* parameters */);
	MemoryBank::SetAllowFragmentation(/* parameters */);
	MemoryBank::SetIsLeaf(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsMemoryModule.cpp:1126
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1112
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1105
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryIO::CreateAllocatorResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetParentBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::GetBankFromId(int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ComputeAlignment(int32_t  liSizeNeeded, int32_t  liAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetHeapAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetLinearAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessCreateAllocatorRequest(const CreateAllocatorRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:755
		CreateAllocatorResponse lResponse;

		// CgsMemoryModule.cpp:756
		CgsMemory::MemoryBank::Params lBankParams;

		// CgsMemoryModule.cpp:757
		CgsMemory::MemoryIO::ResultCodes lResult;

		MemoryIO::CreateAllocatorResponse::Construct(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		MemoryIO::CreateAllocatorRequest::GetParentBankId(/* parameters */);
	}
	GetBankIndexFromId(/* parameters */);
	{
		// CgsMemoryModule.cpp:775
		int32_t liAlignment;

		MemoryIO::CreateAllocatorRequest::GetParentBankId(/* parameters */);
		GetBankFromId(/* parameters */);
		MemoryIO::MemoryResponse::SetResult(/* parameters */);
		{
			// CgsMemoryModule.cpp:795
			void * lpData;

			MemoryIO::CreateAllocatorRequest::GetBankId(/* parameters */);
			GetBankFromId(/* parameters */);
			MemoryBank::GetData(/* parameters */);
			MemoryIO::CreateAllocatorRequest::GetHeapAllocator(/* parameters */);
			{
				// CgsMemoryModule.cpp:800
				HeapMalloc * lpHeapAllocator;

			}
		}
	}
	{
		// CgsMemoryModule.cpp:764
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
	MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:780
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::CreateAllocatorRequest::GetLinearAllocator(/* parameters */);
	{
		// CgsMemoryModule.cpp:806
		LinearMalloc * lpLinearAllocator;

	}
	{
		// CgsMemoryModule.cpp:770
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:813
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetDescriptor(ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetParentBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryResponse::GetResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorResponse::SetAllocator(rw::core::GeneralResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessCreateGeneralAllocatorRequest(const CreateGeneralAllocatorRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:609
		CreateGeneralAllocatorResponse lResponse;

		// CgsMemoryModule.cpp:610
		CgsMemory::MemoryBank::Params lParams;

		// CgsMemoryModule.cpp:611
		ResourceDescriptor lSmallDescriptor;

		// CgsMemoryModule.cpp:612
		ResourceDescriptor lLargeDescriptor;

		// CgsMemoryModule.cpp:613
		Resource lResource;

		// CgsMemoryModule.cpp:614
		rw::core::GeneralResourceAllocator * lpAllocator;

		// CgsMemoryModule.cpp:616
		int32_t liResourceType;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		MemoryIO::CreateGeneralAllocatorRequest::GetDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		MemoryIO::CreateGeneralAllocatorResponse::Construct(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		{
			// CgsMemoryModule.cpp:639
			uint32_t liAlignment;

			GetBankFromId(/* parameters */);
			rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
			{
				// CgsMemoryModule.cpp:650
				int32_t liSizeNeeded;

				// CgsMemoryModule.cpp:651
				int32_t liWaist;

			}
		}
		MemoryIO::MemoryResponse::SetResult(/* parameters */);
		rw::BaseResources<6u>::GetBaseResource(/* parameters */);
		GetBankFromId(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetBank(/* parameters */);
		MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
		MemoryIO::CreateGeneralAllocatorResponse::SetAllocator(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:656
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetDescriptor(ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetParentBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorResponse::SetAllocator(rw::LinearResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessCreateLinearAllocatorRequest(const CreateLinearAllocatorRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:489
		CreateLinearAllocatorResponse lResponse;

		// CgsMemoryModule.cpp:490
		CgsMemory::MemoryBank::Params lParams;

		// CgsMemoryModule.cpp:491
		ResourceDescriptor lSmallDescriptor;

		// CgsMemoryModule.cpp:492
		ResourceDescriptor lLargeDescriptor;

		// CgsMemoryModule.cpp:493
		Resource lResource;

		// CgsMemoryModule.cpp:494
		rw::LinearResourceAllocator * lpAllocator;

		// CgsMemoryModule.cpp:496
		int32_t liResourceType;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		MemoryIO::CreateLinearAllocatorRequest::GetDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		MemoryIO::CreateLinearAllocatorResponse::Construct(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		{
			// CgsMemoryModule.cpp:519
			uint32_t liAlignment;

			GetBankFromId(/* parameters */);
			rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
			{
				// CgsMemoryModule.cpp:530
				int32_t liSizeNeeded;

				// CgsMemoryModule.cpp:531
				int32_t liWaist;

			}
		}
		MemoryIO::MemoryResponse::SetResult(/* parameters */);
		rw::BaseResources<6u>::GetBaseResource(/* parameters */);
		GetBankFromId(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetBank(/* parameters */);
		MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
		MemoryIO::CreateLinearAllocatorResponse::SetAllocator(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:536
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
}

extern void CreateResourceResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MemoryResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetDescriptor(ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetParentBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceResponse::SetResource(const Resource *  lpResource, const ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreateResourceResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessCreateResourceRequest(const CreateResourceRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:379
		CreateResourceResponse lResponse;

		// CgsMemoryModule.cpp:380
		CgsMemory::MemoryBank::Params lParams;

		// CgsMemoryModule.cpp:381
		ResourceDescriptor lDescriptor;

		// CgsMemoryModule.cpp:382
		Resource lResource;

		// CgsMemoryModule.cpp:384
		int32_t liResourceType;

		CreateResourceResponse(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		MemoryIO::CreateResourceRequest::GetDescriptor(/* parameters */);
		MemoryIO::CreateResourceResponse::Construct(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		{
			// CgsMemoryModule.cpp:404
			uint32_t liAlignment;

			{
				// CgsMemoryModule.cpp:415
				int32_t liSizeNeeded;

				// CgsMemoryModule.cpp:416
				int32_t liWaist;

			}
		}
		GetBankFromId(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
		MemoryIO::MemoryResponse::SetResult(/* parameters */);
		rw::BaseResources<6u>::GetBaseResource(/* parameters */);
		GetBankFromId(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		GetBank(/* parameters */);
		MemoryIO::CreateResourceResponse::SetResource(/* parameters */);
		MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~CreateResourceResponse(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemoryIO::MemoryResponse::SetResult(/* parameters */);
}

extern void CreateBankResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::GetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::ProcessCreateBankRequest(const CreateBankRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:354
		CreateBankResponse lResponse;

		CreateBankResponse(/* parameters */);
		MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		MemoryIO::CreateBankResponse::Construct(/* parameters */);
		MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
		MemoryIO::MemoryResponse::SetResult(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsMemory::MemoryModule::ProcessMemoryRequest(const MemoryRequest *  lpMemoryRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::InputBuffer::GetMemoryRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModuleIO.h:753
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:251
		const CgsModule::Event * lpEvent;

		// CgsMemoryModule.cpp:252
		int32_t liSize;

		// CgsMemoryModule.cpp:253
		int32_t liEventId;

		CgsModule::IOBuffer::LockForWrite(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	MemoryIO::InputBuffer::GetMemoryRequestQueue(/* parameters */);
	CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	MemoryIO::InputBuffer::GetMemoryRequestQueue(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::VerifyMemoryMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1699
		uint32_t luCount;

		// CgsMemoryModule.cpp:1700
		uint32_t luBlockIndex;

		{
			// CgsMemoryModule.cpp:1715
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsMemoryModule.cpp:1719
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsMemoryModule.cpp:1724
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsMemoryModule.cpp:1739
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1707
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsMemoryModule.cpp:1728
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryModule::DebugPrintBlockEnd(uint32_t  luBlockIndex, uint32_t  luBlockCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsMemory::MemoryModule::DebugPrint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.cpp:1757
		uint8_t luIndex;

		// CgsMemoryModule.cpp:1758
		uint32_t luBankIndex;

		// CgsMemoryModule.cpp:1759
		int32_t liResouce;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsMemoryModule.cpp:1779
		const MemoryBank & lBank;

		GetBankIndexFromId(/* parameters */);
		{
			// CgsMemoryModule.cpp:1813
			uint32_t luBlockIndex;

			// CgsMemoryModule.cpp:1814
			uint32_t luBlockCount;

			// CgsMemoryModule.cpp:1815
			uint32_t luPrevBlockIndex;

			// CgsMemoryModule.cpp:1816
			bool lbAllocated;

			// CgsMemoryModule.cpp:1817
			uint16_t lu16Child;

			MemoryBank::GetFirstBlock(/* parameters */);
		}
	}
	GetBank(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MemoryBank::GetFirstBlock(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MemoryBank::GetLastBlock(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13312,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<5120,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::DebugUI::DebugUI::GetMetrics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::RenderBlockInfo(uint32_t  luBlockIndex, uint32_t  luBlockRangeStart, uint32_t  luBlockRangeEnd, CgsDev::Debug2DImmediateRender *  lpRenderer, float32_t  lfPositionX, float32_t *  lpfPositionY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:621
		char[1024] lacBlockInfo;

		// CgsDebugComponentMemory.cpp:622
		const char * lacStatusString;

		// CgsDebugComponentMemory.cpp:623
		CgsDev::StrStream lStrStream;

		// CgsDebugComponentMemory.cpp:624
		float32_t lfFontSize;

		// CgsDebugComponentMemory.cpp:625
		MemoryBlock::FlagSet8 lStatus;

		// CgsDebugComponentMemory.cpp:626
		MemoryBlock * lpBlock;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsDebugComponentMemory.cpp:642
		const MemoryBank & lChild;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsMemory::DebugComponentMemory::RenderBankInfo(uint16_t  luBankIndex, CgsDev::Debug2DImmediateRender *  lpRenderer, float32_t  lfPositionX, float32_t *  lpfPositionY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:515
		char[1024] laBuffer;

		// CgsDebugComponentMemory.cpp:516
		CgsDev::StrStream lStrStream;

		// CgsDebugComponentMemory.cpp:517
		const MemoryBank * lpBank;

		// CgsDebugComponentMemory.cpp:518
		const char * lpBankName;

		// CgsDebugComponentMemory.cpp:519
		float32_t lfFontSize;

		// CgsDebugComponentMemory.cpp:520
		float32_t lfFontSizeNormal;

		// CgsDebugComponentMemory.cpp:521
		float32_t lfFontSizeSmall;

		// CgsDebugComponentMemory.cpp:522
		uint16_t luChildBankIndex;

		// CgsDebugComponentMemory.cpp:523
		int32_t liResourceIndex;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsDebugComponentMemory.cpp:553
		uint32_t luBlockIndex;

		// CgsDebugComponentMemory.cpp:554
		uint32_t luPrevIndex;

		// CgsDebugComponentMemory.cpp:555
		uint32_t luBlockCount;

		// CgsDebugComponentMemory.cpp:556
		uint32_t luBlockRangeStart;

		// CgsDebugComponentMemory.cpp:557
		MemoryBlock * lpBlock;

		// CgsDebugComponentMemory.cpp:558
		MemoryBlock::FlagSet8 lxStatus;

		// CgsDebugComponentMemory.cpp:559
		uint16_t luChild;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MemoryBank::GetFirstBlock(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MemoryBank::GetLastBlock(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	MemoryBank::GetFirstBlock(/* parameters */);
	{
		// CgsDebugComponentMemory.cpp:594
		const MemoryBank * lpChildBank;

	}
}

void CgsMemory::DebugComponentMemory::RenderBankInfo(CgsDev::Debug2DImmediateRender *  lpRenderer, float32_t  lfPositionX, float32_t  lfPositionY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DebugComponentMemory::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentMemory.cpp:457
		const const Metrics & lMetrics;

		CgsDev::DebugUI::DebugUI::GetMetrics(/* parameters */);
	}
}

void CgsMemory::DistributionStream::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::Init(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNodeBase, uint16_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:432
		uint16_t liIndex;

		{
			// CgsIndexedLinkList.h:423
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetPrevIndex(uint16_t  liPrevIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::SetNextIndex(uint16_t  liNextIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::IndexedNodeHeap::PopNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::RemoveHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1163
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1161
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveLastNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1139
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1137
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddFirstNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1056
		uint16_t liIndex;

		{
			// CgsIndexedLinkList.h:1053
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetNodeOffset(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddHead(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1084
		uint16_t liIndex;

		{
			// CgsIndexedLinkList.h:1081
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::AddAfter(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNodeInList, CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:756
		uint16_t liNodeInListIndex;

		// CgsIndexedLinkList.h:757
		uint16_t liNewNodeIndex;

	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalAddTail(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1112
		uint16_t liIndex;

		{
			// CgsIndexedLinkList.h:1109
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetPrevIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::GetPrev(const CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNodeInList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::RemoveNode(CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:890
		uint16_t liIndex;

	}
}

void CgsContainers::IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>::InternalRemoveTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1188
		CgsContainers::IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1186
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsMemory::IndexedNodeHeap::PushNode(IndexedNodeHeapListNode *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::operator=(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValue(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:458
		uint64_t nOriginalValue;

	}
}

void CgsMemory::DataStreamCommandPoster::GetEncodedStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDataStreamCommandPoster.h:175
		CgsDev::StrStream lStrStream;

	}
}

void EA::Jobs::Job::SetCode(EA::Jobs::JobEnvironment  env, const void *  ptrToCode, int  codeSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetName(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void GatherStreamStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::JobManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ScatterStreamStatus::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::Append64IntDecimal(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:822
		char[22] lacNumber;

	}
}

void CgsDev::StrStreamBase::Append64IntHex(uint64_t  lu64Int) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:847
		uint32_t lA;

		// CgsStrStream.h:848
		uint32_t lB;

	}
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsMemory::KF_BANK_WIDTH = [67, 200, 0, 0];

CgsMemory::KF_BANK_HEIGHT = [65, 128, 0, 0];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::EPSILON = [52, 0, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

CgsMemory::DebugComponentMemory::KI_TAB_SIZE;

