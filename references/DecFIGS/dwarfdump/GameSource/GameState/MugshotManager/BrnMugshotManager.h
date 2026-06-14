// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct MugshotManager {
		// BrnMugshotManager.h:117
		enum EMugshotCaptureState {
			E_MUGSHOT_CAPTURE_STATE_IDLE = 0,
			E_MUGSHOT_CAPTURE_STATE_PREPARE_FOR_CAPTURE = 1,
			E_MUGSHOT_CAPTURE_STATE_CAPTURE_YOUR_MUGSHOT = 2,
			E_MUGSHOT_CAPTURE_STATE_TAKE_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:134
		enum EMugshotShowState {
			E_MUGSHOT_SHOW_STATE_IDLE = 0,
			E_MUGSHOT_SHOW_STATE_PREPARE_TO_CAPTURE_THEIR_MUGSHOT = 1,
			E_MUGSHOT_SHOW_STATE_CAPTURE_THEIR_MUGSHOT = 2,
			E_MUGSHOT_SHOW_STATE_SHOW_THEIR_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:152
		struct CameraStatusData {
			// BrnMugshotManager.h:154
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnMugshotManager.h:155
			BrnNetwork::ECameraStatus meCameraStatus;

		public:
			// BrnMugshotManager.h:159
			void Clear();

		}

	}

}

// BrnMugshotManager.h:46
struct BrnGameState::MugshotManager {
private:
	// BrnMugshotManager.h:163
	extern int32_t[] KAI_MUGSHOT_PRIORITIES;

	// BrnMugshotManager.h:166
	BrnGameState::MugshotManager::CameraStatusData[8] maCameraStatusData;

	// BrnMugshotManager.h:167
	CgsID mRoadRuleMugshotBeatenRoadID;

	// BrnMugshotManager.h:168
	EActiveRaceCarIndex meMugshotCaptureRaceCarIndex;

	// BrnMugshotManager.h:169
	EActiveRaceCarIndex meMugshotShowRaceCarIndex;

	// BrnMugshotManager.h:170
	float32_t mfMugshotCaptureTimer;

	// BrnMugshotManager.h:171
	float32_t mfMugshotShowTimer;

	// BrnMugshotManager.h:172
	BrnGameState::MugshotManager::EMugshotCaptureState meMugshotCaptureState;

	// BrnMugshotManager.h:173
	BrnGameState::MugshotManager::EMugshotShowState meMugshotShowState;

	// BrnMugshotManager.h:174
	BrnGameState::GameStateModuleIO::EImageType meCaptureMugshotType;

	// BrnMugshotManager.h:175
	BrnGameState::GameStateModuleIO::EImageType meShowMugshotType;

	// BrnMugshotManager.h:176
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnMugshotManager.h:177
	bool mbIsAnythingPaused;

public:
	// BrnMugshotManager.h:51
	void Construct(BrnGameState::GameStateModule *);

	// BrnMugshotManager.h:55
	bool Prepare();

	// BrnMugshotManager.h:59
	bool Release();

	// BrnMugshotManager.h:63
	void Destruct();

	// BrnMugshotManager.h:73
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType, bool);

	// BrnMugshotManager.h:77
	void OnRoundStart();

	// BrnMugshotManager.h:82
	void OnRoundEnd(bool);

	// BrnMugshotManager.h:87
	void ProcessImageReceivedEvent(const OnlineImageReceivedEvent *);

	// BrnMugshotManager.h:95
	void ProcessBeatenRoadRuleEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, EActiveRaceCarIndex, CgsID, BrnStreetData::ScoreType);

	// BrnMugshotManager.h:100
	void ProcessOnlineWin(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:105
	void ProcessAbortCaptureEvent(const OnlineImageCaptureAbortedEvent *);

private:
	// BrnMugshotManager.h:181
	void ResetState();

	// BrnMugshotManager.h:190
	void StartMugshotCapture(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::EImageType, EActiveRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnMugshotManager.h:195
	void UpdateCameraStatusData(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnMugshotManager.h:202
	void ProcessTakedownEvents(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const InputBuffer::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnMugshotManager.h:208
	void CheckForSuccessfulPayback(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:213
	void ChangeState(BrnGameState::MugshotManager::EMugshotCaptureState);

	// BrnMugshotManager.h:218
	void ChangeState(BrnGameState::MugshotManager::EMugshotShowState);

	// BrnMugshotManager.h:223
	void UpdateFSMTimers(const TimerStatusInterface *);

	// BrnMugshotManager.h:228
	bool DoesPlayerHaveACamera(EActiveRaceCarIndex);

	// BrnMugshotManager.h:236
	void HandlePreparingForMugshotCapture();

	// BrnMugshotManager.h:241
	void HandleCapturingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:248
	void HandleTakingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnMugshotManager.h:252
	void HandlePreparingToCaptureTheirMugshot();

	// BrnMugshotManager.h:257
	void HandleCapturingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:262
	void HandleShowingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

}

// BrnMugshotManager.h:163
extern int32_t[] KAI_MUGSHOT_PRIORITIES;

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct MugshotManager {
		// BrnMugshotManager.h:117
		enum EMugshotCaptureState {
			E_MUGSHOT_CAPTURE_STATE_IDLE = 0,
			E_MUGSHOT_CAPTURE_STATE_PREPARE_FOR_CAPTURE = 1,
			E_MUGSHOT_CAPTURE_STATE_CAPTURE_YOUR_MUGSHOT = 2,
			E_MUGSHOT_CAPTURE_STATE_TAKE_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:134
		enum EMugshotShowState {
			E_MUGSHOT_SHOW_STATE_IDLE = 0,
			E_MUGSHOT_SHOW_STATE_PREPARE_TO_CAPTURE_THEIR_MUGSHOT = 1,
			E_MUGSHOT_SHOW_STATE_CAPTURE_THEIR_MUGSHOT = 2,
			E_MUGSHOT_SHOW_STATE_SHOW_THEIR_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:152
		struct CameraStatusData {
			// BrnMugshotManager.h:154
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnMugshotManager.h:155
			BrnNetwork::ECameraStatus meCameraStatus;

		public:
			// BrnMugshotManager.h:159
			void Clear();

		}

	}

	// BrnMugshotManager.h:30
	using BrnNetwork::BrnNetworkModuleIO;

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnMugshotManager.h:30
	using BrnNetwork::BrnNetworkModuleIO;

	// Declaration
	struct MugshotManager {
		// BrnMugshotManager.h:117
		enum EMugshotCaptureState {
			E_MUGSHOT_CAPTURE_STATE_IDLE = 0,
			E_MUGSHOT_CAPTURE_STATE_PREPARE_FOR_CAPTURE = 1,
			E_MUGSHOT_CAPTURE_STATE_CAPTURE_YOUR_MUGSHOT = 2,
			E_MUGSHOT_CAPTURE_STATE_TAKE_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:134
		enum EMugshotShowState {
			E_MUGSHOT_SHOW_STATE_IDLE = 0,
			E_MUGSHOT_SHOW_STATE_PREPARE_TO_CAPTURE_THEIR_MUGSHOT = 1,
			E_MUGSHOT_SHOW_STATE_CAPTURE_THEIR_MUGSHOT = 2,
			E_MUGSHOT_SHOW_STATE_SHOW_THEIR_MUGSHOT = 3,
		}

		// BrnMugshotManager.h:152
		struct CameraStatusData {
			// BrnMugshotManager.h:154
			EActiveRaceCarIndex meActiveRaceCarIndex;

			// BrnMugshotManager.h:155
			BrnNetwork::ECameraStatus meCameraStatus;

		public:
			// BrnMugshotManager.h:159
			void Clear();

		}

	}

}

// BrnMugshotManager.h:46
struct BrnGameState::MugshotManager {
private:
	// BrnMugshotManager.h:163
	extern int32_t[] KAI_MUGSHOT_PRIORITIES;

	// BrnMugshotManager.h:166
	BrnGameState::MugshotManager::CameraStatusData[8] maCameraStatusData;

	// BrnMugshotManager.h:167
	CgsID mRoadRuleMugshotBeatenRoadID;

	// BrnMugshotManager.h:168
	EActiveRaceCarIndex meMugshotCaptureRaceCarIndex;

	// BrnMugshotManager.h:169
	EActiveRaceCarIndex meMugshotShowRaceCarIndex;

	// BrnMugshotManager.h:170
	float32_t mfMugshotCaptureTimer;

	// BrnMugshotManager.h:171
	float32_t mfMugshotShowTimer;

	// BrnMugshotManager.h:172
	BrnGameState::MugshotManager::EMugshotCaptureState meMugshotCaptureState;

	// BrnMugshotManager.h:173
	BrnGameState::MugshotManager::EMugshotShowState meMugshotShowState;

	// BrnMugshotManager.h:174
	BrnGameState::GameStateModuleIO::EImageType meCaptureMugshotType;

	// BrnMugshotManager.h:175
	BrnGameState::GameStateModuleIO::EImageType meShowMugshotType;

	// BrnMugshotManager.h:176
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnMugshotManager.h:177
	bool mbIsAnythingPaused;

public:
	// BrnMugshotManager.h:51
	void Construct(BrnGameState::GameStateModule *);

	// BrnMugshotManager.h:55
	bool Prepare();

	// BrnMugshotManager.h:59
	bool Release();

	// BrnMugshotManager.h:63
	void Destruct();

	// BrnMugshotManager.h:73
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, const LiveRevengeManager::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType, bool);

	// BrnMugshotManager.h:77
	void OnRoundStart();

	// BrnMugshotManager.h:82
	void OnRoundEnd(bool);

	// BrnMugshotManager.h:87
	void ProcessImageReceivedEvent(const OnlineImageReceivedEvent *);

	// BrnMugshotManager.h:95
	void ProcessBeatenRoadRuleEvent(BrnGameState::GameStateModuleIO::OutputBuffer *, EActiveRaceCarIndex, CgsID, BrnStreetData::ScoreType);

	// BrnMugshotManager.h:100
	void ProcessOnlineWin(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:105
	void ProcessAbortCaptureEvent(const OnlineImageCaptureAbortedEvent *);

private:
	// BrnMugshotManager.h:181
	void ResetState();

	// BrnMugshotManager.h:190
	void StartMugshotCapture(BrnGameState::GameStateModuleIO::OutputBuffer *, BrnGameState::GameStateModuleIO::EImageType, EActiveRaceCarIndex, EActiveRaceCarIndex, bool);

	// BrnMugshotManager.h:195
	void UpdateCameraStatusData(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnMugshotManager.h:202
	void ProcessTakedownEvents(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *, const LiveRevengeManager::TakedownEventQueue *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnMugshotManager.h:208
	void CheckForSuccessfulPayback(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:213
	void ChangeState(BrnGameState::MugshotManager::EMugshotCaptureState);

	// BrnMugshotManager.h:218
	void ChangeState(BrnGameState::MugshotManager::EMugshotShowState);

	// BrnMugshotManager.h:223
	void UpdateFSMTimers(const TimerStatusInterface *);

	// BrnMugshotManager.h:228
	bool DoesPlayerHaveACamera(EActiveRaceCarIndex);

	// BrnMugshotManager.h:236
	void HandlePreparingForMugshotCapture();

	// BrnMugshotManager.h:241
	void HandleCapturingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:248
	void HandleTakingMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *, const VehicleOutputInterface *, BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnMugshotManager.h:252
	void HandlePreparingToCaptureTheirMugshot();

	// BrnMugshotManager.h:257
	void HandleCapturingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnMugshotManager.h:262
	void HandleShowingTheirMugshot(BrnGameState::GameStateModuleIO::OutputBuffer *);

}

