// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnTrainingManager.h:36
	enum ETrainingState {
		E_TRAINING_STATE_INACTIVE = 0,
		E_TRAINING_STATE_PENDING_MESSAGE = 1,
		E_TRAINING_STATE_PLAYING_MESSAGE = 2,
		E_TRAINING_STATE_WAITINGFORUNPAUSE = 3,
		E_TRAINING_STATE_WAIT_FOR_MESSAGE = 4,
		E_TRAINING_STATE_COUNT = 5,
	}

}

// BrnTrainingManager.h:61
struct BrnGameState::TrainingManager {
private:
	// BrnTrainingManager.h:157
	BrnGameState::ETrainingState meTrainingState;

	// BrnTrainingManager.h:158
	BrnProgression::ETrainingType meCurrentTrainingType;

	// BrnTrainingManager.h:160
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTrainingManager.h:161
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnTrainingManager.h:163
	float32_t mfStateTime;

	// BrnTrainingManager.h:164
	bool mbInPictureParadise;

	// BrnTrainingManager.h:165
	bool mbIsOnlinePossible;

	// BrnTrainingManager.h:166
	bool mbTipsEnabled;

	// BrnTrainingManager.h:167
	bool mbVoiceoverFinishedLastFrame;

	// BrnTrainingManager.h:169
	float32_t mfLastMessageFinishedTime;

	// BrnTrainingManager.h:170
	float32_t mfLastBoostMessagePlayTime;

	// BrnTrainingManager.h:172
	int32_t miNextAtomikaFreeburnVoIndex;

	// BrnTrainingManager.h:173
	bool mbGotAirBefore;

public:
	// BrnTrainingManager.h:69
	void Construct(BrnProgression::ProgressionManager *, BrnGameState::GameStateModule *);

	// BrnTrainingManager.h:78
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, InputBuffer::GameActionQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnTrainingManager.h:83
	void RequestTraining(BrnProgression::ETrainingType);

	// BrnTrainingManager.h:88
	void OnTogglePictureParadise(bool);

	// BrnTrainingManager.h:92
	void OnVoiceoverFinished();

	// BrnTrainingManager.h:97
	void OnEnableTrainingTips(bool);

	// BrnTrainingManager.h:101
	bool IsVoiceoverPlaying() const;

	// BrnTrainingManager.h:104
	bool DidVoiceoverFinishLastFrame();

	// BrnTrainingManager.h:108
	void ForceUnpause(InputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:111
	void OnGamePaused();

	// BrnTrainingManager.h:114
	void OnGameUnpaused();

	// BrnTrainingManager.h:117
	bool IsInPictureParadise();

	// BrnTrainingManager.h:120
	float32_t GetLastMessageFinishedTime();

private:
	// BrnTrainingManager.h:126
	void ResetStateTimer();

	// BrnTrainingManager.h:131
	void SendTrainingTickerMessage(InputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:136
	bool IsTipAllowedInGameMode(BrnProgression::ETrainingType) const;

	// BrnTrainingManager.h:141
	void UpdateOnlinePossible(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnTrainingManager.h:145
	bool DoesTrainingPauseGame(BrnProgression::ETrainingType);

	// BrnTrainingManager.h:151
	void TriggerAnyFollowOnTrainingTips(BrnProgression::ETrainingType, InputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:155
	void PlayNewAtomikaFreeburnVO();

	// BrnTrainingManager.h:177
	void DEBUG_ClearTrainingFlags();

}

// BrnTrainingManager.h:61
struct BrnGameState::TrainingManager {
private:
	// BrnTrainingManager.h:157
	BrnGameState::ETrainingState meTrainingState;

	// BrnTrainingManager.h:158
	BrnProgression::ETrainingType meCurrentTrainingType;

	// BrnTrainingManager.h:160
	BrnProgression::ProgressionManager * mpProgressionManager;

	// BrnTrainingManager.h:161
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnTrainingManager.h:163
	float32_t mfStateTime;

	// BrnTrainingManager.h:164
	bool mbInPictureParadise;

	// BrnTrainingManager.h:165
	bool mbIsOnlinePossible;

	// BrnTrainingManager.h:166
	bool mbTipsEnabled;

	// BrnTrainingManager.h:167
	bool mbVoiceoverFinishedLastFrame;

	// BrnTrainingManager.h:169
	float32_t mfLastMessageFinishedTime;

	// BrnTrainingManager.h:170
	float32_t mfLastBoostMessagePlayTime;

	// BrnTrainingManager.h:172
	int32_t miNextAtomikaFreeburnVoIndex;

	// BrnTrainingManager.h:173
	bool mbGotAirBefore;

public:
	// BrnTrainingManager.h:69
	void Construct(BrnProgression::ProgressionManager *, BrnGameState::GameStateModule *);

	// BrnTrainingManager.h:78
	void Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, OutputBuffer::GameActionQueue *, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, float32_t, bool);

	// BrnTrainingManager.h:83
	void RequestTraining(BrnProgression::ETrainingType);

	// BrnTrainingManager.h:88
	void OnTogglePictureParadise(bool);

	// BrnTrainingManager.h:92
	void OnVoiceoverFinished();

	// BrnTrainingManager.h:97
	void OnEnableTrainingTips(bool);

	// BrnTrainingManager.h:101
	bool IsVoiceoverPlaying() const;

	// BrnTrainingManager.h:104
	bool DidVoiceoverFinishLastFrame();

	// BrnTrainingManager.h:108
	void ForceUnpause(OutputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:111
	void OnGamePaused();

	// BrnTrainingManager.h:114
	void OnGameUnpaused();

	// BrnTrainingManager.h:117
	bool IsInPictureParadise();

	// BrnTrainingManager.h:120
	float32_t GetLastMessageFinishedTime();

private:
	// BrnTrainingManager.h:126
	void ResetStateTimer();

	// BrnTrainingManager.h:131
	void SendTrainingTickerMessage(OutputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:136
	bool IsTipAllowedInGameMode(BrnProgression::ETrainingType) const;

	// BrnTrainingManager.h:141
	void UpdateOnlinePossible(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *);

	// BrnTrainingManager.h:145
	bool DoesTrainingPauseGame(BrnProgression::ETrainingType);

	// BrnTrainingManager.h:151
	void TriggerAnyFollowOnTrainingTips(BrnProgression::ETrainingType, OutputBuffer::GameActionQueue *);

	// BrnTrainingManager.h:155
	void PlayNewAtomikaFreeburnVO();

	// BrnTrainingManager.h:177
	void DEBUG_ClearTrainingFlags();

}

