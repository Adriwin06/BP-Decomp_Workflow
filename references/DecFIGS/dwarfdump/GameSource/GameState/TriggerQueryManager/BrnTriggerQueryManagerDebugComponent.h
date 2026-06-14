// BrnTriggerQueryManagerDebugComponent.h:59
struct BrnGameState::TriggerQueryManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnTriggerQueryManagerDebugComponent.h:84
	const TriggerData * mpTriggerData;

	// BrnTriggerQueryManagerDebugComponent.h:85
	const BrnGameState::TriggerQueryManager * mpTriggerQueryManager;

	// BrnTriggerQueryManagerDebugComponent.h:87
	StringList[5] maTriggerTypeNames;

	// BrnTriggerQueryManagerDebugComponent.h:88
	StringList[33] maGenericRegionTypeNames;

	// BrnTriggerQueryManagerDebugComponent.h:90
	float32_t mfClipDistance;

	// BrnTriggerQueryManagerDebugComponent.h:91
	float32_t mfTextClipDistance;

	// BrnTriggerQueryManagerDebugComponent.h:92
	int32_t miTriggerType;

	// BrnTriggerQueryManagerDebugComponent.h:93
	int32_t miGenericRegionType;

	// BrnTriggerQueryManagerDebugComponent.h:94
	bool mbRenderTriggerRegions;

	// BrnTriggerQueryManagerDebugComponent.h:95
	bool mbRenderRoamingLocations;

	// BrnTriggerQueryManagerDebugComponent.h:96
	bool mbRenderSpawnLocations;

	// BrnTriggerQueryManagerDebugComponent.h:97
	bool mbRenderStartPositions;

	// BrnTriggerQueryManagerDebugComponent.h:98
	bool mbRenderInfoText;

	// BrnTriggerQueryManagerDebugComponent.h:99
	bool mbRenderTriggerIds;

	// BrnTriggerQueryManagerDebugComponent.h:100
	bool mbRenderAxis;

public:
	// BrnTriggerQueryManagerDebugComponent.cpp:57
	void Construct(TriggerQueryManager *);

	// BrnTriggerQueryManagerDebugComponent.cpp:112
	void Destruct();

	// BrnTriggerQueryManagerDebugComponent.cpp:188
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

protected:
	// BrnTriggerQueryManagerDebugComponent.cpp:128
	virtual const char * GetName() const;

	// BrnTriggerQueryManagerDebugComponent.cpp:141
	virtual const char * GetPath() const;

	// BrnTriggerQueryManagerDebugComponent.cpp:153
	virtual void OnActivate();

}

// BrnTriggerQueryManagerDebugComponent.h:59
void BrnGameState::TriggerQueryManagerDebugComponent::TriggerQueryManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

