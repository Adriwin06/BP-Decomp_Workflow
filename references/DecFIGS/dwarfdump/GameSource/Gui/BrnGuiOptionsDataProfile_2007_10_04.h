// BrnGuiOptionsDataProfile_2007_10_04.h:27
namespace BrnGui_2007_10_04 {
	struct OptionsDataProfile;

	// BrnGuiOptionsDataProfile_2007_10_04.h:31
	const int32_t KI_MAX_TRAX_IN_GAME = 64;

	// BrnGuiOptionsDataProfile_2007_10_04.h:33
	const int32_t KI_MIN_BRIGHTNESS = 1;

	// BrnGuiOptionsDataProfile_2007_10_04.h:34
	const int32_t KI_MIN_CONTRAST = 1;

	// BrnGuiOptionsDataProfile_2007_10_04.h:35
	const int32_t KI_DEFAULT_BRIGHTNESS = 50;

	// BrnGuiOptionsDataProfile_2007_10_04.h:37
	const int32_t KI_DEFAULT_MUSIC_VOLUME = 8;

	// BrnGuiOptionsDataProfile_2007_10_04.h:38
	const int32_t KI_DEFAULT_SFX_VOLUME = 8;

	// BrnGuiOptionsDataProfile_2007_10_04.h:40
	const int32_t KI_MAX_BRIGHTNESS = 100;

	// BrnGuiOptionsDataProfile_2007_10_04.h:41
	const int32_t KI_MAX_CONTRAST = 100;

	// BrnGuiOptionsDataProfile_2007_10_04.h:42
	const int32_t KI_DEFAULT_CONTRAST = 50;

}

// BrnGuiOptionsDataProfile_2007_10_04.h:51
struct BrnGui_2007_10_04::OptionsDataProfile {
	// BrnGuiOptionsDataProfile_2007_10_04.h:54
	extern const int32_t KI_VERSION_NUMBER = 8;

	// BrnGuiOptionsDataProfile_2007_10_04.h:55
	extern const int32_t KI_MAX_CREATED_ONLINE_GAME_OPTIONS = 10;

	// BrnGuiOptionsDataProfile_2007_10_04.h:56
	extern const int32_t KI_MAX_RECEIVED_ONLINE_GAME_OPTIONS = 10;

	// BrnGuiOptionsDataProfile_2007_10_04.h:60
	int32_t miVersionNumber;

	// BrnGuiOptionsDataProfile_2007_10_04.h:62
	GuiEventNetworkGameParams[10] maCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile_2007_10_04.h:63
	GuiEventNetworkGameParams[10] maReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile_2007_10_04.h:65
	int32_t miNumCreatedOnlineGameOptions;

	// BrnGuiOptionsDataProfile_2007_10_04.h:66
	int32_t miNumReceivedOnlineGameOptions;

	// BrnGuiOptionsDataProfile_2007_10_04.h:48
	typedef FastBitArray<64> EATraxArrayType;

	// BrnGuiOptionsDataProfile_2007_10_04.h:69
	OptionsDataProfile::EATraxArrayType mTraxAvailable;

	// BrnGuiOptionsDataProfile_2007_10_04.h:70
	OptionsDataProfile::EATraxArrayType mTraxFullyPlayed;

	// BrnGuiOptionsDataProfile_2007_10_04.h:71
	BrnGui::GuiEventAudioTraxPlayOrder::ETraxPlayOrderMode meTraxPlayOrderMode;

	// BrnGuiOptionsDataProfile_2007_10_04.h:74
	BrnDirector::GameState::DirectorProfileData mDirectorProfileData;

	// BrnGuiOptionsDataProfile_2007_10_04.h:77
	int32_t mBrightness;

	// BrnGuiOptionsDataProfile_2007_10_04.h:78
	int32_t mContrast;

	// BrnGuiOptionsDataProfile_2007_10_04.h:79
	int32_t mMusicVolume;

	// BrnGuiOptionsDataProfile_2007_10_04.h:80
	int32_t mSFXVolume;

	// BrnGuiOptionsDataProfile_2007_10_04.h:81
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraFeedSetting;

	// BrnGuiOptionsDataProfile_2007_10_04.h:82
	bool mbIsNewsUnread;

	// BrnGuiOptionsDataProfile_2007_10_04.h:83
	bool mbSixAxisShowtime;

	// BrnGuiOptionsDataProfile_2007_10_04.h:84
	bool mbSixAxisSteering;

	// BrnGuiOptionsDataProfile_2007_10_04.h:85
	bool mbForceFeedback;

	// BrnGuiOptionsDataProfile_2007_10_04.h:86
	bool mbDefaultGameCamera;

	// BrnGuiOptionsDataProfile_2007_10_04.h:87
	bool mbTips;

	// BrnGuiOptionsDataProfile_2007_10_04.h:90
	bool mbIsLocked;

}

// BrnGuiOptionsDataProfile_2007_10_04.h:55
extern const int32_t KI_MAX_CREATED_ONLINE_GAME_OPTIONS = 10;

// BrnGuiOptionsDataProfile_2007_10_04.h:56
extern const int32_t KI_MAX_RECEIVED_ONLINE_GAME_OPTIONS = 10;

