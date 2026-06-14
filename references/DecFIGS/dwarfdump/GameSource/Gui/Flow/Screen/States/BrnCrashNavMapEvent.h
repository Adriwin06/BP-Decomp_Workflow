// BrnCrashNavMapEvent.h:122
extern int32_t[] maiEventToObserve;

// BrnCrashNavMapEvent.h:123
extern const int32_t miNumEventsObserved;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavMapEvent {
		// BrnCrashNavMapEvent.h:110
		enum CreateEventStage {
			E_CREATE_EVENT_NONE = 0,
			E_CREATE_EVENT_NEW_PANEL = 1,
			E_CREATE_EVENT_EDIT_ROUTE = 2,
			E_CREATE_EVENT_EDIT_MODIFIER = 3,
			E_CREATE_EVENT_SAVE = 4,
			E_CREATE_EVENT_REPLACE = 5,
			E_CREATE_EVENT_KEYBOARD = 6,
			E_CREATE_EVENT_CONFIRM = 7,
		}

	}

}

// BrnCrashNavMapEvent.h:42
struct BrnGui::CrashNavMapEventKeyboardListener : public CgsGui::GuiKeyboardListener {
private:
	// BrnCrashNavMapEvent.h:64
	char[32] macKeyboardString;

	// BrnCrashNavMapEvent.h:65
	bool mbKeyboardClosed;

	// BrnCrashNavMapEvent.h:66
	bool mbNewData;

public:
	// BrnCrashNavMapEvent.cpp:729
	void Construct();

	// BrnCrashNavMapEvent.cpp:678
	virtual void KeyboardClosed(UTF16String);

	// BrnCrashNavMapEvent.h:175
	bool HasJustClosed() const;

	// BrnCrashNavMapEvent.cpp:703
	char * FillString();

}

// BrnCrashNavMapEvent.h:79
struct BrnGui::CrashNavMapEvent : public BrnGui::CrashNavMap {
private:
	// BrnCrashNavMapEvent.cpp:26
	extern const int32_t[10] maiEventToObserve;

	// BrnCrashNavMapEvent.cpp:41
	extern const int32_t miNumEventsObserved = 10;

	// BrnCrashNavMapEvent.h:125
	BrnGui::CrashNavMapEvent::CreateEventStage meCreateEventStage;

	// BrnCrashNavMapEvent.h:126
	Race mCreatedRace;

	// BrnCrashNavMapEvent.h:127
	bool mbUpdateNewEventInfo;

	// BrnCrashNavMapEvent.h:128
	int8_t mi8NextEventIndex;

	// BrnCrashNavMapEvent.h:130
	BrnGuiKeyboard * mpGuiKeyboard;

	// BrnCrashNavMapEvent.h:131
	CrashNavMapEventKeyboardListener mKeyboardListener;

public:
	// BrnCrashNavMapEvent.cpp:59
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnCrashNavMapEvent.cpp:76
	virtual void OnEnter();

	// BrnCrashNavMapEvent.cpp:232
	virtual void OnLeave();

	// BrnCrashNavMapEvent.cpp:118
	virtual void Update();

	// BrnCrashNavMapEvent.h:103
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavMapEvent.cpp:257
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavMapEvent.cpp:443
	void HandleSelect();

	// BrnCrashNavMapEvent.cpp:526
	void SetTracker();

	// BrnCrashNavMapEvent.cpp:590
	void UpdateEventData();

	// BrnCrashNavMapEvent.cpp:607
	void ClearTracker();

	// BrnCrashNavMapEvent.cpp:627
	void SetEventData();

	// BrnCrashNavMapEvent.cpp:664
	virtual void UpdatePanelData();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavMapEvent {
	public:
		CrashNavMapEvent();

	private:
		// BrnCrashNavMapEvent.h:122
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavMapEvent.h:123
		extern const int32_t miNumEventsObserved;

	}

}

// BrnCrashNavMapEvent.h:79
void BrnGui::CrashNavMapEvent::CrashNavMapEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashNavMapEvent.h:42
void BrnGui::CrashNavMapEventKeyboardListener::CrashNavMapEventKeyboardListener() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

