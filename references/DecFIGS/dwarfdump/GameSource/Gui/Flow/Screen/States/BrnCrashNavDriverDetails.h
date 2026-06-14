// BrnCrashNavDriverDetails.h:141
extern int32_t[] maiEventToObserve;

// BrnCrashNavDriverDetails.h:142
extern const int32_t miNumEventsObserved;

// BrnCrashNavDriverDetails.h:144
extern sResourceTuple[] maResourcesToLoad;

// BrnCrashNavDriverDetails.h:145
extern const uint32_t muNumResourcesToLoad;

// BrnCrashNavDriverDetails.h:147
extern const int32_t KI_MAX_LENGTH_STATS_STRING;

// BrnCrashNavDriverDetails.h:149
extern char[] KAC_MENU_COMPONENT;

// BrnCrashNavDriverDetails.h:150
extern char[] KAC_LICENSECOMP_NAME;

// BrnCrashNavDriverDetails.h:151
extern char[] KAC_PHOTOBOOTHCOMP_NAME;

// BrnCrashNavDriverDetails.h:164
extern char[] KAC_STATSPANEL_ANIM_NAME;

// BrnCrashNavDriverDetails.h:175
extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION;

// BrnCrashNavDriverDetails.h:176
extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION_SD;

// BrnCrashNavDriverDetails.h:184
extern char[] KAC_TAKEPHOTO_PROMPT_NAME;

// BrnCrashNavDriverDetails.h:197
extern char[] KAC_ACHIEVEMENTS_PROMPT_NAME;

// BrnCrashNavDriverDetails.h:199
extern char[] KAC_BESTBOOSTCHAIN_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:200
extern char[] KAC_BESTAIRTIME_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:201
extern char[] KAC_BESTSPIN_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:202
extern char[] KAC_BESTBARRELROLL_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:203
extern char[] KAC_BESTPOWERPARKING_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:204
extern char[] KAC_BESTSTUNTRUN_FORMAT_STRINGID;

// BrnCrashNavDriverDetails.h:205
extern char[] KAC_BESTROADRAGE_FORMAT_STRINGID;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavDriverDetails {
		// BrnCrashNavDriverDetails.h:73
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_SETUPLICENSE = 1,
			E_INTERNALSTATE_LOADRESOURCES = 2,
			E_INTERNALSTATE_WFINIT = 3,
			E_INTERNALSTATE_RUNNING = 4,
			E_INTERNALSTATE_LEAVING = 5,
			E_INTERNALSTATE_COUNT = 6,
		}

		// BrnCrashNavDriverDetails.h:188
		enum E_ACHIEVEMENTS_TICKER {
			E_ACHIEVEMENTS_TICKER_INACTIVE = 0,
			E_ACHIEVEMENTS_TICKER_SHOWING = 1,
			E_ACHIEVEMENTS_TICKER_SHOWN = 2,
		}

	}

}

// BrnCrashNavDriverDetails.h:46
struct BrnGui::CrashNavDriverDetails : public CgsGui::State {
private:
	// BrnCrashNavDriverDetails.cpp:32
	extern const int32_t[8] maiEventToObserve;

	// BrnCrashNavDriverDetails.cpp:44
	extern const int32_t miNumEventsObserved = 8;

	// BrnCrashNavDriverDetails.cpp:48
	extern const sResourceTuple[2] maResourcesToLoad;

	// BrnCrashNavDriverDetails.cpp:54
	extern const uint32_t muNumResourcesToLoad = 2;

	// BrnCrashNavDriverDetails.cpp:46
	extern const int32_t KI_MAX_LENGTH_STATS_STRING = 64;

	// BrnCrashNavDriverDetails.cpp:56
	extern const char[9] KAC_MENU_COMPONENT;

	// BrnCrashNavDriverDetails.cpp:58
	extern const char[12] KAC_LICENSECOMP_NAME;

	// BrnCrashNavDriverDetails.cpp:64
	extern const char[15] KAC_PHOTOBOOTHCOMP_NAME;

	// BrnCrashNavDriverDetails.cpp:72
	extern const char *[3] KAPC_MENU_TEXT;

	// BrnCrashNavDriverDetails.cpp:79
	extern const char *[33] KAPC_STAT_TEXTFIELD_NAMES;

	// BrnCrashNavDriverDetails.cpp:121
	extern const char *[5] KAPC_DISTRICT_BILLBOARD_TEXTFIELD_NAMES;

	// BrnCrashNavDriverDetails.cpp:130
	extern const char *[5] KAPC_DISTRICT_JUMPS_TEXTFIELD_NAMES;

	// BrnCrashNavDriverDetails.cpp:139
	extern const char *[5] KAPC_DISTRICT_SMASHES_TEXTFIELD_NAMES;

	// BrnCrashNavDriverDetails.h:159
	BrnGui::TextField[5] maDistrictBillboardsTextfields;

	// BrnCrashNavDriverDetails.h:160
	BrnGui::TextField[5] maDistrictJumpsTextfields;

	// BrnCrashNavDriverDetails.h:161
	BrnGui::TextField[5] maDistrictSmashesTextfields;

	// BrnCrashNavDriverDetails.h:163
	BrnGui::AnimationComponent mStatsPanelAnimator;

	// BrnCrashNavDriverDetails.cpp:66
	extern const char[23] KAC_STATSPANEL_ANIM_NAME;

	// BrnCrashNavDriverDetails.h:166
	BrnGui::TextField[33] maStatTextfields;

	// BrnCrashNavDriverDetails.h:168
	BrnGui::CrashNavDriverDetails::InternalState meInternalState;

	// BrnCrashNavDriverDetails.h:169
	BrnGui::MenuComponent mMenuComponent;

	// BrnCrashNavDriverDetails.h:171
	bool mbStatsDataReceived;

	// BrnCrashNavDriverDetails.h:172
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavDriverDetails.h:174
	BrnGui::LicenseComponent mLicenseComponent;

	// BrnCrashNavDriverDetails.cpp:61
	extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION;

	// BrnCrashNavDriverDetails.cpp:62
	extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION_SD;

	// BrnCrashNavDriverDetails.h:177
	bool mbShowLicense;

	// BrnCrashNavDriverDetails.h:180
	BrnGui::PhotoBoothComponent mPhotoBoothComponent;

	// BrnCrashNavDriverDetails.h:182
	BrnGui::HelpItem mTakePhotoPrompt;

	// BrnCrashNavDriverDetails.h:183
	bool mbRefreshTakePhotoPrompt;

	// BrnCrashNavDriverDetails.cpp:148
	extern const char[20] KAC_TAKEPHOTO_PROMPT_NAME;

	// BrnCrashNavDriverDetails.h:185
	bool mbIsCameraConnected;

	// BrnCrashNavDriverDetails.h:194
	BrnGui::CrashNavDriverDetails::E_ACHIEVEMENTS_TICKER meAchievementsTickerState;

	// BrnCrashNavDriverDetails.h:196
	BrnGui::HelpItem mAchievementsPrompt;

	// BrnCrashNavDriverDetails.cpp:68
	extern const char[22] KAC_ACHIEVEMENTS_PROMPT_NAME;

	// BrnCrashNavDriverDetails.cpp:151
	extern const char[14] KAC_BESTBOOSTCHAIN_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:152
	extern const char[13] KAC_BESTAIRTIME_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:153
	extern const char[13] KAC_BESTSPIN_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:154
	extern const char[5] KAC_BESTBARRELROLL_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:155
	extern const char[27] KAC_BESTPOWERPARKING_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:156
	extern const char[22] KAC_BESTSTUNTRUN_FORMAT_STRINGID;

	// BrnCrashNavDriverDetails.cpp:157
	extern const char[25] KAC_BESTROADRAGE_FORMAT_STRINGID;

public:
	// BrnCrashNavDriverDetails.cpp:178
	virtual void OnEnter();

	// BrnCrashNavDriverDetails.cpp:250
	virtual void OnLeave();

	// BrnCrashNavDriverDetails.cpp:294
	virtual void Update();

	// BrnCrashNavDriverDetails.h:64
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavDriverDetails.cpp:386
	bool UpdateInitSetup();

	// BrnCrashNavDriverDetails.cpp:444
	bool UpdateSetupLicense();

	// BrnCrashNavDriverDetails.cpp:515
	bool UpdateLoadResources();

	// BrnCrashNavDriverDetails.cpp:576
	bool UpdateWFInit();

	// BrnCrashNavDriverDetails.cpp:646
	bool UpdateRunning();

	// BrnCrashNavDriverDetails.cpp:724
	bool UpdatePermanent();

	// BrnCrashNavDriverDetails.cpp:985
	void ShowMenu();

	// BrnCrashNavDriverDetails.cpp:1010
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavDriverDetails.cpp:843
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnCrashNavDriverDetails.cpp:1037
	void HandleStatData(const GuiEventStatsResponse *);

	// BrnCrashNavDriverDetails.cpp:1159
	void UpdateStatsPanel();

	// BrnCrashNavDriverDetails.cpp:1205
	void HideTickerMessage();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavDriverDetails {
	public:
		CrashNavDriverDetails();

	private:
		// BrnCrashNavDriverDetails.h:141
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavDriverDetails.h:142
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavDriverDetails.h:144
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCrashNavDriverDetails.h:145
		extern const uint32_t muNumResourcesToLoad;

		// BrnCrashNavDriverDetails.h:147
		extern const int32_t KI_MAX_LENGTH_STATS_STRING;

		// BrnCrashNavDriverDetails.h:149
		extern char[] KAC_MENU_COMPONENT;

		// BrnCrashNavDriverDetails.h:150
		extern char[] KAC_LICENSECOMP_NAME;

		// BrnCrashNavDriverDetails.h:151
		extern char[] KAC_PHOTOBOOTHCOMP_NAME;

		// BrnCrashNavDriverDetails.h:164
		extern char[] KAC_STATSPANEL_ANIM_NAME;

		// BrnCrashNavDriverDetails.h:175
		extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION;

		// BrnCrashNavDriverDetails.h:176
		extern const rw::math::vpu::Vector2 KV2_LICENSE_POSITION_SD;

		// BrnCrashNavDriverDetails.h:184
		extern char[] KAC_TAKEPHOTO_PROMPT_NAME;

		// BrnCrashNavDriverDetails.h:197
		extern char[] KAC_ACHIEVEMENTS_PROMPT_NAME;

		// BrnCrashNavDriverDetails.h:199
		extern char[] KAC_BESTBOOSTCHAIN_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:200
		extern char[] KAC_BESTAIRTIME_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:201
		extern char[] KAC_BESTSPIN_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:202
		extern char[] KAC_BESTBARRELROLL_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:203
		extern char[] KAC_BESTPOWERPARKING_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:204
		extern char[] KAC_BESTSTUNTRUN_FORMAT_STRINGID;

		// BrnCrashNavDriverDetails.h:205
		extern char[] KAC_BESTROADRAGE_FORMAT_STRINGID;

	}

}

// BrnCrashNavDriverDetails.h:46
void BrnGui::CrashNavDriverDetails::CrashNavDriverDetails() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

