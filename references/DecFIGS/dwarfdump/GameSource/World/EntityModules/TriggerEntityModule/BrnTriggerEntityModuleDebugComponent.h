// BrnTriggerEntityModuleDebugComponent.h:45
struct BrnWorld::TriggerEntityModuleDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnTriggerEntityModuleDebugComponent.h:83
	BrnWorld::TriggerEntityModule * mpTriggerEntityModule;

	// BrnTriggerEntityModuleDebugComponent.h:85
	int32_t miBoxTriggerCount;

	// BrnTriggerEntityModuleDebugComponent.h:86
	int32_t miSphereTriggerCount;

	// BrnTriggerEntityModuleDebugComponent.h:87
	int32_t miPlaneTriggerCount;

	// BrnTriggerEntityModuleDebugComponent.h:90
	bool mbRenderTriggerCounts;

	// BrnTriggerEntityModuleDebugComponent.h:91
	bool mbRenderTriggers;

	// BrnTriggerEntityModuleDebugComponent.h:92
	bool[3] mabTriggerTypeRenderFlags;

public:
	// BrnTriggerEntityModuleDebugComponent.cpp:48
	void Construct(BrnWorld::TriggerEntityModule *);

	// BrnTriggerEntityModuleDebugComponent.cpp:79
	void Destruct();

	// BrnTriggerEntityModuleDebugComponent.cpp:139
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnTriggerEntityModuleDebugComponent.cpp:225
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnTriggerEntityModuleDebugComponent.cpp:95
	virtual const char * GetName() const;

	// BrnTriggerEntityModuleDebugComponent.cpp:108
	virtual const char * GetPath() const;

	// BrnTriggerEntityModuleDebugComponent.cpp:120
	virtual void OnActivate();

}

// BrnTriggerEntityModuleDebugComponent.h:45
void BrnWorld::TriggerEntityModuleDebugComponent::TriggerEntityModuleDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

