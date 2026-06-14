// BrnOnlineFreeBurnMode.h:46
struct BrnGameState::OnlineFreeBurnMode : public BrnGameState::OnlineGameMode {
public:
	// BrnOnlineFreeBurnMode.h:78
	virtual const char * GetName() const;

	// BrnOnlineFreeBurnMode.cpp:50
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineFreeBurnMode.cpp:111
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnOnlineFreeBurnMode.h:91
	virtual bool RequiresStreaming() const;

}

// BrnOnlineFreeBurnMode.h:46
void BrnGameState::OnlineFreeBurnMode::OnlineFreeBurnMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

