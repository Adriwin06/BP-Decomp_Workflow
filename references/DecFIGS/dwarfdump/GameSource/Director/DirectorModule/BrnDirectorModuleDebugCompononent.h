// BrnDirectorModuleDebugCompononent.h:50
struct BrnDirector::DebugComponent : public CgsDev::DebugComponent {
	// BrnDirectorModuleDebugCompononent.h:68
	EActiveRaceCarIndex mePlayerCarIndexOverride;

private:
	// BrnDirectorModuleDebugCompononent.h:82
	BrnDirector::DirectorModule * mpDirectorModule;

	// BrnDirectorModuleDebugCompononent.h:99
	bool mbShowCameraPos;

	// BrnDirectorModuleDebugCompononent.h:100
	bool mbShowCrashShotInfo;

	// BrnDirectorModuleDebugCompononent.h:102
	bool mbTakePanoramaScreenshot;

	// BrnDirectorModuleDebugCompononent.h:103
	int32_t miPanoramaStepPitch;

	// BrnDirectorModuleDebugCompononent.h:104
	int32_t miPanoramaStepYaw;

public:
	// BrnDirectorModuleDebugCompononent.cpp:52
	void Construct(BrnDirector::DirectorModule *);

	// BrnDirectorModuleDebugCompononent.cpp:75
	void Destruct();

	// BrnDirectorModuleDebugCompononent.cpp:91
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnDirectorModuleDebugCompononent.cpp:402
	void UpdatePanoramaScreenshots(Camera *);

protected:
	// BrnDirectorModuleDebugCompononent.cpp:272
	virtual const char * GetName() const;

	// BrnDirectorModuleDebugCompononent.cpp:284
	virtual void OnActivate();

private:
	// BrnDirectorModuleDebugCompononent.cpp:441
	void SavePlaylists(void *);

	// BrnDirectorModuleDebugCompononent.cpp:455
	void LoadPlaylists(void *);

	// BrnDirectorModuleDebugCompononent.cpp:478
	void TakePanorama(void *);

	// BrnDirectorModuleDebugCompononent.cpp:497
	void StartEditor(void *);

}

// BrnDirectorModuleDebugCompononent.h:50
void BrnDirector::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

