// BrnGuiAlwaysAvailableComponentsManager.h:90
extern int32_t[] maiEventToObserve;

// BrnGuiAlwaysAvailableComponentsManager.h:91
extern const int32_t miNumEventsObserved;

// BrnGuiAlwaysAvailableComponentsManager.h:98
extern char[] smpEATraxComponentMovieClip;

// BrnGuiAlwaysAvailableComponentsManager.h:99
extern char[] KAC_ACHIEVEMENT_POPUP_COMPONENT_NAME;

// BrnGuiAlwaysAvailableComponentsManager.h:100
extern char[] KAC_ONLINE_NOTIFICATION_MESSAGE_COMPONENT_NAME;

// BrnGuiAlwaysAvailableComponentsManager.h:102
extern char[] KAC_SAVE_ICON_COMPONENT_NAME;

// BrnGuiAlwaysAvailableComponentsManager.h:104
extern char[] KAC_SHOWTIME_MESSAGE_CPT_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AlwaysAvailableComponentsManager {
		// BrnGuiAlwaysAvailableComponentsManager.h:46
		enum PrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_REGISTERFOREVENTS = 1,
			E_PREPARE_LOADRESOURCES = 2,
			E_PREPARE_DONE = 3,
		}

	}

}

// BrnGuiAlwaysAvailableComponentsManager.h:42
struct BrnGui::AlwaysAvailableComponentsManager : public CgsGui::EventObserver {
private:
	// BrnGuiAlwaysAvailableComponentsManager.cpp:39
	extern const int32_t[19] maiEventToObserve;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:65
	extern const int32_t miNumEventsObserved = 19;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:31
	extern const char[10] smpEATraxComponentMovieClip;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:32
	extern const char[20] KAC_ACHIEVEMENT_POPUP_COMPONENT_NAME;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:33
	extern const char[16] KAC_ONLINE_NOTIFICATION_MESSAGE_COMPONENT_NAME;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:35
	extern const char[12] KAC_SAVE_ICON_COMPONENT_NAME;

	// BrnGuiAlwaysAvailableComponentsManager.cpp:37
	extern const char[16] KAC_SHOWTIME_MESSAGE_CPT_NAME;

	// BrnGuiAlwaysAvailableComponentsManager.h:107
	EATraxInGameComponent mEATraxInGameComponent;

	// BrnGuiAlwaysAvailableComponentsManager.h:108
	AchievementPopupComponent mAchievementPopupComponent;

	// BrnGuiAlwaysAvailableComponentsManager.h:109
	OnlineInviteMessageComponent mOnlineNotificationMessageComponent;

	// BrnGuiAlwaysAvailableComponentsManager.h:111
	BrnGui::BrnSaveIconComponent mSaveIconComponent;

	// BrnGuiAlwaysAvailableComponentsManager.h:113
	BrnGui::BrnShowtimeMessageComponent mShowtimeMessageComponent;

	// BrnGuiAlwaysAvailableComponentsManager.h:115
	char[48] macComposerTextId;

	// BrnGuiAlwaysAvailableComponentsManager.h:116
	char[48] macWorkTextId;

	// BrnGuiAlwaysAvailableComponentsManager.h:118
	BrnGui::AlwaysAvailableComponentsManager::PrepareStage mePrepareStage;

	// BrnGuiAlwaysAvailableComponentsManager.h:119
	bool mbExternalResourcesDependenciesLoaded;

	// BrnGuiAlwaysAvailableComponentsManager.h:120
	bool mbGameLoadStateCompleted;

	// BrnGuiAlwaysAvailableComponentsManager.h:121
	bool mbContainerMovieClipPlaying;

	// BrnGuiAlwaysAvailableComponentsManager.h:122
	bool mbShowNewsNotification;

	// BrnGuiAlwaysAvailableComponentsManager.h:123
	InputBuffer::GuiEventQueue * mpInGuiEventQueue;

	// BrnGuiAlwaysAvailableComponentsManager.h:124
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiAlwaysAvailableComponentsManager.h:125
	bool mbFlaptPrepared;

public:
	// BrnGuiAlwaysAvailableComponentsManager.cpp:102
	void Construct();

	// BrnGuiAlwaysAvailableComponentsManager.cpp:133
	bool Prepare(GuiAccessPointers *);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:188
	void PrepareFlapt(const BrnFlapt::FileRef &);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:222
	bool Release();

	// BrnGuiAlwaysAvailableComponentsManager.cpp:338
	virtual void SetInEventQueue(InputBuffer::GuiEventQueue *);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:350
	virtual void PreWorldUpdate();

	// BrnGuiAlwaysAvailableComponentsManager.cpp:362
	virtual void Update();

	// BrnGuiAlwaysAvailableComponentsManager.cpp:643
	void ManagerUpdate(GuiAccessPointers *);

private:
	// BrnGuiAlwaysAvailableComponentsManager.cpp:248
	void DisplayEATraxChange(const char *, const char *, const char *, bool);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:266
	void DisplayOnlineNotification(const char *, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:286
	void DisplayOnlineNotification(int32_t, BrnGui::OnlineInviteMessageComponent::EOnlineNotificationChyronType);

	// BrnGuiAlwaysAvailableComponentsManager.cpp:308
	void DisplaySaveIcon();

	// BrnGuiAlwaysAvailableComponentsManager.cpp:324
	void HideSaveIcon();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct AlwaysAvailableComponentsManager {
	public:
		AlwaysAvailableComponentsManager();

	private:
		// BrnGuiAlwaysAvailableComponentsManager.h:90
		extern int32_t[] maiEventToObserve;

		// BrnGuiAlwaysAvailableComponentsManager.h:91
		extern const int32_t miNumEventsObserved;

		// BrnGuiAlwaysAvailableComponentsManager.h:98
		extern char[] smpEATraxComponentMovieClip;

		// BrnGuiAlwaysAvailableComponentsManager.h:99
		extern char[] KAC_ACHIEVEMENT_POPUP_COMPONENT_NAME;

		// BrnGuiAlwaysAvailableComponentsManager.h:100
		extern char[] KAC_ONLINE_NOTIFICATION_MESSAGE_COMPONENT_NAME;

		// BrnGuiAlwaysAvailableComponentsManager.h:102
		extern char[] KAC_SAVE_ICON_COMPONENT_NAME;

		// BrnGuiAlwaysAvailableComponentsManager.h:104
		extern char[] KAC_SHOWTIME_MESSAGE_CPT_NAME;

	}

}

// BrnGuiAlwaysAvailableComponentsManager.h:42
void BrnGui::AlwaysAvailableComponentsManager::AlwaysAvailableComponentsManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

