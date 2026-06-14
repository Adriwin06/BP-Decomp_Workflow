// BrnOnlineRivals.h:86
extern int32_t[] maiEventToObserve;

// BrnOnlineRivals.h:87
extern const int32_t miNumEventsObserved;

// BrnOnlineRivals.h:88
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineRivals.h:89
extern const int32_t miNumResourcesToLoad;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineRivals {
		// BrnOnlineRivals.h:74
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnOnlineRivals.h:47
struct BrnGui::OnlineRivals : public CgsGui::State {
private:
	// BrnOnlineRivals.h:84
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 6;

	// BrnOnlineRivals.cpp:30
	extern const int32_t[5] maiEventToObserve;

	// BrnOnlineRivals.cpp:39
	extern const int32_t miNumEventsObserved = 5;

	// BrnOnlineRivals.cpp:41
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineRivals.cpp:46
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineRivals.h:93
	BrnGui::OnlineRivals::ESubState meSubState;

	// BrnOnlineRivals.h:96
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnOnlineRivals.cpp:65
	virtual void OnEnter();

	// BrnOnlineRivals.cpp:156
	virtual void OnLeave();

	// BrnOnlineRivals.cpp:87
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineRivals.cpp:131
		using namespace CgsDev::Message;

	}

	// BrnOnlineRivals.h:65
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineRivals.cpp:215
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineRivals.cpp:245
	void HandleControllerInputSelectParams(const GuiEventControllerInputPressed *);

	// BrnOnlineRivals.cpp:289
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineRivals.cpp:176
	void CheckForCompletedLoads();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineRivals {
	public:
		OnlineRivals();

	private:
		// BrnOnlineRivals.h:86
		extern int32_t[] maiEventToObserve;

		// BrnOnlineRivals.h:87
		extern const int32_t miNumEventsObserved;

		// BrnOnlineRivals.h:88
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineRivals.h:89
		extern const int32_t miNumResourcesToLoad;

	}

}

// BrnOnlineRivals.h:47
void BrnGui::OnlineRivals::OnlineRivals() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

