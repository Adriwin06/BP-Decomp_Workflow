// BrnOnlineBurningHomeRunMode.h:46
struct BrnGameState::OnlineBurningHomeRunMode : public BrnGameState::OnlineGameMode {
private:
	// BrnOnlineBurningHomeRunMode.h:101
	Random mRandom;

	// BrnOnlineBurningHomeRunMode.h:104
	int32_t miNumCrashesWhenPlayerBecameRunner;

	// BrnOnlineBurningHomeRunMode.h:105
	int32_t miNumCrashesAsRunner;

	// BrnOnlineBurningHomeRunMode.h:106
	int32_t miMaxCrashesBeforeChange;

public:
	// BrnOnlineBurningHomeRunMode.h:117
	virtual const char * GetName() const;

	// BrnOnlineBurningHomeRunMode.cpp:52
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineBurningHomeRunMode.cpp:169
	virtual void PreWorldUpdate(BrnGameState::GameStateModuleIO::OutputBuffer *, const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *, const PostWorldInputBuffer::RCEntityGlobalRaceCarOutputInterface *, const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, bool, const ScoringSystem *);

	// BrnOnlineBurningHomeRunMode.cpp:234
	void SwitchBurningHomeRunRunner(EActiveRaceCarIndex, EActiveRaceCarIndex, BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnOnlineBurningHomeRunMode.cpp:299
	void PickNewBurningHomeRunRunner(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *, InputBuffer::GameActionQueue *);

	// BrnOnlineBurningHomeRunMode.h:124
	virtual bool HasLoadingScreen() const;

private:
	// BrnOnlineBurningHomeRunMode.cpp:125
	void PickRandomRunnerAndSetTeams(const StartNetworkGameEvent *, GameModeParams *);

}

// BrnOnlineBurningHomeRunMode.h:46
void BrnGameState::OnlineBurningHomeRunMode::OnlineBurningHomeRunMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

