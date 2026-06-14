// BrnCrashMode.h:45
struct BrnGameState::CrashMode : public BrnGameState::OfflineGameMode {
public:
	// BrnCrashMode.h:88
	virtual const char * GetName() const;

	// BrnCrashMode.h:100
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnCrashMode.h:60
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnCrashMode.h:65
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnCrashMode.h:70
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnCrashMode.h:113
	virtual bool RequiresStreaming() const;

}

// BrnCrashMode.h:45
struct BrnGameState::CrashMode : public OfflineGameMode {
public:
	// BrnCrashMode.h:88
	virtual const char * GetName() const;

	// BrnCrashMode.h:100
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnCrashMode.cpp:50
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnCrashMode.cpp:81
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnCrashMode.cpp:97
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnCrashMode.h:113
	virtual bool RequiresStreaming() const;

}

// BrnCrashMode.h:45
struct BrnGameState::CrashMode : public BrnGameState::OfflineGameMode {
public:
	void CrashMode(const CrashMode &);

	void CrashMode();

	// BrnCrashMode.h:88
	virtual const char * GetName() const;

	// BrnCrashMode.h:100
	virtual float32_t GetIntroDurationSeconds() const;

	// BrnCrashMode.h:60
	virtual void Start(const StartGameModeParams *, GameModeParams *, BrnGameState::ScoringSystem *);

	// BrnCrashMode.h:65
	virtual bool ShouldExit(const ScoringSystem *) const;

	// BrnCrashMode.h:70
	virtual void SendEvent(BrnGameState::EGameModeEvent);

	// BrnCrashMode.h:113
	virtual bool RequiresStreaming() const;

}

// BrnCrashMode.h:45
void BrnGameState::CrashMode::CrashMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

