// BrnGameStateAchievementManagerBase.h:226
extern const EAchievement[6] KAE_LICENSE_ACHIEVEMENTS;

// BrnGameStateAchievementManagerBase.h:47
struct BrnGameState::AchievementManagerBase {
	int (*)(...) * _vptr.AchievementManagerBase;

protected:
	// BrnGameStateAchievementManagerBase.cpp:35
	extern const EAchievement[6] KAE_LICENSE_ACHIEVEMENTS;

	// BrnGameStateAchievementManagerBase.h:228
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateAchievementManagerBase.h:229
	StreetManager * mpStreetManager;

	// BrnGameStateAchievementManagerBase.h:230
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnGameStateAchievementManagerBase.h:231
	BrnGameState::GameStateModule * mpGameStateModule;

public:
	// BrnGameStateAchievementManagerBase.cpp:61
	void Construct(BrnProgression::ProgressionManager *, StreetManager *, BrnGameState::ScoringSystem *, BrnGameState::GameStateModule *);

	// BrnGameStateAchievementManagerBase.cpp:87
	bool Prepare();

	// BrnGameStateAchievementManagerBase.cpp:102
	bool Release();

	// BrnGameStateAchievementManagerBase.cpp:117
	void Destruct();

	// BrnGameStateAchievementManagerBase.cpp:134
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateAchievementManagerBase.cpp:151
	void OnBodyShop(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameStateAchievementManagerBase.cpp:221
	void OnSetRoadRule(BrnStreetData::ScoreType, CgsID);

	// BrnGameStateAchievementManagerBase.cpp:265
	void OnSetAllRoadRules(BrnStreetData::ScoreType);

	// BrnGameStateAchievementManagerBase.cpp:182
	void OnTakedown();

	// BrnGameStateAchievementManagerBase.cpp:305
	void OnShutdown(CgsID);

	// BrnGameStateAchievementManagerBase.cpp:319
	void OnEventWin(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameStateAchievementManagerBase.cpp:404
	void OnLicenseUpgrade(uint8_t);

	// BrnGameStateAchievementManagerBase.cpp:484
	void OnCollectStunt(BrnGameState::StuntElementType);

	// BrnGameStateAchievementManagerBase.cpp:422
	void OnDrivenDistance();

	// BrnGameStateAchievementManagerBase.cpp:435
	void OnFindAllDriveThrus();

	// BrnGameStateAchievementManagerBase.cpp:451
	void OnFindAllCarParks();

	// BrnGameStateAchievementManagerBase.cpp:467
	void OnFindAllEvents();

	// BrnGameStateAchievementManagerBase.cpp:547
	void OnCollectAllStunts(BrnGameState::StuntElementType);

	// BrnGameStateAchievementManagerBase.cpp:597
	void OnBarrelRoll(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:618
	void OnFlatSpin(float32_t);

	// BrnGameStateAchievementManagerBase.cpp:639
	void OnStuntRunMultiplier(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:651
	void OnShowTimeMultiplier(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:671
	void OnPowerParking(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:691
	void OnBoostChain(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:729
	void OnTakedownChain(int32_t);

	// BrnGameStateAchievementManagerBase.cpp:711
	void OnGameCompletion();

	// BrnGameStateAchievementManagerPS3.cpp:630
	void OnFreeburnChallengeComplete(uint32_t);

	// BrnGameStateAchievementManagerPS3.cpp:636
	void OnFreeburnChallengeBlockComplete(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:642
	void OnMugshotAdded(uint32_t);

	// BrnGameStateAchievementManagerPS3.cpp:648
	void OnRivalAdded(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:655
	void OnFreeburnSkillzTotalChange(int32_t, float32_t);

	// BrnGameStateAchievementManagerPS3.cpp:660
	void OnCaughtFever();

	// BrnGameStateAchievementManagerPS3.cpp:666
	void OnMugshotSent(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:675
	void OnOnlineRaceComplete(int32_t, bool, int32_t, int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:680
	void OnCreatedCustomRoute();

protected:
	// BrnGameStateAchievementManagerBase.h:219
	virtual void AchievementEarnt(EAchievement);

	// BrnGameStateAchievementManagerBase.h:224
	virtual bool IsAchievementEarnt(EAchievement);

}

// BrnGameStateAchievementManagerBase.h:47
struct BrnGameState::AchievementManagerBase {
	int (*)(...) * _vptr.AchievementManagerBase;

protected:
	// BrnGameStateAchievementManagerBase.h:226
	extern const EAchievement[6] KAE_LICENSE_ACHIEVEMENTS;

	// BrnGameStateAchievementManagerBase.h:228
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnGameStateAchievementManagerBase.h:229
	StreetManager * mpStreetManager;

	// BrnGameStateAchievementManagerBase.h:230
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnGameStateAchievementManagerBase.h:231
	BrnGameState::GameStateModule * mpGameStateModule;

public:
	void AchievementManagerBase(const AchievementManagerBase &);

	void AchievementManagerBase();

	// BrnGameStateAchievementManagerBase.h:56
	void Construct(BrnProgression::ProgressionManager *, StreetManager *, BrnGameState::ScoringSystem *, BrnGameState::GameStateModule *);

	// BrnGameStateAchievementManagerBase.h:60
	bool Prepare();

	// BrnGameStateAchievementManagerBase.h:64
	bool Release();

	// BrnGameStateAchievementManagerBase.h:68
	void Destruct();

	// BrnGameStateAchievementManagerBase.h:74
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateAchievementManagerBase.h:79
	void OnBodyShop(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameStateAchievementManagerBase.h:85
	void OnSetRoadRule(BrnStreetData::ScoreType, CgsID);

	// BrnGameStateAchievementManagerBase.h:89
	void OnSetAllRoadRules(BrnStreetData::ScoreType);

	// BrnGameStateAchievementManagerBase.h:93
	void OnTakedown();

	// BrnGameStateAchievementManagerBase.h:98
	void OnShutdown(CgsID);

	// BrnGameStateAchievementManagerBase.h:103
	void OnEventWin(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameStateAchievementManagerBase.h:108
	void OnLicenseUpgrade(uint8_t);

	// BrnGameStateAchievementManagerBase.h:113
	void OnCollectStunt(BrnGameState::StuntElementType);

	// BrnGameStateAchievementManagerBase.h:117
	void OnDrivenDistance();

	// BrnGameStateAchievementManagerBase.h:121
	void OnFindAllDriveThrus();

	// BrnGameStateAchievementManagerBase.h:124
	void OnFindAllCarParks();

	// BrnGameStateAchievementManagerBase.h:128
	void OnFindAllEvents();

	// BrnGameStateAchievementManagerBase.h:133
	void OnCollectAllStunts(BrnGameState::StuntElementType);

	// BrnGameStateAchievementManagerBase.h:138
	void OnBarrelRoll(int32_t);

	// BrnGameStateAchievementManagerBase.h:143
	void OnFlatSpin(float32_t);

	// BrnGameStateAchievementManagerBase.h:148
	void OnStuntRunMultiplier(int32_t);

	// BrnGameStateAchievementManagerBase.h:153
	void OnShowTimeMultiplier(int32_t);

	// BrnGameStateAchievementManagerBase.h:158
	void OnPowerParking(int32_t);

	// BrnGameStateAchievementManagerBase.h:163
	void OnBoostChain(int32_t);

	// BrnGameStateAchievementManagerBase.h:168
	void OnTakedownChain(int32_t);

	// BrnGameStateAchievementManagerBase.h:172
	void OnGameCompletion();

	// BrnGameStateAchievementManagerBase.h:177
	void OnFreeburnChallengeComplete(uint32_t);

	// BrnGameStateAchievementManagerBase.h:181
	void OnFreeburnChallengeBlockComplete(int32_t);

	// BrnGameStateAchievementManagerBase.h:186
	void OnMugshotAdded(uint32_t);

	// BrnGameStateAchievementManagerBase.h:190
	void OnRivalAdded(int32_t);

	// BrnGameStateAchievementManagerBase.h:195
	void OnFreeburnSkillzTotalChange(int32_t, float32_t);

	// BrnGameStateAchievementManagerBase.h:198
	void OnCaughtFever();

	// BrnGameStateAchievementManagerBase.h:202
	void OnMugshotSent(int32_t);

	// BrnGameStateAchievementManagerBase.h:209
	void OnOnlineRaceComplete(int32_t, bool, int32_t, int32_t);

	// BrnGameStateAchievementManagerBase.h:212
	void OnCreatedCustomRoute();

protected:
	// BrnGameStateAchievementManagerBase.h:219
	virtual void AchievementEarnt(EAchievement);

	// BrnGameStateAchievementManagerBase.h:224
	virtual bool IsAchievementEarnt(EAchievement);

}

// BrnGameStateAchievementManagerBase.h:47
void BrnGameState::AchievementManagerBase::AchievementManagerBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

