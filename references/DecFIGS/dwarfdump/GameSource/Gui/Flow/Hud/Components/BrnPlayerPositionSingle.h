// BrnPlayerPositionSingle.h:203
extern const float32_t KF_ZERO_FLOAT_TOLERANCE;

// BrnPlayerPositionSingle.h:206
extern char[] macValueName;

// BrnPlayerPositionSingle.h:207
extern char[] macPlayerName;

// BrnPlayerPositionSingle.h:213
extern char[] KAC_PLAYER_COLOUR_ANIMATOR_NAME;

// BrnPlayerPositionSingle.h:214
extern char[] KAC_PLAYER_TEXT_COLOUR_ANIMATOR_NAME;

// BrnPlayerPositionSingle.h:252
extern float32_t[] KAF_CHALLENGE_WOW_LIMITS;

// BrnPlayerPositionSingle.h:253
extern float32_t[] KAF_TODAYS_BEST_WOW_LIMITS;

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnPlayerPositionSingle.h:61
	enum PlayerTypes {
		E_PLAYERTYPES_BASIC = 0,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_OFF = 1,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_NOT_ACTIVE = 2,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_IN_PROGRESS = 3,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_COMPLETE = 4,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_TOTAL = 5,
		E_PLAYERTYPES_NEW_PLAYER = 6,
		E_PLAYERTYPES_INVISIBLE = 7,
		E_PLAYERTYPES_COUNT = 8,
		E_PLAYERTYPES_FIRST = 0,
	}

	// BrnPlayerPositionSingle.h:78
	enum RevengeStatus {
		E_REVENGESTATUS_MARKEDMAN = 0,
		E_REVENGESTATUS_UP = 1,
		E_REVENGESTATUS_DOWN = 2,
		E_REVENGESTATUS_INVISIBLE = 3,
		E_REVENGESTATUS_COUNT = 4,
	}

	// BrnPlayerPositionSingle.h:90
	enum AwardStatus {
		E_AWARDSTATUS_NONE = 0,
		E_AWARDSTATUS_CROWNED = 1,
		E_AWARDSTATUS_REEFED = 2,
		E_AWARDSTATUS_BOTH = 3,
		E_AWARDSTATUS_COUNT = 4,
	}

	// BrnPlayerPositionSingle.h:101
	enum HeadsetStatus {
		E_HEADSETSTATUS_INVISIBLE = 0,
		E_HEADSETSTATUS_OFF = 1,
		E_HEADSETSTATUS_ON = 2,
		E_HEADSETSTATUS_ACTIVE = 3,
		E_HEADSETSTATUS_COUNT = 4,
	}

}

// BrnPlayerPositionSingle.h:53
struct BrnGui::BasePlayerPositionSingleComponent : public BrnFlaptComponent {
}

// BrnPlayerPositionSingle.h:117
struct BrnGui::PlayerPositionSingleData {
	// BrnPlayerPositionSingle.h:120
	PlayerName mPlayerName;

	// BrnPlayerPositionSingle.h:121
	CgsLanguage::LanguageManager::ParameterFormatType meNameType;

	// BrnPlayerPositionSingle.h:122
	float32_t mfTableValue;

	// BrnPlayerPositionSingle.h:123
	BrnGui::PlayerTypes mePlayerType;

	// BrnPlayerPositionSingle.h:124
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnPlayerPositionSingle.h:125
	BrnGui::HeadsetStatus meHeadsetStatus;

	// BrnPlayerPositionSingle.h:126
	BrnGui::RevengeStatus meRevengeStatus;

	// BrnPlayerPositionSingle.h:127
	BrnGui::AwardStatus meAwardState;

	// BrnPlayerPositionSingle.h:128
	BrnGameState::GameStateModuleIO::EPlayerTeam meTeam;

	// BrnPlayerPositionSingle.h:129
	BrnGui::EGuiPlayerColours mePlayerColour;

	// BrnPlayerPositionSingle.h:130
	int8_t miHoldingSlot;

public:
	// BrnPlayerPositionSingle.h:133
	void Clear();

}

// BrnPlayerPositionSingle.h:146
struct BrnGui::PlayerPositionSingleComponent : public BasePlayerPositionSingleComponent {
private:
	// BrnPlayerPositionSingle.h:203
	extern const float32_t KF_ZERO_FLOAT_TOLERANCE;

	// BrnPlayerPositionSingle.h:206
	extern char[] macValueName;

	// BrnPlayerPositionSingle.h:207
	extern char[] macPlayerName;

	// BrnPlayerPositionSingle.h:208
	extern const char *[] mpacPlayerTypeAnims;

	// BrnPlayerPositionSingle.h:209
	extern const char *[] mpacHeadsetStatusAnims;

	// BrnPlayerPositionSingle.h:210
	extern const char *[] mpacRevengeStatusAnims;

	// BrnPlayerPositionSingle.h:211
	extern const char *[] mpacAwardStatusAnims;

	// BrnPlayerPositionSingle.h:213
	extern char[] KAC_PLAYER_COLOUR_ANIMATOR_NAME;

	// BrnPlayerPositionSingle.h:214
	extern char[] KAC_PLAYER_TEXT_COLOUR_ANIMATOR_NAME;

	// BrnPlayerPositionSingle.h:216
	extern const char *[] KAPC_COLOUR_FRAME_NAMES;

	// BrnPlayerPositionSingle.h:228
	BrnGui::FlaptAnimatorComponent mPlayerColourAnimator;

	// BrnPlayerPositionSingle.h:229
	BrnGui::FlaptAnimatorComponent mPlayerTextColourAnimator;

	// BrnPlayerPositionSingle.h:231
	MovieClipRef mRevenge;

	// BrnPlayerPositionSingle.h:232
	MovieClipRef mAudio;

	// BrnPlayerPositionSingle.h:234
	TextFieldRef mName;

	// BrnPlayerPositionSingle.h:235
	TextFieldRef mValue;

	// BrnPlayerPositionSingle.h:240
	BrnGui::PlayerTypes mePlayerType;

	// BrnPlayerPositionSingle.h:241
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnPlayerPositionSingle.h:242
	BrnGui::HeadsetStatus meHeadsetStatus;

	// BrnPlayerPositionSingle.h:243
	BrnGui::EGuiPlayerColours mePlayerColour;

	// BrnPlayerPositionSingle.h:244
	BrnGui::RevengeStatus meRevengeStatus;

	// BrnPlayerPositionSingle.h:245
	BrnGui::AwardStatus meAwardState;

	// BrnPlayerPositionSingle.h:246
	float32_t mfValue;

	// BrnPlayerPositionSingle.h:247
	bool mbValueChanged;

	// BrnPlayerPositionSingle.h:249
	BrnGui::GuiCache * mpCache;

	// BrnPlayerPositionSingle.h:250
	CgsLanguage::LanguageManager * mpLanguageManager;

	// BrnPlayerPositionSingle.h:252
	extern float32_t[] KAF_CHALLENGE_WOW_LIMITS;

	// BrnPlayerPositionSingle.h:253
	extern float32_t[] KAF_TODAYS_BEST_WOW_LIMITS;

public:
	// BrnPlayerPositionSingle.h:154
	void Construct(const char *, StateInterface *, const char *);

	// BrnPlayerPositionSingle.h:162
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnPlayerPositionSingle.h:169
	void Update(PlayerPositionSingleData *);

	// BrnPlayerPositionSingle.h:182
	void SetInvisible();

	// BrnPlayerPositionSingle.h:187
	void SetCache(BrnGui::GuiCache *);

	// BrnPlayerPositionSingle.h:191
	void RenderValue();

	// BrnPlayerPositionSingle.h:195
	float32_t GetValue() const;

	// BrnPlayerPositionSingle.h:199
	void SetValueChanged();

private:
	// BrnPlayerPositionSingle.h:259
	bool IsChallengeWow(BrnResource::ChallengeListEntryAction::EChallengeDataType, float32_t);

	// BrnPlayerPositionSingle.h:265
	bool IsTodaysBestWow(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, float32_t);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnPlayerPositionSingle.h:61
	enum PlayerTypes {
		E_PLAYERTYPES_BASIC = 0,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_OFF = 1,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_NOT_ACTIVE = 2,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_IN_PROGRESS = 3,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_COMPLETE = 4,
		E_PLAYERTYPES_FREEBURN_CHALLENGE_TOTAL = 5,
		E_PLAYERTYPES_NEW_PLAYER = 6,
		E_PLAYERTYPES_INVISIBLE = 7,
		E_PLAYERTYPES_COUNT = 8,
		E_PLAYERTYPES_FIRST = 0,
	}

	// BrnPlayerPositionSingle.h:78
	enum RevengeStatus {
		E_REVENGESTATUS_MARKEDMAN = 0,
		E_REVENGESTATUS_UP = 1,
		E_REVENGESTATUS_DOWN = 2,
		E_REVENGESTATUS_INVISIBLE = 3,
		E_REVENGESTATUS_COUNT = 4,
	}

	// BrnPlayerPositionSingle.h:90
	enum AwardStatus {
		E_AWARDSTATUS_NONE = 0,
		E_AWARDSTATUS_CROWNED = 1,
		E_AWARDSTATUS_REEFED = 2,
		E_AWARDSTATUS_BOTH = 3,
		E_AWARDSTATUS_COUNT = 4,
	}

	// BrnPlayerPositionSingle.h:101
	enum HeadsetStatus {
		E_HEADSETSTATUS_INVISIBLE = 0,
		E_HEADSETSTATUS_OFF = 1,
		E_HEADSETSTATUS_ON = 2,
		E_HEADSETSTATUS_ACTIVE = 3,
		E_HEADSETSTATUS_COUNT = 4,
	}

}

// BrnPlayerPositionSingle.h:146
struct BrnGui::PlayerPositionSingleComponent : public BasePlayerPositionSingleComponent {
private:
	// BrnPlayerPositionSingle.h:203
	extern const float32_t KF_ZERO_FLOAT_TOLERANCE;

	// BrnPlayerPositionSingle.h:206
	extern char[] macValueName;

	// BrnPlayerPositionSingle.h:207
	extern char[] macPlayerName;

	// BrnPlayerPositionSingle.h:208
	extern const char *[] mpacPlayerTypeAnims;

	// BrnPlayerPositionSingle.h:209
	extern const char *[] mpacHeadsetStatusAnims;

	// BrnPlayerPositionSingle.h:210
	extern const char *[] mpacRevengeStatusAnims;

	// BrnPlayerPositionSingle.h:211
	extern const char *[] mpacAwardStatusAnims;

	// BrnPlayerPositionSingle.h:213
	extern char[] KAC_PLAYER_COLOUR_ANIMATOR_NAME;

	// BrnPlayerPositionSingle.h:214
	extern char[] KAC_PLAYER_TEXT_COLOUR_ANIMATOR_NAME;

	// BrnPlayerPositionSingle.h:216
	extern const char *[] KAPC_COLOUR_FRAME_NAMES;

	// BrnPlayerPositionSingle.h:228
	BrnGui::FlaptAnimatorComponent mPlayerColourAnimator;

	// BrnPlayerPositionSingle.h:229
	BrnGui::FlaptAnimatorComponent mPlayerTextColourAnimator;

	// BrnPlayerPositionSingle.h:231
	MovieClipRef mRevenge;

	// BrnPlayerPositionSingle.h:232
	MovieClipRef mAudio;

	// BrnPlayerPositionSingle.h:234
	TextFieldRef mName;

	// BrnPlayerPositionSingle.h:235
	TextFieldRef mValue;

	// BrnPlayerPositionSingle.h:240
	BrnGui::PlayerTypes mePlayerType;

	// BrnPlayerPositionSingle.h:241
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnPlayerPositionSingle.h:242
	BrnGui::HeadsetStatus meHeadsetStatus;

	// BrnPlayerPositionSingle.h:243
	BrnGui::EGuiPlayerColours mePlayerColour;

	// BrnPlayerPositionSingle.h:244
	BrnGui::RevengeStatus meRevengeStatus;

	// BrnPlayerPositionSingle.h:245
	BrnGui::AwardStatus meAwardState;

	// BrnPlayerPositionSingle.h:246
	float32_t mfValue;

	// BrnPlayerPositionSingle.h:247
	bool mbValueChanged;

	// BrnPlayerPositionSingle.h:249
	BrnGui::GuiCache * mpCache;

	// BrnPlayerPositionSingle.h:250
	LanguageManager * mpLanguageManager;

	// BrnPlayerPositionSingle.h:252
	extern float32_t[] KAF_CHALLENGE_WOW_LIMITS;

	// BrnPlayerPositionSingle.h:253
	extern float32_t[] KAF_TODAYS_BEST_WOW_LIMITS;

public:
	// BrnPlayerPositionSingle.h:154
	void Construct(const char *, StateInterface *, const char *);

	// BrnPlayerPositionSingle.h:162
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnPlayerPositionSingle.h:169
	void Update(PlayerPositionSingleData *);

	// BrnPlayerPositionSingle.h:182
	void SetInvisible();

	// BrnPlayerPositionSingle.h:187
	void SetCache(BrnGui::GuiCache *);

	// BrnPlayerPositionSingle.h:191
	void RenderValue();

	// BrnPlayerPositionSingle.h:195
	float32_t GetValue() const;

	// BrnPlayerPositionSingle.h:199
	void SetValueChanged();

private:
	// BrnPlayerPositionSingle.h:259
	bool IsChallengeWow(BrnResource::ChallengeListEntryAction::EChallengeDataType, float32_t);

	// BrnPlayerPositionSingle.h:265
	bool IsTodaysBestWow(BrnGameState::BurnoutSkillzData::EBurnoutSkillType, float32_t);

}

