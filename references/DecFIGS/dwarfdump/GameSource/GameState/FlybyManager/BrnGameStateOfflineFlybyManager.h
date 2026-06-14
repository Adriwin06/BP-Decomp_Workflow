// BrnGameStateOfflineFlybyManager.h:42
struct BrnGameState::OfflineFlybyManager : public BrnGameState::FlybyManager {
private:
	// BrnGameStateOfflineFlybyManager.h:123
	BitArray<2u> mStatShownMessages;

	// BrnGameStateOfflineFlybyManager.h:129
	extern const int32_t KI_MIN_TAKEDOWNS_FOR_NEW_RIVALRY = 5;

	// BrnGameStateOfflineFlybyManager.h:130
	extern const int32_t KI_MIN_TAKEDOWNS_FOR_ONGOING_RIVALRY = 10;

public:
	// BrnGameStateOfflineFlybyManager.cpp:118
	void Construct(BrnGameState::GameStateModule *, BrnGameState::ScoringSystem *);

	// BrnGameStateOfflineFlybyManager.cpp:135
	bool Prepare();

	// BrnGameStateOfflineFlybyManager.cpp:154
	void Destruct();

	// BrnGameStateOfflineFlybyManager.cpp:170
	virtual const FlybyData * CalculateFlybyRivals();

	// BrnGameStateOfflineFlybyManager.cpp:194
	virtual const int32_t CalculateNumberOfCarsInFlyby();

private:
	// BrnGameStateOfflineFlybyManager.cpp:222
	void CalculateOfflineRivals();

}

// BrnGameStateOfflineFlybyManager.h:42
void BrnGameState::OfflineFlybyManager::OfflineFlybyManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

