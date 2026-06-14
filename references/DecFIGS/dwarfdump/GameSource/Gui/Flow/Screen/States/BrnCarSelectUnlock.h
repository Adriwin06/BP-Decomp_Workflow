// BrnCarSelectUnlock.h:85
extern int32_t[] maiEventToObserve;

// BrnCarSelectUnlock.h:86
extern const int32_t miNumEventsObserved;

// BrnCarSelectUnlock.h:88
extern const uint32_t muNumResourcesToLoad;

// BrnCarSelectUnlock.h:92
extern char[] KAC_MANUFACTURER_LOGO;

// BrnCarSelectUnlock.h:95
extern char[] KAC_CAR_NAME;

// BrnCarSelectUnlock.h:98
extern char[] macAnimComponentName;

// BrnCarSelectUnlock.h:104
extern char[] KAC_HELPITEM_CONTINUE;

// BrnCarSelectUnlock.h:106
extern char[] macHelpPromptAnimComponentName;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CarSelectUnlock {
		// BrnCarSelectUnlock.h:71
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADRESOURCES = 1,
			E_INTERNALSTATE_WFINIT = 2,
			E_INTERNALSTATE_RUNNING = 3,
			E_INTERNALSTATE_LEFT = 4,
			E_INTERNALSTATE_COUNT = 5,
		}

	}

}

// BrnCarSelectUnlock.h:47
struct BrnGui::CarSelectUnlock : public CgsGui::State {
private:
	// BrnCarSelectUnlock.h:82
	BrnGui::GuiCache * mpGuiCache;

	// BrnCarSelectUnlock.h:83
	BrnGui::CarSelectUnlock::InternalState meInternalState;

	// BrnCarSelectUnlock.cpp:26
	extern const int32_t[6] maiEventToObserve;

	// BrnCarSelectUnlock.cpp:36
	extern const int32_t miNumEventsObserved = 6;

	// BrnCarSelectUnlock.cpp:44
	extern const uint32_t muNumResourcesToLoad = 2;

	// BrnCarSelectUnlock.cpp:38
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnCarSelectUnlock.h:91
	BrnGui::ManufacturersIcon mManufacturerLogo;

	// BrnCarSelectUnlock.cpp:46
	extern const char[20] KAC_MANUFACTURER_LOGO;

	// BrnCarSelectUnlock.h:94
	BrnGui::TextField mCarName;

	// BrnCarSelectUnlock.cpp:47
	extern const char[11] KAC_CAR_NAME;

	// BrnCarSelectUnlock.h:97
	BrnGui::AnimationComponent mAnimComponent;

	// BrnCarSelectUnlock.cpp:53
	extern const char[13] macAnimComponentName;

	// BrnCarSelectUnlock.h:99
	float mrTimeScreenVisible;

	// BrnCarSelectUnlock.h:100
	bool mbTickerVisible;

	// BrnCarSelectUnlock.h:102
	bool mHelpPromptVisible;

	// BrnCarSelectUnlock.h:103
	BrnGui::HelpItem mHelpItemContinue;

	// BrnCarSelectUnlock.cpp:48
	extern const char[20] KAC_HELPITEM_CONTINUE;

	// BrnCarSelectUnlock.h:105
	BrnGui::AnimationComponent mHelpPromptAnimComponent;

	// BrnCarSelectUnlock.cpp:50
	extern const char[15] macHelpPromptAnimComponentName;

public:
	// BrnCarSelectUnlock.cpp:74
	virtual void OnEnter();

	// BrnCarSelectUnlock.cpp:182
	virtual void OnLeave();

	// BrnCarSelectUnlock.cpp:115
	virtual void Update();

	// BrnCarSelectUnlock.cpp:248
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCarSelectUnlock.cpp:209
	void UpdateGetCache();

	// BrnCarSelectUnlock.cpp:268
	bool UpdateLoadResources();

	// BrnCarSelectUnlock.cpp:315
	bool UpdateWFInit();

	// BrnCarSelectUnlock.cpp:335
	void UpdateRunning();

	// BrnCarSelectUnlock.cpp:297
	void PlayMovie();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectUnlock {
	public:
		CarSelectUnlock();

	private:
		// BrnCarSelectUnlock.h:85
		extern int32_t[] maiEventToObserve;

		// BrnCarSelectUnlock.h:86
		extern const int32_t miNumEventsObserved;

		// BrnCarSelectUnlock.h:88
		extern const uint32_t muNumResourcesToLoad;

		// BrnCarSelectUnlock.h:92
		extern char[] KAC_MANUFACTURER_LOGO;

		// BrnCarSelectUnlock.h:95
		extern char[] KAC_CAR_NAME;

		// BrnCarSelectUnlock.h:98
		extern char[] macAnimComponentName;

		// BrnCarSelectUnlock.h:104
		extern char[] KAC_HELPITEM_CONTINUE;

		// BrnCarSelectUnlock.h:106
		extern char[] macHelpPromptAnimComponentName;

	}

}

// BrnCarSelectUnlock.h:47
void BrnGui::CarSelectUnlock::CarSelectUnlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

