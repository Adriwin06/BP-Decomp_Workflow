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

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void BrnReplays::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::Update_PreSim(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::Update_PostSim(const InputBuffer_PostSim *  lpInputBuffer, OutputBuffer_PostSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::ClearSerialisers(BrnReplays::BaseSerialiser::EMode  leMode, bool  lbAllowStreaming) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1415
		bool lbKeyFrame;

		// BrnReplayModule.cpp:1418
		int32_t liIndex;

	}
}

void BrnReplays::ReplayModule::UpdateIdle(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:662
		int32_t liIndex;

	}
}

void CgsModule::BaseEventReceiverQueue::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:294
		int32_t liAlignRem;

	}
}

void BrnReplays::ReplayModule::WaitForCloseReplayFiles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
}

void BrnReplays::FrunkReadResult::FrunkReadResult(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void BrnReplays::ReplayModule::UpdatePlaying_PostSim(const InputBuffer_PostSim *  lpInputBuffer, OutputBuffer_PostSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::Construct(BrnReplays::ReplayModule *  lpReplayModule, rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderReadStreamStatus(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::DrawText(CgsDev::Debug2DImmediateRender *  lpRenderer, const char *  lpcText, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::DrawDataSize(CgsDev::Debug2DImmediateRender *  lpRenderer, int32_t  liDataSize, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:615
		char[256] lacBuffer;

		// BrnReplayDebugComponent.cpp:617
		const int32_t KI_MB_SIZE;

		// BrnReplayDebugComponent.cpp:618
		const int32_t KI_KB_SIZE;

		// BrnReplayDebugComponent.cpp:619
		const int32_t KI_B_SIZE;

		// BrnReplayDebugComponent.cpp:621
		int32_t liMB;

		// BrnReplayDebugComponent.cpp:622
		int32_t liKB;

		// BrnReplayDebugComponent.cpp:623
		int32_t liB;

	}
}

void BrnReplays::DebugComponent::DrawInt32(CgsDev::Debug2DImmediateRender *  lpRenderer, int32_t  liValue, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:601
		char[256] lacBuffer;

	}
}

void BrnReplays::DebugComponent::DrawFraction(CgsDev::Debug2DImmediateRender *  lpRenderer, int32_t  liNumerator, int32_t  liDenominator, float32_t  lfXPos, float32_t  lfYPos, float32_t  lfTextSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:651
		char[256] lacBuffer;

	}
}

void CgsContainers::RingBuffer<float32_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::ClearGraph(DebugGraph *  lpGraph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::RingBuffer<float32_t>::Clear(/* parameters */);
}

void BrnReplays::DebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::PreUpdateRecord() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::StartPlayingCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::StopPlayingCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::StartRecordingCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::StopRecordingCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::MarkActionReplayCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::StartActionReplayCB(void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::AutoStartChangeCB(void *  lpValue, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::QuaternionTemplate(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const const QuaternionTemplate<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// quaternion_operation.h:96
	QuaternionTemplate<float> & r;

	{
		// quaternion_operation.h:96
		QuaternionTemplate<float> r;

		QuaternionTemplate<float>::QuaternionTemplate(/* parameters */);
	}
}

void rw::RwPtrToOffset<void>(const void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddOffset<BrnReplays::StreamOffset>(StreamOffset *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToOffset<BrnReplays::StreamOffset>(const StreamOffset *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrFromOffset<BrnReplays::StreamOffset>(TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrAddBasePtr<BrnReplays::StreamOffset>(StreamOffset *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::fpu::IsSimilar<float>(const const QuaternionTemplate<float> &  a, const const QuaternionTemplate<float> &  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Abs<float>(/* parameters */);
	Abs<float>(/* parameters */);
	Abs<float>(/* parameters */);
	Abs<float>(/* parameters */);
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

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const Vector2Template<float> &  v0, const const Vector2Template<float> &  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:428
	Vector2Template<float> & retVec;

	{
		// vector2_operation.h:428
		Vector2Template<float> retVec;

		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		Vector2Template<float>::Vector2Template(/* parameters */);
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

void rw::math::fpu::Min<float>(const const Vector2Template<float> &  v0, const const Vector2Template<float> &  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:421
	Vector2Template<float> & retVec;

	{
		// vector2_operation.h:421
		Vector2Template<float> retVec;

		rw::math::fpu::Min<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
		Vector2Template<float>::Vector2Template(/* parameters */);
	}
}

void rw::math::fpu::operator/<float>(const const QuaternionTemplate<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// quaternion_operation.h:111
	QuaternionTemplate<float> & r;

	{
		// quaternion_operation.h:110
		float scalarInv;

		// quaternion_operation.h:111
		QuaternionTemplate<float> r;

		QuaternionTemplate<float>::QuaternionTemplate(/* parameters */);
	}
}

void rw::math::fpu::operator-<float>(const const QuaternionTemplate<float> &  a, const const QuaternionTemplate<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// quaternion_operation.h:139
	QuaternionTemplate<float> & r;

	{
		// quaternion_operation.h:139
		QuaternionTemplate<float> r;

		QuaternionTemplate<float>::QuaternionTemplate(/* parameters */);
	}
}

void rw::math::fpu::operator+<float>(const const QuaternionTemplate<float> &  a, const const QuaternionTemplate<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// quaternion_operation.h:118
	QuaternionTemplate<float> & r;

	{
		// quaternion_operation.h:118
		QuaternionTemplate<float> r;

		QuaternionTemplate<float>::QuaternionTemplate(/* parameters */);
	}
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

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
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

void rw::math::fpu::Vector3Template<float>::Vector3Template(const const rw::math::vpu::Vector3 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
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

void rw::math::fpu::QuaternionTemplate<float>::QuaternionTemplate(const const rw::math::vpu::Quaternion &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::QuaternionTemplate(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::QuaternionTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::operator=(const const QuaternionTemplate<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuatPosTemplate<float>::QuatPosTemplate(const const rw::math::vpu::QuatPos &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuatPosTemplate<float>::QuatPosTemplate(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::QuaternionTemplate<float>::operator=(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(const const rw::math::vpu::Vector4 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::RenderDebugHUD() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1550
		DebugInterface lInterface;

		// BrnReplayModule.cpp:1551
		const DebugRender & lRender;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		{
			// BrnReplayModule.cpp:1555
			char[256] lacBuffer;

			rw::RGBA::RGBA(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
		}
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator+<float>(const const Vector2Template<float> &  a, const const Vector2Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector2_operation.h:120
	Vector2Template<float> & r;

	{
		// vector2_operation.h:120
		Vector2Template<float> r;

	}
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderTitle(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::operator+<float>(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderStatus(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:169
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:170
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:171
		float32_t lfXPos;

		// BrnReplayDebugComponent.cpp:171
		float32_t lfYPos;

		// BrnReplayDebugComponent.cpp:173
		float32_t lfTopY;

		// BrnReplayDebugComponent.cpp:174
		float32_t lfYInterval;

		// BrnReplayDebugComponent.cpp:177
		float32_t lfTextSize;

		// BrnReplayDebugComponent.cpp:179
		RGBA lHeaderColour;

		// BrnReplayDebugComponent.cpp:180
		RGBA lTextColour;

		rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
		rw::math::fpu::operator+<float>(/* parameters */);
	}
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Y(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderSerialisers(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:319
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:320
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:322
		char[256] lacBuffer;

		// BrnReplayDebugComponent.cpp:324
		float32_t lfTopY;

		// BrnReplayDebugComponent.cpp:325
		float32_t lfYInterval;

		// BrnReplayDebugComponent.cpp:326
		float32_t[6] lafXOffsets;

		// BrnReplayDebugComponent.cpp:328
		float32_t lfHeaderSize;

		// BrnReplayDebugComponent.cpp:329
		float32_t lfTextSize;

		// BrnReplayDebugComponent.cpp:331
		RGBA lHeaderColour;

		// BrnReplayDebugComponent.cpp:332
		RGBA lTextColour;

		// BrnReplayDebugComponent.cpp:334
		float32_t lfXPos;

		// BrnReplayDebugComponent.cpp:334
		float32_t lfYPos;

		// BrnReplayDebugComponent.cpp:335
		int liOffsetIndex;

		// BrnReplayDebugComponent.cpp:359
		int32_t liIndex;

		rw::RGBA::RGBA(/* parameters */);
		rw::RGBA::RGBA(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Y(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
		rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	}
	{
		// BrnReplayDebugComponent.cpp:362
		const DebugSerialiserInfo & lInfo;

	}
}

void rw::RGBA::RGBA() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::StreamHeader::IsFrunkInStream(int32_t  liFrunkIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderReadStreamBlocks(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:495
		float32_t _lfBlockWidth;

		// BrnReplayDebugComponent.cpp:496
		float32_t _lfBlockHeight;

		// BrnReplayDebugComponent.cpp:497
		float32_t _lfBlockBorder;

		// BrnReplayDebugComponent.cpp:498
		int32_t _liBlocksPerRow;

		// BrnReplayDebugComponent.cpp:499
		float32_t _lfXOffset;

		// BrnReplayDebugComponent.cpp:500
		float32_t _lfYOffset;

		// BrnReplayDebugComponent.cpp:502
		RGBA lUnusedColour;

		// BrnReplayDebugComponent.cpp:503
		RGBA lKeyFrameColour;

		// BrnReplayDebugComponent.cpp:504
		RGBA lStdFrameColour;

		// BrnReplayDebugComponent.cpp:505
		RGBA lCurrFrameColour;

		// BrnReplayDebugComponent.cpp:506
		RGBA lFirstFrameColour;

		// BrnReplayDebugComponent.cpp:507
		RGBA lVoidFrameColour;

		// BrnReplayDebugComponent.cpp:509
		int32_t liNumWholeRows;

		// BrnReplayDebugComponent.cpp:510
		int32_t liFinalRowWidth;

		// BrnReplayDebugComponent.cpp:511
		int32_t liNumRows;

		// BrnReplayDebugComponent.cpp:513
		float32_t lfTotalBlockWidth;

		// BrnReplayDebugComponent.cpp:514
		float32_t lfTotalBlockHeight;

		// BrnReplayDebugComponent.cpp:515
		float32_t lfWidth;

		// BrnReplayDebugComponent.cpp:516
		float32_t lfHeight;

		// BrnReplayDebugComponent.cpp:518
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:519
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:535
		StreamHeader * lpHeader;

		// BrnReplayDebugComponent.cpp:537
		int32_t liBlockIndex;

	}
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// BrnReplayDebugComponent.cpp:540
		int32_t liBlockXIndex;

		// BrnReplayDebugComponent.cpp:541
		int32_t liBlockYIndex;

		// BrnReplayDebugComponent.cpp:542
		float32_t lfBlockXCoord;

		// BrnReplayDebugComponent.cpp:543
		float32_t lfBlockYCoord;

		// BrnReplayDebugComponent.cpp:544
		RGBA lBlockColour;

	}
	StreamHeader::IsFrunkInStream(/* parameters */);
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

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
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
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
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
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
}

void BrnReplays::DebugComponent::RenderWriteStreamBlocks(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:407
		float32_t _lfBlockWidth;

		// BrnReplayDebugComponent.cpp:408
		float32_t _lfBlockHeight;

		// BrnReplayDebugComponent.cpp:409
		float32_t _lfBlockBorder;

		// BrnReplayDebugComponent.cpp:410
		int32_t _liBlocksPerRow;

		// BrnReplayDebugComponent.cpp:411
		float32_t _lfXOffset;

		// BrnReplayDebugComponent.cpp:412
		float32_t _lfYOffset;

		// BrnReplayDebugComponent.cpp:414
		RGBA lUnusedColour;

		// BrnReplayDebugComponent.cpp:415
		RGBA lKeyFrameColour;

		// BrnReplayDebugComponent.cpp:416
		RGBA lStdFrameColour;

		// BrnReplayDebugComponent.cpp:417
		RGBA lCurrFrameColour;

		// BrnReplayDebugComponent.cpp:418
		RGBA lFirstFrameColour;

		// BrnReplayDebugComponent.cpp:419
		RGBA lVoidFrameColour;

		// BrnReplayDebugComponent.cpp:421
		int32_t liNumWholeRows;

		// BrnReplayDebugComponent.cpp:422
		int32_t liFinalRowWidth;

		// BrnReplayDebugComponent.cpp:423
		int32_t liNumRows;

		// BrnReplayDebugComponent.cpp:425
		float32_t lfTotalBlockWidth;

		// BrnReplayDebugComponent.cpp:426
		float32_t lfTotalBlockHeight;

		// BrnReplayDebugComponent.cpp:427
		float32_t lfWidth;

		// BrnReplayDebugComponent.cpp:428
		float32_t lfHeight;

		// BrnReplayDebugComponent.cpp:430
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:431
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:447
		StreamHeader * lpHeader;

		// BrnReplayDebugComponent.cpp:449
		int32_t liBlockIndex;

	}
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	{
		// BrnReplayDebugComponent.cpp:452
		int32_t liBlockXIndex;

		// BrnReplayDebugComponent.cpp:453
		int32_t liBlockYIndex;

		// BrnReplayDebugComponent.cpp:454
		float32_t lfBlockXCoord;

		// BrnReplayDebugComponent.cpp:455
		float32_t lfBlockYCoord;

		// BrnReplayDebugComponent.cpp:456
		RGBA lBlockColour;

	}
	StreamHeader::IsFrunkInStream(/* parameters */);
}

void rw::RwPtrSubtractOffset<BrnReplays::StreamOffset>(StreamOffset *  ptr, TargetPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrSubtractBasePtr<BrnReplays::StreamOffset>(StreamOffset *  ptr, const void *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileFutexHelper::FileFutexHelper(const Futex &  lFutex, const char *  lpName) {
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

void CgsFileSystem::FileFutexHelper::~FileFutexHelper() {
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

void CgsFileSystem::FileSystem::Read(uint32_t  luFileID, void *  lpOutputBuffer, uint64_t  luFilePosition, uint64_t  lnSizeToRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[5] __FUNCTION__;

	{
		// CgsFileSystem.h:410
		FileFutexHelper lFutexHelper;

		// CgsFileSystem.h:411
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

void CgsFileSystem::FileSystem::Read(None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void CgsFileSystem::FileSystem::Write(uint32_t  luFileID, const void *  lpInputBuffer, uint64_t  luFilePosition, uint64_t  lnSizeToWrite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[6] __FUNCTION__;

	{
		// CgsFileSystem.h:432
		FileFutexHelper lFutexHelper;

		// CgsFileSystem.h:433
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

void CgsFileSystem::FileSystem::Write(None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsFileSystem::FileFutexHelper::FileFutexHelper(/* parameters */);
	CgsFileSystem::FileFutexHelper::~FileFutexHelper(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
}

void EA::Thread::AutoMutex::AutoMutex(const Mutex &  mutex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Thread::AutoMutex::~AutoMutex() {
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

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetY() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Clamp<float>(float  value, float  min, float  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::RingBuffer<float32_t>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetX() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DebugComponent::RenderGraph(CgsDev::Debug2DImmediateRender *  lpRenderer, DebugGraph *  lpGraph, const const Vector2Template<float> &  lOrigin, const const Vector2Template<float> &  lSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:663
		RGBA lBackColour;

		// BrnReplayDebugComponent.cpp:664
		RGBA lLineColour;

		// BrnReplayDebugComponent.cpp:678
		float32_t lfVal0;

		// BrnReplayDebugComponent.cpp:679
		float32_t lfVal1;

		// BrnReplayDebugComponent.cpp:680
		Vector2 lVal0Pos;

		// BrnReplayDebugComponent.cpp:681
		Vector2 lVal1Pos;

		// BrnReplayDebugComponent.cpp:686
		int32_t liIndex;

	}
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	Vector2<float>(/* parameters */);
	Vector2<float>(/* parameters */);
	CgsContainers::RingBuffer<float32_t>::GetLength(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	{
		// BrnReplayDebugComponent.cpp:692
		float32_t lfVal0Scaled;

		// BrnReplayDebugComponent.cpp:693
		float32_t lfVal1Scaled;

		CgsContainers::RingBuffer<float32_t>::operator[](/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		rw::math::vpu::Vector2::SetX(/* parameters */);
		Vector2<float>(/* parameters */);
		Vector2<float>(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
	CgsContainers::RingBuffer<float32_t>::operator[](/* parameters */);
}

void BrnReplays::DebugComponent::RenderWriteStreamStatus(CgsDev::Debug2DImmediateRender *  lpRenderer, const const Vector2Template<float> &  lOrigin, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:214
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:215
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:216
		float32_t lfXPos;

		// BrnReplayDebugComponent.cpp:216
		float32_t lfYPos;

		// BrnReplayDebugComponent.cpp:218
		float32_t lfTopY;

		// BrnReplayDebugComponent.cpp:219
		float32_t lfYInterval;

		// BrnReplayDebugComponent.cpp:220
		float32_t lfGraphWidth;

		// BrnReplayDebugComponent.cpp:221
		float32_t lfGraphHeight;

		// BrnReplayDebugComponent.cpp:224
		float32_t lfTextSize;

		// BrnReplayDebugComponent.cpp:226
		RGBA lHeaderColour;

		// BrnReplayDebugComponent.cpp:227
		RGBA lTextColour;

		rw::math::fpu::operator+<float>(/* parameters */);
	}
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Y(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

void BrnReplays::DebugComponent::RenderMainWindow(CgsDev::Debug2DImmediateRender *  lpRenderer, AISection::Vector2 *  lpOutMinExtent, AISection::Vector2 *  lpOutMaxExtent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:115
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:116
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:117
		AISection::Vector2 lOrigin;

	}
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
}

void BrnReplays::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:97
		AISection::Vector2 lMin;

		// BrnReplayDebugComponent.cpp:98
		AISection::Vector2 lMax;

		// BrnReplayDebugComponent.cpp:99
		RGBA lBGColour;

	}
	rw::RGBA::RGBA(/* parameters */);
}

void BrnReplays::ReplayIO::RequestInterface::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::IsAttached() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::GetGlobalRaceCar() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IsAttached(/* parameters */);
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::SetMode(BrnReplays::BaseSerialiser::EMode  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:312
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::BaseSerialiser::SetDataRestored(bool  lbDataRestored) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::UpdateRestoring_PreSim(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1059
		int32_t liIndex;

		BaseSerialiser::SetMode(/* parameters */);
		BaseSerialiser::SetDataRestored(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::BeginRestoring(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:633
		int32_t liIndex;

	}
	BaseSerialiser::SetMode(/* parameters */);
	BaseSerialiser::SetDataRestored(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GetDebugAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Clear() {
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

void CgsModule::EventReceiverQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:112
		int32_t liIndex;

	}
	BrnResource::GetDebugAllocator(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::RaceCarEntitySerialiser::GetStaticLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.h:151
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::BaseSerialiser::GetStaticBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::GetStaticBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::Write(const bool &  lbBoolValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:445
		uint8_t luBits;

	}
}

void BrnWorld::BoostManager::IsBoosting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::GetBoostStrategy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsTailgating() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsOncoming() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsDrifting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsBlueMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::GetBoostAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::GetMaxBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::GetIsChainNotifyPending(uint32_t *  lpOutNumChained) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::AreWeAllowedToBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::HasJustLostBoostChunk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::BoostManager::IsBoostFull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::IsInAir() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::IsDrifting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::IsOnRaceStartState(BrnWorld::ERaceStartState  leStartLineState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::IsDoingStartLineBoost() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::GetPhysicsState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::RaceCarState::operator=(const const RaceCarState &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::IsStalled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::IsKeyFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::Read(const bool &  lbBoolValue) {
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

void BrnReplays::ReplayModule::Prepare(const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnResource::GameDataIO::AllocatorList::GetLinearAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::ReplayModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
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

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

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

void BrnReplays::BaseSerialiser::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::BaseSerialiser::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:298
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::ReplayModule::UpdateRestoring_PostSim(const InputBuffer_PostSim *  lpInputBuffer, OutputBuffer_PostSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1160
		int32_t liIndex;

		// BrnReplayModule.cpp:1161
		bool lbAllRestored;

		{
			// BrnReplayModule.cpp:1174
			LeaveReplayEvent lEvent;

			BaseSerialiser::Lock(/* parameters */);
			BaseSerialiser::SetMode(/* parameters */);
			BaseSerialiser::Unlock(/* parameters */);
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
}

void BrnReplays::ReplayModule::StopRecording(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1202
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayIO::StatusInterface::SetRecording(bool  lbRecording) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::StatusInterface::SetPlaying(bool  lbPlaying) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::StatusInterface::SetReel(int32_t  liIndex, const Reel *  lpReel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayStatusInterface.h:227
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::ReplayIO::StatusInterface::SetFull(bool  lbFull) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::StatusInterface::SetCurrentReels(int32_t  liRecordIndex, int32_t  liPlaybackIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::SetStatusInterface(StatusInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1273
		int32_t liIndex;

		// BrnReplayModule.cpp:1274
		int32_t liNumUsed;

	}
	ReplayIO::StatusInterface::SetPlaying(/* parameters */);
	ReplayIO::StatusInterface::SetReel(/* parameters */);
	ReplayIO::StatusInterface::SetFull(/* parameters */);
	ReplayIO::StatusInterface::SetCurrentReels(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ReplayIO::StatusInterface::SetRecording(/* parameters */);
}

void BrnReplays::ReplayIO::RequestInterface::GetSerialiser(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRequestInterface.h:112
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::ReplayModule::StoreSerialisers(const RequestInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1303
		int32_t liIndex;

		ReplayIO::RequestInterface::GetSerialiser(/* parameters */);
	}
	{
		// BrnReplayModule.cpp:1312
		BaseSerialiser * lpSerialiser;

		ReplayIO::RequestInterface::GetSerialiser(/* parameters */);
		{
			// BrnReplayModule.cpp:1324
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
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

void BrnReplays::ReplayModule::LockSerialisers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1374
		int32_t liIndex;

		BaseSerialiser::Lock(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::UnlockSerialisers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1394
		int32_t liIndex;

		BaseSerialiser::Unlock(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

void CgsResource::Events::FileHandleEvent::GetFileHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileHandle::operator=(const const FileHandle &  lOtherHandle) {
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

void BrnReplays::DiskReadStream::GetStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::DiskWriteStream::GetStatus() {
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

void BrnReplays::ReplayModule::WaitForOpenReplayFiles() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1473
		int32_t liEventSize;

		// BrnReplayModule.cpp:1474
		const CgsModule::Event * lpEvent;

		// BrnReplayModule.cpp:1475
		int32_t liEventId;

	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetNextEvent(/* parameters */);
	DiskReadStream::GetStatus(/* parameters */);
	DiskWriteStream::GetStatus(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsFileSystem::FileHandle::GetStatus(/* parameters */);
	{
		// BrnReplayModule.cpp:1484
		const OpenFileResponse * lpResponse;

		CgsFileSystem::FileHandle::operator=(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1024,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
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

void CgsModule::VariableEventQueue<1024,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1024,16>::OutputQueueContents() {
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

void CgsModule::VariableEventQueue<1024,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1024,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
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

void CgsModule::VariableEventQueue<1024,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

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

void CgsContainers::RingBuffer<float32_t>::Push(const float32_t *  lpEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRingBuffer.h:137
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::DebugComponent::PostUpdateRecord() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:764
		float32_t lfValue;

		CgsContainers::RingBuffer<float32_t>::Push(/* parameters */);
	}
}

void BrnReplays::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDebugComponent.cpp:777
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
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

void CgsSystem::TimerStatusInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::Clear() {
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

void BrnReplays::ReplayIO::StatusInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayStatusInterface.h:115
		int32_t liIndex;

	}
}

void BrnResource::GameDataIO::RequestInterface<1024>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<1024,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsModule::VariableEventQueue<1024,16>::Clear() {
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

void BrnResource::GameDataIO::RequestInterface<1024>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEventQueueBase<4096,16>::Construct() {
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

void BrnReplays::ReplayIO::RequestInterface::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRequestInterface.h:75
		int32_t liIndex;

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

void BrnReplays::DirectorBridgeSerialiser::GetStaticLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayDirectorBridgeSerialiser.h:155
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::BaseSerialiser::IsRecording() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
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

void BrnReplays::BaseSerialiser::IsPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<35u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:714
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnRaceCarEntityModuleOutputInterface.h:715
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex lePlayerScoringIndex;

	}
}

void CgsResource::ResourceHandle::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetActiveRaceCarIndex(BrnGameState::GameStateModuleIO::EPlayerScoringIndex  lePlayerScoringIndex, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::operator++(const BrnGameState::GameStateModuleIO::EPlayerScoringIndex &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:158
		BrnGameState::GameStateModuleIO::EPlayerScoringIndex leOldEnumIndex;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::ClearCarsInRace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleOutputInterface.h:1321
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

	}
}

void CgsContainers::BitArray<35u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::IsPreparing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::IsRestoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetPlayerActiveRaceCarData(EActiveRaceCarIndex  leActiveRaceCarIndex, BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState  leEngineState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::SetPlayerGlobalRaceCarIndex(EGlobalRaceCarIndex  lePlayerGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetBoostOutputInfoN(EActiveRaceCarIndex  leActiveRaceCarIndex, const const BoostOutputInfo &  lBoostOutputInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::SetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex, EGlobalRaceCarIndex  leGlobalRaceCarIndex, CgsID  lRivalId, CgsID  lCarModelId, const RCEntityActiveRaceCarOutputInterface::RaceCarState *  lpState, uint32_t  lxFlags, uint16_t  liAISection, uint32_t  luColourIndex, int32_t  liPaintFinishIndex, const rw::math::vpu::Vector4  lMaterialColour, const rw::math::vpu::Vector3  lCurrentInAirRotations, bool  lbHasCrashedIntoWater, bool  lbCanDriveAwayFromCrash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldRegion::Construct(BrnWorld::EDistrict  leDistrict) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::SetRaceCarData(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lAt, WorldRegion  lWorldRegion, CgsID  lRivalId, CgsID  lCarModelId, float32_t  lfSpeed, uint16_t  luAISectionIndex, EGlobalRaceCarIndex  leGlobalRaceCarIndex, int8_t  liRivalId, EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbIsPlayer, bool  lbIsRivalAI, bool  lbIsNetwork, bool  lbIsInCurrentMode, bool  lbIsDispersing, bool  lbIsInRange) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsNormal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetNormalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_platform_inline.h:45
	VecFloat error;

	{
		// matrix33_operation_platform_inline.h:41
		VecFloat one;

		// matrix33_operation_platform_inline.h:42
		Vector3 errorVec;

		// matrix33_operation_platform_inline.h:45
		VecFloat error;

	}
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::IsZero(const VecFloat  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void CgsDev::StrStreamBase::operator<<(const rw::math::vpu::Matrix44Affine &  lMat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:761
		float32_t lf00;

		// CgsStrStream.h:762
		float32_t lf01;

		// CgsStrStream.h:763
		float32_t lf02;

		// CgsStrStream.h:764
		float32_t lf03;

		// CgsStrStream.h:765
		float32_t lf10;

		// CgsStrStream.h:766
		float32_t lf11;

		// CgsStrStream.h:767
		float32_t lf12;

		// CgsStrStream.h:768
		float32_t lf13;

		// CgsStrStream.h:769
		float32_t lf20;

		// CgsStrStream.h:770
		float32_t lf21;

		// CgsStrStream.h:771
		float32_t lf22;

		// CgsStrStream.h:772
		float32_t lf23;

		// CgsStrStream.h:773
		float32_t lf30;

		// CgsStrStream.h:774
		float32_t lf31;

		// CgsStrStream.h:775
		float32_t lf32;

		// CgsStrStream.h:776
		float32_t lf33;

	}
}

void rw::math::vpu::IsOrthogonal3x3(const rw::math::vpu::Matrix44Affine &  matrix, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError3x3(const rw::math::vpu::Matrix44Affine &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetOrthogonalError(const rw::math::vpu::Matrix33 &  matrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation_inline.h:63
	VecFloat error;

	{
		// matrix33_operation_inline.h:53
		Matrix33 identity;

		// matrix33_operation_inline.h:56
		Matrix33 result;

		// matrix33_operation_inline.h:59
		Vector3 errorVec;

		// matrix33_operation_inline.h:63
		VecFloat error;

	}
}

void rw::math::vpu::Transpose(const rw::math::vpu::Matrix33 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix33_operation_platform_inline.h:80
		VectorIntrinsicUnion::VectorIntrinsic z;

		{
			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp1;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp2;

			// matrix33_operation_platform_inline.h:81
			VectorIntrinsicUnion::VectorIntrinsic temp3;

		}
	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix33 &  m, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic bX;

		// matrix33_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic bY;

		// matrix33_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic bZ;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row0;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row1;

		// matrix33_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic row2;

		{
			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:72
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:73
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
		{
			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic xSplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic ySplat;

			// matrix33_operation_platform_inline.h:74
			VectorIntrinsicUnion::VectorIntrinsic zSplat;

		}
	}
}

void rw::math::vpu::SelfSubtract(const Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Matrix33 &  a, const rw::math::vpu::Matrix33 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Subtract(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QuatPosFromMatrix44Affine(const rw::math::vpu::Matrix44Affine &  mat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QuaternionFromMatrix44Affine(const rw::math::vpu::Matrix44Affine &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::QuaternionFromMatrix33(const rw::math::vpu::Matrix33 &  m, const VecFloat  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// quaternion_operation_inline.h:303
		VectorIntrinsicUnion::VectorIntrinsic half;

		// quaternion_operation_inline.h:304
		VectorIntrinsicUnion::VectorIntrinsic one;

		// quaternion_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic zero;

		// quaternion_operation_inline.h:306
		VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatX;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatY;

		// quaternion_operation_inline.h:308
		VectorIntrinsicUnion::VectorIntrinsic splatZ;

		// quaternion_operation_inline.h:313
		VectorIntrinsicUnion::VectorIntrinsic signedX;

		// quaternion_operation_inline.h:314
		VectorIntrinsicUnion::VectorIntrinsic signedY;

		// quaternion_operation_inline.h:315
		VectorIntrinsicUnion::VectorIntrinsic signedZ;

		// quaternion_operation_inline.h:316
		VectorIntrinsicUnion::VectorIntrinsic sumXY;

		// quaternion_operation_inline.h:317
		VectorIntrinsicUnion::VectorIntrinsic sumZOne;

		// quaternion_operation_inline.h:318
		VectorIntrinsicUnion::VectorIntrinsic valuesToSqrt;

		// quaternion_operation_inline.h:320
		VectorIntrinsicUnion::VectorIntrinsic trace;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s;

		// quaternion_operation_inline.h:325
		VectorIntrinsicUnion::VectorIntrinsic s2;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp1;

		// quaternion_operation_inline.h:329
		VectorIntrinsicUnion::VectorIntrinsic quat_from_mat_temp2;

		// quaternion_operation_inline.h:332
		VectorIntrinsicUnion::VectorIntrinsic N;

		// quaternion_operation_inline.h:333
		VectorIntrinsicUnion::VectorIntrinsic S;

		// quaternion_operation_inline.h:336
		VectorIntrinsicUnion::VectorIntrinsic permuteScales0;

		// quaternion_operation_inline.h:337
		VectorIntrinsicUnion::VectorIntrinsic scale0;

		// quaternion_operation_inline.h:338
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ0;

		// quaternion_operation_inline.h:339
		VectorIntrinsicUnion::VectorIntrinsic scaledQ0;

		// quaternion_operation_inline.h:343
		VectorIntrinsicUnion::VectorIntrinsic permuteScales1;

		// quaternion_operation_inline.h:344
		VectorIntrinsicUnion::VectorIntrinsic scale1;

		// quaternion_operation_inline.h:345
		VectorIntrinsicUnion::VectorIntrinsic permute1;

		// quaternion_operation_inline.h:346
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ1;

		// quaternion_operation_inline.h:347
		VectorIntrinsicUnion::VectorIntrinsic scaledQ1;

		// quaternion_operation_inline.h:351
		VectorIntrinsicUnion::VectorIntrinsic permuteScales2;

		// quaternion_operation_inline.h:352
		VectorIntrinsicUnion::VectorIntrinsic scale2;

		// quaternion_operation_inline.h:353
		VectorIntrinsicUnion::VectorIntrinsic permute2;

		// quaternion_operation_inline.h:354
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ2;

		// quaternion_operation_inline.h:355
		VectorIntrinsicUnion::VectorIntrinsic scaledQ2;

		// quaternion_operation_inline.h:359
		VectorIntrinsicUnion::VectorIntrinsic permuteScales3;

		// quaternion_operation_inline.h:360
		VectorIntrinsicUnion::VectorIntrinsic scale3;

		// quaternion_operation_inline.h:361
		VectorIntrinsicUnion::VectorIntrinsic permute3;

		// quaternion_operation_inline.h:362
		VectorIntrinsicUnion::VectorIntrinsic unscaledQ3;

		// quaternion_operation_inline.h:363
		VectorIntrinsicUnion::VectorIntrinsic scaledQ3;

		// quaternion_operation_inline.h:389
		VectorIntrinsicUnion::VectorIntrinsic condition1Mask;

		// quaternion_operation_inline.h:390
		VectorIntrinsicUnion::VectorIntrinsic condition2Mask;

		// quaternion_operation_inline.h:394
		VectorIntrinsicUnion::VectorIntrinsic condition3Mask;

		// quaternion_operation_inline.h:395
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vZero;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vOne;

			// quaternion_operation_inline.h:324
			VectorIntrinsicUnion::VectorIntrinsic vHalf;

			{
				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic estimate;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vZero;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				// quaternion_operation_inline.h:324
				VectorIntrinsicUnion::VectorIntrinsic vHalf;

			}
		}
		{
			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:330
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
		{
			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// quaternion_operation_inline.h:331
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void rw::math::vpu::Matrix44AffineFromQuatPos(const rw::math::vpu::QuatPos &  qp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuatPosTemplate<float>::QuatPosTemplate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator*<float>(const const Vector3Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:99
	Vector3Template<float> & r;

	{
		// vector3_operation.h:99
		Vector3Template<float> r;

	}
}

void rw::math::fpu::operator+<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsSimilar<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::operator-<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:141
	Vector3Template<float> & r;

	{
		// vector3_operation.h:141
		Vector3Template<float> r;

	}
}

void rw::math::fpu::operator/<float>(const const Vector3Template<float> &  vec, const const float &  scalar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector3_operation.h:114
	Vector3Template<float> & r;

	{
		// vector3_operation.h:113
		float scalarInv;

		// vector3_operation.h:114
		Vector3Template<float> r;

	}
}

void BrnReplays::BaseSerialiser::Write(const Road::Vector3 &  lvVectorValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:485
		int32_t liSize;

	}
}

void BrnReplays::BaseSerialiser::Write(const Quaternion &  lvVectorValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:531
		int32_t liSize;

	}
}

extern QuatPosTemplate<float> & operator=(const const QuatPosTemplate<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuatPosTemplate<float>::SetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuatPosTemplate<float>::Set(float  quatX, float  quatY, float  quatZ, float  quatW, float  posX, float  posY, float  posZ) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::QuaternionTemplate<float>::Set(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Set(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::RenderParams::GetWheelExists(uint32_t  luWheel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::BaseSerialiser::WriteScaleMatrix(const rw::math::vpu::Matrix44Affine &  lMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayBaseSerialiser.h:574
		Road::Vector3 lScale;

	}
}

void BrnWorld::ActiveRaceCar::RenderParams::GetVerletOffsets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::IsZero(const rw::math::vpu::Vector4  v, const VecFloat  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmIsZeroV4(VectorIntrinsicInParam  v, VectorIntrinsicInParam  tolerance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:274
		bool ret;

		{
			// vector_intrinsic_operation_inline.h:275
			VectorIntrinsicUnion::VectorIntrinsic comparisonValue;

			{
				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic mask;

				// vector_intrinsic_operation_inline.h:275
				const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

			}
		}
	}
}

void rw::math::fpu::Vector4Template<float>::SetZero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Set(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsSimilar(float  a, float  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::SetComponent(int  i, float  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::operator=(const const Vector4Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::RaceCarKeyData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRaceCarEntitySerialiser.h:139
		uint32_t luWheelIndex;

	}
}

void BrnReplays::OrthonormalMatrix::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::RenderParams::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.h:2032
		uint32_t luWheelIndex;

	}
}

void CgsContainers::BitArray<96u>::SetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Construct(DetachedPartRenderEvent *  lpEventBuffer, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::SetEventPointer(DetachedPartRenderEvent *  lpEventBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::ActiveRaceCar::RenderParams::ResetCrackedGlassFractureAmounts() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveRaceCar.h:460
		int i;

	}
}

void BrnWorld::ActiveRaceCar::GetRenderParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BrnWorld::ActiveRaceCar::RenderParams & operator=(const const BrnWorld::ActiveRaceCar::RenderParams &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::operator=(const const EventQueue<BrnWorld::DetachedPartRenderEvent,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::DetachedPartRenderEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::Append(const const BaseEventQueue<BrnWorld::DetachedPartRenderEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::DetachedPartRenderEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCar::GetModelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCar::IsInWorld() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCar::GetWheelModelId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCar::GetGlobalRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::StreamHeader::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::operator new(size_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::UpdateRecording_PostSim(const InputBuffer_PostSim *  lpInputBuffer, OutputBuffer_PostSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1087
		FrunkSerialiserEntry[5] laEntries;

		// BrnReplayModule.cpp:1088
		void *[5] lapBuffers;

		// BrnReplayModule.cpp:1089
		int32_t liNumEntries;

		// BrnReplayModule.cpp:1090
		int32_t liIndex;

		// BrnReplayModule.cpp:1096
		bool lbKeyFrame;

	}
}

void rw::core::filesys::AsyncOp::operator delete(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::core::filesys::AsyncOp::GetContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::OutputBuffer_PreSim::GetGameDataRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModuleIO.h:112
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<1024>::OpenFile(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, const char *  lpcFileName, CgsFileSystem::FileAccess  leFileAccess, int32_t  liPriority, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1313
		OpenFileRequest lRequest;

	}
}

void CgsResource::Events::OpenFileRequest::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, const char *  lpcFileName, CgsFileSystem::FileAccess  leFileAccess, int32_t  liPriority, bool  lbUseHDCache) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::SetFileName(const char *  lpcFileName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::SetFileAccess(CgsFileSystem::FileAccess  leFileAccess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::OpenFileRequest::SetPriority(int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<1024>::OpenFile(const const OpenFileRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::OpenReplayFiles(OutputBuffer_PreSim *  lpOutputBuffer, int32_t  liReelIndex, CgsFileSystem::FileAccess  leAccessMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1439
		char[256] lacPrimaryFile;

		// BrnReplayModule.cpp:1440
		char[256] lacHeaderFile;

	}
	ReplayIO::OutputBuffer_PreSim::GetGameDataRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::OpenFile(/* parameters */);
	CgsResource::Events::FileEvent::Construct(/* parameters */);
	CgsResource::Events::OpenFileRequest::SetPriority(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<1024>::OpenFile(/* parameters */);
	CgsResource::Events::OpenFileRequest::SetFileAccess(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::BeginPlaying(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet, bool  lbInGamePlayback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:592
		EnterReplayEvent lEvent;

	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnReplayModule.cpp:566
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::BeginActionReplay(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:610
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnReplayModule.cpp:611
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::BeginRecording(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:502
		int32_t liReelToUse;

	}
	{
		// BrnReplayModule.cpp:500
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnReplayModule.cpp:510
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnResource::GameDataIO::RequestInterface<1024>::CloseFile(BaseEventReceiverQueue *  lpEventReceiverQueue, int32_t  liUserEventId, FileHandle  lFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataRequestQueue.h:1328
		CloseFileRequest lRequest;

	}
}

void CgsResource::Events::FileHandleEvent::Construct(BaseEventReceiverQueue *  lpUser, int32_t  liEventId, FileHandle  lFile) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::Events::FileHandleEvent::SetFileHandle(FileHandle  lFileHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceIO::ResourceRequestQueue<1024>::CloseFile(const const CloseFileRequest &  lRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::CloseReplayFiles(OutputBuffer_PreSim *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ReplayIO::OutputBuffer_PreSim::GetGameDataRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<1024>::CloseFile(/* parameters */);
	CgsResource::Events::FileHandleEvent::Construct(/* parameters */);
	CgsResource::Events::FileEvent::Construct(/* parameters */);
	DiskReadStream::GetStatus(/* parameters */);
	DiskWriteStream::GetStatus(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayModule::StopPlaying(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:1225
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnReplays::ReplayIO::InputBuffer_PreSim::GetPadInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModuleIO.h:74
		CgsDev::StrStream lStrStream;

	}
}

void CgsInput::InputIO::PadOutputInformation::GetActionInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsInput::InputIO::ActionInfo::IsReleased() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayIO::InputBuffer_PreSim::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModuleIO.h:77
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::Time(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::GetFloatVal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::StreamHeader::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFileSystem::FileHandle::Write(const void *  lpInputBuffer, uint64_t  luFilePosition, uint64_t  lnSizeToWrite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::UpdateRecording_PreSim(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayModule.cpp:724
		const InputBuffer_PreSim::InputPadInformation * lpPadInfo;

		// BrnReplayModule.cpp:725
		const ActionInfo * lpActionInfo;

		// BrnReplayModule.cpp:726
		bool lbRecordCombo;

		ReplayIO::InputBuffer_PreSim::GetPadInput(/* parameters */);
		{
			// BrnReplayModule.cpp:732
			int32_t liReelToUse;

		}
		ReplayIO::InputBuffer_PreSim::GetTimerStatusInterface(/* parameters */);
		CgsSystem::TimerStatus::GetTime(/* parameters */);
		CgsFileSystem::FileHandle::GetStatus(/* parameters */);
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
		// BrnReplayModule.cpp:758
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	StreamHeader::FixDown(/* parameters */);
	CgsFileSystem::FileHandle::Write(/* parameters */);
}

void CgsFileSystem::FileHandle::Read(void *  lpOutputBuffer, uint64_t  luFilePosition, uint64_t  lnSizeToRead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::StreamHeader::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnReplays::ReplayModule::UpdatePlaying_PreSim(const InputBuffer_PreSim *  lpInputBuffer, OutputBuffer_PreSim *  lpOutputBuffer, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsFileSystem::FileHandle::GetStatus(/* parameters */);
	StreamHeader::FixUp(/* parameters */);
	{
		// BrnReplayModule.cpp:941
		FrunkReadResult lReadResult;

		// BrnReplayModule.cpp:942
		int32_t liIndex;

	}
	CgsFileSystem::FileHandle::Read(/* parameters */);
	{
		// BrnReplayModule.cpp:877
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	EA::Thread::AtomicInt<std::uint64_t>::operator--(/* parameters */);
	{
		// BrnReplayModule.cpp:953
		bool lbAllReady;

	}
	BaseSerialiser::SetMode(/* parameters */);
	BaseSerialiser::SetMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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

::::kfSteeringPower = [63, 128, 0, 0];

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

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

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

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

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

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

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

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

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

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

