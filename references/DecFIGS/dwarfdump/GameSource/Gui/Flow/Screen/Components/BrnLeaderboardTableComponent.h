// BrnLeaderboardTableComponent.h:91
extern const int32_t KI_MAX_COLUMNS = 10;

// BrnLeaderboardTableComponent.h:94
extern char[] KAC_COLUMN_NAME_TEMPLATE;

// BrnLeaderboardTableComponent.h:44
struct BrnGui::LeaderboardTableComponent : public CgsGui::GuiComponent {
private:
	// BrnLeaderboardTableComponent.h:91
	extern const int32_t KI_MAX_COLUMNS = 10;

	// BrnLeaderboardTableComponent.h:93
	LeaderboardColumnComponent[10] maColumns;

	// BrnLeaderboardTableComponent.cpp:25
	extern const char[10] KAC_COLUMN_NAME_TEMPLATE;

	// BrnLeaderboardTableComponent.h:96
	int32_t miColumnsUsed;

	// BrnLeaderboardTableComponent.h:97
	int32_t miRowsUsed;

	// BrnLeaderboardTableComponent.cpp:26
	extern const char *[10] KAPC_COLUMN_STRINGS;

	// BrnLeaderboardTableComponent.h:100
	Scoreboard mScoreboard;

	// BrnLeaderboardTableComponent.h:102
	int8_t miHighlight;

	// BrnLeaderboardTableComponent.h:103
	int8_t miLocalPlayer;

	// BrnLeaderboardTableComponent.h:105
	const BrnResource::VehicleList * mpVehicleList;

public:
	// BrnLeaderboardTableComponent.cpp:50
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnLeaderboardTableComponent.cpp:85
	void SetupScoreboard(const Scoreboard *);

	// BrnLeaderboardTableComponent.cpp:147
	void DrawScoreboard();

	// BrnLeaderboardTableComponent.h:129
	void SetHighlight(int8_t);

	// BrnLeaderboardTableComponent.h:136
	int8_t GetHighlight() const;

	// BrnLeaderboardTableComponent.h:143
	int8_t GetRowsUsed() const;

	// BrnLeaderboardTableComponent.h:150
	int8_t GetRowsBefore() const;

	// BrnLeaderboardTableComponent.h:157
	int8_t GetRowsAfter() const;

	// BrnLeaderboardTableComponent.cpp:371
	void GetHighlightedGamertag(PlayerName *);

private:
	// BrnLeaderboardTableComponent.cpp:231
	void SetCell(int32_t, int32_t, BrnNetwork::ScoreboardColumn::EDataType);

	// BrnLeaderboardTableComponent.cpp:335
	void LocaliseTextInCell(int32_t, int32_t, const char *, CgsLanguage::LanguageManager::ParameterFormatType);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LeaderboardTableComponent {
	public:
		// BrnLeaderboardTableComponent.h:150
		int8_t GetRowsBefore() const;

		// BrnLeaderboardTableComponent.h:157
		int8_t GetRowsAfter() const;

		// BrnLeaderboardTableComponent.h:129
		void SetHighlight(int8_t);

		// BrnLeaderboardTableComponent.h:136
		int8_t GetHighlight() const;

		// BrnLeaderboardTableComponent.h:143
		int8_t GetRowsUsed() const;

	private:
		// BrnLeaderboardTableComponent.h:91
		extern const int32_t KI_MAX_COLUMNS = 10;

		// BrnLeaderboardTableComponent.h:94
		extern char[] KAC_COLUMN_NAME_TEMPLATE;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LeaderboardTableComponent {
	public:
		LeaderboardTableComponent();

	private:
		// BrnLeaderboardTableComponent.h:91
		extern const int32_t KI_MAX_COLUMNS = 10;

		// BrnLeaderboardTableComponent.h:94
		extern char[] KAC_COLUMN_NAME_TEMPLATE;

	}

}

// BrnLeaderboardTableComponent.h:44
void BrnGui::LeaderboardTableComponent::LeaderboardTableComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

