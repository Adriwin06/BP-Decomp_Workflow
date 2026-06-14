struct lua_State;

struct _CGprogram;

struct _CGparameter;

void CgsFsm::State::Render() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateIntro::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateIntro::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateIntro::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateGame::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateGame::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateGame::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::GetStateVariable(CgsFsm::Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateResults::OnLeave() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateResults::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedState::Construct(CgsID  lId, CgsFsm::ScriptedFsm *  lpFsm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Fsm::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugFsm::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScriptedFsm::Construct(/* parameters */);
	Fsm::Construct(/* parameters */);
}

void CgsFsm::DebugFsm::GetState(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugFsm::GetStateCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::FsmDebugComponent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFsmDebugComponent.cpp:221
		int32_t liEventIndex;

	}
}

void CgsFsm::FsmDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::FsmDebugComponent::GetName() {
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

void CgsFsm::Fsm::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Fsm::Release(/* parameters */);
}

void CgsFsm::ScriptedFsm::GetGlobalVariable(CgsFsm::Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::SetGlobalVariable(const CgsFsm::Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::SetStateVariable(const CgsFsm::Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::State::PreUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::State::PostUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableBool::ToLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableInt::ToLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableString::ToLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedState::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::FsmDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableString::Construct(CgsID  lId, char *  lpcBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::DebugStateResults::OnEnter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFsmDebugComponent.cpp:130
		VariableString mVariable;

		// CgsFsmDebugComponent.cpp:131
		char[256] laBuffer;

		VariableString::VariableString(/* parameters */);
		VariableString::Construct(/* parameters */);
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

void CgsResource::LuaCodeResource::GetCode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResource::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BinaryFileResource::GetSize() {
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

void CgsFsm::VariableBool::FromLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableInt::FromLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableInt::Construct(CgsID  lId, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableInt::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::GetCurrentStateIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:314
		VariableInt lVariableInt;

	}
	VariableInt::VariableInt(/* parameters */);
	VariableInt::Construct(/* parameters */);
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void CgsFsm::VariableString::FromLua(LuaState *  lpLuaState, const char *  lpcGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::VariableString::GetValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::GetStateByIndex(int32_t  liStateIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:222
		ScriptedState * lpScriptedState;

		// CgsScriptedFsm.cpp:224
		const int32_t KI_MAX_BUFFER_LENGTH;

		// CgsScriptedFsm.cpp:225
		char[128] lacBuffer;

		// CgsScriptedFsm.cpp:226
		char[128] lacIndexBuffer;

		// CgsScriptedFsm.cpp:230
		VariableString lVariableString;

		// CgsScriptedFsm.cpp:234
		CgsID lStateId;

		// CgsScriptedFsm.cpp:236
		int32_t liStateCount;

	}
	VariableString::VariableString(/* parameters */);
	VariableString::Construct(/* parameters */);
	{
		// CgsScriptedFsm.cpp:237
		int32_t liIndex;

	}
	{
		// CgsScriptedFsm.cpp:239
		ScriptedState * lpState;

	}
}

void CgsFsm::ScriptedFsm::GetUsedStates(int32_t *  laiUsedStates, int32_t *const  lpiNumUsedStates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:185
		const int32_t KI_MAX_BUFFER_LENGTH;

		// CgsScriptedFsm.cpp:186
		char[1024] lacBuffer;

		// CgsScriptedFsm.cpp:188
		VariableString lVariableString;

		// CgsScriptedFsm.cpp:193
		const char[2] seps;

		// CgsScriptedFsm.cpp:194
		char * token;

	}
	VariableString::VariableString(/* parameters */);
	VariableString::Construct(/* parameters */);
	{
		// CgsScriptedFsm.cpp:197
		int32_t liTemp;

	}
}

void CgsFsm::ScriptedFsm::GetNextStates(int32_t  liStateIndex, int32_t *  laiNextStates, int32_t *  lpiNumNextStates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:265
		const int32_t KI_MAX_BUFFER_LENGTH;

		// CgsScriptedFsm.cpp:266
		char[128] lacBuffer;

		// CgsScriptedFsm.cpp:267
		char[128] lacIndexBuffer;

		// CgsScriptedFsm.cpp:271
		VariableString lVariableString;

		// CgsScriptedFsm.cpp:275
		int32_t liDummy;

	}
	VariableString::VariableString(/* parameters */);
	VariableString::Construct(/* parameters */);
	{
		// CgsScriptedFsm.cpp:296
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFsm::ScriptedFsm::SetState(CgsID  lStateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:371
		int32_t liStateCount;

		// CgsScriptedFsm.cpp:383
		char[13] lacStateNotFound;

		{
			// CgsScriptedFsm.cpp:373
			int32_t liIndex;

		}
		{
			// CgsScriptedFsm.cpp:375
			ScriptedState * lpState;

		}
		{
			// CgsScriptedFsm.cpp:385
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsFsm::Event::GetVariable(int32_t  liVariableIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Event::GetVariableCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Event::GetId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::SendEvent(const Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsScriptedFsm.cpp:335
		int32_t liVariableIndex;

		// CgsScriptedFsm.cpp:349
		CgsID lStateId;

	}
	Event::GetVariableCount(/* parameters */);
	Event::GetVariable(/* parameters */);
}

void CgsFsm::VariableBool::Construct(CgsID  lId, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Event::Construct(CgsID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::Event::AddVariable(const CgsFsm::Variable *  lpVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::FsmDebugComponent::SendEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFsmDebugComponent.cpp:318
		Event lEvent;

		// CgsFsmDebugComponent.cpp:319
		VariableBool lVariablBool;

		VariableBool::VariableBool(/* parameters */);
		VariableBool::Construct(/* parameters */);
		Event::AddVariable(/* parameters */);
		Event::Construct(/* parameters */);
	}
}

void CgsFsm::FsmDebugComponent::SendEventCallback(void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::ScriptedFsm::Prepare(CgsResource::LuaCodeResource *  lpLuaCodeResource, CgsMemory::HeapMalloc *  lpHeapMalloc, CgsID  lInitialStateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsFsm::FsmDebugComponent::Prepare(CgsResource::LuaCodeResource *  lpLuaCodeResource, CgsMemory::HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

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

CgsFsm::FsmDebugComponent::KI_EVENT_COUNT;

