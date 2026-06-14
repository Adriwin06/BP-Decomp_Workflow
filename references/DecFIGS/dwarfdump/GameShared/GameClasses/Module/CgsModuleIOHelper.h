// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnParticle::ParticleIO::PrepareOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PrepareOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PrepareOutputBuffer * operator BrnParticle::ParticleIO::PrepareOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PrepareOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnParticle::ParticleIO::DispatchInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	DispatchInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	DispatchInputBuffer * operator BrnParticle::ParticleIO::DispatchInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	DispatchInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<RendererIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator RendererIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<RendererIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator RendererIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsInput::InputIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsInput::InputIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnNetwork::BrnNetworkModuleIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	BrnNetwork::BrnNetworkModuleIO::OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	BrnNetwork::BrnNetworkModuleIO::OutputBuffer * operator BrnNetwork::BrnNetworkModuleIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	BrnNetwork::BrnNetworkModuleIO::OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnGameState::GameStateModuleIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	BrnGameState::GameStateModuleIO::OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	BrnGameState::GameStateModuleIO::OutputBuffer * operator BrnGameState::GameStateModuleIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	BrnGameState::GameStateModuleIO::OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorldIO::UpdateOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	UpdateOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	UpdateOutputBuffer * operator BrnWorldIO::UpdateOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	UpdateOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnDirector::DirectorIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator BrnDirector::DirectorIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnSound::Module::Io::RootOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	RootOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	RootOutputBuffer * operator BrnSound::Module::Io::RootOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	RootOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnReplays::ReplayIO::OutputBuffer_PreSim> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PreSim * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PreSim * operator BrnReplays::ReplayIO::OutputBuffer_PreSim*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PreSim * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnReplays::ReplayIO::OutputBuffer_PostSim> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostSim * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostSim * operator BrnReplays::ReplayIO::OutputBuffer_PostSim*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostSim * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnEffects::EffectsIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator BrnEffects::EffectsIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnSound::Module::Io::RootPreUpdateOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	RootPreUpdateOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	RootPreUpdateOutputBuffer * operator BrnSound::Module::Io::RootPreUpdateOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	RootPreUpdateOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorldIO::DispatchInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	DispatchInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	DispatchInputBuffer * operator BrnWorldIO::DispatchInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	DispatchInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorldIO::DispatchOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	DispatchOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	DispatchOutputBuffer * operator BrnWorldIO::DispatchOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	DispatchOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnEffects::EffectsIO::DispatchInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	DispatchInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	DispatchInputBuffer * operator BrnEffects::EffectsIO::DispatchInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	DispatchInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsInput::InputIO::PreWorldInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PreWorldInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PreWorldInputBuffer * operator CgsInput::InputIO::PreWorldInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PreWorldInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PreSimulationInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PreSimulationInputBuffer * operator BrnNetwork::BrnNetworkModuleIO::PreSimulationInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PreSimulationInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnGameState::GameStateModuleIO::PreWorldInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PreWorldInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PreWorldInputBuffer * operator BrnGameState::GameStateModuleIO::PreWorldInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PreWorldInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorldIO::UpdateInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	UpdateInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	UpdateInputBuffer * operator BrnWorldIO::UpdateInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	UpdateInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsInput::InputIO::PostWorldInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PostWorldInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PostWorldInputBuffer * operator CgsInput::InputIO::PostWorldInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PostWorldInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Query> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	CgsSceneManager::SceneManagerIO::InputBuffer_Query * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	CgsSceneManager::SceneManagerIO::InputBuffer_Query * operator CgsSceneManager::SceneManagerIO::InputBuffer_Query*() const;

	// CgsModuleIOHelper.h:65
	CgsSceneManager::SceneManagerIO::InputBuffer_Query * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnDirector::DirectorIO::SceneQueryInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	SceneQueryInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	SceneQueryInputBuffer * operator BrnDirector::DirectorIO::SceneQueryInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	SceneQueryInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnDirector::DirectorIO::SceneQueryOutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	SceneQueryOutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	SceneQueryOutputBuffer * operator BrnDirector::DirectorIO::SceneQueryOutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	SceneQueryOutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsSceneManager::SceneManagerIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnGameState::GameStateModuleIO::PostWorldInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PostWorldInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PostWorldInputBuffer * operator BrnGameState::GameStateModuleIO::PostWorldInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PostWorldInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnSound::Module::Io::RootInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	RootInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	RootInputBuffer * operator BrnSound::Module::Io::RootInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	RootInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	PostSimulationInputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	PostSimulationInputBuffer * operator BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer*() const;

	// CgsModuleIOHelper.h:65
	PostSimulationInputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnEffects::EffectsIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator BrnEffects::EffectsIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnReplays::ReplayIO::InputBuffer_PreSim> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreSim * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreSim * operator BrnReplays::ReplayIO::InputBuffer_PreSim*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreSim * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnReplays::ReplayIO::InputBuffer_PostSim> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostSim * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostSim * operator BrnReplays::ReplayIO::InputBuffer_PostSim*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostSim * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::ResourceIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsResource::ResourceIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnAI::RouteMapModuleIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator BrnAI::RouteMapModuleIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnAI::RouteMapModuleIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator BrnAI::RouteMapModuleIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_Prepare> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_Prepare * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_Prepare * operator BrnWorld::WorldEntityIO::OutputBuffer_Prepare*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_Prepare * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsSceneManager::SceneManagerIO::InputBuffer_Update> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_Update * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_Update * operator CgsSceneManager::SceneManagerIO::InputBuffer_Update*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_Update * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostPhysics * operator BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostPhysics * operator BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator BrnPhysics::PhysicsModuleIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnPhysics::PhysicsModuleIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator BrnPhysics::PhysicsModuleIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PreScene * operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostScene * operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostScene * operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PrePhysics * operator BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PrePhysics * operator BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnAI::AIModuleIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator BrnAI::AIModuleIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostScene * operator BrnTraffic::BrnTrafficIO::InputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnWorld::CrashIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PreScene * operator BrnWorld::CrashIO::OutputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::CrashIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnWorld::CrashIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::CrashIO::OutputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostPhysics * operator BrnWorld::CrashIO::OutputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnTraffic::BrnTrafficIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnWorld::PropEntityIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PreScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PreScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PreScene * operator BrnWorld::WorldEntityIO::InputBuffer_PreScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PreScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostScene * operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostScene * operator BrnWorld::PropEntityIO::InputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostScene> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostScene * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostScene * operator BrnWorld::WorldEntityIO::InputBuffer_PostScene*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostScene * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator BrnAI::AIModuleIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PrePhysics * operator BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PrePhysics * operator BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PrePhysics * operator BrnWorld::PropEntityIO::OutputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PrePhysics * operator BrnWorld::WorldEntityIO::InputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PrePhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PrePhysics * operator BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PrePhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnAI::AIModuleIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnAI::AIModuleIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostPhysics * operator BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::PropEntityIO::OutputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer_PostPhysics * operator BrnWorld::PropEntityIO::OutputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::PropEntityIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnWorld::PropEntityIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_PostPhysics> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_PostPhysics * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_PostPhysics * operator BrnWorld::WorldEntityIO::InputBuffer_PostPhysics*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_PostPhysics * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_GenerateDispatchLists * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_GenerateDispatchLists * operator BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_GenerateDispatchLists * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsMemory::MemoryIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator CgsMemory::MemoryIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Update> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_Update * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_Update * operator CgsResource::BundleLoaderIO::InputBuffer_Update*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_Update * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::PoolIO::InputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer * operator CgsResource::PoolIO::InputBuffer*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsMemory::MemoryIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsMemory::MemoryIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::BundleLoaderIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsResource::BundleLoaderIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::PoolIO::OutputBuffer> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	OutputBuffer * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	OutputBuffer * operator CgsResource::PoolIO::OutputBuffer*() const;

	// CgsModuleIOHelper.h:65
	OutputBuffer * operator->();

}

// CgsModuleIOHelper.h:43
struct CgsModule::IOHelper<CgsResource::BundleLoaderIO::InputBuffer_Record> {
private:
	// CgsModuleIOHelper.h:71
	IOBufferStack * mpStack;

	// CgsModuleIOHelper.h:72
	InputBuffer_Record * mpBuffer;

public:
	// CgsModuleIOHelper.h:49
	void IOHelper(IOBufferStack *, const char *);

	// CgsModuleIOHelper.h:55
	void ~IOHelper();

	// CgsModuleIOHelper.h:60
	InputBuffer_Record * operator CgsResource::BundleLoaderIO::InputBuffer_Record*() const;

	// CgsModuleIOHelper.h:65
	InputBuffer_Record * operator->();

}

