// BrnCrashScoreDebugComponent.h:48
struct BrnGameState::CrashScoreDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnCrashScoreDebugComponent.h:88
	CrashModeScoring * mpCrashScoring;

	// BrnCrashScoreDebugComponent.h:90
	bool mbShowScoring;

public:
	// BrnCrashScoreDebugComponent.cpp:47
	void Construct(CrashModeScoring *);

	// BrnCrashScoreDebugComponent.cpp:62
	void Destruct();

	// BrnCrashScoreDebugComponent.cpp:80
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnCrashScoreDebugComponent.cpp:98
	virtual void Update();

protected:
	// BrnCrashScoreDebugComponent.cpp:112
	virtual const char * GetName() const;

	// BrnCrashScoreDebugComponent.cpp:124
	virtual const char * GetPath() const;

	// BrnCrashScoreDebugComponent.cpp:136
	virtual void OnActivate();

private:
	// BrnCrashScoreDebugComponent.cpp:155
	void DisplayScores(CgsDev::Debug2DImmediateRender *);

}

// BrnCrashScoreDebugComponent.h:48
void BrnGameState::CrashScoreDebugComponent::CrashScoreDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

