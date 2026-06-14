// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineInstantResultsState {
		// BrnOnlineInstantResults.h:58
		struct AwardData {
			// BrnOnlineInstantResults.h:60
			extern const int32_t KI_MAX_AWARD_STRINGS = 6;

			// BrnOnlineInstantResults.h:62
			int8_t miMultiParamCount;

			// BrnOnlineInstantResults.h:63
			int8_t miSingleParamCount;

			// BrnOnlineInstantResults.h:65
			const char *[6] mapcMultiString;

			// BrnOnlineInstantResults.h:66
			const char *[6] mapcSingleString;

		public:
			// BrnOnlineInstantResults.h:69
			int32_t CountStringsSingle() const;

			// BrnOnlineInstantResults.h:72
			int32_t CountStringsPlural() const;

		}

	}

	// BrnOnlineInstantResults.h:36
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_TEXT_FIELDS = 40;

	// BrnOnlineInstantResults.h:37
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_ICONS = 8;

}

// BrnOnlineInstantResults.h:60
extern const int32_t KI_MAX_AWARD_STRINGS = 6;

// BrnOnlineInstantResults.h:75
extern BrnGui::OnlineInstantResultsState::AwardData[] KA_AWARD_OVERALL;

// BrnOnlineInstantResults.h:144
extern char[] KAC_CURRENT_ROUND_STRINGID;

// BrnOnlineInstantResults.h:145
extern char[] KAC_CURRENT_ROUND_FORMAT_STRINGID;

// BrnOnlineInstantResults.h:146
extern char[] KAC_AFTER_ROUND_FORMAT_STRINGID;

// BrnOnlineInstantResults.h:147
extern char[] KAC_AFTER_ROUNDS_FORMAT_STRINGID;

// BrnOnlineInstantResults.h:148
extern char[] KAC_INSTANT_RESULTS_STRING_ID;

// BrnOnlineInstantResults.h:149
extern char[] KAC_CURRENT_STANDINGS_STRING_ID;

// BrnOnlineInstantResults.h:150
extern char[] KAC_FINAL_STANDINGS_STRING_ID;

// BrnOnlineInstantResults.h:151
extern char[] KAC_DISCONNECTED_STRING_ID;

// BrnOnlineInstantResults.h:152
extern char[] KAC_NUM_LANDMARKS_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:153
extern char[] KAC_NUM_LANDMARK_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:154
extern char[] KAC_NUM_ELIMINATIONS_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:155
extern char[] KAC_NUM_ELIMINATION_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:156
extern char[] KAC_ELIMINATED_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:157
extern char[] KAC_DNF_FORMAT_STRING_ID;

// BrnOnlineInstantResults.h:158
extern char[] KAC_RACE_RESULT_COLUMN_STRINGID;

// BrnOnlineInstantResults.h:159
extern char[] KAC_ROAD_RAGE_RESULT_COLUMN_STRINGID;

// BrnOnlineInstantResults.h:160
extern char[] KAC_BURNING_HOME_RUN_RESULT_COLUMN_STRINGID;

// BrnOnlineInstantResults.h:161
extern char[] KAC_BURNING_HOME_RUN_STRINGID;

// BrnOnlineInstantResults.h:162
extern char[] KAC_RESULT_TIED_STRINGID;

// BrnOnlineInstantResults.h:168
extern char[] KAC_ANIMATION_COMPONENT_NAME;

// BrnOnlineInstantResults.h:169
extern char[] KAC_BUTTON_ANIMATION_COMPONENT_NAME;

// BrnOnlineInstantResults.h:173
extern int32_t[] maiEventToObserve;

// BrnOnlineInstantResults.h:174
extern const int32_t miNumEventsObserved;

// BrnOnlineInstantResults.h:175
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineInstantResults.h:176
extern const int32_t miNumResourcesToLoad;

// BrnOnlineInstantResults.h:179
extern char[] macTableName;

// BrnOnlineInstantResults.h:180
extern const uint32_t muTableNumRows;

// BrnOnlineInstantResults.h:181
extern const uint32_t muTableNumColumns;

// BrnOnlineInstantResults.h:182
extern BrnGui::TableCell::TableCellComponentTypes[] maTableRowComponentTypes;

// BrnOnlineInstantResults.h:183
extern const char *[] maIconStates;

// BrnOnlineInstantResults.h:202
extern const float32_t KF_STANDINGS_UPDATE_TIMEOUT;

// BrnOnlineInstantResults.h:203
extern const float32_t KF_UNORDERED_RESULTS_TIMEOUT;

// BrnOnlineInstantResults.h:210
extern char[] KAC_TITLE_TEXTFIELD_NAME;

// BrnOnlineInstantResults.h:212
extern char[] KAC_WINNER_GAMERTAG_TEXTFIELD_NAME;

// BrnOnlineInstantResults.h:215
extern char[] KAC_CURRENT_ROUND_TEXTFIELD_NAME;

// BrnOnlineInstantResults.h:218
extern char[] KAC_RESULT_COLUMN_HEADING_TEXTFIELD_NAME;

// BrnOnlineInstantResults.h:219
extern char[] KAC_REVENGE_COLUMN_HEADING_TEXTFIELD_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineInstantResultsState {
		// BrnOnlineInstantResults.h:58
		struct AwardData {
			// BrnOnlineInstantResults.h:60
			extern const int32_t KI_MAX_AWARD_STRINGS = 6;

			// BrnOnlineInstantResults.h:62
			int8_t miMultiParamCount;

			// BrnOnlineInstantResults.h:63
			int8_t miSingleParamCount;

			// BrnOnlineInstantResults.h:65
			const char *[6] mapcMultiString;

			// BrnOnlineInstantResults.h:66
			const char *[6] mapcSingleString;

		public:
			// BrnOnlineInstantResults.h:69
			int32_t CountStringsSingle() const;

			// BrnOnlineInstantResults.h:72
			int32_t CountStringsPlural() const;

		}

	}

	// BrnOnlineInstantResults.h:36
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_TEXT_FIELDS = 40;

	// BrnOnlineInstantResults.h:37
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_ICONS = 8;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineInstantResultsState {
		// BrnOnlineInstantResults.h:58
		struct AwardData {
			// BrnOnlineInstantResults.h:60
			extern const int32_t KI_MAX_AWARD_STRINGS = 6;

			// BrnOnlineInstantResults.h:62
			int8_t miMultiParamCount;

			// BrnOnlineInstantResults.h:63
			int8_t miSingleParamCount;

			// BrnOnlineInstantResults.h:65
			const char *[6] mapcMultiString;

			// BrnOnlineInstantResults.h:66
			const char *[6] mapcSingleString;

		public:
			// BrnOnlineInstantResults.h:69
			int32_t CountStringsSingle() const;

			// BrnOnlineInstantResults.h:72
			int32_t CountStringsPlural() const;

		}

		// BrnOnlineInstantResults.h:130
		enum EInternalState {
			E_ONLINE_INSTANT_RESULTS_LOADING_SCREEN = 0,
			E_ONLINE_INSTANT_RESULTS_LOADING_COMPONENTS = 1,
			E_ONLINE_INSTANT_RESULTS_UPDATING = 2,
			E_ONLINE_INSTANT_RESULTS_SHOWING = 3,
			E_ONLINE_INSTANT_RESULTS_STANDINGSUPDATE = 4,
			E_ONLINE_INSTANT_RESULTS_CURRENT_STANDINGSUPDATE = 5,
			E_ONLINE_INSTANT_RESULTS_FINAL_STANDINGSUPDATE = 6,
			E_ONLINE_INSTANT_RESULTS_FINAL_STANDINGS = 7,
			E_ONLINE_INSTANT_RESULTS_LOADING_STANDINGS = 8,
			E_ONLINE_INSTANT_RESULTS_DONE = 9,
		}

	}

	// BrnOnlineInstantResults.h:36
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_TEXT_FIELDS = 40;

	// BrnOnlineInstantResults.h:37
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_ICONS = 8;

}

// BrnOnlineInstantResults.h:53
struct BrnGui::OnlineInstantResultsState : public CgsGui::State {
	// BrnOnlineInstantResults.cpp:100
	extern const BrnGui::OnlineInstantResultsState::AwardData[11] KA_AWARD_OVERALL;

private:
	// BrnOnlineInstantResults.cpp:272
	extern const char[15] KAC_CURRENT_ROUND_STRINGID;

	// BrnOnlineInstantResults.cpp:273
	extern const char[28] KAC_CURRENT_ROUND_FORMAT_STRINGID;

	// BrnOnlineInstantResults.cpp:274
	extern const char[27] KAC_AFTER_ROUND_FORMAT_STRINGID;

	// BrnOnlineInstantResults.cpp:275
	extern const char[28] KAC_AFTER_ROUNDS_FORMAT_STRINGID;

	// BrnOnlineInstantResults.cpp:262
	extern const char[30] KAC_INSTANT_RESULTS_STRING_ID;

	// BrnOnlineInstantResults.cpp:263
	extern const char[40] KAC_CURRENT_STANDINGS_STRING_ID;

	// BrnOnlineInstantResults.cpp:264
	extern const char[38] KAC_FINAL_STANDINGS_STRING_ID;

	// BrnOnlineInstantResults.cpp:265
	extern const char[28] KAC_DISCONNECTED_STRING_ID;

	// BrnOnlineInstantResults.cpp:266
	extern const char[29] KAC_NUM_LANDMARKS_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:267
	extern const char[28] KAC_NUM_LANDMARK_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:268
	extern const char[32] KAC_NUM_ELIMINATIONS_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:269
	extern const char[31] KAC_NUM_ELIMINATION_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:270
	extern const char[26] KAC_ELIMINATED_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:271
	extern const char[30] KAC_DNF_FORMAT_STRING_ID;

	// BrnOnlineInstantResults.cpp:276
	extern const char[14] KAC_RACE_RESULT_COLUMN_STRINGID;

	// BrnOnlineInstantResults.cpp:277
	extern const char[39] KAC_ROAD_RAGE_RESULT_COLUMN_STRINGID;

	// BrnOnlineInstantResults.cpp:278
	extern const char[40] KAC_BURNING_HOME_RUN_RESULT_COLUMN_STRINGID;

	// BrnOnlineInstantResults.cpp:279
	extern const char[24] KAC_BURNING_HOME_RUN_STRINGID;

	// BrnOnlineInstantResults.cpp:280
	extern const char[21] KAC_RESULT_TIED_STRINGID;

	// BrnOnlineInstantResults.cpp:282
	extern const char *[8] KAPC_FINISH_STAT_STRINGID;

	// BrnOnlineInstantResults.h:166
	BrnGui::OnlineInstantResultsState::EInternalState meCurrentState;

	// BrnOnlineInstantResults.cpp:59
	extern const char[12] KAC_ANIMATION_COMPONENT_NAME;

	// BrnOnlineInstantResults.cpp:60
	extern const char[11] KAC_BUTTON_ANIMATION_COMPONENT_NAME;

	// BrnOnlineInstantResults.cpp:62
	extern const char *[3] KAPC_ANIMATION_STATES;

	// BrnOnlineInstantResults.cpp:69
	extern const char *[3] KAPC_BUTTON_ANIMATION_STATES;

	// BrnOnlineInstantResults.cpp:34
	extern const int32_t[12] maiEventToObserve;

	// BrnOnlineInstantResults.cpp:50
	extern const int32_t miNumEventsObserved = 12;

	// BrnOnlineInstantResults.cpp:52
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineInstantResults.cpp:57
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineInstantResults.h:178
	BrnGui::Table mTable;

	// BrnOnlineInstantResults.cpp:76
	extern const char[8] macTableName;

	// BrnOnlineInstantResults.cpp:77
	extern const uint32_t muTableNumRows = 8;

	// BrnOnlineInstantResults.cpp:78
	extern const uint32_t muTableNumColumns = 6;

	// BrnOnlineInstantResults.cpp:79
	extern const BrnGui::TableCell::TableCellComponentTypes[6] maTableRowComponentTypes;

	// BrnOnlineInstantResults.cpp:87
	extern const const char *[3] maIconStates;

	// BrnOnlineInstantResults.h:184
	BrnGui::TextField[40] maTextFields;

	// BrnOnlineInstantResults.h:185
	BrnGui::IconComponent[8] maIcons;

	// BrnOnlineInstantResults.h:186
	BrnGui::AnimationComponent mAnimationComponent;

	// BrnOnlineInstantResults.h:187
	BrnGui::AnimationComponent mButtonAnimationComponent;

	// BrnOnlineInstantResults.h:188
	CgsGui::GuiComponent *[16][16] maapTableCellComponentPtrs;

	// BrnOnlineInstantResults.h:189
	TableDataSet mTableData;

	// BrnOnlineInstantResults.h:190
	TableRowDataSet[16] maTableRowDataSets;

	// BrnOnlineInstantResults.h:192
	uint32_t miItemsLoaded;

	// BrnOnlineInstantResults.h:193
	uint32_t muNumTextFilesToLoad;

	// BrnOnlineInstantResults.h:195
	GuiEventNetworkDisconnected mDisconnectedEvent;

	// BrnOnlineInstantResults.h:196
	GuiEventOnlinePostEvent mOnlinePostEvent;

	// BrnOnlineInstantResults.h:197
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineInstantResults.h:198
	GuiEventOnlineEventFinishingOrder mOnlineFinishingOrder;

	// BrnOnlineInstantResults.h:199
	int32_t[8] maiOnlinePlayersIndexFromTablePosition;

	// BrnOnlineInstantResults.cpp:88
	extern const char *[9] KAC_POSITION_NAMES;

	// BrnOnlineInstantResults.cpp:297
	extern const float32_t KF_STANDINGS_UPDATE_TIMEOUT;

	// BrnOnlineInstantResults.cpp:300
	extern const float32_t KF_UNORDERED_RESULTS_TIMEOUT;

	// BrnOnlineInstantResults.h:204
	float32_t mfUpdateTimer;

	// BrnOnlineInstantResults.h:205
	float_t mfTableHadDataDuration;

	// BrnOnlineInstantResults.h:206
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// BrnOnlineInstantResults.h:207
	bool[8] mabDirty;

	// BrnOnlineInstantResults.h:209
	BrnGui::TextField mTitleTextfield;

	// BrnOnlineInstantResults.cpp:302
	extern const char[9] KAC_TITLE_TEXTFIELD_NAME;

	// BrnOnlineInstantResults.cpp:303
	extern const char[12] KAC_WINNER_GAMERTAG_TEXTFIELD_NAME;

	// BrnOnlineInstantResults.h:213
	BrnGui::TextField mWinnerGamertag;

	// BrnOnlineInstantResults.cpp:304
	extern const char[10] KAC_CURRENT_ROUND_TEXTFIELD_NAME;

	// BrnOnlineInstantResults.h:216
	BrnGui::TextField mCurrentRound;

	// BrnOnlineInstantResults.cpp:306
	extern const char[9] KAC_RESULT_COLUMN_HEADING_TEXTFIELD_NAME;

	// BrnOnlineInstantResults.cpp:305
	extern const char[12] KAC_REVENGE_COLUMN_HEADING_TEXTFIELD_NAME;

	// BrnOnlineInstantResults.h:220
	BrnGui::TextField mResultColumnHeading;

	// BrnOnlineInstantResults.h:221
	BrnGui::TextField mRevengeColumnHeading;

	// BrnOnlineInstantResults.h:223
	bool mbPlayerCanLeave;

	// BrnOnlineInstantResults.h:224
	bool mbAbortDueToDisconnects;

	// BrnOnlineInstantResults.h:225
	bool mbLeaveNextUpdate;

	// BrnOnlineInstantResults.h:226
	bool mbCachedDisconnectEvent;

	// BrnOnlineInstantResults.h:227
	bool mbReceivedFinishedModeResults;

public:
	// BrnOnlineInstantResults.cpp:327
	virtual void OnEnter();

	// BrnOnlineInstantResults.cpp:971
	virtual void OnLeave();

	// BrnOnlineInstantResults.cpp:454
	virtual void Update();

	// BrnOnlineInstantResults.h:91
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnOnlineInstantResults.cpp:1645
	void RenderDebug(CgsDev::Debug2DImmediateRender *);

private:
	// BrnOnlineInstantResults.cpp:1013
	void CheckForCompletedLoads();

	// BrnOnlineInstantResults.cpp:862
	void PopulateNameAndTimeTableCells(const GuiEventOnlinePostEvent *);

	// BrnOnlineInstantResults.cpp:832
	void UpdateDirtyFlags(const GuiEventOnlinePostEvent *);

	// BrnOnlineInstantResults.cpp:1387
	void ReorderResultsTable();

	// BrnOnlineInstantResults.h:248
	int32_t GetPlayerIndexFromPlayerID(int32_t);

	// BrnOnlineInstantResults.cpp:780
	int32_t GetOnlinePlayerIndexFromTablePosition(int32_t);

	// BrnOnlineInstantResults.cpp:803
	BrnGui::GuiEventOnlinePostEvent::OnlinePlayer * GetOnlinePlayerFromTablePosition(int32_t);

	// BrnOnlineInstantResults.cpp:819
	BrnGui::GuiEventOnlinePostEvent::OnlinePlayer * GetOnlinePlayerFromSortedTablePosition(int32_t);

	// BrnOnlineInstantResults.cpp:1187
	void SetAptData(int32_t, const BrnGui::GuiEventOnlinePostEvent::OnlinePlayer *, bool);

	// BrnOnlineInstantResults.cpp:1557
	void FillOutTicker();

	// BrnOnlineInstantResults.h:275
	int ComparePlayersFinishPosition(int32_t, int32_t);

	// BrnOnlineInstantResults.cpp:1713
	void HandleControllerInputPressed(const GuiEventControllerInputPressed *);

	// BrnOnlineInstantResults.cpp:1746
	void HandleControllerInputFinalStandingsSubState(const GuiEventControllerInputPressed *);

	// BrnOnlineInstantResults.cpp:1801
	void HandleDisconnectedEvent(const GuiEventNetworkDisconnected *);

	// BrnOnlineInstantResults.cpp:1147
	void SetResultColumnHeading();

	// BrnOnlineInstantResults.cpp:1833
	void LeaveScreen();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineInstantResultsState {
		// BrnOnlineInstantResults.h:58
		struct AwardData {
			// BrnOnlineInstantResults.h:60
			extern const int32_t KI_MAX_AWARD_STRINGS = 6;

			// BrnOnlineInstantResults.h:62
			int8_t miMultiParamCount;

			// BrnOnlineInstantResults.h:63
			int8_t miSingleParamCount;

			// BrnOnlineInstantResults.h:65
			const char *[6] mapcMultiString;

			// BrnOnlineInstantResults.h:66
			const char *[6] mapcSingleString;

		public:
			// BrnOnlineInstantResults.h:69
			int32_t CountStringsSingle() const;

			// BrnOnlineInstantResults.h:72
			int32_t CountStringsPlural() const;

		}

	public:
		OnlineInstantResultsState();

		// Unknown accessibility
		// BrnOnlineInstantResults.h:75
		extern BrnGui::OnlineInstantResultsState::AwardData[] KA_AWARD_OVERALL;

	private:
		// BrnOnlineInstantResults.h:144
		extern char[] KAC_CURRENT_ROUND_STRINGID;

		// BrnOnlineInstantResults.h:145
		extern char[] KAC_CURRENT_ROUND_FORMAT_STRINGID;

		// BrnOnlineInstantResults.h:146
		extern char[] KAC_AFTER_ROUND_FORMAT_STRINGID;

		// BrnOnlineInstantResults.h:147
		extern char[] KAC_AFTER_ROUNDS_FORMAT_STRINGID;

		// BrnOnlineInstantResults.h:148
		extern char[] KAC_INSTANT_RESULTS_STRING_ID;

		// BrnOnlineInstantResults.h:149
		extern char[] KAC_CURRENT_STANDINGS_STRING_ID;

		// BrnOnlineInstantResults.h:150
		extern char[] KAC_FINAL_STANDINGS_STRING_ID;

		// BrnOnlineInstantResults.h:151
		extern char[] KAC_DISCONNECTED_STRING_ID;

		// BrnOnlineInstantResults.h:152
		extern char[] KAC_NUM_LANDMARKS_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:153
		extern char[] KAC_NUM_LANDMARK_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:154
		extern char[] KAC_NUM_ELIMINATIONS_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:155
		extern char[] KAC_NUM_ELIMINATION_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:156
		extern char[] KAC_ELIMINATED_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:157
		extern char[] KAC_DNF_FORMAT_STRING_ID;

		// BrnOnlineInstantResults.h:158
		extern char[] KAC_RACE_RESULT_COLUMN_STRINGID;

		// BrnOnlineInstantResults.h:159
		extern char[] KAC_ROAD_RAGE_RESULT_COLUMN_STRINGID;

		// BrnOnlineInstantResults.h:160
		extern char[] KAC_BURNING_HOME_RUN_RESULT_COLUMN_STRINGID;

		// BrnOnlineInstantResults.h:161
		extern char[] KAC_BURNING_HOME_RUN_STRINGID;

		// BrnOnlineInstantResults.h:162
		extern char[] KAC_RESULT_TIED_STRINGID;

		// BrnOnlineInstantResults.h:168
		extern char[] KAC_ANIMATION_COMPONENT_NAME;

		// BrnOnlineInstantResults.h:169
		extern char[] KAC_BUTTON_ANIMATION_COMPONENT_NAME;

		// BrnOnlineInstantResults.h:173
		extern int32_t[] maiEventToObserve;

		// BrnOnlineInstantResults.h:174
		extern const int32_t miNumEventsObserved;

		// BrnOnlineInstantResults.h:175
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineInstantResults.h:176
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineInstantResults.h:179
		extern char[] macTableName;

		// BrnOnlineInstantResults.h:180
		extern const uint32_t muTableNumRows;

		// BrnOnlineInstantResults.h:181
		extern const uint32_t muTableNumColumns;

		// BrnOnlineInstantResults.h:182
		extern BrnGui::TableCell::TableCellComponentTypes[] maTableRowComponentTypes;

		// BrnOnlineInstantResults.h:183
		extern const char *[] maIconStates;

		// BrnOnlineInstantResults.h:202
		extern const float32_t KF_STANDINGS_UPDATE_TIMEOUT;

		// BrnOnlineInstantResults.h:203
		extern const float32_t KF_UNORDERED_RESULTS_TIMEOUT;

		// BrnOnlineInstantResults.h:210
		extern char[] KAC_TITLE_TEXTFIELD_NAME;

		// BrnOnlineInstantResults.h:212
		extern char[] KAC_WINNER_GAMERTAG_TEXTFIELD_NAME;

		// BrnOnlineInstantResults.h:215
		extern char[] KAC_CURRENT_ROUND_TEXTFIELD_NAME;

		// BrnOnlineInstantResults.h:218
		extern char[] KAC_RESULT_COLUMN_HEADING_TEXTFIELD_NAME;

		// BrnOnlineInstantResults.h:219
		extern char[] KAC_REVENGE_COLUMN_HEADING_TEXTFIELD_NAME;

	}

	// BrnOnlineInstantResults.h:36
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_TEXT_FIELDS = 40;

	// BrnOnlineInstantResults.h:37
	const int8_t KI_NUM_ONLINE_INSTANT_RESULTS_ICONS = 8;

}

// BrnOnlineInstantResults.h:53
void BrnGui::OnlineInstantResultsState::OnlineInstantResultsState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

