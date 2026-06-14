// CgsSceneSweeperDebugComponent.h:52
void CgsSceneManager::SceneSweeperDebugComponent::SceneSweeperDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneSweeperDebugComponent.h:52
struct CgsSceneManager::SceneSweeperDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsSceneSweeperDebugComponent.h:84
	SceneSweeper * mpSceneSweeper;

	// CgsSceneSweeperDebugComponent.h:85
	float32_t mfDrawDistance;

	// CgsSceneSweeperDebugComponent.h:86
	bool mbRenderDynamicBoxes;

	// CgsSceneSweeperDebugComponent.h:87
	bool mbRenderInactiveBoxes;

public:
	// CgsSceneSweeperDebugComponent.cpp:38
	void Construct(SceneSweeper *);

	// CgsSceneSweeperDebugComponent.cpp:52
	void Destruct();

	// CgsSceneSweeperDebugComponent.cpp:75
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

protected:
	// CgsSceneSweeperDebugComponent.cpp:62
	virtual void OnActivate();

	// CgsSceneSweeperDebugComponent.h:97
	virtual const char * GetName() const;

	// CgsSceneSweeperDebugComponent.h:107
	virtual const char * GetPath() const;

private:
	// CgsSceneSweeperDebugComponent.cpp:96
	void RenderIntervalList(CgsDev::Debug3DImmediateRender *, IntervalList *, RGBA);

}

