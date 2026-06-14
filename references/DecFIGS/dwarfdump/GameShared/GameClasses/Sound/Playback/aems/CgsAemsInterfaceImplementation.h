// CgsAemsInterfaceImplementation.h:141
extern const unsigned char MAX_SAMPLE_CHANNELS = 6;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct AemsRWSamplePlayer {
			// CgsAemsInterfaceImplementation.h:135
			enum PauseState {
				PAUSESTATE_UNPAUSED = 0,
				PAUSESTATE_PAUSED = 1,
			}

		}

	}

}

// CgsAemsInterfaceImplementation.h:48
struct CgsSound::Playback::AemsRWSampleFactory : public CgsSound::Playback::Factory {
private:
	// CgsAemsInterfaceImplementation.h:84
	PlugInConfig[3] mAemsSubMixPlugInConfig;

	// CgsAemsInterfaceImplementation.h:87
	rw::audio::core::PlugInRegistry * mpPlugInRegistry;

	// CgsAemsInterfaceImplementation.h:88
	PlugInRegistry::PlugInHandle mGainHandle;

	// CgsAemsInterfaceImplementation.h:89
	PlugInRegistry::PlugInHandle mPan2DHandle;

	// CgsAemsInterfaceImplementation.h:90
	PlugInRegistry::PlugInHandle mRouteHandle;

	// CgsAemsInterfaceImplementation.h:91
	PlugInRegistry::PlugInHandle mSendHandle;

	// CgsAemsInterfaceImplementation.h:92
	PlugInRegistry::PlugInHandle mSndPlayer1Handle;

	// CgsAemsInterfaceImplementation.h:93
	PlugInRegistry::PlugInHandle mRechannelHandle;

	// CgsAemsInterfaceImplementation.h:94
	PlugInRegistry::PlugInHandle mResampleHandle;

	// CgsAemsInterfaceImplementation.h:95
	PlugInRegistry::PlugInHandle mSubMixHandle;

public:
	void AemsRWSampleFactory(const AemsRWSampleFactory &);

	// CgsAemsInterfaceImplementation.cpp:389
	void AemsRWSampleFactory(Name, CgsSound::Playback::Environment &);

	// CgsAemsInterfaceImplementation.cpp:460
	virtual Snd9::IAemsSamplePlayer * CreateInstance(void *, int, const int *, const char *, int, const AemsPlayerInputAccessor *);

	// CgsAemsInterfaceImplementation.cpp:807
	virtual void Release();

	virtual void ~AemsRWSampleFactory();

}

// CgsAemsInterfaceImplementation.h:102
struct CgsSound::Playback::AemsRWSamplePlayer : public Snd9::IAemsSamplePlayer {
	// CgsAemsInterfaceImplementation.h:141
	extern const unsigned char MAX_SAMPLE_CHANNELS = 6;

	// CgsAemsInterfaceImplementation.h:143
	const CgsSound::Playback::Environment & mEnvironment;

	// CgsAemsInterfaceImplementation.h:144
	CgsSound::Playback::AemsPlayerVoice * mpPlayerVoice;

	// CgsAemsInterfaceImplementation.h:145
	AemsRWSamplePlayer * mpNext;

	// CgsAemsInterfaceImplementation.h:147
	System * mpRwacSystem;

	// CgsAemsInterfaceImplementation.h:150
	rw::audio::core::Voice * mpVoice;

	// CgsAemsInterfaceImplementation.h:151
	rw::audio::core::PlugIn * mpSndPlayer;

	// CgsAemsInterfaceImplementation.h:152
	rw::audio::core::PlugIn * mpResample;

	// CgsAemsInterfaceImplementation.h:153
	rw::audio::core::PlugIn * mpSendWet;

	// CgsAemsInterfaceImplementation.h:154
	rw::audio::core::PlugIn * mpGain;

	// CgsAemsInterfaceImplementation.h:158
	rw::audio::core::Voice *[5] mpPannerVoice;

	// CgsAemsInterfaceImplementation.h:159
	rw::audio::core::PlugIn *[5] mpPan2D;

	// CgsAemsInterfaceImplementation.h:160
	float32_t[5] mafPreviousAzimuths;

	// CgsAemsInterfaceImplementation.h:162
	float32_t mfPreviousPitch;

	// CgsAemsInterfaceImplementation.h:163
	float32_t mfPreviousDry;

	// CgsAemsInterfaceImplementation.h:164
	float32_t mfPreviousWet;

	// CgsAemsInterfaceImplementation.h:166
	float mPitch;

	// CgsAemsInterfaceImplementation.h:167
	float mVol;

	// CgsAemsInterfaceImplementation.h:168
	float mDryLevel;

	// CgsAemsInterfaceImplementation.h:169
	float mWetLevel;

	// CgsAemsInterfaceImplementation.h:170
	float mRequestHandle;

	// CgsAemsInterfaceImplementation.h:171
	double mSampleLength;

	// CgsAemsInterfaceImplementation.h:172
	CgsSound::Playback::AemsRWSamplePlayer::PauseState mPauseState;

	// CgsAemsInterfaceImplementation.h:173
	unsigned char mNumChannels;

	// CgsAemsInterfaceImplementation.h:174
	unsigned char mNumPannerVoices;

public:
	void AemsRWSamplePlayer(const AemsRWSamplePlayer &);

	// CgsAemsInterfaceImplementation.cpp:69
	void AemsRWSamplePlayer(CgsSound::Playback::Environment &, CgsSound::Playback::AemsPlayerVoice *);

	// CgsAemsInterfaceImplementation.cpp:103
	virtual void Release();

	// CgsAemsInterfaceImplementation.cpp:353
	virtual void Pause();

	// CgsAemsInterfaceImplementation.cpp:369
	virtual void Unpause();

	// CgsAemsInterfaceImplementation.cpp:146
	virtual void SetInput(Snd9::IAemsSamplePlayer::InputSelector, int);

	// CgsAemsInterfaceImplementation.cpp:261
	virtual void SetAzimuth(int, int *[6][6]);

	// CgsAemsInterfaceImplementation.cpp:284
	virtual void GetOutputs(int, int *);

	virtual void ~AemsRWSamplePlayer();

}

// CgsAemsInterfaceImplementation.h:102
void CgsSound::Playback::AemsRWSamplePlayer::~AemsRWSamplePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAemsInterfaceImplementation.h:48
void CgsSound::Playback::AemsRWSampleFactory::~AemsRWSampleFactory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

