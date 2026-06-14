// BrnOfflineTrophyCarUnlock.h:134
extern sResourceTuple[] maResourcesToLoad;

// BrnOfflineTrophyCarUnlock.h:135
extern const uint32_t muNumResourcesToLoad;

// BrnOfflineTrophyCarUnlock.h:137
extern int32_t[] maiEventToObserve;

// BrnOfflineTrophyCarUnlock.h:138
extern const int32_t miNumEventsObserved;

// BrnOfflineTrophyCarUnlock.h:146
extern char[] KAC_STATE_CPT_NAME;

// BrnOfflineTrophyCarUnlock.h:148
extern char[] KAC_SCREENANIM_NAME;

// BrnOfflineTrophyCarUnlock.h:153
extern char[] KAC_SHUTDOWNCAR_COMPNAME;

// BrnOfflineTrophyCarUnlock.h:159
extern char[] KAC_MANU_ICON_NAME;

// BrnOfflineTrophyCarUnlock.h:162
extern char[] KAC_CONGRATTEXT_CAR_NAME;

// BrnOfflineTrophyCarUnlock.h:165
extern char[] KAC_CONGRATTEXT_DESC_NAME;

// BrnOfflineTrophyCarUnlock.h:169
extern const float32_t KF_SCREEN_DISPLAY_TIME;

// BrnOfflineTrophyCarUnlock.h:170
extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OfflineTrophyCarUnlock {
		// BrnOfflineTrophyCarUnlock.h:77
		enum EOfflineTrophyCarUnlockState {
			E_OFFLINETROPHYCARUNLOCKSTATE_NONE = 0,
			E_OFFLINETROPHYCARUNLOCKSTATE_LOADINGRESOURCES = 1,
			E_OFFLINETROPHYCARUNLOCKSTATE_WAITINGFORCOMPONENTS = 2,
			E_OFFLINETROPHYCARUNLOCKSTATE_RUNNING = 3,
			E_OFFLINETROPHYCARUNLOCKSTATE_WAITING_FOR_FADEOUT_TEXT = 4,
			E_OFFLINETROPHYCARUNLOCKSTATE_SET_NEW_TEXT = 5,
			E_OFFLINETROPHYCARUNLOCKSTATE_SHOWING_NEW_TEXT = 6,
			E_OFFLINETROPHYCARUNLOCKSTATE_WAITING_FOR_TRANSOUT = 7,
			E_OFFLINETROPHYCARUNLOCKSTATE_TRANSOUT_COMPLETE = 8,
			E_OFFLINETROPHYCARUNLOCKSTATE_FINISH = 9,
			E_OFFLINETROPHYCARUNLOCKSTATE_COUNT = 10,
		}

	}

}

// BrnOfflineTrophyCarUnlock.h:46
struct BrnGui::OfflineTrophyCarUnlock : public CgsGui::State {
private:
	// BrnOfflineTrophyCarUnlock.cpp:32
	extern sResourceTuple[4] maResourcesToLoad;

	// BrnOfflineTrophyCarUnlock.cpp:40
	extern const uint32_t muNumResourcesToLoad = 4;

	// BrnOfflineTrophyCarUnlock.cpp:43
	extern const int32_t[6] maiEventToObserve;

	// BrnOfflineTrophyCarUnlock.cpp:53
	extern const int32_t miNumEventsObserved = 6;

	// BrnOfflineTrophyCarUnlock.h:140
	BrnGui::OfflineTrophyCarUnlock::EOfflineTrophyCarUnlockState meOfflineTrophyCarUnlockState;

	// BrnOfflineTrophyCarUnlock.h:142
	Profile * mpProfile;

	// BrnOfflineTrophyCarUnlock.h:143
	BrnGui::GuiCache * mpGuiCache;

	// BrnOfflineTrophyCarUnlock.cpp:56
	extern const char[14] KAC_STATE_CPT_NAME;

	// BrnOfflineTrophyCarUnlock.cpp:58
	extern const char[15] KAC_SCREENANIM_NAME;

	// BrnOfflineTrophyCarUnlock.h:150
	BrnGui::AnimationComponent mScreenAnim;

	// BrnOfflineTrophyCarUnlock.h:152
	BrnGui::LargeCarComponent mTrophyCarComponent;

	// BrnOfflineTrophyCarUnlock.cpp:60
	extern const char[19] KAC_SHUTDOWNCAR_COMPNAME;

	// BrnOfflineTrophyCarUnlock.h:158
	BrnGui::ManufacturersIcon mManufacturerIcon;

	// BrnOfflineTrophyCarUnlock.cpp:63
	extern const char[20] KAC_MANU_ICON_NAME;

	// BrnOfflineTrophyCarUnlock.h:161
	BrnGui::TextField mCongratTextCar;

	// BrnOfflineTrophyCarUnlock.cpp:64
	extern const char[19] KAC_CONGRATTEXT_CAR_NAME;

	// BrnOfflineTrophyCarUnlock.h:164
	BrnGui::TextField mCongratTextDesc;

	// BrnOfflineTrophyCarUnlock.cpp:65
	extern const char[20] KAC_CONGRATTEXT_DESC_NAME;

	// BrnOfflineTrophyCarUnlock.h:167
	float32_t mfScreenStartTime;

	// BrnOfflineTrophyCarUnlock.h:168
	float32_t mfNewTextStartTime;

	// BrnOfflineTrophyCarUnlock.cpp:67
	extern const float32_t KF_SCREEN_DISPLAY_TIME;

	// BrnOfflineTrophyCarUnlock.cpp:68
	extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

public:
	// BrnOfflineTrophyCarUnlock.cpp:87
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnOfflineTrophyCarUnlock.cpp:106
	virtual void OnEnter();

	// BrnOfflineTrophyCarUnlock.cpp:143
	virtual void OnLeave();

	// BrnOfflineTrophyCarUnlock.cpp:183
	virtual void Update();

	// BrnOfflineTrophyCarUnlock.h:69
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOfflineTrophyCarUnlock.cpp:316
	void HandleIncomingEvents();

	// BrnOfflineTrophyCarUnlock.cpp:399
	void AppendExpectedComponents();

	// BrnOfflineTrophyCarUnlock.cpp:419
	void SetupComponents();

	// BrnOfflineTrophyCarUnlock.cpp:471
	void HandleAptTriggers(const GuiEventAptTrigger *);

	// BrnOfflineTrophyCarUnlock.cpp:521
	virtual void HandleControllerInput(const CgsModule::Event *, int32_t);

	// BrnOfflineTrophyCarUnlock.cpp:552
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOfflineTrophyCarUnlock.h:123
	void UpdateComponents();

	// BrnOfflineTrophyCarUnlock.h:127
	void SetupMenuComponents();

	// BrnOfflineTrophyCarUnlock.h:131
	void HandleAptTrigger(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OfflineTrophyCarUnlock {
	public:
		OfflineTrophyCarUnlock();

	private:
		// BrnOfflineTrophyCarUnlock.h:134
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOfflineTrophyCarUnlock.h:135
		extern const uint32_t muNumResourcesToLoad;

		// BrnOfflineTrophyCarUnlock.h:137
		extern int32_t[] maiEventToObserve;

		// BrnOfflineTrophyCarUnlock.h:138
		extern const int32_t miNumEventsObserved;

		// BrnOfflineTrophyCarUnlock.h:146
		extern char[] KAC_STATE_CPT_NAME;

		// BrnOfflineTrophyCarUnlock.h:148
		extern char[] KAC_SCREENANIM_NAME;

		// BrnOfflineTrophyCarUnlock.h:153
		extern char[] KAC_SHUTDOWNCAR_COMPNAME;

		// BrnOfflineTrophyCarUnlock.h:159
		extern char[] KAC_MANU_ICON_NAME;

		// BrnOfflineTrophyCarUnlock.h:162
		extern char[] KAC_CONGRATTEXT_CAR_NAME;

		// BrnOfflineTrophyCarUnlock.h:165
		extern char[] KAC_CONGRATTEXT_DESC_NAME;

		// BrnOfflineTrophyCarUnlock.h:169
		extern const float32_t KF_SCREEN_DISPLAY_TIME;

		// BrnOfflineTrophyCarUnlock.h:170
		extern const float32_t KF_NEWTEXT_DISPLAY_TIME;

	}

}

// BrnOfflineTrophyCarUnlock.h:46
void BrnGui::OfflineTrophyCarUnlock::OfflineTrophyCarUnlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

