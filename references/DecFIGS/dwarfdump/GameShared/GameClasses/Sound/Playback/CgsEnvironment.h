// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct Environment {
			// CgsEnvironment.h:334
			enum eAudioMode {
				E_AUDIO_MODE_STEREO = 0,
				E_AUDIO_MODE_SURROUND = 1,
			}

		}

	}

}

// CgsEnvironment.h:69
struct CgsSound::Playback::CpuMonitors {
	// CgsEnvironment.h:83
	int32_t miModule;

	// CgsEnvironment.h:84
	int32_t miProcessCommands;

	// CgsEnvironment.h:85
	int32_t miEnvironmentUpdate;

	// CgsEnvironment.h:86
	int32_t miRwacFactoryUpdate;

	// CgsEnvironment.h:87
	int32_t miAemsFactoryUpdate;

	// CgsEnvironment.h:88
	int32_t miAemsFactoryUpdate2;

	// CgsEnvironment.h:89
	int32_t miSplicerFactoryUpdate;

	// CgsEnvironment.h:90
	int32_t miContentUpdate;

	// CgsEnvironment.h:91
	int32_t miVoiceUpdate;

	// CgsEnvironment.h:92
	int32_t miVoiceUpdateOutput;

public:
	// CgsEnvironment.h:77
	void Construct();

}

// CgsEnvironment.h:104
struct CgsSound::Playback::EnvironmentSpec {
	// CgsEnvironment.h:108
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:109
	uint32_t mu32FactoryCount;

	// CgsEnvironment.h:110
	uint32_t mu32VoiceCount;

	// CgsEnvironment.h:111
	uint32_t mu32ContentCount;

	// CgsEnvironment.h:112
	RegistrySpec mRegistrySpec;

public:
	// CgsEnvironment.h:106
	void EnvironmentSpec();

}

// CgsEnvironment.h:123
struct CgsSound::Playback::Environment : public CgsSound::Playback::Object {
	// CgsEnvironment.h:365
	extern const uint32_t KU32_INVALID_INDEX = 4294967295;

private:
	// CgsEnvironment.h:404
	CpuMonitors mCpuMonitors;

	// CgsEnvironment.h:405
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:406
	uint32_t mu32FactoryCount;

	// CgsEnvironment.h:407
	uint32_t mu32VoiceCount;

	// CgsEnvironment.h:408
	uint32_t mu32ContentCount;

	// CgsEnvironment.h:409
	Handle<CgsSound::Playback::Factory> * mphFactory;

	// CgsEnvironment.h:410
	Handle<CgsSound::Playback::Voice> * mphVoice;

	// CgsEnvironment.h:411
	Handle<CgsSound::Playback::Content> * mphContent;

	// CgsEnvironment.h:412
	Registry * mpRegistry;

	// CgsEnvironment.h:413
	rw::audio::core::PlugIn * mpDacPlugin;

	// CgsEnvironment.h:437
	float32_t[5] mafVoiceTypeTickTotals;

	// CgsEnvironment.h:439
	uint32_t muActiveVoices;

	// CgsEnvironment.h:440
	uint32_t muActiveContent;

public:
	void Environment(const CgsSound::Playback::Environment &);

	// CgsEnvironment.h:456
	size_t GetAllocationSize(const EnvironmentSpec &);

	// CgsEnvironment.h:467
	size_t GetAllocatedSize();

	// CgsEnvironment.h:480
	void * operator new(size_t, const EnvironmentSpec &);

	// CgsEnvironment.h:495
	void operator delete(void *, rw::IResourceAllocator *);

	// CgsEnvironment.h:163
	void operator delete(void *, const EnvironmentSpec &);

	// CgsEnvironment.h:167
	void operator delete(void *);

	// CgsEnvironment.h:506
	void * Allocate(uint32_t, uint32_t, const char *);

	// CgsEnvironment.h:515
	void Free(void *);

	// CgsEnvironment.h:523
	Handle<CgsSound::Playback::Environment> Create(const EnvironmentSpec &);

	// CgsEnvironment.h:535
	virtual void DoDispose();

	// CgsEnvironment.h:550
	bool AddFactory(CgsSound::Playback::Factory &);

	// CgsEnvironment.h:568
	uint32_t AddVoice(CgsSound::Playback::Voice &);

	// CgsEnvironment.h:586
	uint32_t AddContent(CgsSound::Playback::Content &);

	// CgsEnvironment.h:604
	bool RemoveFactory(CgsSound::Playback::Factory &);

	// CgsEnvironment.h:255
	bool RemoveFactory(Name);

	// CgsEnvironment.h:263
	bool RemoveVoice(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:271
	bool RemoveContent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:280
	Handle<CgsSound::Playback::Factory> GetFactory(Name);

	// CgsEnvironment.h:289
	Handle<CgsSound::Playback::Voice> GetVoice(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:696
	Handle<CgsSound::Playback::Voice> GetVoiceByIndex(uint32_t);

	// CgsEnvironment.h:308
	Handle<CgsSound::Playback::Content> GetContent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:659
	Registry & GetRegistry();

	// CgsEnvironment.h:675
	rw::IResourceAllocator * GetAllocator() const;

	// CgsEnvironment.h:330
	void Update(float);

	// CgsEnvironment.h:713
	void SetDacPlugin(rw::audio::core::PlugIn *);

	// CgsEnvironment.h:347
	CgsSound::Playback::Environment::eAudioMode GetAudioMode();

	// CgsEnvironment.h:688
	CpuMonitors & GetCpuMonitors();

	// CgsEnvironment.h:362
	Handle<CgsSound::Playback::Voice> GetRwacVoiceByPlugin(const rw::audio::core::PlugIn *);

	// CgsEnvironment.h:719
	void StartDac();

	// CgsEnvironment.h:729
	void StopDac();

private:
	// CgsEnvironment.h:378
	void Environment(const EnvironmentSpec &);

	// CgsEnvironment.h:383
	virtual void ~Environment();

	// CgsEnvironment.h:391
	void UpdateContent(float);

	// CgsEnvironment.h:396
	void UpdateVoices(System *, float32_t);

	// CgsEnvironment.h:400
	void UpdateFactories(float32_t);

public:
	// CgsEnvironment.h:749
	uint32_t GetNumberOfActiveVoices();

	// CgsEnvironment.h:764
	uint32_t GetNumberOfActiveContent();

	// CgsEnvironment.h:771
	float32_t GetVoiceTypeTickTotal(CgsSound::Playback::Voice::EProfileVoiceType);

}

// CgsEnvironment.h:365
extern const uint32_t KU32_INVALID_INDEX = 4294967295;

// CgsEnvironment.h:123
struct CgsSound::Playback::Environment : public CgsSound::Playback::Object {
	// CgsEnvironment.h:365
	extern const uint32_t KU32_INVALID_INDEX = 4294967295;

private:
	// CgsEnvironment.h:404
	CpuMonitors mCpuMonitors;

	// CgsEnvironment.h:405
	rw::IResourceAllocator * mpAllocator;

	// CgsEnvironment.h:406
	uint32_t mu32FactoryCount;

	// CgsEnvironment.h:407
	uint32_t mu32VoiceCount;

	// CgsEnvironment.h:408
	uint32_t mu32ContentCount;

	// CgsEnvironment.h:409
	Handle<CgsSound::Playback::Factory> * mphFactory;

	// CgsEnvironment.h:410
	Handle<CgsSound::Playback::Voice> * mphVoice;

	// CgsEnvironment.h:411
	Handle<CgsSound::Playback::Content> * mphContent;

	// CgsEnvironment.h:412
	Registry * mpRegistry;

	// CgsEnvironment.h:413
	rw::audio::core::PlugIn * mpDacPlugin;

	// CgsEnvironment.h:437
	float32_t[5] mafVoiceTypeTickTotals;

	// CgsEnvironment.h:439
	uint32_t muActiveVoices;

	// CgsEnvironment.h:440
	uint32_t muActiveContent;

public:
	void Environment(const CgsSound::Playback::Environment &);

	// CgsEnvironment.h:456
	size_t GetAllocationSize(const EnvironmentSpec &);

	// CgsEnvironment.h:467
	size_t GetAllocatedSize();

	// CgsEnvironment.h:480
	void * operator new(size_t, const EnvironmentSpec &);

	// CgsEnvironment.h:495
	void operator delete(void *, rw::IResourceAllocator *);

	// CgsEnvironment.h:163
	void operator delete(void *, const EnvironmentSpec &);

	// CgsEnvironment.h:167
	void operator delete(void *);

	// CgsEnvironment.h:506
	void * Allocate(uint32_t, uint32_t, const char *);

	// CgsEnvironment.h:515
	void Free(void *);

	// CgsEnvironment.h:523
	Handle<CgsSound::Playback::Environment> Create(const EnvironmentSpec &);

	// CgsEnvironment.h:535
	virtual void DoDispose();

	// CgsEnvironment.h:550
	bool AddFactory(CgsSound::Playback::Factory &);

	// CgsEnvironment.h:568
	uint32_t AddVoice(CgsSound::Playback::Voice &);

	// CgsEnvironment.h:586
	uint32_t AddContent(CgsSound::Playback::Content &);

	// CgsEnvironment.h:604
	bool RemoveFactory(CgsSound::Playback::Factory &);

	// CgsEnvironment.cpp:63
	bool RemoveFactory(Name);

	// CgsEnvironment.cpp:82
	bool RemoveVoice(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.cpp:102
	bool RemoveContent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.cpp:123
	Handle<CgsSound::Playback::Factory> GetFactory(Name);

	// CgsEnvironment.cpp:140
	Handle<CgsSound::Playback::Voice> GetVoice(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:696
	Handle<CgsSound::Playback::Voice> GetVoiceByIndex(uint32_t);

	// CgsEnvironment.cpp:157
	Handle<CgsSound::Playback::Content> GetContent(CgsSound::Playback::Module::Module::StreamBuffer::Ident);

	// CgsEnvironment.h:659
	Registry & GetRegistry();

	// CgsEnvironment.h:675
	rw::IResourceAllocator * GetAllocator() const;

	// CgsEnvironment.cpp:174
	void Update(float);

	// CgsEnvironment.h:713
	void SetDacPlugin(rw::audio::core::PlugIn *);

	// CgsEnvironment.cpp:526
	CgsSound::Playback::Environment::eAudioMode GetAudioMode();

	// CgsEnvironment.h:688
	CpuMonitors & GetCpuMonitors();

	// CgsEnvironment.cpp:351
	Handle<CgsSound::Playback::Voice> GetRwacVoiceByPlugin(const rw::audio::core::PlugIn *);

	// CgsEnvironment.h:719
	void StartDac();

	// CgsEnvironment.h:729
	void StopDac();

private:
	// CgsEnvironment.cpp:215
	void Environment(const EnvironmentSpec &);

	// CgsEnvironment.cpp:267
	virtual void ~Environment();

	// CgsEnvironment.cpp:390
	void UpdateContent(float);

	// CgsEnvironment.cpp:436
	void UpdateVoices(System *, float32_t);

	// CgsEnvironment.cpp:504
	void UpdateFactories(float32_t);

public:
	// CgsEnvironment.h:749
	uint32_t GetNumberOfActiveVoices();

	// CgsEnvironment.h:764
	uint32_t GetNumberOfActiveContent();

	// CgsEnvironment.h:771
	float32_t GetVoiceTypeTickTotal(CgsSound::Playback::Voice::EProfileVoiceType);

}

