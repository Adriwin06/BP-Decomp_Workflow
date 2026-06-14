// BrnBootProfile.h:88
extern char[] macMessageTextName;

// BrnBootProfile.h:89
extern char[] macLeftOptionTextName;

// BrnBootProfile.h:90
extern char[] macRightOptionTextName;

// BrnBootProfile.h:91
extern char[] macLeftOptionButtonName;

// BrnBootProfile.h:92
extern char[] macRightOptionButtonName;

// BrnBootProfile.h:93
extern char[] macBlankString;

// BrnBootProfile.h:169
extern int32_t[] maiEventToObserve;

// BrnBootProfile.h:170
extern const int32_t miNumEventsObserved;

// BrnBootProfile.h:172
extern sResourceTuple[] maResourcesToLoad;

// BrnBootProfile.h:173
extern uint32_t muNumResourcesToLoad;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BootProfile {
		// BrnBootProfile.h:149
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_WAIT_RESOURCES = 1,
			E_INTERNALSTATE_WAIT_FOR_MESSAGE = 2,
			E_INTERNALSTATE_WAIT_INITIALISE = 3,
			E_INTERNALSTATE_RUNNING = 4,
			E_INTERNALSTATE_LEAVING = 5,
			E_INTERNALSTATE_COUNT = 6,
		}

	}

}

// BrnBootProfile.h:115
struct BrnGui::BootProfile : public BrnGui::ProfileTaskResultHandler {
private:
	// BrnBootProfile.cpp:31
	extern const int32_t[3] maiEventToObserve;

	// BrnBootProfile.cpp:38
	extern const int32_t miNumEventsObserved = 3;

	// BrnBootProfile.cpp:40
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnBootProfile.cpp:45
	extern uint32_t muNumResourcesToLoad;

	// BrnBootProfile.h:175
	extern sResourceTuple[] maLoadingScreenResourcesToLoad;

	// BrnBootProfile.h:176
	extern uint32_t muNumLoadingScreenResourcesToLoad;

	// BrnBootProfile.h:178
	BrnGui::BootProfile::InternalState meInternalState;

	// BrnBootProfile.h:179
	BrnGui::ProfileMessageComponent mProfileMessage;

	// BrnBootProfile.h:180
	BrnGui::ProfileManager * mpProfileManager;

	// BrnBootProfile.h:181
	BrnGui::GuiCache * mpGuiCache;

	// BrnBootProfile.h:182
	bool mbCheckDiskSpace;

public:
	// BrnBootProfile.cpp:280
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *, BrnGui::ProfileManager &);

	// BrnBootProfile.cpp:308
	virtual void OnEnter();

	// BrnBootProfile.cpp:484
	virtual void OnLeave();

	// BrnBootProfile.cpp:335
	virtual void Update();

	// BrnBootProfile.h:141
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnBootProfile.cpp:534
	void HandleControllerInput(const CgsModule::Event *);

	// BrnBootProfile.cpp:584
	virtual void HandleProfileTaskResult();

}

// BrnBootProfile.h:47
struct BrnGui::ProfileMessageComponent : public BrnGui::ProfileMessageDisplay {
private:
	// BrnBootProfile.h:80
	StateInterface * mpStateInterface;

	// BrnBootProfile.h:82
	BrnGui::TextField mMessageText;

	// BrnBootProfile.h:83
	BrnGui::TextField mLeftOptionText;

	// BrnBootProfile.h:84
	BrnGui::TextField mRightOptionText;

	// BrnBootProfile.h:85
	BrnGui::ButtonIconComponent mLeftOptionButton;

	// BrnBootProfile.h:86
	BrnGui::ButtonIconComponent mRightOptionButton;

	// BrnBootProfile.cpp:47
	extern const char[8] macMessageTextName;

	// BrnBootProfile.cpp:48
	extern const char[8] macLeftOptionTextName;

	// BrnBootProfile.cpp:49
	extern const char[8] macRightOptionTextName;

	// BrnBootProfile.cpp:50
	extern const char[15] macLeftOptionButtonName;

	// BrnBootProfile.cpp:51
	extern const char[15] macRightOptionButtonName;

	// BrnBootProfile.cpp:53
	extern const char[1] macBlankString;

	// BrnBootProfile.h:95
	char[64] macMessageId;

	// BrnBootProfile.h:96
	char[64] macLeftOptionId;

	// BrnBootProfile.h:97
	char[64] macRightOptionId;

	// BrnBootProfile.h:98
	int32_t miNumOptions;

	// BrnBootProfile.h:99
	uint32_t muSaveDataSizeKb;

	// BrnBootProfile.h:100
	uint32_t muGameDataSizeKb;

	// BrnBootProfile.h:101
	bool mbHasMessage;

public:
	// BrnBootProfile.cpp:76
	void Construct(StateInterface *);

	// BrnBootProfile.cpp:98
	void Destruct();

	// BrnBootProfile.cpp:121
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnBootProfile.cpp:108
	int32_t GetNumOptions();

	// BrnBootProfile.h:188
	bool HasMessage() const;

	// BrnBootProfile.cpp:136
	void ResendMessageToApt();

	// BrnBootProfile.cpp:195
	virtual void ShowMessage(const char *, uint32_t, const char **);

	// BrnBootProfile.cpp:235
	virtual void ShowNoSpaceMessage(const char *, uint32_t, uint32_t);

	// BrnBootProfile.cpp:257
	virtual void HideMessage();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ProfileMessageComponent {
	private:
		// BrnBootProfile.h:88
		extern char[] macMessageTextName;

		// BrnBootProfile.h:89
		extern char[] macLeftOptionTextName;

		// BrnBootProfile.h:90
		extern char[] macRightOptionTextName;

		// BrnBootProfile.h:91
		extern char[] macLeftOptionButtonName;

		// BrnBootProfile.h:92
		extern char[] macRightOptionButtonName;

		// BrnBootProfile.h:93
		extern char[] macBlankString;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootProfile {
	public:
		BootProfile();

	private:
		// BrnBootProfile.h:169
		extern int32_t[] maiEventToObserve;

		// BrnBootProfile.h:170
		extern const int32_t miNumEventsObserved;

		// BrnBootProfile.h:172
		extern sResourceTuple[] maResourcesToLoad;

		// BrnBootProfile.h:173
		extern uint32_t muNumResourcesToLoad;

	}

	// Declaration
	struct ProfileMessageComponent {
	public:
		ProfileMessageComponent();

	private:
		// BrnBootProfile.h:88
		extern char[] macMessageTextName;

		// BrnBootProfile.h:89
		extern char[] macLeftOptionTextName;

		// BrnBootProfile.h:90
		extern char[] macRightOptionTextName;

		// BrnBootProfile.h:91
		extern char[] macLeftOptionButtonName;

		// BrnBootProfile.h:92
		extern char[] macRightOptionButtonName;

		// BrnBootProfile.h:93
		extern char[] macBlankString;

	}

}

// BrnBootProfile.h:115
void BrnGui::BootProfile::BootProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnBootProfile.h:47
void BrnGui::ProfileMessageComponent::ProfileMessageComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

