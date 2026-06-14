// BrnAchievementsListComponent.h:96
extern const int32_t KI_MAX_DISPLAYABLE_ACHIEVEMENTS = 5;

// BrnAchievementsListComponent.h:97
extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

// BrnAchievementsListComponent.h:99
extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

// BrnAchievementsListComponent.h:100
extern char[] KAC_APT_STATE_SHOW_BUTTON;

// BrnAchievementsListComponent.h:101
extern char[] KAC_APT_STATE_FORMAT;

// BrnAchievementsListComponent.h:102
extern char[] KAC_APT_STATE_TEXT_FORMAT;

// BrnAchievementsListComponent.h:103
extern char[] KAC_ACHIEVEMENT_STRING_ID;

// BrnAchievementsListComponent.h:46
struct BrnGui::AchievementsListComponent : public CgsGui::GuiComponent {
private:
	// BrnAchievementsListComponent.h:96
	extern const int32_t KI_MAX_DISPLAYABLE_ACHIEVEMENTS = 5;

	// BrnAchievementsListComponent.h:97
	extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

	// BrnAchievementsListComponent.cpp:23
	extern const char[21] KAC_APT_STATE_HIGHLIGHTED_INDEX;

	// BrnAchievementsListComponent.cpp:24
	extern const char[16] KAC_APT_STATE_SHOW_BUTTON;

	// BrnAchievementsListComponent.cpp:25
	extern const char[13] KAC_APT_STATE_FORMAT;

	// BrnAchievementsListComponent.cpp:26
	extern const char[12] KAC_APT_STATE_TEXT_FORMAT;

	// BrnAchievementsListComponent.cpp:27
	extern const char[24] KAC_ACHIEVEMENT_STRING_ID;

	// BrnAchievementsListComponent.cpp:29
	extern const char *[3] KAC_STATE_NAMES;

	// BrnAchievementsListComponent.h:107
	char[5][16] maacAptState;

	// BrnAchievementsListComponent.h:108
	char[5][16] maacAptStateText;

	// BrnAchievementsListComponent.h:110
	BrnGui::GuiCache * mpGuiCache;

	// BrnAchievementsListComponent.h:112
	int32_t miNumAchievements;

	// BrnAchievementsListComponent.h:113
	int32_t miStartAchievementIndex;

	// BrnAchievementsListComponent.h:114
	int32_t miHighlightedIndex;

	// BrnAchievementsListComponent.h:116
	bool mbDirty;

	// BrnAchievementsListComponent.h:118
	BrnGui::IconComponent[5] mAchievementIcon;

public:
	// BrnAchievementsListComponent.cpp:58
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnAchievementsListComponent.cpp:96
	void Update();

	// BrnAchievementsListComponent.cpp:180
	bool HighlightPrevious();

	// BrnAchievementsListComponent.cpp:218
	bool HighlightNext();

	// BrnAchievementsListComponent.cpp:255
	void Setup(BrnGui::GuiCache *, bool);

	// BrnAchievementsListComponent.h:77
	void ShowButton(bool);

	// BrnAchievementsListComponent.h:128
	bool IsAtTopOfList() const;

	// BrnAchievementsListComponent.h:134
	bool IsAtBottomOfList() const;

private:
	// BrnAchievementsListComponent.cpp:290
	void ShowDescriptionInTicker();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct AchievementsListComponent {
	public:
		// BrnAchievementsListComponent.h:128
		bool IsAtTopOfList() const;

		// BrnAchievementsListComponent.h:134
		bool IsAtBottomOfList() const;

	private:
		// BrnAchievementsListComponent.h:96
		extern const int32_t KI_MAX_DISPLAYABLE_ACHIEVEMENTS = 5;

		// BrnAchievementsListComponent.h:97
		extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

		// BrnAchievementsListComponent.h:99
		extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

		// BrnAchievementsListComponent.h:100
		extern char[] KAC_APT_STATE_SHOW_BUTTON;

		// BrnAchievementsListComponent.h:101
		extern char[] KAC_APT_STATE_FORMAT;

		// BrnAchievementsListComponent.h:102
		extern char[] KAC_APT_STATE_TEXT_FORMAT;

		// BrnAchievementsListComponent.h:103
		extern char[] KAC_ACHIEVEMENT_STRING_ID;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AchievementsListComponent {
	public:
		AchievementsListComponent();

	private:
		// BrnAchievementsListComponent.h:96
		extern const int32_t KI_MAX_DISPLAYABLE_ACHIEVEMENTS = 5;

		// BrnAchievementsListComponent.h:97
		extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

		// BrnAchievementsListComponent.h:99
		extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

		// BrnAchievementsListComponent.h:100
		extern char[] KAC_APT_STATE_SHOW_BUTTON;

		// BrnAchievementsListComponent.h:101
		extern char[] KAC_APT_STATE_FORMAT;

		// BrnAchievementsListComponent.h:102
		extern char[] KAC_APT_STATE_TEXT_FORMAT;

		// BrnAchievementsListComponent.h:103
		extern char[] KAC_ACHIEVEMENT_STRING_ID;

	}

}

// BrnAchievementsListComponent.h:46
void BrnGui::AchievementsListComponent::AchievementsListComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

