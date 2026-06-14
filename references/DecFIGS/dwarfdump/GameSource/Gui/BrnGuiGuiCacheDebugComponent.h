// BrnGuiGuiCacheDebugComponent.h:45
struct BrnGui::GuiCacheDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnGuiGuiCacheDebugComponent.h:113
	BrnGui::GuiModule * mpGuiModule;

	// BrnGuiGuiCacheDebugComponent.h:115
	int32_t miDisplayMode;

	// BrnGuiGuiCacheDebugComponent.h:116
	bool mbShowGuiCacheStatus;

	// BrnGuiGuiCacheDebugComponent.h:117
	bool mbShowAptComponentGuiCacheStatus;

	// BrnGuiGuiCacheDebugComponent.cpp:30
	extern const char *[5] KAPC_DISPLAY_MODES;

	// BrnGuiGuiCacheDebugComponent.h:120
	StringList[5] maStringList;

	// BrnGuiGuiCacheDebugComponent.h:122
	InputBuffer::GuiEventQueue mInputQueue;

public:
	// BrnGuiGuiCacheDebugComponent.cpp:57
	void Construct(BrnGui::GuiModule *);

	// BrnGuiGuiCacheDebugComponent.cpp:78
	void Destruct();

	// BrnGuiGuiCacheDebugComponent.cpp:163
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnGuiGuiCacheDebugComponent.cpp:96
	virtual const char * GetName() const;

	// BrnGuiGuiCacheDebugComponent.cpp:108
	virtual const char * GetPath() const;

	// BrnGuiGuiCacheDebugComponent.cpp:120
	virtual void OnActivate();

	// BrnGuiGuiCacheDebugComponent.cpp:145
	void Update(InputBuffer *);

protected:
	// BrnGuiGuiCacheDebugComponent.cpp:182
	void ToggleShowGuiCacheStatus();

	// BrnGuiGuiCacheDebugComponent.cpp:193
	void ToggleShowAptComponentGuiCacheStatus();

	// BrnGuiGuiCacheDebugComponent.cpp:204
	void ShowGuiCacheStatus(CgsDev::Debug2DImmediateRender *);

	// BrnGuiGuiCacheDebugComponent.cpp:303
	void ShowAptComponentGuiCacheStatus(CgsDev::Debug2DImmediateRender *);

private:
	// BrnGuiGuiCacheDebugComponent.cpp:431
	void ShowGuiCacheStatusCallback(void *);

	// BrnGuiGuiCacheDebugComponent.cpp:444
	void ShowAptComponentGuiCacheStatusCallback(void *);

}

// BrnGuiGuiCacheDebugComponent.h:45
void BrnGui::GuiCacheDebugComponent::GuiCacheDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

