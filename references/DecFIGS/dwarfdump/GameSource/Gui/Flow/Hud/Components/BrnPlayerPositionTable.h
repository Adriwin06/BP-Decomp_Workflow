// BrnPlayerPositionTable.h:128
extern const int32_t KI_MAX_BARS_NEEDED = 9;

// BrnPlayerPositionTable.h:151
extern char[] KAC_PAGE_ICON_NAME;

// BrnPlayerPositionTable.h:154
extern char[] KAC_TITLE_TEXT_NAME;

// BrnPlayerPositionTable.h:155
extern char[] KAC_SKILLZ_TEXT_NAME;

// BrnPlayerPositionTable.h:166
extern char[] KAC_TITLE_TEXT_FIELD_NAME;

// BrnPlayerPositionTable.h:167
extern char[] KAC_SKILLZ_TEXT_FIELD_NAME;

// BrnPlayerPositionTable.h:58
struct BrnGui::BasePlayerPositionTableComponent : public BrnFlaptComponent {
}

// BrnPlayerPositionTable.h:76
struct BrnGui::PlayerPositionTableComponent : public BasePlayerPositionTableComponent {
private:
	// BrnPlayerPositionTable.h:128
	extern const int32_t KI_MAX_BARS_NEEDED = 9;

	// BrnPlayerPositionTable.h:131
	PlayerPositionSingleComponent[9] maPlayerComponents;

	// BrnPlayerPositionTable.h:134
	BrnGui::GuiCache * mpCache;

	// BrnPlayerPositionTable.h:135
	const FreeburnChallengeManager * mpChallengeManager;

	// BrnPlayerPositionTable.h:137
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnPlayerPositionTable.h:138
	int32_t miCurrentBarsUsed;

	// BrnPlayerPositionTable.h:142
	PlayerPositionSingleData[9] maPlayerSingleData;

	// BrnPlayerPositionTable.h:144
	BrnGameState::BurnoutSkillzData::EBurnoutSkillType meLastFrameSkillState;

	// BrnPlayerPositionTable.h:145
	bool mbFreeburnChallengeRunning;

	// BrnPlayerPositionTable.h:146
	int32_t miFreeburnChallengeCurrentData;

	// BrnPlayerPositionTable.h:148
	BrnResource::ChallengeListEntryAction::EChallengeDataType meCurrentChallengeDataType;

	// BrnPlayerPositionTable.h:150
	extern const char *[] KAPC_FREEBURN_CHALLENGE_TYPE_STRINGS;

	// BrnPlayerPositionTable.h:151
	extern char[] KAC_PAGE_ICON_NAME;

	// BrnPlayerPositionTable.h:152
	extern const char *[] KAPC_BURNOUT_SKILLS_TITLE_STRINGS;

	// BrnPlayerPositionTable.h:154
	extern char[] KAC_TITLE_TEXT_NAME;

	// BrnPlayerPositionTable.h:155
	extern char[] KAC_SKILLZ_TEXT_NAME;

	// BrnPlayerPositionTable.h:166
	extern char[] KAC_TITLE_TEXT_FIELD_NAME;

	// BrnPlayerPositionTable.h:167
	extern char[] KAC_SKILLZ_TEXT_FIELD_NAME;

	// BrnPlayerPositionTable.h:169
	MovieClipRef mTitleBarMCR;

	// BrnPlayerPositionTable.h:171
	TextFieldRef mTitleText;

	// BrnPlayerPositionTable.h:172
	TextFieldRef mSkillzText;

	// BrnPlayerPositionTable.h:174
	MovieClipRef mPageIconMCR;

public:
	// BrnPlayerPositionTable.h:84
	void Construct(const char *, StateInterface *, const char *);

	// BrnPlayerPositionTable.h:92
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnPlayerPositionTable.h:107
	void SetupGameMode();

	// BrnPlayerPositionTable.h:112
	void UpdatePositionDetails(const GuiEventRaceDistanceRemaining *);

	// BrnPlayerPositionTable.h:118
	bool HandleFrameTrigger(const char *, int32_t);

	// BrnPlayerPositionTable.h:123
	void SetCache(BrnGui::GuiCache *);

private:
	// BrnPlayerPositionTable.h:180
	void ClearStoredData();

	// BrnPlayerPositionTable.h:185
	void FillOutInActiveRaceCarOrder(const GuiEventRaceDistanceRemaining *);

	// BrnPlayerPositionTable.h:190
	void FillOutOnlineData(EActiveRaceCarIndex);

	// BrnPlayerPositionTable.h:196
	void FillOutOnlineValueData(EActiveRaceCarIndex, const GuiEventRaceDistanceRemaining *);

	// BrnPlayerPositionTable.h:200
	void DisplayData();

	// BrnPlayerPositionTable.h:204
	void SortData();

	// BrnPlayerPositionTable.h:208
	void CountLinesAndAddTotal();

	// BrnPlayerPositionTable.h:214
	int32_t FunctionSortHighToLow(const void *, const void *);

	// BrnPlayerPositionTable.h:220
	int32_t FunctionSortLowToHigh(const void *, const void *);

	// BrnPlayerPositionTable.h:226
	int32_t FunctionSortLowToHighZeroInvalid(const void *, const void *);

	// BrnPlayerPositionTable.h:232
	int32_t FunctionSortTeamLowToHigh(const void *, const void *);

	// BrnPlayerPositionTable.h:238
	int32_t FunctionSortAlphabetical(const void *, const void *);

	// BrnPlayerPositionTable.h:242
	void ProcessOnlineFreeburnTable();

	// BrnPlayerPositionTable.h:247
	void SetTitleText(const char *);

	// BrnPlayerPositionTable.h:252
	void SetSkillsText(const char *);

	// BrnPlayerPositionTable.h:256
	void SetValuesDirty();

}

