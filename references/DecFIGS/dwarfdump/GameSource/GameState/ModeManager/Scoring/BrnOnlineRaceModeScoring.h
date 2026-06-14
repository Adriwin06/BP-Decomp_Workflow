// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct OnlineRaceModeScoring {
		// BrnOnlineRaceModeScoring.h:91
		struct IndexToFinishTuple {
			// BrnOnlineRaceModeScoring.h:93
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnOnlineRaceModeScoring.h:94
			RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

			// BrnOnlineRaceModeScoring.h:95
			Time mFinishTime;

			// BrnOnlineRaceModeScoring.h:96
			float_t mfDistanceToFinish;

			// BrnOnlineRaceModeScoring.h:97
			bool mbTimedOut;

			// BrnOnlineRaceModeScoring.h:98
			bool mbDisconnected;

			// BrnOnlineRaceModeScoring.h:99
			bool mbFinished;

		}

	}

}

// BrnOnlineRaceModeScoring.h:44
struct BrnGameState::OnlineRaceModeScoring : public BrnGameState::BaseOnlineModeScoring {
public:
	// BrnOnlineRaceModeScoring.cpp:42
	virtual void Construct();

	// BrnOnlineRaceModeScoring.cpp:72
	virtual bool Prepare();

	// BrnOnlineRaceModeScoring.cpp:87
	virtual bool Release();

	// BrnOnlineRaceModeScoring.cpp:57
	virtual void Destruct();

	// BrnOnlineRaceModeScoring.cpp:101
	virtual void Update(const ScoringSystem *, int32_t);

	// BrnOnlineRaceModeScoring.cpp:239
	virtual void UpdatePlayerPoints(BrnGameState::ScoringSystem *, int32_t);

	// BrnOnlineRaceModeScoring.cpp:322
	virtual void WriteDataToOutput(OnlineScoringOutputInterface *);

	// BrnOnlineRaceModeScoring.cpp:335
	virtual void ClearData();

private:
	// BrnOnlineRaceModeScoring.cpp:115
	int _PlayerFinishTimesCompare(const void *, const void *);

}

// BrnOnlineRaceModeScoring.h:44
void BrnGameState::OnlineRaceModeScoring::OnlineRaceModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

