// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RoadRageMode {
		// BrnRoadRageMode.h:109
		extern const float32_t KF_ROADRAGE_TRAFFIC_DENSITY;

	}

}

// BrnRoadRageMode.h:109
extern const float32_t KF_ROADRAGE_TRAFFIC_DENSITY;

// BrnRoadRageMode.h:45
struct BrnGameState::RoadRageMode : public BrnGameState::OfflineGameMode {
	// BrnRoadRageMode.cpp:26
	extern const float32_t KF_ROADRAGE_TRAFFIC_DENSITY;

	// BrnRoadRageMode.h:111
	int32_t miNumberOfTransmittedRivals;

	// BrnRoadRageMode.h:112
	int32_t miNumberOfAllowedRoadRageRivals;

	// BrnRoadRageMode.h:113
	int32_t miNumberOfRivals;

	// BrnRoadRageMode.h:115
	float32_t mAddCarPreDelay;

	// BrnRoadRageMode.h:116
	float32_t mfRoadRageMadness;

	// BrnRoadRageMode.h:117
	float32_t mfRoadRageMadnessRatio;

	// BrnRoadRageMode.h:119
	float32_t[8] mfHiddenTime;

	// BrnRoadRageMode.h:120
	bool mbUpdateRivals;

	// BrnRoadRageMode.h:122
	bool mbUpdateMadnessLevel;

	// BrnRoadRageMode.h:123
	float32_t mfMadnessBroadcastLevel;

	// BrnRoadRageMode.h:124
	float32_t mfProgressionRankAsRatio;

public:
	// BrnRoadRageMode.h:133
	virtual const char * GetName() const;

	// BrnRoadRageMode.cpp:68
	// Declaration
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadRageMode.cpp:78
		using namespace CgsDev::Message;

		// BrnRoadRageMode.cpp:79
		using namespace CgsDev::Message;

		// BrnRoadRageMode.cpp:85
		using namespace CgsDev::Message;

	}

	// BrnRoadRageMode.cpp:174
	virtual void FillInGameModeSpecificResults(const ScoringSystem *, FinishedModeAction *);

	// BrnRoadRageMode.cpp:201
	virtual bool ShouldFinish(BrnGameState::ScoringSystem *);

	// BrnRoadRageMode.cpp:231
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnRoadRageMode.cpp:453
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnRoadRageMode.cpp:264
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnRoadRageMode.cpp:515
	virtual void OnPlayerInShortCut();

	// BrnRoadRageMode.cpp:485
	// Declaration
	virtual void HandleGameEvents(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadRageMode.cpp:501
		using namespace CgsDev::Message;

	}

	// BrnRoadRageMode.cpp:391
	void UpdateMaxActiveCars(float32_t, const RoadRageModeScoring *);

	// BrnRoadRageMode.cpp:326
	void BroadcastEventsToRivals(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnRoadRageMode.cpp:286
	void UpdateHiddenRivals(float32_t);

	// BrnRoadRageMode.h:145
	virtual bool RequiresStreaming() const;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct RoadRageMode {
	public:
		RoadRageMode();

		// Unknown accessibility
		// BrnRoadRageMode.h:109
		extern const float32_t KF_ROADRAGE_TRAFFIC_DENSITY;

	}

}

// BrnRoadRageMode.h:45
void BrnGameState::RoadRageMode::RoadRageMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

