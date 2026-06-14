// BrnRoadRulesManager.h:51
struct BrnGameState::RoadRulesManager {
	// BrnRoadRulesManager.h:55
	extern const CgsID K_INVALID_ID;

private:
	// BrnRoadRulesManager.h:233
	BrnGameState::RoadRulesDebugComponent mRoadRulesDebugComponent;

	// BrnRoadRulesManager.h:237
	StreetManager * mpStreetManager;

	// BrnRoadRulesManager.h:238
	BrnGameState::ModeManager * mpModeManager;

	// BrnRoadRulesManager.h:239
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnRoadRulesManager.h:241
	SpanBase::RoadIndex miLastRoadIndex;

	// BrnRoadRulesManager.h:244
	SpanBase::RoadIndex[2] maiChallengeRoadIndex;

	// BrnRoadRulesManager.h:246
	CgsID mLastLimitId;

	// BrnRoadRulesManager.h:249
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnRoadRulesManager.h:250
	BrnGameState::EActiveRoadRule mePreviousActiveRoadRule;

	// BrnRoadRulesManager.h:251
	bool mbRoadRulesNotAllowed;

	// BrnRoadRulesManager.h:253
	float32_t mfTime;

	// BrnRoadRulesManager.h:254
	float32_t mfTimeScoreTimeout;

	// BrnRoadRulesManager.h:255
	float32_t mfTimeTarget;

	// BrnRoadRulesManager.h:256
	float32_t mfNextWarningTime;

	// BrnRoadRulesManager.h:257
	int32_t miNumWarningsDone;

	// BrnRoadRulesManager.h:258
	float32_t mfStuntTime;

	// BrnRoadRulesManager.h:259
	float32_t mfStuntRuleComboTimeout;

	// BrnRoadRulesManager.h:260
	int32_t miCrashScore;

	// BrnRoadRulesManager.h:261
	float32_t mfInRoadTimeout;

	// BrnRoadRulesManager.h:262
	bool mbAllowExitRoadRulesAfterTimeout;

	// BrnRoadRulesManager.h:263
	float32_t mfExitRoadRulesTime;

	// BrnRoadRulesManager.h:265
	bool mbSwitchingActive;

	// BrnRoadRulesManager.h:266
	bool mbIsOnlineMode;

public:
	// BrnRoadRulesManager.h:61
	void Construct(StreetManager *, BrnGameState::ModeManager *, BrnGameState::TrainingManager *);

	// BrnRoadRulesManager.h:64
	void Destruct();

	// BrnRoadRulesManager.h:79
	void Update(const ControllerInput *, SpanBase::RoadIndex, float32_t, bool, bool, BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType, float32_t, bool, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle);

	// BrnRoadRulesManager.h:84
	void OnRoadRulesDataRequest(CgsID, InputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:90
	bool IsRoadLimitRegionValid(CgsID, CgsID) const;

	// BrnRoadRulesManager.h:98
	void OnRoadLimit(CgsID, bool, BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnRoadRulesManager.h:102
	void OnShowtimeEnd(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:106
	void QuitAnyActiveRules(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:110
	void SetShowtimeScore(int32_t);

	// BrnRoadRulesManager.h:113
	bool IsTimeRuleActive() const;

	// BrnRoadRulesManager.h:116
	bool IsCrashRuleActive() const;

	// BrnRoadRulesManager.h:119
	bool IsRoadRulesActive() const;

	// BrnRoadRulesManager.h:123
	void SetSwitchingActive(bool);

	// BrnRoadRulesManager.h:128
	void SetActiveRoadRule(InputBuffer::GameActionQueue *, BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:131
	CgsID GetCurrentRoadID() const;

	// BrnRoadRulesManager.h:136
	void SetRoadRulesMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnRoadRulesManager.h:139
	bool IsInOnlineMode();

private:
	// BrnRoadRulesManager.h:151
	bool UpdateSwitchingRoadRulesOnOrOff(InputBuffer::GameActionQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::EGameModeType, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle, float32_t, bool);

	// BrnRoadRulesManager.h:159
	void UpdateActiveRoadRule(BrnGameState::GameStateModuleIO::OutputBuffer *, InputBuffer::GameActionQueue *, bool, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle);

	// BrnRoadRulesManager.h:163
	void SendActiveRuleState(InputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:168
	void UpdateTimeRule(BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnRoadRulesManager.h:172
	void OnShowtimeStart(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:177
	void OnEnterRoad(InputBuffer::GameActionQueue *, SpanBase::RoadIndex);

	// BrnRoadRulesManager.h:182
	void OnLeaveRoad(InputBuffer::GameActionQueue *, SpanBase::RoadIndex);

	// BrnRoadRulesManager.h:189
	void OnStartRule(InputBuffer::GameActionQueue *, SpanBase::RoadIndex, BrnStreetData::ScoreType, bool);

	// BrnRoadRulesManager.h:195
	void OnEndRule(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnStreetData::ScoreType, bool);

	// BrnRoadRulesManager.h:199
	void OnUpdateActiveRoadScores(InputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:204
	void OnScoreCompleted(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnStreetData::ScoreType);

	// BrnRoadRulesManager.h:209
	void SendRoadRuleModeSwitchMessage(InputBuffer::GameActionQueue *, bool);

	// BrnRoadRulesManager.h:214
	bool IsValidRoad(int32_t) const;

	// BrnRoadRulesManager.h:218
	bool IsRoadRuleCrash(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:222
	bool IsRoadRuleTime(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:226
	bool IsRoadRuleOnline(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:230
	bool IsRoadRuleOffline(BrnGameState::EActiveRoadRule);

}

// BrnRoadRulesManager.h:55
extern const CgsID K_INVALID_ID;

// BrnRoadRulesManager.h:51
struct BrnGameState::RoadRulesManager {
	// BrnRoadRulesManager.h:55
	extern const CgsID K_INVALID_ID;

private:
	// BrnRoadRulesManager.h:233
	BrnGameState::RoadRulesDebugComponent mRoadRulesDebugComponent;

	// BrnRoadRulesManager.h:237
	StreetManager * mpStreetManager;

	// BrnRoadRulesManager.h:238
	BrnGameState::ModeManager * mpModeManager;

	// BrnRoadRulesManager.h:239
	BrnGameState::TrainingManager * mpTrainingManager;

	// BrnRoadRulesManager.h:241
	SpanBase::RoadIndex miLastRoadIndex;

	// BrnRoadRulesManager.h:244
	SpanBase::RoadIndex[2] maiChallengeRoadIndex;

	// BrnRoadRulesManager.h:246
	CgsID mLastLimitId;

	// BrnRoadRulesManager.h:249
	BrnGameState::EActiveRoadRule meActiveRoadRule;

	// BrnRoadRulesManager.h:250
	BrnGameState::EActiveRoadRule mePreviousActiveRoadRule;

	// BrnRoadRulesManager.h:251
	bool mbRoadRulesNotAllowed;

	// BrnRoadRulesManager.h:253
	float32_t mfTime;

	// BrnRoadRulesManager.h:254
	float32_t mfTimeScoreTimeout;

	// BrnRoadRulesManager.h:255
	float32_t mfTimeTarget;

	// BrnRoadRulesManager.h:256
	float32_t mfNextWarningTime;

	// BrnRoadRulesManager.h:257
	int32_t miNumWarningsDone;

	// BrnRoadRulesManager.h:258
	float32_t mfStuntTime;

	// BrnRoadRulesManager.h:259
	float32_t mfStuntRuleComboTimeout;

	// BrnRoadRulesManager.h:260
	int32_t miCrashScore;

	// BrnRoadRulesManager.h:261
	float32_t mfInRoadTimeout;

	// BrnRoadRulesManager.h:262
	bool mbAllowExitRoadRulesAfterTimeout;

	// BrnRoadRulesManager.h:263
	float32_t mfExitRoadRulesTime;

	// BrnRoadRulesManager.h:265
	bool mbSwitchingActive;

	// BrnRoadRulesManager.h:266
	bool mbIsOnlineMode;

public:
	// BrnRoadRulesManager.h:61
	void Construct(StreetManager *, BrnGameState::ModeManager *, BrnGameState::TrainingManager *);

	// BrnRoadRulesManager.h:64
	void Destruct();

	// BrnRoadRulesManager.h:79
	void Update(const ControllerInput *, SpanBase::RoadIndex, float32_t, bool, bool, BrnGameState::GameStateModuleIO::OutputBuffer *, bool, BrnGameState::GameStateModuleIO::EGameModeType, float32_t, bool, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle);

	// BrnRoadRulesManager.h:84
	void OnRoadRulesDataRequest(CgsID, OutputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:90
	bool IsRoadLimitRegionValid(CgsID, CgsID) const;

	// BrnRoadRulesManager.h:98
	void OnRoadLimit(CgsID, bool, BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnRoadRulesManager.h:102
	void OnShowtimeEnd(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:106
	void QuitAnyActiveRules(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:110
	void SetShowtimeScore(int32_t);

	// BrnRoadRulesManager.h:113
	bool IsTimeRuleActive() const;

	// BrnRoadRulesManager.h:116
	bool IsCrashRuleActive() const;

	// BrnRoadRulesManager.h:119
	bool IsRoadRulesActive() const;

	// BrnRoadRulesManager.h:123
	void SetSwitchingActive(bool);

	// BrnRoadRulesManager.h:128
	void SetActiveRoadRule(OutputBuffer::GameActionQueue *, BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:131
	CgsID GetCurrentRoadID() const;

	// BrnRoadRulesManager.h:136
	void SetRoadRulesMode(BrnGameState::GameStateModuleIO::OutputBuffer *, bool);

	// BrnRoadRulesManager.h:139
	bool IsInOnlineMode();

private:
	// BrnRoadRulesManager.h:151
	bool UpdateSwitchingRoadRulesOnOrOff(OutputBuffer::GameActionQueue *, BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::EGameModeType, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle, float32_t, bool);

	// BrnRoadRulesManager.h:159
	void UpdateActiveRoadRule(BrnGameState::GameStateModuleIO::OutputBuffer *, OutputBuffer::GameActionQueue *, bool, bool, BrnResource::ChallengeListEntry::EFreeburnChallengeStyle);

	// BrnRoadRulesManager.h:163
	void SendActiveRuleState(OutputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:168
	void UpdateTimeRule(BrnGameState::GameStateModuleIO::OutputBuffer *, float32_t);

	// BrnRoadRulesManager.h:172
	void OnShowtimeStart(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRulesManager.h:177
	void OnEnterRoad(OutputBuffer::GameActionQueue *, SpanBase::RoadIndex);

	// BrnRoadRulesManager.h:182
	void OnLeaveRoad(OutputBuffer::GameActionQueue *, SpanBase::RoadIndex);

	// BrnRoadRulesManager.h:189
	void OnStartRule(OutputBuffer::GameActionQueue *, SpanBase::RoadIndex, BrnStreetData::ScoreType, bool);

	// BrnRoadRulesManager.h:195
	void OnEndRule(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnStreetData::ScoreType, bool);

	// BrnRoadRulesManager.h:199
	void OnUpdateActiveRoadScores(OutputBuffer::GameActionQueue *);

	// BrnRoadRulesManager.h:204
	void OnScoreCompleted(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnStreetData::ScoreType);

	// BrnRoadRulesManager.h:209
	void SendRoadRuleModeSwitchMessage(OutputBuffer::GameActionQueue *, bool);

	// BrnRoadRulesManager.h:214
	bool IsValidRoad(int32_t) const;

	// BrnRoadRulesManager.h:218
	bool IsRoadRuleCrash(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:222
	bool IsRoadRuleTime(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:226
	bool IsRoadRuleOnline(BrnGameState::EActiveRoadRule);

	// BrnRoadRulesManager.h:230
	bool IsRoadRuleOffline(BrnGameState::EActiveRoadRule);

}

