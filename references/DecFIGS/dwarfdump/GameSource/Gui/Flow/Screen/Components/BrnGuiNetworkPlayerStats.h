// BrnGuiNetworkPlayerStats.h:132
extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

// BrnGuiNetworkPlayerStats.h:133
extern const int32_t KI_MAX_STAT_ROWS = 6;

// BrnGuiNetworkPlayerStats.h:135
extern char[] KAC_DESCRIPTION_COMPONENT;

// BrnGuiNetworkPlayerStats.h:136
extern char[] KAC_VALUE_COMPONENT;

// BrnGuiNetworkPlayerStats.h:137
extern char[] KAC_USERNAME_COMPONENT;

// BrnGuiNetworkPlayerStats.h:138
extern char[] KAC_WORLD_RANK_DESCRIPTION_COMPONENT;

// BrnGuiNetworkPlayerStats.h:139
extern char[] KAC_WORLD_RANK_VALUE_COMPONENT;

// BrnGuiNetworkPlayerStats.h:140
extern char[] KAC_APT_STATE;

// BrnGuiNetworkPlayerStats.h:141
extern char[] KAC_PLAYER_IMAGE_INDEX;

// BrnGuiNetworkPlayerStats.h:143
extern const const char *[2] KAP_MARKED_MAN_STATE_ID;

// BrnGuiNetworkPlayerStats.h:145
extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_FORMAT_LOOKUP;

// BrnGuiNetworkPlayerStats.h:146
extern char[] KAC_VALUE_STRING_ID_FORMAT;

// BrnGuiNetworkPlayerStats.h:147
extern char[] KAC_WORLD_RANK_DESCRIPTION_STRING_ID;

// BrnGuiNetworkPlayerStats.h:148
extern char[] KAC_WORLD_RANK_VALUE_STRING_ID;

// BrnGuiNetworkPlayerStats.h:149
extern char[] KAC_NO_DATA_STRING_ID;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiNetworkPlayerStats {
		// BrnGuiNetworkPlayerStats.h:57
		enum EState {
			E_STATE_VISIBLE = 0,
			E_STATE_INVISIBLE = 1,
			E_STATE_COUNT = 2,
		}

		// BrnGuiNetworkPlayerStats.h:152
		struct StatRow {
			// BrnGuiNetworkPlayerStats.h:154
			BrnGui::TextField mDescription;

			// BrnGuiNetworkPlayerStats.h:155
			BrnGui::TextField mValue;

		}

	}

}

// BrnGuiNetworkPlayerStats.h:54
struct BrnGui::GuiNetworkPlayerStats : public CgsGui::GuiComponent {
private:
	// BrnGuiNetworkPlayerStats.h:132
	extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

	// BrnGuiNetworkPlayerStats.h:133
	extern const int32_t KI_MAX_STAT_ROWS = 6;

	// BrnGuiNetworkPlayerStats.cpp:26
	extern const char[14] KAC_DESCRIPTION_COMPONENT;

	// BrnGuiNetworkPlayerStats.cpp:27
	extern const char[8] KAC_VALUE_COMPONENT;

	// BrnGuiNetworkPlayerStats.cpp:28
	extern const char[9] KAC_USERNAME_COMPONENT;

	// BrnGuiNetworkPlayerStats.cpp:29
	extern const char[21] KAC_WORLD_RANK_DESCRIPTION_COMPONENT;

	// BrnGuiNetworkPlayerStats.cpp:30
	extern const char[15] KAC_WORLD_RANK_VALUE_COMPONENT;

	// BrnGuiNetworkPlayerStats.cpp:31
	extern const char[10] KAC_APT_STATE;

	// BrnGuiNetworkPlayerStats.cpp:32
	extern const char[17] KAC_PLAYER_IMAGE_INDEX;

	// BrnGuiNetworkPlayerStats.cpp:40
	extern const char *[2] KAPC_STATE_ID;

	// BrnGuiNetworkPlayerStats.cpp:46
	extern const const char *[2] KAP_MARKED_MAN_STATE_ID;

	// BrnGuiNetworkPlayerStats.cpp:52
	extern const char *[6] KAPC_STAT_DESCRIPTION_STRING_ID;

	// BrnGuiNetworkPlayerStats.cpp:62
	extern const CgsLanguage::LanguageManager::ParameterFormatType[5] KAE_FORMAT_LOOKUP;

	// BrnGuiNetworkPlayerStats.cpp:34
	extern const char[15] KAC_VALUE_STRING_ID_FORMAT;

	// BrnGuiNetworkPlayerStats.cpp:36
	extern const char[19] KAC_WORLD_RANK_DESCRIPTION_STRING_ID;

	// BrnGuiNetworkPlayerStats.cpp:37
	extern const char[12] KAC_WORLD_RANK_VALUE_STRING_ID;

	// BrnGuiNetworkPlayerStats.cpp:38
	extern const char[30] KAC_NO_DATA_STRING_ID;

	// BrnGuiNetworkPlayerStats.h:158
	BrnGui::GuiNetworkPlayerStats::StatRow[6] maStatRows;

	// BrnGuiNetworkPlayerStats.h:159
	BrnGui::TextField mUserName;

	// BrnGuiNetworkPlayerStats.h:160
	BrnGui::GuiNetworkPlayerStats::StatRow mWorldRank;

	// BrnGuiNetworkPlayerStats.h:162
	BrnGui::GuiNetworkPlayerStats::EState meState;

	// BrnGuiNetworkPlayerStats.h:164
	int32_t miPlayerImageIndex;

	// BrnGuiNetworkPlayerStats.h:166
	bool mbIsLoaded;

	// BrnGuiNetworkPlayerStats.h:167
	bool mbIsDirty;

public:
	// BrnGuiNetworkPlayerStats.cpp:102
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnGuiNetworkPlayerStats.cpp:137
	void Destruct();

	// BrnGuiNetworkPlayerStats.cpp:251
	void SetInfo(const char *, int32_t, const NetworkPlayerStats *, int32_t, bool, BrnGui::GuiCache *);

	// BrnGuiNetworkPlayerStats.cpp:154
	void SetState(BrnGui::GuiNetworkPlayerStats::EState);

	// BrnGuiNetworkPlayerStats.h:173
	bool IsVisible() const;

	// BrnGuiNetworkPlayerStats.h:185
	bool IsComponentLoaded() const;

	// BrnGuiNetworkPlayerStats.h:179
	void SetComponentLoaded();

	// BrnGuiNetworkPlayerStats.cpp:394
	void AppendExpectedAptComponent(BrnGui::GuiFlow, BrnGui::GuiCache *);

	// BrnGuiNetworkPlayerStats.h:112
	void DisplayMarkedMan(bool);

	// BrnGuiNetworkPlayerStats.cpp:193
	void FormatNetworkStats(char *, int, const NetworkPlayerStats *, BrnNetwork::NetworkPlayerStats::EStatsValue, BrnGui::GuiCache *);

	// BrnGuiNetworkPlayerStats.cpp:355
	void SetPlayerImageIndex(int32_t);

	// BrnGuiNetworkPlayerStats.cpp:369
	void Update();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiNetworkPlayerStats {
	public:
		// BrnGuiNetworkPlayerStats.h:185
		bool IsComponentLoaded() const;

		// BrnGuiNetworkPlayerStats.h:173
		bool IsVisible() const;

		// BrnGuiNetworkPlayerStats.h:179
		void SetComponentLoaded();

	private:
		// BrnGuiNetworkPlayerStats.h:132
		extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

		// BrnGuiNetworkPlayerStats.h:133
		extern const int32_t KI_MAX_STAT_ROWS = 6;

		// BrnGuiNetworkPlayerStats.h:135
		extern char[] KAC_DESCRIPTION_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:136
		extern char[] KAC_VALUE_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:137
		extern char[] KAC_USERNAME_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:138
		extern char[] KAC_WORLD_RANK_DESCRIPTION_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:139
		extern char[] KAC_WORLD_RANK_VALUE_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:140
		extern char[] KAC_APT_STATE;

		// BrnGuiNetworkPlayerStats.h:141
		extern char[] KAC_PLAYER_IMAGE_INDEX;

		// BrnGuiNetworkPlayerStats.h:143
		extern const const char *[2] KAP_MARKED_MAN_STATE_ID;

		// BrnGuiNetworkPlayerStats.h:145
		extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_FORMAT_LOOKUP;

		// BrnGuiNetworkPlayerStats.h:146
		extern char[] KAC_VALUE_STRING_ID_FORMAT;

		// BrnGuiNetworkPlayerStats.h:147
		extern char[] KAC_WORLD_RANK_DESCRIPTION_STRING_ID;

		// BrnGuiNetworkPlayerStats.h:148
		extern char[] KAC_WORLD_RANK_VALUE_STRING_ID;

		// BrnGuiNetworkPlayerStats.h:149
		extern char[] KAC_NO_DATA_STRING_ID;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiNetworkPlayerStats {
		// BrnGuiNetworkPlayerStats.h:152
		struct StatRow {
			// BrnGuiNetworkPlayerStats.h:154
			BrnGui::TextField mDescription;

			// BrnGuiNetworkPlayerStats.h:155
			BrnGui::TextField mValue;

		}

	public:
		GuiNetworkPlayerStats();

	private:
		// BrnGuiNetworkPlayerStats.h:132
		extern const int32_t KI_NUM_COMPONENTS_TO_LOAD;

		// BrnGuiNetworkPlayerStats.h:133
		extern const int32_t KI_MAX_STAT_ROWS = 6;

		// BrnGuiNetworkPlayerStats.h:135
		extern char[] KAC_DESCRIPTION_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:136
		extern char[] KAC_VALUE_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:137
		extern char[] KAC_USERNAME_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:138
		extern char[] KAC_WORLD_RANK_DESCRIPTION_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:139
		extern char[] KAC_WORLD_RANK_VALUE_COMPONENT;

		// BrnGuiNetworkPlayerStats.h:140
		extern char[] KAC_APT_STATE;

		// BrnGuiNetworkPlayerStats.h:141
		extern char[] KAC_PLAYER_IMAGE_INDEX;

		// BrnGuiNetworkPlayerStats.h:143
		extern const const char *[2] KAP_MARKED_MAN_STATE_ID;

		// BrnGuiNetworkPlayerStats.h:145
		extern CgsLanguage::LanguageManager::ParameterFormatType[] KAE_FORMAT_LOOKUP;

		// BrnGuiNetworkPlayerStats.h:146
		extern char[] KAC_VALUE_STRING_ID_FORMAT;

		// BrnGuiNetworkPlayerStats.h:147
		extern char[] KAC_WORLD_RANK_DESCRIPTION_STRING_ID;

		// BrnGuiNetworkPlayerStats.h:148
		extern char[] KAC_WORLD_RANK_VALUE_STRING_ID;

		// BrnGuiNetworkPlayerStats.h:149
		extern char[] KAC_NO_DATA_STRING_ID;

	}

}

// BrnGuiNetworkPlayerStats.h:54
void BrnGui::GuiNetworkPlayerStats::GuiNetworkPlayerStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

