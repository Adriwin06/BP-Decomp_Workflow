// BrnOnlineCreateFreeburn.h:114
extern int32_t[] maiEventToObserve;

// BrnOnlineCreateFreeburn.h:115
extern const int32_t miNumEventsObserved;

// BrnOnlineCreateFreeburn.h:116
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineCreateFreeburn.h:117
extern const int32_t miNumResourcesToLoad;

// BrnOnlineCreateFreeburn.h:119
extern char[] KAC_CREATE_FREEBURN_TOGGLE_COMPONENT;

// BrnOnlineCreateFreeburn.h:122
extern char[] KAC_CREATE_FREEBURN_SECURITY_TITLE_STRING_ID;

// BrnOnlineCreateFreeburn.h:125
extern char[] KAC_CREATE_FREEBURN_RANKED_TITLE_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineCreateFreeburn {
		// BrnOnlineCreateFreeburn.h:77
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_WAIT_IN_GAME = 3,
			E_SUBSTATE_COUNT = 4,
		}

	}

}

// BrnOnlineCreateFreeburn.h:47
struct BrnGui::OnlineCreateFreeburn : public CgsGui::State {
private:
	// BrnOnlineCreateFreeburn.h:112
	extern const int32_t KI_MAX_CREATE_FREEBURN_OPTIONS = 2;

	// BrnOnlineCreateFreeburn.cpp:30
	extern const int32_t[7] maiEventToObserve;

	// BrnOnlineCreateFreeburn.cpp:41
	extern const int32_t miNumEventsObserved = 7;

	// BrnOnlineCreateFreeburn.cpp:43
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnOnlineCreateFreeburn.cpp:49
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnOnlineCreateFreeburn.cpp:51
	extern const char[17] KAC_CREATE_FREEBURN_TOGGLE_COMPONENT;

	// BrnOnlineCreateFreeburn.cpp:53
	extern const char[29] KAC_CREATE_FREEBURN_SECURITY_TITLE_STRING_ID;

	// BrnOnlineCreateFreeburn.cpp:54
	extern const char *[2] KAPC_CREATE_FREEBURN_SECURITY_OPTION_STRING_IDS;

	// BrnOnlineCreateFreeburn.cpp:60
	extern const char[27] KAC_CREATE_FREEBURN_RANKED_TITLE_STRING_ID;

	// BrnOnlineCreateFreeburn.cpp:61
	extern const char *[2] KAPC_CREATE_FREEBURN_RANKED_OPTION_STRING_IDS;

	// BrnOnlineCreateFreeburn.h:128
	BrnGui::OnlineCreateFreeburn::ESubState meSubState;

	// BrnOnlineCreateFreeburn.h:130
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnOnlineCreateFreeburn.cpp:84
	virtual void OnEnter();

	// BrnOnlineCreateFreeburn.cpp:197
	virtual void OnLeave();

	// BrnOnlineCreateFreeburn.cpp:113
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineCreateFreeburn.cpp:172
		using namespace CgsDev::Message;

	}

	// BrnOnlineCreateFreeburn.h:65
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnOnlineCreateFreeburn.h:72
	const char * GetCurrentlySelectedGame();

private:
	// BrnOnlineCreateFreeburn.cpp:292
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineCreateFreeburn.cpp:306
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineCreateFreeburn.cpp:330
	void HandleInGameEvent(const CgsModule::Event *);

	// BrnOnlineCreateFreeburn.cpp:356
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlineCreateFreeburn.cpp:217
	void CheckForCompletedLoads();

	// BrnOnlineCreateFreeburn.cpp:371
	bool CheckPrivileges();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineCreateFreeburn {
	public:
		OnlineCreateFreeburn();

	private:
		// BrnOnlineCreateFreeburn.h:114
		extern int32_t[] maiEventToObserve;

		// BrnOnlineCreateFreeburn.h:115
		extern const int32_t miNumEventsObserved;

		// BrnOnlineCreateFreeburn.h:116
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineCreateFreeburn.h:117
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineCreateFreeburn.h:119
		extern char[] KAC_CREATE_FREEBURN_TOGGLE_COMPONENT;

		// BrnOnlineCreateFreeburn.h:122
		extern char[] KAC_CREATE_FREEBURN_SECURITY_TITLE_STRING_ID;

		// BrnOnlineCreateFreeburn.h:125
		extern char[] KAC_CREATE_FREEBURN_RANKED_TITLE_STRING_ID;

	}

}

// BrnOnlineCreateFreeburn.h:47
void BrnGui::OnlineCreateFreeburn::OnlineCreateFreeburn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

