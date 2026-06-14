// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BaseOnlineModeScoring {
		// BrnBaseOnlineModeScoring.h:165
		struct NetworkAwardData {
			// BrnBaseOnlineModeScoring.h:167
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnBaseOnlineModeScoring.h:168
			int32_t miRaceCarPosition;

			// BrnBaseOnlineModeScoring.h:169
			int32_t miTakedownsFor;

			// BrnBaseOnlineModeScoring.h:170
			int32_t miTakedownsAgainst;

			// BrnBaseOnlineModeScoring.h:171
			int32_t miNumberOfCrashes;

			// BrnBaseOnlineModeScoring.h:172
			Time mFastestLap;

			// BrnBaseOnlineModeScoring.h:173
			float32_t mfDistanceDriven;

			// BrnBaseOnlineModeScoring.h:174
			bool mbFinishedRace;

			// BrnBaseOnlineModeScoring.h:175
			Time mTimeInLastPlace;

			// BrnBaseOnlineModeScoring.h:176
			Time mTimeInFirstPlace;

			// BrnBaseOnlineModeScoring.h:177
			Time mTimeBoosting;

			// BrnBaseOnlineModeScoring.h:178
			float32_t mfLongestDrift;

			// BrnBaseOnlineModeScoring.h:179
			int32_t miOverallStandingsPosition;

		}

	private:
		// BrnBaseOnlineModeScoring.h:191
		extern const int (*)(const void *, const void *)[11] maAwardRatingFunctions;

		// BrnBaseOnlineModeScoring.h:192
		extern const bool (*)(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t)[11] maGiveAwardFunctions;

		// BrnBaseOnlineModeScoring.h:197
		extern const BrnGameState::EOnlineAwardID[11] maAwardPriorities;

	}

}

// BrnBaseOnlineModeScoring.h:191
extern const int (*)(const void *, const void *)[11] maAwardRatingFunctions;

// BrnBaseOnlineModeScoring.h:192
extern const bool (*)(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t)[11] maGiveAwardFunctions;

// BrnBaseOnlineModeScoring.h:197
extern const BrnGameState::EOnlineAwardID[11] maAwardPriorities;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BaseOnlineModeScoring {
		// BrnBaseOnlineModeScoring.h:165
		struct NetworkAwardData {
			// BrnBaseOnlineModeScoring.h:167
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnBaseOnlineModeScoring.h:168
			int32_t miRaceCarPosition;

			// BrnBaseOnlineModeScoring.h:169
			int32_t miTakedownsFor;

			// BrnBaseOnlineModeScoring.h:170
			int32_t miTakedownsAgainst;

			// BrnBaseOnlineModeScoring.h:171
			int32_t miNumberOfCrashes;

			// BrnBaseOnlineModeScoring.h:172
			Time mFastestLap;

			// BrnBaseOnlineModeScoring.h:173
			float32_t mfDistanceDriven;

			// BrnBaseOnlineModeScoring.h:174
			bool mbFinishedRace;

			// BrnBaseOnlineModeScoring.h:175
			Time mTimeInLastPlace;

			// BrnBaseOnlineModeScoring.h:176
			Time mTimeInFirstPlace;

			// BrnBaseOnlineModeScoring.h:177
			Time mTimeBoosting;

			// BrnBaseOnlineModeScoring.h:178
			float32_t mfLongestDrift;

			// BrnBaseOnlineModeScoring.h:179
			int32_t miOverallStandingsPosition;

		}

	}

}

// BrnBaseOnlineModeScoring.h:46
struct BrnGameState::BaseOnlineModeScoring {
	int (*)(...) * _vptr.BaseOnlineModeScoring;

private:
	// BrnBaseOnlineModeScoring.cpp:29
	extern const int (*)(const void *, const void *)[11] maAwardRatingFunctions;

	// BrnBaseOnlineModeScoring.cpp:44
	extern const bool (*)(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t)[11] maGiveAwardFunctions;

	// BrnBaseOnlineModeScoring.h:193
	BrnGameState::EOnlineAwardID[8] maOnlineAwards;

	// BrnBaseOnlineModeScoring.h:194
	int32_t[8] maiOnlineAwardVariables;

	// BrnBaseOnlineModeScoring.h:195
	BrnGameState::GameStateModuleIO::EPlayerTeam[8] maePlayerTeams;

	// BrnBaseOnlineModeScoring.cpp:60
	extern const BrnGameState::EOnlineAwardID[11] maAwardPriorities;

	// BrnBaseOnlineModeScoring.h:199
	int32_t[8] maiPlayerPositions;

public:
	// BrnBaseOnlineModeScoring.cpp:91
	virtual void Construct();

	// BrnBaseOnlineModeScoring.cpp:123
	virtual bool Prepare();

	// BrnBaseOnlineModeScoring.cpp:145
	virtual bool Release();

	// BrnBaseOnlineModeScoring.cpp:109
	virtual void Destruct();

	// BrnBaseOnlineModeScoring.cpp:157
	virtual void ClearData();

	// BrnBaseOnlineModeScoring.cpp:191
	virtual void Update(const ScoringSystem *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:205
	void UpdatePlayerTeams(const ScoringSystem *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:230
	virtual void UpdatePlayerPoints(BrnGameState::ScoringSystem *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:244
	virtual void AwardNetworkRatings(const ScoringSystem *, uint32_t);

	// BrnBaseOnlineModeScoring.cpp:171
	virtual void WriteDataToOutput(OnlineScoringOutputInterface *);

	// BrnBaseOnlineModeScoring.h:341
	int32_t GetPlayerPosition(int32_t);

protected:
	// BrnBaseOnlineModeScoring.h:354
	void SetPlayerPosition(int32_t, int32_t);

	// BrnBaseOnlineModeScoring.cpp:1005
	virtual BrnGameState::GameStateModuleIO::EPlayerTeam GetCurrentPlayerTeam(int32_t);

	// BrnBaseOnlineModeScoring.cpp:1058
	void CompareNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID, RoadRulesRecvData::NetworkPlayerID, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1023
	void CompareDistanceToFinish(float_t, float_t, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1092
	void CompareFinishTime(const Time *, const Time *, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1129
	void CompareCheckpointsReached(int32_t, int32_t, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1231
	void CompareTimeAsRunner(Time, Time, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1163
	void CompareTakedowns(int32_t, int32_t, int32_t *);

	// BrnBaseOnlineModeScoring.cpp:1197
	void CompareDisconnects(bool, bool, int32_t *);

private:
	// BrnBaseOnlineModeScoring.cpp:334
	int32_t GetAwardParameter(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, BrnGameState::EOnlineAwardID);

	// BrnBaseOnlineModeScoring.cpp:774
	bool _GiveRaceWinnerAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:790
	bool _GiveTakedownsForAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:814
	bool _GiveTakedownsAgainstAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:838
	bool _GiveMostCrashesAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:862
	bool _GiveFastestLapAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:884
	bool _GiveShortestDistanceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:905
	bool _GiveLongestDistanceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:927
	bool _GiveTimeInLastPlaceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:948
	bool _GiveTimeInFirstPlaceAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:969
	bool _GiveMostTimeBoostingAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:990
	bool _GiveLongestDriftAward(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t);

	// BrnBaseOnlineModeScoring.cpp:387
	int32_t _RaceWinnerCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:428
	int32_t _TakedownsForCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:463
	int32_t _TakedownsAgainstCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:498
	int32_t _MostCrashesCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:533
	int32_t _FastestLapCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:564
	int32_t _ShortestDistanceLapCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:607
	int32_t _LongestDistanceLapCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:650
	int32_t _TimeInFirstPlaceCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:681
	int32_t _TimeInLastPlaceCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:712
	int32_t _MostTimeBoostingAwardCompare(const void *, const void *);

	// BrnBaseOnlineModeScoring.cpp:743
	int32_t _LongestDriftCompare(const void *, const void *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct BaseOnlineModeScoring {
		// BrnBaseOnlineModeScoring.h:165
		struct NetworkAwardData {
			// BrnBaseOnlineModeScoring.h:167
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnBaseOnlineModeScoring.h:168
			int32_t miRaceCarPosition;

			// BrnBaseOnlineModeScoring.h:169
			int32_t miTakedownsFor;

			// BrnBaseOnlineModeScoring.h:170
			int32_t miTakedownsAgainst;

			// BrnBaseOnlineModeScoring.h:171
			int32_t miNumberOfCrashes;

			// BrnBaseOnlineModeScoring.h:172
			Time mFastestLap;

			// BrnBaseOnlineModeScoring.h:173
			float32_t mfDistanceDriven;

			// BrnBaseOnlineModeScoring.h:174
			bool mbFinishedRace;

			// BrnBaseOnlineModeScoring.h:175
			Time mTimeInLastPlace;

			// BrnBaseOnlineModeScoring.h:176
			Time mTimeInFirstPlace;

			// BrnBaseOnlineModeScoring.h:177
			Time mTimeBoosting;

			// BrnBaseOnlineModeScoring.h:178
			float32_t mfLongestDrift;

			// BrnBaseOnlineModeScoring.h:179
			int32_t miOverallStandingsPosition;

		}

	public:
		BaseOnlineModeScoring();

	private:
		// BrnBaseOnlineModeScoring.h:191
		extern const int (*)(const void *, const void *)[11] maAwardRatingFunctions;

		// BrnBaseOnlineModeScoring.h:192
		extern const bool (*)(const BrnGameState::BaseOnlineModeScoring::NetworkAwardData *, int32_t)[11] maGiveAwardFunctions;

		// BrnBaseOnlineModeScoring.h:197
		extern const BrnGameState::EOnlineAwardID[11] maAwardPriorities;

	}

}

// BrnBaseOnlineModeScoring.h:46
void BrnGameState::BaseOnlineModeScoring::BaseOnlineModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

