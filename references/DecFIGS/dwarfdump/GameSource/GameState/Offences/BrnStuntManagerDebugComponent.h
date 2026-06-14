// BrnStuntManagerDebugComponent.h:50
struct BrnGameState::StuntManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnStuntManagerDebugComponent.h:86
	BrnGameState::StuntManager * mpStuntManager;

	// BrnStuntManagerDebugComponent.h:87
	CgsDev::SimpleStrStream[3] maStrStreams;

	// BrnStuntManagerDebugComponent.h:88
	Vector3[3] maLastPositions;

public:
	// BrnStuntManagerDebugComponent.cpp:51
	void Construct(BrnGameState::StuntManager *);

	// BrnStuntManagerDebugComponent.cpp:73
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnStuntManagerDebugComponent.cpp:92
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnStuntManagerDebugComponent.cpp:161
	void Destruct();

	// BrnStuntManagerDebugComponent.cpp:175
	virtual void OnActivate();

protected:
	// BrnStuntManagerDebugComponent.cpp:192
	virtual const char * GetName() const;

	// BrnStuntManagerDebugComponent.cpp:204
	virtual const char * GetPath() const;

private:
	// BrnStuntManagerDebugComponent.cpp:110
	void CompleteAllJumps(void *);

	// BrnStuntManagerDebugComponent.cpp:128
	void CompleteAllSmashes(void *);

	// BrnStuntManagerDebugComponent.cpp:145
	void CompleteAllStunt(void *);

	// BrnStuntManagerDebugComponent.cpp:286
	WorldRegion GetTriggerWorldRegion(const GenericRegion *);

	// BrnStuntManagerDebugComponent.cpp:220
	void CompleteAllStuntTypeButOne(BrnGameState::StuntElementType);

	// BrnStuntManagerDebugComponent.cpp:314
	void CompleteAllJumpsButOneCallback(void *);

	// BrnStuntManagerDebugComponent.cpp:329
	void CompleteAllSmashesButOneCallback(void *);

	// BrnStuntManagerDebugComponent.cpp:344
	void CompleteAllBillboardsButOneCallback(void *);

}

// BrnStuntManagerDebugComponent.h:50
void BrnGameState::StuntManagerDebugComponent::StuntManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

