// BrnTakedownManagerDebugComponent.h:49
struct BrnGameState::TakedownManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnTakedownManagerDebugComponent.h:91
	TakedownManager * mpTakedownManager;

	// BrnTakedownManagerDebugComponent.h:93
	EActiveRaceCarIndex meLastAggressorIndex;

	// BrnTakedownManagerDebugComponent.h:94
	EActiveRaceCarIndex meLastVictimIndex;

	// BrnTakedownManagerDebugComponent.h:95
	float32_t mfLastTakedownContactTime;

	// BrnTakedownManagerDebugComponent.h:97
	bool mbShowVulnerability;

	// BrnTakedownManagerDebugComponent.h:98
	bool mbShowLastTakedownInfo;

	// BrnTakedownManagerDebugComponent.h:99
	bool mbShowRevengeTakedownInfo;

public:
	// BrnTakedownManagerDebugComponent.cpp:42
	void Construct(TakedownManager *);

	// BrnTakedownManagerDebugComponent.cpp:61
	void Destruct();

	// BrnTakedownManagerDebugComponent.cpp:119
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnTakedownManagerDebugComponent.cpp:155
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnTakedownManagerDebugComponent.cpp:216
	void RecordTakedown(EActiveRaceCarIndex, EActiveRaceCarIndex);

protected:
	// BrnTakedownManagerDebugComponent.cpp:76
	virtual const char * GetName() const;

	// BrnTakedownManagerDebugComponent.cpp:89
	virtual const char * GetPath() const;

	// BrnTakedownManagerDebugComponent.cpp:101
	virtual void OnActivate();

	// BrnTakedownManagerDebugComponent.cpp:244
	void ForceTakedown();

	// BrnTakedownManagerDebugComponent.cpp:267
	void ForceTakedownCallback(void *);

}

// BrnTakedownManagerDebugComponent.h:49
void BrnGameState::TakedownManagerDebugComponent::TakedownManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

