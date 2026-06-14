// BrnStreetManagerDebugComponent.h:54
struct BrnGameState::StreetManagerDebugComponent : public CgsDev::DebugComponent {
	// BrnStreetManagerDebugComponent.h:77
	int32_t miNumberOfRoadRulesToWin;

private:
	// BrnStreetManagerDebugComponent.h:91
	StreetManager * mpStreetManager;

	// BrnStreetManagerDebugComponent.h:92
	bool mbOutputRoadRulesScoresToNetwork;

public:
	// BrnStreetManagerDebugComponent.cpp:49
	void Construct(StreetManager *);

	// BrnStreetManagerDebugComponent.cpp:90
	void Destruct();

	// BrnStreetManagerDebugComponent.cpp:105
	void Update(BrnGameState::GameStateModuleIO::OutputBuffer *);

	// BrnStreetManagerDebugComponent.cpp:65
	virtual void OnActivate();

	// BrnStreetManagerDebugComponent.cpp:236
	int32_t GetNumberOfRoadRulesToWin();

protected:
	// BrnStreetManagerDebugComponent.cpp:132
	virtual const char * GetName() const;

	// BrnStreetManagerDebugComponent.cpp:144
	virtual const char * GetPath() const;

private:
	// BrnStreetManagerDebugComponent.cpp:157
	void PopulateUserChallengeScores(void *);

	// BrnStreetManagerDebugComponent.cpp:286
	void WinAllRoadRules(void *);

	// BrnStreetManagerDebugComponent.cpp:364
	void WinAllTimeRoadRules(void *);

	// BrnStreetManagerDebugComponent.cpp:326
	void WinAllTimeRoadRulesBarOne(void *);

	// BrnStreetManagerDebugComponent.cpp:437
	void WinAllCrashRoadRulesBarOne(void *);

	// BrnStreetManagerDebugComponent.cpp:401
	void WinAllCrashRoadRules(void *);

	// BrnStreetManagerDebugComponent.cpp:201
	void WinSpecificNumberOfTimeRoadRules(void *);

	// BrnStreetManagerDebugComponent.cpp:249
	void WinSpecificNumberOfCrashRoadRules(void *);

	// BrnStreetManagerDebugComponent.cpp:473
	void SendRoadRulesScoresToNetwork(void *);

}

// BrnStreetManagerDebugComponent.h:54
void BrnGameState::StreetManagerDebugComponent::StreetManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

