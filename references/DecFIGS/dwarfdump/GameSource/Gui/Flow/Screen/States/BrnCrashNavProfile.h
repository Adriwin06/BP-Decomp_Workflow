// BrnCrashNavProfile.h:86
extern int32_t[] maiEventToObserve;

// BrnCrashNavProfile.h:87
extern const int32_t miNumEventsObserved;

// BrnCrashNavProfile.h:88
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnCrashNavProfile.h:89
extern const int32_t miNumResourcesToLoad;

// BrnCrashNavProfile.h:92
extern char[] KAC_PROFILE_MENU_COMPONENT;

// BrnCrashNavProfile.h:95
extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavProfile {
		// BrnCrashNavProfile.h:98
		enum EState {
			E_STATE_LOADING_SCREEN = 0,
			E_STATE_INITIALISING_COMPONENTS = 1,
			E_STATE_MAIN = 2,
			E_STATE_PROFILE_MESSAGE = 3,
			E_STATE_PROFILE_LOADED = 4,
		}

	}

}

// BrnCrashNavProfile.h:47
struct BrnGui::CrashNavProfile : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnCrashNavProfile.cpp:28
	extern const int32_t[3] maiEventToObserve;

	// BrnCrashNavProfile.cpp:35
	extern const int32_t miNumEventsObserved = 3;

	// BrnCrashNavProfile.cpp:37
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnCrashNavProfile.cpp:42
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnCrashNavProfile.cpp:44
	extern const char[13] KAC_PROFILE_MENU_COMPONENT;

	// BrnCrashNavProfile.cpp:59
	extern const char *[2] KAPC_PROFILE_MENU_TEXT;

	// BrnCrashNavProfile.cpp:55
	extern const char[21] KAC_MESSAGE_ANIMATION_COMPONENT;

	// BrnCrashNavProfile.h:107
	BrnGui::CrashNavProfile::EState meState;

	// BrnCrashNavProfile.h:109
	BrnGui::MenuComponent mProfileMenuComponent;

	// BrnCrashNavProfile.h:110
	BrnGui::ProfileMessageComponent mProfileMessage;

	// BrnCrashNavProfile.h:112
	BrnGui::AnimationComponent mSaveLoadMessageAnimation;

	// BrnCrashNavProfile.h:115
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavProfile.h:117
	BrnGui::ProfileManager * mpProfileManager;

public:
	// BrnCrashNavProfile.cpp:83
	void Construct(CgsID, CgsFsm::ScriptedFsm *, BrnGui::ProfileManager &);

	// BrnCrashNavProfile.cpp:103
	virtual void OnEnter();

	// BrnCrashNavProfile.cpp:132
	virtual void OnLeave();

	// BrnCrashNavProfile.cpp:158
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavProfile.cpp:191
		using namespace CgsDev::Message;

	}

	// BrnCrashNavProfile.h:79
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnCrashNavProfile.cpp:429
	virtual void HandleProfileTaskResult();

	// BrnCrashNavProfile.cpp:245
	void HandleControllerInput(const CgsModule::Event *);

	// BrnCrashNavProfile.cpp:374
	void ShowMenu();

	// BrnCrashNavProfile.cpp:393
	void HandleTriggers(const CgsModule::Event *);

	// BrnCrashNavProfile.cpp:407
	void HandleGuiCacheEvent(const GuiEventCache *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavProfile {
	public:
		CrashNavProfile();

	private:
		// BrnCrashNavProfile.h:86
		extern int32_t[] maiEventToObserve;

		// BrnCrashNavProfile.h:87
		extern const int32_t miNumEventsObserved;

		// BrnCrashNavProfile.h:88
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnCrashNavProfile.h:89
		extern const int32_t miNumResourcesToLoad;

		// BrnCrashNavProfile.h:92
		extern char[] KAC_PROFILE_MENU_COMPONENT;

		// BrnCrashNavProfile.h:95
		extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

	}

}

// BrnCrashNavProfile.h:47
void BrnGui::CrashNavProfile::CrashNavProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

