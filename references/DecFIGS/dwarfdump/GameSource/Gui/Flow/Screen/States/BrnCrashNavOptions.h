// BrnCrashNavOptions.h:293
extern int32_t[] maiEventToObserve;

// BrnCrashNavOptions.h:294
extern const int32_t miNumEventsObserved;

// BrnCrashNavOptions.h:296
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavOptions.h:297
extern uint32_t muNumResourcesToLoad;

// BrnCrashNavOptions.h:301
extern char[] KAC_OPTION_NAME;

// BrnCrashNavOptions.h:306
extern char[] KAC_HELPITEM_ACCEPT;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavOptionsData {
		// BrnCrashNavOptions.h:93
		enum EOptionsVoipVolumes {
			E_OPTION_VOIP_VOLUMES_0 = 0,
			E_OPTION_VOIP_VOLUMES_1 = 1,
			E_OPTION_VOIP_VOLUMES_2 = 2,
			E_OPTION_VOIP_VOLUMES_3 = 3,
			E_OPTION_VOIP_VOLUMES_4 = 4,
			E_OPTION_VOIP_VOLUMES_5 = 5,
			E_OPTION_VOIP_VOLUMES_6 = 6,
			E_OPTION_VOIP_VOLUMES_7 = 7,
			E_OPTION_VOIP_VOLUMES_8 = 8,
			E_OPTION_VOIP_VOLUMES_9 = 9,
			E_OPTION_VOIP_VOLUMES_10 = 10,
			E_OPTION_VOIP_VOLUMES_COUNT = 11,
		}

		// BrnCrashNavOptions.h:111
		enum EOptionsSoundVolumes {
			E_OPTION_SOUND_VOLUMES_0 = 0,
			E_OPTION_SOUND_VOLUMES_1 = 1,
			E_OPTION_SOUND_VOLUMES_2 = 2,
			E_OPTION_SOUND_VOLUMES_3 = 3,
			E_OPTION_SOUND_VOLUMES_4 = 4,
			E_OPTION_SOUND_VOLUMES_5 = 5,
			E_OPTION_SOUND_VOLUMES_6 = 6,
			E_OPTION_SOUND_VOLUMES_7 = 7,
			E_OPTION_SOUND_VOLUMES_8 = 8,
			E_OPTION_SOUND_VOLUMES_9 = 9,
			E_OPTION_SOUND_VOLUMES_10 = 10,
			E_OPTION_SOUND_VOLUMES_11 = 11,
			E_OPTION_SOUND_VOLUMES_COUNT = 12,
		}

	}

}

// BrnCrashNavOptions.h:47
struct BrnGui::CrashNavOptionsData {
	// BrnCrashNavOptions.h:129
	extern const char *[] KAPC_OPTIONS;

	// BrnCrashNavOptions.h:130
	extern const char *[] KAPC_OPTION_LABELS;

	// BrnCrashNavOptions.h:131
	extern const char *[] KAPC_OPTION_VOIP_VOLUMES;

	// BrnCrashNavOptions.h:132
	extern const char *[] KAPC_OPTION_SOUND_VOLUMES;

	// BrnCrashNavOptions.h:133
	extern const char *[] KAPC_USB_CAMERA_LABELS;

private:
	// BrnCrashNavOptions.h:228
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraUserOption;

	// BrnCrashNavOptions.h:229
	BrnGui::CrashNavOptionsData::EOptionsVoipVolumes meVoipVolume;

	// BrnCrashNavOptions.h:230
	BrnGui::CrashNavOptionsData::EOptionsSoundVolumes meMusicVolume;

	// BrnCrashNavOptions.h:231
	BrnGui::CrashNavOptionsData::EOptionsSoundVolumes meSFXVolume;

	// BrnCrashNavOptions.h:232
	bool mbSixAxisShowtime;

	// BrnCrashNavOptions.h:233
	bool mbSixAxisSteering;

	// BrnCrashNavOptions.h:234
	bool mbForceFeedback;

	// BrnCrashNavOptions.h:235
	bool mbTips;

	// BrnCrashNavOptions.h:236
	bool mbDefaultGameCamera;

public:
	// BrnCrashNavOptions.h:145
	void Construct(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions, BrnGui::CrashNavOptionsData::EOptionsVoipVolumes, BrnGui::CrashNavOptionsData::EOptionsSoundVolumes, BrnGui::CrashNavOptionsData::EOptionsSoundVolumes, bool, bool, bool, bool, bool);

	// BrnCrashNavOptions.h:149
	void SetFromProfile(OptionsDataProfile *);

	// BrnCrashNavOptions.h:153
	void SetToProfile(OptionsDataProfile *);

	// BrnCrashNavOptions.h:158
	void OutputEvents(OptionsDataProfile *, StateInterface *);

	// BrnCrashNavOptions.h:162
	void SetUpComponent(BrnGui::MenuToggleGroup *);

	// BrnCrashNavOptions.h:166
	void SetCameraUserOptions(BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions);

	// BrnCrashNavOptions.h:170
	void SetVoipVolume(BrnGui::CrashNavOptionsData::EOptionsVoipVolumes);

	// BrnCrashNavOptions.h:174
	void SetMusicVolume(BrnGui::CrashNavOptionsData::EOptionsSoundVolumes);

	// BrnCrashNavOptions.h:178
	void SetSFXVolume(BrnGui::CrashNavOptionsData::EOptionsSoundVolumes);

	// BrnCrashNavOptions.h:182
	void SetSixAxisShowtime(bool);

	// BrnCrashNavOptions.h:186
	void SetSixAxisSteering(bool);

	// BrnCrashNavOptions.h:190
	void SetForceFeedback(bool);

	// BrnCrashNavOptions.h:194
	void SetTips(bool);

	// BrnCrashNavOptions.h:198
	void SetDefaultGameCamera(bool);

	// BrnCrashNavOptions.h:201
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions GetCameraUserOptions() const;

	// BrnCrashNavOptions.h:204
	BrnGui::CrashNavOptionsData::EOptionsVoipVolumes GetVoipVolume() const;

	// BrnCrashNavOptions.h:207
	BrnGui::CrashNavOptionsData::EOptionsSoundVolumes GetMusicVolume() const;

	// BrnCrashNavOptions.h:210
	BrnGui::CrashNavOptionsData::EOptionsSoundVolumes GetSFXVolume() const;

	// BrnCrashNavOptions.h:213
	bool GetSixAxisShowtime() const;

	// BrnCrashNavOptions.h:216
	bool GetSixAxisSteering() const;

	// BrnCrashNavOptions.h:219
	bool GetForceFeedback() const;

	// BrnCrashNavOptions.h:222
	bool GetTips() const;

	// BrnCrashNavOptions.h:225
	bool GetDefaultGameCamera() const;

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavOptionsData {
		// BrnCrashNavOptions.h:50
		enum EOptions {
			E_OPTION_CAMERAS = 0,
			E_OPTION_VOIP_VOLUME = 1,
			E_OPTION_MUSIC_VOLUME = 2,
			E_OPTION_SFX_VOLUME = 3,
			E_OPTION_SIXAXISSHOWTIME = 4,
			E_OPTION_SIXAXISSTEERING = 5,
			E_OPTION_FORCEFEEDBACK = 6,
			E_OPTION_TIPS = 7,
			E_OPTION_COUNT = 8,
		}

		// BrnCrashNavOptions.h:93
		enum EOptionsVoipVolumes {
			E_OPTION_VOIP_VOLUMES_0 = 0,
			E_OPTION_VOIP_VOLUMES_1 = 1,
			E_OPTION_VOIP_VOLUMES_2 = 2,
			E_OPTION_VOIP_VOLUMES_3 = 3,
			E_OPTION_VOIP_VOLUMES_4 = 4,
			E_OPTION_VOIP_VOLUMES_5 = 5,
			E_OPTION_VOIP_VOLUMES_6 = 6,
			E_OPTION_VOIP_VOLUMES_7 = 7,
			E_OPTION_VOIP_VOLUMES_8 = 8,
			E_OPTION_VOIP_VOLUMES_9 = 9,
			E_OPTION_VOIP_VOLUMES_10 = 10,
			E_OPTION_VOIP_VOLUMES_COUNT = 11,
		}

		// BrnCrashNavOptions.h:111
		enum EOptionsSoundVolumes {
			E_OPTION_SOUND_VOLUMES_0 = 0,
			E_OPTION_SOUND_VOLUMES_1 = 1,
			E_OPTION_SOUND_VOLUMES_2 = 2,
			E_OPTION_SOUND_VOLUMES_3 = 3,
			E_OPTION_SOUND_VOLUMES_4 = 4,
			E_OPTION_SOUND_VOLUMES_5 = 5,
			E_OPTION_SOUND_VOLUMES_6 = 6,
			E_OPTION_SOUND_VOLUMES_7 = 7,
			E_OPTION_SOUND_VOLUMES_8 = 8,
			E_OPTION_SOUND_VOLUMES_9 = 9,
			E_OPTION_SOUND_VOLUMES_10 = 10,
			E_OPTION_SOUND_VOLUMES_11 = 11,
			E_OPTION_SOUND_VOLUMES_COUNT = 12,
		}

	}

	// Declaration
	struct CrashNavOptions {
		// BrnCrashNavOptions.h:278
		enum EInternalScreenState {
			E_INTERNALSCREENSTATE_SETUP = 0,
			E_INTERNALSCREENSTATE_LOADING = 1,
			E_INTERNALSCREENSTATE_INITIALISING = 2,
			E_INTERNALSCREENSTATE_RUNNING = 3,
			E_INTERNALSCREENSTATE_LEAVING = 4,
			E_RACEINTERNALSTATE_COUNT = 5,
		}

	}

	// BrnCrashNavOptions.h:239
	extern BrnGui::CrashNavOptionsData::EOptions operator++(BrnGui::CrashNavOptionsData::EOptions &, int);

}

// BrnCrashNavOptions.h:250
struct BrnGui::CrashNavOptions : public CgsGui::State {
private:
	// BrnCrashNavOptions.h:289
	BrnGui::CrashNavOptions::EInternalScreenState meCurrentState;

	// BrnCrashNavOptions.h:291
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavOptions.cpp:32
	extern const int32_t[4] maiEventToObserve;

	// BrnCrashNavOptions.cpp:40
	extern const int32_t miNumEventsObserved = 4;

	// BrnCrashNavOptions.cpp:43
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnCrashNavOptions.cpp:48
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavOptions.h:299
	BrnGui::MenuToggleGroup mOptionToggles;

	// BrnCrashNavOptions.cpp:116
	extern const char[13] KAC_OPTION_NAME;

	// BrnCrashNavOptions.h:303
	CrashNavOptionsData mCrashNavOptionsData;

	// BrnCrashNavOptions.h:305
	BrnGui::HelpItem mHelpItemAccept;

	// BrnCrashNavOptions.cpp:50
	extern const char[18] KAC_HELPITEM_ACCEPT;

	// BrnCrashNavOptions.h:308
	bool mbSettingsChanged;

	// BrnCrashNavOptions.h:309
	bool mbHasHandledInputThisFrame;

public:
	// BrnCrashNavOptions.cpp:135
	virtual void OnEnter();

	// BrnCrashNavOptions.cpp:264
	virtual void OnLeave();

	// BrnCrashNavOptions.cpp:179
	virtual void Update();

	// BrnCrashNavOptions.h:268
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavOptions.cpp:302
	bool UpdateInitSetup();

	// BrnCrashNavOptions.cpp:345
	bool UpdateLoading();

	// BrnCrashNavOptions.cpp:383
	bool UpdateWFInit();

	// BrnCrashNavOptions.cpp:417
	bool UpdateRunning();

	// BrnCrashNavOptions.cpp:433
	void UpdatePermanent();

	// BrnCrashNavOptions.cpp:507
	bool HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavOptions.cpp:1015
	void HandleOverlayCompleteEvent(const GuiOverlayCompleteEvent *);

	// BrnCrashNavOptions.cpp:704
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavOptions.cpp:717
	void HandleOptionChanged();

	// BrnCrashNavOptions.cpp:851
	void SetSettingsFromProfile();

	// BrnCrashNavOptions.cpp:865
	void ApplyAndSaveSettings();

	// BrnCrashNavOptions.cpp:884
	void RestoreSoundSettings();

	// BrnCrashNavOptions.cpp:925
	void UpdateSoundSettings();

	// BrnCrashNavOptions.cpp:904
	void RestoreVoipSettings();

	// BrnCrashNavOptions.cpp:945
	void UpdateVoipSettings();

	// BrnCrashNavOptions.cpp:965
	void TriggerSound(EGameInputActions);

	// BrnCrashNavOptions.cpp:1038
	void StateCancelFlow();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavOptions {
	public:
		CrashNavOptions();

	private:
		// BrnCrashNavOptions.h:293
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavOptions.h:294
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavOptions.h:296
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavOptions.h:297
		extern uint32_t muNumResourcesToLoad;

		// BrnCrashNavOptions.h:301
		extern char[] KAC_OPTION_NAME;

		// BrnCrashNavOptions.h:306
		extern char[] KAC_HELPITEM_ACCEPT;

	}

}

// BrnCrashNavOptions.h:250
void BrnGui::CrashNavOptions::CrashNavOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

