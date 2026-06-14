// BrnOfflineRivalShutdown.h:134
extern sResourceTuple[] maResourcesToLoad;

// BrnOfflineRivalShutdown.h:135
extern const uint32_t muNumResourcesToLoad;

// BrnOfflineRivalShutdown.h:137
extern int32_t[] maiEventToObserve;

// BrnOfflineRivalShutdown.h:138
extern const int32_t miNumEventsObserved;

// BrnOfflineRivalShutdown.h:146
extern char[] KAC_STATE_CPT_NAME;

// BrnOfflineRivalShutdown.h:148
extern char[] KAC_SCREENANIM_NAME;

// BrnOfflineRivalShutdown.h:153
extern char[] KAC_SHUTDOWNCAR_COMPNAME;

// BrnOfflineRivalShutdown.h:159
extern char[] KAC_MANU_ICON_NAME;

// BrnOfflineRivalShutdown.h:162
extern char[] KAC_CONGRATTEXT_CAR_NAME;

// BrnOfflineRivalShutdown.h:165
extern char[] KAC_CONGRATTEXT_DESC_NAME;

// BrnOfflineRivalShutdown.h:169
extern const float32_t KF_SCREEN_DISPLAY_TIME;

// BrnOfflineRivalShutdown.h:170
extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OfflineRivalShutdown {
		// BrnOfflineRivalShutdown.h:77
		enum EOfflineRivalShutdownState {
			E_OFFLINERIVALSHUTDOWNSTATE_NONE = 0,
			E_OFFLINERIVALSHUTDOWNSTATE_LOADINGRESOURCES = 1,
			E_OFFLINERIVALSHUTDOWNSTATE_WAITINGFORCOMPONENTS = 2,
			E_OFFLINERIVALSHUTDOWNSTATE_RUNNING = 3,
			E_OFFLINERIVALSHUTDOWNSTATE_WAITING_FOR_FADEOUT_TEXT = 4,
			E_OFFLINERIVALSHUTDOWNSTATE_SET_NEW_TEXT = 5,
			E_OFFLINERIVALSHUTDOWNSTATE_SHOWING_NEW_TEXT = 6,
			E_OFFLINERIVALSHUTDOWNSTATE_WAITING_FOR_TRANSOUT = 7,
			E_OFFLINERIVALSHUTDOWNSTATE_TRANSOUT_COMPLETE = 8,
			E_OFFLINERIVALSHUTDOWNSTATE_FINISH = 9,
			E_OFFLINERIVALSHUTDOWNSTATE_COUNT = 10,
		}

	}

}

// BrnOfflineRivalShutdown.h:46
struct BrnGui::OfflineRivalShutdown : public CgsGui::State {
private:
	// BrnOfflineRivalShutdown.cpp:32
	extern sResourceTuple[4] maResourcesToLoad;

	// BrnOfflineRivalShutdown.cpp:40
	extern const uint32_t muNumResourcesToLoad = 4;

	// BrnOfflineRivalShutdown.cpp:43
	extern const int32_t[5] maiEventToObserve;

	// BrnOfflineRivalShutdown.cpp:52
	extern const int32_t miNumEventsObserved = 5;

	// BrnOfflineRivalShutdown.h:140
	BrnGui::OfflineRivalShutdown::EOfflineRivalShutdownState meOfflineRivalShutdownState;

	// BrnOfflineRivalShutdown.h:142
	Profile * mpProfile;

	// BrnOfflineRivalShutdown.h:143
	BrnGui::GuiCache * mpGuiCache;

	// BrnOfflineRivalShutdown.cpp:55
	extern const char[14] KAC_STATE_CPT_NAME;

	// BrnOfflineRivalShutdown.cpp:57
	extern const char[15] KAC_SCREENANIM_NAME;

	// BrnOfflineRivalShutdown.h:150
	BrnGui::AnimationComponent mScreenAnim;

	// BrnOfflineRivalShutdown.h:152
	BrnGui::LargeCarComponent mShutdownCarComponent;

	// BrnOfflineRivalShutdown.cpp:59
	extern const char[13] KAC_SHUTDOWNCAR_COMPNAME;

	// BrnOfflineRivalShutdown.h:158
	BrnGui::ManufacturersIcon mManufacturerIcon;

	// BrnOfflineRivalShutdown.cpp:62
	extern const char[20] KAC_MANU_ICON_NAME;

	// BrnOfflineRivalShutdown.h:161
	BrnGui::TextField mCongratTextCar;

	// BrnOfflineRivalShutdown.cpp:63
	extern const char[19] KAC_CONGRATTEXT_CAR_NAME;

	// BrnOfflineRivalShutdown.h:164
	BrnGui::TextField mCongratTextDesc;

	// BrnOfflineRivalShutdown.cpp:64
	extern const char[20] KAC_CONGRATTEXT_DESC_NAME;

	// BrnOfflineRivalShutdown.h:167
	float32_t mfScreenStartTime;

	// BrnOfflineRivalShutdown.h:168
	float32_t mfNewTextStartTime;

	// BrnOfflineRivalShutdown.cpp:66
	extern const float32_t KF_SCREEN_DISPLAY_TIME;

	// BrnOfflineRivalShutdown.cpp:67
	extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

public:
	// BrnOfflineRivalShutdown.cpp:86
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnOfflineRivalShutdown.cpp:104
	virtual void OnEnter();

	// BrnOfflineRivalShutdown.cpp:135
	virtual void OnLeave();

	// BrnOfflineRivalShutdown.cpp:168
	virtual void Update();

	// BrnOfflineRivalShutdown.h:69
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOfflineRivalShutdown.cpp:301
	void HandleIncomingEvents();

	// BrnOfflineRivalShutdown.cpp:372
	void AppendExpectedComponents();

	// BrnOfflineRivalShutdown.cpp:392
	void SetupComponents();

	// BrnOfflineRivalShutdown.cpp:475
	void HandleAptTriggers(const GuiEventAptTrigger *);

	// BrnOfflineRivalShutdown.cpp:525
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t);

	// BrnOfflineRivalShutdown.cpp:556
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOfflineRivalShutdown.h:123
	void UpdateComponents();

	// BrnOfflineRivalShutdown.h:127
	void SetupMenuComponents();

	// BrnOfflineRivalShutdown.h:131
	void HandleAptTrigger(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OfflineRivalShutdown {
	public:
		OfflineRivalShutdown();

	private:
		// BrnOfflineRivalShutdown.h:134
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOfflineRivalShutdown.h:135
		extern const uint32_t muNumResourcesToLoad;

		// BrnOfflineRivalShutdown.h:137
		extern int32_t[] maiEventToObserve;

		// BrnOfflineRivalShutdown.h:138
		extern const int32_t miNumEventsObserved;

		// BrnOfflineRivalShutdown.h:146
		extern char[] KAC_STATE_CPT_NAME;

		// BrnOfflineRivalShutdown.h:148
		extern char[] KAC_SCREENANIM_NAME;

		// BrnOfflineRivalShutdown.h:153
		extern char[] KAC_SHUTDOWNCAR_COMPNAME;

		// BrnOfflineRivalShutdown.h:159
		extern char[] KAC_MANU_ICON_NAME;

		// BrnOfflineRivalShutdown.h:162
		extern char[] KAC_CONGRATTEXT_CAR_NAME;

		// BrnOfflineRivalShutdown.h:165
		extern char[] KAC_CONGRATTEXT_DESC_NAME;

		// BrnOfflineRivalShutdown.h:169
		extern const float32_t KF_SCREEN_DISPLAY_TIME;

		// BrnOfflineRivalShutdown.h:170
		extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

	}

}

// BrnOfflineRivalShutdown.h:46
void BrnGui::OfflineRivalShutdown::OfflineRivalShutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

