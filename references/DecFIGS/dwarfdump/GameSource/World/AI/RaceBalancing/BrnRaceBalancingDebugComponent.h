// BrnRaceBalancingDebugComponent.h:51
struct BrnAI::RaceBalancingDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnRaceBalancingDebugComponent.h:103
	BrnAI::AIModule * mpAIModule;

	// BrnRaceBalancingDebugComponent.h:104
	RaceBalancingManager * mpRaceBalancingManager;

	// BrnRaceBalancingDebugComponent.h:106
	int32_t miCurrentRival;

	// BrnRaceBalancingDebugComponent.h:107
	bool mbShowData;

public:
	// BrnRaceBalancingDebugComponent.cpp:46
	void Construct(BrnAI::AIModule *, RaceBalancingManager *);

	// BrnRaceBalancingDebugComponent.cpp:62
	void Destruct();

	// BrnRaceBalancingDebugComponent.cpp:119
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnRaceBalancingDebugComponent.cpp:397
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnRaceBalancingDebugComponent.cpp:423
	void DrawGraphFrame(CgsDev::Debug2DImmediateRender *, Vector2, Vector2, const char *, const char *);

protected:
	// BrnRaceBalancingDebugComponent.cpp:77
	virtual const char * GetName() const;

	// BrnRaceBalancingDebugComponent.cpp:90
	virtual const char * GetPath() const;

	// BrnRaceBalancingDebugComponent.cpp:102
	virtual void OnActivate();

private:
	// BrnRaceBalancingDebugComponent.h:97
	void DrawGraphBackground(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t);

	// BrnRaceBalancingDebugComponent.cpp:455
	const AICar * FindAICar(int32_t) const;

}

// BrnRaceBalancingDebugComponent.h:51
void BrnAI::RaceBalancingDebugComponent::RaceBalancingDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

