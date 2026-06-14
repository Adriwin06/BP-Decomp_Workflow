// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineCustomMatch {
		// BrnOnlineCustomMatch.h:147
		struct StringGameModeMapping {
			// BrnOnlineCustomMatch.h:149
			char * mpcStringID;

			// BrnOnlineCustomMatch.h:150
			BrnNetwork::ESearchGameModes meGameMode;

		}

	}

	// BrnOnlineCustomMatch.h:36
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_TEXT_FIELDS = 20;

	// BrnOnlineCustomMatch.h:37
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_ICONS = 15;

}

// BrnOnlineCustomMatch.h:180
extern int32_t[] maiEventToObserve;

// BrnOnlineCustomMatch.h:181
extern const int32_t miNumEventsObserved;

// BrnOnlineCustomMatch.h:182
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineCustomMatch.h:183
extern const int32_t miNumResourcesToLoad;

// BrnOnlineCustomMatch.h:185
extern const int32_t KI_MAX_DISPLAYABLE_GAMES;

// BrnOnlineCustomMatch.h:187
extern char[] KAC_SEARCH_PARAMS_COMPONENT;

// BrnOnlineCustomMatch.h:188
extern char[] KAC_FOUND_GAMES_COMPONENT;

// BrnOnlineCustomMatch.h:189
extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

// BrnOnlineCustomMatch.h:190
extern char[] KAC_MESSAGE_TEXT_COMPONENT;

// BrnOnlineCustomMatch.h:191
extern char[] KAC_NUM_GAMES_FOUND_TEXT_COMPONENT;

// BrnOnlineCustomMatch.h:193
extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

// BrnOnlineCustomMatch.h:194
extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

// BrnOnlineCustomMatch.h:195
extern char[] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

// BrnOnlineCustomMatch.h:196
extern char[] KAC_FOUND_GAMES_ANIMATION_COMPONENT;

// BrnOnlineCustomMatch.h:197
extern char[] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

// BrnOnlineCustomMatch.h:202
extern char[] KAC_NO_GAMES_FOUND_STRING_ID;

// BrnOnlineCustomMatch.h:203
extern char[] KAC_RANKED_TITLE_STRING_ID;

// BrnOnlineCustomMatch.h:204
extern char[] KAC_SEARCHING_STRING_ID;

// BrnOnlineCustomMatch.h:205
extern char[] KAC_JOINING_STRING_ID;

// BrnOnlineCustomMatch.h:206
extern char[] KAC_GAME_MODE_STRING_ID;

// BrnOnlineCustomMatch.h:207
extern char[] KAC_OPPONENT_OPTION_STRING_ID;

// BrnOnlineCustomMatch.h:208
extern char[] KAC_NUM_GAMES_FOUND_STRING_ID;

// BrnOnlineCustomMatch.h:209
extern char[] KAC_NUM_GAMES_FOUND_SINGULAR_STRING_ID;

// BrnOnlineCustomMatch.h:210
extern char[] KAC_NUM_PLAYERS_STRING_ID;

// BrnOnlineCustomMatch.h:211
extern char[] KAC_NO_PREVIOUS_GAME_MODE_STRING_ID;

// BrnOnlineCustomMatch.h:216
extern BrnGui::OnlineCustomMatch::StringGameModeMapping[] KA_GAME_MODE_SEARCH_OPTION_STRING_IDS;

// BrnOnlineCustomMatch.h:238
extern char[] macTableName;

// BrnOnlineCustomMatch.h:239
extern const int8_t miTableNumRows;

// BrnOnlineCustomMatch.h:240
extern const int8_t miTableNumColumns;

// BrnOnlineCustomMatch.h:241
extern BrnGui::TableCell::TableCellComponentTypes[] maTableRowComponentTypes;

// BrnOnlineCustomMatch.h:242
extern const char *[] maIconStates;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineCustomMatch {
		// BrnOnlineCustomMatch.h:147
		struct StringGameModeMapping {
			// BrnOnlineCustomMatch.h:149
			char * mpcStringID;

			// BrnOnlineCustomMatch.h:150
			BrnNetwork::ESearchGameModes meGameMode;

		}

	}

	// BrnOnlineCustomMatch.h:36
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_TEXT_FIELDS = 20;

	// BrnOnlineCustomMatch.h:37
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_ICONS = 15;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineCustomMatch {
		// BrnOnlineCustomMatch.h:147
		struct StringGameModeMapping {
			// BrnOnlineCustomMatch.h:149
			char * mpcStringID;

			// BrnOnlineCustomMatch.h:150
			BrnNetwork::ESearchGameModes meGameMode;

		}

		// BrnOnlineCustomMatch.h:163
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_SEARCHING = 3,
			E_SUBSTATE_SELECTING_GAME = 4,
			E_SUBSTATE_JOINING = 5,
			E_SUBSTATE_NO_GAMES_FOUND = 6,
			E_SUBSTATE_NO_GAMES_FOUND_IN_GAME = 7,
			E_SUBSTATE_COUNT = 8,
		}

	}

	// BrnOnlineCustomMatch.h:36
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_TEXT_FIELDS = 20;

	// BrnOnlineCustomMatch.h:37
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_ICONS = 15;

}

// BrnOnlineCustomMatch.h:53
struct BrnGui::OnlineCustomMatch : public CgsGui::State {
private:
	// BrnOnlineCustomMatch.h:178
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 6;

	// BrnOnlineCustomMatch.cpp:30
	extern const int32_t[8] maiEventToObserve;

	// BrnOnlineCustomMatch.cpp:42
	extern const int32_t miNumEventsObserved = 8;

	// BrnOnlineCustomMatch.cpp:44
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineCustomMatch.cpp:49
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineCustomMatch.h:185
	extern const int32_t KI_MAX_DISPLAYABLE_GAMES;

	// BrnOnlineCustomMatch.cpp:51
	extern const char[12] KAC_SEARCH_PARAMS_COMPONENT;

	// BrnOnlineCustomMatch.cpp:52
	extern const char[10] KAC_FOUND_GAMES_COMPONENT;

	// BrnOnlineCustomMatch.cpp:53
	extern const char[7] KAC_MESSAGE_BUTTONS_COMPONENT;

	// BrnOnlineCustomMatch.cpp:54
	extern const char[12] KAC_MESSAGE_TEXT_COMPONENT;

	// BrnOnlineCustomMatch.cpp:55
	extern const char[14] KAC_NUM_GAMES_FOUND_TEXT_COMPONENT;

	// BrnOnlineCustomMatch.cpp:57
	extern const char[22] KAC_MESSAGE_ANIMATION_COMPONENT;

	// BrnOnlineCustomMatch.cpp:58
	extern const char[25] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

	// BrnOnlineCustomMatch.cpp:59
	extern const char[23] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

	// BrnOnlineCustomMatch.cpp:60
	extern const char[21] KAC_FOUND_GAMES_ANIMATION_COMPONENT;

	// BrnOnlineCustomMatch.cpp:61
	extern const char[24] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

	// BrnOnlineCustomMatch.cpp:92
	extern const char *[3] KAPC_ANIMATION_STATES;

	// BrnOnlineCustomMatch.cpp:64
	extern const char[29] KAC_NO_GAMES_FOUND_STRING_ID;

	// BrnOnlineCustomMatch.cpp:65
	extern const char[27] KAC_RANKED_TITLE_STRING_ID;

	// BrnOnlineCustomMatch.cpp:66
	extern const char[30] KAC_SEARCHING_STRING_ID;

	// BrnOnlineCustomMatch.cpp:67
	extern const char[28] KAC_JOINING_STRING_ID;

	// BrnOnlineCustomMatch.cpp:68
	extern const char[25] KAC_GAME_MODE_STRING_ID;

	// BrnOnlineCustomMatch.cpp:73
	extern const char[30] KAC_OPPONENT_OPTION_STRING_ID;

	// BrnOnlineCustomMatch.cpp:69
	extern const char[35] KAC_NUM_GAMES_FOUND_STRING_ID;

	// BrnOnlineCustomMatch.cpp:70
	extern const char[43] KAC_NUM_GAMES_FOUND_SINGULAR_STRING_ID;

	// BrnOnlineCustomMatch.cpp:71
	extern const char[31] KAC_NUM_PLAYERS_STRING_ID;

	// BrnOnlineCustomMatch.cpp:125
	extern const char[33] KAC_NO_PREVIOUS_GAME_MODE_STRING_ID;

	// BrnOnlineCustomMatch.cpp:75
	extern const char *[2] KPAC_RANKED_OPTION_STRING_IDS;

	// BrnOnlineCustomMatch.cpp:81
	extern const char *[2] KAPC_YES_NO_BUTTON_STRING_ID;

	// BrnOnlineCustomMatch.cpp:87
	extern const char *[1] KAPC_OK_BUTTON_STRING_ID;

	// BrnOnlineCustomMatch.cpp:99
	extern const BrnGui::OnlineCustomMatch::StringGameModeMapping[3] KA_GAME_MODE_SEARCH_OPTION_STRING_IDS;

	// BrnOnlineCustomMatch.cpp:107
	extern const char *[7] KAPC_GAME_MODE_STRING_IDS;

	// BrnOnlineCustomMatch.cpp:117
	extern const char *[4] KAPC_OPPONENT_OPTION_STRING_IDS;

	// BrnOnlineCustomMatch.h:220
	BrnGui::OnlineCustomMatch::ESubState meSubState;

	// BrnOnlineCustomMatch.h:223
	BrnGui::AnimationComponent mMessageAnimation;

	// BrnOnlineCustomMatch.h:224
	BrnGui::AnimationComponent mMessageButtonsAnimation;

	// BrnOnlineCustomMatch.h:225
	BrnGui::AnimationComponent mSearchParamsAnimation;

	// BrnOnlineCustomMatch.h:226
	BrnGui::AnimationComponent mFoundGamesAnimation;

	// BrnOnlineCustomMatch.h:227
	BrnGui::AnimationComponent mButtonPromptAnimation;

	// BrnOnlineCustomMatch.h:229
	BrnGui::MenuToggleGroup mSearchParms;

	// BrnOnlineCustomMatch.h:230
	BrnGui::MenuComponent mMessageButtons;

	// BrnOnlineCustomMatch.h:232
	BrnGui::TextField mMessageText;

	// BrnOnlineCustomMatch.h:233
	BrnGui::TextField mNumGamesFoundText;

	// BrnOnlineCustomMatch.h:235
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineCustomMatch.h:237
	BrnGui::Table mTable;

	// BrnOnlineCustomMatch.cpp:127
	extern const char[11] macTableName;

	// BrnOnlineCustomMatch.cpp:128
	extern const int8_t miTableNumRows = 5;

	// BrnOnlineCustomMatch.cpp:129
	extern const int8_t miTableNumColumns = 7;

	// BrnOnlineCustomMatch.cpp:130
	extern const BrnGui::TableCell::TableCellComponentTypes[7] maTableRowComponentTypes;

	// BrnOnlineCustomMatch.cpp:140
	extern const const char *[6] maIconStates;

	// BrnOnlineCustomMatch.h:243
	BrnGui::TextField[20] maTextFields;

	// BrnOnlineCustomMatch.h:244
	BrnGui::IconComponent[15] maIcons;

	// BrnOnlineCustomMatch.h:245
	CgsGui::GuiComponent *[16][16] maapTableCellComponentPtrs;

	// BrnOnlineCustomMatch.h:246
	TableDataSet mTableData;

	// BrnOnlineCustomMatch.h:247
	TableRowDataSet[16] maTableRowDataSets;

	// BrnOnlineCustomMatch.h:249
	bool[8] mabPositionHandled;

	// BrnOnlineCustomMatch.h:251
	int8_t miFirstRow;

	// BrnOnlineCustomMatch.h:252
	int8_t miLastRow;

	// BrnOnlineCustomMatch.h:254
	bool mbHasRecievedSearchResults;

	// BrnOnlineCustomMatch.h:255
	GuiEventNetworkCustomMatchResults mSearchResults;

	// BrnOnlineCustomMatch.h:257
	GuiEventNetworkCustomMatchSearch mLastSearchParams;

public:
	// BrnOnlineCustomMatch.cpp:167
	virtual void OnEnter();

	// BrnOnlineCustomMatch.cpp:395
	virtual void OnLeave();

	// BrnOnlineCustomMatch.cpp:274
	virtual void Update();

	// BrnOnlineCustomMatch.cpp:380
	const char * GetCurrentlySelectedGame();

	// BrnOnlineCustomMatch.h:138
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineCustomMatch.cpp:496
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineCustomMatch.cpp:544
	void HandleControllerInputSelectParams(const GuiEventControllerInputPressed *);

	// BrnOnlineCustomMatch.cpp:627
	void HandleControllerInputSelectGame(const GuiEventControllerInputPressed *);

	// BrnOnlineCustomMatch.cpp:731
	void HandleControllerInputNoGames(const GuiEventControllerInputPressed *);

	// BrnOnlineCustomMatch.cpp:823
	void HandleControllerInputNoGamesInGame(const GuiEventControllerInputPressed *);

	// BrnOnlineCustomMatch.cpp:908
	void HandleSearchResults();

	// BrnOnlineCustomMatch.cpp:948
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineCustomMatch.cpp:1025
	void HandleInGameFailedEvent(const GuiEventNetworkInGameFailed *);

	// BrnOnlineCustomMatch.cpp:423
	void CheckForCompletedLoads();

	// BrnOnlineCustomMatch.cpp:465
	void ShowInitialScreen();

	// BrnOnlineCustomMatch.cpp:1045
	void ShowParamSelection();

	// BrnOnlineCustomMatch.cpp:1115
	void ShowFoundGames();

	// BrnOnlineCustomMatch.cpp:1095
	void ShowMessage(const char *);

	// BrnOnlineCustomMatch.cpp:1271
	void ShowNoGamesFound();

	// BrnOnlineCustomMatch.cpp:1302
	void ShowNoGamesFoundInGame();

	// BrnOnlineCustomMatch.cpp:1333
	bool CheckPrivileges();

	// BrnOnlineCustomMatch.cpp:1188
	void FillInTable();

	// BrnOnlineCustomMatch.cpp:1348
	void HighlightLastSearchParams();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineCustomMatch {
		// BrnOnlineCustomMatch.h:147
		struct StringGameModeMapping {
			// BrnOnlineCustomMatch.h:149
			char * mpcStringID;

			// BrnOnlineCustomMatch.h:150
			BrnNetwork::ESearchGameModes meGameMode;

		}

	public:
		OnlineCustomMatch();

	private:
		// BrnOnlineCustomMatch.h:180
		extern int32_t[] maiEventToObserve;

		// BrnOnlineCustomMatch.h:181
		extern const int32_t miNumEventsObserved;

		// BrnOnlineCustomMatch.h:182
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineCustomMatch.h:183
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineCustomMatch.h:185
		extern const int32_t KI_MAX_DISPLAYABLE_GAMES;

		// BrnOnlineCustomMatch.h:187
		extern char[] KAC_SEARCH_PARAMS_COMPONENT;

		// BrnOnlineCustomMatch.h:188
		extern char[] KAC_FOUND_GAMES_COMPONENT;

		// BrnOnlineCustomMatch.h:189
		extern char[] KAC_MESSAGE_BUTTONS_COMPONENT;

		// BrnOnlineCustomMatch.h:190
		extern char[] KAC_MESSAGE_TEXT_COMPONENT;

		// BrnOnlineCustomMatch.h:191
		extern char[] KAC_NUM_GAMES_FOUND_TEXT_COMPONENT;

		// BrnOnlineCustomMatch.h:193
		extern char[] KAC_MESSAGE_ANIMATION_COMPONENT;

		// BrnOnlineCustomMatch.h:194
		extern char[] KAC_MESSAGE_BUTTONS_ANIMATION_COMPONENT;

		// BrnOnlineCustomMatch.h:195
		extern char[] KAC_SEARCH_PARAMS_ANIMATION_COMPONENT;

		// BrnOnlineCustomMatch.h:196
		extern char[] KAC_FOUND_GAMES_ANIMATION_COMPONENT;

		// BrnOnlineCustomMatch.h:197
		extern char[] KAC_BUTTON_PROMPT_ANIMATION_COMPONENT;

		// BrnOnlineCustomMatch.h:202
		extern char[] KAC_NO_GAMES_FOUND_STRING_ID;

		// BrnOnlineCustomMatch.h:203
		extern char[] KAC_RANKED_TITLE_STRING_ID;

		// BrnOnlineCustomMatch.h:204
		extern char[] KAC_SEARCHING_STRING_ID;

		// BrnOnlineCustomMatch.h:205
		extern char[] KAC_JOINING_STRING_ID;

		// BrnOnlineCustomMatch.h:206
		extern char[] KAC_GAME_MODE_STRING_ID;

		// BrnOnlineCustomMatch.h:207
		extern char[] KAC_OPPONENT_OPTION_STRING_ID;

		// BrnOnlineCustomMatch.h:208
		extern char[] KAC_NUM_GAMES_FOUND_STRING_ID;

		// BrnOnlineCustomMatch.h:209
		extern char[] KAC_NUM_GAMES_FOUND_SINGULAR_STRING_ID;

		// BrnOnlineCustomMatch.h:210
		extern char[] KAC_NUM_PLAYERS_STRING_ID;

		// BrnOnlineCustomMatch.h:211
		extern char[] KAC_NO_PREVIOUS_GAME_MODE_STRING_ID;

		// BrnOnlineCustomMatch.h:216
		extern BrnGui::OnlineCustomMatch::StringGameModeMapping[] KA_GAME_MODE_SEARCH_OPTION_STRING_IDS;

		// BrnOnlineCustomMatch.h:238
		extern char[] macTableName;

		// BrnOnlineCustomMatch.h:239
		extern const int8_t miTableNumRows;

		// BrnOnlineCustomMatch.h:240
		extern const int8_t miTableNumColumns;

		// BrnOnlineCustomMatch.h:241
		extern BrnGui::TableCell::TableCellComponentTypes[] maTableRowComponentTypes;

		// BrnOnlineCustomMatch.h:242
		extern const char *[] maIconStates;

	}

	// BrnOnlineCustomMatch.h:36
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_TEXT_FIELDS = 20;

	// BrnOnlineCustomMatch.h:37
	const int8_t KI_NUM_ONLINE_FOUND_GAMES_ICONS = 15;

}

// BrnOnlineCustomMatch.h:53
void BrnGui::OnlineCustomMatch::OnlineCustomMatch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

