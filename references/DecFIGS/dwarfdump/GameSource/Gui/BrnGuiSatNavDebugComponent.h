// BrnGuiSatNavDebugComponent.h:45
struct BrnGui::SatNavDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnGuiSatNavDebugComponent.h:94
	BrnGui::GuiModule * mpGuiModule;

	// BrnGuiSatNavDebugComponent.h:96
	bool mbRivalFovFreeBurn;

	// BrnGuiSatNavDebugComponent.h:97
	bool mbRivalFovRace;

	// BrnGuiSatNavDebugComponent.h:98
	bool mbViewTrajectory;

	// BrnGuiSatNavDebugComponent.h:99
	bool mbRotateSatNav;

	// BrnGuiSatNavDebugComponent.h:100
	bool mbShowOffLineRivalsOnSatNav;

	// BrnGuiSatNavDebugComponent.h:102
	bool mbDrawSatNavOutline;

	// BrnGuiSatNavDebugComponent.h:104
	float32_t mfSatNavTopLeftX;

	// BrnGuiSatNavDebugComponent.h:105
	float32_t mfSatNavTopLeftY;

	// BrnGuiSatNavDebugComponent.h:106
	float32_t mfSatNavBottomRightX;

	// BrnGuiSatNavDebugComponent.h:107
	float32_t mfSatNavBottomRightY;

	// BrnGuiSatNavDebugComponent.h:109
	uint32_t miSatNavAlpha;

	// BrnGuiSatNavDebugComponent.h:110
	float32_t mfCurrentZoomValue;

	// BrnGuiSatNavDebugComponent.h:112
	InputBuffer::GuiEventQueue mInputQueue;

public:
	// BrnGuiSatNavDebugComponent.cpp:48
	void Construct(BrnGui::GuiModule *);

	// BrnGuiSatNavDebugComponent.cpp:82
	void Destruct();

	// BrnGuiSatNavDebugComponent.cpp:199
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnGuiSatNavDebugComponent.cpp:100
	virtual const char * GetName() const;

	// BrnGuiSatNavDebugComponent.cpp:112
	virtual const char * GetPath() const;

	// BrnGuiSatNavDebugComponent.cpp:124
	virtual void OnActivate();

	// BrnGuiSatNavDebugComponent.cpp:177
	void Update(InputBuffer *);

protected:
	// BrnGuiSatNavDebugComponent.cpp:223
	void TriggerSatNavParamUpdate();

	// BrnGuiSatNavDebugComponent.cpp:259
	void TriggerSatNavPositionUpdate();

private:
	// BrnGuiSatNavDebugComponent.cpp:245
	void SatNavStateCallback(void *, void *);

	// BrnGuiSatNavDebugComponent.cpp:279
	void SatNavPositionCallback(void *, void *);

}

// BrnGuiSatNavDebugComponent.h:45
void BrnGui::SatNavDebugComponent::SatNavDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

