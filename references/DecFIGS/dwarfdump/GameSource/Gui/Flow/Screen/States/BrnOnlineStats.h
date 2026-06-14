// BrnOnlineStats.h:87
extern int32_t[] maiEventToObserve;

// BrnOnlineStats.h:88
extern const int32_t miNumEventsObserved;

// BrnOnlineStats.h:90
extern sResourceTuple[] maResourcesToLoad;

// BrnOnlineStats.h:91
extern const uint32_t muNumResourcesToLoad;

// BrnOnlineStats.h:93
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

// BrnOnlineStats.h:97
extern char[] KAC_TEXTFIELD_NAME_TOTAL_GAMES;

// BrnOnlineStats.h:98
extern char[] KAC_TEXTFIELD_NAME_WIN_RATE;

// BrnOnlineStats.h:99
extern char[] KAC_TEXTFIELD_NAME_TAKEDOWNS;

// BrnOnlineStats.h:100
extern char[] KAC_TEXTFIELD_NAME_RIVALS;

// BrnOnlineStats.h:101
extern char[] KAC_TEXTFIELD_NAME_MUGSHOTS;

// BrnOnlineStats.h:102
extern char[] KAC_TEXTFIELD_NAME_DISCONNECT_RATE;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineStats {
		// BrnOnlineStats.h:70
		enum EInternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_LOADRESOURCES = 1,
			E_INTERNALSTATE_WFDATA = 2,
			E_INTERNALSTATE_PLAYSWF = 3,
			E_INTERNALSTATE_WFINIT = 4,
			E_INTERNALSTATE_SETUPCOMPONENTS = 5,
			E_INTERNALSTATE_RUNNING = 6,
			E_INTERNALSTATE_LEFT = 7,
			E_INTERNALSTATE_COUNT = 8,
		}

	}

}

// BrnOnlineStats.h:43
struct BrnGui::OnlineStats : public CgsGui::State {
private:
	// BrnOnlineStats.h:84
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineStats.h:85
	BrnGui::OnlineStats::EInternalState meInternalState;

	// BrnOnlineStats.cpp:28
	extern const int32_t[7] maiEventToObserve;

	// BrnOnlineStats.cpp:44
	extern const int32_t miNumEventsObserved = 7;

	// BrnOnlineStats.cpp:46
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnOnlineStats.cpp:51
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnOnlineStats.h:93
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

	// BrnOnlineStats.h:94
	uint32_t[4] mauExpectedComponentIds;

	// BrnOnlineStats.h:95
	uint32_t muNumExpectedComponents;

	// BrnOnlineStats.cpp:53
	extern const char[14] KAC_TEXTFIELD_NAME_TOTAL_GAMES;

	// BrnOnlineStats.cpp:54
	extern const char[11] KAC_TEXTFIELD_NAME_WIN_RATE;

	// BrnOnlineStats.cpp:55
	extern const char[13] KAC_TEXTFIELD_NAME_TAKEDOWNS;

	// BrnOnlineStats.cpp:56
	extern const char[10] KAC_TEXTFIELD_NAME_RIVALS;

	// BrnOnlineStats.cpp:57
	extern const char[12] KAC_TEXTFIELD_NAME_MUGSHOTS;

	// BrnOnlineStats.cpp:58
	extern const char[18] KAC_TEXTFIELD_NAME_DISCONNECT_RATE;

	// BrnOnlineStats.h:104
	BrnGui::TextField mTotalGames;

	// BrnOnlineStats.h:105
	BrnGui::TextField mWinRate;

	// BrnOnlineStats.h:106
	BrnGui::TextField mTakedowns;

	// BrnOnlineStats.h:107
	BrnGui::TextField mRivals;

	// BrnOnlineStats.h:108
	BrnGui::TextField mMugshots;

	// BrnOnlineStats.h:109
	BrnGui::TextField mDisconnectRate;

public:
	// BrnOnlineStats.cpp:77
	virtual void OnEnter();

	// BrnOnlineStats.cpp:192
	virtual void OnLeave();

	// BrnOnlineStats.cpp:105
	virtual void Update();

	// BrnOnlineStats.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineStats.cpp:264
	void UpdateGetCache();

	// BrnOnlineStats.cpp:302
	bool UpdateWFInit();

	// BrnOnlineStats.cpp:324
	void UpdateSetupComponents();

	// BrnOnlineStats.cpp:340
	void UpdateRunning();

	// BrnOnlineStats.cpp:401
	void UpdatePermanent();

	// BrnOnlineStats.cpp:212
	void SetExpectedComponent(const char *);

	// BrnOnlineStats.cpp:227
	void ClearExpectedComponent();

	// BrnOnlineStats.cpp:247
	void SetExpectedAptComponentList();

	// BrnOnlineStats.cpp:440
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOnlineStats.cpp:471
	void HandleStatsData(const GuiEventOnlineStatsResponse *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineStats {
	public:
		OnlineStats();

	private:
		// BrnOnlineStats.h:87
		extern int32_t[] maiEventToObserve;

		// BrnOnlineStats.h:88
		extern const int32_t miNumEventsObserved;

		// BrnOnlineStats.h:90
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOnlineStats.h:91
		extern const uint32_t muNumResourcesToLoad;

		// BrnOnlineStats.h:93
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 4;

		// BrnOnlineStats.h:97
		extern char[] KAC_TEXTFIELD_NAME_TOTAL_GAMES;

		// BrnOnlineStats.h:98
		extern char[] KAC_TEXTFIELD_NAME_WIN_RATE;

		// BrnOnlineStats.h:99
		extern char[] KAC_TEXTFIELD_NAME_TAKEDOWNS;

		// BrnOnlineStats.h:100
		extern char[] KAC_TEXTFIELD_NAME_RIVALS;

		// BrnOnlineStats.h:101
		extern char[] KAC_TEXTFIELD_NAME_MUGSHOTS;

		// BrnOnlineStats.h:102
		extern char[] KAC_TEXTFIELD_NAME_DISCONNECT_RATE;

	}

}

// BrnOnlineStats.h:43
void BrnGui::OnlineStats::OnlineStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

