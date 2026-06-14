// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavEnterOnlinePS3 {
		// BrnCrashNavEnterOnlinePS3.h:68
		enum EPlatformSpecificSubState {
			E_PLATFORM_SPECIFIC_SUBSTATE_WAIT_READY_SIGN_IN_UI = 0,
			E_PLATFORM_SPECIFIC_SUBSTATE_SHOW_SIGN_IN_UI = 1,
			E_PLATFORM_SPECIFIC_SUBSTATE_WAIT_FINISHED_SIGN_IN_UI = 2,
			E_PLATFORM_SPECIFIC_SUBSTATE_FINISHED_SIGN_IN_UI = 3,
			E_PLATFORM_SPECIFIC_SUBSTATE_WAIT_COLLISION_WORLD = 4,
			E_PLATFORM_SPECIFIC_SUBSTATE_COUNT = 5,
		}

	}

}

// BrnCrashNavEnterOnlinePS3.h:46
struct BrnGui::CrashNavEnterOnlinePS3 : public BrnGui::CrashNavEnterOnlineBase {
private:
	// BrnCrashNavEnterOnlinePS3.h:79
	BrnGui::CrashNavEnterOnlinePS3::EPlatformSpecificSubState mePlatformSpecificUpdate;

	// BrnCrashNavEnterOnlinePS3.h:81
	sys_memory_container_t mMemoryContainer;

	// BrnCrashNavEnterOnlinePS3.h:82
	CellNetCtlNetStartDialogResult mNetStartResult;

public:
	// BrnCrashNavEnterOnlinePS3.cpp:42
	virtual void OnEnter();

	// BrnCrashNavEnterOnlinePS3.cpp:61
	virtual void OnLeave();

	// BrnCrashNavEnterOnlinePS3.cpp:83
	virtual void Update();

protected:
	// BrnCrashNavEnterOnlinePS3.cpp:134
	virtual void ShowSignInUI();

private:
	// BrnCrashNavEnterOnlinePS3.cpp:157
	void ShowSigninUIInternal();

	// BrnCrashNavEnterOnlinePS3.cpp:188
	void HideSigninUI();

	// BrnCrashNavEnterOnlinePS3.cpp:207
	void CleanUpSigninUI();

	// BrnCrashNavEnterOnlinePS3.cpp:237
	virtual void HandleCollisionWorldEvent(const GuiEventRequestCollisionWorldEvent *);

	// BrnCrashNavEnterOnlinePS3.cpp:292
	// Declaration
	void SysUtilCallback(uint64_t, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavEnterOnlinePS3.cpp:319
		using namespace CgsDev::Message;

	}

}

// BrnCrashNavEnterOnlinePS3.h:46
void BrnGui::CrashNavEnterOnlinePS3::CrashNavEnterOnlinePS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

