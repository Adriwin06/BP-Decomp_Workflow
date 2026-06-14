// BrnOnlineBurningHomeRunModeScoring.h:46
struct BrnGameState::OnlineBurningHomeRunModeScoring : public BrnGameState::BaseOnlineModeScoring {
public:
	// BrnOnlineBurningHomeRunModeScoring.cpp:62
	virtual void Construct();

	// BrnOnlineBurningHomeRunModeScoring.cpp:92
	virtual bool Prepare();

	// BrnOnlineBurningHomeRunModeScoring.cpp:107
	virtual bool Release();

	// BrnOnlineBurningHomeRunModeScoring.cpp:77
	virtual void Destruct();

	// BrnOnlineBurningHomeRunModeScoring.cpp:119
	virtual void ClearData();

	// BrnOnlineBurningHomeRunModeScoring.cpp:148
	virtual void Update(const ScoringSystem *, int32_t);

	// BrnOnlineBurningHomeRunModeScoring.cpp:287
	virtual void UpdatePlayerPoints(BrnGameState::ScoringSystem *, int32_t);

	// BrnOnlineBurningHomeRunModeScoring.cpp:133
	virtual void WriteDataToOutput(OnlineScoringOutputInterface *);

private:
	// BrnOnlineBurningHomeRunModeScoring.cpp:163
	int32_t _BurningHomeRunPlayerFinishTimesCompare(const void *, const void *);

}

// BrnOnlineBurningHomeRunModeScoring.h:46
void BrnGameState::OnlineBurningHomeRunModeScoring::OnlineBurningHomeRunModeScoring() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

