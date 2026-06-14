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

void CgsFsm::State::Render() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreloadOverlayState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
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

void BrnGui::InvisibleOverlayState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::GetResourcesToLoad(const sResourceTuple **  lpaResourceTuples, uint32_t *  lpuNumberOfResources) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::ProfileHost::HandleProfileTaskResult() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnGui::PreloadOverlayState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreloadOverlayState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InvisibleOverlayState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OverlayComponent::GetTransitionComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OverlayComponent::SetTransitionComplete(const bool  flag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::UpdateWFTransComplete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	OverlayComponent::SetTransitionComplete(/* parameters */);
}

void BrnGui::CrashNavWaitOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavOkOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavOkCancelOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavOnlineWaitOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavOnlineOkOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::CrashNavOnlineOkCancelOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameWaitOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOkOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOkCancelOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOnlineWaitOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOnlineOkOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOnlineOkCancelOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InGameOnlineEnterFreeBurnOverlayState::FillInPopupType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGui::OverlayComponent::GetTransitionMovieClipRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::TextFieldRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::SetupOverlayComponents(const char *  lpcTransition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:601
		BrnFlapt::MovieClipRef * lpTransitionMovieClipRef;

		// BrnBaseOverlayState.cpp:602
		MovieClipRef lHelpItem0;

		// BrnBaseOverlayState.cpp:603
		MovieClipRef lHelpItem1;

		// BrnBaseOverlayState.cpp:604
		MovieClipRef lIcon;

		// BrnBaseOverlayState.cpp:618
		MovieClipRef lTextComponent;

		// BrnBaseOverlayState.cpp:619
		MovieClipRef lTextFieldParent;

		OverlayComponent::GetTransitionMovieClipRef(/* parameters */);
		BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
		BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	}
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

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
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
}

void BrnGui::BrnFlaptComponent::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::MovieClipRef::SetInvalid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::ResetOverlayComponents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::SetInvalid(/* parameters */);
	BrnFlaptComponent::SetInvalid(/* parameters */);
	BrnFlaptComponent::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	BrnFlapt::TextFieldRef::SetInvalid(/* parameters */);
}

void BrnGui::BaseOverlayState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::StateInterface::GetAccessPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiAccessPointers::GetFlaptManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FlaptManager::GetFile(BrnFlapt::FlaptFiles  leFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnFlaptManager.h:187
	FileRef lRef;

	{
		// BrnFlaptManager.h:187
		FileRef lRef;

	}
}

void BrnFlapt::FlaptFileInstance::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnFlapt::FileRef::Construct(BrnFlapt::FlaptFileInstance *  lpFileInst) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::OverlayComponent::RunOverlay(const char *  lpcOverlayFlashId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::InvisibleOverlayState::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInvisibleOverlayState.cpp:62
		FileRef lFlaptFile;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
	OverlayComponent::RunOverlay(/* parameters */);
}

void BrnGui::BaseOverlayState::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:121
		FileRef lFlaptFile;

	}
	CgsGui::StateInterface::GetAccessPointers(/* parameters */);
	CgsGui::GuiAccessPointers::GetFlaptManager(/* parameters */);
	BrnFlapt::FlaptManager::GetFile(/* parameters */);
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<65536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<65536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
}

void CgsModule::VariableEventQueue<65536,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<65536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<65536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<65536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

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

void BrnGui::GuiOverlayCompleteEvent::Construct(CgsID  lOverlayIdHash, BrnGui::GuiOverlayCompleteEvent::LeaveMethod  leLeaveMethod) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiOverlayCompleteEvent,40>::SetRawEvent(const GuiOverlayCompleteEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<187>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<40>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:328
		GuiOverlayCompleteEvent lEventOut;

		OutputGuiEvent<BrnGui::GuiOverlayCompleteEvent>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayCompleteEvent> >(/* parameters */);
		GuiOverlayCompleteEvent::Construct(/* parameters */);
	}
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void BrnGui::BaseOverlayState::SetupOverlay(const GuiOverlayFullInfoResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:465
		char[2][64] laacTempArray;

		// BrnBaseOverlayState.cpp:466
		char *[2] lapcTempArray;

		// BrnBaseOverlayState.cpp:467
		CgsLanguage::LanguageManager::ParameterFormatType[2] laeTempFormatArray;

		// BrnBaseOverlayState.cpp:468
		int32_t liIter;

	}
	CgsCore::StrnCpy(/* parameters */);
}

void CgsGui::StateInterface::GetLanguageManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOkCancelOverlayState::SetupOverlay(const GuiOverlayFullInfoResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOkCancelOverlayState.cpp:107
		char[1024] lacBuffer;

		// BrnBaseOkCancelOverlayState.cpp:108
		UnicodeBuffer::CgsUtf8 * lpcString;

		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
		CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	}
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

void BrnGui::BaseOkOverlayState::SetupOverlay(const GuiOverlayFullInfoResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
	CgsGui::StateInterface::GetLanguageManager(/* parameters */);
}

void BrnGui::BaseWaitOverlayState::SetupOverlay(const GuiOverlayFullInfoResponse *  lpResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::PreloadOverlayState::GetCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreloadOverlayState.cpp:181
		const CgsModule::Event * lpEvent;

		// BrnPreloadOverlayState.cpp:182
		int32_t liEventSize;

		// BrnPreloadOverlayState.cpp:183
		int32_t liEventId;

	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnPreloadOverlayState.cpp:191
		const GuiEventCache * lpCacheEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPreloadOverlayState.cpp:192
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGui::StateInterface::PlayAptMovie(const char *  lpacMovieName, int32_t  liLevelNum) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiStateInterface.h:542
		GuiEventPlayAptMovie lPlayMovieEvent;

	}
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(const GuiEventPlayAptMovie &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<18>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<41>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<16384,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnGui::PreloadOverlayState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPreloadOverlayState.cpp:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	CgsGui::StateInterface::PlayAptMovie(/* parameters */);
	CgsGui::GuiEventWrapper<CgsGui::GuiEventPlayAptMovie,41>::SetRawEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::InvisibleOverlayState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnInvisibleOverlayState.cpp:85
		const CgsModule::Event * lpEvent;

		// BrnInvisibleOverlayState.cpp:86
		int32_t liEventSize;

		// BrnInvisibleOverlayState.cpp:87
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnInvisibleOverlayState.cpp:124
		const GuiOverlayInternalRequestEvent * lpRequest;

		{
			// BrnInvisibleOverlayState.cpp:208
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseOverlayState::GetCache() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:356
		const CgsModule::Event * lpEvent;

		// BrnBaseOverlayState.cpp:357
		int32_t liEventSize;

		// BrnBaseOverlayState.cpp:358
		int32_t liEventId;

	}
	CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBaseOverlayState.cpp:366
		const GuiEventCache * lpCacheEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnBaseOverlayState.cpp:367
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseOverlayState::UpdateWFInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:426
		const CgsModule::Event * lpEvent;

		// BrnBaseOverlayState.cpp:427
		int32_t liEventSize;

		// BrnBaseOverlayState.cpp:428
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBaseOverlayState.cpp:436
		const GuiOverlayFullInfoResponse * lpResponse;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseOverlayState::UpdatePermanent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:513
		const CgsModule::Event * lpEvent;

		// BrnBaseOverlayState.cpp:514
		int32_t liEventSize;

		// BrnBaseOverlayState.cpp:515
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::OverlayComponent::RunOverlay(const char *  lpcOverlayFlashId, const char *  lpcTransition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BrnFlaptComponent::GetMovieClipRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<CgsGui::GuiEvent<184>,40>::SetRawEvent(const GuiEventWrapper<CgsGui::GuiEvent<184>,40>::GuiOverlayFullInfoRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<184>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiOverlayShowingNotification::Construct(CgsID  lOverlayIdHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventWrapper<BrnGui::GuiOverlayShowingNotification,40>::SetRawEvent(const GuiOverlayShowingNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGui::GuiEvent<188>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::BaseOverlayState::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOverlayState.cpp:305
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGui::GuiEventQueueBase<16384,16>::Clear(/* parameters */);
	OverlayComponent::RunOverlay(/* parameters */);
	{
		// BrnBaseOverlayState.cpp:232
		GuiEventWrapper<CgsGui::GuiEvent<184>,40>::GuiOverlayFullInfoRequest lInfoRequest;

		OutputGuiEvent<BrnGui::GuiOverlayFullInfoRequest>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayFullInfoRequest> >(/* parameters */);
	}
	OverlayComponent::RunOverlay(/* parameters */);
	{
		// BrnBaseOverlayState.cpp:261
		GuiOverlayShowingNotification lNotification;

		OutputGuiEvent<BrnGui::GuiOverlayShowingNotification>(/* parameters */);
		AddGuiEvent<CgsGui::GuiEventOut<BrnGui::GuiOverlayShowingNotification> >(/* parameters */);
	}
	OverlayComponent::RunOverlay(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseWaitOverlayState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseWaitOverlayState.cpp:43
		const CgsModule::Event * lpEvent;

		// BrnBaseWaitOverlayState.cpp:44
		int32_t liEventSize;

		// BrnBaseWaitOverlayState.cpp:45
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBaseWaitOverlayState.cpp:53
		const GuiOverlayWaitFinishRequest * lpLeaveRequest;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseOkOverlayState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOkOverlayState.cpp:43
		const CgsModule::Event * lpEvent;

		// BrnBaseOkOverlayState.cpp:44
		int32_t liEventSize;

		// BrnBaseOkOverlayState.cpp:45
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBaseOkOverlayState.cpp:53
		const GuiEventControllerInputPressed * lpEventPressed;

	}
	{
		// BrnBaseOkOverlayState.cpp:62
		const GuiOverlayWaitFinishRequest * lpLeaveRequest;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGui::BaseOkCancelOverlayState::UpdateRunning() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBaseOkCancelOverlayState.cpp:43
		const CgsModule::Event * lpEvent;

		// BrnBaseOkCancelOverlayState.cpp:44
		int32_t liEventSize;

		// BrnBaseOkCancelOverlayState.cpp:45
		int32_t liEventId;

		CgsGui::GuiEventQueueBase<16384,16>::GetFirstEvent(/* parameters */);
	}
	CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsGui::GuiEventQueueBase<16384,16>::GetNextEvent(/* parameters */);
	{
		// BrnBaseOkCancelOverlayState.cpp:53
		const GuiEventControllerInputPressed * lpEventPressed;

	}
	{
		// BrnBaseOkCancelOverlayState.cpp:79
		const GuiOverlayWaitFinishRequest * lpLeaveRequest;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::kfSteeringPower = [63, 128, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

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

BrnProgression_2007_10_04::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression_2007_10_04::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression_2007_10_04::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

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

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

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

BrnGui::PreloadOverlayState::miNumEventsObserved;

BrnGui::InvisibleOverlayState::miNumEventsObserved;

BrnGui::BaseOverlayState::miNumEventsObserved;

BrnGui::BaseOverlayState::miNumOverriddenEvents;

