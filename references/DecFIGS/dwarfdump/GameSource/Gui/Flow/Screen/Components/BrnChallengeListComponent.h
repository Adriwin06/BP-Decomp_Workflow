// BrnChallengeListComponent.h:113
extern const int32_t KI_MAX_DISPLAYABLE_CHALLENGES = 5;

// BrnChallengeListComponent.h:114
extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

// BrnChallengeListComponent.h:116
extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

// BrnChallengeListComponent.h:117
extern char[] KAC_APT_STATE_SHOW_BUTTON;

// BrnChallengeListComponent.h:118
extern char[] KAC_APT_STATE_FORMAT;

// BrnChallengeListComponent.h:119
extern char[] KAC_APT_STATE_TEXT_FORMAT;

// BrnChallengeListComponent.h:120
extern char[] KAC_CHALLENGE_STRING_ID;

// BrnChallengeListComponent.h:44
struct BrnGui::ChallengeListComponent : public CgsGui::GuiComponent {
private:
	// BrnChallengeListComponent.h:113
	extern const int32_t KI_MAX_DISPLAYABLE_CHALLENGES = 5;

	// BrnChallengeListComponent.h:114
	extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

	// BrnChallengeListComponent.cpp:21
	extern const char[21] KAC_APT_STATE_HIGHLIGHTED_INDEX;

	// BrnChallengeListComponent.cpp:22
	extern const char[16] KAC_APT_STATE_SHOW_BUTTON;

	// BrnChallengeListComponent.cpp:23
	extern const char[13] KAC_APT_STATE_FORMAT;

	// BrnChallengeListComponent.cpp:24
	extern const char[12] KAC_APT_STATE_TEXT_FORMAT;

	// BrnChallengeListComponent.cpp:25
	extern const char[24] KAC_CHALLENGE_STRING_ID;

	// BrnChallengeListComponent.cpp:27
	extern const char *[3] KAC_STATE_NAMES;

	// BrnChallengeListComponent.h:124
	char[5][16] maacAptState;

	// BrnChallengeListComponent.h:125
	char[5][16] maacAptStateText;

	// BrnChallengeListComponent.h:127
	BrnGui::GuiCache * mpGuiCache;

	// BrnChallengeListComponent.h:128
	const ChallengeList * mpChallengeList;

	// BrnChallengeListComponent.h:129
	GuiEventFburnChallengeEveryPlayerStatus mEveryPlayerCompletionStatus;

	// BrnChallengeListComponent.h:131
	int32_t miNumPlayers;

	// BrnChallengeListComponent.h:132
	int32_t miNumChallenges;

	// BrnChallengeListComponent.h:133
	int32_t miStartChallengeIndex;

	// BrnChallengeListComponent.h:134
	int32_t miHighlightedIndex;

	// BrnChallengeListComponent.h:136
	bool mbDirty;

	// BrnChallengeListComponent.h:137
	bool mbShowButton;

public:
	// BrnChallengeListComponent.cpp:56
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnChallengeListComponent.cpp:94
	void Update();

	// BrnChallengeListComponent.cpp:193
	bool HighlightPrevious();

	// BrnChallengeListComponent.cpp:231
	bool HighlightNext();

	// BrnChallengeListComponent.cpp:269
	void Setup(BrnGui::GuiCache *, int32_t, bool);

	// BrnChallengeListComponent.cpp:311
	CgsID GetHighlightedChallengeID() const;

	// BrnChallengeListComponent.h:155
	bool IsChallengeSelectable();

	// BrnChallengeListComponent.h:161
	BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle(CgsID) const;

	// BrnChallengeListComponent.cpp:373
	void HandleEveryPlayerCompletionStatus(const GuiEventFburnChallengeEveryPlayerStatus *);

	// BrnChallengeListComponent.h:169
	void ShowButton(bool);

	// BrnChallengeListComponent.h:179
	bool IsAtTopOfList() const;

	// BrnChallengeListComponent.h:185
	bool IsAtBottomOfList() const;

private:
	// BrnChallengeListComponent.cpp:335
	const ChallengeListEntry * GetFilteredChallenge(int32_t, int32_t *) const;

	// BrnChallengeListComponent.cpp:387
	void ShowDescriptionInTicker();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ChallengeListComponent {
	public:
		// BrnChallengeListComponent.h:179
		bool IsAtTopOfList() const;

		// BrnChallengeListComponent.h:185
		bool IsAtBottomOfList() const;

		// BrnChallengeListComponent.h:169
		void ShowButton(bool);

		// BrnChallengeListComponent.h:155
		bool IsChallengeSelectable();

		// BrnChallengeListComponent.h:161
		BrnResource::ChallengeListEntry::EFreeburnChallengeStyle GetChallengeStyle(CgsID) const;

	private:
		// BrnChallengeListComponent.h:113
		extern const int32_t KI_MAX_DISPLAYABLE_CHALLENGES = 5;

		// BrnChallengeListComponent.h:114
		extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

		// BrnChallengeListComponent.h:116
		extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

		// BrnChallengeListComponent.h:117
		extern char[] KAC_APT_STATE_SHOW_BUTTON;

		// BrnChallengeListComponent.h:118
		extern char[] KAC_APT_STATE_FORMAT;

		// BrnChallengeListComponent.h:119
		extern char[] KAC_APT_STATE_TEXT_FORMAT;

		// BrnChallengeListComponent.h:120
		extern char[] KAC_CHALLENGE_STRING_ID;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ChallengeListComponent {
	public:
		ChallengeListComponent();

	private:
		// BrnChallengeListComponent.h:113
		extern const int32_t KI_MAX_DISPLAYABLE_CHALLENGES = 5;

		// BrnChallengeListComponent.h:114
		extern const int32_t KI_MAX_STATE_STRING_LENGTH = 16;

		// BrnChallengeListComponent.h:116
		extern char[] KAC_APT_STATE_HIGHLIGHTED_INDEX;

		// BrnChallengeListComponent.h:117
		extern char[] KAC_APT_STATE_SHOW_BUTTON;

		// BrnChallengeListComponent.h:118
		extern char[] KAC_APT_STATE_FORMAT;

		// BrnChallengeListComponent.h:119
		extern char[] KAC_APT_STATE_TEXT_FORMAT;

		// BrnChallengeListComponent.h:120
		extern char[] KAC_CHALLENGE_STRING_ID;

	}

}

// BrnChallengeListComponent.h:44
void BrnGui::ChallengeListComponent::ChallengeListComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

