// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsEnvironment.h:73
		const uint32_t KU32_DEFAULT_ALIGNMENT = 16;

	}

}

// CgsEnvironment.h:92
struct CgsSound::Logic::CpuMonitors {
	// CgsEnvironment.h:107
	int32_t miDynamicMixer;

	// CgsEnvironment.h:108
	int32_t miProcessUpdate;

	// CgsEnvironment.h:109
	int32_t miUpdateParams;

	// CgsEnvironment.h:110
	int32_t miLogicEnvironment;

public:
	// CgsEnvironment.h:101
	void Construct();

}

// CgsEnvironment.h:127
struct CgsSound::Logic::EnvironmentSpec {
	// CgsEnvironment.h:129
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:131
	uint32_t mu32StateManagerCount;

}

// CgsEnvironment.h:147
struct CgsSound::Logic::ModuleParams {
	// CgsEnvironment.h:149
	uint16_t mu16MaxVoiceProxies;

	// CgsEnvironment.h:150
	uint16_t mu16MaxContentProxies;

	// CgsEnvironment.h:151
	uint16_t mu16MaxStateManagers;

	// CgsEnvironment.h:153
	extern const ModuleParams DEFAULT;

}

// CgsEnvironment.h:230
struct CgsSound::Logic::Environment {
private:
	// CgsEnvironment.h:397
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:400
	extern const int32_t KI_MAX_NUMBER_OF_STATES = 16;

	// CgsEnvironment.h:401
	CgsSound::Logic::StateManager *[16] mapStateManagers;

	// CgsEnvironment.h:403
	ModuleParams mModuleParams;

	// CgsEnvironment.h:404
	uint32_t mu32StateManagerCount;

	// CgsEnvironment.h:406
	MicrophoneSystem mMicrophoneSystem;

	// CgsEnvironment.h:407
	CgsSound::Logic::DynamicMixer mDynamicMixer;

	// CgsEnvironment.h:408
	CpuMonitors mCpuMonitors;

	// CgsEnvironment.h:410
	float32_t mfGameTime;

public:
	// CgsEnvironment.h:237
	void ~Environment();

	// CgsEnvironment.h:245
	void Construct(const EnvironmentSpec &);

	// CgsEnvironment.h:252
	bool Prepare();

	// CgsEnvironment.h:259
	bool Release();

	// CgsEnvironment.h:267
	void Destruct();

	// CgsEnvironment.h:275
	void Update(float32_t, float32_t);

	// CgsEnvironment.h:284
	void * Allocate(uint32_t, uint32_t, const char8_t *);

	// CgsEnvironment.h:292
	void Free(void *);

	// CgsEnvironment.h:300
	void Notify(const CgsSound::Io::MessageHeader *) const;

	// CgsEnvironment.h:310
	void SetModuleParams(const ModuleParams &);

	// CgsEnvironment.h:319
	CgsSound::Logic::StateManager * GetStateManager(int32_t) const;

	// CgsEnvironment.h:327
	bool AddStateManager(CgsSound::Logic::StateManager *);

	// CgsEnvironment.h:337
	bool RemoveStateManager(CgsSound::Logic::StateManager *);

	// CgsEnvironment.h:343
	MicrophoneSystem & GetMicrophoneSystem();

	// CgsEnvironment.h:349
	Nicotine::IDynamicMixer & GetDynamicMixer();

protected:
	// CgsEnvironment.h:364
	CpuMonitors & GetCpuMonitors();

private:
	// CgsEnvironment.h:381
	void NotifyStateManager(CgsSound::Logic::StateManager *, const CgsSound::Io::MessageHeader *) const;

	// CgsEnvironment.h:392
	void NotifyStateAndEffects(CgsSound::Logic::State *, const CgsSound::Io::MessageHeader *) const;

}

// CgsEnvironment.h:153
extern const ModuleParams DEFAULT;

// CgsEnvironment.h:400
extern const int32_t KI_MAX_NUMBER_OF_STATES = 16;

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// CgsEnvironment.h:73
		const uint32_t KU32_DEFAULT_ALIGNMENT = 16;

	}

}

// CgsEnvironment.h:230
struct CgsSound::Logic::Environment {
private:
	// CgsEnvironment.h:397
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:400
	extern const int32_t KI_MAX_NUMBER_OF_STATES = 16;

	// CgsEnvironment.h:401
	CgsSound::Logic::StateManager *[16] mapStateManagers;

	// CgsEnvironment.h:403
	ModuleParams mModuleParams;

	// CgsEnvironment.h:404
	uint32_t mu32StateManagerCount;

	// CgsEnvironment.h:406
	MicrophoneSystem mMicrophoneSystem;

	// CgsEnvironment.h:407
	CgsSound::Logic::DynamicMixer mDynamicMixer;

	// CgsEnvironment.h:408
	CpuMonitors mCpuMonitors;

	// CgsEnvironment.h:410
	float32_t mfGameTime;

public:
	// CgsEnvironment.h:237
	void ~Environment();

	// CgsEnvironment.h:245
	void Construct(const EnvironmentSpec &);

	// CgsEnvironment.h:252
	bool Prepare();

	// CgsEnvironment.h:259
	bool Release();

	// CgsEnvironment.h:267
	void Destruct();

	// CgsEnvironment.h:275
	void Update(float32_t, float32_t);

	// CgsEnvironment.h:284
	void * Allocate(uint32_t, uint32_t, const char8_t *);

	// CgsEnvironment.h:292
	void Free(void *);

	// CgsEnvironment.h:300
	// Declaration
	void Notify(const CgsSound::Io::MessageHeader *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEnvironment.cpp:232
		using namespace Io;

	}

	// CgsEnvironment.h:310
	void SetModuleParams(const ModuleParams &);

	// CgsEnvironment.h:319
	CgsSound::Logic::StateManager * GetStateManager(int32_t) const;

	// CgsEnvironment.h:327
	bool AddStateManager(CgsSound::Logic::StateManager *);

	// CgsEnvironment.h:337
	bool RemoveStateManager(CgsSound::Logic::StateManager *);

	// CgsEnvironment.h:343
	MicrophoneSystem & GetMicrophoneSystem();

	// CgsEnvironment.h:349
	Nicotine::IDynamicMixer & GetDynamicMixer();

protected:
	// CgsEnvironment.h:364
	CpuMonitors & GetCpuMonitors();

private:
	// CgsEnvironment.h:381
	void NotifyStateManager(CgsSound::Logic::StateManager *, const CgsSound::Io::MessageHeader *) const;

	// CgsEnvironment.h:392
	// Declaration
	void NotifyStateAndEffects(CgsSound::Logic::State *, const CgsSound::Io::MessageHeader *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEnvironment.cpp:326
		using namespace Io;

	}

}

// CgsEnvironment.h:169
struct CgsSound::Logic::DynamicMixer : public Nicotine::IDynamicMixer {
private:
	// CgsEnvironment.h:212
	Environment * mpEnvironment;

public:
	void DynamicMixer(const DynamicMixer &);

	// CgsEnvironment.h:544
	void DynamicMixer();

	// CgsEnvironment.h:562
	void Construct(Environment *);

	// CgsEnvironment.cpp:501
	virtual bool ConnectDMixIO(Nicotine::DMixIO *);

	// CgsEnvironment.cpp:547
	virtual int32_t GetStateCount(int);

	// CgsEnvironment.cpp:569
	// Declaration
	virtual int DMixPrintf(const char *, ...) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEnvironment.cpp:578
		using namespace CgsDev::Message;

	}

	// CgsEnvironment.cpp:597
	virtual void DMixAssert(bool, const char *, ...);

	virtual void ~DynamicMixer();

}

// CgsEnvironment.h:169
void CgsSound::Logic::DynamicMixer::~DynamicMixer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct DynamicMixer {
		public:
			// CgsEnvironment.h:544
			DynamicMixer();

			virtual ~DynamicMixer();

		}

		// CgsEnvironment.h:73
		const uint32_t KU32_DEFAULT_ALIGNMENT = 16;

	}

}

