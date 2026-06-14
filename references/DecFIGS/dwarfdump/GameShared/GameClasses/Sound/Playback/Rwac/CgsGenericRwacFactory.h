// CgsGenericRwacFactory.h:622
struct CgsSound::Playback::RwacCommandQueue {
private:
	// CgsGenericRwacFactory.h:661
	extern const uint32_t SKU32_COMMAND_COUNT = 4096;

	// CgsGenericRwacFactory.h:663
	uintptr_t[4096] mauCommandQueue;

	// CgsGenericRwacFactory.h:664
	uint32_t mu32Read;

	// CgsGenericRwacFactory.h:665
	uint32_t mu32Write;

public:
	// CgsGenericRwacFactory.h:624
	void RwacCommandQueue();

	// CgsGenericRwacFactory.h:627
	void ~RwacCommandQueue();

	// CgsGenericRwacFactory.h:630
	void Update();

	// CgsGenericRwacFactory.h:640
	void PostCommand(uint32_t, const uintptr_t *);

	// CgsGenericRwacFactory.h:645
	void GetCommand(uint32_t &, uintptr_t *);

	// CgsGenericRwacFactory.h:648
	bool IsEmpty();

private:
	// CgsGenericRwacFactory.h:653
	void PostCommand(uintptr_t);

	// CgsGenericRwacFactory.h:657
	void GetCommand(uintptr_t &);

}

// CgsGenericRwacFactory.h:751
struct CgsSound::Playback::GenericRwacFactorySpec {
	// CgsGenericRwacFactory.h:752
	System * mpSystem;

	// CgsGenericRwacFactory.h:753
	RegistrySpec mRegistrySpec;

}

// CgsGenericRwacFactory.h:761
struct CgsSound::Playback::GenericRwacFactory : public CgsSound::Playback::Factory {
	// CgsGenericRwacFactory.h:763
	extern const Name SK_NAME;

	// CgsGenericRwacFactory.h:764
	extern const Name SK_SUBMIX_FEATURE_NAME;

	// CgsGenericRwacFactory.h:765
	extern const Name SK_SEND_FEATURE_NAME;

	// CgsGenericRwacFactory.h:766
	extern const Name SK_DAC_FEATURE_NAME;

	// CgsGenericRwacFactory.h:767
	extern const int KF_RWAC_COMMAND_BUFFER_SIZE = 196608;

private:
	// CgsGenericRwacFactory.h:851
	extern const uintptr_t SKU_COMMAND_SIZE = 16;

	// CgsGenericRwacFactory.h:853
	System * mpSystem;

	// CgsGenericRwacFactory.h:855
	RwacCommandQueue mCommandQueue;

	// CgsGenericRwacFactory.h:856
	Registry * mpRegistry;

public:
	void GenericRwacFactory(const CgsSound::Playback::GenericRwacFactory &);

	// CgsGenericRwacFactory.h:874
	size_t GetAllocationSize(const GenericRwacFactorySpec &);

	// CgsGenericRwacFactory.h:882
	size_t GetAllocatedSize() const;

	// CgsGenericRwacFactory.h:890
	// Declaration
	virtual void ~GenericRwacFactory() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGenericRwacFactory.h:892
		using namespace CgsDev::Message;

	}

	// CgsGenericRwacFactory.h:901
	Handle<CgsSound::Playback::GenericRwacFactory> Create(CgsSound::Playback::Environment &, GenericRwacFactorySpec);

	// CgsGenericRwacFactory.h:974
	RwacCommandQueue & GetCommandQueue();

	// CgsGenericRwacFactory.h:790
	void AddRegistry(Registry &);

	// CgsGenericRwacFactory.h:924
	Registry & GetRegistry();

protected:
	// CgsGenericRwacFactory.h:798
	void GenericRwacFactory(CgsSound::Playback::Environment &, const GenericRwacFactorySpec &);

	// CgsGenericRwacFactory.h:917
	System * GetSystem();

	// CgsGenericRwacFactory.h:813
	CgsSound::Playback::GenericRwacVoiceConfig * SetupConfig(const VoiceSpec &, CgsSound::Playback::Voice &, CgsSound::Playback::GenericRwacVoice &);

	// CgsGenericRwacFactory.h:819
	virtual bool DoCreateVoice(const VoiceSpec &, Handle<CgsSound::Playback::Voice> &, uint32_t);

	// CgsGenericRwacFactory.h:825
	virtual bool DoCreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsGenericRwacFactory.h:829
	virtual void DoUpdate(float);

	// CgsGenericRwacFactory.h:981
	float GetCpuLoad();

private:
	// CgsGenericRwacFactory.h:932
	const GenericRwacFeatureImplementation & GetFeatureImplementation(Name);

	// CgsGenericRwacFactory.h:848
	void HandlePluginEvent(uintptr_t, uintptr_t *);

}

// CgsGenericRwacFactory.h:661
extern const uint32_t SKU32_COMMAND_COUNT = 4096;

// CgsGenericRwacFactory.h:763
extern const Name SK_NAME;

// CgsGenericRwacFactory.h:764
extern const Name SK_SUBMIX_FEATURE_NAME;

// CgsGenericRwacFactory.h:765
extern const Name SK_SEND_FEATURE_NAME;

// CgsGenericRwacFactory.h:766
extern const Name SK_DAC_FEATURE_NAME;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsGenericRwacFactory.h:77
		enum ERwacCommandType {
			E_RWAC_COMMAND_INVALID = 0,
			E_RWAC_COMMAND_VOICE_CREATE_INSTANCE = 1,
			E_RWAC_COMMAND_VOICE_RELEASE = 2,
			E_RWAC_COMMAND_PLUGIN_EVENT = 3,
			E_RWAC_COMMAND_PLUGIN_SET_ATTRIBUTE = 4,
			E_RWAC_COMMAND_PLUGIN_GET_ATTRIBUTE = 5,
			E_RWAC_COMMAND_PLAYER_PLAY_PARAMETERS = 6,
			E_RWAC_COMMAND_PLAYER_IS_REQUEST_DONE_PARAMETERS = 7,
			E_RWAC_COMMAND_SEND_CONNECT_PARAMETERS = 8,
			E_RWAC_COMMAND_REVERBIR_APPLY_IR_DATA = 9,
			E_RWAC_COMMAND_GINSU_ATTACH_DATA_PARAMETERS = 10,
		}

		// Declaration
		struct RwacCommandPluginEvent {
			// CgsGenericRwacFactory.h:274
			enum EParameters {
				E_NO_PARAMETERS = 0,
				E_HAS_PARAMETERS = 1,
			}

		}

	}

}

// CgsGenericRwacFactory.h:49
struct CgsSound::Playback::RwacLock {
private:
	// CgsGenericRwacFactory.h:72
	System * mpSystem;

public:
	// CgsGenericRwacFactory.h:53
	void RwacLock(System *);

	// CgsGenericRwacFactory.h:66
	void ~RwacLock();

}

// CgsGenericRwacFactory.h:121
struct CgsSound::Playback::RwacCommand {
private:
	// CgsGenericRwacFactory.h:137
	uintptr_t muCommandType;

public:
	// CgsGenericRwacFactory.h:125
	void RwacCommand(CgsSound::Playback::ERwacCommandType);

	// CgsGenericRwacFactory.h:128
	CgsSound::Playback::ERwacCommandType GetCommandType() const;

	// CgsGenericRwacFactory.h:131
	const uintptr_t * AsCommand() const;

protected:
	// CgsGenericRwacFactory.h:134
	void RwacCommand(uint32_t);

}

// CgsGenericRwacFactory.h:158
struct CgsSound::Playback::RwacCommandVoiceCreateInstance : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:225
	CgsSound::Playback::Voice * mpPlaybackVoice;

	// CgsGenericRwacFactory.h:226
	rw::audio::core::Voice ** mppVoice;

	// CgsGenericRwacFactory.h:227
	rw::audio::core::PlugIn *** mpppPlugin;

	// CgsGenericRwacFactory.h:228
	CgsSound::Playback::GenericRwacVoiceConfig * mpConfig;

	// CgsGenericRwacFactory.h:229
	rw::audio::core::PlugIn ** mppSubmix;

public:
	// CgsGenericRwacFactory.h:165
	void RwacCommandVoiceCreateInstance(CgsSound::Playback::Voice *, rw::audio::core::Voice **, rw::audio::core::PlugIn ***, CgsSound::Playback::GenericRwacVoiceConfig *, rw::audio::core::PlugIn **);

	// CgsGenericRwacFactory.h:181
	void RwacCommandVoiceCreateInstance(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:194
	CgsSound::Playback::Voice * GetPlaybackVoice();

	// CgsGenericRwacFactory.h:201
	rw::audio::core::Voice ** GetVoice() const;

	// CgsGenericRwacFactory.h:207
	rw::audio::core::PlugIn *** GetPlugin() const;

	// CgsGenericRwacFactory.h:213
	CgsSound::Playback::GenericRwacVoiceConfig * GetVoiceConfig();

	// CgsGenericRwacFactory.h:219
	rw::audio::core::PlugIn ** GetSubmix();

}

// CgsGenericRwacFactory.h:236
struct CgsSound::Playback::RwacCommandVoiceRelease : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:263
	rw::audio::core::Voice * mpVoice;

public:
	// CgsGenericRwacFactory.h:239
	void RwacCommandVoiceRelease(rw::audio::core::Voice *);

	// CgsGenericRwacFactory.h:248
	void RwacCommandVoiceRelease(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:257
	rw::audio::core::Voice * GetVoice() const;

}

// CgsGenericRwacFactory.h:272
struct CgsSound::Playback::RwacCommandPluginEvent : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:324
	rw::audio::core::PlugIn * mpPlugin;

	// CgsGenericRwacFactory.h:325
	uintptr_t muEvent;

	// CgsGenericRwacFactory.h:326
	uintptr_t muParameters;

public:
	// CgsGenericRwacFactory.h:283
	void RwacCommandPluginEvent(rw::audio::core::PlugIn *, uintptr_t, CgsSound::Playback::RwacCommandPluginEvent::EParameters);

	// CgsGenericRwacFactory.h:295
	void RwacCommandPluginEvent(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:306
	rw::audio::core::PlugIn * GetPlugin() const;

	// CgsGenericRwacFactory.h:312
	uintptr_t GetEvent() const;

	// CgsGenericRwacFactory.h:318
	bool HasParameters() const;

}

// CgsGenericRwacFactory.h:387
struct CgsSound::Playback::RwacCommandPluginGetAttribute : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:431
	rw::audio::core::PlugIn * mpPlugin;

	// CgsGenericRwacFactory.h:432
	uintptr_t muAttribute;

	// CgsGenericRwacFactory.h:433
	float * mpfAddress;

public:
	// CgsGenericRwacFactory.h:392
	void RwacCommandPluginGetAttribute(rw::audio::core::PlugIn *, uintptr_t, float *);

	// CgsGenericRwacFactory.h:402
	void RwacCommandPluginGetAttribute(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:413
	rw::audio::core::PlugIn * GetPlugin() const;

	// CgsGenericRwacFactory.h:419
	uintptr_t GetAttribute() const;

	// CgsGenericRwacFactory.h:425
	float * GetAddress() const;

}

// CgsGenericRwacFactory.h:441
struct CgsSound::Playback::RwacCommandPlayerPlayParameters : public RwacCommand {
	// CgsGenericRwacWaveContent.h:73
	typedef Handle<CgsSound::Playback::GenericRwacWaveContent> GenericRwacWaveContentHandle;

private:
	// CgsGenericRwacFactory.h:477
	RwacCommandPlayerPlayParameters::GenericRwacWaveContentHandle mhWaveContent;

	// CgsGenericRwacFactory.h:478
	float * mpf32RequestHandle;

public:
	// CgsGenericRwacFactory.h:445
	void RwacCommandPlayerPlayParameters(const RwacCommandPlayerPlayParameters::GenericRwacWaveContentHandle &, rw::audio::core::SndPlayer1::IsRequestDoneParams &);

	// CgsGenericRwacFactory.h:452
	void RwacCommandPlayerPlayParameters(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:465
	RwacCommandPlayerPlayParameters::GenericRwacWaveContentHandle & GetWaveContent();

	// CgsGenericRwacFactory.h:471
	float * GetRequestHandleAddress() const;

}

// CgsGenericRwacFactory.h:486
struct CgsSound::Playback::RwacCommandPlayerIsRequestDoneParameters : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:510
	rw::audio::core::SndPlayer1::IsRequestDoneParams * mpIrdParams;

public:
	// CgsGenericRwacFactory.h:489
	void RwacCommandPlayerIsRequestDoneParameters(rw::audio::core::SndPlayer1::IsRequestDoneParams &);

	// CgsGenericRwacFactory.h:495
	void RwacCommandPlayerIsRequestDoneParameters(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:504
	rw::audio::core::SndPlayer1::IsRequestDoneParams * GetParamsAddress() const;

}

// CgsGenericRwacFactory.h:517
struct CgsSound::Playback::RwacCommandSendConnectParameters : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:543
	rw::audio::core::PlugIn * mpSubmix;

public:
	// CgsGenericRwacFactory.h:520
	void RwacCommandSendConnectParameters(const rw::audio::core::Send::ConnectByPointerParams &);

	// CgsGenericRwacFactory.h:528
	void RwacCommandSendConnectParameters(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:537
	rw::audio::core::PlugIn * GetSubmix();

}

// CgsGenericRwacFactory.h:549
struct CgsSound::Playback::RwacCommandApplyReverbIRFile : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:576
	void * mpvReverbIRFile;

public:
	// CgsGenericRwacFactory.h:552
	void RwacCommandApplyReverbIRFile(const rw::audio::core::ReverbIR1::ReverbParams &);

	// CgsGenericRwacFactory.h:561
	void RwacCommandApplyReverbIRFile(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:570
	void * GetReverbFile() const;

}

// CgsGenericRwacFactory.h:583
struct CgsSound::Playback::RwacCommandGinsuAttachDataParameters : public RwacCommand {
private:
	// CgsGenericRwacFactory.h:610
	void * mpvRamData;

public:
	// CgsGenericRwacFactory.h:586
	void RwacCommandGinsuAttachDataParameters(const rw::audio::core::GinsuPlayer::PlayParams &);

	// CgsGenericRwacFactory.h:595
	void RwacCommandGinsuAttachDataParameters(uintptr_t, uintptr_t *);

	// CgsGenericRwacFactory.h:604
	void * GetRamData() const;

}

// CgsGenericRwacFactory.h:761
struct CgsSound::Playback::GenericRwacFactory : public CgsSound::Playback::Factory {
	// CgsGenericRwacFactory.cpp:109
	extern const Name SK_NAME;

	// CgsGenericRwacFactory.cpp:112
	extern const Name SK_SUBMIX_FEATURE_NAME;

	// CgsGenericRwacFactory.cpp:115
	extern const Name SK_SEND_FEATURE_NAME;

	// CgsGenericRwacFactory.cpp:118
	extern const Name SK_DAC_FEATURE_NAME;

	// CgsGenericRwacFactory.h:767
	extern const int KF_RWAC_COMMAND_BUFFER_SIZE = 196608;

private:
	// CgsGenericRwacFactory.h:851
	extern const uintptr_t SKU_COMMAND_SIZE = 16;

	// CgsGenericRwacFactory.h:853
	System * mpSystem;

	// CgsGenericRwacFactory.h:855
	RwacCommandQueue mCommandQueue;

	// CgsGenericRwacFactory.h:856
	Registry * mpRegistry;

public:
	void GenericRwacFactory(const CgsSound::Playback::GenericRwacFactory &);

	// CgsGenericRwacFactory.h:874
	size_t GetAllocationSize(const GenericRwacFactorySpec &);

	// CgsGenericRwacFactory.h:882
	size_t GetAllocatedSize() const;

	// CgsGenericRwacFactory.h:890
	// Declaration
	virtual void ~GenericRwacFactory() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGenericRwacFactory.h:892
		using namespace CgsDev::Message;

	}

	// CgsGenericRwacFactory.h:901
	Handle<CgsSound::Playback::GenericRwacFactory> Create(CgsSound::Playback::Environment &, GenericRwacFactorySpec);

	// CgsGenericRwacFactory.h:974
	RwacCommandQueue & GetCommandQueue();

	// CgsGenericRwacFactory.cpp:222
	void AddRegistry(Registry &);

	// CgsGenericRwacFactory.h:924
	Registry & GetRegistry();

protected:
	// CgsGenericRwacFactory.cpp:124
	void GenericRwacFactory(CgsSound::Playback::Environment &, const GenericRwacFactorySpec &);

	// CgsGenericRwacFactory.h:917
	System * GetSystem();

	// CgsGenericRwacFactory.cpp:576
	// Declaration
	CgsSound::Playback::GenericRwacVoiceConfig * SetupConfig(const VoiceSpec &, CgsSound::Playback::Voice &, GenericRwacVoice &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGenericRwacFactory.cpp:714
		using namespace CgsDev::Message;

	}

	// CgsGenericRwacFactory.cpp:256
	virtual bool DoCreateVoice(const VoiceSpec &, Handle<CgsSound::Playback::Voice> &, uint32_t);

	// CgsGenericRwacFactory.cpp:291
	virtual bool DoCreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsGenericRwacFactory.cpp:436
	virtual void DoUpdate(float);

	// CgsGenericRwacFactory.h:981
	float GetCpuLoad();

private:
	// CgsGenericRwacFactory.h:932
	const GenericRwacFeatureImplementation & GetFeatureImplementation(Name);

	// CgsGenericRwacFactory.cpp:313
	// Declaration
	void HandlePluginEvent(uintptr_t, uintptr_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGenericRwacFactory.cpp:354
		using namespace CgsDev::Message;

	}

}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandVoiceRelease>(const const RwacCommandVoiceRelease &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandPluginEvent>(const const RwacCommandPluginEvent &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandSendConnectParameters>(const const RwacCommandSendConnectParameters &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandApplyReverbIRFile>(const const RwacCommandApplyReverbIRFile &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandPlayerPlayParameters>(const const RwacCommandPlayerPlayParameters &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandPlayerIsRequestDoneParameters>(const const RwacCommandPlayerIsRequestDoneParameters &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandGinsuAttachDataParameters>(const const RwacCommandGinsuAttachDataParameters &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(const const RwacCommandPluginGetAttribute &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:672
extern RwacCommandQueue & operator<< <CgsSound::Playback::RwacCommandVoiceCreateInstance>(const const RwacCommandVoiceCreateInstance &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacFactory.h:949
extern Handle<CgsSound::Playback::GenericRwacSubmixVoice> CreateVoiceInternal<CgsSound::Playback::GenericRwacSubmixVoice>(const const VoiceSpec &  lVoiceSpec, uint32_t  luiIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacFactory.h:951
		Handle<CgsSound::Playback::GenericRwacSubmixVoice> lhVoice;

		FactoryNew<CgsSound::Playback::GenericRwacSubmixVoice, CgsSound::Playback::VoiceSpec, uint32_t>(/* parameters */);
	}
	CgsSound::Playback::GenericRwacSubmixVoice::GenericRwacSubmixVoice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::operator=(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::~Handle(/* parameters */);
	{
		// CgsGenericRwacFactory.h:958
		const CgsSound::Playback::Voice & lBaseVoice;

		CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::Handle(/* parameters */);
	}
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>::Handle(/* parameters */);
}

// CgsGenericRwacFactory.h:949
extern Handle<CgsSound::Playback::GenericRwacMasterVoice> CreateVoiceInternal<CgsSound::Playback::GenericRwacMasterVoice>(const const VoiceSpec &  lVoiceSpec, uint32_t  luiIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacFactory.h:951
		Handle<CgsSound::Playback::GenericRwacMasterVoice> lhVoice;

		FactoryNew<CgsSound::Playback::GenericRwacMasterVoice, CgsSound::Playback::VoiceSpec, uint32_t>(/* parameters */);
	}
	CgsSound::Playback::GenericRwacMasterVoice::GenericRwacMasterVoice(/* parameters */);
	CgsSound::Playback::GenericRwacVoice::GenericRwacVoice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::operator=(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::~Handle(/* parameters */);
	{
		// CgsGenericRwacFactory.h:958
		const CgsSound::Playback::Voice & lBaseVoice;

		CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::Handle(/* parameters */);
	}
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>::Handle(/* parameters */);
}

// CgsGenericRwacFactory.h:949
extern Handle<CgsSound::Playback::GenericRwacPlayerVoice> CreateVoiceInternal<CgsSound::Playback::GenericRwacPlayerVoice>(const const VoiceSpec &  lVoiceSpec, uint32_t  luiIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacFactory.h:951
		Handle<CgsSound::Playback::GenericRwacPlayerVoice> lhVoice;

		FactoryNew<CgsSound::Playback::GenericRwacPlayerVoice, CgsSound::Playback::VoiceSpec, uint32_t>(/* parameters */);
	}
	CgsSound::Playback::GenericRwacPlayerVoice::GenericRwacPlayerVoice(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::Handle(/* parameters */);
	CgsSound::Playback::Voice::AcknowledgePlaybackStateChange(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::operator=(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::~Handle(/* parameters */);
	{
		// CgsGenericRwacFactory.h:958
		const CgsSound::Playback::Voice & lBaseVoice;

		CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::Handle(/* parameters */);
	}
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::~Handle(/* parameters */);
	CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>::Handle(/* parameters */);
}

// CgsGenericRwacFactory.h:767
extern const int KF_RWAC_COMMAND_BUFFER_SIZE = 196608;

// CgsGenericRwacFactory.h:851
extern const uintptr_t SKU_COMMAND_SIZE = 16;

