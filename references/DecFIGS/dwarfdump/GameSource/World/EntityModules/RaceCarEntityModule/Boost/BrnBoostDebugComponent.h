// BrnBoostDebugComponent.h:50
struct BrnWorld::BoostDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnBoostDebugComponent.h:127
	extern const int32_t KI_STRING_SIZE = 256;

	// BrnBoostDebugComponent.h:129
	BrnWorld::RaceCarEntityModule * mpRaceCarEntityModule;

	// BrnBoostDebugComponent.h:130
	int32_t miBoostRules;

	// BrnBoostDebugComponent.h:132
	int32_t miActionTextModifiedTime;

public:
	// BrnBoostDebugComponent.cpp:47
	void Construct(BrnWorld::RaceCarEntityModule *);

	// BrnBoostDebugComponent.cpp:66
	void Destruct();

protected:
	// BrnBoostDebugComponent.cpp:84
	virtual const char * GetName() const;

	// BrnBoostDebugComponent.cpp:96
	virtual const char * GetPath() const;

	// BrnBoostDebugComponent.cpp:109
	virtual void OnActivate();

	// BrnBoostDebugComponent.cpp:195
	void UpdateBoostRules();

	// BrnBoostDebugComponent.cpp:172
	void FillBoost();

	// BrnBoostDebugComponent.cpp:210
	void OnTakedown();

	// BrnBoostDebugComponent.cpp:237
	void OnCrash();

private:
	// BrnBoostDebugComponent.cpp:250
	void RegisterBoostVariables();

	// BrnBoostDebugComponent.cpp:278
	void UnregisterBoostVariables();

	// BrnBoostDebugComponent.cpp:304
	void FillBoostCallback(void *);

	// BrnBoostDebugComponent.cpp:223
	void OnStunt();

	// BrnBoostDebugComponent.cpp:332
	void OnStuntCallback(void *);

	// BrnBoostDebugComponent.cpp:318
	void OnTakedownCallback(void *);

	// BrnBoostDebugComponent.cpp:347
	void OnCrashCallback(void *);

	// BrnBoostDebugComponent.cpp:361
	void UpdateBoostRulesCallback(void *);

	// BrnBoostDebugComponent.cpp:153
	void OnAddRemoveChunkMode(void *, void *);

	// BrnBoostDebugComponent.cpp:138
	void OnPreBurnoutWow(void *);

}

// BrnBoostDebugComponent.h:50
void BrnWorld::BoostDebugComponent::BoostDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

