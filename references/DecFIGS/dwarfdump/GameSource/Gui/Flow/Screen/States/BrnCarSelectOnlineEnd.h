// BrnCarSelectOnlineEnd.h:84
extern int32_t[] maiEventToObserve;

// BrnCarSelectOnlineEnd.h:85
extern const int32_t miNumEventsObserved;

// BrnCarSelectOnlineEnd.h:87
extern sResourceTuple[] maResourcesToLoad;

// BrnCarSelectOnlineEnd.h:88
extern const uint32_t muNumResourcesToLoad;

// BrnCarSelectOnlineEnd.h:91
extern char[] KAC_ONLINE_COUNTDOWN_NAME;

// BrnCarSelectOnlineEnd.h:94
extern char[] KAC_ONLINE_PLAYER_LIST;

// BrnCarSelectOnlineEnd.h:102
extern char[] KAC_HOST_CHOOSING_ANIMATOR_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlineEnd {
		// BrnCarSelectOnlineEnd.h:71
		enum InternalState {
			E_INTERNALSTATE_LOADRESOURCES = 0,
			E_INTERNALSTATE_WFINIT = 1,
			E_INTERNALSTATE_RUNNING = 2,
			E_INTERNALSTATE_LEFT = 3,
			E_INTERNALSTATE_COUNT = 4,
		}

	}

}

// BrnCarSelectOnlineEnd.h:44
struct BrnGui::CarSelectOnlineEnd : public CgsGui::State {
private:
	// BrnCarSelectOnlineEnd.h:81
	BrnGui::GuiCache * mpGuiCache;

	// BrnCarSelectOnlineEnd.h:82
	BrnGui::CarSelectOnlineEnd::InternalState meInternalState;

	// BrnCarSelectOnlineEnd.cpp:26
	extern const int32_t[6] maiEventToObserve;

	// BrnCarSelectOnlineEnd.cpp:37
	extern const int32_t miNumEventsObserved = 6;

	// BrnCarSelectOnlineEnd.cpp:39
	extern const sResourceTuple[2] maResourcesToLoad;

	// BrnCarSelectOnlineEnd.cpp:45
	extern const uint32_t muNumResourcesToLoad = 2;

	// BrnCarSelectOnlineEnd.cpp:47
	extern const char[13] KAC_ONLINE_COUNTDOWN_NAME;

	// BrnCarSelectOnlineEnd.h:92
	BrnGui::CarSelectOnlineCountdown mOnlineCountdown;

	// BrnCarSelectOnlineEnd.cpp:48
	extern const char[15] KAC_ONLINE_PLAYER_LIST;

	// BrnCarSelectOnlineEnd.h:95
	BrnGui::CarSelectOnlinePlayerList mOnlinePlayerList;

	// BrnCarSelectOnlineEnd.h:97
	const LobbyPlayerStatusData * mpHostStatusData;

	// BrnCarSelectOnlineEnd.h:99
	CgsID mLastHostCarID;

	// BrnCarSelectOnlineEnd.h:101
	BrnGui::AnimationComponent mHostChoosingAnimator;

	// BrnCarSelectOnlineEnd.cpp:49
	extern const char[16] KAC_HOST_CHOOSING_ANIMATOR_NAME;

public:
	// BrnCarSelectOnlineEnd.cpp:69
	// Declaration
	virtual void OnEnter() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectOnlineEnd.cpp:76
		using namespace CgsDev::Message;

	}

	// BrnCarSelectOnlineEnd.cpp:166
	virtual void OnLeave();

	// BrnCarSelectOnlineEnd.cpp:103
	virtual void Update();

	// BrnCarSelectOnlineEnd.h:62
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCarSelectOnlineEnd.cpp:193
	bool UpdateLoadResources();

	// BrnCarSelectOnlineEnd.cpp:221
	bool UpdateWFInit();

	// BrnCarSelectOnlineEnd.cpp:248
	void UpdateRunning();

	// BrnCarSelectOnlineEnd.cpp:295
	// Declaration
	void UpdatePermanent() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCarSelectOnlineEnd.cpp:310
		using namespace CgsDev::Message;

		// BrnCarSelectOnlineEnd.cpp:321
		using namespace CgsDev::Message;

	}

	// BrnCarSelectOnlineEnd.h:125
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnCarSelectOnlineEnd.cpp:359
	void HandleLobbyPlayerList(const GuiEventNetworkLobbyPlayerList *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CarSelectOnlineEnd {
	public:
		CarSelectOnlineEnd();

	private:
		// BrnCarSelectOnlineEnd.h:84
		extern int32_t[] maiEventToObserve;

		// BrnCarSelectOnlineEnd.h:85
		extern const int32_t miNumEventsObserved;

		// BrnCarSelectOnlineEnd.h:87
		extern sResourceTuple[] maResourcesToLoad;

		// BrnCarSelectOnlineEnd.h:88
		extern const uint32_t muNumResourcesToLoad;

		// BrnCarSelectOnlineEnd.h:91
		extern char[] KAC_ONLINE_COUNTDOWN_NAME;

		// BrnCarSelectOnlineEnd.h:94
		extern char[] KAC_ONLINE_PLAYER_LIST;

		// BrnCarSelectOnlineEnd.h:102
		extern char[] KAC_HOST_CHOOSING_ANIMATOR_NAME;

	}

}

// BrnCarSelectOnlineEnd.h:44
void BrnGui::CarSelectOnlineEnd::CarSelectOnlineEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

