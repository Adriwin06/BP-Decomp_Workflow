// BrnChallengeManagerDebugComponent.h:52
struct BrnGameState::ChallengeManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnChallengeManagerDebugComponent.h:89
	ChallengeManager * mpChallengeManager;

	// BrnChallengeManagerDebugComponent.h:91
	int32_t miChallengeIndex;

	// BrnChallengeManagerDebugComponent.h:92
	bool mbDebugBeginChallengePending;

public:
	// BrnChallengeManagerDebugComponent.cpp:40
	void Construct(ChallengeManager *);

	// BrnChallengeManagerDebugComponent.cpp:55
	void Destruct();

	// BrnChallengeManagerDebugComponent.cpp:183
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnChallengeManagerDebugComponent.cpp:69
	virtual const char * GetName() const;

	// BrnChallengeManagerDebugComponent.cpp:81
	virtual const char * GetPath() const;

	// BrnChallengeManagerDebugComponent.cpp:93
	virtual void OnActivate();

	// BrnChallengeManagerDebugComponent.cpp:127
	void DebugStartChallenge();

	// BrnChallengeManagerDebugComponent.cpp:114
	void StartChallenge(void *);

	// BrnChallengeManagerDebugComponent.cpp:140
	void CompleteAllChallenges(void *);

}

// BrnChallengeManagerDebugComponent.h:52
void BrnGameState::ChallengeManagerDebugComponent::ChallengeManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

