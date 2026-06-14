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

struct cParticleEmitter;

// Declaration
struct LoadingScriptedState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

}

struct SpliceSample;

void EA::Allocator::ICoreAllocator::~ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Allocator::ICoreAllocator::~ICoreAllocator(None) {
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

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
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

void EA::Thread::Futex::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_futex.h:414
		Futex::ThreadUniqueId threadUniqueId;

		{
			{
			}
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
				}
			}
		}
	}
}

void EA::Thread::Futex::Lock(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		EAFutexGetR13(/* parameters */);
		EA::Thread::AtomicInt<std::uint64_t>::operator++(/* parameters */);
	}
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::operator delete(void *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::~DeviceMemFileSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::~DeviceMemFileSystem(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::core::filesys::DeviceDriver::~DeviceDriver(/* parameters */);
	CgsFileSystem::DeviceMemFileSystem::operator delete(/* parameters */);
}

void CgsDev::DebugUI::Window::OnGetFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::OnLostFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::GetSystemTimerBaseTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::GetSystemTimerFrequency() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	sys_time_get_timebase_frequency(/* parameters */);
}

void CgsSystem::GetSystemTimeMS() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTimeUtils.cpp:73
		uint64_t _luInitialTime;

		// CgsTimeUtils.cpp:74
		uint64_t _luFrequency;

	}
}

void CgsResource::AttribSysSchemaResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AttribSysSchemaResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AttribSysVaultResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AttribSysVaultResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::ProcessDebugData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugDatabaseInterface::DebugDatabaseInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugDatabaseInterface::~DebugDatabaseInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EntryListResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EntryListResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EntryListResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::Construct(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UpdateSimpleFrag(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DebugGetTypeName(uint32_t  luTypeId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1810
		int32_t liIndex;

	}
}

void CgsResource::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EntryListResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EntryListResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::TextFileResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::TextFileResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::TextFileResourceType::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::TextFileResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::TextFileResourceType::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::DeSerialise(void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::PostFixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::GetImportCount(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::GetImportPointer(const void *  lpResource, uint32_t  luImportIndex, uint32_t *  lpuOutOffset, const void **  lppOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::CanDefrag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::DebugValidate(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::GetDebugResourceCategory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTypeList::SetMode(CgsResource::EPoolTypeListMode  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::TriggerDefragCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:488
		CgsResource::DebugComponent * lpComponent;

	}
}

void CgsResource::DebugPoolTextures::IncTextureIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::IncTextureCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:535
		CgsResource::DebugComponent * lpComponent;

		DebugPoolTextures::IncTextureIndex(/* parameters */);
	}
}

void CgsResource::DebugPoolTextures::DecTextureIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::DecTextureCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:545
		CgsResource::DebugComponent * lpComponent;

		DebugPoolTextures::DecTextureIndex(/* parameters */);
	}
}

void CgsResource::DebugPoolTextures::IncPageIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::IncPageCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:555
		CgsResource::DebugComponent * lpComponent;

	}
}

void CgsResource::DebugPoolTextures::DecPageIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::DecPageCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:565
		CgsResource::DebugComponent * lpComponent;

	}
}

void CgsResource::DebugComponent::TriggerStatsCallback(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:595
		CgsResource::DebugComponent * lpComponent;

	}
}

void CgsResource::DebugBundleFilesWindow::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::ShowBundleWindowChangeCallback(void *  lpValue, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:575
		CgsResource::DebugComponent * lpComponent;

		// CgsResourceDebugComponent.cpp:576
		bool * lpBool;

	}
}

void CgsResource::Pool::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::Reset(const Pool *  lpPool, DebugComponentParams::DebugTextureRenderCallback  lpCallback, void *  lpCallbackUserData, CgsResource::EDebugSortMode  leSortMode, CgsResource::EDebugTextureRenderMode  leRenderMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:92
		int32_t liIndex;

	}
}

void CgsResource::DebugPoolHistogram::AddToCount(int32_t  liRefCountValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolHistogram.cpp:118
		int32_t liIndex;

	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:192
		uint64_t liIndex;

	}
}

void CgsResource::ID::GetHash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindEntry(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:427
		uint64_t liStart;

		// CgsLinearSOAHashTable.h:427
		uint64_t liIndex;

	}
}

void CgsResource::IdListResourceType::GetTypeID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIdList::GetNumIds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IdListResourceType::CalculateSizeOfResource(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseDefragPoolModuleState::Construct(CgsResource::PoolModule *  lpPoolModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EmergencyFragPoolModuleState::Construct(CgsResource::PoolModule *  lpPoolModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IntelliFragPoolModuleState::Construct(CgsResource::PoolModule *  lpPoolModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseDefragPoolModuleState::Begin(BaseDefragParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseDefragPoolModuleState::FindNextFreeNode(int32_t  liStartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseDefragPoolModuleState.cpp:309
		int32_t liIndex;

	}
}

void CgsResource::BaseDefragPoolModuleState::FindFirstFreeNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::operator+=(const const BaseResourceDescriptors<3u> &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:197
		uint32_t i;

	}
}

void rw::BaseResourceDescriptor::operator+=(const const BaseResourceDescriptor &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::Align(const const BaseResourceDescriptor &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::SizeAlign(uint32_t  size, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:401
		const uint32_t alignMask;

	}
}

void CgsResource::DebugPoolTypeList::AddReferenceToCategory(CgsResource::EDebugResourceCategory  leCategory, const const Entry::ResourceDescriptor &  lSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::BaseResourceDescriptors<3u>::operator+=(/* parameters */);
}

void CgsResource::DebugPoolTypeList::SortTypesByName(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTypeList::GetSizeString(uint32_t  luSize, char *  lpcDest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:218
		uint32_t luMB;

		// CgsDebugPoolTypeList.cpp:219
		uint32_t luKB;

		// CgsDebugPoolTypeList.cpp:220
		uint32_t luB;

	}
}

void CgsResource::DebugPoolTextures::GetSizeString(uint32_t  luSize, char *  lpcDest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:193
		uint32_t luMB;

		// CgsDebugPoolTextures.cpp:194
		uint32_t luKB;

		// CgsDebugPoolTextures.cpp:195
		uint32_t luB;

	}
}

void CgsResource::DebugPoolTextures::SortByDataSizeCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:883
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:884
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

	}
}

void CgsResource::DebugPoolTextures::SortByModelUsageCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:913
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:914
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

	}
}

void CgsResource::DebugPoolTextures::SortByInstanceUsageCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:942
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:943
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

	}
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::SetHash(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::GetSelectedTextureId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPads::OverrideDeviceState(int32_t  liPortId, const rw::core::controller::DeviceState *  lpDeviceState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::OverrideDeviceState(int32_t  liInputPort, const rw::core::controller::DeviceState *  lpDeviceState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InputPads::OverrideDeviceState(/* parameters */);
}

void CgsInput::InputIO::BaseInputEvent::GetPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseInputEvent::GetPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPlayer::IsDisconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPlayer::GetPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::StopRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::AnalogueAxisInformation::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1629
		int32_t i;

	}
}

void CgsInput::InputIO::ActionInfo::Construct() {
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

void BrnGui::Selectable::ClearFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
}

void BrnGui::MenuItem::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableCell::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::TableRow::Select() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerInShortCut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::FillInGameModeSpecificResults(const ScoringSystem *  lpScoringSystem, FinishedModeAction *  lpFinishedModeActionOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HandleGameEvents(const CgsModule::Event *  lpEvent, int32_t  liEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasTimedIntro() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::ShouldCountdownEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetOutroTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetGlobalRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::GetActiveRivalToShow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::HasLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameMode::OnPlayerUsesPaintShop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::CrashMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::GetIntroDurationSeconds() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::OnlineShowtimeMode::RequiresStreaming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:82
		int32_t liControl;

	}
}

void CgsInput::DevicePS3Pad::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::GetPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::IsConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::GetButtonValue(CgsInput::EPadButton  leControlID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:312
		bool lbValidControl;

	}
}

void CgsInput::DevicePS3Pad::GetAxisValue(CgsInput::EPadAxis  leControlID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:557
		bool lbValidControl;

	}
}

void CgsInput::InputAlloc(size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::SetButtonValue(CgsInput::EPadButton  leControlID, float32_t  lfControlValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:356
		bool lbValidControl;

	}
}

void CgsInput::DevicePS3Pad::IsButtonJustPressed(CgsInput::EPadButton  leControlID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:397
		bool lbValidControl;

		// CgsInputDevicePS3Pad.cpp:400
		bool lbIsJustPressed;

	}
}

void CgsInput::DevicePS3Pad::IsButtonJustReleased(CgsInput::EPadButton  leControlID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:431
		bool lbValidControl;

		// CgsInputDevicePS3Pad.cpp:433
		bool lbIsJustReleased;

	}
}

void CgsInput::DevicePS3Pad::IsButtonPressed(CgsInput::EPadButton  leControlID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:463
		bool lbValidControl;

	}
}

void CgsInput::DevicePS3Pad::SetButtonThreshold(float32_t  lfThreshold) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::GetButtonThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::SetAxisValue(CgsInput::EPadAxis  leControlID, float32_t  lfControlValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:600
		bool lbValidControl;

	}
}

void CgsInput::DevicePS3Pad::GetLeftRumble() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::GetRightRumble() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::DeadzoneButton(float32_t  lfButtonValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::DeadzoneTrigger(float32_t  lfTriggerValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::DeadzoneAxis(float32_t  lfAxisValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::Update(bool  lbConnected, CgsInput::Manager::EInputPort  lePort, CgsInput::Device::EType  leType, const const CellPadData &  lPadControls, bool  lbHasSensors, bool  lbHasPressInfo, bool  lbHasHighPrecision) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:744
		int32_t liButton;

		// CgsInputDevicePS3Pad.cpp:746
		float32_t lfRawValue;

	}
}

void CgsInput::DevicePS3Pad::DestroyWheelFFEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::UnbindFromPort() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::ClearCachedRumble() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::CreateWheelFFEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:1363
		int32_t liRet;

	}
}

void CgsInput::DevicePS3Pad::BindToPort(CgsInput::Manager::EInputPort  lePort, CgsInput::Device::EType  leType, bool  lbHasRumble, int32_t  liWheelHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:1159
		bool lbValidPort;

	}
}

void CgsFileSystem::DeviceMemFileSystem::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::RegisterMemFile(const char *  lpcName, void *  lpData, uint64_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:108
		uint32_t luIndex;

	}
}

void CgsFileSystem::DeviceMemFileSystem::UnregisterMemFile(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:135
		uint32_t luIndex;

	}
}

void CgsCore::Hash64::ConstructFromStringUpperCase(const RwChar *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::operator==(Hash64  lLhs, Hash64  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::Construct(CgsFileSystem::FileSystem *  lpFileSystem, rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::FlushLogs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MenuItemStreamInfo::Prepare(CgsFileSystem::StreamDeviceDiskRead *  lpStreamDevice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:706
		int32_t liIndex;

	}
}

void CgsFileSystem::DebugComponentFileSystem::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:169
		uint32_t liIndex;

	}
}

void CgsFileSystem::MenuItemStreamInfo::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MenuItemStreamInfo::ComputeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:819
		const const Metrics & lMetrics;

		// CgsDebugComponentFileSystem.cpp:820
		const Debug2DImmediateRender * lpDisplay;

		// CgsDebugComponentFileSystem.cpp:826
		float lfWidth;

	}
}

void CgsFileSystem::MemDeviceFileHandle::operator delete(void *  lpMem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::Manager::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::Close(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:251
		MemDeviceFileHandle * lpHandle;

		MemDeviceFileHandle::operator delete(/* parameters */);
	}
}

void CgsFileSystem::MemDeviceFileHandle::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::GetSize(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Open(const char *  lpcName, unsigned int  luFlags, rw::core::filesys::Handle **) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Close(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Read(void *  lpFH, void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Write(void *  lpFH, const void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Seek(void *  lpFH, uint64_t  luOffset, int  liWhence, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::GetSize(void *  lpFH) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Resize(void *  fh, uint64_t  newsize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Delete(const char *  filePath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::Move(const char *  currentName, const char *  newName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::FindBegin(const char *  filePattern, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::FindNext(void *  h, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::DirectoryCreate(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::DirectoryRemove(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceSwitchableFilesystem::FindEnd(void *  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::Device::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::Device::Shutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::AsyncOp::AsyncOp(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::AsyncOp::~AsyncOp(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::Device::GetParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::RemapDevice::Seek(Handle::DeviceHandle  lHandle, uint64_t  luOffset, uint64_t *  lpuOutResultPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Device::GetParent(/* parameters */);
}

void CgsFileSystem::PhysicalPS3Device::Write(Handle::DeviceHandle  lHandle, const void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicalPS3Device.cpp:315
		PhysicalPS3Handle * lpHandle;

		// CgsPhysicalPS3Device.cpp:318
		uint64_t luAmountWritten;

		// CgsPhysicalPS3Device.cpp:319
		int32_t liWriteResult;

	}
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<char>(char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<char>(const char *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<char>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<char>(char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::AnalogueAxisInformation::SetValue(CgsInput::EPadAxis  leAxis, float32_t  lfAxisValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void rw::math::fpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:155
		float test;

		// scalar.h:156
		float r;

	}
}

void rw::math::fpu::IntRound<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IntFloor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Floor<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:45
		const double maxMantissa;

		// scalar.h:46
		const double doubleInput;

		// scalar.h:47
		double c;

		// scalar.h:48
		double result;

	}
}

void CgsInput::DevicePS3Pad::SetRumble(float32_t  lfLeftAmount, float32_t  lfRightAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:696
		CellPadActParam lRumbleParam;

		// CgsInputDevicePS3Pad.cpp:699
		float32_t kfLeftRumbleVolumeFactor;

		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::IntRound<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		__fsel(/* parameters */);
	}
}

void CgsInput::DevicePS3Pad::SetPause(bool  lbPaused) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::DevicePS3Pad::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:259
		int32_t liControl;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsResource::DebugPoolTextures::RenderTexture(renderengine::Texture *  lpTexture, const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, bool  lbIsFirst, bool  lbIsLast) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:379
		Vector2 lScreenSize;

		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		{
			{
				{
				}
			}
		}
		{
		}
		{
		}
	}
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Debug2DImmediateRender::GetVirtualScreenSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsDebug2DImmediateRender.h:241
	Vector2 lVector;

	{
		// CgsDebug2DImmediateRender.h:241
		Vector2 lVector;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator/<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1756
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1757
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1759
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1760
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_operation_inline.h:1761
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			// vec_float_operation_inline.h:1761
			float floatRecip;

			{
				// vec_float_operation_inline.h:1761
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:225
		uint32_t luStreamIndex;

		// CgsDebugComponentFileSystem.cpp:227
		Vector2 lScreenSize;

		// CgsDebugComponentFileSystem.cpp:231
		float32_t lfXMin;

		// CgsDebugComponentFileSystem.cpp:232
		float32_t lfXMax;

		// CgsDebugComponentFileSystem.cpp:233
		float32_t lfYSize;

		// CgsDebugComponentFileSystem.cpp:234
		float32_t lfXInterval;

		CgsDev::Debug2DImmediateRender::GetVirtualScreenSize(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// CgsDebugComponentFileSystem.cpp:243
		float32_t lfYMin;

		// CgsDebugComponentFileSystem.cpp:244
		float32_t lfYMax;

		// CgsDebugComponentFileSystem.cpp:245
		float32_t lfCurrX;

	}
	{
		// CgsDebugComponentFileSystem.cpp:249
		int32_t liIndex;

		{
			// CgsDebugComponentFileSystem.cpp:252
			float32_t lfHistory0;

			// CgsDebugComponentFileSystem.cpp:253
			float32_t lfHistory1;

			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
		}
	}
	{
		// CgsDebugComponentFileSystem.cpp:263
		int32_t liIndex;

		// CgsDebugComponentFileSystem.cpp:264
		int32_t liHistory0Index;

		// CgsDebugComponentFileSystem.cpp:265
		int32_t liHistory1Index;

	}
	{
		// CgsDebugComponentFileSystem.cpp:278
		float32_t lfHistory0;

		// CgsDebugComponentFileSystem.cpp:279
		float32_t lfHistory1;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
}

void CgsDev::DebugUI::Window::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolWindow::AddTextLine(CgsDev::Debug2DImmediateRender *  lp2dRender, char *  lpcText, RGBA  luColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTypeList::RenderRaw(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:228
		float lfLineX;

		// CgsDebugPoolTypeList.cpp:228
		float lfLineY;

		// CgsDebugPoolTypeList.cpp:229
		int32_t liMemType;

		// CgsDebugPoolTypeList.cpp:230
		uint32_t luSize;

		// CgsDebugPoolTypeList.cpp:231
		uint32_t luPoolSize;

		// CgsDebugPoolTypeList.cpp:232
		float32_t lfPercent;

		// CgsDebugPoolTypeList.cpp:233
		char[512] lacText;

		// CgsDebugPoolTypeList.cpp:234
		char[128] lacSizeString;

		// CgsDebugPoolTypeList.cpp:236
		float32_t lfSeperator0Y;

		// CgsDebugPoolTypeList.cpp:236
		float32_t lfSeperator1Y;

		// CgsDebugPoolTypeList.cpp:238
		float32_t KF_NAMECOLUMNX;

		// CgsDebugPoolTypeList.cpp:239
		float32_t KF_MEM0SIZEX;

		// CgsDebugPoolTypeList.cpp:240
		float32_t KF_MEM0PERCENTX;

		// CgsDebugPoolTypeList.cpp:241
		float32_t KF_MEM1SIZEX;

		// CgsDebugPoolTypeList.cpp:242
		float32_t KF_MEM1PERCENTX;

		// CgsDebugPoolTypeList.cpp:243
		float32_t KF_MEM2SIZEX;

		// CgsDebugPoolTypeList.cpp:244
		float32_t KF_MEM2PERCENTX;

		// CgsDebugPoolTypeList.cpp:245
		float32_t KF_TOTALX;

		// CgsDebugPoolTypeList.cpp:246
		float32_t KF_TEXTSIZE;

		// CgsDebugPoolTypeList.cpp:248
		float32_t[3] lacSizePositions;

		// CgsDebugPoolTypeList.cpp:249
		float32_t[3] lacPercentPositions;

		// CgsDebugPoolTypeList.cpp:250
		uint32_t[3] lauTotals;

		// CgsDebugPoolTypeList.cpp:265
		int32_t liIndex;

	}
	CgsDev::DebugUI::Window::GetX(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
}

void CgsResource::DebugPoolTypeList::RenderProgrammer(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:337
		float lfLineX;

		// CgsDebugPoolTypeList.cpp:337
		float lfLineY;

		// CgsDebugPoolTypeList.cpp:338
		int32_t liMemType;

		// CgsDebugPoolTypeList.cpp:339
		int32_t liMemTypeIndex;

		// CgsDebugPoolTypeList.cpp:340
		uint32_t luSize;

		// CgsDebugPoolTypeList.cpp:341
		uint32_t luPoolSize;

		// CgsDebugPoolTypeList.cpp:342
		float32_t lfPercent;

		// CgsDebugPoolTypeList.cpp:343
		char[512] lacText;

		// CgsDebugPoolTypeList.cpp:344
		char[128] lacSizeString;

		// CgsDebugPoolTypeList.cpp:346
		float32_t lfSeperator0Y;

		// CgsDebugPoolTypeList.cpp:346
		float32_t lfSeperator1Y;

		// CgsDebugPoolTypeList.cpp:348
		float32_t KF_NAMECOLUMNX;

		// CgsDebugPoolTypeList.cpp:349
		float32_t KF_MEM0SIZEX;

		// CgsDebugPoolTypeList.cpp:350
		float32_t KF_MEM0PERCENTX;

		// CgsDebugPoolTypeList.cpp:351
		float32_t KF_MEM1SIZEX;

		// CgsDebugPoolTypeList.cpp:352
		float32_t KF_MEM1PERCENTX;

		// CgsDebugPoolTypeList.cpp:353
		float32_t KF_MEM2SIZEX;

		// CgsDebugPoolTypeList.cpp:354
		float32_t KF_MEM2PERCENTX;

		// CgsDebugPoolTypeList.cpp:355
		float32_t KF_TOTALX;

		// CgsDebugPoolTypeList.cpp:356
		float32_t KF_TEXTSIZE;

		// CgsDebugPoolTypeList.cpp:358
		float32_t[3] lacSizePositions;

		// CgsDebugPoolTypeList.cpp:359
		float32_t[3] lacPercentPositions;

		// CgsDebugPoolTypeList.cpp:360
		uint32_t[3] lauTotals;

		// CgsDebugPoolTypeList.cpp:365
		int32_t[3] laiMemTypeMap;

		// CgsDebugPoolTypeList.cpp:383
		int32_t liIndex;

	}
	CgsDev::DebugUI::Window::GetX(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
}

void CgsResource::DebugPoolTypeList::RenderArtist(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:470
		float lfLineX;

		// CgsDebugPoolTypeList.cpp:470
		float lfLineY;

		// CgsDebugPoolTypeList.cpp:471
		int32_t liMemType;

		// CgsDebugPoolTypeList.cpp:472
		int32_t liMemTypeIndex;

		// CgsDebugPoolTypeList.cpp:473
		uint32_t luSize;

		// CgsDebugPoolTypeList.cpp:474
		uint32_t luPoolSize;

		// CgsDebugPoolTypeList.cpp:475
		float32_t lfPercent;

		// CgsDebugPoolTypeList.cpp:476
		char[512] lacText;

		// CgsDebugPoolTypeList.cpp:477
		char[128] lacSizeString;

		// CgsDebugPoolTypeList.cpp:479
		float32_t lfSeperator0Y;

		// CgsDebugPoolTypeList.cpp:479
		float32_t lfSeperator1Y;

		// CgsDebugPoolTypeList.cpp:481
		float32_t KF_NAMECOLUMNX;

		// CgsDebugPoolTypeList.cpp:482
		float32_t KF_MEM0SIZEX;

		// CgsDebugPoolTypeList.cpp:483
		float32_t KF_MEM0PERCENTX;

		// CgsDebugPoolTypeList.cpp:484
		float32_t KF_MEM1SIZEX;

		// CgsDebugPoolTypeList.cpp:485
		float32_t KF_MEM1PERCENTX;

		// CgsDebugPoolTypeList.cpp:486
		float32_t KF_MEM2SIZEX;

		// CgsDebugPoolTypeList.cpp:487
		float32_t KF_MEM2PERCENTX;

		// CgsDebugPoolTypeList.cpp:488
		float32_t KF_TOTALX;

		// CgsDebugPoolTypeList.cpp:489
		float32_t KF_TEXTSIZE;

		// CgsDebugPoolTypeList.cpp:491
		float32_t[3] lacSizePositions;

		// CgsDebugPoolTypeList.cpp:492
		float32_t[3] lacPercentPositions;

		// CgsDebugPoolTypeList.cpp:493
		uint32_t[3] lauTotals;

		// CgsDebugPoolTypeList.cpp:498
		int32_t[3] laiMemTypeMap;

		// CgsDebugPoolTypeList.cpp:516
		int32_t liIndex;

		CgsDev::DebugUI::Window::GetX(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void CgsResource::DebugPoolTypeList::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::FindEntry(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:441
		uint64_t liStart;

		// CgsLinearHashTable.h:441
		uint64_t liIndex;

	}
}

void rw::BaseResourceDescriptor::SetSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolHistogram::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolHistogram.cpp:89
		int32_t liIndex;

		// CgsDebugPoolHistogram.cpp:89
		int32_t liMemType;

		{
			// CgsDebugPoolHistogram.cpp:105
			uint32_t luCurrentSize;

			// CgsDebugPoolHistogram.cpp:106
			uint32_t luResourceSize;

			rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
			rw::BaseResourceDescriptor::SetSize(/* parameters */);
		}
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
	}
}

void CgsResource::Pool::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AllocateResourceListResponse::Construct(int32_t  liEventId, int32_t  liPoolId) {
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

void CgsResource::DebugComponent::GenerateStringList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:429
		int32_t i;

		// CgsResourceDebugComponent.cpp:430
		int32_t liNextStringEntry;

	}
}

void CgsResource::DebugComponent::InitWindows() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:305
		int32_t i;

	}
}

void CgsResource::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolHistogram::Reset(const Pool *  lpPool) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTypeList::Reset(const Pool *  lpPool, const CgsResource::PoolModule *  lpPoolModule, CgsResource::EPoolTypeListMode  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::SortByWidthCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:825
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:826
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

	}
}

void renderengine::Texture::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator><VectorAxisX, VectorAxisY>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:334
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:338
		bool ret;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::RenderTextureStretched(renderengine::Texture *  lpTexture, const rw::math::vpu::Vector2  lDisplayPos, const rw::math::vpu::Vector2  lDisplaySize, bool  lbIsFirst, bool  lbIsLast) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:679
		Vector2 lScaledTextureSize;

		// CgsDebugPoolTextures.cpp:682
		Vector2 lTextureSize;

		// CgsDebugPoolTextures.cpp:683
		Vector2 lBoxCentre;

		rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY, VectorAxisY>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator><VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

void rw::math::vpu::operator/(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:448
		VectorIntrinsicUnion::VectorIntrinsic result;

		// vector2_operation_inline.h:449
		VectorIntrinsicUnion::VectorIntrinsic divisor;

		{
			// vector2_operation_inline.h:451
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vector2_operation_inline.h:451
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vector2_operation_inline.h:451
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
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

void CgsResource::DebugPoolTextures::RenderThumbnails(CgsDev::Debug2DImmediateRender *  lp2dRender, const rw::math::vpu::Vector2  lDisplayPos, const rw::math::vpu::Vector2  lDisplaySize, int32_t  liWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:722
		Vector2 lInnerPos;

		// CgsDebugPoolTextures.cpp:723
		Vector2 lInnerSize;

		// CgsDebugPoolTextures.cpp:724
		Vector2 lTextureOuterSize;

		// CgsDebugPoolTextures.cpp:725
		Vector2 lTextureInnerSize;

		// CgsDebugPoolTextures.cpp:726
		Vector2 lTextureCentre;

		// CgsDebugPoolTextures.cpp:727
		Vector2 lTextureOffset;

		// CgsDebugPoolTextures.cpp:729
		Vector2 lCurrentPos;

		// CgsDebugPoolTextures.cpp:731
		int32_t liTotalToDisplay;

		// CgsDebugPoolTextures.cpp:732
		int32_t liPageIndex;

		// CgsDebugPoolTextures.cpp:733
		int32_t liTextureIndex;

		// CgsDebugPoolTextures.cpp:735
		int32_t liX;

		// CgsDebugPoolTextures.cpp:735
		int32_t liY;

		// CgsDebugPoolTextures.cpp:735
		int32_t liIndex;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// CgsDebugPoolTextures.cpp:746
		int32_t liDisplayIndex;

		rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
}

void CgsResource::DebugPoolTextures::RenderTextureActualSize(renderengine::Texture *  lpTexture, const rw::math::vpu::Vector2  lDisplayPos, const rw::math::vpu::Vector2  lDisplaySize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:655
		Vector2 lTextureSize;

		// CgsDebugPoolTextures.cpp:656
		Vector2 lBoxCentre;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	renderengine::Texture::GetWidth(/* parameters */);
	renderengine::Texture::GetHeight(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

void CgsResource::DebugPoolTextures::SortByAreaCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:793
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:794
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

		// CgsDebugPoolTextures.cpp:796
		uint32_t luArea0;

		// CgsDebugPoolTextures.cpp:797
		uint32_t luArea1;

	}
}

void CgsResource::DebugPoolTextures::SortByHeightCallback(const void *  lpData0, const void *  lpData1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:854
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry0;

		// CgsDebugPoolTextures.cpp:855
		const CgsResource::DebugPoolTextures::TextureEntry * lpEntry1;

	}
}

void CgsResource::Type::GetCachedId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::IsPartOfFilter(uint16_t  luResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::core::stdc::Max(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(int  a, int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsResource::ID>(ID *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsResource::ID>(const ID *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsResource::ID>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsResource::ID>(ID *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsCore::Hash64>(Hash64 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsCore::Hash64>(const Hash64 *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsCore::Hash64>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsCore::Hash64>(Hash64 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractOffset<CgsFileSystem::DiskLayoutFile>(DiskLayoutFile *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<CgsFileSystem::DiskLayoutFile>(const DiskLayoutFile *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<CgsFileSystem::DiskLayoutFile>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<CgsFileSystem::DiskLayoutFile>(DiskLayoutFile *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::IsFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::IsAllocated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNodeInList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::GetNextIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::CountElements() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::GetMaxNodes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::RemapDevice::Close(Handle::DeviceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Device::GetParent(/* parameters */);
}

void CgsFileSystem::RemapDevice::Read(Handle::DeviceHandle  lHandle, void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Device::GetParent(/* parameters */);
}

void CgsFileSystem::RemapDevice::Write(Handle::DeviceHandle  lHandle, const void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Device::GetParent(/* parameters */);
}

void CgsResource::Events::PoolEvent::GetPoolId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::ConvertPoolRequestOptions(const CreatePoolRequest *  lpInPoolRequest, CgsResource::Pool::InitOptions *  lpOutInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1038
		uint32_t luIndex;

	}
	{
		// CgsPoolModule.cpp:1043
		BaseResourceDescriptor lDescriptor;

		// CgsPoolModule.cpp:1044
		uint32_t luCount;

		rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::~BaseResourceDescriptor(/* parameters */);
	}
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AttribSysSchemaResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSchemaResourceType.cpp:235
		AttribSysVaultResource * lpAttribSysResource;

		// CgsAttribSysSchemaResourceType.cpp:238
		void * lpBaseAddr;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
}

void CgsResource::AttribSysVaultResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultResourceType.cpp:233
		AttribSysVaultResource * lpAttribSysResource;

		// CgsAttribSysVaultResourceType.cpp:236
		void * lpBaseAddr;

		rw::Resource::GetMemoryResource(/* parameters */);
	}
}

void CgsDev::DebugUI::Window::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolHistogram::DrawBar(CgsDev::Debug2DImmediateRender *  lp2dRender, char *  lpcText, int32_t  liIndex, float  lfY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolHistogram.cpp:133
		float32_t lfOffset;

	}
	{
		// CgsDebugPoolHistogram.cpp:139
		float lfWidth;

		// CgsDebugPoolHistogram.cpp:140
		char[32] lacValue;

	}
}

void CgsResource::DebugPoolHistogram::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolHistogram.cpp:54
		float lrLinePos;

		// CgsDebugPoolHistogram.cpp:56
		char[256] lacText;

		// CgsDebugPoolHistogram.cpp:61
		int32_t liIndex;

	}
}

void BrnGui::Selectable::GetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetFlag(BrnGui::Selectable::StateFlags  lxFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Selectable::SetActive(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetHighlightable(bool  lbHighlightable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void BrnGui::Selectable::SetSelectable(bool  lbSelectable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFlag(/* parameters */);
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetRumbleVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::GetJoltEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::ThreadLayout::GetDispatchThreadId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::ThreadLayout::GetUpdateThreadId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicPointer::SetValue(void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::int32_t>::SetValue(int32_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:275
		int32_t nOriginalValue;

	}
}

void EA::Thread::AtomicInt<std::int32_t>::operator=(int32_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::WebcamPS3::GetCameraStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicPointer::AtomicPointer(void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::int32_t>::AtomicInt(int32_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicPointer::operator=(void *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::ThreadLayout::ThreadLayout(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Thread::AtomicPointer::AtomicPointer(/* parameters */);
	EA::Thread::AtomicInt<std::int32_t>::AtomicInt(/* parameters */);
	EA::Thread::AtomicPointer::operator=(/* parameters */);
}

void EA::Thread::AtomicInt<std::int32_t>::operator const std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::int32_t>::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::GetBaseAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::GetTotalSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedIndexedPool<CgsFileSystem::PhysicalPS3Handle,16,std::int8_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Construct(PhysicalPS3Handle *  lpObjects, int8_t *  lpiIndices, int32_t  liMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:149
		int8_t liIndex;

	}
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::GetPoolSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::PhysicalPS3Device::Construct(CgsFileSystem::PhysicalPS3Device::EDeviceType  leDeviceType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FixedIndexedPool<CgsFileSystem::PhysicalPS3Handle,16,std::int8_t>::Construct(/* parameters */);
	CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Clear(/* parameters */);
}

void CgsInput::InputIO::BaseRumbleEvent::GetRumblePriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayJoltEffectEvent::GetJoltEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayRumbleEffectEvent::GetRumbleId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PlayRumbleEffectEvent::GetRumbleVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Construct(DiskCacheCommand *  lpBuffer, uint16_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValue(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:458
		uint64_t nOriginalValue;

	}
}

void CgsResource::Pool::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DebugReport(FPoolReportCallback *  lpfCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1840
		int32_t liIndex;

	}
}

void CgsResource::ResourceModule::DebugReportPools(FPoolReportCallback *  lpfCallback, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetResourceEntryImports(uint16_t  luEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetEntryImportCount(int32_t  liResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
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

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
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

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		(None)unknown_arg
		{
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			{
				(None)unknown_arg
			}
		}
	}
	{
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
	{
		{
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
	}
}

void rw::IResourceAllocator::AllocateMemoryResource(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsInput::Device::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPort::GetPlayerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::Device::SetWheelFFSpring(const const CgsInput::Device::WheelFFSpring &  lWheelFFSpring) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::DistributionStream::SetMaxToMove(uint32_t  luMaxToMove) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<char>(const char *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint64_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const int32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsCore::Hash64>(const Hash64 *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsFileSystem::DiskLayoutFile>(const DiskLayoutFile *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::GtByteSwap(const ID &  lID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<CgsResource::ID>(const ID *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IdListResourceType::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIdListResourceType.cpp:200
		ResourceIdList * lpIdList;

	}
}

void rw::core::stdc::Max(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::stdc::Min(unsigned int  a, unsigned int  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolWindow::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	{
		// CgsDebugPoolWindow.cpp:186
		uint32_t luToScroll;

		rw::core::stdc::Max(/* parameters */);
	}
	{
		// CgsDebugPoolWindow.cpp:171
		uint32_t luToScroll;

		rw::core::stdc::Max(/* parameters */);
	}
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetBarGraph::SetFirstValue(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::WidgetBarGraph::SetValues(uint8_t *  lpiValuesArray, int32_t  liValueCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MenuItemStreamInfo::Render(CgsDev::Debug2DImmediateRender *  lp2dRender, float32_t  lfX, float32_t  lfY, bool  lbHighlight, float32_t  lfMenuWidth) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:785
		const const Metrics & lMetrics;

		// CgsDebugComponentFileSystem.cpp:786
		const const Palette & lPalette;

		// CgsDebugComponentFileSystem.cpp:792
		CgsDev::DebugUI::WidgetBarGraph lWidgetBarGraph;

		CgsDev::DebugUI::WidgetBarGraph::WidgetBarGraph(/* parameters */);
		CgsDev::DebugUI::WidgetBarGraph::SetFirstValue(/* parameters */);
		CgsDev::DebugUI::WidgetBarGraph::SetValues(/* parameters */);
	}
}

void rw::RwPtrAddOffset<CgsResource::ID>(ID *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsResource::ID>(ID *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IdListResourceType::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceIdListResourceType.cpp:222
		ResourceIdList * lpIdList;

	}
}

void rw::RwPtrAddOffset<CgsCore::Hash64>(Hash64 *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsCore::Hash64>(Hash64 *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<char>(char *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<char>(char *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<CgsFileSystem::DiskLayoutFile>(DiskLayoutFile *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<CgsFileSystem::DiskLayoutFile>(DiskLayoutFile *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Destruct(/* parameters */);
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

void CgsResource::BaseResourcePtr::GetResource(ResourceHandle::Resource *  lpOutResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceList::GetInstanceModel(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Instance::GetModel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::InstanceList::GetNumInstances() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::CountInstancesThatUseTexture(renderengine::Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:408
		uint16_t luIndex;

		// CgsDebugPoolTextures.cpp:409
		ResourceHandle::Resource lInstanceListResource;

		// CgsDebugPoolTextures.cpp:410
		InstanceList * lpList;

		// CgsDebugPoolTextures.cpp:411
		uint32_t luInstanceIndex;

		// CgsDebugPoolTextures.cpp:413
		int32_t liCount;

		SmallResource::SmallResource(/* parameters */);
		BaseResourcePtr::GetResource(/* parameters */);
		CgsGraphics::InstanceList::GetInstanceModel(/* parameters */);
	}
}

void CgsResource::DebugPoolTextures::CountModelsThatUseTexture(renderengine::Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:464
		uint16_t luIndex;

		// CgsDebugPoolTextures.cpp:465
		ResourceHandle::Resource lModelResource;

		// CgsDebugPoolTextures.cpp:466
		CgsGraphics::Model * lpModel;

		// CgsDebugPoolTextures.cpp:467
		int32_t liCount;

		SmallResource::SmallResource(/* parameters */);
	}
	BaseResourcePtr::GetResource(/* parameters */);
}

void CgsResource::SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::RegisterTexture(int32_t  liIndex, uint16_t  luEntryIndex, bool  lbFullAnalysis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:548
		ResourceHandle::Resource lTextureResource;

		// CgsDebugPoolTextures.cpp:549
		renderengine::Texture * lpTexture;

	}
	SmallResource::SmallResource(/* parameters */);
	BaseResourcePtr::GetResource(/* parameters */);
	SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
}

void CgsResource::DebugPoolTextures::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:219
		uint16_t luIndex;

		// CgsDebugPoolTextures.cpp:220
		int32_t liTextureIndex;

	}
}

void CgsResource::DebugPoolTextures::RenderTextureDisplay(CgsDev::Debug2DImmediateRender *  lp2dRender, const rw::math::vpu::Vector2  lDisplayPos, const rw::math::vpu::Vector2  lDisplaySize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:591
		ResourceHandle::Resource lTextureResource;

		// CgsDebugPoolTextures.cpp:592
		renderengine::Texture * lpTexture;

		SmallResource::SmallResource(/* parameters */);
		BaseResourcePtr::GetResource(/* parameters */);
	}
}

void CgsResource::SmallResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTextures.cpp:125
		ResourceHandle::Resource lTextureResource;

		// CgsDebugPoolTextures.cpp:126
		renderengine::Texture * lpTexture;

		// CgsDebugPoolTextures.cpp:132
		float32_t lfLineY;

		// CgsDebugPoolTextures.cpp:134
		char[512] lacText;

		// CgsDebugPoolTextures.cpp:166
		char[256] lacSizeString;

		SmallResource::SmallResource(/* parameters */);
		BaseResourcePtr::GetResource(/* parameters */);
		CgsDev::DebugUI::Window::GetY(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
	}
}

void rw::IResourceAllocator::Free(void *  ptr) {
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

void CgsInput::InputFree(void *  block) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
}

void CgsResource::Type::ReBaseTechniqueFixupWithOffset(void *  lpResource, const Resource &  lSource, const Resource &  lDest, const ResourceDescriptor &  lSize, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceType.cpp:356
		Resource lFixUpResource;

		rw::Resource::Resource(/* parameters */);
	}
}

void CgsResource::Type::ReBase(void *  lpResource, const Resource &  lSource, const Resource &  lDest, const ResourceDescriptor &  lSize, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetCode(EA::Jobs::JobEnvironment  env, const void *  ptrToCode, int  codeSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetName(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::JobManager() {
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

void EA::Thread::Futex::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
			}
		}
	}
	{
		(None)unknown_arg
		{
			(None)unknown_arg
			{
			}
		}
	}
}

void EA::Thread::Futex::Unlock(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void rw::math::fpu::SinCos<float>(float  a, const float &  sin_out, const float &  cos_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolWindow::CalculateColour(float32_t  lfGradient) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolWindow.cpp:365
		float32_t lfRed;

		// CgsDebugPoolWindow.cpp:365
		float32_t lfBlue;

		// CgsDebugPoolWindow.cpp:365
		float32_t lfGreen;

		// CgsDebugPoolWindow.cpp:366
		uint8_t luRed;

		// CgsDebugPoolWindow.cpp:366
		uint8_t luBlue;

		// CgsDebugPoolWindow.cpp:366
		uint8_t luGreen;

		rw::math::fpu::SinCos<float>(/* parameters */);
	}
	rw::math::fpu::Cos(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::SinCos<float>(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
}

void CgsResource::HeapEntry::Contains(char *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::GetAddress(bool  lbStartFromTop, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolWindow::RenderHeap(CgsDev::Debug2DImmediateRender *  lp2dRender, CgsResource::DebugPoolWindow::HeapDisplayInfo *  lpHeapInfo, float32_t  lfX, float32_t  lfY, float32_t  lfWidth, float32_t  lfHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolWindow.cpp:221
		uint32_t luNumSegments;

		// CgsDebugPoolWindow.cpp:222
		uint32_t luSegment;

		// CgsDebugPoolWindow.cpp:223
		uint32_t luFirstSegment;

		// CgsDebugPoolWindow.cpp:224
		uint32_t luSegmentsInHeap;

		// CgsDebugPoolWindow.cpp:225
		Heap::HeapEntryNode * lpNode;

		// CgsDebugPoolWindow.cpp:226
		HeapEntry * lpData;

		// CgsDebugPoolWindow.cpp:227
		uint32_t luTotalAllocated;

		// CgsDebugPoolWindow.cpp:229
		Heap * lpHeap;

		// CgsDebugPoolWindow.cpp:254
		uint32_t luSegmentsToDraw;

	}
	rw::core::stdc::Min(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetHead(/* parameters */);
	{
		// CgsDebugPoolWindow.cpp:271
		char * lpStartAddress;

		// CgsDebugPoolWindow.cpp:272
		char * lpEndAddress;

		HeapEntry::Contains(/* parameters */);
		CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	}
	{
		// CgsDebugPoolWindow.cpp:306
		uint32_t luTotalFromThisNode;

		HeapEntry::Contains(/* parameters */);
		HeapEntry::GetSize(/* parameters */);
		HeapEntry::Contains(/* parameters */);
	}
	HeapEntry::Contains(/* parameters */);
	CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNext(/* parameters */);
	{
		// CgsDebugPoolWindow.cpp:332
		float lfBoxX0;

		// CgsDebugPoolWindow.cpp:332
		float lfBoxX1;

		// CgsDebugPoolWindow.cpp:332
		float lfBoxY0;

		// CgsDebugPoolWindow.cpp:332
		float lfBoxY1;

		// CgsDebugPoolWindow.cpp:333
		float lfGradient;

	}
}

void CgsResource::DebugPoolWindow::Render(CgsDev::Debug2DImmediateRender *  lp2dRender) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolWindow.cpp:94
		char[1024] lacBuffer;

		// CgsDebugPoolWindow.cpp:117
		uint32_t luHeapSize;

		// CgsDebugPoolWindow.cpp:117
		uint32_t luHeapUsed;

		// CgsDebugPoolWindow.cpp:117
		uint32_t luHeapFree;

		// CgsDebugPoolWindow.cpp:117
		uint32_t luHeapLargestFree;

		// CgsDebugPoolWindow.cpp:123
		float32_t lfFragmentation;

		// CgsDebugPoolWindow.cpp:133
		float32_t lrRemainingSpace;

		// CgsDebugPoolWindow.cpp:134
		float32_t lfHeapY;

		// CgsDebugPoolWindow.cpp:135
		float32_t lfHeapHeight;

		// CgsDebugPoolWindow.cpp:136
		int32_t liIndex;

	}
}

extern void HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CgsExceptionHandlerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MinimalMemoryReader::MinimalMemoryReader() {
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

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
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

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
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
	CgsMemory::HeapMallocCoreAllocator::~HeapMallocCoreAllocator(/* parameters */);
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
	CgsMemory::HeapMallocCoreAllocator::HeapMallocCoreAllocator(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsExceptionHandlerPS3(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	EA::Thread::AtomicInt<std::int32_t>::AtomicInt(/* parameters */);
	EA::Thread::AtomicInt<std::int32_t>::AtomicInt(/* parameters */);
	CgsFileSystem::MenuItemStreamInfo::MenuItemStreamInfo(/* parameters */);
}

extern void InitOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~InitOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::InitOptions::InitOptions(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	InitOptions(/* parameters */);
}

void CgsMemory::MemoryModule::GetOverheadRequired(const CgsMemory::MemoryModule::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModule.h:393
		uint32_t luRequiredSize;

	}
}

void CgsResource::BundleLoaderModule::GetMemoryOverhead(const CgsResource::BundleLoaderModule::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.h:352
		uint32_t luTotal;

	}
}

void CgsResource::PoolModule::GetMemoryOverhead(const CgsResource::PoolModule::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.h:385
		uint32_t luTotal;

		// CgsPoolModule.h:386
		CgsResource::ScratchPool::InitOptions lScratchInit;

	}
}

void CgsResource::ScratchPool::GetOverheadMemoryRequired(const CgsResource::ScratchPool::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceScratchPool.h:222
		uint32_t luTotal;

		// CgsResourceScratchPool.h:228
		ResourceDescriptor lLinearAllocatorHeaderDesc;

	}
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ImportHashTable::CalculateRequiredSize(int32_t  liListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::CalculateRequiredSize(uint64_t  liListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::GetMemoryOverhead(const CgsResource::ResourceModule::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:1013
		uint32_t luRequired;

	}
	CgsMemory::MemoryModule::GetOverheadRequired(/* parameters */);
	PoolModule::GetMemoryOverhead(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::~DeviceMemFileSystem(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::core::filesys::DeviceDriver::~DeviceDriver(/* parameters */);
}

void CgsResource::AttribSysSchemaResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysSchemaResourceType.cpp:74
		AttribSysVaultResource * lpAttribSysResource;

		// CgsAttribSysSchemaResourceType.cpp:77
		uint32_t luResourceSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::AttribSysVaultResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultResourceType.cpp:73
		AttribSysVaultResource * lpAttribSysResource;

		// CgsAttribSysVaultResourceType.cpp:76
		uint32_t luResourceSize;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::BinaryFileResource::GetHeaderSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResource::GetDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBinaryFileResource.cpp:63
		const BinaryFileResource * lpBinaryResource;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}

void CgsResource::EntryListResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
}

void CgsResource::TextFileResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
}

void CgsResource::IdListResourceType::GetSerialisedResourceDescriptor(const void *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsResourceIdListResourceType.cpp:70
	ResourceDescriptor & lResourceDescriptor;

	{
		// CgsResourceIdListResourceType.cpp:68
		uint32_t luSize;

		// CgsResourceIdListResourceType.cpp:70
		ResourceDescriptor lResourceDescriptor;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
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

void rw::BaseResourceDescriptor::SetAlignment(uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetOverheadMemoryRequired(const CgsResource::Pool::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:786
		uint32_t luIndex;

		// CgsResourcePool.h:787
		uint32_t luTotal;

	}
}

void CgsResource::HashTable::CalculateRequiredSize(int32_t  liListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::CalculateRequiredSize(uint64_t  liListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::GetOverheadMemoryRequired(uint32_t  luMaxNodes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::ConvertToRWDescriptor(const ResourceDescriptor &  lOutRwDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::PoolModule::GetRequiredResourceDescriptor(const CreatePoolRequest *  lpPoolRequest, ResourceDescriptor *  lpOutResourceDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:986
		uint32_t luIndex;

		// CgsPoolModule.cpp:987
		CgsResource::Pool::InitOptions lInitOptions;

		// CgsPoolModule.cpp:988
		Entry::ResourceDescriptor lDescriptor;

		// CgsPoolModule.cpp:1004
		uint32_t luMainMemSize;

		InitOptions(/* parameters */);
		SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		Pool::GetOverheadMemoryRequired(/* parameters */);
		SmallResourceDescriptor::GetSize(/* parameters */);
		HashTable::CalculateRequiredSize(/* parameters */);
		rw::BaseResourceDescriptor::GetSize(/* parameters */);
		SmallResourceDescriptor::GetMemoryResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		SmallResourceDescriptor::ConvertToRWDescriptor(/* parameters */);
		SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		~InitOptions(/* parameters */);
	}
}

void CgsFileSystem::ReadStream::operator=(CgsFileSystem::StreamDeviceDiskRead *  lpDevice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<128,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void CgsResource::BundleLoaderModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:155
		int32_t liIndex;

		CgsFileSystem::ReadStream::operator=(/* parameters */);
		CgsFileSystem::ReadStream::operator=(/* parameters */);
		CgsModule::EventReceiverQueue<128,16>::Prepare(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<128,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<128,16>::Release(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void CgsModule::EventReceiverQueue<128,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<128,16>::Destruct(/* parameters */);
}

void CgsModule::EventReceiverQueue<16384,16>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:220
		int32_t liIndex;

		// CgsPoolModule.cpp:221
		bool lbDone;

		CgsModule::EventReceiverQueue<16384,16>::Prepare(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<16384,16>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:277
		int32_t liIndex;

		// CgsPoolModule.cpp:278
		bool lbDone;

		CgsModule::EventReceiverQueue<16384,16>::Release(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<16384,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventReceiverQueue<16384,16>::Destruct(/* parameters */);
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

void CgsSound::MemBase::~MemBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::MemBase::operator delete(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::MemBase::~MemBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void CgsResource::DebugPoolTextures::FreeDebugMemory(rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsResource::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DeviceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::~Futex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~PhysicalDeviceSlot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~OperationPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceManager::operator delete(void *  lpMem) {
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

void CgsFileSystem::Device::CallErrorCallback(CgsFileSystem::EDeviceErrors  leError) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.h:150
		bool lbResult;

	}
}

void CgsFileSystem::PhysicalPS3Device::Seek(Handle::DeviceHandle  lHandle, uint64_t  luOffset, uint64_t *  lpuOutResultPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsPhysicalPS3Device.cpp:353
tryseek:
	// CgsPhysicalPS3Device.cpp:389
retryseekopen:
	{
		// CgsPhysicalPS3Device.cpp:341
		PhysicalPS3Handle * lpHandle;

	}
	{
		// CgsPhysicalPS3Device.cpp:351
		bool lbHadError;

		// CgsPhysicalPS3Device.cpp:356
		uint64_t luPos;

		// CgsPhysicalPS3Device.cpp:357
		int32_t liSeekResult;

		// CgsPhysicalPS3Device.cpp:399
		int32_t liOpenResult;

		Device::CallErrorCallback(/* parameters */);
	}
	Device::CallErrorCallback(/* parameters */);
}

void CgsResource::BundleV2::ResourceEntry::GetDiskSize(uint32_t  luMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::MoveToNextResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1567
		const CgsResource::BundleV2::ResourceEntry * lpEntries;

		// CgsBundleLoaderModule.cpp:1568
		const bool * lpNeeds;

		// CgsBundleLoaderModule.cpp:1569
		int32_t liCurrentResource;

		// CgsBundleLoaderModule.cpp:1570
		int32_t liCurrentMemoryType;

		// CgsBundleLoaderModule.cpp:1571
		int32_t liNumEntries;

	}
	{
		// CgsBundleLoaderModule.cpp:1601
		int32_t liResourceMemSize;

		BundleV2::ResourceEntry::GetDiskSize(/* parameters */);
	}
}

void CgsResource::BundleLoaderModule::MoveToFirstResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1647
		int32_t liResourceMemSize;

	}
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

void CgsSound::Playback::Factory::operator delete(void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Factory::~Factory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Post(const DiskCacheCommand *  lpValue, bool  lbBlock, int32_t  liBlockInterval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:300
		bool lbResult;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentLocked;

		{
			// CgsLocklessQueue.h:332
			uint16_t luNewWritePos;

			// CgsLocklessQueue.h:333
			uint16_t luNewLength;

		}
	}
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Lock(bool  lbBlockIfAlreadyLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:214
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentLocked;

	}
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::GetStatus(uint16_t *  lpuOutReadPosition, uint16_t *  lpuOutWritePosition, uint16_t *  lpuOutLength, uint16_t *  lpuOutLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:163
		uint64_t luValue;

	}
}

void EA::Thread::AtomicInt<std::uint64_t>::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:431
		uint64_t nValue;

	}
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::SetStatusConditional(uint16_t  luOldReadPosition, uint16_t  luOldWritePosition, uint16_t  luOldLength, uint16_t  luOldLocked, uint16_t  luNewReadPosition, uint16_t  luNewWritePosition, uint16_t  luNewLength, uint16_t  luNewLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:191
		uint64_t luOldValue;

		// CgsLocklessQueue.h:195
		uint64_t luNewValue;

	}
}

void EA::Thread::AtomicInt<std::uint64_t>::SetValueConditional(uint64_t  n, uint64_t  condition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread_atomic_powerpc.h:486
		uint64_t nOriginalValue;

	}
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:268
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentLocked;

	}
}

void CgsContainers::LocklessQueue<CgsFileSystem::DiskCacheCommand>::Pop(DiskCacheCommand *  lpValue, bool  lbBlock, int32_t  liBlockInterval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:372
		bool lbResult;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentLocked;

		{
			// CgsLocklessQueue.h:404
			uint16_t luNewReadPos;

			// CgsLocklessQueue.h:405
			uint16_t luNewLength;

		}
	}
}

void CgsContainers::LocklessQueue<char*>::Pop(char **  lpValue, bool  lbBlock, int32_t  liBlockInterval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:372
		bool lbResult;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:373
		uint16_t luCurrentLocked;

		{
			// CgsLocklessQueue.h:404
			uint16_t luNewReadPos;

			// CgsLocklessQueue.h:405
			uint16_t luNewLength;

		}
	}
}

void CgsContainers::LocklessQueue<char*>::Lock(bool  lbBlockIfAlreadyLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:214
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:214
		uint16_t luCurrentLocked;

	}
}

void CgsContainers::LocklessQueue<char*>::GetStatus(uint16_t *  lpuOutReadPosition, uint16_t *  lpuOutWritePosition, uint16_t *  lpuOutLength, uint16_t *  lpuOutLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:163
		uint64_t luValue;

	}
}

void CgsContainers::LocklessQueue<char*>::SetStatusConditional(uint16_t  luOldReadPosition, uint16_t  luOldWritePosition, uint16_t  luOldLength, uint16_t  luOldLocked, uint16_t  luNewReadPosition, uint16_t  luNewWritePosition, uint16_t  luNewLength, uint16_t  luNewLocked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:191
		uint64_t luOldValue;

		// CgsLocklessQueue.h:195
		uint64_t luNewValue;

	}
}

void CgsContainers::LocklessQueue<char*>::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:268
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:268
		uint16_t luCurrentLocked;

	}
}

void CgsContainers::LocklessQueue<char*>::Post(char *const*  lpValue, bool  lbBlock, int32_t  liBlockInterval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLocklessQueue.h:300
		bool lbResult;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentReadPos;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentWritePos;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentLength;

		// CgsLocklessQueue.h:301
		uint16_t luCurrentLocked;

		{
			// CgsLocklessQueue.h:332
			uint16_t luNewWritePos;

			// CgsLocklessQueue.h:333
			uint16_t luNewLength;

		}
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
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

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Construct(BindResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(BindResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Construct(UnBindResult *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(UnBindResult *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Construct(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::IOBuffer::UnlockForRead() {
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

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead() {
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

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void EA::Thread::AutoFutex::AutoFutex(const Futex &  futex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AutoFutex::~AutoFutex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::CgsHash::CalculateHash(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::FindEntry(uint32_t volatile  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:441
		uint32_t volatile liStart;

		// CgsLinearHashTable.h:441
		uint32_t volatile liIndex;

	}
}

void CgsFileSystem::Handle::IsNull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileFutexHelper::FileFutexHelper(const Futex &  lFutex, const char *  lpName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileFutexHelper::~FileFutexHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::StreamDeviceDiskRead::GetBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MenuItemStreamInfo::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:760
		float lfUsage;

	}
}

void CgsFileSystem::BaseFile::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[10] __FUNCTION__;

	{
		// CgsFile.h:226
		FileFutexHelper lFutexHelper;

		// CgsFile.h:228
		CgsFileSystem::FileState leReturnVal;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::BaseFile::GetStatus(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsResource::ResourceModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsResource::Events::LoadBundleRequest,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::Construct(LoadBundleRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::SetEventPointer(LoadBundleRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsResource::Events::UnloadBundleRequest,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::Construct(UnloadBundleRequest *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::SetEventPointer(UnloadBundleRequest *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Construct(PlayJoltEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::SetEventPointer(PlayJoltEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Construct(PlayRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::SetEventPointer(PlayRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Construct(ChangeVolumeRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::SetEventPointer(ChangeVolumeRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Construct(StopRumbleEffectEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::SetEventPointer(StopRumbleEffectEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsInput::InputIO::PadMapping,7>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::Construct(PadMapping *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::SetEventPointer(PadMapping *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::Device::WheelFFSpring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::AllocateDebugMemory(rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsResource::DebugComponent::Construct(CgsResource::ResourceModule *  lpResourceModule, const DebugComponentParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:80
		int32_t liSortIndex;

		// CgsResourceDebugComponent.cpp:91
		int32_t liRenderIndex;

	}
}

void EA::Jobs::JobThreadParameters::JobThreadParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// job_thread_parameters.h:36
		ThreadParameters tp;

	}
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCat(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::RemapDevice::Construct(const char *  lpcRemapName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrCpy(/* parameters */);
}

void CgsFileSystem::RemapDevice::Open(const char *  lpcName, uint32_t  luFlags, Handle::DeviceHandle *  lpOutHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRemapDevice.cpp:58
		char[256] lacNewName;

		CgsCore::StrCpy(/* parameters */);
	}
	CgsCore::StrCat(/* parameters */);
	Device::GetParent(/* parameters */);
}

void CgsModule::UnlockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IOBuffer::UnlockForRead(/* parameters */);
	IOBuffer::UnlockForWrite(/* parameters */);
}

void EA::Thread::AtomicPointer::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolPerfMonHelper::PoolPerfMonHelper(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolPerfMonHelper::~PoolPerfMonHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::FindResourceType(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1661
		PoolPerfMonHelper lPerfVar;

		// CgsPoolModule.cpp:1663
		int32_t liIndex;

	}
	PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
	PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolModule::GetPoolIndex(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.h:411
		int32_t liPoolIndex;

		{
			// CgsPoolModule.h:409
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::DebugComponent::UpdatePoolMenuItems() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:410
		int32_t i;

	}
	PoolModule::GetPoolIndex(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void rw::core::filesys::Options::Options(Channel *, EA::Allocator::ICoreAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::Manager::GetThreadParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::Manager::SetThreadParameters(const const ThreadParameters &  tp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::GetDeviceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceManager.h:178
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::DeviceMemFileSystem::operator new(size_t  luSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::DeviceMemFileSystem(const char *  pName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::Manager::SetErrorHandler(bool (*)(int)  handler) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::Init(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNodeBase, uint16_t  liNodeCount) {
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

void CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetPrevIndex(uint16_t  liPrevIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::SetNextIndex(uint16_t  liNextIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Clear() {
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

void CgsModule::EventQueue<CgsResource::Events::LoadBundleResponse,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::Construct(LoadBundleResponse *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::SetEventPointer(LoadBundleResponse *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsResource::Events::UnloadBundleResponse,256>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::Construct(UnloadBundleResponse *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::SetEventPointer(UnloadBundleResponse *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<256,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<256,16>::Clear() {
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

void CgsModule::VariableEventQueue<8192,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<8192,16>::Clear() {
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

void CgsModule::VariableEventQueue<8192,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::AddEntry(uint64_t  lKey, const int32_t *  lpInitialValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:258
		uint64_t liStart;

		// CgsLinearHashTable.h:258
		uint64_t liIndex;

		{
			// CgsLinearHashTable.h:256
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::AddEntry(uint64_t  lKey, const ImportHashTableValue *  lpInitialValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:244
		uint64_t liStart;

		// CgsLinearSOAHashTable.h:244
		uint64_t liIndex;

		{
			// CgsLinearSOAHashTable.h:242
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddTail(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddFirstNode(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNewNode) {
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

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetNodeOffset(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalAddTail(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNewNode) {
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

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::IsEmpty() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveHead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1163
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1161
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveLastNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1139
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1137
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::HeapEntry::SetAddress(char *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::SetSize(uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:621
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::HeapEntry::SetAllocated(bool  lbAllocated) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::SetOwner(void *  lpOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::FindFreeNodeContainingAddress(Heap::HeapEntryNode *  lpStartNode, uint32_t  luSize, void *  lpAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:654
		Heap::HeapEntryNode * lpNode;

	}
}

void CgsResource::Heap::FindFreeNodeBestFit(Heap::HeapEntryNode *  lpStartNode, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:692
		Heap::HeapEntryNode * lpNode;

		// CgsResourceHeap.h:693
		Heap::HeapEntryNode * lpFoundNode;

	}
}

void CgsResource::Heap::FindFreeNodeFromTop(Heap::HeapEntryNode *  lpStartNode, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:739
		Heap::HeapEntryNode * lpNode;

	}
}

void CgsResource::Heap::FindFreeNodeFromBottom(Heap::HeapEntryNode *  lpStartNode, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:777
		Heap::HeapEntryNode * lpNode;

	}
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::GetPrev(const CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNodeInList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>::GetPrevIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::AddAfter(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNodeInList, CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNewNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:756
		uint16_t liNodeInListIndex;

		// CgsIndexedLinkList.h:757
		uint16_t liNewNodeIndex;

	}
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::RemoveNode(CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> *  lpNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:890
		uint16_t liIndex;

	}
}

void CgsContainers::IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>::InternalRemoveTail() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedLinkList.h:1188
		CgsContainers::IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t> * lpNode;

		{
			// CgsIndexedLinkList.h:1186
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsSystem::ExitCallback(uint64_t  status, uint64_t  param, void *  pUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsStartRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Timer::Start() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsStopRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Timer::Stop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::IsMultiplierRequested() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerRequests::GetMultiplier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTimerRequestInterface.h:182
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Timer::SetTimeStepMultiplier(float32_t  lfTimeStepMultiplier) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Timer::GetState(int32_t *  lpiFrameCount, int32_t *  lpiSecondCount, float32_t *  lpfFraction, float32_t *  lpfBaseTimeStep, float32_t *  lpfTimeStepMultiplier, float32_t *  lpfRequestedTimeStepMultiplier, bool *  lpbRunning) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::SetFraction(float32_t  lfFraction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:316
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::Time::SetSeconds(int32_t  liSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:355
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

	}
}

void CgsResource::Events::FileEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::ReadStreamEvent::GetStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

		}
		{
			// CgsEventReceiverQueue.h:400
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:401
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsEventReceiverQueue.h:407
			CgsModule::BaseEventReceiverQueue::CBufferEntry * lpNextBufferEntry;

		}
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

void CgsResource::BundleLoaderModule::ProcessReceiverQueue(const InputBuffer_Update *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:353
		const CgsModule::Event * lpEvent;

		// CgsBundleLoaderModule.cpp:354
		int32_t liSize;

		// CgsBundleLoaderModule.cpp:355
		int32_t liEventId;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:379
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
	CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:363
		const OpenReadStreamResponse * lpResponse;

	}
	{
		// CgsBundleLoaderModule.cpp:371
		const CloseReadStreamResponse * lpResponse;

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
	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Update::GetLoadBundleRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:78
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Push(const LoadBundleRequest *  lpEntry, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:285
		uint32_t luIndex;

	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Update::GetUnloadBundleRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:81
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>::Push(const UnloadBundleRequest *  lpEntry, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:285
		uint32_t luIndex;

	}
}

void CgsResource::BundleLoaderModule::ProcessBundleLoadRequests(const InputBuffer_Update *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:402
		const InputBuffer_Update * lpInputBuffer_Update;

		// CgsBundleLoaderModule.cpp:405
		int32_t liIndex;

		{
			// CgsBundleLoaderModule.cpp:410
			const const LoadBundleRequest & lBundleRequest;

			CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Push(/* parameters */);
		}
	}
	BundleLoaderIO::InputBuffer_Update::GetLoadBundleRequestQueue(/* parameters */);
	BundleLoaderIO::InputBuffer_Update::GetLoadBundleRequestQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::GetEvent(/* parameters */);
	Events::BundleLoaderEvent::GetFileName(/* parameters */);
	CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:436
		const const UnloadBundleRequest & lBundleRequest;

		CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>::Push(/* parameters */);
	}
	BundleLoaderIO::InputBuffer_Update::GetUnloadBundleRequestQueue(/* parameters */);
	BundleLoaderIO::InputBuffer_Update::GetUnloadBundleRequestQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::GetEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Push(/* parameters */);
	CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::GetFileLog() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileLog::LogLoadEvent(const char *  lpcFileName, CgsFileSystem::ELogEntryMode  leLogEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::ProcessBundleHeader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:576
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:582
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:586
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:585
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::AddEvent(const const LoadBundleResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[129] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Events::BundleLoaderEvent::GetUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::GetPoolId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, int32_t  liPoolId, CgsResource::Events::LoadBundleResponse::EResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::BundleLoaderIO::OutputBuffer::GetLoadBundleResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:146
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BundleLoaderModule::PostLoadFinishedEvent(OutputBuffer *  lpOutput, const LoadBundleRequest *  lpLoadRequest, CgsResource::Events::LoadBundleResponse::EResult  leResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:705
		LoadBundleResponse lResponse;

	}
	Events::BundleLoaderEvent::GetFileName(/* parameters */);
	Events::LoadBundleResponse::Construct(/* parameters */);
	Events::BundleLoaderEvent::GetEventId(/* parameters */);
	Events::BundleLoaderEvent::GetPoolId(/* parameters */);
	Events::BundleLoaderEvent::SetFileName(/* parameters */);
	Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	BundleLoaderIO::OutputBuffer::GetLoadBundleResponseQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::AddEvent(const const UnloadBundleResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[131] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<256,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DestroyPool(int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:956
		int32_t liIndex;

	}
	{
		// CgsPoolModule.cpp:967
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsMemory::MemoryIO::MemoryResponse::GetResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoDeletePoolRequest(const DestroyBankResponse *  lpResponse, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1309
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

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void CgsModule::VariableEventQueue<4096,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void FixUpAndResolveResourceListRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::Construct(int32_t  liEventId, int32_t  liPoolId, ID  lListId, int32_t  liFirstIndex, int32_t  liCount, bool  lbFinalFixup, bool  lbFixUpDependencies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::SetListId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetPoolSendQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:143
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<4096>::AddEvent(const const FixUpAndResolveResourceListRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::SendPartialFixupRequest(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1919
		int32_t liLastAvailable;

		// CgsBundleLoaderModule.cpp:1919
		int32_t liNumToLoad;

		rw::core::stdc::Min(/* parameters */);
		{
			// CgsBundleLoaderModule.cpp:1940
			FixUpAndResolveResourceListRequest lRequest;

			Events::PoolEvent::GetPoolId(/* parameters */);
			Events::FixUpAndResolveResourceListRequest::Construct(/* parameters */);
			Events::PoolEvent::SetPoolId(/* parameters */);
			Events::PoolEvent::SetEventId(/* parameters */);
			BundleLoaderIO::OutputBuffer::GetPoolSendQueue(/* parameters */);
			PoolIO::PoolQueueTemplate<4096>::AddEvent(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BasePriorityQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BundleLoaderModule::GetBundleResourceListId(const char *  lpcBundleName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsBundleLoaderModule.h:376
	ID lId;

	{
		// CgsBundleLoaderModule.h:376
		ID lId;

		// CgsBundleLoaderModule.h:382
		uint64_t luHash;

	}
}

void CgsResource::operator==(ID  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UnloadResourceListRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnloadResourceListRequest::Construct(int32_t  liEventId, int32_t  liPoolId, const ID  lListId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnloadResourceListRequest::SetListId(const ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<4096>::AddEvent(const const UnloadResourceListRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetUnloadBundleResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:149
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>::Pop(UnloadBundleRequest *  lpNextEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:311
		uint32_t luIndex;

	}
}

void CgsResource::BundleLoaderModule::CheckForUnloads(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1673
		UnloadBundleRequest lUnloadRequest;

	}
	CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>::Pop(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1680
		char[256] lacFNameUppr;

		// CgsBundleLoaderModule.cpp:1681
		ID lid;

		// CgsBundleLoaderModule.cpp:1682
		int32_t liIndex;

		CgsCore::StrnCpy(/* parameters */);
	}
	GetBundleResourceListId(/* parameters */);
	Events::BundleLoaderEvent::GetPoolId(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1722
		UnloadBundleResponse lResponse;

		Events::BundleLoaderEvent::Construct(/* parameters */);
		Events::BundleLoaderEvent::GetPoolId(/* parameters */);
		Events::BundleLoaderEvent::SetEventId(/* parameters */);
		Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
		BundleLoaderIO::OutputBuffer::GetUnloadBundleResponseQueue(/* parameters */);
		Events::BundleLoaderEvent::SetPoolId(/* parameters */);
		CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::AddEvent(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:1730
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Events::BundleLoaderEvent::GetPoolId(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:1702
		UnloadResourceListRequest lRequest;

		BundleLoaderIO::OutputBuffer::GetPoolSendQueue(/* parameters */);
		Events::UnloadResourceListRequest::Construct(/* parameters */);
		Events::PoolEvent::SetEventId(/* parameters */);
		PoolIO::PoolQueueTemplate<4096>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Events::AllocateResourceListRequest::Construct(int32_t  liEventId, int32_t  liPoolId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::LoadBundleRequest::GetAllowFailiure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleV2::IsCompressed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleV2::IsFlagSet(uint32_t  luFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::BundleLoaderEvent::GetLiveUpdateReplace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<4096>::AddEvent(const const AllocateResourceListRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::ProcessBundleEntryList(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:626
		CgsResource::BundleV2::ResourceEntry * lpEntries;

		// CgsBundleLoaderModule.cpp:634
		char[256] lacFNameUppr;

	}
	Events::BundleLoaderEvent::GetFileName(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	Events::BundleLoaderEvent::GetEventId(/* parameters */);
	Events::BundleLoaderEvent::GetPoolId(/* parameters */);
	Events::AllocateResourceListRequest::Construct(/* parameters */);
	Events::PoolEvent::SetUser(/* parameters */);
	GetBundleResourceListId(/* parameters */);
	BundleLoaderIO::OutputBuffer::GetPoolSendQueue(/* parameters */);
	PoolIO::PoolQueueTemplate<4096>::AddEvent(/* parameters */);
	GetBundleResourceListId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BundleLoaderModule::StreamDoneFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1514
		FixUpAndResolveResourceListRequest lRequest;

	}
	Events::FixUpAndResolveResourceListRequest::Construct(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::Construct(/* parameters */);
	Events::PoolEvent::SetUser(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	BundleLoaderIO::OutputBuffer::GetPoolSendQueue(/* parameters */);
	PoolIO::PoolQueueTemplate<4096>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Record::GetPoolReceiveQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:112
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::RecordPostUpdateEvents(const InputBuffer_Record *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	BundleLoaderIO::InputBuffer_Record::GetPoolReceiveQueue(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::Append<4096, 16>(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<4096,16>::GetLength(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
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

void CgsMemory::MemoryIO::OutputBuffer::GetMemoryResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModuleIO.h:785
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

void CgsMemory::MemoryIO::MemoryEvent::GetUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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
			// CgsEventReceiverQueue.h:438
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::ResourceModule::ProcessMemoryResponses(const OutputBuffer *  lpMemoryModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:559
		int32_t liEventSize;

		// CgsResourceModule.cpp:560
		int32_t liEventId;

		// CgsResourceModule.cpp:563
		const CgsModule::Event * lpEvent;

		// CgsResourceModule.cpp:564
		const MemoryResponse * lpResponse;

		CgsMemory::MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
		CgsModule::VariableEventQueue<5120,16>::GetFirstEvent(/* parameters */);
		CgsMemory::MemoryIO::MemoryEvent::GetUser(/* parameters */);
		CgsModule::BaseEventReceiverQueue::AddEvent(/* parameters */);
		CgsMemory::MemoryIO::OutputBuffer::GetMemoryResponseQueue(/* parameters */);
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

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleRequest>::AddEvent(const const UnloadBundleRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[130] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleRequest>::AddEvent(const const LoadBundleRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[128] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolIO::InputBuffer::GetPoolInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// CgsPoolModuleIO.h:234
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
		}
	}
}

void CgsResource::PoolIO::InputBuffer::GetPoolInputQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<256,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<256,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<256,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<256,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<256,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<256,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[159] __PRETTY_FUNCTION__;

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

void CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Peek(LoadBundleRequest *  lpNextEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:343
		uint32_t luIndex;

	}
}

void CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Pop(LoadBundleRequest *  lpNextEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:311
		uint32_t luIndex;

	}
}

void CgsResource::Events::LoadBundleRequest::GetUseHDCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, void *  lpBuffer, uint32_t  luBufferSize, uint32_t  luNumBlocks, int32_t  liNormalPriority, int32_t  liHighPriority, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetBufferSize(uint32_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetNumBlocks(uint32_t  luNumBlocks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetNormalPriority(int32_t  liNormalPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetHighPriority(int32_t  liHighPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetBuffer(void *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::SetUseHDCache(bool  lbUseCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Push(const RunningLoad *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetStreamRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:152
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceIO::ResourceRequestQueue<256>::OpenReadStream(const const OpenReadStreamRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::CheckForLoads(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1766
		LoadBundleRequest lNextLoadRequest;

		// CgsBundleLoaderModule.cpp:1767
		OpenReadStreamRequest lRequest;

	}
	{
		// CgsBundleLoaderModule.cpp:1772
		char[256] lacFNameUppr;

		// CgsBundleLoaderModule.cpp:1773
		ID lid;

		// CgsBundleLoaderModule.cpp:1774
		int32_t liIndex;

		CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Peek(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		ID::Construct(/* parameters */);
		Events::BundleLoaderEvent::GetPoolId(/* parameters */);
		CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Pop(/* parameters */);
		{
			// CgsBundleLoaderModule.cpp:1812
			uint32_t luNumBufferSlots;

			Events::OpenStreamRequest::Construct(/* parameters */);
			{
				// CgsBundleLoaderModule.cpp:1826
				int32_t liIndex;

				// CgsBundleLoaderModule.cpp:1827
				char * lpcDriveEnd;

				Events::OpenStreamRequest::Construct(/* parameters */);
			}
			Events::OpenStreamRequest::SetNumBlocks(/* parameters */);
			Events::OpenStreamRequest::SetBuffer(/* parameters */);
			Events::OpenStreamRequest::SetUseHDCache(/* parameters */);
			CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Pop(/* parameters */);
			BundleLoaderIO::OutputBuffer::GetStreamRequestQueue(/* parameters */);
			ResourceIO::ResourceRequestQueue<256>::OpenReadStream(/* parameters */);
			CgsFileSystem::ReadStream::operator=(/* parameters */);
		}
	}
	CgsCore::StrnCpy(/* parameters */);
	Events::FileEvent::Construct(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1884
		RunningLoad lRunningLoad;

		CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Pop(/* parameters */);
		CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Push(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:1897
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Pop(RunningLoad *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamIdleFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:948
		OutputBuffer * lpOutputBuffer;

	}
	{
		// CgsBundleLoaderModule.cpp:968
		RunningLoad lNextLoad;

		CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Pop(/* parameters */);
	}
}

void CgsResource::Events::ReadStreamEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, ReadStream  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::ReadStreamEvent::SetStream(ReadStream  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<256>::CloseReadStream(const const CloseReadStreamRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamClose(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1544
		CloseReadStreamRequest lCloseStreamRequest;

		// CgsBundleLoaderModule.cpp:1547
		OutputBuffer * lpOutputBuffer;

		Events::ReadStreamEvent::Construct(/* parameters */);
	}
	BundleLoaderIO::OutputBuffer::GetStreamRequestQueue(/* parameters */);
	ResourceIO::ResourceRequestQueue<256>::CloseReadStream(/* parameters */);
	CgsFileSystem::ReadStream::operator=(/* parameters */);
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

void CgsModule::VariableEventQueue<13312,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
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

void CgsModule::VariableEventQueue<13312,16>::OutputQueueContents() {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void CgsModule::VariableEventQueue<13312,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<8192,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<8192,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsResource::PoolIO::OutputBuffer::GetPoolResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModuleIO.h:263
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsResource::ResourceModule::AddCreateResourceRequest(InputBuffer *  lpMemoryModuleInputBuffer, const CreateResourceRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddMemoryRequest(InputBuffer *  lpMemoryModuleInputBuffer, const MemoryRequest *  lpMemoryRequest, int32_t  liRequestSize, CgsResource::ResourceModule::EMemoryRequestType  leRequestType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::InputBuffer::GetMemoryRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMemoryModuleIO.h:754
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::AddDestroyBankRequest(InputBuffer *  lpMemoryModuleInputBuffer, const DestroyBankRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::ProcessPoolResourceRequests(InputBuffer *  lpMemoryModuleInputBuffer, const OutputBuffer *  lpPoolModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:872
		int32_t liEventId;

		// CgsResourceModule.cpp:873
		int32_t liEventSize;

		// CgsResourceModule.cpp:874
		const CgsModule::Event * lpEvent;

		// CgsResourceModule.cpp:876
		const OutputBuffer::PoolResourceRequestQueue * lpRequestQueue;

		PoolIO::OutputBuffer::GetPoolResourceRequestQueue(/* parameters */);
		CgsModule::VariableEventQueue<8192,16>::GetFirstEvent(/* parameters */);
		AddCreateResourceRequest(/* parameters */);
	}
	AddDestroyBankRequest(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<8192,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::OutputQueueContents() {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void CgsModule::VariableEventQueue<8192,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void UnacquireResourceResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::GetUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::PoolEvent::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnacquireResourceRequest::GetResourceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnacquireResourceResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnacquireResourceResponse::SetResourceId(ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::OutputBuffer::GetPoolOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModuleIO.h:264
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const UnacquireResourceResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoUnacquireResourceRequest(const UnacquireResourceRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1425
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1429
		UnacquireResourceResponse lResponse;

	}
	Events::UnacquireResourceResponse::Construct(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
}

void CgsMemory::MemoryIO::DestroyBankRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::MemoryEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, CgsMemory::MemoryIO::EventType  leEventType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::DestroyBankRequest::SetBankId(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetBankId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::OutputBuffer::GetPoolResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModuleIO.h:265
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceIO::ResourceRequestQueue<8192>::DestroyBank(const const DestroyBankRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::SendDeletePoolMemoryRequest(const DeletePoolRequest *  lpDeletePoolRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1216
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1219
		DestroyBankRequest lMemRequest;

		// CgsPoolModule.cpp:1225
		int32_t liPoolIndex;

	}
	Events::PoolEvent::GetPoolId(/* parameters */);
	CgsMemory::MemoryIO::DestroyBankRequest::Construct(/* parameters */);
	GetPoolIndex(/* parameters */);
	CgsMemory::MemoryIO::DestroyBankRequest::SetBankId(/* parameters */);
	{
	}
	CgsMemory::MemoryIO::DestroyBankRequest::SetBankId(/* parameters */);
	PoolIO::OutputBuffer::GetPoolResourceRequestQueue(/* parameters */);
	ResourceIO::ResourceRequestQueue<8192>::DestroyBank(/* parameters */);
	{
		// CgsPoolModule.cpp:1226
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Push(const CreatePoolRequest *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MemoryRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::SetBankId(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::SetParentBankId(int32_t  liParentBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::SetBankName(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceRequest::SetDescriptor(const ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<8192>::CreateResource(const const CreateResourceRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreateResourceRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::SendCreatePoolMemoryRequest(const CreatePoolRequest *  lpCreatePoolRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1182
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1185
		CreateResourceRequest lMemRequest;

		// CgsPoolModule.cpp:1186
		ResourceDescriptor lDescriptor;

	}
	CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Push(/* parameters */);
	CreateResourceRequest(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	CgsMemory::MemoryIO::CreateResourceRequest::Construct(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	CgsMemory::MemoryIO::CreateResourceRequest::SetBankName(/* parameters */);
	CgsMemory::MemoryIO::CreateResourceRequest::SetBankId(/* parameters */);
	CgsMemory::MemoryIO::CreateResourceRequest::SetParentBankId(/* parameters */);
	PoolIO::OutputBuffer::GetPoolResourceRequestQueue(/* parameters */);
	CgsMemory::MemoryIO::CreateResourceRequest::SetDescriptor(/* parameters */);
	ResourceIO::ResourceRequestQueue<8192>::CreateResource(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~CreateResourceRequest(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolIO::OutputBuffer::GetPoolOutputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModuleIO.h:262
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Record::GetPoolReceiveQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:113
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Append<8192, 16>(const const VariableEventQueue<8192,16> &  lSourceQueue) {
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

void CgsModule::VariableEventQueue<8192,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::BridgePoolToBundleLoader(InputBuffer_Record *  lpBundleLoaderModuleInputBuffer, const OutputBuffer *  lpPoolModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceBridgeBundleLoaderToPool.cpp:45
		const OutputBuffer::PoolOutputQueue * lpPoolOutputQueue;

		// CgsResourceBridgeBundleLoaderToPool.cpp:46
		InputBuffer_Record::PoolReceiveQueue * lpBundleLoaderInputQueue;

		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		BundleLoaderIO::InputBuffer_Record::GetPoolReceiveQueue(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::Append<8192, 16>(/* parameters */);
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
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetPoolSendQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:142
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
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

void CgsResource::ResourceModule::BridgeBundleLoaderToPool(InputBuffer *  lpPoolModuleInputBuffer, const OutputBuffer *  lpBundleLoaderModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceBridgeBundleLoaderToPool.cpp:31
		InputBuffer::PoolInputQueue * lpPoolInputQueue;

		// CgsResourceBridgeBundleLoaderToPool.cpp:32
		const OutputBuffer::PoolSendQueue * lpBundleLoaderOutputQueue;

		PoolIO::InputBuffer::GetPoolInputQueue(/* parameters */);
		BundleLoaderIO::OutputBuffer::GetPoolSendQueue(/* parameters */);
		CgsModule::VariableEventQueue<8192,16>::Append<4096, 16>(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer(/* parameters */);
		CgsCore::MemCpy(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
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
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetLoadBundleResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:145
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetUnloadBundleResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:148
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::ProcessResourceResponses(const OutputBuffer *  lpBundleLoaderModuleOutputBuffer, const OutputBuffer *  lpPoolModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:932
		const OutputBuffer::LoadBundleResponseQueue * lpLoadQueue;

		// CgsResourceModule.cpp:935
		int32_t liIndex;

		// CgsResourceModule.cpp:936
		BaseEventReceiverQueue * lpReceiverQueue;

		// CgsResourceModule.cpp:955
		const OutputBuffer::UnloadBundleResponseQueue * lpUnloadQueue;

		// CgsResourceModule.cpp:975
		int32_t liEventSize;

		// CgsResourceModule.cpp:976
		int32_t liEventId;

		// CgsResourceModule.cpp:979
		const OutputBuffer::PoolOutputQueue * lpQueue;

		// CgsResourceModule.cpp:980
		const PoolEvent * lpResponse;

		BundleLoaderIO::OutputBuffer::GetLoadBundleResponseQueue(/* parameters */);
		{
			// CgsResourceModule.cpp:940
			const const LoadBundleResponse & lResponse;

			CgsModule::BaseEventQueue<CgsResource::Events::LoadBundleResponse>::GetEvent(/* parameters */);
			Events::BundleLoaderEvent::GetUser(/* parameters */);
			AddEvent<CgsResource::Events::LoadBundleResponse>(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BundleLoaderIO::OutputBuffer::GetUnloadBundleResponseQueue(/* parameters */);
		{
			// CgsResourceModule.cpp:960
			const const UnloadBundleResponse & lResponse;

			CgsModule::BaseEventQueue<CgsResource::Events::UnloadBundleResponse>::GetEvent(/* parameters */);
			Events::BundleLoaderEvent::GetUser(/* parameters */);
			AddEvent<CgsResource::Events::UnloadBundleResponse>(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		CgsModule::VariableEventQueue<8192,16>::GetFirstEvent(/* parameters */);
		CgsModule::BaseEventReceiverQueue::AddEvent(/* parameters */);
		Events::PoolEvent::GetUser(/* parameters */);
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventReceiverQueue::AddEvent(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetUsedList(CgsResource::ResourceModule::PendingFileResponse **  lpUsedList, int32_t  liMaxListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:402
		int32_t liIndex;

		// CgsIndexedPool.h:403
		int32_t liNewIndex;

		{
			// CgsIndexedPool.h:400
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsFileSystem::FileSystem::IsReadStreamOpen(ReadStream  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileSystem.h:638
		CgsFileSystem::StreamDeviceDiskRead * lpDevice;

		{
			// CgsFileSystem.h:639
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsFileSystem::StreamDeviceDiskRead::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileEvent::GetUser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Push(CgsResource::ResourceModule::PendingFileResponse *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetObjectIndex(const CgsResource::ResourceModule::PendingFileResponse *  lpObject) {
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

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetPoolSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::PushIndex(int8_t  liObjectIndex) {
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

void CgsFileSystem::FileSystem::IsReadStreamClosed(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileSystem.h:697
		CgsFileSystem::StreamDeviceDiskRead * lpDevice;

		{
			// CgsFileSystem.h:696
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsFileSystem.h:698
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::Events::FileHandleEvent::GetFileHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileHandle::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileSystem::GetStatus(uint32_t  luFileID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileSystem.h:567
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::ProcessPendingFileSystemResponses() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:1030
		int32_t liNumPending;

		// CgsResourceModule.cpp:1031
		int32_t liIndex;

		// CgsResourceModule.cpp:1032
		CgsResource::ResourceModule::PendingFileResponse *[16] lapPendingResponses;

	}
	CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetUsedList(/* parameters */);
	{
		// CgsResourceModule.cpp:1075
		CloseReadStreamResponse * lpResponse;

		CgsFileSystem::FileSystem::IsReadStreamClosed(/* parameters */);
		CgsFileSystem::StreamDeviceDiskRead::GetStatus(/* parameters */);
		Events::FileEvent::GetUser(/* parameters */);
		AddEvent<CgsResource::Events::CloseReadStreamResponse>(/* parameters */);
		FileSystemFree<CgsResource::Events::CloseReadStreamResponse>(/* parameters */);
		CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Push(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:1122
		CloseFileResponse * lpResponse;

		CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Push(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:1137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:1043
		OpenReadStreamResponse * lpResponse;

		CgsFileSystem::FileSystem::IsReadStreamOpen(/* parameters */);
		AddEvent<CgsResource::Events::OpenReadStreamResponse>(/* parameters */);
		FileSystemFree<CgsResource::Events::OpenReadStreamResponse>(/* parameters */);
		CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Push(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:1107
		OpenFileResponse * lpResponse;

		CgsFileSystem::FileHandle::GetStatus(/* parameters */);
		Events::FileEvent::GetUser(/* parameters */);
		AddEvent<CgsResource::Events::OpenFileResponse>(/* parameters */);
		FileSystemFree<CgsResource::Events::OpenFileResponse>(/* parameters */);
		CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Push(/* parameters */);
	}
	CgsFileSystem::FileSystem::GetStatus(/* parameters */);
	CgsFileSystem::BaseFile::GetStatus(/* parameters */);
	Events::FileEvent::GetUser(/* parameters */);
	AddEvent<CgsResource::Events::CloseFileResponse>(/* parameters */);
	FileSystemFree<CgsResource::Events::CloseFileResponse>(/* parameters */);
	CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetObjectIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
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

void CgsModule::VariableEventQueue<16384,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::operator<<(const CgsDev::StrStreamBase &  lLhs, const const Entry &  lEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator<<(const CgsDev::StrStreamBase &  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceID.h:265
		char[32] lacBuffer;

		// CgsResourceID.h:267
		uint8_t * lpuInt;

	}
}

void CgsResource::BaseResourcePtr::GetResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator<<(const CgsDev::StrStreamBase &  lLhs, const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::operator<<(const CgsDev::StrStreamBase &  lLhs, const const BaseResourcePtr &  lPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::HeapEntry::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::CalculateRequiredSizeForAllocList(const AllocRequestAddressed *  lpRequests, uint32_t  luCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:840
		uint32_t luRequest;

		// CgsResourceHeap.h:841
		uint32_t luSizeNeeded;

	}
}

void CgsResource::Heap::CalculateRequiredSizeForAllocList(const AllocRequest *  lpRequests, uint32_t  luCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHeap.h:814
		uint32_t luRequest;

		// CgsResourceHeap.h:815
		uint32_t luSizeNeeded;

	}
}

extern void InvalidatePoolResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::InvalidatePoolResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, CgsResource::Events::InvalidatePoolResponse::EResult  leResult, const const ResourceHandle::Resource &  lResource, const const Entry::ResourceDescriptor &  lDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const InvalidatePoolResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~InvalidatePoolResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoInvalidatePoolRequest(const InvalidatePoolRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1584
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1585
		InvalidatePoolResponse lResponse;

		// CgsPoolModule.cpp:1586
		ResourceHandle::Resource lPoolResource;

		// CgsPoolModule.cpp:1587
		Entry::ResourceDescriptor lPoolDescriptor;

		// CgsPoolModule.cpp:1588
		bool lbResult;

		InvalidatePoolResponse(/* parameters */);
		SmallResource::SmallResource(/* parameters */);
		SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		Events::PoolEvent::GetPoolId(/* parameters */);
		GetPoolIndex(/* parameters */);
		Events::PoolEvent::GetEventId(/* parameters */);
		Events::InvalidatePoolResponse::Construct(/* parameters */);
		Events::PoolEvent::GetPoolId(/* parameters */);
		Events::PoolEvent::SetPoolId(/* parameters */);
		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~InvalidatePoolResponse(/* parameters */);
	}
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::InvalidatePoolResponse::Construct(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::Type::GetCachedCanDefrag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetEntryRefCount(int32_t  liResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::IncEntryRefCount(int32_t  liResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::SetEntryRefCount(int32_t  liResourceIndex, int16_t  liNewRefCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::UpdateShareTest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:372
		int32_t liMemType;

		// CgsResourceDebugComponent.cpp:378
		int32_t liPoolIndex0;

		// CgsResourceDebugComponent.cpp:379
		int32_t liPoolIndex1;

		PoolModule::GetPoolIndex(/* parameters */);
		{
		}
		PoolModule::GetPoolIndex(/* parameters */);
		{
		}
		{
			// CgsResourceDebugComponent.cpp:382
			CgsResource::Pool * lpPool0;

			// CgsResourceDebugComponent.cpp:383
			CgsResource::Pool * lpPool1;

			// CgsResourceDebugComponent.cpp:389
			uint16_t luIndex;

		}
	}
	{
		// CgsResourceDebugComponent.cpp:394
		CgsResource::Entry * lpEntry;

	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

extern void AcquireResourceResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceRequest::GetResourceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lResourceId, const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::SetResourceId(ID  lResourceId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceResponse::SetHandle(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::GetResourceHandle(ResourceHandle *  lpOutHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const AcquireResourceResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoAcquireResourceRequest(const AcquireResourceRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1329
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1333
		AcquireResourceResponse lResponse;

		// CgsPoolModule.cpp:1334
		ResourceHandle lHandle;

		// CgsPoolModule.cpp:1336
		CgsResource::Entry * lpEntry;

	}
	Events::PoolEvent::GetPoolId(/* parameters */);
	GetPoolIndex(/* parameters */);
	Events::AcquireResourceResponse::Construct(/* parameters */);
	Events::AcquireResourceResponse::Construct(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	Events::PoolEvent::Construct(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::Pool::SetEntryImportCount(int32_t  liResourceIndex, int32_t  liImportCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UnloadResourceList(int32_t  liPoolId, const ID *  lpIds, uint16_t  luNumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1769
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1781
		CgsResource::Pool * lpContainingPool;

		// CgsPoolModule.cpp:1782
		uint32_t luIndex;

		GetPoolIndex(/* parameters */);
	}
	{
	}
	{
		// CgsPoolModule.cpp:1786
		int32_t liResourceIndex;

	}
	{
		// CgsPoolModule.cpp:1777
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::ScratchPool::GetTempAddress(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ScratchPool::GetDestAddress(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::ResolveImportsForEntry(int32_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:1120
		bool lbSuccess;

		// CgsResourcePool.h:1123
		CgsResource::BundleV2::ImportEntry * lpImports;

		// CgsResourcePool.h:1126
		int32_t liNumImports;

		{
			// CgsResourcePool.h:1129
			int32_t liImportIndex;

		}
	}
}

void CgsResource::BaseDefragPoolModuleState::GetPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IntelliFragPoolModuleState::RunPoolDefragmentation(RelocateRequest *  lpRelocateRequests, RelocateSource *  lpRelocateSources, uint32_t  luNumRelocations, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::EmergencyFragPoolModuleState::RunPoolDefragmentation(RelocateRequest *  lpRelocateRequests, RelocateSource *  lpRelocateSources, uint32_t  luNumRelocations, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ScratchPool::GetNumEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ScratchPool::GetEntry(uint32_t  luEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceScratchPool.h:254
		CgsDev::StrStream lStrStream;

	}
}

void rw::ResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator<(ID  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::LinearMalloc::GetStartAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::AddToNewList(BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:383
		CgsDev::StrStream lStrStream;

	}
}

extern void AcquireResourceListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListRequest::GetListResourceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::ResourceIdList>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::ResourceIdList>::operator=(const const BaseResourcePtr &  lOtherResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::CreateFromPointer(const BaseResourcePtr *  lpSrcPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListRequest::GetHandles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::ResourceIdList>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::Events::AcquireResourceListRequest::GetMaxHandles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIdList::GetId(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListResponse::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, int32_t  liPoolId, ID  lListResourceId, ResourceHandle *  lpHandles, int32_t  liNumHandles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListResponse::SetListResourceId(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListResponse::SetHandles(ResourceHandle *  lpHandles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::AcquireResourceListResponse::SetNumHandles(int32_t  liMaxHandles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const AcquireResourceListResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoAcquireResourceListRequest(const AcquireResourceListRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1369
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1373
		AcquireResourceListResponse lResponse;

		// CgsPoolModule.cpp:1376
		CgsResource::Entry * lpListEntry;

		// CgsPoolModule.cpp:1380
		ResourcePtr<CgsResource::ResourceIdList> lpList;

		// CgsPoolModule.cpp:1384
		ResourceHandle * lpOutList;

		// CgsPoolModule.cpp:1387
		uint32_t luCount;

		// CgsPoolModule.cpp:1391
		uint32_t luIndex;

	}
	Events::PoolEvent::GetPoolId(/* parameters */);
	GetPoolIndex(/* parameters */);
	{
		// CgsPoolModule.cpp:1377
		CgsDev::StrStream lStrStream;

	}
	ResourcePtr<CgsResource::ResourceIdList>::ResourcePtr(/* parameters */);
	ResourcePtr<CgsResource::ResourceIdList>::operator=(/* parameters */);
	BaseResourcePtr::Reset(/* parameters */);
	ResourceHandle::Construct(/* parameters */);
	ResourcePtr<CgsResource::ResourceIdList>::operator->(/* parameters */);
	Events::AcquireResourceListRequest::GetHandles(/* parameters */);
	ResourceIdList::GetNumIds(/* parameters */);
	{
		// CgsPoolModule.cpp:1394
		CgsResource::Entry * lpEntry;

		Events::PoolEvent::GetPoolId(/* parameters */);
		GetPoolIndex(/* parameters */);
		ResourcePtr<CgsResource::ResourceIdList>::operator->(/* parameters */);
		ResourceIdList::GetId(/* parameters */);
	}
	BaseResourcePtr::GetResourceHandle(/* parameters */);
	Events::AcquireResourceListResponse::Construct(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::AcquireResourceListRequest::GetHandles(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	Events::AcquireResourceListResponse::SetHandles(/* parameters */);
	Events::AcquireResourceListResponse::SetNumHandles(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	~ResourcePtr(/* parameters */);
	{
		// CgsPoolModule.cpp:1395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ResourcePtr<CgsResource::ResourceIdList>::operator->(/* parameters */);
		ResourceIdList::GetId(/* parameters */);
		operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPoolModule.cpp:1388
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
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
}

void CgsResource::Pool::SetEntryStatus(int32_t  liResourceIndex, uint8_t  lu8NewStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::ConvertToRWResource(const Resource &  lOutRwResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsSystemResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetGraphicsSystemResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsResource::SmallResource::CreateFromRWResource(const const Resource &  lRwResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSmallResourcePS3.h:235
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsSmallResourcePS3.h:236
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsSmallResourcePS3.h:237
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BaseResourcePtr::SetResource(const ResourceHandle::Resource *  lpResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::InitCachedValues() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::Type::FixDown(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceType.cpp:216
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::Type::FixUp(void *  lpResource, const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceType.cpp:233
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::GetEntry(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BasePriorityQueue::GetEntryIndex(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:220
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BasePriorityQueue::GetEntryPriority(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:236
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:178
		float32_t _lfXStart;

		// CgsResourceDebugComponent.cpp:179
		float32_t _lfYStart;

		// CgsResourceDebugComponent.cpp:180
		float32_t _lfXGap;

		// CgsResourceDebugComponent.cpp:181
		float32_t lfYPos;

		// CgsResourceDebugComponent.cpp:187
		int32_t liIndex;

		{
			// CgsResourceDebugComponent.cpp:190
			const const LoadBundleRequest & lRequest;

			// CgsResourceDebugComponent.cpp:191
			int32_t liPriority;

			CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::GetEntry(/* parameters */);
			CgsContainers::BasePriorityQueue::GetEntryPriority(/* parameters */);
		}
		CgsContainers::BasePriorityQueue::GetEntryIndex(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsResourceDebugComponent.cpp:169
		int32_t liIndex;

	}
}

void CgsResource::DebugComponent::DumpStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:232
		char * lpBuffer;

		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::DebugComponent::DumpPoolStatistics(const CgsDev::Log::LogFileBuffered &  lLogFile, const Pool *  lpPool) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:274
		int32_t liVideoMemSize;

		// CgsResourceDebugComponent.cpp:275
		int32_t liMainMemSize;

		// CgsResourceDebugComponent.cpp:276
		int32_t liMainMemFree;

		// CgsResourceDebugComponent.cpp:277
		int32_t liVideoMemFree;

		// CgsResourceDebugComponent.cpp:278
		int32_t liMainMemUsed;

		// CgsResourceDebugComponent.cpp:279
		int32_t liVideoMemUsed;

	}
	Heap::GetTotalSize(/* parameters */);
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

void CgsResource::DebugPoolWindow::AddHeap(const Heap *  lpHeap, const char *  lpcName, const char *  lpcShortName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolWindow.cpp:65
		const CgsResource::DebugPoolWindow::HeapDisplayInfo & lHeapInfo;

	}
	CgsCore::StrCpy(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	{
		// CgsDebugPoolWindow.cpp:63
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::DebugPoolWindow::Reset(const Pool *  lpPool) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::ResetWindow(int32_t  liWindowIndex, const Pool *  lpPool) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::SetSortMode(CgsResource::EDebugSortMode  leSortMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugPoolTextures::SetRenderMode(CgsResource::EDebugTextureRenderMode  leRenderMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::DebugComponent::UpdateWindows() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceDebugComponent.cpp:456
		int32_t i;

	}
	DebugPoolTextures::SetRenderMode(/* parameters */);
	DebugPoolTextures::SetSortMode(/* parameters */);
	PoolModule::GetPoolIndex(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::Initialize(CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> *  lpEntries, uint64_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:182
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:206
		uint64_t liIndex;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const ValidatePoolResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoValidatePoolRequest(const ValidatePoolRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1628
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1629
		ValidatePoolResponse lResponse;

		// CgsPoolModule.cpp:1630
		bool lbResult;

	}
	Events::PoolEvent::GetPoolId(/* parameters */);
	GetPoolIndex(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	Events::PoolEvent::Construct(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	{
		// CgsPoolModule.cpp:1638
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:1626
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::Pool::PrintOverheadMemoryRequired(const CgsResource::Pool::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:812
		uint32_t luIndex;

		// CgsResourcePool.h:813
		uint32_t luTotal;

		{
			// CgsResourcePool.h:822
			uint32_t luHeapOverhead;

		}
	}
}

void CgsResource::PoolModule::CreatePool(const CgsResource::Pool::InitOptions *  lpInitOptions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:913
		int32_t liIndex;

	}
	{
		// CgsPoolModule.cpp:916
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsPoolModule.cpp:922
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPoolModule.cpp:937
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::MemoryIO::CreateResourceResponse::GetResource(Resource *  lpResource, ResourceDescriptor *  lpDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const Resource &  lRwResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(const const ResourceDescriptor &  lRwDescriptor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Pop(CreatePoolRequest *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const CreatePoolResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoCreatePoolRequest(const CreateResourceResponse *  lpCreateResourceResponse, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1251
		CgsResource::Pool::InitOptions lInitOptions;

		// CgsPoolModule.cpp:1252
		int32_t liDependency;

		// CgsPoolModule.cpp:1253
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1254
		Resource lRwResource;

		// CgsPoolModule.cpp:1255
		ResourceDescriptor lRwResourceDescriptor;

		// CgsPoolModule.cpp:1256
		ResourceHandle::Resource lResource;

		// CgsPoolModule.cpp:1257
		Entry::ResourceDescriptor lResourceDescriptor;

		// CgsPoolModule.cpp:1258
		CreatePoolRequest lCreatePoolRequest;

		// CgsPoolModule.cpp:1259
		bool lbReturnFromPop;

		// CgsPoolModule.cpp:1293
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1294
		CreatePoolResponse lResponse;

		InitOptions(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		SmallResource::SmallResource(/* parameters */);
		SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		CreatePoolRequest(/* parameters */);
		CgsMemory::MemoryIO::CreateResourceResponse::GetResource(/* parameters */);
		SmallResource::SmallResource(/* parameters */);
		SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		SmallResourceDescriptor::GetGraphicsSystemResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		SmallResourceDescriptor::GetGraphicsLocalResourceDescriptor(/* parameters */);
		rw::BaseResourceDescriptor::GetAlignment(/* parameters */);
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
		rw::BaseResourceDescriptor::SetAlignment(/* parameters */);
		CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Pop(/* parameters */);
		GetPoolIndex(/* parameters */);
		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		Events::PoolEvent::Construct(/* parameters */);
		Events::PoolEvent::SetUser(/* parameters */);
		Events::PoolEvent::SetPoolId(/* parameters */);
		PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
		~CreatePoolRequest(/* parameters */);
		~SmallResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~InitOptions(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:1280
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:1281
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPoolModule.cpp:1270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolModule::ProcessReceiverQueue(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:858
		const CgsModule::Event * lpEvent;

		// CgsPoolModule.cpp:859
		int32_t liEventSize;

		// CgsPoolModule.cpp:860
		int32_t liEventId;

	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
	}
	CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
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
	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::FindFirstEmptyIndex(uint64_t  liStartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:402
		uint64_t liIndex;

	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::ReAddIndex(uint64_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:226
		uint64_t liKey;

	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::RemoveEntryInternal(uint64_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:353
		uint64_t liFirstEmptyIndex;

		FindFirstEmptyIndex(/* parameters */);
	}
	{
		// CgsLinearHashTable.h:366
		uint64_t liSwapIndex;

		ReAddIndex(/* parameters */);
	}
	{
		// CgsLinearHashTable.h:357
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLinearHashTable.h:358
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLinearHashTable.h:374
		uint64_t liSwapIndex;

		ReAddIndex(/* parameters */);
	}
	ReAddIndex(/* parameters */);
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

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::RemoveEntry(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:307
		uint64_t liStart;

		// CgsLinearHashTable.h:307
		uint64_t liIndex;

		{
			// CgsLinearHashTable.h:305
			CgsDev::StrStream lStrStream;

		}
	}
}

extern void NewResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetHeapAlignment(int32_t  liMemoryType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Heap::GetHeapAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~NewResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::VerifyHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:536
		uint64_t liIndex;

		// CgsLinearHashTable.h:537
		bool lbSuccess;

		{
			// CgsLinearHashTable.h:543
			uint64_t liFoundIndex;

			{
				// CgsLinearHashTable.h:547
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsLinearHashTable.h:551
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::FindEntryPosition(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:491
		uint64_t liStart;

		// CgsLinearHashTable.h:491
		uint64_t liIndex;

	}
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

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::Initialize(uint64_t *  lpKeys, ImportHashTableValue *  lpValues, uint64_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:167
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventReceiverQueue<16384,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Type::operator new(size_t  luSize, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::Construct(const CgsResource::PoolModule::InitOptions *  lpInitOptions, rw::IResourceAllocator *  lpAllocator, rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:55
		uint32_t luType;

		// CgsPoolModule.cpp:56
		int32_t liIndex;

		// CgsPoolModule.cpp:94
		CgsResource::Type * lpIDListType;

		// CgsPoolModule.cpp:102
		int32_t liGameSpecificType;

		// CgsPoolModule.cpp:112
		CgsResource::ScratchPool::InitOptions lScratchInit;

		// CgsPoolModule.cpp:141
		void * lpDistributionMem;

	}
	CgsModule::EventReceiverQueue<16384,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	Type::operator new(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	IdListResourceType::IdListResourceType(/* parameters */);
	InitOptions(/* parameters */);
	ScratchPool::GetOverheadMemoryRequired(/* parameters */);
	ImportHashTable::CalculateRequiredSize(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::CalculateRequiredSize(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~InitOptions(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	CgsContainers::FifoQueue<CgsResource::Events::CreatePoolRequest,128>::Construct(/* parameters */);
	CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Construct(/* parameters */);
	{
		// CgsPoolModule.cpp:130
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:131
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:167
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:168
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:164
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:165
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindFirstEmptyIndex(uint64_t  liStartIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:388
		uint64_t liIndex;

	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::ReAddIndex(uint64_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:212
		uint64_t liKey;

	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::RemoveEntryInternal(uint64_t  liEntryIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:339
		uint64_t liFirstEmptyIndex;

		FindFirstEmptyIndex(/* parameters */);
	}
	{
		// CgsLinearSOAHashTable.h:352
		uint64_t liSwapIndex;

		ReAddIndex(/* parameters */);
	}
	{
		// CgsLinearSOAHashTable.h:343
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLinearSOAHashTable.h:344
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsLinearSOAHashTable.h:360
		uint64_t liSwapIndex;

		ReAddIndex(/* parameters */);
	}
	ReAddIndex(/* parameters */);
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

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::RemoveEntry(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:293
		uint64_t liStart;

		// CgsLinearSOAHashTable.h:293
		uint64_t liIndex;

		{
			// CgsLinearSOAHashTable.h:291
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::VerifyHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:522
		uint64_t liIndex;

		// CgsLinearSOAHashTable.h:523
		bool lbSuccess;

		{
			// CgsLinearSOAHashTable.h:529
			uint64_t liFoundIndex;

			{
				// CgsLinearSOAHashTable.h:533
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsLinearSOAHashTable.h:537
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindEntryPosition(uint64_t  lKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearSOAHashTable.h:477
		uint64_t liStart;

		// CgsLinearSOAHashTable.h:477
		uint64_t liIndex;

	}
}

void CgsResource::Pool::ExecuteBatchAddressedAllocation(int32_t  liMemType, AllocRequestAddressed *  lpRequests, AllocResult *  lpResults, uint32_t  luNumRequests, bool  lbFreeOnFailure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:1103
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BaseDefragPoolModuleState::DoFinalAllocations() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Pool::ExecuteBatchAddressedAllocation(/* parameters */);
	{
		// CgsBaseDefragPoolModuleState.cpp:262
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBaseDefragPoolModuleState.cpp:272
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BaseDefragPoolModuleState::BuildFinalRelocationData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseDefragPoolModuleState.cpp:342
		uint32_t luIndex;

		// CgsBaseDefragPoolModuleState.cpp:344
		int32_t liTotalToMove;

		// CgsBaseDefragPoolModuleState.cpp:347
		RelocateRequest * lpRequests;

		// CgsBaseDefragPoolModuleState.cpp:348
		RelocateSource * lpSources;

	}
	{
		// CgsBaseDefragPoolModuleState.cpp:354
		uint16_t luLinearNode;

		{
			// CgsBaseDefragPoolModuleState.cpp:358
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsBaseDefragPoolModuleState.cpp:357
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBaseDefragPoolModuleState.cpp:340
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Pool::GetAllowDefragmentation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GenerateLinearHeap(int32_t  liMemType, LinearHeapNode *  lpLinearHeap, uint16_t  luMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:1086
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BaseDefragPoolModuleState::BeginDefragment(int32_t  liCurrentMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseDefragPoolModuleState.cpp:195
		int32_t liIndex;

		Pool::GenerateLinearHeap(/* parameters */);
		{
			// CgsBaseDefragPoolModuleState.cpp:200
			int32_t liEntryIndex;

			// CgsBaseDefragPoolModuleState.cpp:201
			CgsResource::Entry * lpEntry;

			{
				// CgsBaseDefragPoolModuleState.cpp:203
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBaseDefragPoolModuleState.cpp:209
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsBaseDefragPoolModuleState.cpp:202
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Pool::FixUpEntry(CgsResource::Entry *  lpResourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:878
		Resource lRwResource;

	}
}

void CgsResource::Pool::PostFixUpEntry(CgsResource::Entry *  lpResourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:903
		Resource lRwResource;

	}
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::GetListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::GetFirstIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::IsFinalFixup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListRequest::IsFixUpDependenciesSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FixUpAndResolveResourceListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListResponse::Construct(int32_t  liEventId, int32_t  liPoolId, const ID *  lpIds, int32_t  liNumEntries, ResourceHandle  lListHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListResponse::SetIds(const ID *  lpIds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListResponse::SetNumEntries(int32_t  liNumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FixUpAndResolveResourceListResponse::SetListHandle(ResourceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const FixUpAndResolveResourceListResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoFixUpAndResolveResourceListRequest(const FixUpAndResolveResourceListRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1487
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1488
		int32_t liResourceIndex;

		// CgsPoolModule.cpp:1489
		CgsResource::Entry * lpResource;

		// CgsPoolModule.cpp:1490
		EntryListResource * lpEntryList;

		// CgsPoolModule.cpp:1513
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1514
		FixUpAndResolveResourceListResponse lResponse;

		// CgsPoolModule.cpp:1520
		ResourceHandle lHandle;

		Events::PoolEvent::GetPoolId(/* parameters */);
	}
	GetPoolIndex(/* parameters */);
	{
	}
	Pool::SetEntryStatus(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	Events::FixUpAndResolveResourceListResponse::Construct(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	Events::FixUpAndResolveResourceListResponse::SetIds(/* parameters */);
	Events::FixUpAndResolveResourceListResponse::SetNumEntries(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Pool::GetNumEntriesInPurgatory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleV2::ResourceEntry::GetUncompressedSize(uint32_t  luMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleV2::ResourceEntry::GetUncompresssedResourceDescriptor(Entry::ResourceDescriptor *  lpDest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceBundle2.h:366
		int32_t liIndex;

	}
}

void CgsResource::BundleV2::ResourceEntry::GetUncompresssedAlignment(uint32_t  luMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::BuildAllocRequestForEntry(AllocListSet *  lpList, uint16_t  liIndex, CgsResource::Entry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:1040
		uint32_t luMemType;

		// CgsResourcePool.h:1041
		intptr_t liIntPtr;

		{
			// CgsResourcePool.h:1049
			BaseResourceDescriptor lBaseDescriptor;

			{
				// CgsResourcePool.h:1057
				int32_t liCurrentCount;

			}
		}
	}
}

void CgsResource::Pool::DecEntryRefCount(int32_t  liResourceIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AllocListSet::ClearCountsAndResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::GetRefCountThreshold() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UnloadResourceListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnloadResourceListRequest::GetListId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnloadResourceListResponse::Construct(int32_t  liEventId, int32_t  liPoolId, const ID  lListId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnloadResourceListResponse::SetListId(const ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const UnloadResourceListResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::DoUnloadResourceListRequest(const UnloadResourceListRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1548
		int32_t liPoolIndex;

		// CgsPoolModule.cpp:1549
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:1550
		UnloadResourceListResponse lResponse;

	}
	{
		// CgsPoolModule.cpp:1546
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Events::PoolEvent::GetPoolId(/* parameters */);
	GetPoolIndex(/* parameters */);
	Events::PoolEvent::GetPoolId(/* parameters */);
	Events::UnloadResourceListResponse::Construct(/* parameters */);
	PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
	Events::PoolEvent::GetEventId(/* parameters */);
	Events::PoolEvent::SetEventId(/* parameters */);
	Events::PoolEvent::SetPoolId(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::PoolIO::InputBuffer::GetPoolInputQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModuleIO.h:233
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Push(const AllocateResourceListRequest *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::ProcessInputBuffer(const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1068
		const InputBuffer * lpBuffer;

		// CgsPoolModule.cpp:1071
		const CgsModule::Event * lpEvent;

		// CgsPoolModule.cpp:1072
		int32_t liEventSize;

		// CgsPoolModule.cpp:1073
		int32_t liEventId;

	}
	PoolIO::InputBuffer::GetPoolInputQueue(/* parameters */);
	CgsModule::VariableEventQueue<8192,16>::GetFirstEvent(/* parameters */);
	PoolIO::InputBuffer::GetPoolInputQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BaseDefragPoolModuleState::SetMaxToMove(int32_t  liMaxToMove) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IntelliFragPoolModuleState::Begin(IntelliFragParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BaseDefragPoolModuleState::SetMaxToMove(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsIntelliFragPoolModuleState.cpp:63
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void AllocateResourceListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const AllocateResourceListResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AllocatePoolModuleState::GetAllocSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::AllocatePoolModuleState::GetPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UpdateAllocating(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:520
		CgsResource::AllocatePoolModuleState::EAllocateResult leResult;

	}
	{
		// CgsPoolModule.cpp:532
		OutputBuffer * lpOutputBuffer;

		// CgsPoolModule.cpp:536
		AllocateResourceListResponse lResponse;

		Events::PoolEvent::SetEventId(/* parameters */);
		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:589
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:551
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:564
		IntelliFragParams lParams;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BaseDefragPoolModuleState::GetAllocationResult(int32_t  liCurrentMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Pool::IsDefragmenting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::IntelliFragPoolModuleState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntelliFragPoolModuleState.cpp:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsIntelliFragPoolModuleState.cpp:95
		int32_t liIndex;

		// CgsIntelliFragPoolModuleState.cpp:95
		int32_t liHeap;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::BaseDefragPoolModuleState::AddAddressedAllocRequest(uint32_t  luSize, uint32_t  luOffset, void *  lpOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseDefragPoolModuleState.h:183
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::BaseDefragPoolModuleState::AddRelocateRequest(uint16_t  luNode, uint32_t  luOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBaseDefragPoolModuleState.h:205
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::IntelliFragPoolModuleState::RunDefragAlgorithm(AllocListSet *  lpAllocListSet, LinearHeapNode *  lpLinearHeapNodes, int32_t  liNumLinearHeapNodes, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIntelliFragPoolModuleState.cpp:183
		int32_t liIndex;

		// CgsIntelliFragPoolModuleState.cpp:184
		uint32_t luNextAddress;

		// CgsIntelliFragPoolModuleState.cpp:185
		int32_t liCurrentNode;

		// CgsIntelliFragPoolModuleState.cpp:186
		uint32_t luNumAllocRequests;

		// CgsIntelliFragPoolModuleState.cpp:187
		uint32_t luCurrentAllocRequest;

		// CgsIntelliFragPoolModuleState.cpp:188
		uint32_t luHeapAlignment;

		// CgsIntelliFragPoolModuleState.cpp:189
		uint32_t luSize;

		// CgsIntelliFragPoolModuleState.cpp:190
		AllocRequest * lpRequests;

		// CgsIntelliFragPoolModuleState.cpp:191
		uint32_t luRemainingFreeSpace;

	}
	Pool::GetHeapAlignment(/* parameters */);
	{
		// CgsIntelliFragPoolModuleState.cpp:222
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BaseDefragPoolModuleState::AddAddressedAllocRequest(/* parameters */);
	BaseDefragPoolModuleState::AddRelocateRequest(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::EmergencyFragPoolModuleState::Begin(EmergencyFragParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsEmergencyFragPoolModuleState.cpp:64
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolModule::UpdateIntelliFrag(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:662
		CgsResource::IntelliFragPoolModuleState::EIntelliFragResult leResult;

	}
	{
		// CgsPoolModule.cpp:714
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:676
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:688
		EmergencyFragParams lParams;

	}
}

void CgsResource::EmergencyFragPoolModuleState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEmergencyFragPoolModuleState.cpp:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsEmergencyFragPoolModuleState.cpp:96
		int32_t liIndex;

		// CgsEmergencyFragPoolModuleState.cpp:96
		int32_t liHeap;

	}
}

void CgsResource::PoolModule::UpdateEmergencyFrag(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:807
		CgsResource::EmergencyFragPoolModuleState::EEmergencyFragResult leResult;

	}
	{
		// CgsPoolModule.cpp:839
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:821
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:833
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::EmergencyFragPoolModuleState::RunDefragAlgorithm(AllocListSet *  lpAllocListSet, LinearHeapNode *  lpLinearHeapNodes, int32_t  liNumLinearHeapNodes, int32_t  liMemType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEmergencyFragPoolModuleState.cpp:187
		int32_t liIndex;

		// CgsEmergencyFragPoolModuleState.cpp:188
		uint32_t luNextAddress;

		// CgsEmergencyFragPoolModuleState.cpp:189
		int32_t liFirstFreeNode;

		// CgsEmergencyFragPoolModuleState.cpp:190
		uint32_t luNumAllocRequests;

		// CgsEmergencyFragPoolModuleState.cpp:191
		uint32_t luCurrentAllocRequest;

		// CgsEmergencyFragPoolModuleState.cpp:192
		uint32_t luHeapAlignment;

		// CgsEmergencyFragPoolModuleState.cpp:193
		uint32_t luSize;

		// CgsEmergencyFragPoolModuleState.cpp:194
		AllocRequest * lpRequests;

	}
	BaseDefragPoolModuleState::AddRelocateRequest(/* parameters */);
	Pool::GetHeapAlignment(/* parameters */);
	BaseDefragPoolModuleState::AddAddressedAllocRequest(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolModule::AllocateResourceList(ID  lListId, int32_t  liPoolId, const CgsResource::BundleV2::ResourceEntry *  lpEntries, int32_t  liNumEntries, bool *  lpOutNeeds, ResourceHandle::Resource *  lpOutResources, bool  lbLiveUpdate, bool  lbAllowFailiure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:1697
		int32_t liPoolIndex;

	}
	{
		// CgsPoolModule.cpp:1696
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetPoolIndex(/* parameters */);
	{
		// CgsPoolModule.cpp:1723
		CgsResource::Pool * lpPool;

		GetPoolIndex(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// CgsPoolModule.cpp:1704
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:1728
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::PoolModule::DoAllocateResourceListRequest(const AllocateResourceListRequest *  lpRequest, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Events::PoolEvent::GetPoolId(/* parameters */);
}

void CgsResource::DeAllocatePoolModuleState::GetPendingAllocation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UpdateDeAllocating(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:608
		CgsResource::DeAllocatePoolModuleState::EDeAllocateResult leResult;

	}
	{
		// CgsPoolModule.cpp:643
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:622
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	DeAllocatePoolModuleState::GetPendingAllocation(/* parameters */);
}

extern void AllocateResourceListRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Pop(AllocateResourceListRequest *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UpdateIdle(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:499
		AllocateResourceListRequest lRequest;

	}
	CgsContainers::FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>::Pop(/* parameters */);
}

void CgsResource::Pool::GetDependency(int32_t  liDependencyIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePool.h:1009
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::Pool::GetNumDependencies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolModule::UpdateLiveUpdate(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:747
		CgsResource::LiveUpdatePoolModuleState::EAllocateResult leResult;

	}
	{
		// CgsPoolModule.cpp:791
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:772
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:758
		AllocateResourceListResponse lResponse;

		Events::PoolEvent::SetEventId(/* parameters */);
		PoolIO::OutputBuffer::GetPoolOutputQueue(/* parameters */);
		PoolIO::PoolQueueTemplate<8192>::AddEvent(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void CgsResource::DebugPoolTypeList::AddReferenceToType(uint32_t  luTypeId, const const Entry::ResourceDescriptor &  lSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:171
		int32_t liIndex;

	}
	rw::BaseResourceDescriptors<3u>::operator+=(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::DebugPoolTypeList::Update(float32_t  lfTimeStep, CgsDev::DebugUI::InputEvent  leEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugPoolTypeList.cpp:98
		int32_t liIndex;

		// CgsDebugPoolTypeList.cpp:99
		int32_t liMemType;

		// CgsDebugPoolTypeList.cpp:117
		uint32_t luMainMemSum;

		{
			// CgsDebugPoolTypeList.cpp:131
			Entry::ResourceDescriptor lDescriptor;

			{
				// CgsDebugPoolTypeList.cpp:135
				uint32_t luSize;

				{
					// CgsDebugPoolTypeList.cpp:139
					uint32_t luHeapAlign;

					rw::BaseResourceDescriptor::SetSize(/* parameters */);
				}
				rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
			}
			Heap::GetHeapAlignment(/* parameters */);
			rw::BaseResourceDescriptor::GetSize(/* parameters */);
			~SmallResourceDescriptor(/* parameters */);
		}
		rw::BaseResourceDescriptor::SetSize(/* parameters */);
	}
}

void CgsModule::EventReceiverQueue<128,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::LoadBundleRequest,128u,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>::Construct(uint32_t  luMaxEntries, uint32_t *  lpuEntryIndices, int32_t *  lpiEntryPriorities, LoadBundleRequest *  lpEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BasePriorityQueue::Construct(uint32_t  luMaxEntries, uint32_t  luNumberToCheck, uint32_t *  lpuEntryIndices, int32_t *  lpiEntryPriorities) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPriorityQueue.h:163
		uint32_t luIndex;

	}
}

void CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::UnloadBundleRequest,128u,128>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>::Construct(uint32_t  luMaxEntries, uint32_t *  lpuEntryIndices, int32_t *  lpiEntryPriorities, UnloadBundleRequest *  lpEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<unsigned int>(const const unsigned int &  a, const const unsigned int &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::Construct(const CgsResource::BundleLoaderModule::InitOptions *  lpInitOptions, rw::IResourceAllocator *  lpAllocator, rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:92
		uint32_t luRequiredJobBufferSize;

		CgsModule::EventReceiverQueue<128,16>::Construct(/* parameters */);
		CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
		CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::LoadBundleRequest,128u,128>::Construct(/* parameters */);
		CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::UnloadBundleRequest,128u,128>::Construct(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::Construct(/* parameters */);
		CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
		CgsContainers::FifoQueue<CgsResource::RunningLoad,4>::Construct(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:120
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:121
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:122
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::Events::FixUpAndResolveResourceListResponse::GetListHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::ProcessPoolResponses(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:454
		const CgsModule::Event * lpEvent;

		// CgsBundleLoaderModule.cpp:455
		int32_t liEventSize;

		// CgsBundleLoaderModule.cpp:456
		int32_t liEventId;

	}
	CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsModule::VariableEventQueue<4096,16>::Clear(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:506
		int32_t liIndex;

		Events::FixUpAndResolveResourceListResponse::GetListHandle(/* parameters */);
		{
			// CgsBundleLoaderModule.cpp:528
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// CgsBundleLoaderModule.cpp:480
		uint32_t luDestSize;

		// CgsBundleLoaderModule.cpp:481
		void * lpDestAddr;

		BundleV2::ResourceEntry::GetUncompressedSize(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::LockBuffersForIO(IOBuffer *  lpInputBuffer, const IOBuffer *  lpOutputBuffer0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IOBuffer::LockForRead(/* parameters */);
}

void CgsResource::PoolModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPoolModule.cpp:453
		int32_t liIndex;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		// CgsPoolModule.cpp:376
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		// CgsPoolModule.cpp:394
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:418
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:442
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:401
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
	}
	{
		// CgsPoolModule.cpp:385
		PoolPerfMonHelper _lPerfHelper;

		PoolPerfMonHelper::PoolPerfMonHelper(/* parameters */);
		PoolPerfMonHelper::~PoolPerfMonHelper(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::AddEvent(const const BindResult &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[119] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::AddEvent(const const UnBindResult &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[121] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::PostWorldInputBuffer::GetPadMappingQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1108
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPads::UpdateMapping(const ActionMapping *  lpMapping, int32_t  liPortId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::ProcessMappingQueue(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModule.cpp:387
		int32_t liIndex;

		// CgsInputModule.cpp:388
		int32_t liLength;

		InputIO::PostWorldInputBuffer::GetPadMappingQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:394
			const const PadMapping & lMapping;

			CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetEvent(/* parameters */);
			InputPads::UpdateMapping(/* parameters */);
		}
		InputIO::PostWorldInputBuffer::GetPadMappingQueue(/* parameters */);
		{
			// CgsInputModule.cpp:398
			uint32_t luIter;

			InputPads::UpdateMapping(/* parameters */);
		}
	}
	{
		// CgsInputModule.cpp:406
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModule.cpp:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::PreWorldInputBuffer::GetPlayJoltEffectEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:913
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetStopRumbleEffectEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:955
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetPlayRumbleEffectEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:927
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetChangeVolumeRumbleEffectEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:941
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:969
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetGameTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetRumblePaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetRumbleEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PreWorldInputBuffer::GetWheelForceFeedbackEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::ProcessRumbleRequests(const PreWorldInputBuffer *  lpInput, bool  lbTakeInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModule.cpp:429
		int32_t liIndex;

		// CgsInputModule.cpp:430
		int32_t liLength;

		// CgsInputModule.cpp:480
		float32_t lfTimeStep;

		InputIO::PreWorldInputBuffer::GetPlayJoltEffectEventQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:442
			const const PlayJoltEffectEvent & lJoltEvent;

			CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetEvent(/* parameters */);
		}
		InputIO::PreWorldInputBuffer::GetPlayJoltEffectEventQueue(/* parameters */);
		InputIO::PreWorldInputBuffer::GetStopRumbleEffectEventQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:453
			const const StopRumbleEffectEvent & lStopRumbleEvent;

			CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetEvent(/* parameters */);
		}
		InputIO::PreWorldInputBuffer::GetStopRumbleEffectEventQueue(/* parameters */);
		InputIO::PreWorldInputBuffer::GetPlayRumbleEffectEventQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:464
			const const PlayRumbleEffectEvent & lPlayRumbleEvent;

			CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetEvent(/* parameters */);
		}
		InputIO::PreWorldInputBuffer::GetPlayRumbleEffectEventQueue(/* parameters */);
		InputIO::PreWorldInputBuffer::GetChangeVolumeRumbleEffectEventQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:475
			const const ChangeVolumeRumbleEffectEvent & lChangeVolumeRumbleEvent;

			CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetEvent(/* parameters */);
		}
		InputIO::PreWorldInputBuffer::GetChangeVolumeRumbleEffectEventQueue(/* parameters */);
		InputIO::PreWorldInputBuffer::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::GetGameTimerStatus(/* parameters */);
		CgsSystem::TimerStatus::GetCurrentTimeStep(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::PlayJoltEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseRumbleEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BaseInputEvent::Construct(int32_t  liPlayer, int32_t  liPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEvent(const const PlayJoltEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[128] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::PlayRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEffect, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(const const PlayRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[130] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::ChangeVolumeRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, const const JoltEffect &  lJoltEffect, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(const const ChangeVolumeRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[138] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::StopRumbleEffectEvent::Construct(int32_t  liPlayer, int32_t  liPort, int32_t  liRumbleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(const const StopRumbleEffectEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[130] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(const const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[120] __PRETTY_FUNCTION__;

	{
		// CgsBaseEventQueue.h:313
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::AddEvent(const const PadMapping &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[119] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputPlayer::IsConnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPort::IsBound() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPlayer::Bind(int32_t  liPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPort::Bind(int32_t  liPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PostWorldInputBuffer::GetBindRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1080
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::BindResult::Construct(int32_t  liPlayer, int32_t  liPort, CgsInput::EBindResult  leResultCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::ProcessBindRequestQueue(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModule.cpp:302
		BindResult lBindResult;

		// CgsInputModule.cpp:304
		int32_t liStaticPort;

		// CgsInputModule.cpp:305
		int32_t liLength;

		InputIO::PostWorldInputBuffer::GetBindRequestQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:308
			int32_t liIndex;

			{
				// CgsInputModule.cpp:311
				const const BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest & lBindRequest;

				// CgsInputModule.cpp:313
				int32_t liPort;

				// CgsInputModule.cpp:314
				CgsInput::EBindResult leBindResult;

				CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::AddEvent(/* parameters */);
				InputIO::BaseInputEvent::GetPlayer(/* parameters */);
			}
			InputIO::PostWorldInputBuffer::GetBindRequestQueue(/* parameters */);
			CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetEvent(/* parameters */);
			InputIO::BaseInputEvent::GetPort(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetMaxLength(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputPlayer::UnBind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputPort::UnBind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PostWorldInputBuffer::GetUnBindRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1094
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputIO::UnBindResult::Construct(int32_t  liPlayer, int32_t  liPort, CgsInput::EUnbindResult  leResultCode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::ProcessUnbindRequestQueue(const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModule.cpp:355
		int32_t liLength;

		// CgsInputModule.cpp:356
		int32_t liIndex;

		InputIO::PostWorldInputBuffer::GetUnBindRequestQueue(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetLength(/* parameters */);
		{
			// CgsInputModule.cpp:361
			UnBindResult lUnBindResult;

			// CgsInputModule.cpp:364
			const const UnBindRequest & lUnBindRequest;

			CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetEvent(/* parameters */);
			InputIO::BaseInputEvent::GetPlayer(/* parameters */);
			InputIO::BaseInputEvent::GetPort(/* parameters */);
			CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::AddEvent(/* parameters */);
		}
		InputIO::PostWorldInputBuffer::GetUnBindRequestQueue(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::PostWorldInputBuffer::GetWheelFFSpring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1122
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputPads::SetWheelSpring(const const CgsInput::Device::WheelFFSpring &  lWheelFFSpring) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::PostWorldUpdate(IOBufferStack *  lpInputBufferStack, const PostWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	InputIO::PostWorldInputBuffer::GetWheelFFSpring(/* parameters */);
	InputPads::SetWheelSpring(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsInput::InputIO::ActionMapping::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1835
		uint32_t luIndex;

	}
}

void CgsInput::InputModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::Prepare(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Prepare(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Prepare(/* parameters */);
	{
		// CgsInputModule.cpp:93
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Release(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Release(/* parameters */);
}

void CgsInput::DevicePS3Pad::Update(bool  lbConnected, CgsInput::Manager::EInputPort  lePort, CgsInput::Device::EType  leType, int32_t  liWheelHandle, bool  lbWheelClassA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputDevicePS3Pad.cpp:967
		lgDevPosition lWheelData;

	}
	{
		// CgsInputDevicePS3Pad.cpp:979
		int32_t liButton;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	{
		// CgsInputDevicePS3Pad.cpp:1054
		int32_t liButton;

	}
	{
		// CgsInputDevicePS3Pad.cpp:1072
		float32_t kfSteeringSpringMaxPower;

		// CgsInputDevicePS3Pad.cpp:1092
		uint32_t luRet;

		{
			// CgsInputDevicePS3Pad.cpp:1093
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsInputDevicePS3Pad.cpp:1097
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsInputDevicePS3Pad.cpp:1100
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
}

void CgsInput::InputIO::OutputBuffer::GetPadInfo(int32_t  liPortId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1273
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsInputModuleIO.h:1274
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsInputModuleIO.h:1275
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputIO::PadOutputInformation::GetActionInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PadOutputInformation::SetPlayerId(int32_t  liPlayerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PadOutputInformation::SetType(CgsInput::Device::EType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PadOutputInformation::GetAxisInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::OutputBuffer::GetPadDisconnectedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1255
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputIO::ActionInfo::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetValue(float32_t  lfRawValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsNotPressed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsPressed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsReleased() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::SetAsNotReleased() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::PadOutputInformation::SetPadIdle(bool  lbIdle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::OutputBuffer::GetBindResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1223
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Append(const const BaseEventQueue<CgsInput::InputIO::BindResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::OutputBuffer::GetUnbindResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:1239
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Append(const const BaseEventQueue<CgsInput::InputIO::UnBindResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputModule::PreWorldUpdate(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const PreWorldInputBuffer *  lpInput, OutputBuffer *  lpOutput, bool  lbTakeInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	InputIO::OutputBuffer::GetBindResultQueue(/* parameters */);
	Append<8>(/* parameters */);
	InputIO::OutputBuffer::GetUnbindResultQueue(/* parameters */);
	Append<8>(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::FileSystem::GetDiskCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::operator new(size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileSystem::Open(const char *  lpcFileName, CgsFileSystem::FileAccess  leFileAccessType, int32_t  liPriority, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[5] __FUNCTION__;

	{
		// CgsFileSystem.h:388
		FileFutexHelper lFutexHelper;

		// CgsFileSystem.h:389
		int32_t liResult;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::Open(None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void rw::core::filesys::AsyncOp::operator delete(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::GetContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileSystem::Close(uint32_t  luFileID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[6] __FUNCTION__;

	{
		// CgsFileSystem.h:451
		FileFutexHelper lFutexHelper;

		// CgsFileSystem.h:452
		bool lbResult;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::Close(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::FileSystem::RegisterMemFile(const char *  lpcFileName, void *  lpData, uint64_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[16] __FUNCTION__;

	{
		// CgsFileSystem.h:533
		FileFutexHelper lFutexHelper;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::RegisterMemFile(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::FileSystem::UnregisterMemFile(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[18] __FUNCTION__;

	{
		// CgsFileSystem.h:551
		FileFutexHelper lFutexHelper;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::UnregisterMemFile(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskRead::StartAsyncRead(void **  lppBuffer, uint32_t *  lpuBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[15] __FUNCTION__;

	{
		// CgsStreamDeviceDiskRead.h:388
		FileFutexHelper lFutexHelper;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::StreamDeviceDiskRead::StartAsyncRead(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
		CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
		EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::FileLog::LogCloseEnd(const char *  lpcFileName, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::StreamDeviceDiskWrite::Construct(CgsFileSystem::FileSystem *  lpFileSystem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:48
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::Open(uint32_t  luFileId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:72
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::Close() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:92
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:144
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::Seek(uint64_t  luLocation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::Tell() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:192
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::StartAsyncRead(void **  lppBuffer, uint32_t *  lpuBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:213
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::StartAsyncWrite(void **  lppBuffer, uint32_t *  lpuBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:236
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::StopAsyncRead(uint32_t  luAmountRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:250
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::StopAsyncWrite(uint32_t  luAmountWritten, bool  lbEndOfFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:265
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::UpdateSeek() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:292
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::GetAmountOfDataInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::StreamDeviceDiskWrite::GetAmountOfSpaceInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskWrite.cpp:314
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::FileLog::FileLog(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::FileLog::~FileLog(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::DiskCache::GetOverheadRequired(int32_t  liMaxFilesToCache, int32_t  liCacheBlockSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDiskCache.h:303
		int32_t liTotal;

	}
}

void CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::CalculateRequiredSize(uint32_t volatile  liListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::Initialize(CgsContainers::LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> *  lpEntries, uint32_t volatile  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:182
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:206
		uint32_t volatile liIndex;

	}
}

void CgsContainers::FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Construct(CacheDebugEntry *  lpBuffer, int32_t  liBufferLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LocklessQueue<char*>::Construct(char **  lpBuffer, uint16_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Pop(CacheDebugEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DebugComponentFileSystem::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugComponentFileSystem.cpp:410
		AutoFutex lMutex;

		// CgsDebugComponentFileSystem.cpp:411
		CacheDebugEntry lDebugEntry;

		EA::Thread::AutoFutex::AutoFutex(/* parameters */);
		CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Pop(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		EA::Thread::AutoFutex::~AutoFutex(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void rw::core::filesys::DeviceDriver::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MemDeviceFileHandle::operator new(size_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MemDeviceFileHandle::MemDeviceFileHandle(void *  lpData, uint64_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::Open(const char *  lpcName, unsigned int  luFlags, rw::core::filesys::Handle **) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:178
		char[256] lacLocalFileName;

		// CgsDeviceMemFileSystem.cpp:199
		char * c;

		// CgsDeviceMemFileSystem.cpp:208
		char * lpcEntryName;

		// CgsDeviceMemFileSystem.cpp:220
		uint32_t luFileIndex;

	}
	MemDeviceFileHandle::operator new(/* parameters */);
	MemDeviceFileHandle::MemDeviceFileHandle(/* parameters */);
	{
		// CgsDeviceMemFileSystem.cpp:166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsDeviceMemFileSystem.cpp:173
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::MemDeviceFileHandle::GetPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MemDeviceFileHandle::GetDataPos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::Read(void *  lpFH, void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:269
		MemDeviceFileHandle * lpHandle;

		// CgsDeviceMemFileSystem.cpp:271
		unsigned int luToRead;

	}
	{
		// CgsDeviceMemFileSystem.cpp:286
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::DeviceMemFileSystem::Write(void *  lpFH, const void *  lpBuffer, unsigned int  luBufferSize, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::MemDeviceFileHandle::SetPos(uint64_t  luPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::MemDeviceFileHandle::MovePointer(uint64_t  amount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::DeviceMemFileSystem::Seek(void *  lpFH, uint64_t  luOffset, int  liWhence, rw::core::filesys::DeviceDriver *, void *) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:321
		MemDeviceFileHandle * lpHandle;

	}
	MemDeviceFileHandle::SetPos(/* parameters */);
	MemDeviceFileHandle::GetPos(/* parameters */);
	{
		// CgsDeviceMemFileSystem.cpp:353
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	MemDeviceFileHandle::MovePointer(/* parameters */);
	MemDeviceFileHandle::SetPos(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::Resize(void *  fh, uint64_t  newsize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:388
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::Delete(const char *  filePath) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:402
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::Move(const char *  currentName, const char *  newName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:416
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::FindBegin(const char *  filePattern, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:430
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::FindNext(void *  h, rw::core::filesys::DeviceDriver::FindData *  findData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:443
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::DirectoryCreate(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:456
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::DirectoryRemove(const char *  directory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:469
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceMemFileSystem::FindEnd(void *  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceMemFileSystem.cpp:482
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::Device::Open(const char *  lpcName, uint32_t  luFlags, Handle::DeviceHandle *  lpOutHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.cpp:42
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::Device::Close(Handle::DeviceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.cpp:50
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::Device::Read(Handle::DeviceHandle  lHandle, void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.cpp:61
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::Device::Write(Handle::DeviceHandle  lHandle, const void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.cpp:72
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::Device::Seek(Handle::DeviceHandle  lHandle, uint64_t  luOffset, uint64_t *  lpuOutResultPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.cpp:82
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::DeviceManager::operator new(size_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeviceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalDeviceSlot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OperationPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::Futex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::AtomicInt(uint64_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::Device::GetPhysicalParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDevice.h:129
		CgsFileSystem::Device * lpPhysical;

	}
}

void CgsFileSystem::FileLog::LogReadBegin(const char *  lpcFileName, uint64_t  luPosition, uint64_t  luSize, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileLog::LogCloseBegin(const char *  lpcFileName, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::StreamDeviceDiskRead::GetCurrentFilePriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStreamDeviceDiskRead.h:336
		double_t lfBufferSize;

		// CgsStreamDeviceDiskRead.h:337
		double_t lfAmountInBuffer;

	}
}

void CgsFileSystem::FileLog::LogReadEnd(const char *  lpcFileName, uint64_t  luSize, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileLog::LogOpenEnd(const char *  lpcFileName, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::ReadStream::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::ReadStream::Read(uint32_t  luAmountToRead, void *  lpDest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamHeaderFunc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsFileSystem::ReadStream::Read(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1007
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Events::BundleLoaderEvent::GetFileName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsResource::BundleV2::ContainsDebugData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamDebugDataFunc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1030
		int32_t liRequiredBufferSize;

		{
			// CgsBundleLoaderModule.cpp:1036
			int32_t liDebugDataOffset;

			// CgsBundleLoaderModule.cpp:1052
			int32_t liResourceEntriesOffset;

		}
	}
	CgsFileSystem::ReadStream::Read(/* parameters */);
	CgsFileSystem::ReadStream::Read(/* parameters */);
}

void CgsResource::BundleLoaderModule::StreamEntryListFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1088
		int32_t liResourceEntriesOffset;

		// CgsBundleLoaderModule.cpp:1104
		int32_t liResourceDataOffset;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsFileSystem::ReadStream::Read(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsFileSystem::ReadStream::Read(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1107
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		Events::BundleLoaderEvent::GetFileName(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::ReadStream::GetAmountOfDataInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::ReadStream::Tell() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamDataFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1136
		uint32_t luOffset;

		// CgsBundleLoaderModule.cpp:1137
		uint32_t luRemaining;

		// CgsBundleLoaderModule.cpp:1138
		void * lpData;

		// CgsBundleLoaderModule.cpp:1140
		int32_t liAvailableData;

		// CgsBundleLoaderModule.cpp:1141
		uint32_t luRead;

		// CgsBundleLoaderModule.cpp:1143
		uint32_t luDataCount;

		// CgsBundleLoaderModule.cpp:1144
		uint32_t luReadCount;

		CgsFileSystem::ReadStream::GetAmountOfDataInBuffer(/* parameters */);
	}
	BundleV2::ResourceEntry::GetDiskSize(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsFileSystem::ReadStream::Read(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsFileSystem::ReadStream::GetAmountOfDataInBuffer(/* parameters */);
	CgsFileSystem::ReadStream::Tell(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1159
		uint32_t luToSkip;

		// CgsBundleLoaderModule.cpp:1160
		uint32_t luSkipped;

		CgsFileSystem::ReadStream::Tell(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsFileSystem::ReadStream::Read(/* parameters */);
		CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
}

void CgsFileSystem::StreamDeviceDiskRead::StopAsyncRead(uint32_t  luAmountRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[14] __FUNCTION__;

	{
		// CgsStreamDeviceDiskRead.h:397
		FileFutexHelper lFutexHelper;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::StreamDeviceDiskRead::StopAsyncRead(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
		CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::ReadStream::StopAsyncRead(uint32_t  luAmountRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::ReadStream::StartAsyncRead(void **  lppBuffer, uint32_t *  lpuBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamDataAsJobFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1224
		uint32_t luOffset;

		// CgsBundleLoaderModule.cpp:1225
		uint32_t luRemaining;

		// CgsBundleLoaderModule.cpp:1226
		void * lpData;

	}
	CgsFileSystem::ReadStream::GetAmountOfDataInBuffer(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1250
		uint32_t luOrigStreamPos;

		// CgsBundleLoaderModule.cpp:1251
		uint32_t luStreamPos;

	}
	CgsFileSystem::ReadStream::StopAsyncRead(/* parameters */);
	CgsFileSystem::StreamDeviceDiskRead::StopAsyncRead(/* parameters */);
	EA::Jobs::Job::SetCode(/* parameters */);
	CgsFileSystem::ReadStream::Tell(/* parameters */);
	CgsFileSystem::ReadStream::StartAsyncRead(/* parameters */);
	CgsFileSystem::StreamDeviceDiskRead::StartAsyncRead(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsFileSystem::ReadStream::StopAsyncRead(/* parameters */);
	CgsFileSystem::StreamDeviceDiskRead::StopAsyncRead(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1275
		const StreamDistributeTargetEntry & lDistEntry;

		BundleV2::ResourceEntry::GetDiskSize(/* parameters */);
		{
			// CgsBundleLoaderModule.cpp:1277
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::ReadStream::IsBufferComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::StreamDeviceDiskRead::IsEndOfFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::StreamCompressedDataAsJobFunc(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModule.cpp:1345
		int32_t liOffset;

		// CgsBundleLoaderModule.cpp:1346
		int32_t liRemaining;

		// CgsBundleLoaderModule.cpp:1347
		int32_t liAmountToRead;

		// CgsBundleLoaderModule.cpp:1348
		void * lpSrcData;

		// CgsBundleLoaderModule.cpp:1349
		int32_t liSecondaryBufferUsed;

		CgsFileSystem::ReadStream::IsBufferComplete(/* parameters */);
		CgsFileSystem::ReadStream::GetAmountOfDataInBuffer(/* parameters */);
		{
			// CgsBundleLoaderModule.cpp:1390
			int32_t liOrigStreamPos;

			// CgsBundleLoaderModule.cpp:1391
			int32_t liStreamPos;

			// CgsBundleLoaderModule.cpp:1392
			int32_t liStreamBufferRemaining;

			CgsFileSystem::ReadStream::Tell(/* parameters */);
			CgsFileSystem::ReadStream::StartAsyncRead(/* parameters */);
			CgsFileSystem::StreamDeviceDiskRead::StartAsyncRead(/* parameters */);
			{
				// CgsBundleLoaderModule.cpp:1411
				int32_t liToSkip;

				rw::core::stdc::Min(/* parameters */);
			}
			CgsFileSystem::ReadStream::StopAsyncRead(/* parameters */);
			{
				// CgsBundleLoaderModule.cpp:1490
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	BundleV2::ResourceEntry::GetDiskSize(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// CgsBundleLoaderModule.cpp:1454
		int32_t liDestSize;

		// CgsBundleLoaderModule.cpp:1455
		void * lpDestAddr;

		BundleV2::ResourceEntry::GetUncompressedSize(/* parameters */);
	}
}

void CgsResource::BundleV2::IsMainMemOptimised() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleV2::IsGraphicsMemOptimised() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::UpdateStream(OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsBundleLoaderModule.cpp:832
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Events::BundleLoaderEvent::GetFileName(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::ReadStream::LogAmountOfDataInBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BundleLoaderModule::Update(IOBufferStack *  lpInputBuffer_UpdateStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer_Update *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::FileSystem::CloseReadStream(ReadStream  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[16] __FUNCTION__;

	{
		// CgsFileSystem.h:513
		FileFutexHelper lFutexHelper;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::CloseReadStream(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:332
		int8_t liIndex;

	}
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::PopIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:275
		int8_t liNewIndex;

	}
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::GetNumFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileSystem::GetReadStreamIndex(ReadStream  lStream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFileSystem.h:715
		int32_t liIndex;

		{
			// CgsFileSystem.h:716
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::ResourceModule::AddCloseReadStreamRequest(const CloseReadStreamRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:849
		CloseReadStreamResponse * lpResponse;

		// CgsResourceModule.h:855
		CgsResource::ResourceModule::PendingFileResponse * lpRecord;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
					{
						(None)unknown_arg
						(None)unknown_arg
					}
					{
						(None)unknown_arg
						(None)unknown_arg
						{
							(None)unknown_arg
							(None)unknown_arg
							(None)unknown_arg
						}
					}
					{
						{
							(None)unknown_arg
						}
					}
				}
				{
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
				{
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
			}
		}
		{
			// CgsResourceModule.h:852
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
			}
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
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
					{
					}
				}
			}
		}
		{
			// CgsResourceModule.h:856
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
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					{
						(None)unknown_arg
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
					{
						(None)unknown_arg
					}
					{
						(None)unknown_arg
						(None)unknown_arg
					}
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							{
								{
								}
							}
							{
								(None)unknown_arg
								{
									(None)unknown_arg
									{
									}
								}
							}
						}
					}
				}
				{
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
								(None)unknown_arg
								{
								}
							}
						}
						{
							(None)unknown_arg
							{
								(None)unknown_arg
								{
								}
							}
						}
					}
				}
			}
		}
	}
}

void CgsResource::ResourceModule::AddCloseReadStreamRequest(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		FileSystemAlloc<CgsResource::Events::CloseReadStreamResponse>(/* parameters */);
	}
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsResource::Events::ReadStreamEvent::Construct(/* parameters */);
	CgsResource::Events::FileEvent::GetEventId(/* parameters */);
	CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Pop(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsFileSystem::FileSystem::GetReadStreamIndex(/* parameters */);
	CgsFileSystem::FileSystem::CloseReadStream(/* parameters */);
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourceModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileLog::LogOpenBegin(const char *  lpcFileName, int32_t  liPriority, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::ReadStream::Construct(CgsFileSystem::StreamDeviceDiskRead *  lpStreamDevice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileSystem::OpenReadStream(const char *  lpcFileName, void *  lpBuffer, uint32_t  luBufferSize, uint32_t  luNumBlocks, int32_t  liNormalPriority, int32_t  liHighPrioirty, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsFileSystem.h:495
	ReadStream lResult;

	const char[15] __FUNCTION__;

	{
		// CgsFileSystem.h:494
		FileFutexHelper lFutexHelper;

		// CgsFileSystem.h:495
		ReadStream lResult;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					{
						{
						}
					}
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
							}
						}
					}
				}
			}
		}
		{
			{
				(None)unknown_arg
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
				{
					(None)unknown_arg
					{
						(None)unknown_arg
						{
						}
					}
				}
			}
		}
	}
}

void CgsFileSystem::FileSystem::OpenReadStream(None, None, None, None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsFileSystem.h:495
	ReadStream lResult;

	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsResource::Events::OpenStreamRequest::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetNumBlocks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetNormalPriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetHighPriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenStreamRequest::GetUseHDCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddOpenReadStreamRequest(const OpenReadStreamRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:761
		OpenReadStreamResponse * lpResponse;

		// CgsResourceModule.h:762
		ReadStream lReadStream;

		// CgsResourceModule.h:779
		CgsResource::ResourceModule::PendingFileResponse * lpRecord;

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
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							{
								{
								}
							}
							{
								(None)unknown_arg
								{
									(None)unknown_arg
									{
									}
								}
							}
						}
					}
				}
				{
					{
						(None)unknown_arg
						{
							(None)unknown_arg
							{
								(None)unknown_arg
								{
								}
							}
						}
						{
							(None)unknown_arg
							{
								(None)unknown_arg
								{
								}
							}
						}
					}
				}
			}
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
				{
					(None)unknown_arg
					(None)unknown_arg
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
					{
						(None)unknown_arg
						(None)unknown_arg
					}
					{
						(None)unknown_arg
						(None)unknown_arg
						{
							(None)unknown_arg
							(None)unknown_arg
							(None)unknown_arg
						}
					}
					{
						{
							(None)unknown_arg
						}
					}
				}
				{
					{
						(None)unknown_arg
						(None)unknown_arg
					}
				}
				{
					{
						(None)unknown_arg
						{
							(None)unknown_arg
						}
					}
				}
			}
		}
		{
			// CgsResourceModule.h:776
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
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
				(None)unknown_arg
			}
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
			{
				{
					(None)unknown_arg
					{
						(None)unknown_arg
					}
					{
					}
				}
			}
		}
		{
			// CgsResourceModule.h:780
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
			}
		}
		{
			(None)unknown_arg
		}
	}
}

void CgsResource::ResourceModule::AddOpenReadStreamRequest(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsResource::Events::OpenStreamRequest::GetFileName(/* parameters */);
	CgsResource::Events::OpenStreamRequest::GetNormalPriority(/* parameters */);
	CgsFileSystem::FileSystem::OpenReadStream(/* parameters */);
	CgsResource::Events::OpenStreamRequest::GetHighPriority(/* parameters */);
	CgsResource::Events::OpenStreamRequest::GetBuffer(/* parameters */);
	CgsResource::Events::OpenStreamRequest::GetBufferSize(/* parameters */);
	CgsResource::Events::OpenStreamRequest::GetNumBlocks(/* parameters */);
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	FileSystemAlloc<CgsResource::Events::OpenReadStreamResponse>(/* parameters */);
	CgsResource::Events::FileEvent::GetEventId(/* parameters */);
	CgsResource::Events::ReadStreamEvent::Construct(/* parameters */);
	CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Pop(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourceIO::InputBuffer::GetResourceQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModuleIO.h:80
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

void CgsResource::ResourceModule::AddCreatePoolRequest(InputBuffer *  lpPoolModuleInputBuffer, const CreatePoolRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const CreatePoolRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddDeletePoolRequest(InputBuffer *  lpPoolModuleInputBuffer, const DeletePoolRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddLoadBundleRequest(InputBuffer_Update *  lpBundleLoaderModuleInputBuffer, const LoadBundleRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:507
		InputBuffer_Update::LoadBundleRequestQueue * lpBundleRequestQueue;

	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Update::GetLoadBundleRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:79
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::AddUnloadBundleRequest(InputBuffer_Update *  lpBundleLoaderModuleInputBuffer, const UnloadBundleRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:529
		InputBuffer_Update::UnloadBundleRequestQueue * lpBundleRequestQueue;

	}
}

void CgsResource::BundleLoaderIO::InputBuffer_Update::GetUnloadBundleRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:82
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::AddAcquireResourceRequest(InputBuffer *  lpPoolModuleInputBuffer, const AcquireResourceRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:548
		InputBuffer::PoolInputQueue * lpPoolQueue;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const AcquireResourceRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddAcquireResourceListRequest(InputBuffer *  lpPoolModuleInputBuffer, const AcquireResourceListRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:567
		InputBuffer::PoolInputQueue * lpPoolQueue;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const AcquireResourceListRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddUnacquireResourceRequest(InputBuffer *  lpPoolModuleInputBuffer, const UnacquireResourceRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:586
		InputBuffer::PoolInputQueue * lpPoolQueue;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const UnacquireResourceRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddInvalidatePoolRequest(InputBuffer *  lpPoolModuleInputBuffer, const InvalidatePoolRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:605
		InputBuffer::PoolInputQueue * lpPoolQueue;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const InvalidatePoolRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddValidatePoolRequest(InputBuffer *  lpPoolModuleInputBuffer, const ValidatePoolRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:624
		InputBuffer::PoolInputQueue * lpPoolQueue;

	}
}

void CgsResource::PoolIO::PoolQueueTemplate<8192>::AddEvent(const const ValidatePoolRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddCreateBankRequest(InputBuffer *  lpMemoryModuleInputBuffer, const CreateBankRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddCreateAllocatorRequest(InputBuffer *  lpMemoryModuleInputBuffer, const CreateAllocatorRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddDestroyAllocatorRequest(InputBuffer *  lpMemoryModuleInputBuffer, const DestroyAllocatorRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddCreateLinearAllocatorRequest(InputBuffer *  lpMemoryModuleInputBuffer, const CreateLinearAllocatorRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddCreateGeneralAllocatorRequest(InputBuffer *  lpMemoryModuleInputBuffer, const CreateGeneralAllocatorRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddOpenWriteStreamRequest(const OpenWriteStreamRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:832
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::AddCloseWriteStreamRequest(const CloseWriteStreamRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:895
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::AddOpenFileRequest(const OpenFileRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:912
		OpenFileResponse * lpResponse;

		// CgsResourceModule.h:914
		int32_t liFileId;

		// CgsResourceModule.h:915
		FileHandle lHandle;

		// CgsResourceModule.h:932
		CgsResource::ResourceModule::PendingFileResponse * lpRecord;

		{
			// CgsResourceModule.h:929
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsResourceModule.h:933
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsResource::Events::OpenFileRequest::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::GetFileAccess() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::GetPriority() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::GetUseHDCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileHandle::Construct(CgsFileSystem::FileSystem *  lpFileSystem, uint32_t  luFileId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileHandleEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, FileHandle  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileHandleEvent::SetFileHandle(FileHandle  lFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileHandle::operator=(const const FileHandle &  lOtherHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddCloseFileRequest(const CloseFileRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.h:954
		CloseFileResponse * lpResponse;

		// CgsResourceModule.h:962
		CgsResource::ResourceModule::PendingFileResponse * lpRecord;

		{
			// CgsResourceModule.h:957
			CgsDev::StrStream lStrStream;

		}
		{
			// CgsResourceModule.h:963
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsFileSystem::FileHandle::GetFileId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddRegisterMemFileRequest(const RegisterMemFileRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::RegisterMemFileRequest::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::RegisterMemFileRequest::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::RegisterMemFileRequest::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::AddUnregisterMemFileRequest(const UnregisterMemFileRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::UnregisterMemFileRequest::GetFileName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::ProcessResourceRequests(const InputBuffer *  lpInput, InputBuffer *  lpMemoryModuleInputBuffer, InputBuffer_Update *  lpBundleLoaderModuleInputBuffer, InputBuffer *  lpPoolModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:597
		int32_t liEventId;

		// CgsResourceModule.cpp:598
		int32_t liEventSize;

		// CgsResourceModule.cpp:599
		const CgsModule::Event * lpEvent;

		// CgsResourceModule.cpp:600
		const InputBuffer * lpInputBuffer;

		ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	AddOpenFileRequest(/* parameters */);
	ResourceIO::InputBuffer::GetResourceQueue(/* parameters */);
	{
	}
	AddCreateGeneralAllocatorRequest(/* parameters */);
	{
	}
	{
	}
	AddDestroyBankRequest(/* parameters */);
	AddCreatePoolRequest(/* parameters */);
	AddCreateBankRequest(/* parameters */);
	AddValidatePoolRequest(/* parameters */);
	AddInvalidatePoolRequest(/* parameters */);
	AddUnacquireResourceRequest(/* parameters */);
	AddAcquireResourceListRequest(/* parameters */);
	AddAcquireResourceRequest(/* parameters */);
	AddUnloadBundleRequest(/* parameters */);
	AddLoadBundleRequest(/* parameters */);
	AddUnregisterMemFileRequest(/* parameters */);
	AddRegisterMemFileRequest(/* parameters */);
	AddCloseFileRequest(/* parameters */);
	AddOpenWriteStreamRequest(/* parameters */);
	AddCloseWriteStreamRequest(/* parameters */);
	AddDestroyAllocatorRequest(/* parameters */);
	AddCreateAllocatorRequest(/* parameters */);
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
}

void CgsResource::BundleLoaderIO::OutputBuffer::GetStreamRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBundleLoaderModuleIO.h:151
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceModule::ProcessBundleLoaderStreamRequests(const OutputBuffer *  lpBundleLoaderModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:817
		int32_t liEventId;

		// CgsResourceModule.cpp:818
		int32_t liEventSize;

		// CgsResourceModule.cpp:819
		const CgsModule::Event * lpEvent;

		// CgsResourceModule.cpp:821
		const OutputBuffer::StreamRequestQueue * lpRequestQueue;

		BundleLoaderIO::OutputBuffer::GetStreamRequestQueue(/* parameters */);
		CgsModule::VariableEventQueue<256,16>::GetFirstEvent(/* parameters */);
		AddOpenReadStreamRequest(/* parameters */);
	}
	AddCloseReadStreamRequest(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsResource::ResourcePerfMonHelper::ResourcePerfMonHelper(int32_t  liMonitorID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePerfMonHelper::~ResourcePerfMonHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::operator CgsMemory::MemoryIO::InputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::operator CgsResource::BundleLoaderIO::InputBuffer_Update*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::operator CgsResource::PoolIO::InputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::operator CgsResource::BundleLoaderIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::operator CgsResource::PoolIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>::IOHelper(IOBufferStack *  lpStack, const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>::operator CgsResource::BundleLoaderIO::InputBuffer_Record*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::operator CgsMemory::MemoryIO::OutputBuffer*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::OutputBuffer::GetFileSystemStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModuleIO.h:111
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::FileSystem::HasDiskErrorOccured() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::FileSystemStatusInterface::SetDiskErrorOccured(bool  lbDiskErrorOccured) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::~IOHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:400
		CgsResource::ResourceModule::EUpdateResult leResult;

		// CgsResourceModule.cpp:402
		ResourcePerfMonHelper lPerfHelper;

		// CgsResourceModule.cpp:409
		IOHelper<CgsMemory::MemoryIO::InputBuffer> lpMemoryModuleInputBuffer;

		// CgsResourceModule.cpp:410
		IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update> lpBundleLoaderModuleInputBuffer;

		// CgsResourceModule.cpp:411
		IOHelper<CgsResource::PoolIO::InputBuffer> lpPoolModuleInputBuffer;

		// CgsResourceModule.cpp:412
		IOHelper<CgsMemory::MemoryIO::OutputBuffer> lpMemoryModuleOutputBuffer;

		// CgsResourceModule.cpp:413
		IOHelper<CgsResource::BundleLoaderIO::OutputBuffer> lpBundleLoaderModuleOutputBuffer;

		// CgsResourceModule.cpp:414
		IOHelper<CgsResource::PoolIO::OutputBuffer> lpPoolModuleOutputBuffer;

	}
	ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
	CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::IOHelper(/* parameters */);
	{
		// CgsResourceModule.cpp:420
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:430
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:455
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:472
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:490
		IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record> lpBundleLoaderModuleRecordInputBuffer;

		CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>::IOHelper(/* parameters */);
		CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record>::~IOHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:507
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	{
		// CgsResourceModule.cpp:522
		ResourcePerfMonHelper lPerfHelper;

		ResourcePerfMonHelper::ResourcePerfMonHelper(/* parameters */);
		ResourceIO::OutputBuffer::GetFileSystemStatusInterface(/* parameters */);
		CgsFileSystem::FileSystem::HasDiskErrorOccured(/* parameters */);
		ResourceIO::FileSystemStatusInterface::SetDiskErrorOccured(/* parameters */);
		ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
	}
	CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update>::~IOHelper(/* parameters */);
	CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer>::~IOHelper(/* parameters */);
	ResourcePerfMonHelper::~ResourcePerfMonHelper(/* parameters */);
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

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FixedIndexedPool<CgsResource::ResourceModule::PendingFileResponse,16,std::int8_t>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Construct(CgsResource::ResourceModule::PendingFileResponse *  lpObjects, int8_t *  lpiIndices, int32_t  liMaxLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:149
		int8_t liIndex;

	}
}

void CgsResource::ResourceModule::Construct(CgsResource::ResourceModule::InitOptions *  lpOptions, rw::IResourceAllocator *  lpAllocator, rw::IResourceAllocator *  lpDebugAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceModule.cpp:92
		ResourceDescriptor lFSHeapSize;

		// CgsResourceModule.cpp:93
		ResourceDescriptor lExtendedFSHeapSize;

	}
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsContainers::FixedIndexedPool<CgsResource::ResourceModule::PendingFileResponse,16,std::int8_t>::Construct(/* parameters */);
	CgsContainers::IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>::Clear(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~BaseResourceDescriptors(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>::AddEntry(uint32_t volatile  lKey, DiskCacheEntry *volatileconst*  lpInitialValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLinearHashTable.h:258
		uint32_t volatile liStart;

		// CgsLinearHashTable.h:258
		uint32_t volatile liIndex;

		{
			// CgsLinearHashTable.h:256
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsFileSystem::Handle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::AsyncOp::GetLastOperationResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceAsyncOp.h:132
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::AsyncOp::GetLastOperationHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDeviceAsyncOp.h:125
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::RingBuffer<CgsFileSystem::CacheDebugEntry>::Push(const CacheDebugEntry *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void CgsFileSystem::RemapDevice::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsFileSystem::PhysicalPS3Device::Init() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Pop() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:332
		int8_t liIndex;

	}
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::PopIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:275
		int8_t liNewIndex;

	}
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::GetNumFree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::PhysicalPS3Device::Open(const char *  lpcName, uint32_t  luFlags, Handle::DeviceHandle *  lpOutHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicalPS3Device.cpp:65
		char[256] lacTempName;

		// CgsPhysicalPS3Device.cpp:66
		char[256] lacNewName;

		// CgsPhysicalPS3Device.cpp:70
		int32_t liIndex;

		// CgsPhysicalPS3Device.cpp:96
		int32_t liOpenFlags;

		// CgsPhysicalPS3Device.cpp:130
		bool lbHadError;

		// CgsPhysicalPS3Device.cpp:131
		int lhFile;

		// CgsPhysicalPS3Device.cpp:180
		PhysicalPS3Handle * lpHandle;

		{
			// CgsPhysicalPS3Device.cpp:61
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsCore::StrCpy(/* parameters */);
		CgsCore::StrCpy(/* parameters */);
		{
			// CgsPhysicalPS3Device.cpp:136
			int32_t liOpenResult;

			Device::CallErrorCallback(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Pop(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	{
		// CgsPhysicalPS3Device.cpp:181
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Device::CallErrorCallback(/* parameters */);
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Push(PhysicalPS3Handle *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::GetObjectIndex(const PhysicalPS3Handle *  lpObject) {
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

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::PushIndex(int8_t  liObjectIndex) {
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

void CgsFileSystem::PhysicalPS3Device::Close(Handle::DeviceHandle  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicalPS3Device.cpp:195
		PhysicalPS3Handle * lpHandle;

	}
	CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::Push(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFileSystem::PhysicalPS3Device::Read(Handle::DeviceHandle  lHandle, void *  lpBuffer, uint32_t  luBufferSize, uint32_t *  lpuOutResultSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// CgsPhysicalPS3Device.cpp:220
tryread:
	// CgsPhysicalPS3Device.cpp:254
retryreadclose:
	// CgsPhysicalPS3Device.cpp:260
retryreadopen:
	{
		// CgsPhysicalPS3Device.cpp:208
		PhysicalPS3Handle * lpHandle;

		// CgsPhysicalPS3Device.cpp:210
		bool lbHadError;

		// CgsPhysicalPS3Device.cpp:213
		bool _lbLimitBadwidth;

		// CgsPhysicalPS3Device.cpp:223
		uint64_t luAmountRead;

		// CgsPhysicalPS3Device.cpp:224
		int32_t liReadResult;

		// CgsPhysicalPS3Device.cpp:272
		int32_t liOpenResult;

		// CgsPhysicalPS3Device.cpp:288
		uint64_t luPos;

		// CgsPhysicalPS3Device.cpp:289
		int32_t liSeekResult;

	}
	Device::CallErrorCallback(/* parameters */);
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
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	Device::CallErrorCallback(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::GetUsedList(PhysicalPS3Handle **  lpUsedList, int32_t  liMaxListLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIndexedPool.h:402
		int32_t liIndex;

		// CgsIndexedPool.h:403
		int32_t liNewIndex;

		{
			// CgsIndexedPool.h:400
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsFileSystem::PhysicalPS3Device::Shutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPhysicalPS3Device.cpp:419
		PhysicalPS3Handle *[16] lapHandles;

		// CgsPhysicalPS3Device.cpp:420
		int32_t liNumHandles;

		// CgsPhysicalPS3Device.cpp:421
		int32_t liIndex;

	}
	CgsContainers::IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>::GetUsedList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSound::Playback::Registry::~Registry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::RwacCommandQueue::~RwacCommandQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsSound::Playback::GenericRwacFactory::~GenericRwacFactory(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Factory::~Factory(/* parameters */);
	CgsSound::Playback::Factory::operator delete(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::Selectable::SetHighlighted(bool  lbHighlighted) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ClearFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	{
		// BrnSelectable.h:395
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

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

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KE_WORLD_PERFMON_PAGE = 4;

::::SPLICE_TYPE_UNKNOWN = -1;

::::kfSteeringPower = [63, 128, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

Snd9::AZIMUTH_DEFAULT = [201, 116, 36, 0];

Snd9::FILE_SIZE_UNKNOWN = -1;

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

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnProgression::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

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

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

BrnGameState::KF_OUT_OF_RANGE_TO_LOSE_TIME = [65, 160, 0, 0];

BrnGameState::KF_DONT_SHOW_RIVAL = [191, 128, 0, 0];

BrnGameState::KF_NO_INPUT_TIME_FOR_MODE_EXIT = [64, 128, 0, 0];

BrnGameState::KF_STATIONARY_TIME_FOR_MODE_EXIT = [64, 64, 0, 0];

BrnGameState::KF_MAX_STATIONARY_TIME_FOR_MODE_EXIT = [65, 32, 0, 0];

BrnGameState::KF_PURSUIT_INTRO_TIME = [63, 128, 0, 0];

BrnGameState::KE_GAMESTATE_PERFMON_PAGE = 5;

BrnGameState::GameStateModuleIO::KF_RACE_START_PRESSED_VALUE = [62, 128, 0, 0];

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

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

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

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

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

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::boostparamsasset::AirEarning = -1891887715510008784;

Attrib::Hash::boostparamsasset::AirSpinEarning = -4352757040966857742;

Attrib::Hash::boostparamsasset::BarrelRollEarning = -1035108252361594191;

Attrib::Hash::boostparamsasset::BoostChainMin = -2343420446165730523;

Attrib::Hash::boostparamsasset::BoostSlamStrength = -7766274748171065765;

Attrib::Hash::boostparamsasset::BoostSpinIncrease = -6502808958254691887;

Attrib::Hash::boostparamsasset::BurnRateBoost = -3648956812362844215;

Attrib::Hash::boostparamsasset::CleanLanding = -6630060647361528260;

Attrib::Hash::boostparamsasset::ComboModifier = -4173559742227163691;

Attrib::Hash::boostparamsasset::GrindingEarning = -4363492811123288973;

Attrib::Hash::boostparamsasset::Handbrake180Earning = -103186127672983849;

Attrib::Hash::boostparamsasset::MaxSpeedBoostModifier = -9097027527144457540;

Attrib::Hash::boostparamsasset::NearMissBoostEarning = -8500197340308483883;

Attrib::Hash::boostparamsasset::OnComing = -8123106555570631457;

Attrib::Hash::boostparamsasset::RubbingEarning = -5657847537147772142;

Attrib::Hash::boostparamsasset::SlamEarning = -1643247501148292748;

Attrib::Hash::boostparamsasset::SpeedForMaxEarning = -1574127377284081412;

Attrib::Hash::boostparamsasset::StuntSmashEarning = -7010097363749819817;

Attrib::Hash::boostparamsasset::TailgatingEarning = -1992470372002763846;

Attrib::Hash::boostparamsasset::TradingPaintEarning = -6557756835454833620;

Attrib::Hash::boostparamsasset::TrafficCheck = -4306685691871961585;

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

Attrib::ClassName::boostparamsasset = -2728788314741784660;

Attrib::ClassName::sparkeffect = -3821321658093367652;

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_HALF_DURATION = [63, 0, 0, 0];

BrnWorld::KF_BLUESTWOS_ONE_OVER_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_TIMEOUT = [61, 204, 204, 205];

BrnWorld::KF_EVENT_START_RESET_DEFER_TIME = [62, 25, 153, 154];

BrnWorld::KF_BOOST_EFFECT_LOSS_MAX = [64, 0, 0, 0];

BrnWorld::KF_BOOST_EFFECT_LOSS_MIN = [63, 128, 0, 0];

BrnWorld::KF_MIN_BOOST_BEFORE_USE = [62, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_BEFORE_BOUNCE = [60, 35, 215, 10];

BrnWorld::KF_MIN_SPIN_ANGLE = [66, 52, 0, 0];

BrnWorld::KF_BOUNCE_BOOST_FLASH_BAR_TIME = [63, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_TIME = [63, 160, 0, 0];

BrnWorld::KF_MIN_AIR_TIME_FOR_BOOST = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

BrnWorld::KF_MAX_BOOST = [66, 200, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsInput::kfDefaultButtonThreshold = [61, 204, 204, 205];

CgsInput::kfButtonActivezoneThreshold = [63, 102, 102, 102];

CgsInput::kfButtonDeadzoneThreshold = [0, 0, 0, 0];

CgsInput::kfTriggerActivezoneThreshold = [63, 115, 51, 51];

CgsInput::kfTriggerDeadzoneThreshold = [61, 76, 204, 205];

CgsInput::kfAxisActivezoneThreshold = [63, 102, 102, 102];

CgsInput::kfAxisDeadzoneThreshold = [62, 76, 204, 205];

CgsInput::kfHighPrecisionAxisActivezoneThreshold = [63, 102, 102, 102];

CgsInput::kfHighPrecisionAxisDeadzoneThreshold = [61, 204, 204, 205];

CgsInput::kfRumbleValueScale = [71, 127, 255, 0];

CgsInput::kfInvRumbleValueScale = [55, 128, 0, 128];

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsFileSystem::KAC_CACHEFILEMAGICNUMBER = "DC01";

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsSystem::KE_CAMERA_RESOLUTION = 2;

CgsSystem::KI_WEBCAM_PHOTO_FORMAT = 1433536677;

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

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

