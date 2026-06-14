// BrnOnlineLoading.h:95
extern int32_t[] maiEventToObserve;

// BrnOnlineLoading.h:96
extern const int32_t miNumEventsObserved;

// BrnOnlineLoading.h:97
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineLoading.h:98
extern const int32_t miNumResourcesToLoad;

// BrnOnlineLoading.h:100
extern const int32_t KI_COMPONENTS_TO_LOAD;

// BrnOnlineLoading.h:101
extern const float32_t KF_LOADING_SCREEN_UPDATE_TIMEOUT;

// BrnOnlineLoading.h:104
extern char[] KAC_PLAYER_TEMPLATE;

// BrnOnlineLoading.h:105
extern char[] KAC_ROUTE_INFO_NAME;

// BrnOnlineLoading.h:106
extern char[] KAC_ANIMATION_COMPONENT_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineLoading {
		// BrnOnlineLoading.h:75
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_LOADING_ROUTE_INFO = 2,
			E_SUBSTATE_MAIN = 3,
			E_SUBSTATE_WAIT_GAME_MODE_START = 4,
			E_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnOnlineLoading.h:48
struct BrnGui::OnlineLoading : public CgsGui::State {
private:
	// BrnOnlineLoading.cpp:30
	extern const int32_t[11] maiEventToObserve;

	// BrnOnlineLoading.cpp:46
	extern const int32_t miNumEventsObserved = 11;

	// BrnOnlineLoading.cpp:48
	extern const sResourceTuple[2] maResourceTuplesToLoad;

	// BrnOnlineLoading.cpp:54
	extern const int32_t miNumResourcesToLoad = 2;

	// BrnOnlineLoading.cpp:67
	extern const int32_t KI_COMPONENTS_TO_LOAD = 32;

	// BrnOnlineLoading.cpp:73
	extern const float32_t KF_LOADING_SCREEN_UPDATE_TIMEOUT;

	// BrnOnlineLoading.cpp:63
	extern const char[13] KAC_PLAYER_TEMPLATE;

	// BrnOnlineLoading.cpp:64
	extern const char[10] KAC_ROUTE_INFO_NAME;

	// BrnOnlineLoading.cpp:65
	extern const char[15] KAC_ANIMATION_COMPONENT_NAME;

	// BrnOnlineLoading.cpp:56
	extern const char *[2] KAPC_ANIMATION_STATES;

	// BrnOnlineLoading.h:111
	BrnGui::OnlineLoadingPlayer[8] maPlayer;

	// BrnOnlineLoading.h:112
	BrnGui::GuiNetworkRouteInfo mRouteInfoDisplay;

	// BrnOnlineLoading.h:113
	BrnGui::AnimationComponent mPlayerListHeadingComponent;

	// BrnOnlineLoading.h:116
	GuiEventNetworkLobbyPlayerList mLobbyPlayerInfoList;

	// BrnOnlineLoading.h:118
	BrnGui::OnlineLoading::ESubState meSubState;

	// BrnOnlineLoading.h:120
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineLoading.h:122
	int32_t miNumFilesToLoad;

	// BrnOnlineLoading.h:123
	int32_t miNumLoadedComponents;

	// BrnOnlineLoading.h:124
	int32_t miCurrentRoundDisplayed;

	// BrnOnlineLoading.h:126
	GuiEventNetworkGameParams mCurrentGameParams;

	// BrnOnlineLoading.h:128
	float32_t mfUpdateTimer;

	// BrnOnlineLoading.h:129
	bool mbDisconnected;

public:
	// BrnOnlineLoading.cpp:93
	virtual void OnEnter();

	// BrnOnlineLoading.cpp:309
	virtual void OnLeave();

	// BrnOnlineLoading.cpp:145
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineLoading.cpp:274
		using namespace CgsDev::Message;

	}

	// BrnOnlineLoading.h:66
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineLoading.cpp:646
	void SetupPlayerList();

	// BrnOnlineLoading.cpp:606
	void UpdatePlayerList();

	// BrnOnlineLoading.cpp:360
	void CheckForCompletedLoads();

	// BrnOnlineLoading.cpp:451
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineLoading.cpp:490
	void HandleAptTriggers(const GuiEventAptTrigger *);

	// BrnOnlineLoading.h:156
	void HandleControllerInput(const CgsModule::Event *);

	// BrnOnlineLoading.h:161
	void HandleControllerInputMainSubState(const GuiEventControllerInputPressed *);

	// BrnOnlineLoading.cpp:524
	void HandlePlayerLobbyListEvent(const CgsModule::Event *);

	// BrnOnlineLoading.cpp:555
	void HandleGameParamsChangedEvent(const CgsModule::Event *);

	// BrnOnlineLoading.cpp:583
	void HandleInviteFailed(const GuiEventInviteFailed *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineLoading {
	public:
		OnlineLoading();

	private:
		// BrnOnlineLoading.h:95
		extern int32_t[] maiEventToObserve;

		// BrnOnlineLoading.h:96
		extern const int32_t miNumEventsObserved;

		// BrnOnlineLoading.h:97
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineLoading.h:98
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineLoading.h:100
		extern const int32_t KI_COMPONENTS_TO_LOAD;

		// BrnOnlineLoading.h:101
		extern const float32_t KF_LOADING_SCREEN_UPDATE_TIMEOUT;

		// BrnOnlineLoading.h:104
		extern char[] KAC_PLAYER_TEMPLATE;

		// BrnOnlineLoading.h:105
		extern char[] KAC_ROUTE_INFO_NAME;

		// BrnOnlineLoading.h:106
		extern char[] KAC_ANIMATION_COMPONENT_NAME;

	}

}

// BrnOnlineLoading.h:48
void BrnGui::OnlineLoading::OnlineLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

