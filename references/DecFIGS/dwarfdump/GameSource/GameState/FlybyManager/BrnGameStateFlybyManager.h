// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateFlybyManager.h:48
	const int32_t KI_MAX_STRING_ID_SIZE = 32;

}

// BrnGameStateFlybyManager.h:60
struct BrnGameState::CombinedStringID {
	// BrnGameStateFlybyManager.h:64
	char * mpcSingularStringID;

	// BrnGameStateFlybyManager.h:65
	char * mpcPluralStringID;

public:
	// BrnGameStateFlybyManager.h:62
	void CombinedStringID();

	// BrnGameStateFlybyManager.h:63
	void CombinedStringID(char *, char *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct FlybyManager {
		// BrnGameStateFlybyManager.h:159
		struct RivalRating {
			// BrnGameStateFlybyManager.h:161
			bool mbHasValidRelationship;

			// BrnGameStateFlybyManager.h:162
			RoadRulesRecvData::NetworkPlayerID mPlayerID;

			// BrnGameStateFlybyManager.h:163
			int32_t miRivalWeighting;

		public:
			// BrnGameStateFlybyManager.h:168
			void Prepare(RoadRulesRecvData::NetworkPlayerID);

			// BrnGameStateFlybyManager.h:174
			int32_t SortRivalsCallback(const void *, const void *);

		}

	}

	// BrnGameStateFlybyManager.h:48
	const int32_t KI_MAX_STRING_ID_SIZE = 32;

}

// BrnGameStateFlybyManager.h:96
struct BrnGameState::FlybyManager {
	int (*)(...) * _vptr.FlybyManager;

	// BrnGameStateFlybyManager.cpp:35
	extern const char * KPC_GAMERTAG_STRING_ID;

private:
	// BrnGameStateFlybyManager.h:181
	FlybyData mFlybyData;

	// BrnGameStateFlybyManager.h:182
	Random mRandom;

	// BrnGameStateFlybyManager.h:184
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateFlybyManager.h:185
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnGameStateFlybyManager.h:187
	int32_t miRankLeader;

	// BrnGameStateFlybyManager.h:188
	int32_t miRankOustider;

public:
	// BrnGameStateFlybyManager.cpp:121
	void Construct(BrnGameState::GameStateModule *, BrnGameState::ScoringSystem *);

	// BrnGameStateFlybyManager.cpp:142
	bool Prepare();

	// BrnGameStateFlybyManager.cpp:158
	bool Release();

	// BrnGameStateFlybyManager.cpp:173
	void Destruct();

	// BrnGameStateFlybyManager.h:119
	void Update();

	// BrnGameStateFlybyManager.h:123
	virtual const FlybyData * CalculateFlybyRivals();

	// BrnGameStateFlybyManager.h:127
	virtual const int32_t CalculateNumberOfCarsInFlyby();

	// BrnGameStateFlybyManager.h:202
	BrnGameState::GameStateModule * GetGameStateModule();

	// BrnGameStateFlybyManager.h:217
	FlybyData * GetFlybyData();

	// BrnGameStateFlybyManager.h:231
	Random * GetRandom();

	// BrnGameStateFlybyManager.h:245
	BrnGameState::ScoringSystem * GetScoringSystem();

}

// BrnGameStateFlybyManager.h:96
struct BrnGameState::FlybyManager {
	int (*)(...) * _vptr.FlybyManager;

	// BrnGameStateFlybyManager.h:177
	extern const char * KPC_GAMERTAG_STRING_ID;

private:
	// BrnGameStateFlybyManager.h:181
	FlybyData mFlybyData;

	// BrnGameStateFlybyManager.h:182
	Random mRandom;

	// BrnGameStateFlybyManager.h:184
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnGameStateFlybyManager.h:185
	BrnGameState::ScoringSystem * mpScoringSystem;

	// BrnGameStateFlybyManager.h:187
	int32_t miRankLeader;

	// BrnGameStateFlybyManager.h:188
	int32_t miRankOustider;

public:
	void FlybyManager(const FlybyManager &);

	void FlybyManager();

	// BrnGameStateFlybyManager.h:103
	void Construct(BrnGameState::GameStateModule *, BrnGameState::ScoringSystem *);

	// BrnGameStateFlybyManager.h:107
	bool Prepare();

	// BrnGameStateFlybyManager.h:111
	bool Release();

	// BrnGameStateFlybyManager.h:115
	void Destruct();

	// BrnGameStateFlybyManager.h:119
	void Update();

	// BrnGameStateFlybyManager.h:123
	virtual const FlybyData * CalculateFlybyRivals();

	// BrnGameStateFlybyManager.h:127
	virtual const int32_t CalculateNumberOfCarsInFlyby();

	// BrnGameStateFlybyManager.h:202
	BrnGameState::GameStateModule * GetGameStateModule();

	// BrnGameStateFlybyManager.h:217
	FlybyData * GetFlybyData();

	// BrnGameStateFlybyManager.h:231
	Random * GetRandom();

	// BrnGameStateFlybyManager.h:245
	BrnGameState::ScoringSystem * GetScoringSystem();

}

// BrnGameStateFlybyManager.h:96
void BrnGameState::FlybyManager::FlybyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

