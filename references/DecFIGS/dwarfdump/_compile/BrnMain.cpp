struct _CGprogram;

struct _CGparameter;

struct lua_State;

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

struct PB_INSTANCE;

struct CgsRenderTarget;

// Declaration
struct CgsBlendStateFactory {
public:
	// CgsBlendStateFactory.h:61
	CgsBlendStateFactory();

private:
	// CgsBlendStateFactory.h:57
	extern BlendState *[9] saBlendStates;

}

// Declaration
struct CgsRasterizerStateFactory {
public:
	// CgsRasterizerStateFactory.h:56
	CgsRasterizerStateFactory();

private:
	// CgsRasterizerStateFactory.h:52
	extern RasterizerState *[3] saRasterizerStates;

}

// Declaration
struct CgsDepthStencilStateFactory {
public:
	// CgsDepthStencilStateFactory.h:57
	CgsDepthStencilStateFactory();

private:
	// CgsDepthStencilStateFactory.h:53
	extern DepthStencilState *[5] saDepthStencilStates;

}

// Declaration
struct BrnRendererModule {
public:
	BrnRendererModule();

	~BrnRendererModule();

	// Unknown accessibility
	// BrnRendererModule.h:288
	extern const uint32_t KU_NUM_OBJECT_TO_MESH_DISPATCH_JOBS = 16;

}

struct cLionEffectDefinition;

struct cLionSerialiser;

struct cParticleEmitter;

struct RenderedParticle;

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

public:
	LoadingScriptedState();

protected:
	// BrnGameMainFlowStates.h:94
	extern LoadingScriptedState::ELoadingStateStage meLoadingStateStage;

	// BrnGameMainFlowStates.h:95
	extern bool mbLoadingPaused;

}

// Declaration
struct MainGameFlowStateInitialLoadingScreen {
public:
	MainGameFlowStateInitialLoadingScreen();

}

// Declaration
struct MainGameFlowStateStartScreen {
public:
	MainGameFlowStateStartScreen();

}

// Declaration
struct WorldModule {
public:
	WorldModule();

	~WorldModule();

}

struct SpliceSample;

// Declaration
struct MainGameFlowStateMarketingScreens {
public:
	MainGameFlowStateMarketingScreens();

}

// Declaration
struct MainGameFlowStateCheckDiskSpace {
public:
	MainGameFlowStateCheckDiskSpace();

}

// Declaration
struct MainGameFlowStateMemoryCard {
public:
	MainGameFlowStateMemoryCard();

}

// Declaration
struct MainGameFlowStateCompleteLoading {
public:
	MainGameFlowStateCompleteLoading();

}

// Declaration
struct MainGameFlowStateInGame {
public:
	MainGameFlowStateInGame();

}

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

void CgsDev::Log::LogNull::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexProgram(const ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetPixelProgram(const ProgramBuffer *  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsDev::DebugUI::Window::OnGetFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::Window::OnLostFocus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterfaceGameParamsBase::SetRankedGame(bool  lbIsRanked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogChannelOutput::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogChannelOutput.h:124
		uint32_t luWritten;

	}
	sys_tty_write(/* parameters */);
}

void CgsDev::Log::LogOutput::Append(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::IThreadClass::RenderAssert(const AssertData *  lpAssert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::OnLoadFail(const GameDataAssetEvent *  lpEvent, int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::InternalBaseStreamer::OnAttemptUnload(int32_t  liListIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysGarbageCollector::ReleaseData(unsigned char  lKind, Vault::AssetID  lID, void *  lpMemory, unsigned int  liSizeInBytes) {
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

void CgsGui::StateMachine::GetStateCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGameState::GameModeState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeState::Update() {
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

void CgsNetwork::ReadyMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ReadyMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ReadyMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysGarbageCollector::~AttribSysGarbageCollector(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::JuiceScripting::~JuiceScripting(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::JuiceScriptInterface::JuiceScriptInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::JuiceScriptInterface::~JuiceScriptInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<3u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:165
		InputBuffer * lpInput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:186
		OutputBuffer * lpOutput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:207
		InputBuffer * lpInput;

		// CgsModuleSingleBufferedTemplate.h:208
		OutputBuffer * lpOutput;

		// CgsModuleSingleBufferedTemplate.h:211
		bool lbDone;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:229
		InputBuffer * lpInput;

		// CgsModuleSingleBufferedTemplate.h:230
		OutputBuffer * lpOutput;

		// CgsModuleSingleBufferedTemplate.h:233
		bool lbDone;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:123
		InputBuffer * lpInput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:146
		OutputBuffer * lpOutput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:165
		InputBuffer * lpInput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:186
		OutputBuffer * lpOutput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:207
		InputBuffer * lpInput;

		// CgsModuleSingleBufferedTemplate.h:208
		OutputBuffer * lpOutput;

		// CgsModuleSingleBufferedTemplate.h:211
		bool lbDone;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:229
		InputBuffer * lpInput;

		// CgsModuleSingleBufferedTemplate.h:230
		OutputBuffer * lpOutput;

		// CgsModuleSingleBufferedTemplate.h:233
		bool lbDone;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:123
		InputBuffer * lpInput;

	}
}

void CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBufferedTemplate.h:146
		OutputBuffer * lpOutput;

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

void Attrib::Gen::surfacelist::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::SetDefaultLayout(unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::surfacelist(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::surfacelist::surfacelist(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Instance::SetDefaultLayout(/* parameters */);
}

void Attrib::Gen::shotgroup::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::shotgroup::shotgroup(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::shotgroup::shotgroup(None, None, None) {
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

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
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

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~RaceCarStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ~RaceCarStreamer(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
}

extern void ~EnvironmentManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ~EnvironmentManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
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

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsModule::EventReceiverQueue<1024,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseEventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScatteringData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LightingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CloudsData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GlobalIrradianceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void JunkyardLighting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EnvironmentManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EnvironmentManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::ResourcePtr(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CloudsData(/* parameters */);
	GlobalIrradianceManager(/* parameters */);
	CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::ResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
}

extern void ~DataBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~DataBuffer(/* parameters */);
	~DataBuffer(/* parameters */);
}

extern void ~GameData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::SaveLoadSystem::~SaveLoadSystem(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~GameData(/* parameters */);
}

void Attrib::RefSpec::~RefSpec() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::shotgroup::~shotgroup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::cameradefaults::~cameradefaults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DirectorResourceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ~DirectorResourceManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::RefSpec::~RefSpec(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::cameradefaults::~cameradefaults(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
	Attrib::Gen::shotgroup::~shotgroup(/* parameters */);
}

void CgsModule::EventReceiverQueue<512,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::cameradefaults::cameradefaults(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::cameradefaults::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RefSpec::RefSpec() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DirectorResourceManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void DirectorResourceManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::ICEResourceMgr::ICEResourceMgr(/* parameters */);
	Attrib::Gen::cameradefaults::cameradefaults(/* parameters */);
	Attrib::RefSpec::RefSpec(/* parameters */);
}

void CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScoringSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StuntModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FixedRingBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RingBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkRoundData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<EActiveRaceCarIndex,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HUDMessageLogic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseVariableEventQueue::BaseVariableEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ChallengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ObjectPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StoredLeapingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,80u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CheckpointData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint32_t,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::StartLocation,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartLocation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::OpponentData,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PrepareForModeAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ModeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ModeManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::RaceMode::RaceMode(/* parameters */);
	BrnGameState::FaceOffMode::FaceOffMode(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	BrnGameState::CrashMode::CrashMode(/* parameters */);
	BrnGameState::RoadRageMode::RoadRageMode(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::GameModeState::GameModeState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::GameModeState::GameModeState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::GameModeState::GameModeState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::GameModeState::GameModeState(/* parameters */);
	BrnGameState::GameModeState::GameModeState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::PursuitMode::PursuitMode(/* parameters */);
	BrnGameState::BurningRouteMode::BurningRouteMode(/* parameters */);
	BrnGameState::StuntAttackMode::StuntAttackMode(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::SurvivorMode::SurvivorMode(/* parameters */);
	BrnGameState::OnlineRaceMode::OnlineRaceMode(/* parameters */);
	BrnGameState::OnlineRoadRageMode::OnlineRoadRageMode(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineFugitiveMode::OnlineFugitiveMode(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::OnlineBurningHomeRunMode::OnlineBurningHomeRunMode(/* parameters */);
	BrnGameState::OnlineFreeBurnMode::OnlineFreeBurnMode(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::OnlineFreeBurnLobbyMode::OnlineFreeBurnLobbyMode(/* parameters */);
	BrnGameState::OnlineShowtimeMode::OnlineShowtimeMode(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	ScoringSystem(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	BrnGameState::CountdownState::CountdownState(/* parameters */);
	CgsContainers::Array<BrnGameState::GameModeState*,8u>::Array(/* parameters */);
	BrnGameState::InProgressState::InProgressState(/* parameters */);
	BrnGameState::OutroState::OutroState(/* parameters */);
	BrnGameState::IntroState::IntroState(/* parameters */);
	BrnGameState::ResultsState::ResultsState(/* parameters */);
	BrnGameState::QuitState::QuitState(/* parameters */);
	BrnGameState::OnlineSplashState::OnlineSplashState(/* parameters */);
	BrnGameState::OnlineLoadingState::OnlineLoadingState(/* parameters */);
	CrashModeScoring(/* parameters */);
	CgsDev::DebugComponent::DebugComponent(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Array(/* parameters */);
	StuntModeScoring(/* parameters */);
	BrnGameState::OnlineRaceModeScoring::OnlineRaceModeScoring(/* parameters */);
	BrnGameState::OnlineBurningHomeRunModeScoring::OnlineBurningHomeRunModeScoring(/* parameters */);
	NetworkRoundData(/* parameters */);
	BrnGameState::OnlineRoadRageModeScoring::OnlineRoadRageModeScoring(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CarData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnGameState::ModeManagerDebugComponent::ModeManagerDebugComponent(/* parameters */);
	HUDMessageLogic(/* parameters */);
	TimerStatusInterface(/* parameters */);
	TimerStatus(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsContainers::Array<EActiveRaceCarIndex,7u>::Array(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsDev::DebugComponent::DebugComponent(/* parameters */);
	ChallengeManager(/* parameters */);
	StartGameModeParams(/* parameters */);
	GameModeParams(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array(/* parameters */);
	CheckpointData(/* parameters */);
	PrepareForModeAction(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array(/* parameters */);
	CheckpointData(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
}

extern void DataBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DataBuffer(/* parameters */);
	DataBuffer(/* parameters */);
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

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void rw::IResourceAllocator::~IResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::~IResourceAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
}

void CgsGraphics::MoviePlayerCoreAllocator::~MoviePlayerCoreAllocator(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Allocator::ICoreAllocator::~ICoreAllocator(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::SkidVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetVertexProgram(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
}

extern void ~HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~SmallResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~MoviePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~StreamDeviceDiskRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::Futex::~Futex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~MovieManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ~MovieManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGui::MovieAllocator::~MovieAllocator(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::~IResourceAllocator(/* parameters */);
	~ResourcePtr(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~MoviePlayer(/* parameters */);
}

void CgsNetwork::ServerInterfaceStructureInterface::~ServerInterfaceStructureInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::GameSearchParams::~GameSearchParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::GameSearchParamsPS3::~GameSearchParamsPS3(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameSearchParams::~ServerInterfaceGameSearchParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameSearchParamsBase::~ServerInterfaceGameSearchParamsBase(/* parameters */);
}

void BrnNetwork::GameParams::~GameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
}

void CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceGameParamsBase::~ServerInterfaceGameParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerInfoData::~ServerInterfacePlayerInfoData(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerInfoDataBase::~ServerInterfacePlayerInfoDataBase(/* parameters */);
}

void BrnNetwork::PlayerParams::~PlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::PlayerParamsBase::~PlayerParamsBase(/* parameters */);
}

void BrnNetwork::GameParams::GameParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::PlayerParams::PlayerParams(/* parameters */);
}

void CgsNetwork::ServerInterfacePlayerParams::~ServerInterfacePlayerParams(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfacePlayerParamsBase::~ServerInterfacePlayerParamsBase(/* parameters */);
}

void CgsNetwork::ServerInterfaceDirtySock::~ServerInterfaceDirtySock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::ServerInterface::~ServerInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySockPS3::~ServerInterfaceDirtySockPS3(/* parameters */);
}

void CgsNetwork::ServerInterfaceComponent::~ServerInterfaceComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::~BrnServerInterfaceBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::ServerInterfaceCustomCommands::~ServerInterfaceCustomCommands(/* parameters */);
	CgsNetwork::ServerInterface::~ServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceRankings::~ServerInterfaceRankings(/* parameters */);
	BrnNetwork::BrnServerInterfaceTelemetry::~BrnServerInterfaceTelemetry(/* parameters */);
	BrnNetwork::BrnServerInterfaceDownloadableConfig::~BrnServerInterfaceDownloadableConfig(/* parameters */);
	CgsNetwork::ServerInterfacePingRegions::~ServerInterfacePingRegions(/* parameters */);
	CgsNetwork::ServerInterfaceUsersets::~ServerInterfaceUsersets(/* parameters */);
	CgsNetwork::ServerInterfaceServerInfo::~ServerInterfaceServerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceHttp::~ServerInterfaceHttp(/* parameters */);
	CgsNetwork::ServerInterfaceBroadcastMessages::~ServerInterfaceBroadcastMessages(/* parameters */);
	CgsNetwork::ServerInterfacePlayerInfo::~ServerInterfacePlayerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceConnection::~ServerInterfaceConnection(/* parameters */);
}

void BrnNetwork::BrnServerInterface::~BrnServerInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetwork::BrnServerInterfacePS3::~BrnServerInterfacePS3(/* parameters */);
	CgsNetwork::ServerInterfaceGamesPS3::~ServerInterfaceGamesPS3(/* parameters */);
}

void CgsNetwork::DataIDToMemoryAddr::DataIDToMemoryAddr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BrnServerInterfaceBase::BrnServerInterfaceBase(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceConnection::ServerInterfaceConnection(/* parameters */);
	CgsNetwork::ServerInterfacePlayerInfo::ServerInterfacePlayerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceBroadcastMessages::ServerInterfaceBroadcastMessages(/* parameters */);
	CgsNetwork::ServerInterfaceHttp::ServerInterfaceHttp(/* parameters */);
	CgsNetwork::ServerInterfaceServerInfo::ServerInterfaceServerInfo(/* parameters */);
	CgsNetwork::ServerInterfaceUsersets::ServerInterfaceUsersets(/* parameters */);
	CgsNetwork::ServerInterfacePingRegions::ServerInterfacePingRegions(/* parameters */);
	BrnNetwork::BrnServerInterfaceDownloadableConfig::BrnServerInterfaceDownloadableConfig(/* parameters */);
	BrnNetwork::ServerInterfaceDebugComponent::ServerInterfaceDebugComponent(/* parameters */);
	BrnNetwork::BrnServerInterfaceTelemetry::BrnServerInterfaceTelemetry(/* parameters */);
	CgsNetwork::ServerInterfaceRankings::ServerInterfaceRankings(/* parameters */);
	BrnNetwork::ServerInterfaceCustomCommands::ServerInterfaceCustomCommands(/* parameters */);
}

extern void NetworkManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PlayerManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PlayersConnectionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ConnectionDataEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HostMigrationManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HostMigrationNetworkPlayerData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartTimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MessageData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TimeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SyncTimeMessageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VoIPManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VoIPClient() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LaunchManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ConnectionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MatchMakingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PostRoundManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StandingsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StandingsData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BufferedMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashingTrafficData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficSyncData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkPlayerStatsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StatsUpdateEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkPlayerStatsResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OnlineGameResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScoreboardManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkAggressiveDrivingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AggressiveDrivingData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AggressiveMoveData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LiveRevengeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LiveRevengeMappingEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkDirtyTrickManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DirtyTrickData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkImageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImageMessageData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkInviteManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SelectedRoutesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Event() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SelectedRoutesData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MarkedManManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DataEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkRoadRulesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadRulesData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ChallengeSuccessManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ChallengeSuccessData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Machine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraFeedRequestDelayTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WebcamPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::int32_t>::AtomicInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~WebcamPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkTextureDXTCompress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UpdateData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~NetworkTextureDXTCompress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CameraPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~NetworkInviteManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~PostRoundManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~MatchMakingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnNetworkManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetworkManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	NetworkManager(/* parameters */);
	PlayerManager(/* parameters */);
	ConnectionDataEntry(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsNetwork::ConnectionStatusMessage::ConnectionStatusMessage(/* parameters */);
	CgsNetwork::ConnectionStatusMessage::ConnectionStatusMessage(/* parameters */);
	CgsNetwork::SignalMessage::SignalMessage(/* parameters */);
	CgsNetwork::SignalMessage::SignalMessage(/* parameters */);
	CgsNetwork::PlayerManagerDebugComponent::PlayerManagerDebugComponent(/* parameters */);
	HostMigrationManager(/* parameters */);
	HostMigrationNetworkPlayerData(/* parameters */);
	CgsNetwork::NewHostMessage::NewHostMessage(/* parameters */);
	CgsNetwork::NewHostMessage::NewHostMessage(/* parameters */);
	CgsNetwork::HostMigrationDebugComponent::HostMigrationDebugComponent(/* parameters */);
	StartTimeManager(/* parameters */);
	MessageData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsNetwork::ReadyMessage::ReadyMessage(/* parameters */);
	CgsNetwork::ReadyMessage::ReadyMessage(/* parameters */);
	StartTime(/* parameters */);
	TimeManager(/* parameters */);
	SyncTimeMessageManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsNetwork::SyncTimeMessage::SyncTimeMessage(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsNetwork::SyncTimeMessage::SyncTimeMessage(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	VoIPManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	VoIPClient(/* parameters */);
	CgsNetwork::HeadsetStatusMessage::HeadsetStatusMessage(/* parameters */);
	CgsNetwork::HeadsetStatusMessage::HeadsetStatusMessage(/* parameters */);
	BrnNetwork::BrnServerInterface::BrnServerInterface(/* parameters */);
	LaunchManager(/* parameters */);
	CgsNetwork::ServerInterfaceGamesPS3::ServerInterfaceGamesPS3(/* parameters */);
	ConnectionManager(/* parameters */);
	BrnNetwork::LoginManagerPS3::LoginManagerPS3(/* parameters */);
	MatchMakingManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnNetwork::GameSearchParams::GameSearchParams(/* parameters */);
	StandingsManager(/* parameters */);
	PostRoundManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	StandingsData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	TrafficManager(/* parameters */);
	BrnNetwork::BuddyManagerPS3::BuddyManagerPS3(/* parameters */);
	NetworkPlayerStatsManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	StatsUpdateEntry(/* parameters */);
	BrnNetwork::StatsUpdateMessage::StatsUpdateMessage(/* parameters */);
	NetworkPlayerStatsResults(/* parameters */);
	NetworkPlayerStats(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnNetwork::StatsDebugComponent::StatsDebugComponent(/* parameters */);
	ScoreboardManager(/* parameters */);
	OnlineGameResults(/* parameters */);
	NetworkAggressiveDrivingManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	AggressiveDrivingData(/* parameters */);
	LiveRevengeManager(/* parameters */);
	LiveRevengeMappingEntry(/* parameters */);
	BrnNetwork::LiveRevengeSyncMessage::LiveRevengeSyncMessage(/* parameters */);
	BrnNetwork::LiveRevengeSyncMessage::LiveRevengeSyncMessage(/* parameters */);
	NetworkDirtyTrickManager(/* parameters */);
	NetworkImageManager(/* parameters */);
	BrnNetwork::ImageManagerDebugComponent::ImageManagerDebugComponent(/* parameters */);
	BrnNetwork::NetworkNotificationManagerPS3::NetworkNotificationManagerPS3(/* parameters */);
	NetworkInviteManager(/* parameters */);
	SelectedRoutesManager(/* parameters */);
	MarkedManManager(/* parameters */);
	NetworkRoadRulesManager(/* parameters */);
	ChallengeSuccessManager(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ChallengeSuccessData(/* parameters */);
	BrnNetwork::FburnChallengeSuccessMessage::FburnChallengeSuccessMessage(/* parameters */);
	BrnNetwork::FburnChallengeSuccessMessage::FburnChallengeSuccessMessage(/* parameters */);
	CameraPS3(/* parameters */);
	Machine(/* parameters */);
	BrnNetwork::CameraRequestMessage::CameraRequestMessage(/* parameters */);
	BrnNetwork::CameraRequestMessage::CameraRequestMessage(/* parameters */);
	BrnNetwork::CameraRequestResponseMessage::CameraRequestResponseMessage(/* parameters */);
	BrnNetwork::CameraRequestResponseMessage::CameraRequestResponseMessage(/* parameters */);
	CameraFeedRequestDelayTimer(/* parameters */);
	WebcamPS3(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	NetworkTextureDXTCompress(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnNetwork::BrnNetworkPlayer::BrnNetworkPlayer(/* parameters */);
	BrnNetwork::FburnChallengeStatusMessage::FburnChallengeStatusMessage(/* parameters */);
	BrnNetwork::ActiveFburnChallengeMessage::ActiveFburnChallengeMessage(/* parameters */);
	BrnNetwork::ActiveFburnChallengeMessage::ActiveFburnChallengeMessage(/* parameters */);
	BrnNetwork::CheckpointTriggeredMessage::CheckpointTriggeredMessage(/* parameters */);
	BrnNetwork::CheckpointTriggeredMessage::CheckpointTriggeredMessage(/* parameters */);
	BrnNetwork::PlayerMenuData::PlayerMenuData(/* parameters */);
	BrnNetwork::PlayerMenuData::PlayerMenuData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
}

void BrnJuice::BrnJuiceScripting::~BrnJuiceScripting(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnJuice::JuiceNetworkScriptInterface::~JuiceNetworkScriptInterface(/* parameters */);
	BrnJuice::JuiceGuiScriptInterface::~JuiceGuiScriptInterface(/* parameters */);
	BrnJuice::JuiceGameStateScriptInterface::~JuiceGameStateScriptInterface(/* parameters */);
	BrnJuice::JuiceWorldScriptInterface::~JuiceWorldScriptInterface(/* parameters */);
	CgsDev::JuiceScripting::~JuiceScripting(/* parameters */);
}

void BrnJuice::JuiceNetworkScriptInterface::~JuiceNetworkScriptInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::JuiceScriptInterface::~JuiceScriptInterface(/* parameters */);
}

extern void GuiEventQueueBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventRenderSatNav() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IconRendererSatNavIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventRenderMainMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::ParticleSystem2d::ParticleSystem2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BillboardRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,5u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventMapCursorStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadSignList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadSign() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TextObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<CgsResource::Font>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TextBackground() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::Interpolator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::Interpolator<float32_t>::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::DeltaInterpolator::DeltaInterpolator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsGui::BillboardInfo,32u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BillboardInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PlayerGamerTagAboveCarInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::BankingScore,6u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BankingScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CustomRendererManager::CustomRendererManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::CustomRendererManager::CustomRendererManager(/* parameters */);
	BrnGui::SatNavRenderer::SatNavRenderer(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	BrnGui::MainMapRenderer::MainMapRenderer(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	CgsGui::ParticleSystem2d::ParticleSystem2d(/* parameters */);
	BrnGui::CrashNavIconRenderer::CrashNavIconRenderer(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	CgsContainers::Array<uint32_t,5u>::Array(/* parameters */);
	BrnGui::CrashNavMapIcon::CrashNavMapIcon(/* parameters */);
	BrnGui::TextField::TextField(/* parameters */);
	BrnGui::CrashNavMapIcon::CrashNavMapIcon(/* parameters */);
	BrnGui::TextField::TextField(/* parameters */);
	RoadSignList(/* parameters */);
	BrnGui::BoostBarRenderer::BoostBarRenderer(/* parameters */);
	BrnGui::Interpolator<float32_t>::Interpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::IsValid(/* parameters */);
	BrnGui::DeltaInterpolator::DeltaInterpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::Interpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::Interpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::IsValid(/* parameters */);
	BrnGui::Interpolator<float32_t>::Interpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::IsValid(/* parameters */);
	BrnGui::Interpolator<float32_t>::Interpolator(/* parameters */);
	BrnGui::Interpolator<float32_t>::IsValid(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	BillboardRenderer(/* parameters */);
	CgsContainers::Array<CgsGui::BillboardInfo,32u>::Array(/* parameters */);
	BrnGui::NetworkPlayerImageRenderer::NetworkPlayerImageRenderer(/* parameters */);
	BrnGui::AboveCarRenderer::AboveCarRenderer(/* parameters */);
	CgsContainers::Array<BrnGui::BankingScore,6u>::Array(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	BrnGui::BlackBarRenderer::BlackBarRenderer(/* parameters */);
	BrnGui::CreditsTextRenderer::CreditsTextRenderer(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	BrnGui::ProgressBarRenderer::ProgressBarRenderer(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	BrnGui::InGameMessageRenderer::InGameMessageRenderer(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	BrnGui::GuiCustRendererDebugComponent::GuiCustRendererDebugComponent(/* parameters */);
}

extern void ~BrnNetworkManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ~BrnNetworkManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~NetworkTextureDXTCompress(/* parameters */);
	~CameraPS3(/* parameters */);
	~NetworkInviteManager(/* parameters */);
	~WebcamPS3(/* parameters */);
	~PostRoundManager(/* parameters */);
	BrnNetwork::PlayerInfoData::~PlayerInfoData(/* parameters */);
	~MatchMakingManager(/* parameters */);
	BrnNetwork::GameResults::~GameResults(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	BrnNetwork::GameParams::~GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
	BrnNetwork::GameParams::~GameParams(/* parameters */);
	BrnNetwork::GameSearchParams::~GameSearchParams(/* parameters */);
	BrnNetwork::BrnServerInterface::~BrnServerInterface(/* parameters */);
	CgsNetwork::ServerInterfaceGameParams::~ServerInterfaceGameParams(/* parameters */);
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

void rw::IResourceAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateMemoryResource(/* parameters */);
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void rw::IResourceAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags, unsigned int  align, unsigned int  alignOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AllocateMemoryResource(/* parameters */);
	ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Content>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::~Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::ReleaseObject() {
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
	CgsSound::MemBase::operator delete(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

void CgsSound::Logic::Voice::~Voice(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Playback::Object::Release(/* parameters */);
}

void CgsSound::Logic::VoiceWrapper::~VoiceWrapper(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Playback::Handle<CgsSound::Playback::Content>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::MemBase::~MemBase(/* parameters */);
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44 &  a, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44 &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic z;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic w;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

extern void FloatShaderStateIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::ProgramVariableHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Matrix44 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetProgramType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetConstantIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetNumConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::PS3GetProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetCgProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToHostPtr<_CGprogram>(_CGprogram *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetPixelProgramOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lModelToWorldMatrix, const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:320
		Matrix44 lWVPMatrix;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:817
		uint32_t uID;

	}
}

void CgsGraphics::ImRendererBase::SetState(const ProgramBuffer *const  lpVertexProgramBuffer, const ProgramBuffer *const  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexDescriptor(const VertexDescriptor *  vdesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:960
		uint32_t attributesToDisable;

		// shadowingdevice.h:961
		uint8_t attributeIndex;

	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const Im3dVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::BasicColouredTexturedVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushBeforeRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushVertexProgramState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetStartVertex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BasicColouredTexturedVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3GPUSetLabelBackEnd(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3CPUGetLabelValue(uint8_t  label) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2293
		uint32_t value;

		// device.h:2295
		uint32_t volatile* labelAddress;

	}
}

void renderengine::DrawParameters::SetVertexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::PS3GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIteratorBaseClass::SetBuffer(void *const  m_buf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(renderengine::VertexBuffer *  vertexBuffer, uint32_t  id, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BasicColouredTexturedVertex::VertexIterator::Write(const const CgsGraphics::BasicColouredTexturedVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const BlendState *const  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState, const uint32_t  luStencilRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState, uint32_t  stencilRef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const RasterizerState *const  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RasterizerState *  rasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const RenderTargetState *const  lpRenderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RenderTargetState *  renderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:990
		const CellGcmSurface * internalState;

	}
}

void CgsGraphics::ImRendererBase::SetState(const SamplerState *const  lpSamplerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const TextureState *  textureState, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:924
		const SamplerState *const lpSamplerState;

		// shadowingdevice.h:925
		renderengine::Texture *const lpTexture;

	}
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::ScissorRectParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::SetRectangle(uint32_t  x, uint32_t  y, uint32_t  w, uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::HandleCommand(const ImCommand *  lpCurrentCommand, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *  lpImRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering(/* parameters */);
	{
		// CgsIm3dRenderBuffer.h:254
		const ImCommandSetStateRasterizer * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:260
		const ImCommandSetStateRenderTarget * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:266
		const ImCommandSetStateSampler * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:272
		const ImCommandSetStateTexture * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:278
		const ImCommandSetTexture * lpCommand;

		ImRendererBase::SetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:299
		const ImCommandSetTransform3dVp * lpCommand;

		Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	{
		// CgsIm3dRenderBuffer.h:293
		const ImCommandSetTransform3dMtwVp * lpCommand;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:284
		const ImCommandSetScissor * lpCommand;

		// CgsIm3dRenderBuffer.h:285
		ScissorRectParameters lScissorParams;

		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:230
		const ImCommandRenderPrimitives<CgsGraphics::BasicColouredTexturedVertex> * lpCommand;

		ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Render(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
		renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
		BeginBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(/* parameters */);
		{
		}
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		EndBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:236
		const ImCommandSetStateBlend * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:242
		const ImCommandSetStateDepthStencil * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:248
		const ImCommandSetStateDepthStencilStencilRef * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	BasicColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	{
	}
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lModelToWorldMatrix, const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:320
		Matrix44 lWVPMatrix;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const Im3dUntexVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::BasicColouredVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::BasicColouredVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BasicColouredVertex::VertexIterator::Write(const const CgsGraphics::BasicColouredVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::HandleCommand(const ImCommand *  lpCurrentCommand, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> *  lpImRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ImRenderer<CgsGraphics::BasicColouredVertex>::BeginRendering(/* parameters */);
	{
		// CgsIm3dRenderBuffer.h:254
		const ImCommandSetStateRasterizer * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:260
		const ImCommandSetStateRenderTarget * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:266
		const ImCommandSetStateSampler * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:272
		const ImCommandSetStateTexture * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:278
		const ImCommandSetTexture * lpCommand;

		ImRendererBase::SetTexture(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:299
		const ImCommandSetTransform3dVp * lpCommand;

		Im3dBase<CgsGraphics::BasicColouredVertex>::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
		{
			cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
		}
	}
	{
		// CgsIm3dRenderBuffer.h:293
		const ImCommandSetTransform3dMtwVp * lpCommand;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:284
		const ImCommandSetScissor * lpCommand;

		// CgsIm3dRenderBuffer.h:285
		ScissorRectParameters lScissorParams;

		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:230
		const ImCommandRenderPrimitives<CgsGraphics::BasicColouredVertex> * lpCommand;

		ImRenderer<CgsGraphics::BasicColouredVertex>::Render(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
		renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
		BeginBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(/* parameters */);
		{
		}
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		EndBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:236
		const ImCommandSetStateBlend * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:242
		const ImCommandSetStateDepthStencil * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	{
		// CgsIm3dRenderBuffer.h:248
		const ImCommandSetStateDepthStencilStencilRef * lpCommand;

		ImRendererBase::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
	ImRenderer<CgsGraphics::BasicColouredVertex>::EndRendering(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	BasicColouredVertex::VertexIterator::Write(/* parameters */);
	{
	}
}

void CgsGraphics::Im3d::PushMask(TextureState *const  lpTextureState, const Im3dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::PushMask(TextureState *const  lpTextureState, renderengine::Texture *const  lpTexture, const Im3dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::PushMask(renderengine::Texture *const  lpTexture, const Im3dVertex *const  lpVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3d::PopMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:404
		int8_t li8Shader;

		// CgsIm3d.h:405
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Vector4 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBuffer::HandleCommand(const ImCommand *  lpCurrentCommand, CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *  lpImRendererBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:315
		CgsGraphics::Im3d * lpImRenderer;

	}
	{
		// CgsIm3dRenderBuffer.h:328
		const ImCommandPushMaskTexture<CgsGraphics::BasicColouredTexturedVertex> * lpCommand;

		Im3d::PushMask(/* parameters */);
		ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(/* parameters */);
		Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	Im3d::PopMask(/* parameters */);
	{
		// CgsIm3dRenderBuffer.h:322
		const ImCommandPushMaskTextureState<CgsGraphics::BasicColouredTexturedVertex> * lpCommand;

		Im3d::PushMask(/* parameters */);
		ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::SetProgram(/* parameters */);
		Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
		renderengine::FloatShaderStateIterator::Write(/* parameters */);
		cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	}
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
}

void CgsContainers::ObjectPool<rw::math::vpu::Vector4 [100],20,int32_t>::FreeObject(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<20u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<20u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::FreeObject(int32_t  liObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<rw::math::vpu::Vector4 [100],20,int32_t>::FreeObject(/* parameters */);
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::StateMachine::GetState(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateMachine.h:148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsGuiStateMachine.h:149
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::MoviePlayerCoreAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.h:128
		void * lpAlloc;

	}
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::MoviePlayerCoreAllocator::Alloc(size_t  size, const char *  name, unsigned int  flags, unsigned int  align, unsigned int  alignOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMoviePlayer.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::MoviePlayerCoreAllocator::Free(void *  block, size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::ObjectPool<rw::math::vpu::Vector4 [250],8,int32_t>::FreeObject(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<8u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<8u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::AbstractPool<250u,8u,rw::math::vpu::Vector4>::FreeObject(int32_t  liObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<rw::math::vpu::Vector4 [250],8,int32_t>::FreeObject(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::ObjectPool<rw::math::vpu::Vector4 [70],20,int32_t>::FreeObject(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::AbstractPool<70u,20u,rw::math::vpu::Vector4>::FreeObject(int32_t  liObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<rw::math::vpu::Vector4 [70],20,int32_t>::FreeObject(/* parameters */);
	CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<20u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

void Attrib::Gen::burnoutglobaldata::~burnoutglobaldata() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Environment>::~Handle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Environment>::ReleaseObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Module::SoundLogicModule::~SoundLogicModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Gen::burnoutglobaldata::~burnoutglobaldata(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::~Handle(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Logic::Voice::~Voice(/* parameters */);
	CgsSound::Logic::Module::~Module(/* parameters */);
}

extern void ~PropCollisions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnParticle::ParticleModule::~ParticleModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~PropCollisions(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
	~DataBuffer(/* parameters */);
}

void CgsGui::ModelModule::~ModelModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiResourceModule::~GuiResourceModule(/* parameters */);
	~DataBuffer(/* parameters */);
	~DataBuffer(/* parameters */);
	CgsGui::EventInterpreterModule::~EventInterpreterModule(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

extern void ~CategoryEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~TypeEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~FileSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DiskCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~File() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~Relocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ScratchPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ScatterStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~GatherStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~FifoQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~Pool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DecompressionJobInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::~ResourceModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::DebugComponent::~DebugComponent(/* parameters */);
	CgsResource::DebugPoolTypeList::~DebugPoolTypeList(/* parameters */);
	~CategoryEntry(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	~TypeEntry(/* parameters */);
	CgsResource::DebugPoolHistogram::~DebugPoolHistogram(/* parameters */);
	~SmallResourceDescriptor(/* parameters */);
	~FileSystem(/* parameters */);
	CgsMemory::MemoryModule::~MemoryModule(/* parameters */);
	~DataBuffer(/* parameters */);
	~DataBuffer(/* parameters */);
	CgsResource::PoolModule::~PoolModule(/* parameters */);
	~Relocator(/* parameters */);
	~ScratchPool(/* parameters */);
	~FifoQueue(/* parameters */);
	~Pool(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
	~DataBuffer(/* parameters */);
	CgsResource::BundleLoaderModule::~BundleLoaderModule(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

void Attrib::Gen::surfacelist::~surfacelist() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ActiveRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModule::~RaceCarEntityModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	Attrib::Gen::surfacelist::~surfacelist(/* parameters */);
	~RaceCarStreamer(/* parameters */);
	~ActiveRaceCar(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

extern void ~TrafficJobStub() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::TrafficEntityModule::~TrafficEntityModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~ResourcePtr(/* parameters */);
	BrnTraffic::TrafficCarStreamer::~TrafficCarStreamer(/* parameters */);
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	~TrafficJobStub(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

void BrnWorld::WorldEntityModule::~WorldEntityModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Gen::surfacelist::~surfacelist(/* parameters */);
	BrnWorld::WorldGraphicsStreamer::~WorldGraphicsStreamer(/* parameters */);
	~ResourcePtr(/* parameters */);
	BrnWorld::PVSModule::~PVSModule(/* parameters */);
	~ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsModule::ModuleSingleBufferedTemplate<BrnWorld::PVSIO::InputBuffer,BrnWorld::PVSIO::OutputBuffer>::~ModuleSingleBufferedTemplate(/* parameters */);
	~DataBuffer(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

void BrnWorld::PropEntityModule::~PropEntityModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	~ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
	~DataBuffer(/* parameters */);
}

extern void ~PropManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DriveData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveDynamics::~DriveDynamics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveDynamics::Params::~Params() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveFrames::~DriveFrames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~JointData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::~JointLimits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::~JointFrames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~RigidBodyData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::~Inertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModule::~PhysicsModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~PropManager(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsPhysics::PhysicsSimulationModule::~PhysicsSimulationModule(/* parameters */);
	~JointData(/* parameters */);
	~RigidBodyData(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

void CgsSceneManager::SceneManagerModule::~SceneManagerModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::OverlapCullingModule::~OverlapCullingModule(/* parameters */);
	~DataBuffer(/* parameters */);
	~DataBuffer(/* parameters */);
	CgsSceneManager::OverlapGenerationModule::~OverlapGenerationModule(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

extern void ~ResetOnTrackManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModule::~AIModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnAI::RouteMapModule::~RouteMapModule(/* parameters */);
	~ResetOnTrackManager(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	~DataBuffer(/* parameters */);
}

void CgsPhysics::PhysicsSimulationModule::~PhysicsSimulationModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~JointData(/* parameters */);
	~RigidBodyData(/* parameters */);
	CgsModule::ModuleSingleBuffered::~ModuleSingleBuffered(/* parameters */);
}

extern void RaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ActiveRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleAddedForCollisionEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WheelLite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AboveGroundTestResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SlamEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShuntEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarCrashData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AxisAlignedBox() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RenderParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedPartRenderEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<4096,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarStreamer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResourceRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<2048,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWheel::GraphicsSpec>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BoostManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NearMissManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NearMissData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AISectionId,4u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashPlayManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PowerParkingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WorldMap2D() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StoredStompeeData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficJobStub() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalRequestInfoList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PhysicalRequestInfo,25u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalRequestInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Vehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleAxles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Axle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Param() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ParamTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,1u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,400>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint8_t,200>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,1>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,72u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,9u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficCrashInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,160u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficPhysicsInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarStateData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::TrafficData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FuzzyBehaviourLogic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FuzzyEnvelopeSet4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CollidableVehicleInfo4() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Camera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleTypeRuntime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StoredAITrafficData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InputBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GetZoneRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OutputBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsSceneManager::ZoneList>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CollisionZone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsGraphics::InstanceList>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropZoneManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropCellManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityID::PropEntityID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropEntityInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropPartEntityInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,80u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnParticle::VFXPropCollection>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Set() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::PropEntityID,15u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::PropEntityID,30u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnPhysics::Props::PropGraphicsList>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OverheadSignScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Trigger() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RigidBodyData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::Inertia::Inertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void JointData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointFrames::JointFrames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::JointLimits::JointLimits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DriveData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveFrames::DriveFrames() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveDynamics::DriveDynamics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::physics::DriveDynamics::Params::Params() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnAIDriverControls::BrnAIDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::BrnPlayerDriverControls::BrnPlayerDriverControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ExternalPhysicsBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ExternallySimulatedBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Wheel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SweptSphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SimpleVehicleAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TireAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TireGripCurve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleBaseAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InterpedParam3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DriftAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EngineAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SuspensionAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BodyRollAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CollisionAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BoostAttribs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Engine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AirRamEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SpinEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StuntOffencesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalTrafficManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ArticulatedJointPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ArticulatedJoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ArticulatedJointId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSceneManager::EntityId,20u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PotentialContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DiscardedContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OutContactSpy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GripCurveDebugGraph() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AOSTriangle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Sphere() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ContactSpyData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ContactSpyQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalCarPartContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HingedPartContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropContact() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ContactSpyRunList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ContactSpyRunData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeformationManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeformationState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SensorState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedPartManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalBodyPartPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalBodyPart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BurnoutBodyPartID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedWheelManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalWheel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BurnoutWheelBodyID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeformationInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AddDeformationModelEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RemoveDeformationModelEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeactivateDeformationModelEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ValidateRaceCarEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetModelCollisionEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetModelCullingGroupEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeformationOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void JointedPartStateEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedPartNotificationEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrokenJointNotificationEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DetachedPartCurrentPositionEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GlassSmashOrCrackEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleLocatorOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UpdatePropEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SceneSweeper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IntervalStackEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EntityManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SceneManagerEntity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VolumeInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IndexedHashTableElement() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IndexedLinkedListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IndexedHashTableElementData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedHashTable<CgsSceneManager::EntityId,uint16_t,541u>::IndexedHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,uint32_t,509u>::IndexedHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VolumeManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VolumeManagerVolume() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,uint32_t,227u>::IndexedHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TriangleCacheManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TriangleCollisionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Frustum::Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::collision::Plane::Plane() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AICar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AIDriver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NearbyVehicles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NearbyVehicle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BoundaryLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SteeringFan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RacingLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SectionData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HardNoGoMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AIAggression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceBalancingManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingGraph,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::RaceBalancingRoute,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RouteRequestManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetOnTrackManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RecentResetEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetOnTrackResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HngTestEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AStar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AStarNodePool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AStarNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarCrash() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrafficRemovedEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EnvironmentMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShadowMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TsmBBInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Frustum() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShaderLodInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::WorldModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModule::RaceCarEntityModule(/* parameters */);
	BrnTraffic::TrafficEntityModule::TrafficEntityModule(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,16u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::NearMissData,8u>::Array(/* parameters */);
	TrafficJobStub(/* parameters */);
	CgsContainers::Array<BrnTraffic::HullChangeInfo,400u>::Array(/* parameters */);
	CgsContainers::Stack<uint16_t,400>::Stack(/* parameters */);
	CgsContainers::Array<uint16_t,1u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Array(/* parameters */);
	CgsContainers::Stack<uint16_t,1>::Stack(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,400u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,200u>::Array(/* parameters */);
	CgsContainers::Stack<uint8_t,200>::Stack(/* parameters */);
	CgsContainers::Array<BrnTraffic::PurgatoryInfo,1u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,72u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,9u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Array(/* parameters */);
	CgsContainers::Array<BrnTraffic::TrafficCrashInfo,160u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,160u>::Array(/* parameters */);
	TrafficPhysicsInfo(/* parameters */);
	RaceCarStateData(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array(/* parameters */);
	CgsContainers::Array<rw::math::vpu::VecFloat,8u>::Array(/* parameters */);
	CgsContainers::Array<rw::math::vpu::Vector3,8u>::Array(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsContainers::Array<BrnTraffic::CollidableVehicleInfo4,16u>::Array(/* parameters */);
	BrnTraffic::TrafficCarStreamer::TrafficCarStreamer(/* parameters */);
	CgsContainers::Array<BrnTraffic::FiredKillZoneInfo,8u>::Array(/* parameters */);
	BrnWorld::BaseStreamer<64>::BaseStreamer(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::GraphicsStub>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	StoredAITrafficData(/* parameters */);
	BrnWorld::WorldEntityModule::WorldEntityModule(/* parameters */);
	BrnWorld::PropEntityModule::PropEntityModule(/* parameters */);
	BrnWorld::TriggerEntityModule::TriggerEntityModule(/* parameters */);
	BrnWorld::TriggerEntityModuleDebugComponent::TriggerEntityModuleDebugComponent(/* parameters */);
	BrnPhysics::PhysicsModule::PhysicsModule(/* parameters */);
	CgsPhysics::PhysicsSimulationModule::PhysicsSimulationModule(/* parameters */);
	DriveData(/* parameters */);
	VehicleManager(/* parameters */);
	rw::physics::DriveDynamics::Params::Params(/* parameters */);
	rw::physics::DriveDynamics::Params::Params(/* parameters */);
	rw::physics::DriveDynamics::Params::Params(/* parameters */);
	VehicleDriver(/* parameters */);
	BrnPhysics::Vehicle::RaceCarPhysics::RaceCarPhysics(/* parameters */);
	PhysicalTrafficManager(/* parameters */);
	BrnPhysics::Vehicle::TrafficPhysics::TrafficPhysics(/* parameters */);
	ArticulatedJointPool(/* parameters */);
	CgsContainers::Array<CgsSceneManager::EntityId,20u>::Array(/* parameters */);
	BrnPhysics::Vehicle::PhysicalTrafficManagerDebugComponent::PhysicalTrafficManagerDebugComponent(/* parameters */);
	EventQueue(/* parameters */);
	BrnPhysics::Vehicle::VehicleManagerDebugComponent::VehicleManagerDebugComponent(/* parameters */);
	BrnPhysics::Vehicle::DebugComponent::DebugComponent(/* parameters */);
	VehicleDriver(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	ContactSpyData(/* parameters */);
	DeformationManager(/* parameters */);
	DeformationInputInterface(/* parameters */);
	DeformationOutputInterface(/* parameters */);
	PropManager(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	EventQueue(/* parameters */);
	EventQueue(/* parameters */);
	BrnWorld::EnvironmentSettings::DebugComponent::DebugComponent(/* parameters */);
	CgsSceneManager::SceneManagerModule::SceneManagerModule(/* parameters */);
	CgsSceneManager::OverlapGenerationModule::OverlapGenerationModule(/* parameters */);
	CgsSceneManager::OverlapCullingModule::OverlapCullingModule(/* parameters */);
	EntityManager(/* parameters */);
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeInstanceId,uint32_t,509u>::IndexedHashTable(/* parameters */);
	VolumeManager(/* parameters */);
	TriangleCollisionManager(/* parameters */);
	CgsContainers::IndexedHashTable<CgsSceneManager::VolumeId,uint32_t,227u>::IndexedHashTable(/* parameters */);
	rw::collision::Frustum::Frustum(/* parameters */);
	CgsSceneManager::SceneManagerDebugComponent::SceneManagerDebugComponent(/* parameters */);
	BrnAI::AIModule::AIModule(/* parameters */);
	BrnAI::RouteMapDebugComponent::RouteMapDebugComponent(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsContainers::Array<float32_t,16u>::Array(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	BrnWorld::CrashModule::CrashModule(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarCrash,8u>::Array(/* parameters */);
	CgsContainers::Array<BrnWorld::TrafficCrash,160u>::Array(/* parameters */);
	EventQueue(/* parameters */);
	BrnWorld::WorldDebugComponent::WorldDebugComponent(/* parameters */);
	EnvironmentMap(/* parameters */);
	ShadowMap(/* parameters */);
}

void CgsModule::EventReceiverQueue<8192,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Environment>::Handle(CgsSound::Playback::Environment *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Environment>::AcquireObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Object::Acquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>::Handle(CgsSound::Playback::GenericRwacFactory *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>::AcquireObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>::Handle(CgsSound::Playback::AemsFactory *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>::AcquireObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>::Handle(CgsSound::Playback::SplicerFactory *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>::AcquireObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Environment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::DynamicMixer::DynamicMixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SoundTriggerAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PreUpdateOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AudioEffectsMessageQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsSound::Io::QueueElement,3u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Logic::Voice::Voice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::Handle(CgsSound::Playback::Voice *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Handle<CgsSound::Playback::Voice>::AcquireObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResourceRegistrar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::LinkedListHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LinkedListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseLinkedListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Logic::ResourceRegistrar::QueuedResource::QueuedResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<192,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::ID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LinkedList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BaseLinkedList::BaseLinkedList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::Init(LinkedListNode<BrnSound::Logic::ResourceRegistrar::QueuedResource> *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::LinkedListHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Logic::ResourceRegistrar::RequestedResource::RequestedResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListHelper<BrnSound::Logic::IResourceRequester*,16u>::LinkedListHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<BrnSound::Logic::IResourceRequester*>::Init(LinkedListNode<BrnSound::Logic::IResourceRequester*> *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>::Init(LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource> *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AttribSysRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AttribSysRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutglobaldata::burnoutglobaldata(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::burnoutglobaldata::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Logic::FrameInformation::FrameInformation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Utils::DataPoint<BrnSound::Logic::EFatalityFlag>::DataPoint(const const BrnSound::Logic::EFatalityFlag &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Utils::DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::DataPoint(const const DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::EeImpactTime &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Utils::DataPoint<bool>::DataPoint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Module::SoundLogicModule::SoundLogicModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSound::Logic::Module::Module(/* parameters */);
	CgsSound::Playback::Module::Module::Module(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Environment>::AcquireObject(/* parameters */);
	DataBuffer(/* parameters */);
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>::Handle(/* parameters */);
	ResourceRequestQueue(/* parameters */);
	Environment(/* parameters */);
	CgsSound::Logic::DynamicMixer::DynamicMixer(/* parameters */);
	VariableEventQueue(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Array(/* parameters */);
	CgsSound::Logic::Voice::Voice(/* parameters */);
	CgsSound::Logic::Voice::Voice(/* parameters */);
	CgsSound::Logic::Voice::Voice(/* parameters */);
	PreUpdateOutput(/* parameters */);
	AudioEffectsMessageQueue(/* parameters */);
	CgsContainers::Array<CgsSound::Io::QueueElement,3u>::Array(/* parameters */);
	ResourceRegistrar(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::Voice>::Handle(/* parameters */);
	LinkedList(/* parameters */);
	LinkedList(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::Init(/* parameters */);
	CgsContainers::BaseLinkedList::BaseLinkedList(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::Init(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::QueuedResource,18u>::LinkedListHelper(/* parameters */);
	CgsContainers::LinkedListHelper<BrnSound::Logic::ResourceRegistrar::RequestedResource,124u>::LinkedListHelper(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::QueuedResource>::Init(/* parameters */);
	CgsContainers::Array<CgsContainers::LinkedListNode<BrnSound::Logic::ResourceRegistrar::RequestedResource>*,124u>::Array(/* parameters */);
	LinkedListNode(/* parameters */);
	LinkedList(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>::Init(/* parameters */);
	LinkedList(/* parameters */);
	CgsContainers::BaseLinkedList::BaseLinkedList(/* parameters */);
	Attrib::Gen::burnoutglobaldata::burnoutglobaldata(/* parameters */);
	CgsContainers::BaseLinkedList::BaseLinkedList(/* parameters */);
	CgsContainers::LinkedList<BrnSound::Logic::ResourceRegistrar::RequestedResource>::Init(/* parameters */);
	AttribSysRequestInterface(/* parameters */);
	RequestInterface(/* parameters */);
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	BrnSound::Logic::FrameInformation::FrameInformation(/* parameters */);
	CgsSound::Utils::DataPoint<AttribSys::Enums::eImpactTime::eImpactTime>::DataPoint(/* parameters */);
	CgsSound::Utils::DataPoint<bool>::DataPoint(/* parameters */);
}

void CgsModule::EventReceiverQueue<16384,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PropCollisions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::PropToVFXMaterialMapping::PropToVFXMaterialMapping() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LionEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ParticleRenderData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImRendererBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::DirectDraw::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im3dMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im3dMaskLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LionBlendRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cMatrix::cMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void cVector::cVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SparkArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrailSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrailSegmentCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrailSegment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<renderengine::Texture>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrailRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnDebrisArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>::SafeResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnSimpleParticleArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CB4ParticleArrayXenon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LionBatchArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<LionBatch,512u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ParticleRenderJobData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SimpleParticleBatchArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SimpleParticleBatch,13u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnParticle::Native::SparkBatch,4u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SparkFrameDataSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SparkFrameData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebrisUpdateJobData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnDebrisArrayLite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InterThreadEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TempRaceCarStateCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugJumping::EffectsDebugJumping() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsDebugProps::EffectsDebugProps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ActiveRaceCarData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrailEmitterData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::sparkeffect(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::debrisparams(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::junkyardlocators(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::ClassKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnCrashTriangleCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnCrashTrianglePackedFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnEffectsGlassManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnGlassSmashEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::junkyardlocators::~junkyardlocators() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::debrisparams::~debrisparams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Gen::sparkeffect::~sparkeffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::EffectsModule::EffectsModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	BrnParticle::ParticleModule::ParticleModule(/* parameters */);
	DataBuffer(/* parameters */);
	PropCollisions(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	BrnEffects::PropToVFXMaterialMapping::PropToVFXMaterialMapping(/* parameters */);
	CgsGraphics::Im3d::Im3d(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	Im3dMask(/* parameters */);
	Im3dMaskLayer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	BrnGraphics::Im3dTexPlusLighting::Im3dTexPlusLighting(/* parameters */);
	BrnGraphics::Im3dSkidsRenderer::Im3dSkidsRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex>::ImRenderer(/* parameters */);
	LionBlendRenderer(/* parameters */);
	BrnGraphics::Im3dSmokeRenderer::Im3dSmokeRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	BrnGraphics::Im3dBlend::Im3dBlend(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::Parameters(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::LionBlendVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	SparkArray(/* parameters */);
	TrailSystem(/* parameters */);
	LionBatchArray(/* parameters */);
	ParticleRenderJobData(/* parameters */);
	ParticleRenderJobData(/* parameters */);
	BrnEffects::EffectsDebugComponent::EffectsDebugComponent(/* parameters */);
	InterThreadEventQueue(/* parameters */);
	BrnEffects::EffectsDebugJumping::EffectsDebugJumping(/* parameters */);
	BrnEffects::EffectsDebugProps::EffectsDebugProps(/* parameters */);
	ActiveRaceCarData(/* parameters */);
	BrnEffects::JumpStateMachine::JumpStateMachine(/* parameters */);
	BrnEffects::BoostStateMachine::BoostStateMachine(/* parameters */);
	Attrib::Gen::sparkeffect::sparkeffect(/* parameters */);
	Attrib::Gen::debrisparams::debrisparams(/* parameters */);
	Attrib::Gen::debrisparams::debrisparams(/* parameters */);
	Attrib::Gen::debrisparams::debrisparams(/* parameters */);
	Attrib::Gen::junkyardlocators::junkyardlocators(/* parameters */);
	Attrib::Gen::surfacelist::surfacelist(/* parameters */);
	BrnCrashTriangleCache(/* parameters */);
	BrnEffectsGlassManager(/* parameters */);
}

extern void PriorityObjectEventObserver() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<int32_t,CgsGui::EventInterpreterModule::sMapEntry,7u>::HashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HashTableElement() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HashTableElementData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::EventInterpreterModule::sMapEntry::sMapEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<576u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiBundleToLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImRendererSet() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TextRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FontCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LanguageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>::HashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>::LinkedListHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>::Init(LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*> *  lpNodes, int32_t  liNodeCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AptAux() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AptRenderHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CgsAptString() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::HashTable<uint32_t,renderengine::TextureState*,25u>::HashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~AptAux() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FlaptManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FlaptFileInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnFlapt::FlaptFile>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FlaptRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,2>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~FlaptFileInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~FlaptManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MovieManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MoviePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StreamDeviceDiskRead() {
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

void EA::Jobs::JobThreadHandle::JobThreadHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VideoDefinition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSound::Playback::Name::Name() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::VideoDataResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(const const SmallMemoryDescriptor &  lMainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HeapMalloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ColourCalibrationScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WorldDataController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnTrigger::TriggerData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnProgression::ProgressionData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnStreetData::StreetData>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Fsm() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiFsmController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiEventRunFsm::GuiEventRunFsm() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HudMessageDirector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiOverlaysDirector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StateLoadingHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint32_t,228u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiPlayerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Race() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventUpdateEventStarts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetUpAllEventStartsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EventStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SatNavIconInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventSpecificPresetRaces() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SpecificGameModeEventInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OfflinePostEventData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DerivedCarArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnResource::VehicleListEntry::ELiveryType,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiRaceCarInfoEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiTrafficCarInfoEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventNetworkGameParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventOnlinePostEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OnlinePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InGamePlayerStatusData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventEventStateResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::ProfileEvent,175u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MapIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnFlaptComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadSignIconManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TrackerInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEventRouteInformation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<rw::math::vpu::Vector3,5120u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EffectsArbitrator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ColourCubeInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PFXHookNodeBlender() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PFXNodeFader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VignetteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TintData2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PfxContainer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ColourCubeInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AchievementPopupComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~EffectsArbitrator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~WorldDataController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiModule::GuiModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::GuiModule::GuiModule(/* parameters */);
	BrnGui::ViewModule::ViewModule(/* parameters */);
	DataBuffer(/* parameters */);
	DataBuffer(/* parameters */);
	TextRenderer(/* parameters */);
	FontCollection(/* parameters */);
	LanguageManager(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	CgsLanguage::LanguageManagerDebugComponent::LanguageManagerDebugComponent(/* parameters */);
	AptAux(/* parameters */);
	AptRenderHandler(/* parameters */);
	CgsContainers::Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>::Array(/* parameters */);
	FlaptManager(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	FlaptRenderer(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsContainers::Stack<CgsGraphics::Im2dTransform,33>::Stack(/* parameters */);
	MovieManager(/* parameters */);
	CgsContainers::Stack<uint16_t,2>::Stack(/* parameters */);
	MoviePlayer(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors(/* parameters */);
	EA::Jobs::JobThreadHandle::JobThreadHandle(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<CgsResource::VideoDataResource>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::SmallResource::SmallResource(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<3u>::BaseResourceDescriptors(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	BrnGui::MovieAllocator::MovieAllocator(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	ColourCalibrationScreen(/* parameters */);
	WorldDataController(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnProgression::ProgressionData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnStreetData::StreetData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	BrnGui::BrnHudFlow::BrnHudFlow(/* parameters */);
	BrnGui::BrnScreenFlow::BrnScreenFlow(/* parameters */);
	BrnGui::BrnOverlayFlow::BrnOverlayFlow(/* parameters */);
	BrnGui::BrnBaseFlow::BrnBaseFlow(/* parameters */);
	BrnGui::BrnBaseFlow::BrnBaseFlow(/* parameters */);
	CgsGui::EventObserver::EventObserver(/* parameters */);
	CgsGui::EventObserver::EventObserver(/* parameters */);
	CgsGui::EventObserver::EventObserver(/* parameters */);
	CgsGui::StateMachine::StateMachine(/* parameters */);
	CgsGui::StateMachine::StateMachine(/* parameters */);
	GuiFsmController(/* parameters */);
	GuiOverlaysDirector(/* parameters */);
	BrnGui::ProfileHost::ProfileHost(/* parameters */);
	HudMessageDirector(/* parameters */);
	BrnGui::KeyboardHost::KeyboardHost(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	GuiCache(/* parameters */);
	GameData(/* parameters */);
	BrnGui::GuiDebugComponent::GuiDebugComponent(/* parameters */);
	BrnGui::GuiHudMessagesDebugComponent::GuiHudMessagesDebugComponent(/* parameters */);
	BrnGui::SatNavDebugComponent::SatNavDebugComponent(/* parameters */);
	BrnGui::GuiCacheDebugComponent::GuiCacheDebugComponent(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	CgsContainers::Array<uint32_t,228u>::Array(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	Race(/* parameters */);
	GuiEventUpdateEventStarts(/* parameters */);
	GuiEventSpecificPresetRaces(/* parameters */);
	OfflinePostEventData(/* parameters */);
	DerivedCarArray(/* parameters */);
	CgsContainers::Array<CgsID,8u>::Array(/* parameters */);
	GuiRaceCarInfoEvent(/* parameters */);
	GuiTrafficCarInfoEvent(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Array(/* parameters */);
	GuiEventNetworkGameParams(/* parameters */);
	GuiEventOnlinePostEvent(/* parameters */);
	InGamePlayerStatusData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	GuiEventEventStateResponse(/* parameters */);
	MapIconManager(/* parameters */);
	GuiTracker(/* parameters */);
	EffectsArbitrator(/* parameters */);
	ColourCubeInfo(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsResource::ResourcePtr<BrnGui::PFXHookBundle>::ResourcePtr(/* parameters */);
	PFXHookNodeBlender(/* parameters */);
	PFXHookNodeBlender(/* parameters */);
	PFXHookNodeBlender(/* parameters */);
	PFXHookNodeBlender(/* parameters */);
	PFXHookNodeBlender(/* parameters */);
	BrnGui::AlwaysAvailableComponentsManager::AlwaysAvailableComponentsManager(/* parameters */);
	BrnGui::BrnSaveIconComponent::BrnSaveIconComponent(/* parameters */);
	AchievementPopupComponent(/* parameters */);
	CgsGui::EventObserver::EventObserver(/* parameters */);
}

extern void TakedownManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PaybackManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameStateInviteManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TriggerQueryManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,256u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,32u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DriveThruManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DriveThruTriggerData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RumbleManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkRoundManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StartNetworkRoundEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ProgressionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<std::uint16_t,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Profile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsID,2000u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::MugshotInfo,30u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnProgression::Race,64u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RoadRulesManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OnlineCarSelectManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StuntManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::SimpleStrStream::SimpleStrStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InGamePlayerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarSelectionChangedAction() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<3072,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RCEntityActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CarsInTheRaceData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RCEntityGlobalRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RaceCarCrashEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImpactEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PhysicalTrafficState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<uint16_t,8>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void StreetManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NewHighScoreBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGameState::BufferedNewHighScore,5u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~StreetManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ProgressionManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~RumbleManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DriveThruManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~TriggerQueryManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModule::GameStateModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	PaybackManager(/* parameters */);
	TakedownManager(/* parameters */);
	BrnGameState::TakedownManagerDebugComponent::TakedownManagerDebugComponent(/* parameters */);
	GameStateInviteManager(/* parameters */);
	TimerStatusInterface(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	TriggerQueryManager(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::Array(/* parameters */);
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,256u>::Array(/* parameters */);
	CgsContainers::Array<uint16_t,32u>::Array(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnTraffic::TrafficData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsContainers::Array<BrnGameState::LandmarkIndex,16u>::Array(/* parameters */);
	DriveThruManager(/* parameters */);
	RumbleManager(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	NetworkRoundManager(/* parameters */);
	ProgressionManager(/* parameters */);
	BrnGameState::RichPresenceManagerPS3::RichPresenceManagerPS3(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	BrnGameState::AchievementManagerPS3::AchievementManagerPS3(/* parameters */);
	StuntManager(/* parameters */);
	RoadRulesManager(/* parameters */);
	BrnGameState::StuntManagerDebugComponent::StuntManagerDebugComponent(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsDev::SimpleStrStream::SimpleStrStream(/* parameters */);
	BrnGameState::GameStateImageManagerBase::GameStateImageManagerBase(/* parameters */);
	BrnGameState::OfflineFlybyManager::OfflineFlybyManager(/* parameters */);
	BrnGameState::OnlineFlybyManager::OnlineFlybyManager(/* parameters */);
	InGamePlayerStatusInterface(/* parameters */);
	CgsContainers::Array<BrnGameState::GameStateImageManagerBase::ImageLoadRequest,3u>::Array(/* parameters */);
	InGamePlayerStatusData(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnGameState::GameStateDebugComponent::GameStateDebugComponent(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	BrnGameState::ResetPlayerDebugComponent::ResetPlayerDebugComponent(/* parameters */);
	TimerStatusInterface(/* parameters */);
	TimerStatus(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	RCEntityActiveRaceCarOutputInterface(/* parameters */);
	RCEntityGlobalRaceCarOutputInterface(/* parameters */);
	GameEventQueue(/* parameters */);
	EventQueue(/* parameters */);
	VehicleOutputInterface(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::GlobalColourPalette>::ResourcePtr(/* parameters */);
	GameEventQueue(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsContainers::Stack<uint16_t,8>::Stack(/* parameters */);
	StreetManager(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	BrnGameState::StreetManagerDebugComponent::StreetManagerDebugComponent(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
}

extern void AllocateResourceListRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AllocateResourceListResponse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LoadedBundleData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<128,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DecompressionJobInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PoolQueueTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Pool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BasePool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FifoQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreatePoolRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScratchPool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GatherStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GatherStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScatterStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ScatterStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AllocatePoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BasePoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DeAllocatePoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LiveUpdatePoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Relocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FileSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void File() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BaseFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DiskCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DiskCacheCommandBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LocklessQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AtomicInt<std::uint64_t>::AtomicInt() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::LogWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TypeEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CategoryEntry() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceModule::ResourceModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	CgsResource::BundleLoaderModule::BundleLoaderModule(/* parameters */);
	DataBuffer(/* parameters */);
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	DecompressionJobInterface(/* parameters */);
	PoolQueueTemplate(/* parameters */);
	CgsResource::PoolModule::PoolModule(/* parameters */);
	DataBuffer(/* parameters */);
	Pool(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	FifoQueue(/* parameters */);
	ScratchPool(/* parameters */);
	ScatterStream(/* parameters */);
	AllocatePoolModuleState(/* parameters */);
	CgsResource::EntryListResourceType::EntryListResourceType(/* parameters */);
	LiveUpdatePoolModuleState(/* parameters */);
	CgsResource::EmergencyFragPoolModuleState::EmergencyFragPoolModuleState(/* parameters */);
	CgsResource::IntelliFragPoolModuleState::IntelliFragPoolModuleState(/* parameters */);
	Relocator(/* parameters */);
	CgsResource::EntryListResourceType::EntryListResourceType(/* parameters */);
	FifoQueue(/* parameters */);
	CgsMemory::MemoryModule::MemoryModule(/* parameters */);
	FileSystem(/* parameters */);
	DataBuffer(/* parameters */);
	CgsMemory::DebugComponentMemory::DebugComponentMemory(/* parameters */);
	File(/* parameters */);
	StreamDeviceDiskRead(/* parameters */);
	EA::Thread::Futex::Futex(/* parameters */);
	DiskCache(/* parameters */);
	CgsFileSystem::RemapDevice::RemapDevice(/* parameters */);
	CgsFileSystem::PhysicalPS3Device::PhysicalPS3Device(/* parameters */);
	CgsFileSystem::DebugComponentFileSystem::DebugComponentFileSystem(/* parameters */);
	CgsDev::DebugUI::CustomWindow::CustomWindow(/* parameters */);
	CgsFileSystem::PhysicalPS3Device::PhysicalPS3Device(/* parameters */);
	CgsFileSystem::PhysicalPS3Device::PhysicalPS3Device(/* parameters */);
	CgsFileSystem::RemapDevice::RemapDevice(/* parameters */);
	CgsFileSystem::RemapDevice::RemapDevice(/* parameters */);
	CgsFileSystem::RemapDevice::RemapDevice(/* parameters */);
	CgsResource::DebugComponent::DebugComponent(/* parameters */);
	CgsResource::DebugPoolWindow::DebugPoolWindow(/* parameters */);
	rw::BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
	CgsResource::DebugPoolTypeList::DebugPoolTypeList(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	TypeEntry(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	CgsResource::SmallResourceDescriptor::SmallResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	CategoryEntry(/* parameters */);
	rw::BaseResourceDescriptors<3u>::GetBaseResourceDescriptor(/* parameters */);
	CgsResource::DebugPoolTextures::DebugPoolTextures(/* parameters */);
	CgsResource::DebugBundleFilesWindow::DebugBundleFilesWindow(/* parameters */);
}

void CgsModule::EventReceiverQueue<32768,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void HudMessageController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsGui::GuiHudMessageResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PopupController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsGui::GuiPopupResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::VehicleListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WheelList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::WheelListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<BrnResource::ChallengeListResource>::ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ChallengeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~WheelList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ICEList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~VehicleList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~PopupController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~HudMessageController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataModule::GameDataModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	CgsAttribSys::AttribSysModule::AttribSysModule(/* parameters */);
	HudMessageController(/* parameters */);
	CgsAttribSys::AttribSysGarbageCollector::AttribSysGarbageCollector(/* parameters */);
	CgsAttribSys::AttribSysDebugComponent::AttribSysDebugComponent(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	PopupController(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	HeapMalloc(/* parameters */);
	BrnResource::DebugComponent::DebugComponent(/* parameters */);
	VehicleList(/* parameters */);
	CgsResource::ResourcePtr<BrnResource::VehicleListResource>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	ICEList(/* parameters */);
	WheelList(/* parameters */);
	ChallengeList(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
}

extern void BrnRendererMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnShaderConstantsFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ImRenderBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im2dMask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Im2dMaskLayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnBlobbyShadowManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnBlobbyShadowBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShadowStruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnCoronaManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnSubmissionInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsBlendStateFactory::CgsBlendStateFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRasterizerStateFactory::CgsRasterizerStateFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDepthStencilStateFactory::CgsDepthStencilStateFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DispatchObjectContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OcclusionJobData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OcclusionJobOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnSunCorona() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OcclusionCullManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BasicColouredVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PositionOnlyVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BrnRendererModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	BrnRendererMemory(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	BrnShaderConstantsFrame(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::Im2dRenderBuffer(/* parameters */);
	CgsGraphics::Im2d::Im2d(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	Im2dMask(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::Im2dUntex::Im2dUntex(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::Im3dRenderBuffer::Im3dRenderBuffer(/* parameters */);
	CgsGraphics::Im3d::Im3d(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	Im3dMask(/* parameters */);
	Im3dMaskLayer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::Im3dRenderBufferUntex::Im3dRenderBufferUntex(/* parameters */);
	CgsGraphics::Im3dUntex::Im3dUntex(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::BasicColouredVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	BrnGraphics::Im3dSkyDome::Im3dSkyDome(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	CgsGraphics::Im3dZOnly::Im3dZOnly(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::PositionOnlyVertex>::ImRenderer(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	CgsGraphics::Im3dRenderBuffer::Im3dRenderBuffer(/* parameters */);
	CgsGraphics::Im2dRenderBuffer::Im2dRenderBuffer(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::TextureState::Parameters::Parameters(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	CgsGraphics::Im3dRenderBuffer::Im3dRenderBuffer(/* parameters */);
	CgsGraphics::Im3dRenderBuffer::Im3dRenderBuffer(/* parameters */);
	BrnBlobbyShadowManager(/* parameters */);
	BrnCoronaManager(/* parameters */);
	CgsDepthStencilStateFactory::CgsDepthStencilStateFactory(/* parameters */);
	CgsBlendStateFactory::CgsBlendStateFactory(/* parameters */);
	CgsRasterizerStateFactory::CgsRasterizerStateFactory(/* parameters */);
	BrnSunCorona(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	OcclusionCullManager(/* parameters */);
	BrnGraphics::DebugComponent::DebugComponent(/* parameters */);
}

extern void ICEWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICETake() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::ICEValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::ICEValue::Set(int32_t  liIn) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic1D::Cubic1D(short int  type, float32_t  dur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Stack<ICE::ActionRef,20>::Stack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICECameraMover() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ICE::Cubic3D::Cubic3D(short int  type, float32_t  dur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICECamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICECameraAnchor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraSpaceHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ICEMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraInterpolationController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Interpolater() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ShotSelector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<int32_t,50u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraFinaliser() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InertiaController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void KeyAnimShakeController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void PostOffice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void WorldMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void AllVehicleData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Arbitrator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BehaviourHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::BehaviourHelperIndex::BehaviourHelperIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ArbitratorStateContainer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SharedPlaylists() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEMoviePlaylist() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void IceMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<int32_t,20u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Behaviour::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MomentSelector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::MomentDescription,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<float32_t,10u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InterpolaterHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SharedCameraContainer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEPlayingMovie() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ICEMoviePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ArbitratorStateContainer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MomentController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BehaviourManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BehaviourHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BehaviourParameterBank() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NamedParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Params() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<int32_t,28u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Camera2DRotationController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraSphericalRotationController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TweakerHelper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CameraDebugInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugLog() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void LogString() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugPrinter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugPrinterInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleTracker() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DataJournal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EffectInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnDirector::HookNameStringWrapper,100u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~Arbitrator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~WorldMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ICEWrapper() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::DirectorModule::DirectorModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::ModuleSingleBuffered::ModuleSingleBuffered(/* parameters */);
	DataBuffer(/* parameters */);
	BrnDirector::DebugComponent::DebugComponent(/* parameters */);
	ICEWrapper(/* parameters */);
	ICEManager(/* parameters */);
	ActionQueue(/* parameters */);
	ICECameraMover(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ICE::Cubic1D::Cubic1D(/* parameters */);
	ShotSelector(/* parameters */);
	CameraFinaliser(/* parameters */);
	PostOffice(/* parameters */);
	PostOffice(/* parameters */);
	PostOffice(/* parameters */);
	PostOffice(/* parameters */);
	PostOffice(/* parameters */);
	PostOffice(/* parameters */);
	WorldMap(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnTrigger::TriggerData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::ResourcePtr(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::BaseResources<3u>::BaseResources(/* parameters */);
	Arbitrator(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	AllVehicleData(/* parameters */);
	ArbitratorStateContainer(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	ICEMoviePlaylist(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Array(/* parameters */);
	ICEMoviePlaylist(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Array(/* parameters */);
	ICEMoviePlaylist(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Array(/* parameters */);
	BrnDirector::ArbStateRoaming::ArbStateRoaming(/* parameters */);
	BrnDirector::ArbStateCrashing::ArbStateCrashing(/* parameters */);
	BrnDirector::ArbStateTakedown::ArbStateTakedown(/* parameters */);
	BrnDirector::B3ClassicTakedownPlayer::B3ClassicTakedownPlayer(/* parameters */);
	BrnDirector::DestructionPathTakedownPlayer::DestructionPathTakedownPlayer(/* parameters */);
	BrnDirector::SimpleIceTakedownPlayer::SimpleIceTakedownPlayer(/* parameters */);
	BrnDirector::ShutdownTakedownPlayer::ShutdownTakedownPlayer(/* parameters */);
	BrnDirector::DriveByTakedownPlayer::DriveByTakedownPlayer(/* parameters */);
	BrnDirector::ArbStateCrashMode::ArbStateCrashMode(/* parameters */);
	BrnDirector::ArbStateRaceIntro::ArbStateRaceIntro(/* parameters */);
	Attrib::Gen::shotgroup::shotgroup(/* parameters */);
	MomentSelector(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::Array(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Array(/* parameters */);
	MomentSelector(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentDescription,10u>::Array(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Array(/* parameters */);
	BrnDirector::ArbStatePostEvent::ArbStatePostEvent(/* parameters */);
	MomentSelector(/* parameters */);
	CgsContainers::Array<BrnDirector::MomentController::MomentHandle,10u>::Array(/* parameters */);
	CgsContainers::Array<float32_t,10u>::Array(/* parameters */);
	BrnDirector::ArbStateOnlineRaceIntro::ArbStateOnlineRaceIntro(/* parameters */);
	BrnDirector::ArbStateDriveThru::ArbStateDriveThru(/* parameters */);
	BrnDirector::ArbStateCarSelect::ArbStateCarSelect(/* parameters */);
	BrnDirector::ArbStateRankUp::ArbStateRankUp(/* parameters */);
	BrnDirector::ArbStateOnlineCarSelect::ArbStateOnlineCarSelect(/* parameters */);
	BrnDirector::ArbStateCrashNav::ArbStateCrashNav(/* parameters */);
	ICEMoviePlayer(/* parameters */);
	ICEMoviePlaylist(/* parameters */);
	MomentController(/* parameters */);
	BrnDirector::ArbStateAttractMode::ArbStateAttractMode(/* parameters */);
	BrnDirector::ArbStateRenderMetrics::ArbStateRenderMetrics(/* parameters */);
	BrnDirector::AbstractPool<70u,20u,rw::math::vpu::Vector4>::AbstractPool(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Array(/* parameters */);
	ObjectPool(/* parameters */);
	BehaviourManager(/* parameters */);
	ObjectPool(/* parameters */);
	BrnDirector::AbstractPool<100u,20u,rw::math::vpu::Vector4>::AbstractPool(/* parameters */);
	ObjectPool(/* parameters */);
	ObjectPool(/* parameters */);
	CgsContainers::Array<int32_t,28u>::Array(/* parameters */);
	CgsContainers::Array<CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex, 28u>,28u>::Array(/* parameters */);
	CgsContainers::Array<int32_t,28u>::Array(/* parameters */);
	CgsContainers::Array<BrnDirector::Camera::BehaviourHelperIndex,28u>::Array(/* parameters */);
	DebugLog(/* parameters */);
	VehicleTracker(/* parameters */);
	PrepareForModeAction(/* parameters */);
	GameModeParams(/* parameters */);
	EffectInterface(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsContainers::Array<BrnGameState::StartLocation,8u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::CheckpointData,16u>::Array(/* parameters */);
	CgsContainers::Array<BrnGameState::OpponentData,7u>::Array(/* parameters */);
}

extern void AutoTestManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogFile::LogFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogChannelOutput::LogChannelOutput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::Log::LogCombined::LogCombined() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsLogCombined.h:90
		int32_t liIndex;

	}
}

void CgsDev::Log::LogFile::~LogFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void InputPads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Device() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventReceiverQueue<5120,16>::EventReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Statistics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnSound::Debug::Stat<std::size_t>::Stat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DiskWriteStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DiskReadStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DiskReadStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~DiskWriteStream() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleDriverInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OutEventLineTestNearestResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateRaceCarEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RemoveRaceCarEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ResetVehicleEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetRaceCarCollisionEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetRaceCarCullingGroupEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreatePhysicalTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CreateArticulatedTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void SetTrafficCrashingEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RemoveTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void UpdateNetworkTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CrashingTrafficUpdateEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void NetworkEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::MapFile::MinimalMemoryReader::MinimalMemoryReader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnJuice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CgsJuice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GameMainFlowController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<MainGameFlowState*,7u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ThreadLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BrnJuice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~AutoTestManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::BrnGameModule::BrnGameModule(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AutoTestManager(/* parameters */);
	CgsModule::ModuleSingleBufferedTemplate<BrnGame::BrnGameModuleIO::InputBuffer,BrnGame::BrnGameModuleIO::OutputBuffer>::ModuleSingleBufferedTemplate(/* parameters */);
	OutputBuffer(/* parameters */);
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
	CgsDev::Log::LogChannelOutput::LogChannelOutput(/* parameters */);
	CgsDev::Log::LogCombined::LogCombined(/* parameters */);
	{
	}
	CgsInput::InputModule::InputModule(/* parameters */);
	CgsInput::DevicePS3Pad::DevicePS3Pad(/* parameters */);
	BrnSound::Module::RootSoundModule::RootSoundModule(/* parameters */);
	CgsDev::Log::LogNull::LogNull(/* parameters */);
	CgsDev::Log::LogOutput::LogOutput(/* parameters */);
	CgsDev::DebugUI::LogWindow::LogWindow(/* parameters */);
	CgsDev::DebugUI::CustomWindow::CustomWindow(/* parameters */);
	CgsDev::DebugUI::LogWindowStrStream::LogWindowStrStream(/* parameters */);
	BrnReplays::ReplayModule::ReplayModule(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	BrnSound::Debug::Stat<std::size_t>::Stat(/* parameters */);
	GameEventQueue(/* parameters */);
	DiskWriteStream(/* parameters */);
	DiskReadStream(/* parameters */);
	BrnNetwork::BrnNetworkModule::BrnNetworkModule(/* parameters */);
	BrnReplays::DebugComponent::DebugComponent(/* parameters */);
	VehicleDriverInputInterface(/* parameters */);
	VehicleInputInterface(/* parameters */);
	VehicleOutputInterface(/* parameters */);
	RCEntityActiveRaceCarOutputInterface(/* parameters */);
	GameEventQueue(/* parameters */);
	CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Array(/* parameters */);
	RaceCarState(/* parameters */);
	NetworkInputInterface(/* parameters */);
	NetworkOutputInterface(/* parameters */);
	TimerStatusInterface(/* parameters */);
	NetworkEventQueue(/* parameters */);
	TimerStatus(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	GameEventQueue(/* parameters */);
	GuiEventQueueBase(/* parameters */);
	BrnJuice(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	BrnJuice::BrnJuiceScripting::BrnJuiceScripting(/* parameters */);
	CgsDev::MapFile::MinimalMemoryReader::MinimalMemoryReader(/* parameters */);
	CgsDev::JuiceScripting::JuiceScripting(/* parameters */);
	BrnJuice::JuiceWorldScriptInterface::JuiceWorldScriptInterface(/* parameters */);
	BrnJuice::JuiceGameStateScriptInterface::JuiceGameStateScriptInterface(/* parameters */);
	BrnJuice::JuiceGuiScriptInterface::JuiceGuiScriptInterface(/* parameters */);
	BrnJuice::JuiceNetworkScriptInterface::JuiceNetworkScriptInterface(/* parameters */);
	TimerStatusInterface(/* parameters */);
	GameMainFlowController(/* parameters */);
	MainGameFlowStateInitialLoadingScreen::MainGameFlowStateInitialLoadingScreen(/* parameters */);
	MainGameFlowStateMarketingScreens::MainGameFlowStateMarketingScreens(/* parameters */);
	MainGameFlowStateCheckDiskSpace::MainGameFlowStateCheckDiskSpace(/* parameters */);
	MainGameFlowStateStartScreen::MainGameFlowStateStartScreen(/* parameters */);
	MainGameFlowStateMemoryCard::MainGameFlowStateMemoryCard(/* parameters */);
	MainGameFlowStateCompleteLoading::MainGameFlowStateCompleteLoading(/* parameters */);
	TimerStatus(/* parameters */);
	CgsContainers::Array<MainGameFlowState*,7u>::Array(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
}

void BrnResource::GetRuntimeAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::BrnGameModule::HasGameTerminated() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

CgsFileSystem::KU_INVALID_FILE_ID = -1;

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

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

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

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

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

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

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

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

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

