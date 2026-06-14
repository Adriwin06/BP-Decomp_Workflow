// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineRoadRageModeScoring {
		// BrnOnlineRoadRageModeScoring.h:96
		struct RedTeamSortData {
			// BrnOnlineRoadRageModeScoring.h:98
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnOnlineRoadRageModeScoring.h:99
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnOnlineRoadRageModeScoring.h:100
			int32_t miEliminations;

			// BrnOnlineRoadRageModeScoring.h:101
			bool mbTimedOut;

			// BrnOnlineRoadRageModeScoring.h:102
			bool mbDisconnected;

		}

		// BrnOnlineRoadRageModeScoring.h:114
		struct BlueTeamSortData {
			// BrnOnlineRoadRageModeScoring.h:116
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnOnlineRoadRageModeScoring.h:117
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnOnlineRoadRageModeScoring.h:118
			Time mFinishTime;

			// BrnOnlineRoadRageModeScoring.h:119
			float32_t mfDistanceToFinish;

			// BrnOnlineRoadRageModeScoring.h:120
			int32_t miTakedowns;

			// BrnOnlineRoadRageModeScoring.h:121
			bool mbEliminated;

			// BrnOnlineRoadRageModeScoring.h:122
			bool mbTimedOut;

			// BrnOnlineRoadRageModeScoring.h:123
			bool mbDisconnected;

		}

		// BrnOnlineRoadRageModeScoring.h:135
		struct TablePositionData {
			// BrnOnlineRoadRageModeScoring.h:137
			bool mbRedTeamWon;

			// BrnOnlineRoadRageModeScoring.h:138
			CarScoreData * mpScoreData;

			// BrnOnlineRoadRageModeScoring.h:139
			BrnGameState::GameStateModuleIO::EPlayerTeam mePlayerTeam;

			// BrnOnlineRoadRageModeScoring.h:140
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnOnlineRoadRageModeScoring.h:141
			EActiveRaceCarIndex meRaceCarIndex;

		}

	}

}

// BrnOnlineRoadRageModeScoring.h:46
struct BrnGameState::OnlineRoadRageModeScoring : public BrnGameState::BaseOnlineModeScoring {
private:
	// BrnOnlineRoadRageModeScoring.h:144
	bool mbRedTeamWon;

	// BrnOnlineRoadRageModeScoring.h:145
	int32_t[8] maiEliminationCount;

	// BrnOnlineRoadRageModeScoring.h:146
	BrnGameState::GameStateModuleIO::EBlueTeamFinishType[8] maeBlueTeamFinishTypes;

public:
	// BrnOnlineRoadRageModeScoring.cpp:41
	virtual void Construct();

	// BrnOnlineRoadRageModeScoring.cpp:75
	virtual bool Prepare();

	// BrnOnlineRoadRageModeScoring.cpp:90
	virtual bool Release();

	// BrnOnlineRoadRageModeScoring.cpp:58
	virtual void Destruct();

	// BrnOnlineRoadRageModeScoring.cpp:102
	virtual void ClearData();

	// BrnOnlineRoadRageModeScoring.cpp:145
	virtual void Update(const ScoringSystem *, int32_t);

	// BrnOnlineRoadRageModeScoring.cpp:373
	virtual void UpdatePlayerPoints(BrnGameState::ScoringSystem *, int32_t);

	// BrnOnlineRoadRageModeScoring.cpp:121
	virtual void WriteDataToOutput(OnlineScoringOutputInterface *);

private:
	// BrnOnlineRoadRageModeScoring.cpp:660
	void InitialisePlayerArrayData(BrnGameState::OnlineRoadRageModeScoring::RedTeamSortData *, BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData *);

	// BrnOnlineRoadRageModeScoring.cpp:684
	void CalculateRedTeamEliminations(const ScoringSystem *);

	// BrnOnlineRoadRageModeScoring.cpp:616
	void CalculateBlueTeamFinishTypes(const ScoringSystem *, BrnGameState::OnlineRoadRageModeScoring::BlueTeamSortData *, int32_t);

	// BrnOnlineRoadRageModeScoring.cpp:580
	bool CheckForRedTeamWin(const ScoringSystem *, int32_t);

	// BrnOnlineRoadRageModeScoring.cpp:322
	void CalculatePositionsInResultsTable(BrnGameState::ScoringSystem *, int32_t);

	// BrnOnlineRoadRageModeScoring.cpp:717
	int _RedTeamPlayerCompare(const void *, const void *);

	// BrnOnlineRoadRageModeScoring.cpp:767
	int _BlueTeamPlayerCompare(const void *, const void *);

	// BrnOnlineRoadRageModeScoring.cpp:160
	int _CompareForTablePosition(const void *, const void *);

}

// BrnOnlineRoadRageModeScoring.h:46
void BrnGameState::OnlineRoadRageModeScoring::OnlineRoadRageModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

