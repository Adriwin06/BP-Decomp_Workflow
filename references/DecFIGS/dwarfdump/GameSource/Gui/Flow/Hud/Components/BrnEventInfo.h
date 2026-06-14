// BrnEventInfo.h:127
extern const int32_t KI_TEXTFIELD_COUNT = 6;

// BrnEventInfo.h:142
extern char[] KAC_ADDSCORE_TEXTFIELD_NAME;

// BrnEventInfo.h:143
extern char[] KAC_BANKSCORE_TEXTFIELD_NAME;

// BrnEventInfo.h:144
extern char[] KAC_ADDSCORE_ANIMATOR_NAME;

// BrnEventInfo.h:166
extern char[] KAC_TEXTBOX_NAME;

// BrnEventInfo.h:167
extern char[] KAC_BANKSCORE_TEXTBOX_NAME;

// BrnEventInfo.h:170
extern char[] KAC_SCOREBACKING_ANIMATOR_NAME;

// BrnEventInfo.h:171
extern char[] KAC_POS_ANIMATOR_NAME_RACE;

// BrnEventInfo.h:172
extern char[] KAC_POS_ANIMATOR_NAME_RRAGE;

// BrnEventInfo.h:173
extern char[] KAC_DISTANCE_ANIMATOR_NAME_RACE;

// BrnEventInfo.h:174
extern char[] KAC_TIME_ANIMATOR_NAME_RRAGE;

// BrnEventInfo.h:175
extern char[] KAC_TIME_ANIMATOR_NAME_BROUTE;

// BrnEventInfo.h:176
extern char[] KAC_TIME_ANIMATOR_NAME_STUNTRUN;

// BrnEventInfo.h:177
extern char[] KAC_SCORE_ANIMATOR_NAME;

// BrnEventInfo.h:178
extern char[] KAC_BANKING_ANIMATOR_NAME;

// BrnEventInfo.h:179
extern char[] KAC_STUNT_ANIMATOR_NAME;

// BrnEventInfo.h:180
extern char[] KAC_MULTIPLIER_ANIMATOR_NAME;

// BrnEventInfo.h:182
extern char[] KAC_DISTANCE_INTERPOLATOR_NAME;

// BrnEventInfo.h:185
extern char[] KAC_DISTANCE_INTERPOLATOR_CONTROLLED_NAME;

// BrnEventInfo.h:186
extern const rw::math::vpu::Vector4 KV4_DISTANCEITER_STARTCOLOUR;

// BrnEventInfo.h:187
extern const rw::math::vpu::Vector4 KV4_DISTANCEITER_ENDCOLOUR;

// BrnEventInfo.h:188
extern const rw::math::vpu::Vector2 KV2_DISTANCEITER_STARTSCALE;

// BrnEventInfo.h:189
extern const rw::math::vpu::Vector2 KV2_DISTANCEITER_ENDSCALE;

// BrnEventInfo.h:192
extern char[] KAC_MEDAL_ICON_NAME;

// BrnEventInfo.h:197
extern const int32_t KI_POSITION_WARNING_THRESHOLD = 4;

// BrnEventInfo.h:198
extern const float32_t KF_DISTANCE_WARNING_THRESHOLD;

// BrnEventInfo.h:201
extern const float32_t KF_DANGERTIME_START;

// BrnEventInfo.h:202
extern const rw::math::vpu::Vector4 KV4_SAFECOLOUR;

// BrnEventInfo.h:203
extern const rw::math::vpu::Vector4 KV4_DANGERCOLOUR;

// BrnEventInfo.h:254
extern const float32_t KF_TOTUP_DURATION;

// BrnEventInfo.h:258
extern const int32_t KI_NUM_TIMEOUT_WEDGE_FRAMES;

// BrnEventInfo.h:70
struct BrnGui::EventInfoComponent : public BrnFlaptComponent {
private:
	// BrnEventInfo.h:127
	extern const int32_t KI_TEXTFIELD_COUNT = 6;

	// BrnEventInfo.h:129
	extern const char *[] KAC_MODE_FRAME_NAMES;

	// BrnEventInfo.h:131
	extern const char *[] KPAC_MODE_STRINGS;

	// BrnEventInfo.h:132
	extern const char *[] KPAC_ONLINE_SECURITY_STRINGS;

	// BrnEventInfo.h:135
	MovieClipRef mEventMovieClip;

	// BrnEventInfo.h:136
	const char * mpEventInfoComponentName;

	// BrnEventInfo.h:137
	FileRef mHUDFileRef;

	// Unknown accessibility
	// BrnEventInfo.h:50
	typedef TextFieldRef TextFieldComponentType;

	// BrnEventInfo.h:140
	EventInfoComponent::TextFieldComponentType[6] maTextField;

	// BrnEventInfo.h:142
	extern char[] KAC_ADDSCORE_TEXTFIELD_NAME;

	// BrnEventInfo.h:143
	extern char[] KAC_BANKSCORE_TEXTFIELD_NAME;

	// BrnEventInfo.h:144
	extern char[] KAC_ADDSCORE_ANIMATOR_NAME;

	// BrnEventInfo.h:145
	EventInfoComponent::TextFieldComponentType mAddScoreTextField;

	// BrnEventInfo.h:146
	EventInfoComponent::TextFieldComponentType mBankScoreTextField;

	// Unknown accessibility
	// BrnEventInfo.h:49
	typedef BrnGui::FlaptAnimatorComponent AnimatorComponentType;

	// BrnEventInfo.h:147
	EventInfoComponent::AnimatorComponentType mAddScoreAnimator;

	// BrnEventInfo.h:149
	EventInfoComponent::AnimatorComponentType mScoreBackgroundAnimator;

	// BrnEventInfo.h:150
	EventInfoComponent::AnimatorComponentType mTextStateAnimatorRace;

	// BrnEventInfo.h:151
	EventInfoComponent::AnimatorComponentType mTextStateAnimatorRRage;

	// BrnEventInfo.h:152
	EventInfoComponent::AnimatorComponentType mDistanceAnimatorRace;

	// BrnEventInfo.h:153
	EventInfoComponent::AnimatorComponentType mTimeAnimatorRRage;

	// BrnEventInfo.h:154
	EventInfoComponent::AnimatorComponentType mTimeAnimatorBRoute;

	// BrnEventInfo.h:155
	EventInfoComponent::AnimatorComponentType mTimeAnimatorStuntRun;

	// BrnEventInfo.h:156
	EventInfoComponent::AnimatorComponentType mScoreAnimator;

	// BrnEventInfo.h:157
	EventInfoComponent::AnimatorComponentType mBankingAnimator;

	// BrnEventInfo.h:158
	EventInfoComponent::AnimatorComponentType mStuntAnimator;

	// BrnEventInfo.h:159
	EventInfoComponent::AnimatorComponentType mMultiplierAnimator;

	// Unknown accessibility
	// BrnEventInfo.h:51
	typedef FlaptInterpolatorComponent InterpolatorComponentType;

	// BrnEventInfo.h:161
	EventInfoComponent::InterpolatorComponentType mDistanceInterpolator;

	// BrnEventInfo.h:163
	extern const char *[] KAPC_TEXTFIELD_NAMES;

	// BrnEventInfo.h:166
	extern char[] KAC_TEXTBOX_NAME;

	// BrnEventInfo.h:167
	extern char[] KAC_BANKSCORE_TEXTBOX_NAME;

	// BrnEventInfo.h:170
	extern char[] KAC_SCOREBACKING_ANIMATOR_NAME;

	// BrnEventInfo.h:171
	extern char[] KAC_POS_ANIMATOR_NAME_RACE;

	// BrnEventInfo.h:172
	extern char[] KAC_POS_ANIMATOR_NAME_RRAGE;

	// BrnEventInfo.h:173
	extern char[] KAC_DISTANCE_ANIMATOR_NAME_RACE;

	// BrnEventInfo.h:174
	extern char[] KAC_TIME_ANIMATOR_NAME_RRAGE;

	// BrnEventInfo.h:175
	extern char[] KAC_TIME_ANIMATOR_NAME_BROUTE;

	// BrnEventInfo.h:176
	extern char[] KAC_TIME_ANIMATOR_NAME_STUNTRUN;

	// BrnEventInfo.h:177
	extern char[] KAC_SCORE_ANIMATOR_NAME;

	// BrnEventInfo.h:178
	extern char[] KAC_BANKING_ANIMATOR_NAME;

	// BrnEventInfo.h:179
	extern char[] KAC_STUNT_ANIMATOR_NAME;

	// BrnEventInfo.h:180
	extern char[] KAC_MULTIPLIER_ANIMATOR_NAME;

	// BrnEventInfo.h:182
	extern char[] KAC_DISTANCE_INTERPOLATOR_NAME;

	// BrnEventInfo.h:185
	extern char[] KAC_DISTANCE_INTERPOLATOR_CONTROLLED_NAME;

	// BrnEventInfo.h:186
	extern const rw::math::vpu::Vector4 KV4_DISTANCEITER_STARTCOLOUR;

	// BrnEventInfo.h:187
	extern const rw::math::vpu::Vector4 KV4_DISTANCEITER_ENDCOLOUR;

	// BrnEventInfo.h:188
	extern const rw::math::vpu::Vector2 KV2_DISTANCEITER_STARTSCALE;

	// BrnEventInfo.h:189
	extern const rw::math::vpu::Vector2 KV2_DISTANCEITER_ENDSCALE;

	// BrnEventInfo.h:192
	extern char[] KAC_MEDAL_ICON_NAME;

	// BrnEventInfo.h:194
	extern const char *[15] KAC_STUNT_TYPE_STRING_IDS;

	// BrnEventInfo.h:195
	extern const char *[3] KAPC_FREEBURN_ACCESS_TYPE_STRING_IDS;

	// BrnEventInfo.h:197
	extern const int32_t KI_POSITION_WARNING_THRESHOLD = 4;

	// BrnEventInfo.h:198
	extern const float32_t KF_DISTANCE_WARNING_THRESHOLD;

	// BrnEventInfo.h:199
	float32_t mfDistanceWarningThreshold;

	// BrnEventInfo.h:201
	extern const float32_t KF_DANGERTIME_START;

	// BrnEventInfo.h:202
	extern const rw::math::vpu::Vector4 KV4_SAFECOLOUR;

	// BrnEventInfo.h:203
	extern const rw::math::vpu::Vector4 KV4_DANGERCOLOUR;

	// BrnEventInfo.h:205
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentEventType;

	// BrnEventInfo.h:206
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentOnlineGameMode;

	// BrnEventInfo.h:208
	BrnGameState::ECurrentMedalTargetTime meCurrentTargetMedal;

	// BrnEventInfo.h:210
	float32_t mfCurrentTimeSinceLastPositionChange;

	// BrnEventInfo.h:212
	bool mbTimeRemainingFlashing;

	// BrnEventInfo.h:215
	int32_t miCurrentPosition;

	// BrnEventInfo.h:216
	int32_t miTotalRacers;

	// BrnEventInfo.h:217
	LandmarkIndex mCurrentLandmark;

	// BrnEventInfo.h:218
	float32_t mfDistToCheckpoint;

	// BrnEventInfo.h:219
	bool mbNearFinish;

	// BrnEventInfo.h:222
	float32_t mfTimeLeft;

	// BrnEventInfo.h:223
	int32_t miCurrentTakedowns;

	// BrnEventInfo.h:224
	int32_t miTargetTakedowns;

	// BrnEventInfo.h:227
	CgsID mRivalCarID;

	// BrnEventInfo.h:228
	int32_t miTargetDamageCount;

	// BrnEventInfo.h:229
	int32_t miCurrentDamageCount;

	// BrnEventInfo.h:230
	float32_t mfRivalDistanceFromTarget;

	// BrnEventInfo.h:233
	int32_t miShowTimeCarsCrashed;

	// BrnEventInfo.h:234
	float32_t mfShowTimeDistanceTravelled;

	// BrnEventInfo.h:237
	float32_t mfTargetTimeInEvent;

	// BrnEventInfo.h:238
	float32_t mfCurrentTimeInEvent;

	// BrnEventInfo.h:239
	int32_t miTargetScoreInEvent;

	// BrnEventInfo.h:240
	int32_t miCurrentScoreInEvent;

	// BrnEventInfo.h:241
	bool mbInShortcut;

	// BrnEventInfo.h:244
	int32_t miCurrentComboInEvent;

	// BrnEventInfo.h:245
	int32_t miMultiplierInEvent;

	// BrnEventInfo.h:246
	bool mbComboWarningActive;

	// BrnEventInfo.h:247
	StuntToDisplay[1] maDisplayedStunt;

	// BrnEventInfo.h:249
	float32_t mfTotupStartScore;

	// BrnEventInfo.h:250
	float32_t mfTotupFinishScore;

	// BrnEventInfo.h:251
	float32_t mfTotupStartMultiplier;

	// BrnEventInfo.h:252
	float32_t mfTotupFinishMultiplier;

	// BrnEventInfo.h:253
	float32_t mfTotupStartTime;

	// BrnEventInfo.h:254
	extern const float32_t KF_TOTUP_DURATION;

	// BrnEventInfo.h:255
	bool mbTottingUp;

	// BrnEventInfo.h:257
	extern const char *[] KAPC_TIMEOUT_WEDGE_FRAME_NAMES;

	// BrnEventInfo.h:258
	extern const int32_t KI_NUM_TIMEOUT_WEDGE_FRAMES;

	// BrnEventInfo.h:261
	bool mbFreeBurnBasicInfoShowing;

	// BrnEventInfo.h:264
	bool mbFreeBurnInfoShowing;

	// BrnEventInfo.h:265
	BrnGameState::GameStateModuleIO::EGameModeType meNextGameMode;

	// BrnEventInfo.h:266
	BrnNetwork::EBrnGameSecurity meSecurity;

	// BrnEventInfo.h:267
	int32_t miNumRounds;

	// BrnEventInfo.h:270
	CgsID mFreeburnChallengeID;

	// BrnEventInfo.h:271
	int32_t[2] maiFreeburnChallengeData;

	// BrnEventInfo.h:272
	int32_t miFreeburnChallengeDataCount;

public:
	// BrnEventInfo.h:78
	void Construct(const char *, StateInterface *, const char *);

	// BrnEventInfo.h:85
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnEventInfo.h:89
	void PrepareComponentsForGameMode();

	// BrnEventInfo.h:95
	void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnEventInfo.h:100
	void MoveAnimation(const char *);

	// BrnEventInfo.h:106
	void SetText(int32_t, const char *);

	// BrnEventInfo.h:112
	void HandleTrigger(const GuiEventAptTrigger *, BrnGui::GuiCache *);

	// BrnEventInfo.h:117
	void Update(BrnGui::GuiCache *);

	// BrnEventInfo.h:122
	void ResetTimeline();

private:
	// BrnEventInfo.h:276
	void ClearEventSpecificData();

	// BrnEventInfo.h:281
	void UpdateRace(BrnGui::GuiCache *);

	// BrnEventInfo.h:286
	void UpdateOnlineRace(BrnGui::GuiCache *);

	// BrnEventInfo.h:291
	void UpdateFreeBurnLobby(BrnGui::GuiCache *);

	// BrnEventInfo.h:296
	void UpdateFreeBurnLobbyChallenge(BrnGui::GuiCache *);

	// BrnEventInfo.h:302
	void UpdateFreeBurnLobbyEvent(BrnGui::GuiCache *, const BrnGui::GuiEventNetworkGameParams *);

	// BrnEventInfo.h:307
	void UpdateFreeBurnLobbyBasic(BrnGui::GuiCache *);

	// BrnEventInfo.h:312
	void UpdateRoadRage(BrnGui::GuiCache *);

	// BrnEventInfo.h:317
	void UpdateStuntAttack(BrnGui::GuiCache *);

	// BrnEventInfo.h:322
	void UpdatePursuit(BrnGui::GuiCache *);

	// BrnEventInfo.h:327
	void UpdateFaceOff(BrnGui::GuiCache *);

	// BrnEventInfo.h:332
	void UpdateCrash(BrnGui::GuiCache *);

	// BrnEventInfo.h:337
	void UpdateBurningRoute(BrnGui::GuiCache *);

	// BrnEventInfo.h:342
	void UpdateEliminator(BrnGui::GuiCache *);

	// BrnEventInfo.h:347
	void UpdateSurvivor(BrnGui::GuiCache *);

	// BrnEventInfo.h:352
	void UpdateTrafficAttack(BrnGui::GuiCache *);

	// BrnEventInfo.h:357
	void UpdateDestinationText(BrnGui::GuiCache *);

	// BrnEventInfo.h:364
	void SetPositionData(BrnGui::GuiCache *, EventInfoComponent::TextFieldComponentType *, EventInfoComponent::TextFieldComponentType *);

	// BrnEventInfo.h:368
	void SetTakedownsTextState();

	// BrnEventInfo.h:373
	void SetPositionTextState(int32_t);

	// BrnEventInfo.h:378
	void SetEventType(const char *);

	// BrnEventInfo.h:383
	void SetEventState(const char *);

	// BrnEventInfo.h:389
	void BankingTransitionCompleteCallback(void *, uint16_t);

	// BrnEventInfo.h:396
	void SetTextFieldDangerColour(EventInfoComponent::TextFieldComponentType *, float32_t);

	// BrnEventInfo.h:401
	void ShowFreeburnWithTitleText(BrnGui::GuiCache *);

}

