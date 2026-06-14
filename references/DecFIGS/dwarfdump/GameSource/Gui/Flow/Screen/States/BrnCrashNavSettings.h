// BrnCrashNavSettings.h:65
extern const int32_t KI_PRODUCT_CODE_LENGTH = 20;

// BrnCrashNavSettings.h:125
extern int32_t[] maiEventToObserve;

// BrnCrashNavSettings.h:126
extern const int32_t miNumEventsObserved;

// BrnCrashNavSettings.h:127
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnCrashNavSettings.h:128
extern const int32_t miNumResourcesToLoad;

// BrnCrashNavSettings.h:130
extern char[] KAC_MENU_COMPONENT;

// BrnCrashNavSettings.h:159
extern const int32_t KI_MAX_UTF16_CHARS = 64;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavSettings {
		// BrnCrashNavSettings.h:135
		enum EState {
			E_STATE_LOADING_SCREEN = 0,
			E_STATE_INITIALISING_COMPONENTS = 1,
			E_STATE_MAIN = 2,
			E_STATE_PRODUCT_CODE_INPUT_PENDING = 3,
			E_STATE_PRODUCT_CODE_INPUT = 4,
			E_SUBSTATE_WAIT_COLLISION_WORLD_UNLOAD = 5,
			E_SUBSTATE_WAIT_AUTOSAVE_COMPLETE_TO_SHOW_SYSCONFIG = 6,
			E_SUBSTATE_SHOWING_SYS_CONFIG = 7,
			E_SUBSTATE_WAIT_SYSCONFIG_FINISH = 8,
			E_SUBSTATE_WAIT_COLLISION_WORLD_LOAD = 9,
		}

	}

}

// BrnCrashNavSettings.h:44
struct BrnGui::CrashNavProductCodeKeyboardListener : public CgsGui::GuiKeyboardListener {
private:
	// BrnCrashNavSettings.h:65
	extern const int32_t KI_PRODUCT_CODE_LENGTH = 20;

	// BrnCrashNavSettings.h:67
	char[20] macKeyboardString;

	// BrnCrashNavSettings.h:68
	bool mbKeyboardClosed;

	// BrnCrashNavSettings.h:69
	bool mbNewData;

public:
	// BrnCrashNavSettings.cpp:1209
	void Construct();

	// BrnCrashNavSettings.cpp:1152
	virtual void KeyboardClosed(UTF16String);

	// BrnCrashNavSettings.h:248
	bool HasJustClosed() const;

	// BrnCrashNavSettings.cpp:1183
	char * FillString();

}

// BrnCrashNavSettings.h:83
struct BrnGui::CrashNavSettings : public CgsGui::State {
private:
	// BrnCrashNavSettings.cpp:33
	extern const int32_t[5] maiEventToObserve;

	// BrnCrashNavSettings.cpp:42
	extern const int32_t miNumEventsObserved = 5;

	// BrnCrashNavSettings.cpp:44
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnCrashNavSettings.cpp:49
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnCrashNavSettings.cpp:51
	extern const char[9] KAC_MENU_COMPONENT;

	// BrnCrashNavSettings.cpp:53
	extern const char *[8] KAPC_MENU_TEXT;

	// BrnCrashNavSettings.cpp:67
	extern const char *[12] KAPC_SPONSOR_PRODUCT_CODES_TEXT;

	// BrnCrashNavSettings.h:153
	BrnGui::CrashNavSettings::EState meState;

	// BrnCrashNavSettings.h:155
	BrnGui::MenuComponent mMenuComponent;

	// BrnCrashNavSettings.h:157
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavSettings.h:159
	extern const int32_t KI_MAX_UTF16_CHARS = 64;

	// BrnCrashNavSettings.h:160
	CgsUtf16[64] macDefaultHeading;

	// BrnCrashNavSettings.h:161
	CgsUtf16[64] macTitleHeading;

	// BrnCrashNavSettings.h:162
	CgsUtf16[64] macDialogHeading;

	// BrnCrashNavSettings.h:164
	BrnGuiKeyboard * mpGuiKeyboard;

	// BrnCrashNavSettings.h:165
	CrashNavProductCodeKeyboardListener mKeyboardListener;

	// BrnCrashNavSettings.h:166
	bool mbCreditsUnlockedOnEnter;

	// BrnCrashNavSettings.h:167
	int32_t miCreditsButtonSequenceStage;

	// BrnCrashNavSettings.h:170
	sys_memory_container_t mMemoryContainer;

	// BrnCrashNavSettings.h:171
	bool mbCleanUpSysConfigThisFrame;

public:
	// BrnCrashNavSettings.cpp:120
	virtual void OnEnter();

	// BrnCrashNavSettings.cpp:152
	virtual void OnLeave();

	// BrnCrashNavSettings.cpp:201
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavSettings.cpp:260
		using namespace CgsDev::Message;

	}

	// BrnCrashNavSettings.h:117
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavSettings.cpp:359
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavSettings.cpp:895
	void ShowMenu();

	// BrnCrashNavSettings.cpp:921
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavSettings.cpp:935
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnCrashNavSettings.cpp:954
	void HandleCollisionWorldEvent(const GuiEventRequestCollisionWorldEvent *);

	// BrnCrashNavSettings.cpp:571
	void InputSponsorProductCode();

	// BrnCrashNavSettings.cpp:673
	void OnInputSponsorProductCode(char *);

	// BrnCrashNavSettings.cpp:593
	bool SteelWheelsSponsorCode(char *);

	// BrnCrashNavSettings.cpp:1018
	void ShowSysConfigMenu();

	// BrnCrashNavSettings.cpp:1042
	void ShowSettingsMenuScreen();

	// BrnCrashNavSettings.cpp:1062
	// Declaration
	void ShowSysConfigSysUtil() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavSettings.cpp:1082
		using namespace CgsDev::Message;

	}

	// BrnCrashNavSettings.cpp:1094
	void CleanUpSysConfigUtil();

	// BrnCrashNavSettings.cpp:1128
	void SysConfigCallback(int32_t, void *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavSettings {
	public:
		CrashNavSettings();

	private:
		// BrnCrashNavSettings.h:125
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavSettings.h:126
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavSettings.h:127
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnCrashNavSettings.h:128
		extern const int32_t miNumResourcesToLoad;

		// BrnCrashNavSettings.h:130
		extern char[] KAC_MENU_COMPONENT;

		// BrnCrashNavSettings.h:159
		extern const int32_t KI_MAX_UTF16_CHARS = 64;

	}

	// Declaration
	struct CrashNavProductCodeKeyboardListener {
	public:
		CrashNavProductCodeKeyboardListener();

	private:
		// BrnCrashNavSettings.h:65
		extern const int32_t KI_PRODUCT_CODE_LENGTH = 20;

	}

}

// BrnCrashNavSettings.h:83
void BrnGui::CrashNavSettings::CrashNavSettings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashNavSettings.h:44
void BrnGui::CrashNavProductCodeKeyboardListener::CrashNavProductCodeKeyboardListener() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

