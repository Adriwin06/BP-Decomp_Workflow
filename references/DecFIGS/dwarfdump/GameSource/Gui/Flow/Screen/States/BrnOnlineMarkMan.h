// BrnOnlineMarkMan.h:88
extern int32_t[] maiEventToObserve;

// BrnOnlineMarkMan.h:89
extern const int32_t miNumEventsObserved;

// BrnOnlineMarkMan.h:91
extern sResourceTuple[] maResourcesToLoad;

// BrnOnlineMarkMan.h:92
extern const uint32_t muNumResourcesToLoad;

// BrnOnlineMarkMan.h:94
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 9;

// BrnOnlineMarkMan.h:98
extern char[] KAC_TIME_FIELD_NAME;

// BrnOnlineMarkMan.h:101
extern char[] KAC_TIME_FIELD_ICON;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineMarkMan {
		// BrnOnlineMarkMan.h:73
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADRESOURCES = 1,
			E_INTERNALSTATE_WFINIT = 2,
			E_INTERNALSTATE_SETUP = 3,
			E_INTERNALSTATE_SYNCING = 4,
			E_INTERNALSTATE_LEFT = 5,
			E_INTERNALSTATE_COUNT = 6,
		}

	}

}

// BrnOnlineMarkMan.h:46
struct BrnGui::OnlineMarkMan : public CgsGui::State {
private:
	// BrnOnlineMarkMan.h:85
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineMarkMan.h:86
	BrnGui::OnlineMarkMan::InternalState meInternalState;

	// BrnOnlineMarkMan.cpp:26
	extern const int32_t[5] maiEventToObserve;

	// BrnOnlineMarkMan.cpp:36
	extern const int32_t miNumEventsObserved = 5;

	// BrnOnlineMarkMan.cpp:38
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnOnlineMarkMan.cpp:43
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnOnlineMarkMan.h:94
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 9;

	// BrnOnlineMarkMan.h:95
	uint32_t[9] mauExpectedComponentIds;

	// BrnOnlineMarkMan.h:96
	uint32_t muNumExpectedComponents;

	// BrnOnlineMarkMan.cpp:45
	extern const char[15] KAC_TIME_FIELD_NAME;

	// BrnOnlineMarkMan.h:99
	BrnGui::TextField mTimeField;

	// BrnOnlineMarkMan.cpp:46
	extern const char[19] KAC_TIME_FIELD_ICON;

	// BrnOnlineMarkMan.h:102
	BrnGui::IconComponent mTimeFieldIcon;

public:
	// BrnOnlineMarkMan.cpp:65
	virtual void OnEnter();

	// BrnOnlineMarkMan.cpp:168
	virtual void OnLeave();

	// BrnOnlineMarkMan.cpp:90
	virtual void Update();

	// BrnOnlineMarkMan.h:64
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineMarkMan.cpp:190
	void UpdateGetCache();

	// BrnOnlineMarkMan.cpp:228
	bool UpdateLoadResources();

	// BrnOnlineMarkMan.cpp:259
	bool UpdateWFInit();

	// BrnOnlineMarkMan.cpp:281
	void UpdateSetup();

	// BrnOnlineMarkMan.cpp:298
	bool UpdateSyncing();

	// BrnOnlineMarkMan.cpp:327
	void UpdatePermanent();

	// BrnOnlineMarkMan.h:168
	void SetExpectedComponent(const char *);

	// BrnOnlineMarkMan.cpp:464
	void SetExpectedAptComponentList();

	// BrnOnlineMarkMan.h:185
	void ClearExpectedComponent();

	// BrnOnlineMarkMan.cpp:410
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOnlineMarkMan.cpp:425
	void HandleAptTriggers(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineMarkMan {
	public:
		OnlineMarkMan();

	private:
		// BrnOnlineMarkMan.h:88
		extern int32_t[] maiEventToObserve;

		// BrnOnlineMarkMan.h:89
		extern const int32_t miNumEventsObserved;

		// BrnOnlineMarkMan.h:91
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOnlineMarkMan.h:92
		extern const uint32_t muNumResourcesToLoad;

		// BrnOnlineMarkMan.h:94
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 9;

		// BrnOnlineMarkMan.h:98
		extern char[] KAC_TIME_FIELD_NAME;

		// BrnOnlineMarkMan.h:101
		extern char[] KAC_TIME_FIELD_ICON;

	}

}

// BrnOnlineMarkMan.h:46
void BrnGui::OnlineMarkMan::OnlineMarkMan() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

