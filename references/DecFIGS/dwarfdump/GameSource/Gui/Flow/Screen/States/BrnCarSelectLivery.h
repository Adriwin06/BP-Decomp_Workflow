// BrnCarSelectLivery.h:106
extern char[] KAC_OPTION_NAME;

// BrnCarSelectLivery.h:107
extern char[] KAC_PAINT_COLOUR_OPTION_NAME;

// BrnCarSelectLivery.h:109
extern const uint32_t KI_MAX_LIVERIES_PER_MODEL;

// BrnCarSelectLivery.h:112
extern char[] KAC_HELPITEM_RESTORE;

// BrnCarSelectLivery.h:115
extern char[] KAC_ONLINE_COUNTDOWN_NAME;

// BrnCarSelectLivery.h:118
extern char[] KAC_ONLINE_PLAYER_LIST;

// BrnCarSelectLivery.h:122
extern char[] macFadeScreenAnimComponentName;

// BrnCarSelectLivery.h:126
extern char[] macHelpBarAnimComponentName;

// BrnCarSelectLivery.h:133
extern const uint32_t muNumResourcesToLoad;

// BrnCarSelectLivery.h:134
extern int32_t[] maiEventToObserve;

// BrnCarSelectLivery.h:135
extern const int32_t miNumEventsObserved;

// BrnCarSelectLivery.h:52
struct BrnGui::CarSelectLivery : public CarSelectMain {
private:
	// BrnCarSelectLivery.h:100
	BrnGui::MenuToggleGroup mOptionToggles;

	// BrnCarSelectLivery.h:102
	BrnGui::ColourMenuToggle mColourMenuToggle;

	// BrnCarSelectLivery.h:104
	Vector4 mDefaultCarColour;

	// BrnCarSelectLivery.cpp:66
	extern const char[13] KAC_OPTION_NAME;

	// BrnCarSelectLivery.cpp:67
	extern const char[19] KAC_PAINT_COLOUR_OPTION_NAME;

	// BrnCarSelectLivery.cpp:69
	extern const char *[2] KAPC_OPTIONS;

	// BrnCarSelectLivery.cpp:75
	extern const uint32_t KI_MAX_LIVERIES_PER_MODEL = 8;

	// BrnCarSelectLivery.h:111
	BrnGui::HelpItem mHelpItemRestoreDefaultPaint;

	// BrnCarSelectLivery.cpp:82
	extern const char[19] KAC_HELPITEM_RESTORE;

	// BrnCarSelectLivery.cpp:86
	extern const char[13] KAC_ONLINE_COUNTDOWN_NAME;

	// BrnCarSelectLivery.h:116
	BrnGui::CarSelectOnlineCountdown mOnlineCountdown;

	// BrnCarSelectLivery.cpp:87
	extern const char[15] KAC_ONLINE_PLAYER_LIST;

	// BrnCarSelectLivery.h:119
	BrnGui::CarSelectOnlinePlayerList mOnlinePlayerList;

	// BrnCarSelectLivery.h:121
	BrnGui::AnimationComponent mFadeScreenAnimComponent;

	// BrnCarSelectLivery.cpp:77
	extern const char[13] macFadeScreenAnimComponentName;

	// BrnCarSelectLivery.h:123
	bool mbFadeScreenPending;

	// BrnCarSelectLivery.h:125
	BrnGui::AnimationComponent mHelpBarAnimComponent;

	// BrnCarSelectLivery.cpp:79
	extern const char[16] macHelpBarAnimComponentName;

	// BrnCarSelectLivery.h:127
	int32_t mHelpBarButtonCount;

	// BrnCarSelectLivery.h:129
	CgsID[8] maUnlockedLiveryCars;

	// BrnCarSelectLivery.h:130
	uint32_t muNumUnlockedLiveryCars;

	// BrnCarSelectLivery.cpp:33
	extern sResourceTuple[6] maResourcesToLoad;

	// BrnCarSelectLivery.cpp:43
	extern const uint32_t muNumResourcesToLoad = 6;

	// BrnCarSelectLivery.cpp:46
	extern const int32_t[11] maiEventToObserve;

	// BrnCarSelectLivery.cpp:63
	extern const int32_t miNumEventsObserved = 11;

	// BrnCarSelectLivery.cpp:65
	extern const char * mpacCarSelectorName;

	// BrnCarSelectLivery.h:137
	BrnGui::TextSelection mCarSelector;

	// BrnCarSelectLivery.h:138
	bool mbFirstFrame;

	// BrnCarSelectLivery.h:139
	bool mbFirstUpdateComponentsFrame;

	// BrnCarSelectLivery.h:140
	bool mbDisableCarModifyInteraction;

	// BrnCarSelectLivery.h:141
	bool mbExiting;

public:
	// BrnCarSelectLivery.cpp:105
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCarSelectLivery.cpp:120
	// Declaration
	virtual void OnEnter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectLivery.cpp:124
		using namespace CgsDev::Message;

	}

	// BrnCarSelectLivery.cpp:167
	virtual void OnLeave();

	// BrnCarSelectLivery.cpp:191
	virtual void Update();

private:
	// BrnCarSelectLivery.cpp:426
	virtual void PlayMovie();

	// BrnCarSelectLivery.cpp:442
	virtual void AppendAptComponents();

	// BrnCarSelectLivery.cpp:462
	virtual void SetupComponents();

	// BrnCarSelectLivery.cpp:611
	void SetupPaintColourToggle(int32_t, bool);

	// BrnCarSelectLivery.cpp:275
	void UpdateComponents();

	// BrnCarSelectLivery.cpp:402
	virtual void SetupCar(const CarSetupInfo *);

	// BrnCarSelectLivery.cpp:672
	// Declaration
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectLivery.cpp:861
		using namespace CgsDev::Message;

	}

	// BrnCarSelectLivery.cpp:927
	virtual void HandleCarInfoResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectLivery.cpp:961
	virtual void HandleCarAudioLoadComplete();

	// BrnCarSelectLivery.cpp:1002
	virtual void HandlePlayerInfoResponse(const CgsModule::Event *, int32_t);

	// BrnCarSelectLivery.cpp:1031
	virtual void HandleUnlockedLiveryResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectLivery.cpp:1066
	virtual void HandlePlayerCarColourResponseEvent(const CgsModule::Event *, int32_t);

	// BrnCarSelectLivery.cpp:1221
	virtual bool IsLoading() const;

	// BrnCarSelectLivery.cpp:1121
	void HandleAptTrigger(const GuiEventAptTrigger *);

	// BrnCarSelectLivery.cpp:974
	virtual sResourceTuple * GetResourcesToLoad() const;

	// BrnCarSelectLivery.cpp:987
	virtual uint32_t GetNumberResourcesToLoad() const;

	// BrnCarSelectLivery.cpp:1097
	void SendPlayerCarColourEvent();

	// BrnCarSelectLivery.cpp:1155
	void HandleLobbyPlayerList(const GuiEventNetworkLobbyPlayerList *);

	// BrnCarSelectLivery.cpp:384
	void UpdateMenuComponents();

	// BrnCarSelectLivery.cpp:1203
	void TriggerSound(AttribSys::Enums::PresentationAction::PresentationAction);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectLivery {
	public:
		CarSelectLivery();

	private:
		// BrnCarSelectLivery.h:106
		extern char[] KAC_OPTION_NAME;

		// BrnCarSelectLivery.h:107
		extern char[] KAC_PAINT_COLOUR_OPTION_NAME;

		// BrnCarSelectLivery.h:109
		extern const uint32_t KI_MAX_LIVERIES_PER_MODEL;

		// BrnCarSelectLivery.h:112
		extern char[] KAC_HELPITEM_RESTORE;

		// BrnCarSelectLivery.h:115
		extern char[] KAC_ONLINE_COUNTDOWN_NAME;

		// BrnCarSelectLivery.h:118
		extern char[] KAC_ONLINE_PLAYER_LIST;

		// BrnCarSelectLivery.h:122
		extern char[] macFadeScreenAnimComponentName;

		// BrnCarSelectLivery.h:126
		extern char[] macHelpBarAnimComponentName;

		// BrnCarSelectLivery.h:133
		extern const uint32_t muNumResourcesToLoad;

		// BrnCarSelectLivery.h:134
		extern int32_t[] maiEventToObserve;

		// BrnCarSelectLivery.h:135
		extern const int32_t miNumEventsObserved;

	}

}

// BrnCarSelectLivery.h:52
void BrnGui::CarSelectLivery::CarSelectLivery() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

