// BrnOnlineShowtimeMode.h:44
struct BrnGameState::OnlineShowtimeMode : public BrnGameState::OnlineGameMode {
public:
	// BrnOnlineShowtimeMode.h:82
	virtual const char * GetName() const;

	// BrnOnlineShowtimeMode.h:94
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnOnlineShowtimeMode.h:58
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineShowtimeMode.h:63
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnOnlineShowtimeMode.h:68
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnOnlineShowtimeMode.h:107
	virtual bool RequiresStreaming() const;

}

// BrnOnlineShowtimeMode.h:44
struct BrnGameState::OnlineShowtimeMode : public OnlineGameMode {
public:
	// BrnOnlineShowtimeMode.h:82
	virtual const char * GetName() const;

	// BrnOnlineShowtimeMode.h:94
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnOnlineShowtimeMode.cpp:48
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineShowtimeMode.cpp:107
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnOnlineShowtimeMode.cpp:91
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnOnlineShowtimeMode.h:107
	virtual bool RequiresStreaming() const;

}

// BrnOnlineShowtimeMode.h:44
struct BrnGameState::OnlineShowtimeMode : public BrnGameState::OnlineGameMode {
public:
	void OnlineShowtimeMode(const OnlineShowtimeMode &);

	void OnlineShowtimeMode();

	// BrnOnlineShowtimeMode.h:82
	virtual const char * GetName() const;

	// BrnOnlineShowtimeMode.h:94
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnOnlineShowtimeMode.h:58
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnOnlineShowtimeMode.h:63
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnOnlineShowtimeMode.h:68
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnOnlineShowtimeMode.h:107
	virtual bool RequiresStreaming() const;

}

// BrnOnlineShowtimeMode.h:44
void BrnGameState::OnlineShowtimeMode::OnlineShowtimeMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

