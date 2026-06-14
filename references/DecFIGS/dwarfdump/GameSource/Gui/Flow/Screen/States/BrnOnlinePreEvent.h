// BrnOnlinePreEvent.h:84
extern int32_t[] maiEventToObserve;

// BrnOnlinePreEvent.h:85
extern const int32_t miNumEventsObserved;

// BrnOnlinePreEvent.h:87
extern sResourceTuple[] maResourcesToLoad;

// BrnOnlinePreEvent.h:88
extern const uint32_t muNumResourcesToLoad;

// BrnOnlinePreEvent.h:90
extern char[] KAC_MESSAGES_COMPONENT_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePreEvent {
		// BrnOnlinePreEvent.h:70
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

// BrnOnlinePreEvent.h:43
struct BrnGui::OnlinePreEvent : public CgsGui::State {
private:
	// BrnOnlinePreEvent.h:81
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlinePreEvent.h:82
	BrnGui::OnlinePreEvent::InternalState meInternalState;

	// BrnOnlinePreEvent.cpp:26
	extern const int32_t[6] maiEventToObserve;

	// BrnOnlinePreEvent.cpp:37
	extern const int32_t miNumEventsObserved = 6;

	// BrnOnlinePreEvent.cpp:39
	extern const sResourceTuple[1] maResourcesToLoad;

	// BrnOnlinePreEvent.cpp:44
	extern const uint32_t muNumResourcesToLoad = 1;

	// BrnOnlinePreEvent.cpp:46
	extern const char[20] KAC_MESSAGES_COMPONENT_NAME;

	// BrnOnlinePreEvent.h:91
	BrnGui::OnlinePreEventMessages mMessageComponent;

	// BrnOnlinePreEvent.h:93
	float32_t mfTimeToRemove;

	// BrnOnlinePreEvent.h:94
	int32_t miCurrentFlyByIndex;

public:
	// BrnOnlinePreEvent.cpp:65
	virtual void OnEnter();

	// BrnOnlinePreEvent.cpp:160
	virtual void OnLeave();

	// BrnOnlinePreEvent.cpp:91
	virtual void Update();

	// BrnOnlinePreEvent.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlinePreEvent.cpp:182
	void UpdateGetCache();

	// BrnOnlinePreEvent.cpp:220
	bool UpdateLoadResources();

	// BrnOnlinePreEvent.cpp:245
	bool UpdateWFInit();

	// BrnOnlinePreEvent.cpp:261
	void UpdateRunning();

	// BrnOnlinePreEvent.cpp:281
	void UpdatePermanent();

	// BrnOnlinePreEvent.cpp:359
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOnlinePreEvent.cpp:398
	void HandleAptTriggers(const GuiEventAptTrigger *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlinePreEvent {
	public:
		OnlinePreEvent();

	private:
		// BrnOnlinePreEvent.h:84
		extern int32_t[] maiEventToObserve;

		// BrnOnlinePreEvent.h:85
		extern const int32_t miNumEventsObserved;

		// BrnOnlinePreEvent.h:87
		extern sResourceTuple[] maResourcesToLoad;

		// BrnOnlinePreEvent.h:88
		extern const uint32_t muNumResourcesToLoad;

		// BrnOnlinePreEvent.h:90
		extern char[] KAC_MESSAGES_COMPONENT_NAME;

	}

}

// BrnOnlinePreEvent.h:43
void BrnGui::OnlinePreEvent::OnlinePreEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

