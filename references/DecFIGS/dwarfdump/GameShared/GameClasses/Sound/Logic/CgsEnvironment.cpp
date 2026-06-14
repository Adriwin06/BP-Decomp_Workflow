// CgsEnvironment.cpp:479
void CgsSound::Logic::Environment::GetStateManager(int32_t  liStateManId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEnvironment.cpp:109
void CgsSound::Logic::Environment::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEnvironment.cpp:128
void CgsSound::Logic::Environment::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEnvironment.cpp:306
void CgsSound::Logic::Environment::NotifyStateManager(CgsSound::Logic::StateManager *  lpStateManager, const CgsSound::Io::MessageHeader *  lpMessageHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEnvironment.cpp:449
void CgsSound::Logic::Environment::RemoveStateManager(CgsSound::Logic::StateManager *  lpStateManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.cpp:451
		uint32_t luIndex;

	}
}

// CgsEnvironment.cpp:64
void CgsSound::Logic::Environment::Construct(const const EnvironmentSpec &  lEnvironmentSpec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.cpp:81
		Nicotine::IDynamicMixer::MAP_CREATE_PARAMS lCreateParams;

	}
	{
		// CgsEnvironment.cpp:72
		int32_t lCnt;

	}
	DynamicMixer::Construct(/* parameters */);
	GetCpuMonitors(/* parameters */);
	CpuMonitors::Construct(/* parameters */);
}

// CgsEnvironment.cpp:324
void CgsSound::Logic::Environment::NotifyStateAndEffects(CgsSound::Logic::State *  lpState, const CgsSound::Io::MessageHeader *  lpMessageHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Io::MessageHeader::IsEffectIdSet(/* parameters */);
	{
		// CgsEnvironment.cpp:332
		CgsSound::Logic::EffectBase * lpEffectBase;

	}
	State::GetHeadEffectObject(/* parameters */);
	State::GetHeadEffectControl(/* parameters */);
}

// CgsEnvironment.cpp:230
void CgsSound::Logic::Environment::Notify(const CgsSound::Io::MessageHeader *  lpMessageHeader) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Io::MessageHeader::IsStateManagerIdSet(/* parameters */);
	{
		// CgsEnvironment.cpp:255
		CgsSound::Logic::StateManager * lpStateManager;

		Io::MessageHeader::IsInstanceIDSet(/* parameters */);
		{
			// CgsEnvironment.cpp:266
			CgsSound::Logic::State * lpState;

		}
	}
	{
		// CgsEnvironment.cpp:240
		uint16_t lCnt;

	}
	{
		// CgsEnvironment.cpp:242
		CgsSound::Logic::StateManager * lpStateManager;

	}
	{
		// CgsEnvironment.cpp:280
		CgsSound::Logic::State * lpState;

		State::GetNextState(/* parameters */);
	}
}

// CgsEnvironment.cpp:416
void CgsSound::Logic::Environment::~Environment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.cpp:421
		uint32_t luIndex;

		{
			// CgsEnvironment.cpp:429
			int32_t lCnt;

		}
	}
}

// CgsEnvironment.cpp:147
void CgsSound::Logic::Environment::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.cpp:150
		rw::IResourceAllocator * lpAllocator;

	}
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

// CgsEnvironment.cpp:173
void CgsSound::Logic::Environment::Update(float32_t  lfTimeStepGame, float32_t  lfTimeStepSimulation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEnvironment.cpp:177
		uint32_t luIndex;

		GetCpuMonitors(/* parameters */);
	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	StateManager::SetTimeStepGame(/* parameters */);
	StateManager::SetTimeStepSimulation(/* parameters */);
	StateManager::SetCurrentTime(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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

