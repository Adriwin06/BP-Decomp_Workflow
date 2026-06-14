// BrnChallengeSelector.h:126
extern char[] KAC_TEXT_FIELD_NAME;

// BrnChallengeSelector.h:57
struct BrnGui::ChallengeSelector : public CgsGui::GuiComponent {
private:
	// BrnChallengeSelector.cpp:23
	extern const char[8] KAC_TEXT_FIELD_NAME;

	// BrnChallengeSelector.h:129
	BrnGui::TextField mTextfield;

	// BrnChallengeSelector.h:134
	uint16_t[2000] mau16AvailableChallengeIndexToChallengeIndexMapping;

	// BrnChallengeSelector.h:135
	int32_t miAvailableChallenges;

	// BrnChallengeSelector.h:136
	int32_t miCurrentAvailableChallengeIndex;

	// BrnChallengeSelector.h:138
	const ChallengeList * mpChallengeList;

	// BrnChallengeSelector.h:139
	BrnGui::GuiCache * mpGuiCache;

	// BrnChallengeSelector.h:141
	bool mbIsHost;

	// BrnChallengeSelector.h:142
	bool mbVisible;

public:
	// BrnChallengeSelector.cpp:44
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnChallengeSelector.h:163
	void Show();

	// BrnChallengeSelector.h:200
	void Hide();

	// BrnChallengeSelector.cpp:161
	void SelectAvailableChallengeByID(CgsID, bool);

	// BrnChallengeSelector.cpp:204
	void SelectAvailableChallenge(int32_t, bool);

	// BrnChallengeSelector.h:249
	void SetChallengeList(const ChallengeList *);

	// BrnChallengeSelector.cpp:90
	int32_t SetAvailableChallenges(int32_t);

	// BrnChallengeSelector.cpp:146
	int32_t GetAvailableChallengeCount();

	// BrnChallengeSelector.cpp:291
	void HandleLoadNotification(const char *);

	// BrnChallengeSelector.h:261
	bool IsVisible();

	// BrnChallengeSelector.cpp:323
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnChallengeSelector.h:275
	void SetGuiCachePointer(BrnGui::GuiCache *);

private:
	// BrnChallengeSelector.cpp:131
	const ChallengeListEntry * GetAvailableChallengeData(int32_t);

	// BrnChallengeSelector.cpp:116
	int32_t GetChallengeIndex(int32_t);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ChallengeSelector {
	public:
		// BrnChallengeSelector.h:163
		void Show();

		// BrnChallengeSelector.h:261
		bool IsVisible();

		// BrnChallengeSelector.h:200
		void Hide();

		// BrnChallengeSelector.h:249
		void SetChallengeList(const ChallengeList *);

		// BrnChallengeSelector.h:275
		void SetGuiCachePointer(BrnGui::GuiCache *);

	private:
		// BrnChallengeSelector.h:126
		extern char[] KAC_TEXT_FIELD_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ChallengeSelector {
	public:
		ChallengeSelector();

	private:
		// BrnChallengeSelector.h:126
		extern char[] KAC_TEXT_FIELD_NAME;

	}

}

// BrnChallengeSelector.h:57
void BrnGui::ChallengeSelector::ChallengeSelector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

