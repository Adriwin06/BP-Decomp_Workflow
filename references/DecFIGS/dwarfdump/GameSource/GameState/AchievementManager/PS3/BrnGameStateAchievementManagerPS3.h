// BrnGameStateAchievementManagerPS3.h:24
enum EAchievement {
	E_ACHIEVEMENT_INVALID = -1,
	E_ACHIEVEMENT_START = 0,
	E_ACHIEVEMENT_REPAIR_FIRST_WRECKED_CAR = 0,
	E_ACHIEVEMENT_SET_ROAD_RULE_TIME_ON_WATT_ST = 1,
	E_ACHIEVEMENT_SET_ROAD_RULE_CRASH_ON_EAST_CRAWFORD_DRIVE = 2,
	E_ACHIEVEMENT_WIN_FIRST_RACE = 3,
	E_ACHIEVEMENT_COLLECT_5_STUNTS = 4,
	E_ACHIEVEMENT_COLLECT_25_SMASHES = 5,
	E_ACHIEVEMENT_WIN_RACE_WITHOUT_CRASHING = 6,
	E_ACHIEVEMENT_LICENSE_GRADE_D = 7,
	E_ACHIEVEMENT_SHUTDOWN_SI_7 = 8,
	E_ACHIEVEMENT_5X_MULTIPLIER_IN_SHOWTIME = 9,
	E_ACHIEVEMENT_ROADRAGE_PERFECT_RAGE = 10,
	E_ACHIEVEMENT_REPAIR_CRITICAL_DAMAGE_IN_ROADRAGE = 11,
	E_ACHIEVEMENT_FLATSPIN = 12,
	E_ACHIEVEMENT_TAKEDOWN_FRENZY = 13,
	E_ACHIEVEMENT_LICENSE_GRADE_C = 14,
	E_ACHIEVEMENT_COLLECT_5_JUMPS = 15,
	E_ACHIEVEMENT_2X_BOOST_CHAIN = 16,
	E_ACHIEVEMENT_SHUTDOWN_ROSSOLINI_LM = 17,
	E_ACHIEVEMENT_WIN_MARKED_MAN_WITHOUT_TAKENDOWN = 18,
	E_ACHIEVEMENT_WIN_7_UNIQUE_STUNT_RUNS = 19,
	E_ACHIEVEMENT_POWER_PARK_80 = 20,
	E_ACHIEVEMENT_10X_MULTIPLIER_IN_SHOW_TIME = 21,
	E_ACHIEVEMENT_COLLECT_200_SMASHES = 22,
	E_ACHIEVEMENT_30_SHOWTIME_RULES = 23,
	E_ACHIEVEMENT_30_ROAD_RULES = 24,
	E_ACHIEVEMENT_WIN_10_XS_CARS = 25,
	E_ACHIEVEMENT_TAKEDOWN_RAMPAGE = 26,
	E_ACHIEVEMENT_1_MILE_ONCOMING = 27,
	E_ACHIEVEMENT_LICENSE_GRADE_B = 28,
	E_ACHIEVEMENT_SHUTDOWN_HUNTER_MANHATTAN = 29,
	E_ACHIEVEMENT_10X_BOOST_CHAIN = 30,
	E_ACHIEVEMENT_POWER_PARK = 31,
	E_ACHIEVEMENT_SHUTDOWN_INFERNO_VAN = 32,
	E_ACHIEVEMENT_MILLIONAIRES_CLUB = 33,
	E_ACHIEVEMENT_COLLECT_25_JUMPS = 34,
	E_ACHIEVEMENT_COLLECT_60_STUNTS = 35,
	E_ACHIEVEMENT_3_BARREL_ROLL_JUMP = 36,
	E_ACHIEVEMENT_20X_BOOST_CHAIN = 37,
	E_ACHIEVEMENT_LICENSE_GRADE_A = 38,
	E_ACHIEVEMENT_SHUTDOWN_MONTGOMERY_GT2400 = 39,
	E_ACHIEVEMENT_40X_MULTIPLIER_IN_STUNT_RUN = 40,
	E_ACHIEVEMENT_WIN_25_XS_CARS = 41,
	E_ACHIEVEMENT_SHUTDOWN_JANSEN_X12 = 42,
	E_ACHIEVEMENT_GET_500_TAKEDOWNS = 43,
	E_ACHIEVEMENT_SHUTDOWN_HUNTER_4X4 = 44,
	E_ACHIEVEMENT_LICENSE_GRADE_BURNOUT = 45,
	E_ACHIEVEMENT_WIN_RACE_IN_WATSON_25_V16 = 46,
	E_ACHIEVEMENT_WIN_ALL_CAR_CHALLENGES = 47,
	E_ACHIEVEMENT_FIND_ALL_EVENTS = 48,
	E_ACHIEVEMENT_SECRET_FIND_ALL_CARPARKS = 49,
	E_ACHIEVEMENT_DRIVE_LONG_HAUL_MILES = 50,
	E_ACHIEVEMENT_COLLECT_ALL_STUNTS = 51,
	E_ACHIEVEMENT_COLLECT_ALL_SMASHES = 52,
	E_ACHIEVEMENT_WIN_MARKED_MAN_IN_KRIEGER_WTR_07 = 53,
	E_ACHIEVEMENT_COLLECT_ALL_JUMPS = 54,
	E_ACHIEVEMENT_SET_ROAD_RULE_TIME_ON_ALL = 55,
	E_ACHIEVEMENT_SET_ROAD_RULE_CRASH_ON_ALL = 56,
	E_ACHIEVEMENT_FIND_ALL_DRIVE_THRUS = 57,
	E_ACHIEVEMENT_LICENSE_GRADE_ELITE = 58,
	E_ACHIEVEMENT_COMPLETE_OFFLINE = 59,
	E_ACHIEVEMENT_COUNT = 60,
}

// BrnGameStateAchievementManagerPS3.h:141
struct BrnGameState::AchievementManagerPS3 : public BrnGameState::AchievementManagerBase {
private:
	// BrnGameStateAchievementManagerPS3.h:226
	BitArray<60u> mAchievementsToSend;

public:
	// BrnGameStateAchievementManagerPS3.cpp:44
	void Construct(BrnProgression::ProgressionManager *, StreetManager *, BrnGameState::ScoringSystem *, BrnGameState::GameStateModule *);

	// BrnGameStateAchievementManagerPS3.cpp:63
	bool Prepare();

	// BrnGameStateAchievementManagerPS3.cpp:79
	bool Release();

	// BrnGameStateAchievementManagerPS3.cpp:95
	void Destruct();

	// BrnGameStateAchievementManagerPS3.cpp:112
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnGameStateAchievementManagerPS3.cpp:202
	void OnEventWin(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnGameStateAchievementManagerPS3.cpp:284
	void OnShutdown(CgsID);

	// BrnGameStateAchievementManagerPS3.cpp:359
	void OnBoostChain(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:525
	void OnSetRoadRule(BrnStreetData::ScoreType, CgsID);

	// BrnGameStateAchievementManagerPS3.cpp:460
	void OnCollectStunt(BrnGameState::StuntElementType);

	// BrnGameStateAchievementManagerPS3.cpp:594
	void OnDrivenDistance();

	// BrnGameStateAchievementManagerPS3.cpp:414
	void OnShowTimeMultiplier(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:391
	void OnPowerParking(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:611
	void OnOncoming(float32_t);

	// BrnGameStateAchievementManagerPS3.cpp:571
	void OnTakedownChain(int32_t);

	// BrnGameStateAchievementManagerPS3.cpp:437
	void OnStuntRunMultiplier(int32_t);

private:
	// BrnGameStateAchievementManagerPS3.cpp:143
	virtual void AchievementEarnt(EAchievement);

	// BrnGameStateAchievementManagerPS3.cpp:136
	virtual bool IsAchievementEarnt(EAchievement);

	// BrnGameStateAchievementManagerPS3.cpp:160
	bool CheckCarID(CgsID, CgsID);

}

// BrnGameStateAchievementManagerPS3.h:141
void BrnGameState::AchievementManagerPS3::AchievementManagerPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

