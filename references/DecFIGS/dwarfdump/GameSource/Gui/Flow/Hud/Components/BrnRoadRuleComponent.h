// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RoadRuleComponent {
		// BrnRoadRuleComponent.h:89
		enum ERoadSignSizes {
			E_ROAD_SIGN_SMALL = 0,
			E_ROAD_SIGN_MEDIUM1 = 1,
			E_ROAD_SIGN_MEDIUM2 = 2,
			E_ROAD_SIGN_LARGE = 3,
			E_ROAD_SIGN_COUNT = 4,
		}

		// BrnRoadRuleComponent.h:249
		enum EAnimationState {
			E_ANIMATION_STATE_INVISIBLE = 0,
			E_ANIMATION_STATE_TRANSIN = 1,
			E_ANIMATION_STATE_IDLE = 2,
			E_ANIMATION_STATE_TRANSOUT = 3,
			E_ANIMATION_STATE_BASIC_COUNT = 4,
			E_ANIMATION_STATE_UNSUCCESSFUL_IDLE = 4,
			E_ANIMATION_STATE_UNSUCCESSFUL_TRANSOUT = 5,
			E_ANIMATION_STATE_ADVANCED_COUNT = 6,
			E_ANIMATION_STATE_FIRST = 0,
		}

		// BrnRoadRuleComponent.h:266
		enum EUpcomingRoadAnimState {
			E_UPCOMING_ROAD_ANIM_INVISIBLE = 0,
			E_UPCOMING_ROAD_ANIM_TRANS_IN = 1,
			E_UPCOMING_ROAD_ANIM_TRANS_OUT_TAKEN = 2,
			E_UPCOMING_ROAD_ANIM_TRANS_OUT_NOT_TAKEN = 3,
			E_UPCOMING_ROAD_ANIM_COUNT = 4,
		}

	}

}

// BrnRoadRuleComponent.h:66
struct BrnGui::BaseRoadRulesComponent : public BrnFlaptComponent {
}

// BrnRoadRuleComponent.h:86
struct BrnGui::RoadRuleComponent : public BaseRoadRulesComponent {
private:
	// BrnRoadRuleComponent.h:276
	extern BrnGui::RoadRuleComponent::ERoadSignSizes[] KAE_ROAD_SIGN_SIZES;

	// BrnRoadRuleComponent.h:277
	extern const int32_t KI_MAX_ROAD_INDEX;

	// BrnRoadRuleComponent.h:279
	extern const char *[] KAAC_ROADSIGN_SIZE_FRAME_LABELS;

	// BrnRoadRuleComponent.h:287
	extern const char *[6] KAPC_ANIMATION_FRAMES;

	// BrnRoadRuleComponent.h:288
	extern const char *[] KAPC_UPCOMING_ROAD_ANIMATIONS;

	// BrnRoadRuleComponent.h:289
	extern const char *[] KAPC_UPCOMING_SUGGESTED_ROAD_ANIMATIONS;

	// BrnRoadRuleComponent.h:291
	extern const char KI_MAX_STRING_LENGTH_POSSIBLE = 32;

	// BrnRoadRuleComponent.h:292
	extern char[] KAC_RR_CPT_AS_NAME;

	// BrnRoadRuleComponent.h:293
	extern const float32_t KF_WARNING_TIME;

	// BrnRoadRuleComponent.h:300
	extern char[] KAC_ROADSIGNCPTNAME;

	// BrnRoadRuleComponent.h:301
	extern char[] KAC_CENTRALARROWANIMCPTNAME;

	// BrnRoadRuleComponent.h:302
	extern char[] KAC_LEFTROADSIGNCPTNAME;

	// BrnRoadRuleComponent.h:303
	extern char[] KAC_RIGHTROADSIGNCPTNAME;

	// BrnRoadRuleComponent.h:304
	extern char[] KAC_LEFTROADANIMCPTNAME;

	// BrnRoadRuleComponent.h:305
	extern char[] KAC_RIGHTROADANIMCPTNAME;

	// BrnRoadRuleComponent.h:312
	extern char[] KAC_BESTCRASHLABELTEXTFIELDNAME;

	// BrnRoadRuleComponent.h:313
	extern char[] KAC_BESTCRASHNAMETEXTFIELDNAME;

	// BrnRoadRuleComponent.h:314
	extern char[] KAC_BESTCRASHVALUETEXTFIELDNAME;

	// BrnRoadRuleComponent.h:319
	extern char[] KAC_BESTTIMELABELTEXTFIELDNAME;

	// BrnRoadRuleComponent.h:320
	extern char[] KAC_BESTTIMENAMETEXTFIELDNAME;

	// BrnRoadRuleComponent.h:321
	extern char[] KAC_BESTTIMEVALUETEXTFIELDNAME;

	// BrnRoadRuleComponent.h:323
	extern char[] KAC_TIMEANIMATORNAME;

	// BrnRoadRuleComponent.h:324
	extern char[] KAC_CRASHANIMATORNAME;

	// BrnRoadRuleComponent.h:326
	extern char[] KAC_TIMEICONNAME;

	// BrnRoadRuleComponent.h:327
	extern char[] KAC_CRASHICONNAME;

	// BrnRoadRuleComponent.h:329
	extern const const char *[3] maTimeIconIdentifiers;

	// BrnRoadRuleComponent.h:330
	extern const const char *[3] maCrashIconIdentifiers;

	// BrnRoadRuleComponent.h:337
	extern char[] KAC_CURRENTTIMERFIELDNAME;

	// BrnRoadRuleComponent.h:338
	extern char[] KAC_CURRENTTIMERANIMATORNAME;

	// BrnRoadRuleComponent.h:343
	extern char[] KAC_CURRENTCRASHTEXTFIELDNAME;

	// BrnRoadRuleComponent.h:344
	extern char[] KAC_CURRENTCRASHANIMATORNAME;

	// BrnRoadRuleComponent.h:350
	extern const uint8_t KU_SAFERED;

	// BrnRoadRuleComponent.h:351
	extern const uint8_t KU_SAFEGREEN;

	// BrnRoadRuleComponent.h:352
	extern const uint8_t KU_SAFEBLUE;

	// BrnRoadRuleComponent.h:353
	extern const uint8_t KU_DANGERRED;

	// BrnRoadRuleComponent.h:354
	extern const uint8_t KU_DANGERGREEN;

	// BrnRoadRuleComponent.h:355
	extern const uint8_t KU_DANGERBLUE;

	// BrnRoadRuleComponent.h:363
	MovieClipRef mRoadSignAnimationsMC;

	// BrnRoadRuleComponent.h:364
	MovieClipRef mSubComponentPositionsMC;

	// BrnRoadRuleComponent.h:365
	MovieClipRef mLeftSignAlignmentsMC;

	// BrnRoadRuleComponent.h:366
	MovieClipRef mRightSignAlignmentsMC;

	// BrnRoadRuleComponent.h:371
	BrnGui::RoadRulesRoadSign mRoadSign;

	// BrnRoadRuleComponent.h:372
	BrnGui::RoadRulesAnimator mCentralArrowAnimator;

	// BrnRoadRuleComponent.h:373
	BrnGui::RoadRulesRoadSign mRoadSignLefty;

	// BrnRoadRuleComponent.h:374
	BrnGui::RoadRulesRoadSign mRoadSignRighty;

	// BrnRoadRuleComponent.h:375
	BrnGui::RoadRulesAnimator mLeftRoadAnimator;

	// BrnRoadRuleComponent.h:376
	BrnGui::RoadRulesAnimator mRightRoadAnimator;

	// BrnRoadRuleComponent.h:378
	Vector3[2] maRoadWorldPosition;

	// BrnRoadRuleComponent.h:380
	BrnGui::RoadRuleComponent::EAnimationState meCurrentSignState;

	// Unknown accessibility
	// BrnRoadRuleComponent.h:69
	typedef TextFieldRef RoadRulesTextfield;

	// BrnRoadRuleComponent.h:387
	RoadRuleComponent::RoadRulesTextfield mBestCrashLabelTextField;

	// BrnRoadRuleComponent.h:388
	RoadRuleComponent::RoadRulesTextfield mBestCrashNameTextField;

	// BrnRoadRuleComponent.h:389
	RoadRuleComponent::RoadRulesTextfield mBestCrashValueTextField;

	// BrnRoadRuleComponent.h:394
	RoadRuleComponent::RoadRulesTextfield mBestTimeLabelTextField;

	// BrnRoadRuleComponent.h:395
	RoadRuleComponent::RoadRulesTextfield mBestTimeNameTextField;

	// BrnRoadRuleComponent.h:396
	RoadRuleComponent::RoadRulesTextfield mBestTimeValueTextField;

	// BrnRoadRuleComponent.h:398
	BrnGui::RoadRulesAnimator mTimeAnimator;

	// BrnRoadRuleComponent.h:399
	BrnGui::RoadRulesAnimator mCrashAnimator;

	// BrnRoadRuleComponent.h:401
	BrnGui::RoadRulesIcon mTimeLeaderIcon;

	// BrnRoadRuleComponent.h:402
	BrnGui::RoadRulesIcon mCrashLeaderIcon;

	// BrnRoadRuleComponent.h:408
	BrnGui::RoadRulesTimer mCurrentTimerField;

	// BrnRoadRuleComponent.h:411
	RoadRuleComponent::RoadRulesTextfield mCurrentCrashTextField;

	// BrnRoadRuleComponent.h:413
	BrnGui::RoadRulesAnimator mCurrentTimeAnimator;

	// BrnRoadRuleComponent.h:416
	BrnGui::RoadRulesAnimator mCurrentCrashAnimator;

	// BrnRoadRuleComponent.h:419
	BrnGui::RoadRuleComponent::EAnimationState meCurrentTimerAnimState;

	// BrnRoadRuleComponent.h:420
	BrnGui::RoadRuleComponent::EAnimationState meCurrentCrashAnimState;

	// BrnRoadRuleComponent.h:426
	GuiEventRoadRuleEnter mTransitionData;

	// BrnRoadRuleComponent.h:427
	GuiEventRoadRuleUpcomingRoads mUpcomingRoadData;

	// BrnRoadRuleComponent.h:428
	CgsID mCurrentRunningRoadID;

	// BrnRoadRuleComponent.h:429
	bool[2] mabRuleActive;

	// BrnRoadRuleComponent.h:430
	bool[2] mabRulePending;

	// BrnRoadRuleComponent.h:433
	MovieClipRef mTargetTimeMC;

	// BrnRoadRuleComponent.h:434
	MovieClipRef mTargetCrashMC;

	// BrnRoadRuleComponent.h:436
	bool mbTimeTargetVisible;

	// BrnRoadRuleComponent.h:437
	bool mbCrashTargetVisible;

	// BrnRoadRuleComponent.h:440
	BrnGameState::EActiveRoadRule meCurrentlyActiveRule;

	// BrnRoadRuleComponent.h:441
	BrnGameState::EActiveRoadRule mePreviousActiveRule;

	// BrnRoadRuleComponent.h:444
	BrnGui::GuiCache * mpGuiCache;

	// BrnRoadRuleComponent.h:445
	bool mbInShowTime;

	// BrnRoadRuleComponent.h:446
	CgsLanguage::LanguageManager::ParameterFormatType mRoadRulePlayerNameFormatType;

	// BrnRoadRuleComponent.h:448
	int32_t miParentAptLayerIndex;

	// BrnRoadRuleComponent.h:450
	bool mbRoadRulesVisible;

	// BrnRoadRuleComponent.h:451
	bool mbUpcomingRoadsVisible;

	// BrnRoadRuleComponent.h:454
	float32_t mfTargetCrashScore;

	// BrnRoadRuleComponent.h:455
	float32_t mfCurrentCrashScore;

	// BrnRoadRuleComponent.h:456
	int32_t miCrashMultiplier;

public:
	// BrnRoadRuleComponent.h:105
	void Construct(const char *, StateInterface *, const char *, int32_t);

	// BrnRoadRuleComponent.h:112
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnRoadRuleComponent.h:118
	void Update(float32_t);

	// BrnRoadRuleComponent.h:123
	void UpdateCurrentTime(float32_t);

	// BrnRoadRuleComponent.h:129
	void UpdateCurrentCrash(float32_t, int32_t);

	// BrnRoadRuleComponent.h:133
	void UpdateRoadSignDistances(Vector3);

	// BrnRoadRuleComponent.h:138
	void HandleLeaveRoadEvent(CgsID);

	// BrnRoadRuleComponent.h:143
	void HandleEnterRoadEvent(const GuiEventRoadRuleEnter *);

	// BrnRoadRuleComponent.h:148
	void HandleRoadRuleTargetUpdate(const GuiEventRoadRuleUpdateTargetScores *);

	// BrnRoadRuleComponent.h:153
	void HandleRoadRuleBegin(BrnStreetData::ScoreType);

	// BrnRoadRuleComponent.h:158
	void HandleRoadRuleEnd(const GuiEventRoadRuleEnd *);

	// BrnRoadRuleComponent.h:163
	void HandleUpcomingRoadEvent(const GuiEventRoadRuleUpcomingRoads *);

	// BrnRoadRuleComponent.h:168
	void SwitchModes(BrnGameState::EActiveRoadRule);

	// BrnRoadRuleComponent.h:180
	void TransitionComplete(int32_t);

	// BrnRoadRuleComponent.h:184
	void InitialiseMode();

	// BrnRoadRuleComponent.h:188
	void EndTimers();

	// BrnRoadRuleComponent.h:195
	float32_t GetCurrentCrashScore() const;

	// BrnRoadRuleComponent.h:201
	void SetCachePointer(BrnGui::GuiCache *);

	// BrnRoadRuleComponent.h:206
	void SetIfInShowTime(bool);

private:
	// BrnRoadRuleComponent.h:464
	void GetNameOfRule(char *, int32_t, const GuiEventRoadRuleEnter *, BrnStreetData::ScoreType);

	// BrnRoadRuleComponent.h:468
	void RefreshBestData();

	// BrnRoadRuleComponent.h:472
	void EnterRoad();

	// BrnRoadRuleComponent.h:476
	int32_t GetNextRuleAvailable();

	// BrnRoadRuleComponent.h:481
	void ShowRoadRules(bool);

	// BrnRoadRuleComponent.h:486
	void ShowUpcomingRoads(bool);

	// BrnRoadRuleComponent.h:494
	void UpdateUpcomingRoadSign(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide, BrnGui::RoadRulesRoadSign *, BrnGui::RoadRulesAnimator *, const GuiEventRoadRuleUpcomingRoads *);

	// BrnRoadRuleComponent.h:500
	BrnGui::FlaptRoadSignIconComponent::ESignColour GetRoadSignColour(const BrnGui::RoadRuleLeaderType *, CgsID) const;

	// BrnRoadRuleComponent.h:505
	BrnGui::FlaptRoadSignIconComponent::ESignColour GetRoadSignColourInEvent(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState) const;

	// BrnRoadRuleComponent.h:509
	void AnimateCurrentTime(BrnGui::RoadRuleComponent::EAnimationState);

	// BrnRoadRuleComponent.h:513
	void AnimateCurrentCrash(BrnGui::RoadRuleComponent::EAnimationState);

	// BrnRoadRuleComponent.h:517
	void RefreshSignColours();

	// BrnRoadRuleComponent.h:521
	bool IsCurrentTimeLeaving();

	// BrnRoadRuleComponent.h:529
	void SetUpcomingRoadAnimation(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadState, BrnGui::RoadRulesAnimator *, BrnGui::RoadRuleComponent::EUpcomingRoadAnimState);

	// BrnRoadRuleComponent.h:533
	BrnStreetData::ScoreType GetActiveRoadRuleType() const;

	// BrnRoadRuleComponent.h:539
	bool IsSameAsCurrentRoad(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide, const GuiEventRoadRuleUpcomingRoads *) const;

	// BrnRoadRuleComponent.h:543
	bool ShouldUseInEventColouring();

	// BrnRoadRuleComponent.h:548
	void SetCurrentSignState(BrnGui::RoadRuleComponent::EAnimationState);

	// BrnRoadRuleComponent.h:553
	void UpdateUpcomingRoadLeaders(GuiEventRoadRuleUpcomingRoads *);

	// BrnRoadRuleComponent.h:561
	void UpdateRoadSignDistance(Vector3, BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide, VecFloat, BrnGui::RoadRulesRoadSign *);

	// BrnRoadRuleComponent.h:566
	VecFloat GetSignOffsetSizeAdjustment(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide);

	// BrnRoadRuleComponent.h:570
	bool IsRoadRuleCrash(BrnGameState::EActiveRoadRule) const;

	// BrnRoadRuleComponent.h:574
	bool IsRoadRuleTime(BrnGameState::EActiveRoadRule) const;

	// BrnRoadRuleComponent.h:581
	void RepositionUpcomingSign(BrnGui::GuiEventRoadRuleUpcomingRoads::ERoadSide);

	// BrnRoadRuleComponent.h:587
	void TransitionCompleteCallback(void *, uint16_t);

}

// BrnRoadRuleComponent.h:276
extern BrnGui::RoadRuleComponent::ERoadSignSizes[] KAE_ROAD_SIGN_SIZES;

// BrnRoadRuleComponent.h:277
extern const int32_t KI_MAX_ROAD_INDEX;

// BrnRoadRuleComponent.h:279
extern const char *[] KAAC_ROADSIGN_SIZE_FRAME_LABELS;

// BrnRoadRuleComponent.h:287
extern const char *[6] KAPC_ANIMATION_FRAMES;

// BrnRoadRuleComponent.h:292
extern char[] KAC_RR_CPT_AS_NAME;

// BrnRoadRuleComponent.h:293
extern const float32_t KF_WARNING_TIME;

// BrnRoadRuleComponent.h:300
extern char[] KAC_ROADSIGNCPTNAME;

// BrnRoadRuleComponent.h:301
extern char[] KAC_CENTRALARROWANIMCPTNAME;

// BrnRoadRuleComponent.h:302
extern char[] KAC_LEFTROADSIGNCPTNAME;

// BrnRoadRuleComponent.h:303
extern char[] KAC_RIGHTROADSIGNCPTNAME;

// BrnRoadRuleComponent.h:304
extern char[] KAC_LEFTROADANIMCPTNAME;

// BrnRoadRuleComponent.h:305
extern char[] KAC_RIGHTROADANIMCPTNAME;

// BrnRoadRuleComponent.h:312
extern char[] KAC_BESTCRASHLABELTEXTFIELDNAME;

// BrnRoadRuleComponent.h:313
extern char[] KAC_BESTCRASHNAMETEXTFIELDNAME;

// BrnRoadRuleComponent.h:314
extern char[] KAC_BESTCRASHVALUETEXTFIELDNAME;

// BrnRoadRuleComponent.h:319
extern char[] KAC_BESTTIMELABELTEXTFIELDNAME;

// BrnRoadRuleComponent.h:320
extern char[] KAC_BESTTIMENAMETEXTFIELDNAME;

// BrnRoadRuleComponent.h:321
extern char[] KAC_BESTTIMEVALUETEXTFIELDNAME;

// BrnRoadRuleComponent.h:323
extern char[] KAC_TIMEANIMATORNAME;

// BrnRoadRuleComponent.h:324
extern char[] KAC_CRASHANIMATORNAME;

// BrnRoadRuleComponent.h:326
extern char[] KAC_TIMEICONNAME;

// BrnRoadRuleComponent.h:327
extern char[] KAC_CRASHICONNAME;

// BrnRoadRuleComponent.h:329
extern const const char *[3] maTimeIconIdentifiers;

// BrnRoadRuleComponent.h:330
extern const const char *[3] maCrashIconIdentifiers;

// BrnRoadRuleComponent.h:337
extern char[] KAC_CURRENTTIMERFIELDNAME;

// BrnRoadRuleComponent.h:338
extern char[] KAC_CURRENTTIMERANIMATORNAME;

// BrnRoadRuleComponent.h:343
extern char[] KAC_CURRENTCRASHTEXTFIELDNAME;

// BrnRoadRuleComponent.h:344
extern char[] KAC_CURRENTCRASHANIMATORNAME;

// BrnRoadRuleComponent.h:350
extern const uint8_t KU_SAFERED;

// BrnRoadRuleComponent.h:351
extern const uint8_t KU_SAFEGREEN;

// BrnRoadRuleComponent.h:352
extern const uint8_t KU_SAFEBLUE;

// BrnRoadRuleComponent.h:353
extern const uint8_t KU_DANGERRED;

// BrnRoadRuleComponent.h:354
extern const uint8_t KU_DANGERGREEN;

// BrnRoadRuleComponent.h:355
extern const uint8_t KU_DANGERBLUE;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadRuleComponent {
		// BrnRoadRuleComponent.h:89
		enum ERoadSignSizes {
			E_ROAD_SIGN_SMALL = 0,
			E_ROAD_SIGN_MEDIUM1 = 1,
			E_ROAD_SIGN_MEDIUM2 = 2,
			E_ROAD_SIGN_LARGE = 3,
			E_ROAD_SIGN_COUNT = 4,
		}

		// BrnRoadRuleComponent.h:249
		enum EAnimationState {
			E_ANIMATION_STATE_INVISIBLE = 0,
			E_ANIMATION_STATE_TRANSIN = 1,
			E_ANIMATION_STATE_IDLE = 2,
			E_ANIMATION_STATE_TRANSOUT = 3,
			E_ANIMATION_STATE_BASIC_COUNT = 4,
			E_ANIMATION_STATE_UNSUCCESSFUL_IDLE = 4,
			E_ANIMATION_STATE_UNSUCCESSFUL_TRANSOUT = 5,
			E_ANIMATION_STATE_ADVANCED_COUNT = 6,
			E_ANIMATION_STATE_FIRST = 0,
		}

		// BrnRoadRuleComponent.h:266
		enum EUpcomingRoadAnimState {
			E_UPCOMING_ROAD_ANIM_INVISIBLE = 0,
			E_UPCOMING_ROAD_ANIM_TRANS_IN = 1,
			E_UPCOMING_ROAD_ANIM_TRANS_OUT_TAKEN = 2,
			E_UPCOMING_ROAD_ANIM_TRANS_OUT_NOT_TAKEN = 3,
			E_UPCOMING_ROAD_ANIM_COUNT = 4,
		}

	}

}

// BrnRoadRuleComponent.h:291
extern const char KI_MAX_STRING_LENGTH_POSSIBLE = 32;

// BrnRoadRuleComponent.h:72
struct BrnGui::RoadRulesRoadSign : public BrnGui::FlaptRoadSignIconComponent {
public:
	void RoadRulesRoadSign(const RoadRulesRoadSign &);

	void RoadRulesRoadSign();

}

// BrnRoadRuleComponent.h:71
struct BrnGui::RoadRulesTimer : public BrnGui::FlaptTimerFieldComponent {
public:
	void RoadRulesTimer(const RoadRulesTimer &);

	void RoadRulesTimer();

}

// BrnRoadRuleComponent.h:70
struct BrnGui::RoadRulesIcon : public BrnGui::FlaptIconComponent {
public:
	void RoadRulesIcon(const RoadRulesIcon &);

	void RoadRulesIcon();

}

// BrnRoadRuleComponent.h:68
struct BrnGui::RoadRulesAnimator : public BrnGui::FlaptAnimatorComponent {
public:
	void RoadRulesAnimator(const RoadRulesAnimator &);

	void RoadRulesAnimator();

}

// BrnRoadRuleComponent.h:72
void BrnGui::RoadRulesRoadSign::RoadRulesRoadSign() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.h:68
void BrnGui::RoadRulesAnimator::RoadRulesAnimator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.h:70
void BrnGui::RoadRulesIcon::RoadRulesIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadRuleComponent.h:71
void BrnGui::RoadRulesTimer::RoadRulesTimer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

