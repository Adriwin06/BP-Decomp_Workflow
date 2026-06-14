// BrnDebugComponent.h:87
extern CgsDev::Log::LogCombined mLogCombined;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundStatistics.h:43
	namespace Debug {
		// Declaration
		struct DebugComponent {
			// BrnDebugComponent.h:93
			enum EConsole {
				E_AUDIO = 0,
				E_GAME = 1,
				E_AUDIO_AND_GAME = 2,
				E_MAX_CONSOLES = 3,
			}

		}

	}

}

// BrnDebugComponent.h:69
struct BrnSound::Debug::DebugComponent : public CgsDev::DebugComponent {
	// BrnDebugComponent.cpp:54
	extern CgsDev::Log::LogCombined mLogCombined;

	// BrnDebugComponent.h:128
	CgsDev::Log::LogNull mLogNull;

	// BrnDebugComponent.h:129
	CgsDev::Log::LogOutput mLogTty;

	// BrnDebugComponent.h:130
	CgsDev::DebugUI::LogWindow mLogWindow;

	// BrnDebugComponent.h:132
	CgsSound::Playback::Module::Module * mpPlaybackModule;

	// BrnDebugComponent.h:133
	BrnSound::Module::SoundLogicModule * mpLogicModule;

	// BrnDebugComponent.h:135
	StringList[26] maCollisionMaterialNames;

	// BrnDebugComponent.h:136
	StringList[8] maCollisionActionNames;

	// BrnDebugComponent.h:137
	StringList[4] maConsoleNames;

	// BrnDebugComponent.h:138
	StringList[50] maSpliceBankNames;

	// BrnDebugComponent.h:153
	BrnSound::Debug::DebugComponent::EConsole meOutput;

	// BrnDebugComponent.h:155
	bool mbSpliceAudition;

	// BrnDebugComponent.h:156
	bool mbSpliceAuditionAutoCycle;

	// BrnDebugComponent.h:157
	int32_t miSpliceBankIndex;

	// BrnDebugComponent.h:158
	int32_t miSpliceIndexTens;

	// BrnDebugComponent.h:159
	int32_t miSpliceIndexUnits;

	// BrnDebugComponent.h:160
	Splice * mpSpliceAuditionVoice;

	// BrnDebugComponent.h:163
	Statistics mStatistics;

public:
	// BrnDebugComponent.cpp:70
	void Construct(CgsSound::Playback::Module::Module *, BrnSound::Module::SoundLogicModule *);

	// BrnDebugComponent.cpp:101
	void Destruct();

	// BrnDebugComponent.cpp:676
	virtual void Update();

	// BrnDebugComponent.cpp:743
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnDebugComponent.cpp:765
	void Render3dControl(const CgsSound::Logic::Cgs3dEffectControl *);

	// BrnDebugComponent.cpp:706
	void UpdateMaxRpmDisplay();

	// BrnDebugComponent.cpp:116
	virtual void OnActivate();

	// BrnDebugComponent.h:117
	virtual const char * GetName() const;

	// BrnDebugComponent.h:120
	virtual const char * GetPath() const;

	// BrnDebugComponent.h:123
	virtual bool IsSimple() const;

	// BrnDebugComponent.cpp:965
	// Declaration
	void UpdateSpliceAudition() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDebugComponent.cpp:973
		using namespace CgsSound::Playback;

	}

	// BrnDebugComponent.cpp:793
	void BuildMaterialNames();

	// BrnDebugComponent.cpp:828
	void BuildActionNames();

	// BrnDebugComponent.cpp:1030
	// Declaration
	void BuildSplicerBankNames() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDebugComponent.cpp:1034
		using namespace CgsSound::Playback;

	}

	// BrnDebugComponent.cpp:885
	void InstallConsole(BrnSound::Debug::DebugComponent::EConsole);

}

// BrnDebugComponent.h:69
void BrnSound::Debug::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

