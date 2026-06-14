// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct Module {
			// CgsSoundLogicModule.h:68
			enum EModulePrepareStage {
				eModulePrepareStart = 0,
				eModulePrepareManager = 1,
				eModuleCreateEnvironment = 2,
				eModulePrepareEnvironment = 3,
				eModuleCreateHierarchyBuilder = 4,
				eModulePrepareProxies = 5,
				eModulePrepareDone = 6,
			}

			// CgsSoundLogicModule.h:79
			enum EModuleReleaseStage {
				eModuleReleaseStart = 0,
				eModuleDestroyHierarchyBuilder = 1,
				eModuleReleaseEnvironment = 2,
				eModuleDestroyEnvironment = 3,
				eModuleReleaseManager = 4,
				eModuleReleaseDone = 5,
			}

		}

		// CgsSoundLogicModule.h:278
		extern CgsSound::Logic::Module::EModuleReleaseStage operator++(CgsSound::Logic::Module::EModuleReleaseStage &, int);

		// CgsSoundLogicModule.h:277
		extern CgsSound::Logic::Module::EModulePrepareStage operator++(CgsSound::Logic::Module::EModulePrepareStage &, int);

	}

}

// CgsSoundLogicModule.h:65
struct CgsSound::Logic::Module : public CgsModule::ModuleSingleBuffered {
protected:
	// CgsSoundLogicModule.h:251
	InputBuffer * mpLogicInputBuffer;

	// CgsSoundLogicModule.h:252
	OutputBuffer * mpLogicOutputBuffer;

	// CgsSoundLogicModule.h:254
	uint32_t muUniqueId;

	// CgsSoundLogicModule.h:255
	uint32_t muInstanceIndex;

private:
	// CgsSoundLogicModule.h:259
	CgsSound::Playback::Module::Module mPlaybackModule;

	// CgsSoundLogicModule.h:261
	Environment mEnvironment;

	// CgsSoundLogicModule.h:262
	rw::IResourceAllocator * mpAllocator;

	// CgsSoundLogicModule.h:263
	MessageQueue mMessageQueue;

	// CgsSoundLogicModule.h:265
	CgsSound::Logic::Module::EModulePrepareStage mePrepareStage;

	// CgsSoundLogicModule.h:266
	CgsSound::Logic::Module::EModuleReleaseStage meReleaseStage;

	// CgsSoundLogicModule.cpp:42
	extern uint32_t suInstanceCount;

public:
	// CgsSoundLogicModule.cpp:64
	virtual void Construct();

	// CgsSoundLogicModule.cpp:105
	virtual bool Prepare(rw::IResourceAllocator *, InputBuffer *, OutputBuffer *, const ModuleParams &);

	// CgsSoundLogicModule.cpp:207
	virtual bool Release();

	// CgsSoundLogicModule.cpp:280
	virtual void Destruct();

	// CgsSoundLogicModule.cpp:305
	virtual void Update(float32_t, float32_t, InputBuffer *, OutputBuffer *);

	// CgsSoundLogicModule.cpp:346
	void UpdateWithInputLocked(float32_t, float32_t, InputBuffer *, OutputBuffer *);

	// CgsSoundLogicModule.cpp:367
	void UpdateWithInputAndOutputLocked(float32_t, float32_t, InputBuffer *, OutputBuffer *);

	// CgsSoundLogicModule.h:169
	void UpdateWithOutputLocked(float32_t, float32_t, InputBuffer *, OutputBuffer *);

	// CgsSoundLogicModule.h:335
	Environment & GetEnvironment();

	// CgsSoundLogicModule.h:401
	CgsSound::Playback::Module::Module & GetPlaybackModule();

	// CgsSoundLogicModule.h:377
	virtual uint32_t GetUniqueId();

protected:
	// CgsSoundLogicModule.cpp:424
	virtual int32_t GetNumberOfStates();

	// CgsSoundLogicModule.cpp:443
	virtual void AttachBuffers(InputBuffer *, OutputBuffer *);

	// CgsSoundLogicModule.cpp:458
	virtual void DetachBuffers();

private:
	// CgsSoundLogicModule.h:299
	void * operator new(size_t, Environment &);

	// CgsSoundLogicModule.h:318
	void operator delete(void *, Environment &);

protected:
	// CgsSoundLogicModule.cpp:392
	// Declaration
	void ProcessMessageQueue(const MessageQueue &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSoundLogicModuleIO.h:53
		typedef VariableEventQueue<4096,16> MessageQueue;

		// CgsSoundLogicModule.cpp:394
		using namespace Io;

	}

}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::FxVolumes>(const const Message<BrnSound::FxVolumes> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::Brn3DEffectControl::DrawSphere>(const const Message<BrnSound::Logic::Brn3DEffectControl::DrawSphere> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<bool>(const const Message<bool> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<CgsGui::GuiEventPlayMusicOnMenuStream>(const const Message<CgsGui::GuiEventPlayMusicOnMenuStream> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiAudioEvent>(const const Message<BrnGui::GuiAudioEvent> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiAudioTriggerEvent>(const const Message<BrnGui::GuiAudioTriggerEvent> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioTraxUpdate>(const const Message<BrnGui::GuiEventAudioTraxUpdate> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioTraxLastPlayedIndexes>(const const Message<BrnGui::GuiEventAudioTraxLastPlayedIndexes> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioTraxPreview>(const const Message<BrnGui::GuiEventAudioTraxPreview> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioTraxPlayOrder>(const const Message<BrnGui::GuiEventAudioTraxPlayOrder> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<CgsSound::Playback::Name>(const const Message<CgsSound::Playback::Name> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<Attrib::Key>(const const Message<Attrib::Key> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioSettings>(const const Message<BrnGui::GuiEventAudioSettings> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGui::GuiEventAudioEventIntros>(const const Message<BrnGui::GuiEventAudioEventIntros> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<CgsLanguage::ELanguage>(const const Message<CgsLanguage::ELanguage> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<AttribSys::Enums::EOnlineVoiceOver>(const const Message<AttribSys::Enums::OnlineVoiceOver::OnlineVoiceOver> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<int32_t>(const const Message<int32_t> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::VehicleImpactEvent>(const const Message<BrnGameState::GameStateModuleIO::VehicleImpactEvent> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<CgsSound::Io::QueueElement>(const const Message<CgsSound::Io::QueueElement> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<float32_t>(const const Message<float32_t> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::EGameActionType>(const const Message<BrnGameState::GameStateModuleIO::EGameActionType> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_StuntSmash>(const const Message<BrnSound::Logic::FxMessage_StuntSmash> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_StuntStunt>(const const Message<BrnSound::Logic::FxMessage_StuntStunt> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::ESoundMessages>(const const Message<BrnSound::ESoundMessages> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction>(const const Message<BrnGameState::GameStateModuleIO::RoadRagePlayerDamageAction> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_StruntJump>(const const Message<BrnSound::Logic::FxMessage_StruntJump> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::ShowModeResultsAction>(const const Message<BrnGameState::GameStateModuleIO::ShowModeResultsAction> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::GameModeLostResults>(const const Message<BrnSound::GameModeLostResults> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::MusicEffect::EJunkyardAmbience>(const const Message<BrnSound::Logic::MusicEffect::EJunkyardAmbience> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnProgression::ETrainingType>(const const Message<BrnProgression::ETrainingType> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_QuitEvent>(const const Message<BrnSound::Logic::FxMessage_QuitEvent> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType>(const const Message<BrnGameState::GameStateModuleIO::ResetPlayerCarAction::CarSelectType> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnProgression::TrophyUnlockData::UnlockType>(const const Message<BrnProgression::TrophyUnlockData::UnlockType> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_OnlineRivalSweep>(const const Message<BrnSound::Logic::FxMessage_OnlineRivalSweep> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnGameState::GameStateModuleIO::EGameModeType>(const const Message<BrnGameState::GameStateModuleIO::EGameModeType> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_CameraCut>(const const Message<BrnSound::Logic::FxMessage_CameraCut> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_CameraPhoto>(const const Message<BrnSound::Logic::FxMessage_CameraPhoto> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::Logic::FxMessage_ResetOnTrack>(const const Message<BrnSound::Logic::FxMessage_ResetOnTrack> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:357
extern void PostMessage<BrnSound::RaceCarIsNowActive>(const const Message<BrnSound::RaceCarIsNowActive> &  lMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundLogicModule.h:359
		int32_t liEventId;

	}
}

// CgsSoundLogicModule.h:65
void CgsSound::Logic::Module::~Module() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundLogicModule.h:65
void CgsSound::Logic::Module::Module() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

