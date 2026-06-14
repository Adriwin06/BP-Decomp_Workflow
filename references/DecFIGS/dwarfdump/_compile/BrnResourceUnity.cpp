struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct SpliceSample;

struct cParticleEmitter;

void EA::Allocator::ICoreAllocator::~ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ICoreAllocator::~ICoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::PS3GraphicsSystemMemoryInitialize(void *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::PS3GraphicsLocalMemoryInitialize(void *, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::~DeviceDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::~DeviceDriver(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Restore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Write(void *, const void *, unsigned int, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Resize(void *, uint64_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::QueryLocation(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::GetMaxReadSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Delete(const char *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::Move(const char *, const char *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::FindBegin(const char *, rw::core::filesys::DeviceDriver::FindData *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::FindNext(void *, rw::core::filesys::DeviceDriver::FindData *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::FindEnd(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::DirectoryCreate(const char *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::DeviceDriver::DirectoryRemove(const char *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
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

void CgsDev::Log::LogChannelOutput::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogChannelOutput.h:124
		uint32_t luWritten;

	}
	sys_tty_write(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocVertices(uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1326
		uint32_t luNewWritePos;

		{
			// CgsImRenderBuffer.h:1335
			ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpVertexPtr;

			{
				// CgsImRenderBuffer.h:1334
				uintptr_t luAddress;

			}
		}
	}
}

void CgsResource::LuaCodeResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::~Object(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPostLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoOnPreUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsContent.h:484
		const CgsSound::Playback::Factory & lFactory;

	}
}

void BrnResource::GameDataModule::DestroyAllocators(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::DestroyPools(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::DestroyBanks(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::UpdateStreamingTests(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::LoadMemoryMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::DebugSetupDummyVehicleLists() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessLoadICEMoviesRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::DebugMemoryInit(BrnResource::GameDataModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareStreamingTests(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GetAvailableMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:718
		sys_memory_info_t lMemInfo;

		sys_memory_get_user_memory_size(/* parameters */);
	}
}

void BrnResource::GameDataModule::DebugReportPools(FPoolReportCallback *  lpfCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::Construct(rw::core::GeneralResourceAllocator *  lpAllocator, const char *  lpcName, int32_t  liPrintLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::LinearResourceAllocator::Construct(rw::LinearResourceAllocator *  lpAllocator, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DefaultLinearAllocator::PS3GraphicsSystemMemoryInitialize(void *  lpMemory, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DefaultLinearAllocator::PS3GraphicsLocalMemoryInitialize(void *  lpMemory, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::Validate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::Construct(BrnResource::GameDataModule *  lpModule, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *  pBlockInfo, void *  pContext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceDebugComponent.cpp:326
		BrnResource::DebugComponent::GenAllocUsage * lpUsage;

	}
}

void CgsResource::RwDebugResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwDebugResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwDebugResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RwDebugResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::WorldPainter2DResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::NicotineResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SnapshotDataResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RegistryResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RegistryResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::RegistryResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GinsuWaveContentResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GenericRwacWaveContentResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GenericRwacReverbIRContentResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SplicerResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AemsBankResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::CsisResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::RegisterResourceType(CgsResource::Type *  lpType, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::~Futex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::operator delete(void *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::~CacheDeviceDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::~CacheDeviceDriver(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Thread::Futex::~Futex(/* parameters */);
	BrnResource::CacheDeviceDriver::operator delete(/* parameters */);
	rw::core::filesys::DeviceDriver::~DeviceDriver(/* parameters */);
}

void BrnResource::CacheDeviceDriver::InitializeCacheFile(rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:249
		int32_t liBytes;

	}
}

void BrnResource::CacheDeviceDriver::Restore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::UnitTest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICETakeData::GetResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::DictionaryResourceType<ICE::ICETakeData>::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::SimpleDictionary<ICE::ICETakeData>::GetAt(int32_t  lnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Dictionary<ICE::ICETakeData>::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDictionary.h:423
		int32_t liIndex;

	}
}

void CgsContainers::DictionaryResourceType<ICE::ICETakeData>::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDictionaryResourceType.h:164
		Dictionary<ICE::ICETakeData> * lpDictionary;

	}
}

void CgsContainers::Dictionary<ICE::ICETakeData>::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDictionary.h:398
		int32_t liIndex;

	}
}

void CgsContainers::DictionaryResourceType<ICE::ICETakeData>::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDictionaryResourceType.h:185
		Dictionary<ICE::ICETakeData> * lpDictionary;

	}
}

void rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::SetSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::ClearResource(const Resource &  lResource, const const ResourceDescriptor &  lDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:635
		int32_t liBaseResource;

	}
}

void BrnResource::CacheDeviceFile::IsUsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::GetNameHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::GetFileIndex(uint32_t  luHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1020
		int32_t liIndex;

	}
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::GetFileIndex(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1004
		uint32_t luHash;

		CgsContainers::CgsHash::CalculateHash(/* parameters */);
	}
}

void BrnResource::CacheDeviceChunk::IsUsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceChunk::SetNextChunkIndex(uint16_t  liNextChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::PopChunk(int32_t *  lpiOutChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1047
		int32_t liIndex;

	}
	{
		// BrnCacheDeviceDriver.cpp:1051
		int32_t liChunk;

	}
	CacheDeviceChunk::SetNextChunkIndex(/* parameters */);
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Registry::GetAllocatedSize() {
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

void CgsResource::RegistryResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistryResourceType.h:90
		const Registry * lpRegistry;

	}
	CgsSound::Playback::Registry::GetAllocatedSize(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
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

void rw::Resource::IsBaseResourceTypeDisposable(uint32_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetNumberOfBaseResourceTypes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::DoFreeDisposable(const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:313
		Resource newResource;

		Resource::Resource(/* parameters */);
		{
			// resourceallocator.h:314
			uint32_t i;

			BaseResources<6u>::GetBaseResource(/* parameters */);
			Resource::IsBaseResourceTypeDisposable(/* parameters */);
		}
	}
}

void rw::IResourceAllocator::Free(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(void *  block, size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	Resource::Resource(/* parameters */);
}

void rw::core::filesys::AsyncOp::operator new(size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::SetSeed(uint64_t  luSeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:219
		uint32_t luPreflight;

	}
}

void CgsNumeric::Random::RandomFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:352
		float32_t lfRandomFractionPlusOne;

		// CgsRandom.h:356
		float32_t lfRandomFraction;

	}
}

void CgsNumeric::Random::AddRandomFloatToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomUInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:273
		uint32_t luResult;

	}
}

void CgsNumeric::Random::ConvertUnsignedFixed32ToFloatRepresentation(uint32_t  lu32Random) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:230
		const uint32_t KU_IEEE_754_REPRESENTATION_FLOAT_ONE;

	}
}

void BrnResource::PS3DiskBenchmark::PS3DiskBenchmark(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	CgsNumeric::Random::SetSeed(/* parameters */);
}

void EA::Thread::AutoFutex::AutoFutex(const Futex &  futex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_futex.h:414
		Futex::ThreadUniqueId threadUniqueId;

	}
}

void EA::Thread::AtomicInt<std::uint64_t>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::Increment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:515
		uint64_t nNewValue;

	}
}

void EA::Thread::AutoFutex::~AutoFutex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::operator--() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::Decrement() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:539
		uint64_t nNewValue;

	}
}

void BrnResource::CacheDeviceDriver::GetSize(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:986
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsResource::RwDebugResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags, unsigned int  align, unsigned int  alignOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateMemoryResource(/* parameters */);
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void rw::IResourceAllocator::~IResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::~IResourceAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
}

void BrnResource::CacheDeviceDriver::~CacheDeviceDriver(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Thread::Futex::~Futex(/* parameters */);
	rw::core::filesys::DeviceDriver::~DeviceDriver(/* parameters */);
}

void CgsSound::MemBase::operator delete(void *  lpvMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::FreeMemoryResource(MemoryResource  memoryResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resourceallocator.h:191
		Resource resource;

	}
}

void CgsSound::MemBase::~MemBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::MemBase::operator delete(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::operator delete(void *  lpVoid, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.h:538
		rw::IResourceAllocator * lpAllocator;

		operator delete(/* parameters */);
	}
}

void CgsSound::Playback::Factory::operator delete(void *  lpVoid, const CgsSound::Playback::Environment &  lEnvironment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Environment::Free(void *  lpVoid) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::DoDispose() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFactory.h:322
		const CgsSound::Playback::Environment & lEnvironment;

		operator delete(/* parameters */);
	}
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::SetAlignment(uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::GetDefaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::Construct(rw::IResourceAllocator *  lpParentAllocator, const const ResourceDescriptor &  lDescriptor, const char *  lpcName, int32_t  liPrintLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1028
		ResourceDescriptor lExtendedDescriptor;

		// BrnResourceAllocator.cpp:1031
		Resource lMemory;

	}
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void BrnResource::LinearResourceAllocator::Construct(rw::IResourceAllocator *  lpParentAllocator, const const ResourceDescriptor &  lDescriptor, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1238
		ResourceDescriptor lExtendedDescriptor;

		// BrnResourceAllocator.cpp:1241
		Resource lMemory;

	}
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void BrnResource::GetSystemAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnResource::GameDataModule::TestStreamEntry>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<BrnResource::GameDataModule::TestStreamEntry>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::AnalyseStreamTest(RingBuffer<BrnResource::GameDataModule::TestStreamEntry> *  lpResultBuffer, uint32_t *  lpuOutTotalSize, float32_t *  lpfOutTotalTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5950
		const RingBuffer<BrnResource::GameDataModule::TestStreamEntry> & lBuffer;

		// BrnGameDataModule.cpp:5951
		uint32_t luTotalSize;

		// BrnGameDataModule.cpp:5952
		uint64_t luStartTime;

		// BrnGameDataModule.cpp:5953
		uint64_t luEndTime;

		// BrnGameDataModule.cpp:5955
		int32_t liIndex;

		CgsContainers::RingBuffer<BrnResource::GameDataModule::TestStreamEntry>::operator[](/* parameters */);
	}
	CgsContainers::RingBuffer<BrnResource::GameDataModule::TestStreamEntry>::operator[](/* parameters */);
}

void CgsModule::EventReceiverQueue<32768,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnResource::GameDataModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<32768,16>::Release(/* parameters */);
}

void CgsModule::EventReceiverQueue<32768,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<32768,16>::Destruct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Playback::Object::Release(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::operator delete(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::InterpolateColours(RGBA  lCol0, RGBA  lCol1, float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceDebugComponent.h:146
		float32_t lfInterp0;

		// BrnResourceDebugComponent.h:147
		float32_t lfInterp1;

		// BrnResourceDebugComponent.h:148
		uint8_t luRed;

		// BrnResourceDebugComponent.h:149
		uint8_t luGreen;

		// BrnResourceDebugComponent.h:150
		uint8_t luBlue;

		// BrnResourceDebugComponent.h:151
		uint8_t luAlpha;

	}
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceDebugComponent.cpp:71
		int32_t liIndex;

		// BrnResourceDebugComponent.cpp:72
		int32_t liXIndex;

		// BrnResourceDebugComponent.cpp:74
		float32_t _lfYStart;

		// BrnResourceDebugComponent.cpp:75
		float32_t[9] _lafXStarts;

		// BrnResourceDebugComponent.cpp:76
		float32_t _lfTextSize;

		// BrnResourceDebugComponent.cpp:77
		RGBA _lTextColour;

		// BrnResourceDebugComponent.cpp:78
		RGBA _lBarBGColour0;

		// BrnResourceDebugComponent.cpp:79
		RGBA _lBarFGColour0;

		// BrnResourceDebugComponent.cpp:80
		RGBA _lBarBGColour1;

		// BrnResourceDebugComponent.cpp:81
		RGBA _lBarFGColour1;

		// BrnResourceDebugComponent.cpp:83
		float32_t lfYPos;

		rw::RGBA::RGBA(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		InterpolateColours(/* parameters */);
		InterpolateColours(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		InterpolateColours(/* parameters */);
		InterpolateColours(/* parameters */);
	}
}

void rw::IResourceAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateMemoryResource(/* parameters */);
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsSound::Playback::Registry::~Registry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::RwacCommandQueue::~RwacCommandQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void CgsResource::Type::operator new(size_t  luSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::RegisterResourceTypes(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::Type::operator new(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsResource::TextFileResourceType::TextFileResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwRasterResourceType::RwRasterResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::MaterialResourceType::MaterialResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwVertexDescResourceType::RwVertexDescResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwMaterialCRC32ResourceType::RwMaterialCRC32ResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwTextureStateResourceType::RwTextureStateResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::MaterialStateResourceType::MaterialStateResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwShaderProgramBufferResourceType::RwShaderProgramBufferResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwShaderParameterResourceType::RwShaderParameterResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::ShaderTechniqueResourceType::ShaderTechniqueResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwDebugResourceType::RwDebugResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::MaterialTechniqueResourceType::MaterialTechniqueResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwRenderableResourceType::RwRenderableResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::AptDataHeaderType::AptDataHeaderType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::HudMessageResourceType::HudMessageResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::HudMessageListResourceType::HudMessageListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::GuiPopupResourceType::GuiPopupResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::FontResourceType::FontResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::LuaCodeResourceType::LuaCodeResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RegistryResourceType::RegistryResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::GinsuWaveContentResourceType::GinsuWaveContentResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::GenericRwacWaveContentResourceType::GenericRwacWaveContentResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::GenericRwacReverbIRContentResourceType::GenericRwacReverbIRContentResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::AemsBankResourceType::AemsBankResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::CsisResourceType::CsisResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::NicotineResourceType::NicotineResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::VoiceHierarchyResourceType::VoiceHierarchyResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::SplicerResourceType::SplicerResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::SnrResourceType::SnrResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::SnapshotDataResourceType::SnapshotDataResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::LanguageResourceType::LanguageResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::VideoDataResourceType::VideoDataResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::ZoneListResourceType::ZoneListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsGraphics::InstanceListResourceType::InstanceListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsPhysics::InstanceCollisionListResourceType::InstanceCollisionListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::ClusteredMeshResourceType::ClusteredMeshResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::KdTreeResourceType::KdTreeResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::AttribSysSchemaResourceType::AttribSysSchemaResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::AttribSysVaultResourceType::AttribSysVaultResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::ModelResourceType::ModelResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::RwColourCubeResourceType::RwColourCubeResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::WorldPainter2DResourceType::WorldPainter2DResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnAI::AISectionsResourceType::AISectionsResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnTrigger::TriggerResourceType::TriggerResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnTraffic::TrafficDataResourceType::TrafficDataResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnTraffic::GraphicsStubResourceType::GraphicsStubResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnSound::Vehicles::Engines::LoopModelResourceType::LoopModelResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	VehicleListResourceType::VehicleListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	ChallengeListResourceType::ChallengeListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	WheelListResourceType::WheelListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnVehicle::GraphicsSpecResourceType::GraphicsSpecResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnWheel::GraphicsSpecResourceType::GraphicsSpecResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnParticle::ParticleDescriptionCollectionResourceType::ParticleDescriptionCollectionResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnParticle::ParticleDescriptionResourceType::ParticleDescriptionResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnParticle::TextureNameMapResourceType::TextureNameMapResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnParticle::BrnVFXMeshCollectionResourceType::BrnVFXMeshCollectionResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnParticle::VFXPropCollectionResourceType::VFXPropCollectionResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnFlapt::FlaptFileResourceType::FlaptFileResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::SatNavTileDirectoryResourceType::SatNavTileDirectoryResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::SatNavTileResourceType::SatNavTileResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::PFXHookBundleResourceType::PFXHookBundleResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnProgression::ProgressionResourceType::ProgressionResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnPhysics::Props::PropPhysicsResourceType::PropPhysicsResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnPhysics::Props::PropGraphicsListResourceType::PropGraphicsListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnPhysics::Props::PropInstanceDataResourceType::PropInstanceDataResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnWorld::EnvironmentSettings::KeyframeResourceType::KeyframeResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnWorld::EnvironmentSettings::TimeLineResourceType::TimeLineResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnWorld::EnvironmentSettings::DictionaryResourceType::DictionaryResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnSound::World::StaticSoundMapResourceType::StaticSoundMapResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	BrnStreetData::StreetDataResourceType::StreetDataResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsContainers::DictionaryResourceType<ICE::ICETakeData>::DictionaryResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	StreamedDeformationSpecResourceType::StreamedDeformationSpecResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::PolygonSoupListResourceType::PolygonSoupListResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::MassiveLookupTableResourceType::MassiveLookupTableResourceType(/* parameters */);
	CgsResource::Type::operator new(/* parameters */);
	CgsResource::PlayerCarColoursResourceType::PlayerCarColoursResourceType(/* parameters */);
}

void BrnResource::GetDebugAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DefaultLinearAllocator::~DefaultLinearAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
}

void BrnResource::HeapResourceAllocator::~HeapResourceAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
}

void BrnResource::LinearResourceAllocator::~LinearResourceAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
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

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsDev::Log::LogChannelOutput::LogChannelOutput() {
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
	~ResourceDescriptor(/* parameters */);
	BrnResource::LinearResourceAllocator::~LinearResourceAllocator(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	BrnResource::LinearResourceAllocator::~LinearResourceAllocator(/* parameters */);
	BrnResource::HeapResourceAllocator::~HeapResourceAllocator(/* parameters */);
	BrnResource::LinearResourceAllocator::~LinearResourceAllocator(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	BrnResource::LinearResourceAllocator::~LinearResourceAllocator(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	BrnResource::HeapResourceAllocator::~HeapResourceAllocator(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	BrnResource::HeapResourceAllocator::~HeapResourceAllocator(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	BrnResource::DefaultLinearAllocator::~DefaultLinearAllocator(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnResource::DefaultLinearAllocator::DefaultLinearAllocator(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	BrnResource::HeapResourceAllocator::HeapResourceAllocator(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	BrnResource::HeapResourceAllocator::HeapResourceAllocator(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	BrnResource::LinearResourceAllocator::LinearResourceAllocator(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	BrnResource::LinearResourceAllocator::LinearResourceAllocator(/* parameters */);
	BrnResource::LinearResourceAllocator::LinearResourceAllocator(/* parameters */);
	BrnResource::HeapResourceAllocator::HeapResourceAllocator(/* parameters */);
	BrnResource::LinearResourceAllocator::LinearResourceAllocator(/* parameters */);
	CgsDev::Log::LogChannelOutput::LogChannelOutput(/* parameters */);
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
}

void CgsSound::Playback::Content::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Content::~Content(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Content::operator delete(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
}

void CgsSound::Playback::Factory::~Factory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Object::~Object(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::InputBuffer::GetIm2dDebugRenderBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::RenderDebug(const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
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

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForWrite(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetRawResource(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapRawResource::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetDescriptor(ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetLinearAllocator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapLinearAllocator::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetHeapAllocator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapHeapAllocator::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::HeapMalloc::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetRWLinearAllocator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapRWLinearAllocator::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetBankName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetRWGeneralAllocator(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapRWGeneralAllocator::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnResource::DebugComponent::MemTypeInfo::UpdateMax() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetNumUsed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetNumFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceDebugComponent.cpp:159
		MemoryMap * lpMemoryMap;

		// BrnResourceDebugComponent.cpp:160
		AllocatorList * lpAllocatorList;

		// BrnResourceDebugComponent.cpp:179
		int32_t liNextSlot;

		// BrnResourceDebugComponent.cpp:181
		int32_t liIndex;

		{
			// BrnResourceDebugComponent.cpp:186
			const CreateResourceRequest * lpRequest;

			// BrnResourceDebugComponent.cpp:187
			ResourceDescriptor lDescriptor;

			CgsMemory::MemoryMapRawResource::GetRequest(/* parameters */);
			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			CgsMemory::MemoryIO::CreateResourceRequest::GetBankName(/* parameters */);
			CgsMemory::MemoryIO::CreateResourceRequest::GetDescriptor(/* parameters */);
			CgsCore::StrCpy(/* parameters */);
			rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
			rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
			rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnResourceDebugComponent.cpp:212
			const CreateAllocatorRequest * lpRequest;

			CgsCore::StrCpy(/* parameters */);
		}
		CgsMemory::MemoryMapLinearAllocator::GetRequest(/* parameters */);
		CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankName(/* parameters */);
		{
			// BrnResourceDebugComponent.cpp:246
			const CreateLinearAllocatorRequest * lpRequest;

			// BrnResourceDebugComponent.cpp:247
			ResourceDescriptor lSize;

			// BrnResourceDebugComponent.cpp:247
			ResourceDescriptor lUsed;

			CgsMemory::MemoryMapRWLinearAllocator::GetRequest(/* parameters */);
			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetBankName(/* parameters */);
			CgsCore::StrCpy(/* parameters */);
			rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		{
			// BrnResourceDebugComponent.cpp:270
			const CreateGeneralAllocatorRequest * lpRequest;

			// BrnResourceDebugComponent.cpp:271
			ResourceDescriptor lSize;

			// BrnResourceDebugComponent.cpp:275
			BrnResource::DebugComponent::GenAllocUsage lMainUsage;

			// BrnResourceDebugComponent.cpp:276
			BrnResource::DebugComponent::GenAllocUsage lVideoUsage;

			CgsMemory::MemoryMapRWGeneralAllocator::GetRequest(/* parameters */);
			rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
			CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetBankName(/* parameters */);
			CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetDescriptor(/* parameters */);
			CgsCore::StrCpy(/* parameters */);
			CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetBankId(/* parameters */);
			~ResourceDescriptor(/* parameters */);
		}
		MemTypeInfo::UpdateMax(/* parameters */);
		MemTypeInfo::UpdateMax(/* parameters */);
	}
	{
		// BrnResourceDebugComponent.cpp:226
		const CreateAllocatorRequest * lpRequest;

		// BrnResourceDebugComponent.cpp:229
		BrnResource::DebugComponent::GenAllocUsage lUsage;

		CgsCore::StrCpy(/* parameters */);
	}
	CgsMemory::MemoryMapHeapAllocator::GetRequest(/* parameters */);
	CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankName(/* parameters */);
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetBufferFullRewindToLastEndRender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(int32_t  liCommandType, uint32_t  luCommandSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1222
		uint32_t luCommandBufferWritePos;

		// CgsImRenderBuffer.h:1223
		uint8_t * lpuCommandBuffer;

		// CgsImRenderBuffer.h:1226
		uint32_t luAlignedSize;

		{
			// CgsImRenderBuffer.h:1219
			uintptr_t luAddress;

		}
		{
			// CgsImRenderBuffer.h:1232
			ImCommand * lpCommand;

		}
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *  lpVertices, uint32_t  luNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:689
		ImCommandBatchTransformTextureBlendRender::Im2dVertex * lpAllocatedVerts;

	}
	{
		// CgsImRenderBuffer.h:692
		ImCommandRenderPrimitives<CgsGraphics::Basic2dColouredTexturedVertex> * lpCommand;

		AllocateCommand(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:826
		ImCommandSetTexture * lpCommand;

	}
	AllocateCommand(/* parameters */);
}

void CgsGraphics::Im2dTransform::GetDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dRenderBuffer::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2dRenderBuffer.h:161
		ImCommandSetTransform * lpCommand;

	}
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const BlendState *  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:850
		ImCommandSetStateBlend * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const RasterizerState *  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:925
		ImCommandSetStateRasterizer * lpCommand;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(const DepthStencilState *  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:875
		ImCommandSetStateDepthStencil * lpCommand;

	}
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::TextureRenderCallback(renderengine::Texture *  lpTexture, const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, void *  lpUserData, bool  lbIsFirst, bool  lbIsLast) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5476
		BrnResource::GameDataModule * lpThis;

		// BrnGameDataModule.cpp:5483
		renderengine::Texture * _lpLastTexture;

	}
	CgsGraphics::Im2dRenderBuffer::SetTransform(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::AllocateCommand(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::SetState(/* parameters */);
	{
		// BrnGameDataModule.cpp:5502
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

void BrnResource::PrintConsoleMemory(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:691
		sys_memory_info_t lMemInfo;

	}
	sys_memory_get_user_memory_size(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void DestroyIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::InputBuffer::GetRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:211
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::operator CgsResource::ResourceIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::OutputBuffer::GetFileSystemStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModuleIO.h:110
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::UpdateResourceModule(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1922
		IOHelper<CgsResource::ResourceIO::OutputBuffer> lpOutput;

		// BrnGameDataModule.cpp:1924
		CgsResource::ResourceModule::EUpdateResult leResult;

		CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::IOHelper(/* parameters */);
	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	CgsResource::ResourceIO::OutputBuffer::GetFileSystemStatusInterface(/* parameters */);
	{
	}
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsMemory::MemoryMap::GetRootBank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMapBank::GetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GetResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsSystemResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~InitOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ConstructResourceModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1965
		MemoryMap * lpMap;

		// BrnGameDataModule.cpp:1966
		Resource lResource;

		// BrnGameDataModule.cpp:1972
		CgsResource::ResourceModule::InitOptions lInitOptions;

		// BrnGameDataModule.cpp:1976
		const CgsMemory::MemoryBank::Params * lpParams;

		// BrnGameDataModule.cpp:2050
		ResourceDescriptor lResourceDescriptor;

		// BrnGameDataModule.cpp:2051
		Resource lMemResource;

	}
	rw::Resource::Resource(/* parameters */);
	CgsMemory::MemoryMapBank::GetParams(/* parameters */);
	GetDebugAllocator(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
	rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetSize(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	GetDebugAllocator(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~InitOptions(/* parameters */);
	{
		// BrnGameDataModule.cpp:2063
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2061
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2062
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:590
		int32_t liRem;

		// CgsEventReceiverQueue.h:591
		int32_t liPaddingBytes;

	}
}

void CgsModule::BaseEventReceiverQueue::AddEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:434
		int32_t liTotalEventSize;

		// CgsEventReceiverQueue.h:435
		int32_t liPaddingBytes;

		// CgsEventReceiverQueue.h:441
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
			}
		}
		{
			// CgsEventReceiverQueue.h:438
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

void CgsModule::BaseEventReceiverQueue::AddEvent(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetPoolSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(int16_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:242
		int16_t liFreeIndex;

		{
			(None)unknown_arg
		}
		{
			// CgsIndexedPool.h:241
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
		{
			// CgsIndexedPool.h:250
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourceIO::InputBuffer::GetResourceQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// CgsResourceModuleIO.h:81
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

void CgsResource::ResourceIO::InputBuffer::GetResourceQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(const GameDataEventSlot *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:221
		int16_t liIndex;

		{
			(None)unknown_arg
		}
		{
			// CgsIndexedPool.h:222
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
		}
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::DefaultLinearAllocator::Construct(uint32_t  luPreAllocatedSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:739
		int32_t liIndex;

		// BrnResourceAllocator.cpp:758
		uint32_t luMainMem;

		// BrnResourceAllocator.cpp:765
		void * lpFirstBlock;

		// BrnResourceAllocator.cpp:766
		sys_addr_t lAddr;

		// BrnResourceAllocator.cpp:767
		void * lpPrevBlock;

		// BrnResourceAllocator.cpp:768
		int32_t liNumBlocks;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		sys_memory_allocate(/* parameters */);
		{
			// BrnResourceAllocator.cpp:779
			void * lpNewBlock;

			sys_memory_allocate(/* parameters */);
			{
				// BrnResourceAllocator.cpp:780
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
			}
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnResourceAllocator.cpp:763
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::DefaultLinearAllocator::CheckRenderwareBudget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:808
		int32_t liIndex;

	}
	{
		// BrnResourceAllocator.cpp:814
		uint32_t luMB;

		// BrnResourceAllocator.cpp:815
		uint32_t luKB;

		// BrnResourceAllocator.cpp:816
		uint32_t luB;

		// BrnResourceAllocator.cpp:818
		char[256] lacOutput;

	}
	{
		// BrnResourceAllocator.cpp:830
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:829
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:828
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::BaseResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DefaultLinearAllocator::DoAllocate(const const ResourceDescriptor &  lResourceDescriptor, const char8_t *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnResourceAllocator.cpp:940
	Resource lResource;

	{
		// BrnResourceAllocator.cpp:908
		int32_t liIndex;

		// BrnResourceAllocator.cpp:940
		Resource lResource;

	}
	{
		// BrnResourceAllocator.cpp:915
		uint32_t luMB;

		// BrnResourceAllocator.cpp:916
		uint32_t luKB;

		// BrnResourceAllocator.cpp:917
		uint32_t luB;

		// BrnResourceAllocator.cpp:919
		char[256] lacOutput;

	}
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	{
		// BrnResourceAllocator.cpp:930
		uint32_t luMB;

		// BrnResourceAllocator.cpp:931
		uint32_t luKB;

		// BrnResourceAllocator.cpp:932
		uint32_t luB;

		// BrnResourceAllocator.cpp:934
		char[256] lacOutput;

	}
	rw::Resource::Resource(/* parameters */);
	{
		// BrnResourceAllocator.cpp:943
		const const BaseResourceDescriptor & lBaseDescriptor;

		{
			// BrnResourceAllocator.cpp:948
			CgsDev::StrStream lStrStream;

		}
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnResourceAllocator.cpp:957
		uint32_t luMB;

		// BrnResourceAllocator.cpp:958
		uint32_t luKB;

		// BrnResourceAllocator.cpp:959
		uint32_t luB;

		// BrnResourceAllocator.cpp:961
		char[256] lacOutput;

	}
}

void BrnResource::DefaultLinearAllocator::DoFree(const const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:984
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::DefaultLinearAllocator::DoFreeDisposable(const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:999
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::ResourceDescriptor::GetUninitializedResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetDisposableUninitializedResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetDisposableResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::DoAllocate(const const ResourceDescriptor &  lResourceDescriptor, const char8_t *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnResourceAllocator.cpp:1147
	Resource lRetVal;

	{
		// BrnResourceAllocator.cpp:1096
		int32_t liIndex;

		// BrnResourceAllocator.cpp:1147
		Resource lRetVal;

	}
	rw::IResourceAllocator::Allocate(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1153
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnResourceAllocator.cpp:1105
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1106
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1107
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::Resource::GetUninitializedResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetDisposableUninitializedResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetDisposableResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::DoFree(const const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1184
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1185
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::IResourceAllocator::Free(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1192
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::HeapResourceAllocator::DoFreeDisposable(const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1209
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::LinearResourceAllocator::DoAllocate(const const ResourceDescriptor &  lResourceDescriptor, const char8_t *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnResourceAllocator.cpp:1347
	Resource lRetVal;

	{
		// BrnResourceAllocator.cpp:1288
		int32_t liIndex;

		// BrnResourceAllocator.cpp:1347
		Resource lRetVal;

	}
	rw::IResourceAllocator::Allocate(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1352
		void * lpMemory;

		// BrnResourceAllocator.cpp:1357
		uint32_t luAlignment;

		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		{
			// BrnResourceAllocator.cpp:1358
			CgsDev::StrStream lStrStream;

		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1299
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1298
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1297
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1355
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::LinearResourceAllocator::DoFree(const const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1389
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1391
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::IResourceAllocator::Free(/* parameters */);
	{
		// BrnResourceAllocator.cpp:1397
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::LinearResourceAllocator::DoFreeDisposable(const Resource &  lResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1415
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResourceAllocator.cpp:1414
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void rw::core::filesys::AsyncOp::GetContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::PS3DiskBenchmark::GetTimeMS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::GetPriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::operator delete(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNumeric::Random::RandomInt(int32_t  liMin, int32_t  liMax) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRandom.h:322
		uint32_t luMod;

		// CgsRandom.h:327
		int32_t liResult;

	}
}

void BrnResource::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceDebugComponent.cpp:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceChunk::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::Wait() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::SetReadCount(uint16_t  luReadCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:757
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceFile::SetWriteCount(uint16_t  luWriteCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:786
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceDriver::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:168
		int32_t liIndex;

		// BrnCacheDeviceDriver.cpp:171
		char[132] lacData;

	}
	CacheDeviceChunk::Clear(/* parameters */);
	CacheDeviceChunk::SetNextChunkIndex(/* parameters */);
	CacheDeviceChunk::Clear(/* parameters */);
	CacheDeviceFile::Clear(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:196
		AsyncOp * lpOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::Wait(/* parameters */);
		{
			// BrnCacheDeviceDriver.cpp:199
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:206
		AsyncOp * lpOperator;

		rw::core::filesys::AsyncOp::operator new(/* parameters */);
		rw::core::filesys::AsyncOp::Wait(/* parameters */);
		{
			// BrnCacheDeviceDriver.cpp:209
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::core::filesys::AsyncOp::operator delete(/* parameters */);
	}
	CacheDeviceFile::SetReadCount(/* parameters */);
	CacheDeviceFile::SetWriteCount(/* parameters */);
}

void BrnResource::CacheDeviceDriver::TranslateChunkIndexToFilePos(int32_t  liChunkIndex, int32_t  liChunkOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:540
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.h:541
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceDriver::SeekToChunk(uint16_t  luChunkIndex, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:823
		uint64_t luPosition;

		// BrnCacheDeviceDriver.cpp:827
		uint64_t luNewPos;

		TranslateChunkIndexToFilePos(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:830
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceDriver::ReadChunk(uint16_t  luChunkIndex, void *  lpcData, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::WriteChunk(uint16_t  luChunkIndex, const void *  lpcData, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:881
		uint32_t luAmountWritten;

	}
	{
		// BrnCacheDeviceDriver.cpp:884
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceChunk::SetUsed(bool  lbUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::PushChunk(int32_t  liChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1085
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CacheDeviceChunk::SetNextChunkIndex(/* parameters */);
	CacheDeviceChunk::SetUsed(/* parameters */);
}

void BrnResource::CacheDeviceFile::SetUsed(bool  lbUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::SetNameHash(uint32_t  luNameHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::SetFirstChunk(uint16_t  luFirstChunk) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceChunk::SetDataHash(uint32_t  luHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceChunk::SetFileIndex(uint16_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:623
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceDriver::CreateFile(uint32_t  luHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1105
		int32_t liFileIndex;

		// BrnCacheDeviceDriver.cpp:1121
		int32_t liChunkIndex;

		{
			// BrnCacheDeviceDriver.cpp:1102
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CacheDeviceFile::SetFirstChunk(/* parameters */);
		CacheDeviceChunk::SetDataHash(/* parameters */);
		CacheDeviceChunk::SetFileIndex(/* parameters */);
		CacheDeviceFile::Clear(/* parameters */);
		CacheDeviceFile::SetNameHash(/* parameters */);
		CacheDeviceFile::SetUsed(/* parameters */);
	}
	CacheDeviceChunk::SetUsed(/* parameters */);
	CacheDeviceFile::IsUsed(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceDriver::Resize(void *  fh, uint64_t  newsize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1237
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1239
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::Delete(const char *  filePath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1253
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1255
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::Move(const char *  currentName, const char *  newName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1269
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1271
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::FindBegin(const char *  filePattern, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1285
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1287
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::FindNext(void *  h, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1300
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::DirectoryCreate(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1315
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1317
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::DirectoryRemove(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1330
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1332
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void BrnResource::CacheDeviceDriver::FindEnd(void *  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1345
		AutoFutex lAutoFutex;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1347
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(const const ResourceDescriptor &  lRwDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSmallResourcePS3.h:112
		uint32_t luSize;

		// CgsSmallResourcePS3.h:112
		uint32_t luAlignment;

		{
			// CgsSmallResourcePS3.h:105
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsSmallResourcePS3.h:106
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsSmallResourcePS3.h:107
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedIndexedPool<BrnResource::GameDataEventSlot,96,int16_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Construct(GameDataEventSlot *  lpObjects, int16_t *  lpiIndices, int32_t  liMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:149
		int16_t liIndex;

	}
}

void CgsModule::EventReceiverQueue<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:145
		int liMountResult;

		// BrnGameDataModule.cpp:146
		CellSysCacheParam lCacheParam;

	}
	CgsContainers::FixedIndexedPool<BrnResource::GameDataEventSlot,96,int16_t>::Construct(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Clear(/* parameters */);
	CgsModule::EventReceiverQueue<32768,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	GetDebugAllocator(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventReceiverQueue::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:390
		int32_t liPrevEntryPosition;

		// CgsEventReceiverQueue.h:394
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpPrevBufferEntry;

		// CgsEventReceiverQueue.h:397
		int32_t liNextEntryPosition;

		{
			// CgsEventReceiverQueue.h:391
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			{
			}
		}
		{
			// CgsEventReceiverQueue.h:400
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			// CgsEventReceiverQueue.h:401
			CgsDev::StrStream lStrStream;

			{
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			// CgsEventReceiverQueue.h:407
			CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

		}
	}
}

void CgsModule::BaseEventReceiverQueue::GetNextEvent(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	{
	}
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
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<2048,16>::OutputQueueContents() {
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
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::GetReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(GameDataEventSlot *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(int16_t  liObjectIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:302
		int16_t liIndex;

		{
			// CgsIndexedPool.h:301
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsIndexedPool.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::GameDataIO::GameDataAssetEvent::GetGameDataType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetVehicleGraphicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameDataAssetEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::GetPoolId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::GetGameDataId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::GetHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehicleGraphicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lGraphicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  lAssetType, bool  lbFailiureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::Construct(BaseEventReceiverQueue *  lpReceiverQueue, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetReceiverQueue(BaseEventReceiverQueue *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataId(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetGameDataType(BrnResource::EAssetSet  leAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::SetFailureFlag(bool  lbFailureFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehicleGraphicsResponse::SetVehicleGraphicsObjectHandle(const const ResourceHandle &  lGraphicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetVehiclePhysicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehiclePhysicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lPhysicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehiclePhysicsResponse::SetVehiclePhysicsObjectHandle(const const ResourceHandle &  lPhysicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsSourceEntryValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModuleIO.h:88
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(BaseEventReceiverQueue *  lpEventReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liUserEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSharedIO.h:301
		RegisterVaultRequest lRegisterVaultRequest;

		{
			// CgsAttribSysSharedIO.h:303
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void RegisterVaultRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(BaseEventReceiverQueue *  lpUserReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liEventId, CgsAttribSys::AttribSysIO::EAttribSysVaultType  leVaultType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetTrafficVehicleGraphicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetTrafficVehicleGraphicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lGraphicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetWheelGraphicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWheelGraphicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lGraphicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWheelGraphicsResponse::SetWheelGraphicsObjectHandle(const const ResourceHandle &  lGraphicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetICEMovieResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetICEMovieResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lGraphicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetICEMovieResponse::SetICEMovieObjectHandle(const const ResourceHandle &  lGraphicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetPropPhysicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropPhysicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lPropPhysicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropPhysicsResponse::SetPropPhysicsObjectHandle(const const ResourceHandle &  lPropPhysicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetPropInstancesResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropInstancesResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lPropInstancesHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropInstancesResponse::SetPropInstancesObjectHandle(const const ResourceHandle &  lPropInstancesHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetPropGraphicsListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropGraphicsListResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lPropGraphicsListHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPropGraphicsListResponse::SetPropGraphicsListObjectHandle(const const ResourceHandle &  lPropGraphicsListHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetAIDataResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetAIDataResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lAIDataHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetAIDataResponse::SetAIDataHandle(const const ResourceHandle &  lAIDataHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetTrafficLaneDataResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetTrafficLaneDataResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lTrafficLaneHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetTrafficLaneDataResponse::SetTrafficLaneHandle(const const ResourceHandle &  lTrafficLaneHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetWorldUnitGraphicsResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWorldUnitGraphicsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lWorldUnitGraphicsHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetWorldUnitGraphicsResponse::SetWorldUnitGraphicsHandle(const const ResourceHandle &  lWorldUnitGraphicsHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetPVSResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPVSResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, const const ResourceHandle &  lPVSHandle, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetPVSResponse::SetPVSHandle(const const ResourceHandle &  lPVSHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::UnregisterVault(BaseEventReceiverQueue *  lpEventReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liUserEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSharedIO.h:398
		UnregisterVaultRequest lUnregisterRequest;

	}
}

extern void UnregisterVaultRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::UnregisterVaultRequest::Construct(BaseEventReceiverQueue *  lpUserReceiverQueue, ResourceHandle  lVaultResourceHandle, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessInternalAcquireResponse(InputBuffer *  lpResourceInputBuffer, const AcquireResourceResponse *  lpResponse, InputBuffer *  lpAttribModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3300
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3301
		GameDataEventSlot * lpSlot;

	}
	CgsResource::Events::PoolEvent::GetEventId(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	{
	}
	{
	}
	CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
	CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::UnregisterVault(/* parameters */);
	AddEvent<CgsAttribSys::AttribSysIO::UnregisterVaultRequest>(/* parameters */);
	CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
	CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(/* parameters */);
	{
		// BrnGameDataModule.cpp:3388
		GetICEMovieResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetICEMovieResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetICEMovieResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3470
		GetPVSResponse lResponse;

		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3406
		GetPropInstancesResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetPropInstancesResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetPropInstancesResponse>(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3415
		GetPropGraphicsListResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetPropGraphicsListResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetPropGraphicsListResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3397
		GetPropPhysicsResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetPropPhysicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetPropPhysicsResponse>(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3379
		GetWheelGraphicsResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetWheelGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetWheelGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3433
		GetTrafficLaneDataResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetTrafficLaneDataResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetTrafficLaneDataResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3370
		GetTrafficVehicleGraphicsResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetTrafficVehicleGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetTrafficVehicleGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3341
		CgsAttribSys::AttribSysIO::EAttribSysVaultType leVaultType;

		// BrnGameDataModule.cpp:3344
		char[13] lacUnCompressedId;

		CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
		CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
		CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterVault(/* parameters */);
		CgsAttribSys::AttribSysIO::RegisterVaultRequest::Construct(/* parameters */);
		AddEvent<CgsAttribSys::AttribSysIO::RegisterVaultRequest>(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3455
		CgsDev::StrStream lStrStream;

	}
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GetPVSResponse::Construct(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetPVSResponse>(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	{
		// BrnGameDataModule.cpp:3424
		GetAIDataResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetAIDataResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetAIDataResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3442
		GetWorldUnitGraphicsResponse lResponse;

		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GetWorldUnitGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetWorldUnitGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		// BrnGameDataModule.cpp:3321
		GetVehicleGraphicsResponse lResponse;

		GameDataIO::GetVehicleGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetVehicleGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GetVehicleGraphicsResponse::SetVehicleGraphicsObjectHandle(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
	}
	{
		// BrnGameDataModule.cpp:3328
		GetVehiclePhysicsResponse lResponse;

		GameDataIO::GetVehiclePhysicsResponse::Construct(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetVehiclePhysicsResponse>(/* parameters */);
		GameDataIO::GetVehiclePhysicsResponse::SetVehiclePhysicsObjectHandle(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		// BrnGameDataModule.cpp:3347
		CgsDev::StrStream lStrStream;

	}
	{
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
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
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::InputBuffer::AppendResourceQueue(const ResourceRequestQueue<16384> *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourceModuleIO.h:82
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<32768>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::Clear() {
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

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::RequestInterface<32768>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::DefaultLinearAllocator::DebugWriteXMLStatus(const CgsDev::StrStreamBase &  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:884
		int32_t liIndex;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(const const SmallMemoryDescriptor &  lMainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~SmallResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::HeapResourceAllocator::DebugWriteXMLStatus(const CgsDev::StrStreamBase &  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1052
		Entry::ResourceDescriptor lUsed;

		// BrnResourceAllocator.cpp:1052
		Entry::ResourceDescriptor lFree;

		// BrnResourceAllocator.cpp:1055
		int32_t liIndex;

	}
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
}

void BrnResource::LinearResourceAllocator::DebugWriteXMLStatus(const CgsDev::StrStreamBase &  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.cpp:1263
		Entry::ResourceDescriptor lUsed;

		// BrnResourceAllocator.cpp:1263
		Entry::ResourceDescriptor lFree;

		// BrnResourceAllocator.cpp:1266
		int32_t liIndex;

	}
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
}

void BrnResource::GameDataModule::DebugWriteXMLStatus(const CgsDev::StrStreamBase &  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5984
		MemoryMap * lpMemoryMap;

		// BrnGameDataModule.cpp:5985
		AllocatorList * lpAllocatorList;

		// BrnGameDataModule.cpp:5989
		int32_t liIndex;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnGameDataModule.cpp:5994
		const CreateResourceRequest * lpRequest;

		// BrnGameDataModule.cpp:5995
		ResourceDescriptor lRWDescriptor;

		// BrnGameDataModule.cpp:5997
		Entry::ResourceDescriptor lDescriptor;

		// BrnGameDataModule.cpp:6000
		int32_t liMemTypeIndex;

		CgsMemory::MemoryMapRawResource::GetRequest(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		CgsMemory::MemoryIO::CreateResourceRequest::GetDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
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
		CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:6013
		const CreateAllocatorRequest * lpRequest;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsMemory::MemoryMapLinearAllocator::GetRequest(/* parameters */);
	CgsMemory::MemoryIO::CreateAllocatorRequest::GetSize(/* parameters */);
	{
		// BrnGameDataModule.cpp:6027
		const CreateAllocatorRequest * lpRequest;

		// BrnGameDataModule.cpp:6029
		uint32_t luUsed;

		// BrnGameDataModule.cpp:6029
		uint32_t luFree;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsMemory::MemoryMapHeapAllocator::GetRequest(/* parameters */);
	CgsMemory::MemoryIO::CreateAllocatorRequest::GetSize(/* parameters */);
	{
		// BrnGameDataModule.cpp:6044
		const CreateLinearAllocatorRequest * lpRequest;

		// BrnGameDataModule.cpp:6047
		ResourceDescriptor lRWSize;

		// BrnGameDataModule.cpp:6047
		ResourceDescriptor lRWUsed;

		// BrnGameDataModule.cpp:6047
		ResourceDescriptor lRWFree;

		// BrnGameDataModule.cpp:6052
		Entry::ResourceDescriptor lSize;

		// BrnGameDataModule.cpp:6052
		Entry::ResourceDescriptor lUsed;

		// BrnGameDataModule.cpp:6052
		Entry::ResourceDescriptor lFree;

		// BrnGameDataModule.cpp:6057
		int32_t liMemTypeIndex;

		CgsMemory::MemoryMapRWLinearAllocator::GetRequest(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
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
		CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
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
		CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:6077
		const CreateGeneralAllocatorRequest * lpRequest;

		// BrnGameDataModule.cpp:6078
		ResourceDescriptor lRWSize;

		// BrnGameDataModule.cpp:6081
		Entry::ResourceDescriptor lSize;

		// BrnGameDataModule.cpp:6081
		Entry::ResourceDescriptor lUsed;

		// BrnGameDataModule.cpp:6081
		Entry::ResourceDescriptor lFree;

		// BrnGameDataModule.cpp:6086
		int32_t liMemTypeIndex;

		CgsMemory::MemoryMapRWGeneralAllocator::GetRequest(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		CgsMemory::MemoryIO::CreateGeneralAllocatorRequest::GetDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::CreateFromRWDescriptor(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::ResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void BrnResource::PS3DiskBenchmark::GetTimeUS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::GetFile(int32_t  liFileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:592
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceFile::GetFirstChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::Futex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::AtomicInt(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValue(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:458
		uint64_t nOriginalValue;

	}
}

void BrnResource::CacheDeviceDriver::GetRequiredMemory(const CacheDeviceOptions *  lpCacheOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:516
		int32_t liTotalSize;

	}
}

void CgsContainers::FixedIndexedPool<BrnResource::CacheDeviceHandle,8,int8_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Construct(CacheDeviceHandle *  lpObjects, int8_t *  lpiIndices, int32_t  liMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:149
		int8_t liIndex;

	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::GetPoolSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::CacheDeviceDriver(const char *  lpcDevicePathName, const CacheDeviceOptions *  lpCacheOptions, LinearMalloc *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:94
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:96
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:97
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:98
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:100
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:106
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:107
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:108
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:117
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:118
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:119
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:120
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:121
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnCacheDeviceDriver.cpp:122
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::CacheDeviceDriver::CacheDeviceDriver(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Thread::Futex::Futex(/* parameters */);
	BrnResource::CacheDeviceDriver::GetRequiredMemory(/* parameters */);
	Malloc<BrnResource::CacheDeviceHeaderStart>(/* parameters */);
	Malloc<BrnResource::CacheDeviceHeaderMain>(/* parameters */);
	MallocArray<BrnResource::CacheDeviceFile>(/* parameters */);
	MallocArray<BrnResource::CacheDeviceChunk>(/* parameters */);
	MallocArray<char>(/* parameters */);
	Malloc<BrnResource::CacheDeviceHandlePool>(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsContainers::FixedIndexedPool<BrnResource::CacheDeviceHandle,8,int8_t>::Construct(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceFile::GetReadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::DecReadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:749
		uint16_t luCount;

		{
			// BrnCacheDeviceDriver.h:750
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::CacheDeviceFile::GetWriteCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::DecWriteCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:778
		uint16_t luCount;

		{
			// BrnCacheDeviceDriver.h:779
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Push(CacheDeviceHandle *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::GetObjectIndex(const CacheDeviceHandle *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:221
		int8_t liIndex;

		{
			// CgsIndexedPool.h:222
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::PushIndex(int8_t  liObjectIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:302
		int8_t liIndex;

		{
			// CgsIndexedPool.h:301
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsIndexedPool.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::CacheDeviceDriver::Close(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:443
		AutoFutex lAutoFutex;

		// BrnCacheDeviceDriver.cpp:449
		CacheDeviceHandle * lpHandle;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	CacheDeviceFile::DecReadCount(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Push(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:452
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:453
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:456
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CacheDeviceFile::DecWriteCount(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:447
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:462
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::CacheDeviceFile::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceChunk::GetNextChunkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::ReadFromFile(CacheDeviceHandle *  lpHandle, char *  lpcData, int32_t  liLength, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:524
		CacheDeviceFile * lpFile;

		// BrnCacheDeviceDriver.cpp:541
		int32_t liStartFilePosition;

		// BrnCacheDeviceDriver.cpp:542
		char * lpcStartData;

		// BrnCacheDeviceDriver.cpp:546
		int32_t liFileRemaining;

		// BrnCacheDeviceDriver.cpp:547
		int32_t liToRead;

		// BrnCacheDeviceDriver.cpp:548
		int32_t liDataRemaining;

		// BrnCacheDeviceDriver.cpp:549
		int32_t liNumWholeBlocks;

		// BrnCacheDeviceDriver.cpp:552
		int32_t liIndex;

	}
	rw::core::stdc::Min(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:556
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:521
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:527
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:528
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:608
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:614
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:555
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:538
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:537
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:584
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:583
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:520
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:518
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:519
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceDriver::Read(void *  lpFH, void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:486
		AutoFutex lAutoFutex;

		// BrnCacheDeviceDriver.cpp:493
		CacheDeviceHandle * lpHandle;

		// BrnCacheDeviceDriver.cpp:494
		char * lpcData;

		// BrnCacheDeviceDriver.cpp:495
		int32_t liDataRemaining;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:490
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:499
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:498
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceFile::SetSize(int32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::AddToFile(CacheDeviceHandle *  lpHandle, const char *  lpcData, int32_t  liLength, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:682
		CacheDeviceFile * lpFile;

		// BrnCacheDeviceDriver.cpp:685
		int32_t liFileSize;

		// BrnCacheDeviceDriver.cpp:686
		int32_t liFilePosition;

		// BrnCacheDeviceDriver.cpp:687
		int32_t liFileChunkIndex;

		// BrnCacheDeviceDriver.cpp:688
		uint16_t luGlobalChunkIndex;

		// BrnCacheDeviceDriver.cpp:707
		int32_t liDataToWrite;

		// BrnCacheDeviceDriver.cpp:708
		int32_t liDataRemaining;

		// BrnCacheDeviceDriver.cpp:711
		int32_t liRemainingWholeChunks;

		// BrnCacheDeviceDriver.cpp:712
		int32_t liIndex;

	}
	{
		// BrnCacheDeviceDriver.cpp:678
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CacheDeviceFile::GetSize(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:692
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:764
		int32_t liChunkDataToWrite;

		CacheDeviceChunk::SetDataHash(/* parameters */);
	}
	CacheDeviceFile::SetSize(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:799
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:675
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:677
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:765
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:733
		int32_t liNextChunk;

		CacheDeviceChunk::SetDataHash(/* parameters */);
		CacheDeviceChunk::SetFileIndex(/* parameters */);
	}
	CacheDeviceChunk::SetDataHash(/* parameters */);
	CacheDeviceChunk::SetNextChunkIndex(/* parameters */);
	CacheDeviceChunk::SetUsed(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:753
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:754
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:755
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:756
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:757
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:696
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:695
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:694
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:693
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:691
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:679
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:791
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:790
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:789
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:788
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:787
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:702
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:736
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:673
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:674
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:672
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceDriver::Write(void *  lpFH, const void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:631
		AutoFutex lAutoFutex;

		// BrnCacheDeviceDriver.cpp:639
		CacheDeviceHandle * lpHandle;

		// BrnCacheDeviceDriver.cpp:640
		const char * lpcData;

		// BrnCacheDeviceDriver.cpp:641
		int32_t liDataRemaining;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:645
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:644
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceChunk::IsLastChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::Seek(void *  lpFH, uint64_t  luOffset, int  liWhence, rw::core::filesys::DeviceDriver *  lpParentDevice, void *  lpParentFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:899
		AutoFutex lAutoFutex;

		// BrnCacheDeviceDriver.cpp:903
		CacheDeviceHandle * lpHandle;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:963
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:944
		CgsDev::StrStream lStrStream;

	}
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:904
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:905
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:957
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:906
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:931
		uint16_t luChunk;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:951
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::CacheDeviceDriver::TruncateFile(int32_t  liFileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1164
		uint16_t luNextIndex;

	}
	{
		// BrnCacheDeviceDriver.cpp:1171
		uint16_t luTempNext;

	}
	CacheDeviceFile::SetSize(/* parameters */);
	CacheDeviceChunk::SetDataHash(/* parameters */);
	CacheDeviceChunk::SetNextChunkIndex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1160
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1161
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1165
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:332
		int8_t liIndex;

	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::PopIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:275
		int8_t liNewIndex;

	}
}

void CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::GetNumFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceFile::IncReadCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:741
		uint16_t luCount;

		{
			// BrnCacheDeviceDriver.h:742
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::CacheDeviceFile::IncWriteCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.h:770
		uint16_t luCount;

		{
			// BrnCacheDeviceDriver.h:771
			CgsDev::StrStream lStrStream;

		}
	}
}

void BrnResource::CacheDeviceDriver::OpenFile(int32_t  liFileIndex, bool  lbOpenForWrite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:1209
		CacheDeviceHandle * lpHandle;

	}
	CgsContainers::IndexedPool<BrnResource::CacheDeviceHandle,int8_t>::Pop(/* parameters */);
	CacheDeviceFile::IncReadCount(/* parameters */);
	CacheDeviceFile::IncWriteCount(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1204
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1205
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1210
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CacheDeviceFile::IncReadCount(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:1207
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:1206
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::core::filesys::DeviceDriver::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::GetFileNameHash(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::CacheDeviceDriver::Open(const char *  lpcName, unsigned int  luFlags, rw::core::filesys::Handle **  lppParentDeviceHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCacheDeviceDriver.cpp:288
		AutoFutex lAutoFutex;

		// BrnCacheDeviceDriver.cpp:296
		char[256] lacLocalFileName;

		// BrnCacheDeviceDriver.cpp:317
		char * c;

		// BrnCacheDeviceDriver.cpp:326
		char * lpcEntryName;

		// BrnCacheDeviceDriver.cpp:338
		uint32_t luHash;

		// BrnCacheDeviceDriver.cpp:341
		int32_t liFileIndex;

		// BrnCacheDeviceDriver.cpp:349
		CacheDeviceHandle * lpHandle;

	}
	EA::Thread::AutoFutex::AutoFutex(/* parameters */);
	GetFileNameHash(/* parameters */);
	EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnCacheDeviceDriver.cpp:292
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:373
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:412
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:357
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:364
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnCacheDeviceDriver.cpp:381
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::GetVehicleListResponse::Construct(int32_t  liEventId, const BrnResource::VehicleList *  lpVehicleList, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeVehicleListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGetVehicleListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4321
		GetVehicleListResponse lResponse;

		GameDataIO::GetVehicleListResponse::Construct(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetVehicleListResponse>(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::GetFreeburnChallengeListResponse::Construct(int32_t  liEventId, const ChallengeList *  lpChallengeList, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeFreeburnChallengeListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGetFreeburnChallengeListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4344
		GetFreeburnChallengeListResponse lResponse;

		GameDataIO::GetFreeburnChallengeListResponse::Construct(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetFreeburnChallengeListResponse>(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::GetICEListResponse::Construct(int32_t  liEventId, const BrnResource::ICEList *  lpICEList, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeICEListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGetICEListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4367
		GetICEListResponse lResponse;

		GameDataIO::GetICEListResponse::Construct(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetICEListResponse>(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataIO::GetWheelListResponse::Construct(int32_t  liEventId, const BrnResource::WheelList *  lpWheelList, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::MakeWheelListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGetWheelListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4517
		GetWheelListResponse lResponse;

		GameDataIO::GetWheelListResponse::Construct(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	AddEvent<BrnResource::GameDataIO::GetWheelListResponse>(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsCore::StrCat(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AcquireResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, const char *  lpcResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIOEvents.h:1646
		ID lId;

	}
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::SetResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PostAcquireVehicleAttribsRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5025
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:5026
		char[128] lacResourceName;

	}
	CgsCore::StrCat(/* parameters */);
	{
		// BrnGameDataModule.cpp:5037
		AcquireResourceRequest lAcquireRequest;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:332
		int16_t liIndex;

	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PopIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:275
		int16_t liNewIndex;

	}
}

void CgsResource::Events::BundleLoaderEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetUser(BaseEventReceiverQueue *  lpUser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetEventId(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetPoolId(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(bool  lbLiveUpdateReplace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessSwapOutCollisionWorldRequest(InputBuffer *  lpResourceInputBuffer, const SwapOutCollisionWorldRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5361
		GameDataEventSlot * lpSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Pop(/* parameters */);
	{
		// BrnGameDataModule.cpp:5362
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	{
		// BrnGameDataModule.cpp:5382
		UnloadBundleRequest lUnloadBundleRequest;

		{
			// BrnGameDataModule.cpp:5381
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5356
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5389
		InvalidatePoolRequest lInvalidPoolRequest;

		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::PoolEvent::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessSwapInCollisionWorldRequest(InputBuffer *  lpResourceInputBuffer, const SwapInCollisionWorldRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5415
		GameDataEventSlot * lpSlot;

		// BrnGameDataModule.cpp:5420
		sys_addr_t lAddr;

		// BrnGameDataModule.cpp:5421
		uintptr_t luBlockIndex;

		// BrnGameDataModule.cpp:5446
		ValidatePoolRequest lValidPoolRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Pop(/* parameters */);
	{
		// BrnGameDataModule.cpp:5423
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5424
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::PoolEvent::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5416
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	sys_memory_allocate(/* parameters */);
	{
		// BrnGameDataModule.cpp:5430
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::LoadBundleRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, bool  lbLiveUpdateReplace, bool  lbAllowFailiure, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetAllowFailiure(bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::SetUseHDCache(bool  lbUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareFreeburnChallengeList(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:592
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:594
		int32_t liEventId;

		// BrnGameDataModule.cpp:595
		int32_t liEventSize;

		// BrnGameDataModule.cpp:598
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:643
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:674
		AcquireResourceRequest lRequest;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:700
		const AcquireResourceResponse * lpAquireResourceResponse;

		// BrnGameDataModule.cpp:707
		ResourcePtr<BrnResource::ChallengeListResource> lChallengeListPtr;

		// BrnGameDataModule.cpp:709
		DebugDatabaseInterface lInterface;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:696
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnGameDataModule.cpp:703
			CgsDev::StrStream lStrStream;

		}
		CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::ResourcePtr(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::operator=(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameDataModule.cpp:611
		LoadBundleRequest lRequest;

		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:617
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareVehicleList(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:762
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:764
		int32_t liEventId;

		// BrnGameDataModule.cpp:765
		int32_t liEventSize;

		// BrnGameDataModule.cpp:768
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:802
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:812
		AcquireResourceRequest lRequest;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:838
		const AcquireResourceResponse * lpAquireResourceResponse;

		// BrnGameDataModule.cpp:845
		ResourcePtr<BrnResource::VehicleListResource> lVehicleListPtr;

		// BrnGameDataModule.cpp:847
		DebugDatabaseInterface lInterface;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:834
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnGameDataModule.cpp:841
			CgsDev::StrStream lStrStream;

		}
		CgsResource::ResourcePtr<BrnResource::VehicleListResource>::ResourcePtr(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		CgsResource::ResourceHandle::Construct(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator=(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameDataModule.cpp:781
		LoadBundleRequest lRequest;

		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator*(/* parameters */);
	operator<<(/* parameters */);
	operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::PrepareHudMessages(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:905
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:906
		int32_t liEventId;

		// BrnGameDataModule.cpp:907
		int32_t liEventSize;

		// BrnGameDataModule.cpp:910
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:976
		const AcquireResourceResponse * lpAquireResourceResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:974
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:952
		AcquireResourceRequest lRequest;

		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:944
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:923
		LoadBundleRequest lRequest;

		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::PreparePopups(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1025
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:1026
		int32_t liEventId;

		// BrnGameDataModule.cpp:1027
		int32_t liEventSize;

		// BrnGameDataModule.cpp:1030
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:1095
		const AcquireResourceResponse * lpAquireResourceResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:1093
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:1072
		AcquireResourceRequest lRequest;

		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1064
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1043
		LoadBundleRequest lRequest;

		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1096
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ResourcePtr(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareICEList(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1147
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:1149
		int32_t liEventId;

		// BrnGameDataModule.cpp:1150
		int32_t liEventSize;

		// BrnGameDataModule.cpp:1153
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:1186
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1193
		AcquireResourceRequest lRequest;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1217
		const AcquireResourceResponse * lpAquireResourceResponse;

		// BrnGameDataModule.cpp:1222
		ICEList::ICETakeDictionaryResourcePtr lICEPtr;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:1214
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsResource::Events::AcquireResourceResponse::GetHandle(/* parameters */);
		CgsResource::ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ResourcePtr(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameDataModule.cpp:1166
		LoadBundleRequest lRequest;

		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::ResourcePtr<BrnResource::WheelListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::WheelListResource>::operator=(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareWheelList(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1270
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:1272
		int32_t liEventId;

		// BrnGameDataModule.cpp:1273
		int32_t liEventSize;

		// BrnGameDataModule.cpp:1276
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:1310
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1320
		AcquireResourceRequest lRequest;

		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:1346
		const AcquireResourceResponse * lpAcquireResourceResponse;

		// BrnGameDataModule.cpp:1353
		ResourcePtr<BrnResource::WheelListResource> lWheelListPtr;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:1342
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			// BrnGameDataModule.cpp:1349
			CgsDev::StrStream lStrStream;

		}
		CgsResource::ResourcePtr<BrnResource::WheelListResource>::ResourcePtr(/* parameters */);
		CgsResource::ResourcePtr<BrnResource::WheelListResource>::operator=(/* parameters */);
		CgsResource::BaseResourcePtr::Reset(/* parameters */);
		~ResourcePtr(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnGameDataModule.cpp:1289
		LoadBundleRequest lRequest;

		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterSchema(BaseEventReceiverQueue *  lpEventReceiverQueue, void *  lpSchemaVltData, int32_t  liSchemaVltDataSize, void *  lpSchemaBinData, int32_t  liSchemaBinDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSharedIO.h:341
		RegisterSchemaRequest lRegisterSchemaRequest;

	}
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::Construct(BaseEventReceiverQueue *  lpUserReceiverQueue, void *  lpSchemaVltData, int32_t  liSchemaVltDataSize, void *  lpSchemaBinData, int32_t  liSchemaBinDataSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::PrepareAttribSysSchemaResource(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, InputBuffer *  lpAttribModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1413
		InputBuffer * lpResourceInputBuffer;

	}
	CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
	CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::RegisterSchema(/* parameters */);
	CgsAttribSys::AttribSysIO::RegisterSchemaRequest::Construct(/* parameters */);
	AddEvent<CgsAttribSys::AttribSysIO::RegisterSchemaRequest>(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void ResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseVariableEventQueue::BaseVariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Clear() {
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

void CgsMemory::MemoryMap::GetNumBanks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetBank(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryMap.h:175
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::MemoryIO::CreateBankRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModuleIO.h:883
		int32_t liResourceType;

	}
}

void CgsMemory::MemoryIO::MemoryRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetBankName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetBankId(int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetParentBankId(int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetAllowFragmentation(bool  lbAllowFragmentation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetBankSize(int32_t  liResourceType, uint32_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetBlockCount(int32_t  liResourceType, uint32_t  liCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateBankRequest::SetParams(const CgsMemory::MemoryBank::Params *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateBank(const const CreateBankRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::CreateBanks(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2176
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2181
		ResourceRequestQueue<16384> lRequests;

		// BrnGameDataModule.cpp:2182
		const MemoryMapBank * lpMap;

		// BrnGameDataModule.cpp:2183
		const CgsMemory::MemoryBank::Params * lpParams;

		// BrnGameDataModule.cpp:2184
		CreateBankRequest lCreateBankRequest;

		// BrnGameDataModule.cpp:2190
		int32_t liIndex;

		// BrnGameDataModule.cpp:2193
		int32_t liBankCount;

		CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
		CgsMemory::MemoryMap::GetNumBanks(/* parameters */);
		CgsMemory::MemoryMap::GetBank(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::Construct(/* parameters */);
		CgsMemory::MemoryMapBank::GetParams(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetBankName(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetBankId(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetAllowFragmentation(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetParentBankId(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetBlockCount(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetBankSize(/* parameters */);
		CgsMemory::MemoryIO::CreateBankRequest::SetParams(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateBank(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	}
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumPools() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetPool(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryMap.h:188
		CgsDev::StrStream lStrStream;

	}
}

void CgsMemory::MemoryMapPool::GetRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::GetPoolId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreatePool(const const CreatePoolRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::CreatePools(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2254
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2259
		ResourceRequestQueue<16384> lRequests;

		// BrnGameDataModule.cpp:2260
		CreatePoolRequest lRequest;

		// BrnGameDataModule.cpp:2266
		int32_t liIndex;

		// BrnGameDataModule.cpp:2269
		int32_t liPoolCount;

		CreatePoolRequest(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
		CgsModule::VariableEventQueue<16384,16>::Clear(/* parameters */);
		CgsMemory::MemoryMap::GetNumPools(/* parameters */);
		CgsResource::Events::PoolEvent::GetPoolId(/* parameters */);
		CgsResource::Events::PoolEvent::SetUser(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreatePool(/* parameters */);
		CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
		CgsMemory::MemoryMap::GetPool(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
		~CreatePoolRequest(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

extern void CreateResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MemoryRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(BaseEventReceiverQueue *  lpReceiverQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::SetEventId(int32_t  liId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateResource(const const CreateResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreateResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumRawResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::SetLinearAllocator(LinearMalloc *  lpLinearAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateAllocator(const const CreateAllocatorRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumLinearAllocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateAllocatorRequest::SetHeapAllocator(HeapMalloc *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumHeapAllocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateLinearAllocatorRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateRwLinearAllocator(const const CreateLinearAllocatorRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorRequest::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreateLinearAllocatorRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumRWLinearAllocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateGeneralAllocatorRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateRwGeneralAllocator(const const CreateGeneralAllocatorRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreateGeneralAllocatorRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryMap::GetNumRWGeneralAllocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceResponse::GetResource(Resource *  lpResource, ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateLinearAllocatorResponse::GetAllocator(rw::LinearResourceAllocator **  lppAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateGeneralAllocatorResponse::GetAllocator(rw::core::GeneralResourceAllocator **  lppAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::CreateAllocators(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2337
		InputBuffer * lpResourceInputBuffer;

		CreateIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2346
		ResourceRequestQueue<16384> lRequests;

		// BrnGameDataModule.cpp:2350
		int32_t liIndex;

		CgsModule::VariableEventQueue<16384,16>::Construct(/* parameters */);
		CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	}
	DestroyIOBuffer<CgsResource::ResourceIO::InputBuffer>(/* parameters */);
	{
		// BrnGameDataModule.cpp:2441
		int32_t liEventType;

		// BrnGameDataModule.cpp:2442
		int32_t liEventSize;

		// BrnGameDataModule.cpp:2443
		const CgsModule::Event * lpEvent;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
		{
			// BrnGameDataModule.cpp:2489
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2419
		CreateGeneralAllocatorRequest lRequest;

		CreateGeneralAllocatorRequest(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateRwGeneralAllocator(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetEventId(/* parameters */);
		~CreateGeneralAllocatorRequest(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2405
		CreateLinearAllocatorRequest lRequest;

		CreateLinearAllocatorRequest(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateRwLinearAllocator(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetEventId(/* parameters */);
		~CreateLinearAllocatorRequest(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2354
		CreateResourceRequest lRequest;

		CreateResourceRequest(/* parameters */);
		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateResource(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetEventId(/* parameters */);
		~CreateResourceRequest(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2388
		CreateAllocatorRequest lRequest;

		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateAllocator(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetEventId(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(/* parameters */);
		CgsMemory::MemoryIO::CreateAllocatorRequest::SetHeapAllocator(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2371
		CreateAllocatorRequest lRequest;

		CgsResource::ResourceIO::ResourceRequestQueue<16384>::CreateAllocator(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetEventId(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::SetReceiverQueue(/* parameters */);
		CgsMemory::MemoryIO::CreateAllocatorRequest::SetLinearAllocator(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2469
		const CreateLinearAllocatorResponse * lpResponse;

		CgsMemory::MemoryIO::CreateLinearAllocatorResponse::GetAllocator(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2455
		const CreateResourceResponse * lpResponse;

		CgsMemory::MemoryIO::MemoryEvent::GetEventId(/* parameters */);
		CgsMemory::MemoryIO::CreateResourceResponse::GetResource(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:2479
		const CreateGeneralAllocatorResponse * lpResponse;

		CgsMemory::MemoryIO::CreateGeneralAllocatorResponse::GetAllocator(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<32768,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetLinearAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:132
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:133
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:134
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::AllocatorList::GetHeapAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:141
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:142
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:143
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::OutputBuffer::SetAllocatorList(const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:265
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::OutputBuffer::SetFileSystemStatusInterface(const FileSystemStatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:179
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataModule::Prepare(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameDataIO::OutputBuffer::SetFileSystemStatusInterface(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// BrnGameDataModule.cpp:394
		InputBuffer * lpAttribModuleInputBuffer;

		DestroyIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(/* parameters */);
	}
	GameDataIO::OutputBuffer::SetAllocatorList(/* parameters */);
	CgsModule::EventReceiverQueue<32768,16>::Prepare(/* parameters */);
	GameDataIO::AllocatorList::GetLinearAllocator(/* parameters */);
	GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GameDataIO::AllocatorList::GetHeapAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CreateIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(/* parameters */);
	DestroyIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::GetGameDataEventSlot(const GameDataAssetEvent *  lpRequest, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2750
		GameDataEventSlot * lpEventSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	GameDataIO::GameDataEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
	GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Pop(/* parameters */);
	{
		// BrnGameDataModule.cpp:2757
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::BundleLoaderEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::UnloadGameDataResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, BrnResource::EAssetSet  leAssetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessInternalUnloadResponse(InputBuffer *  lpResourceInputBuffer, const UnloadBundleResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3524
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3525
		GameDataEventSlot * lpSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3567
		UnloadGameDataResponse lResponse;

		GameDataIO::UnloadGameDataResponse::Construct(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		AddEvent<BrnResource::GameDataIO::UnloadGameDataResponse>(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3531
		InvalidatePoolRequest lInvalidPoolRequest;

		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::PoolEvent::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3541
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::InvalidatePoolResponse::GetResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SwapOutCollisionWorldResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameDataEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::InvalidatePoolResponse::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::InvalidatePoolResponse::GetDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::SwapOutCollisionWorldResponse::Construct(int32_t  liEventId, const const ResourceHandle::Resource &  lResource, const const Entry::ResourceDescriptor &  lDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~SwapOutCollisionWorldResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessInternalInvalidateResponse(InputBuffer *  lpResourceInputBuffer, const InvalidatePoolResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3593
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3594
		GameDataEventSlot * lpSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3595
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3596
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3601
		SwapOutCollisionWorldResponse lResponse;

		// BrnGameDataModule.cpp:3615
		uintptr_t luMemStart;

		// BrnGameDataModule.cpp:3616
		uintptr_t luMemSize;

		// BrnGameDataModule.cpp:3617
		uintptr_t lu1MB;

		// BrnGameDataModule.cpp:3624
		uintptr_t luNewMemStart;

		// BrnGameDataModule.cpp:3635
		uintptr_t luBlockIndex;

		// BrnGameDataModule.cpp:3636
		uintptr_t luNumBlocks;

		SwapOutCollisionWorldResponse(/* parameters */);
		CgsResource::Events::InvalidatePoolResponse::GetDescriptor(/* parameters */);
		GameDataIO::SwapOutCollisionWorldResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::SwapOutCollisionWorldResponse>(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		CgsResource::Events::InvalidatePoolResponse::GetResource(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		sys_memory_free(/* parameters */);
		~SwapOutCollisionWorldResponse(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3650
		InvalidatePoolRequest lInvalidPoolRequest;

		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::PoolEvent::Construct(/* parameters */);
		CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnResource::GameDataIO::SwapInCollisionWorldResponse::Construct(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessInternalValidateResponse(InputBuffer *  lpResourceInputBuffer, const ValidatePoolResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3674
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3675
		GameDataEventSlot * lpSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3677
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3685
		SwapInCollisionWorldResponse lResponse;

		GameDataIO::SwapInCollisionWorldResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::SwapInCollisionWorldResponse>(/* parameters */);
		CgsModule::BaseEventReceiverQueue::AddEvent(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3693
		LoadBundleRequest lLoadBundleRequest;

		{
			// BrnGameDataModule.cpp:3692
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
		CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsAttribSys::AttribSysIO::VaultRegisteredResponse::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetVehicleAttribsResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GetSurfaceListResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessAttribSysRegisterVaultResponse(InputBuffer *  lpResourceInputBuffer, const VaultRegisteredResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3717
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3718
		GameDataEventSlot * lpSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3727
		GetVehicleAttribsResponse lResponse;

		GameDataIO::GetVehicleAttribsResponse::Construct(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetVehicleAttribsResponse>(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3739
		GetSurfaceListResponse lResponse;

		GameDataIO::GetSurfaceListResponse::Construct(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetSurfaceListResponse>(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsAttribSys::AttribSysIO::VaultUnregisteredResponse::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessUnregisterVehicleAttribsResponse(InputBuffer *  lpResourceInputBuffer, const VaultUnregisteredResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3782
		int16_t liSlotIndex;

		// BrnGameDataModule.cpp:3783
		GameDataEventSlot * lpSlot;

		// BrnGameDataModule.cpp:3784
		GameDataAssetEvent * lpEvent;

		// BrnGameDataModule.cpp:3785
		BrnResource::EAssetSet leBundleAssetSet;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:3805
		char[13] lacString;

		// BrnGameDataModule.cpp:3806
		char[128] lacResourceName;

		{
			// BrnGameDataModule.cpp:3819
			UnloadBundleRequest lUnloadBundleRequest;

			CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
			GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
			CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
			CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
			CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
			CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
			CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
			CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void std::strstr(char *  _Str1, const char *  _Str2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleList::GetVehicleData(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:207
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleIndex(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:230
		int32_t liIndex;

	}
}

void BrnResource::VehicleList::GetVehicleData(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// VehicleList.h:191
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:562
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::VehicleListEntry::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntry::GetAudioData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::VehicleListEntryAudioData::GetExhaustName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Vehicles::Engines::EngineControl::GenerateEngineBundlePath(const char *  lpcEngineName, char *  lacDstPath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEngineControl.h:265
		ID lResourceID;

	}
}

void CgsResource::ID::GetHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::GameDataAssetEvent::GetFailureFlag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessLoadVehicleRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3862
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:3863
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:3879
		BrnResource::EAssetSet leBundleAssetSet;

		// BrnGameDataModule.cpp:3914
		LoadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:3871
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:3887
		char[13] lacEngineName;

		// BrnGameDataModule.cpp:3890
		CgsID lVehicleID;

		// BrnGameDataModule.cpp:3892
		const VehicleListEntry * lpVehicleListEntry;

		std(/* parameters */);
		VehicleList::GetVehicleData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnSound::Vehicles::Engines::EngineControl::GenerateEngineBundlePath(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsResource::ID::Construct(/* parameters */);
	VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadWheelRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3941
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:3951
		char[128] lacBundleName;

		// BrnGameDataModule.cpp:3957
		LoadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3946
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadTrafficVehicleRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3981
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:3982
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4002
		LoadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3990
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadPropPhysicsRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4057
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4055
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessLoadPropInstancesRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4081
		const uint32_t KU_STRING_INDEX_OF_ZONE_NUMBER;

		// BrnGameDataModule.cpp:4082
		const uint32_t KU_FILENAME_BUFFER_SIZE;

		// BrnGameDataModule.cpp:4083
		char[13] lacResourceName;

		// BrnGameDataModule.cpp:4084
		char[100] lacFilename;

		// BrnGameDataModule.cpp:4085
		CgsDev::StrStream lFilenameStream;

		// BrnGameDataModule.cpp:4094
		uint32_t luZoneId;

		// BrnGameDataModule.cpp:4105
		LoadBundleRequest lLoadBundleRequest;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4087
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	std(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadTrafficLanesRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4128
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4126
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadAILanesRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4156
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4154
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadWorldUnitRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4182
		char[13] lacString;

		// BrnGameDataModule.cpp:4183
		char[128] lacFileName;

		// BrnGameDataModule.cpp:4185
		LoadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4194
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadSurfaceListRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4225
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4223
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadWorldCollisionRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4267
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4264
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessLoadPVSRequest(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4295
		LoadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:4293
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::CompareHashes32(const char *  lcp4ByteCharArray0, const char *  lcp4ByteCharArray1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::CompareHashes64(const char *  lcp8ByteCharArray0, const char *  lcp8ByteCharArray1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessLoadGameDataEvent(InputBuffer *  lpResourceInputBuffer, const LoadGameDataEvent *  lpRequest, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2797
		char[13] lacString;

		// BrnGameDataModule.cpp:2798
		GameDataEventSlot * lpEventSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		// BrnGameDataModule.cpp:2883
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		// BrnGameDataModule.cpp:2837
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		// BrnGameDataModule.cpp:2871
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CompareHashes64(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		// BrnGameDataModule.cpp:2852
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetPropPhysicsRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4392
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4397
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetPropInstancesRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4422
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4427
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetSurfaceListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4453
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetPropGraphicsListRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4488
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4493
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetICEMovieRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4544
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4549
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::VehicleListEntryAudioData::GetEngineName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGetVehicleRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4572
		GameDataEventSlot * lpSlot;

		// BrnGameDataModule.cpp:4577
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:4589
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4672
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:4582
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4645
		GameDataAssetEvent lResponse;

		GameDataIO::GameDataAssetEvent::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GameDataAssetEvent>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
	{
		// BrnGameDataModule.cpp:4620
		char[13] lacEngineName;

		// BrnGameDataModule.cpp:4623
		CgsID lVehicleID;

		// BrnGameDataModule.cpp:4625
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGameDataModule.cpp:4635
		LoadBundleRequest lLoadBundleRequest;

		std(/* parameters */);
		VehicleList::GetVehicleData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnSound::Vehicles::Engines::EngineControl::GenerateEngineBundlePath(/* parameters */);
	CgsResource::Events::LoadBundleRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetWheelRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4695
		char[13] lacWheelID;

		// BrnGameDataModule.cpp:4704
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4713
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4700
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetTrafficVehicleRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4732
		char[13] lacVehicleID;

		// BrnGameDataModule.cpp:4733
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4748
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4742
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetTrafficLanesRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4772
		AcquireResourceRequest lAcquireRequest;

	}
	{
		// BrnGameDataModule.cpp:4770
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetAILanesRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4800
		AcquireResourceRequest lAcquireRequest;

	}
	{
		// BrnGameDataModule.cpp:4798
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetWorldUnitRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4826
		char[13] lacString;

		// BrnGameDataModule.cpp:4827
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4829
		AcquireResourceRequest lAcquireRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4835
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetWorldCollisionRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4868
		AcquireResourceRequest lAcquireRequest;

	}
	{
		// BrnGameDataModule.cpp:4866
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4865
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetPVSRequest(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4897
		AcquireResourceRequest lAcquireRequest;

	}
	{
		// BrnGameDataModule.cpp:4895
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsResource::Events::LoadBundleResponse::GetResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::LoadWorldCollisionResponse::Construct(int32_t  liEventId, int32_t  liPoolId, CgsID  lAssetId, bool  lbFailed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessInternalLoadBundleResponse(InputBuffer *  lpResourceInputBuffer, const LoadBundleResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:3116
		ResourceHandle K_NULL_HANDLE;

		// BrnGameDataModule.cpp:3120
		int32_t liSlotIndex;

		// BrnGameDataModule.cpp:3121
		GameDataEventSlot * lpSlot;

	}
	CgsResource::Events::BundleLoaderEvent::GetEventId(/* parameters */);
	{
		// BrnGameDataModule.cpp:3134
		GetVehicleGraphicsResponse lResponse;

		GameDataIO::GetVehicleGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetVehicleGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3264
		SwapInCollisionWorldResponse lResponse;

		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3166
		GetTrafficVehicleGraphicsResponse lResponse;

		GameDataIO::GetTrafficVehicleGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetTrafficVehicleGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3210
		LoadWorldCollisionResponse lResponse;

		GameDataIO::LoadWorldCollisionResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::LoadWorldCollisionResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3196
		GetWorldUnitGraphicsResponse lResponse;

		GameDataIO::GetWorldUnitGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetWorldUnitGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3150
		GetWheelGraphicsResponse lResponse;

		GameDataIO::GetWheelGraphicsResponse::Construct(/* parameters */);
		AddEvent<BrnResource::GameDataIO::GetWheelGraphicsResponse>(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetFailureFlag(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataType(/* parameters */);
		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetPoolId(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetGameDataId(/* parameters */);
		GameDataIO::GameDataAssetEvent::SetGameDataId(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::PushIndex(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3228
		LoadICEMovieResponse lResponse;

		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		AddEvent<BrnResource::GameDataIO::LoadICEMovieResponse>(/* parameters */);
		CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::Push(/* parameters */);
	}
	GameDataIO::SwapInCollisionWorldResponse::Construct(/* parameters */);
	AddEvent<BrnResource::GameDataIO::SwapInCollisionWorldResponse>(/* parameters */);
	GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
	GameDataIO::GameDataEvent::GetEventId(/* parameters */);
	GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3183
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3254
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3240
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3247
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3176
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3227
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:3206
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessGetGameDataEvent(InputBuffer *  lpResourceInputBuffer, const GetGameDataEvent *  lpRequest, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2997
		char[13] lacString;

		// BrnGameDataModule.cpp:2998
		GameDataEventSlot * lpEventSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes64(/* parameters */);
	CompareHashes32(/* parameters */);
}

void BrnResource::GameDataModule::ProcessUnloadVehicleRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:4924
		char[13] lacString;

		// BrnGameDataModule.cpp:4925
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:4949
		BrnResource::EAssetSet leBundleAssetSet;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:4934
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetGameDataType(/* parameters */);
	{
		// BrnGameDataModule.cpp:4962
		char[13] lacEngineName;

		// BrnGameDataModule.cpp:4965
		CgsID lVehicleID;

		// BrnGameDataModule.cpp:4967
		const VehicleListEntry * lpVehicleListEntry;

		// BrnGameDataModule.cpp:4979
		UnloadBundleRequest lLoadBundleRequest;

		std(/* parameters */);
		VehicleList::GetVehicleData(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:4999
		UnloadBundleRequest lLoadBundleRequest;

		CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
		GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
		CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	VehicleListEntry::GetAudioData(/* parameters */);
	BrnSound::Vehicles::Engines::EngineControl::GenerateEngineBundlePath(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	BrnSound::Vehicles::Engines::EngineControl::GenerateEngineBundlePath(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VehicleList::GetVehicleData(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadWheelRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5069
		char[13] lacString;

		// BrnGameDataModule.cpp:5070
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:5082
		BrnResource::EAssetSet leBundleAssetSet;

		// BrnGameDataModule.cpp:5091
		UnloadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5079
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadTrafficVehicleRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5113
		char[13] lacString;

		// BrnGameDataModule.cpp:5114
		char[128] lacResourceName;

		// BrnGameDataModule.cpp:5129
		BrnResource::EAssetSet leBundleAssetSet;

		// BrnGameDataModule.cpp:5138
		UnloadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5123
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadTrafficLanesRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5162
		UnloadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:5160
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadAILanesRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5190
		UnloadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:5188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadPropInstancesRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5216
		const uint32_t KU_STRING_INDEX_OF_ZONE_NUMBER;

		// BrnGameDataModule.cpp:5217
		const uint32_t KU_FILENAME_BUFFER_SIZE;

		// BrnGameDataModule.cpp:5218
		char[13] lacResourceName;

		// BrnGameDataModule.cpp:5219
		char[100] lacFilename;

		// BrnGameDataModule.cpp:5220
		CgsDev::StrStream lFilenameStream;

		// BrnGameDataModule.cpp:5224
		UnloadBundleRequest lUnloadBundleRequest;

		// BrnGameDataModule.cpp:5234
		uint32_t luZoneId;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	std(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadWorldUnitRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5263
		char[13] lacString;

		// BrnGameDataModule.cpp:5264
		char[128] lacFileName;

		// BrnGameDataModule.cpp:5266
		UnloadBundleRequest lLoadBundleRequest;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadWorldCollisionRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5304
		UnloadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:5302
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnGameDataModule.cpp:5301
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadPVSRequest(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventType, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:5332
		UnloadBundleRequest lLoadBundleRequest;

	}
	{
		// BrnGameDataModule.cpp:5330
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	GameDataIO::GameDataAssetEvent::GetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::Construct(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::GameDataModule::ProcessUnloadGameDataEvent(InputBuffer *  lpResourceInputBuffer, const UnloadGameDataEvent *  lpRequest, int32_t  liEventSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2906
		char[13] lacString;

		// BrnGameDataModule.cpp:2907
		GameDataEventSlot * lpEventSlot;

	}
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::GetObjectIndex(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CompareHashes64(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	CompareHashes32(/* parameters */);
	{
		// BrnGameDataModule.cpp:2952
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnResource::DLCManager::GetDLCVersion() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::CheckDLCVersionResponse::Construct(int32_t  liEventId, int32_t  liDLCVersion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::ProcessGameDataEvent(InputBuffer *  lpResourceInputBuffer, const GameDataEvent *  lpRequest, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:2720
		const CheckDLCVersionRequest * lpDLCRequest;

		// BrnGameDataModule.cpp:2721
		CheckDLCVersionResponse lResponse;

		GameDataIO::GameDataEvent::GetReceiverQueue(/* parameters */);
		GameDataIO::CheckDLCVersionResponse::Construct(/* parameters */);
		GameDataIO::GameDataEvent::GetEventId(/* parameters */);
		AddEvent<BrnResource::GameDataIO::CheckDLCVersionResponse>(/* parameters */);
		GameDataIO::GameDataEvent::SetEventId(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::DebugIsIndexFree(int16_t  liTestIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:376
		int16_t liIndex;

	}
}

void BrnResource::GameDataIO::RequestInterface<32768>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void BrnResource::GameDataIO::InputBuffer::GetAttribSysRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModuleIO.h:233
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<32768>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<2048,16>::Append<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataModule.cpp:1659
		const CgsModule::Event * lpEvent;

		// BrnGameDataModule.cpp:1660
		int32_t liEventId;

		// BrnGameDataModule.cpp:1661
		int32_t liEventSize;

		// BrnGameDataModule.cpp:1663
		BrnResource::GameDataModule::EUpdateResult leResult;

		// BrnGameDataModule.cpp:1666
		bool _lbDumpAllocatorList;

		// BrnGameDataModule.cpp:1674
		bool _lbDumpUsedSlotsList;

		// BrnGameDataModule.cpp:1690
		InputBuffer * lpAttribModuleInputBuffer;

		// BrnGameDataModule.cpp:1691
		InputBuffer * lpResourceInputBuffer;

	}
	{
		// BrnGameDataModule.cpp:1677
		int16_t liFreeIndex;

	}
	CreateIOBuffer<CgsAttribSys::AttribSysIO::InputBuffer>(/* parameters */);
	GameDataIO::OutputBuffer::SetAllocatorList(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
	{
	}
	GameDataIO::InputBuffer::GetAttribSysRequestInterface(/* parameters */);
	AppendRequestInterface<32768>(/* parameters */);
	Append<32768>(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	CgsContainers::IndexedPool<BrnResource::GameDataEventSlot,int16_t>::DebugIsIndexFree(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	GameDataIO::OutputBuffer::SetFileSystemStatusInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsModule::VariableEventQueue<32768,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::SPLICE_TYPE_UNKNOWN = -1;

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::shiftpattern::DownDisengageFallRpm = -3743120372445450822;

Attrib::Hash::shiftpattern::DownEngageFallRpm = -4258300457539934678;

Attrib::Hash::shiftpattern::DownEngageRiseRpm = -4567217510970770823;

Attrib::Hash::shiftpattern::LfoGainAmplitude1stGear = -491304367065131778;

Attrib::Hash::shiftpattern::LfoGainAmplitude2ndGear = -4169810955381153638;

Attrib::Hash::shiftpattern::LfoGainAmplitude3rdGear = -6365614712587543868;

Attrib::Hash::shiftpattern::LfoGainAmplitude5thGear = -180313354515748695;

Attrib::Hash::shiftpattern::LfoGainAmplitude6thGear = -1922836496243050423;

Attrib::Hash::shiftpattern::LfoGainFrequency = -3877682399640069244;

Attrib::Hash::shiftpattern::LfoRpmAmplitude1stGear = -1450072396061286816;

Attrib::Hash::shiftpattern::LfoRpmAmplitude3rdGear = -3951639323998511472;

Attrib::Hash::shiftpattern::LfoRpmAmplitude5thGear = -2321939528624338931;

Attrib::Hash::shiftpattern::LfoRpmAmplitude6thGear = -2882830219953496469;

Attrib::Hash::shiftpattern::LfoRpmFrequency = -1691697203728587434;

Attrib::Hash::shiftpattern::UpDisengageFallCurve = -4427986807344544271;

Attrib::Hash::shiftpattern::UpDisengageFallRpm = -1872743778125432859;

Attrib::Hash::shiftpattern::UpDisengageFallTime = -1971275184228644745;

Attrib::Hash::shiftpattern::UpEngageAttackGain = -3412491544764394952;

Attrib::Hash::shiftpattern::UpEngageCurve = -1735224275916828060;

Attrib::Hash::shiftpattern::UpEngageTime = -3623590946889933895;

Attrib::Hash::burnoutglobaldata::EaTrax = -3928707850451763780;

Attrib::Hash::burnoutglobaldata::FatalFlagEnum = -1998159337474592529;

Attrib::Hash::burnoutglobaldata::MaterialTypeEnum = -2716257156762056581;

Attrib::Hash::burnoutglobaldata::mPassbyBins = -4188795827779376598;

Attrib::Hash::burnoutglobaldata::mPresentationActions = -3695537172128070359;

Attrib::Hash::burnoutglobaldata::NumShiftPatterns = -5246617198867624784;

Attrib::Hash::burnoutglobaldata::OrientationEnum = -6791005438007148636;

Attrib::Hash::burnoutglobaldata::ReverbSettings = -1487269786437321408;

Attrib::Hash::burnoutglobaldata::ReverbTypes = -4882948758934672803;

Attrib::Hash::burnoutglobaldata::SampleTags = -6421355425626342460;

Attrib::Hash::burnoutglobaldata::ShiftPatterns = -8770309864078353478;

Attrib::Hash::burnoutglobaldata::StreamMappings = -8414824317506067834;

Attrib::Hash::burnoutglobaldata::StreamSettings = -4887161515125358683;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::globalenginedata::RearRotationMatrix = -5782479789567273175;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

Attrib::ClassName::shiftpattern = -1470906390163102669;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnResource::KAC_CACHEFILEMAGICNUMBER = "CACH";

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

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

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

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

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

