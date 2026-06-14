// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiCustRendererDebugComponent {
	public:
		// BrnGuiCustRendererDebugComponent.h:231
		void SetMainMapDisplayActive(bool);

		// BrnGuiCustRendererDebugComponent.h:191
		bool IsOverrideEnabled() const;

		// BrnGuiCustRendererDebugComponent.h:256
		bool IsRenderingActive() const;

		// BrnGuiCustRendererDebugComponent.h:204
		bool IsSatNavDisplayActive() const;

		// BrnGuiCustRendererDebugComponent.h:243
		bool IsMainMapDisplayActive() const;

		// BrnGuiCustRendererDebugComponent.h:268
		bool IsAboveCarDisplayActive() const;

		// BrnGuiCustRendererDebugComponent.h:217
		void SetSatNavDisplayActive(bool);

	}

}

// BrnGuiCustRendererDebugComponent.h:53
struct BrnGui::GuiCustRendererDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnGuiCustRendererDebugComponent.h:157
	BrnGui::CustomRendererManager * mpCustRenderManager;

	// BrnGuiCustRendererDebugComponent.h:158
	bool mbShowCustomRenderStatus;

	// BrnGuiCustRendererDebugComponent.h:159
	bool mbSatNavRenderEnabled;

	// BrnGuiCustRendererDebugComponent.h:160
	bool mbMainMapRenderEnabled;

	// BrnGuiCustRendererDebugComponent.h:161
	bool mbAllRenderEnabled;

	// BrnGuiCustRendererDebugComponent.h:162
	bool mbAboveCarRenderEnabled;

	// BrnGuiCustRendererDebugComponent.h:163
	bool mbOverride;

	// BrnGuiCustRendererDebugComponent.h:165
	bool mbBoostBarDebugScreenEnabled;

	// BrnGuiCustRendererDebugComponent.h:167
	float32_t mfBoostOuterRed;

	// BrnGuiCustRendererDebugComponent.h:168
	float32_t mfBoostOuterGreen;

	// BrnGuiCustRendererDebugComponent.h:169
	float32_t mfBoostOuterBlue;

	// BrnGuiCustRendererDebugComponent.h:171
	float32_t mfBoostInnerRed;

	// BrnGuiCustRendererDebugComponent.h:172
	float32_t mfBoostInnerGreen;

	// BrnGuiCustRendererDebugComponent.h:173
	float32_t mfBoostInnerBlue;

public:
	// BrnGuiCustRendererDebugComponent.cpp:41
	void Construct(BrnGui::CustomRendererManager *);

	// BrnGuiCustRendererDebugComponent.cpp:74
	void Destruct();

	// BrnGuiCustRendererDebugComponent.cpp:232
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnGuiCustRendererDebugComponent.cpp:114
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnGuiCustRendererDebugComponent.h:191
	bool IsOverrideEnabled() const;

	// BrnGuiCustRendererDebugComponent.h:204
	bool IsSatNavDisplayActive() const;

	// BrnGuiCustRendererDebugComponent.h:217
	void SetSatNavDisplayActive(bool);

	// BrnGuiCustRendererDebugComponent.h:231
	void SetMainMapDisplayActive(bool);

	// BrnGuiCustRendererDebugComponent.h:243
	bool IsMainMapDisplayActive() const;

	// BrnGuiCustRendererDebugComponent.h:256
	bool IsRenderingActive() const;

	// BrnGuiCustRendererDebugComponent.h:268
	bool IsAboveCarDisplayActive() const;

	// BrnGuiCustRendererDebugComponent.cpp:245
	void SetBoostColour(BrnWorld::EBoostType);

	// BrnGuiCustRendererDebugComponent.cpp:291
	void SetBoostColourDangerCallback(void *);

	// BrnGuiCustRendererDebugComponent.cpp:305
	void SetBoostColourAggressionCallback(void *);

	// BrnGuiCustRendererDebugComponent.cpp:319
	void SetBoostColourStuntsCallback(void *);

	// BrnGuiCustRendererDebugComponent.cpp:259
	void SetBoostColourToCustom();

	// BrnGuiCustRendererDebugComponent.cpp:333
	void SetBoostColourToCustomCallback(void *);

	// BrnGuiCustRendererDebugComponent.cpp:276
	void ToggleBoostBarDebugScreen();

	// BrnGuiCustRendererDebugComponent.cpp:347
	void ToggleBoostBarDebugScreenCallback(void *);

protected:
	// BrnGuiCustRendererDebugComponent.cpp:90
	virtual const char * GetName() const;

	// BrnGuiCustRendererDebugComponent.cpp:102
	virtual const char * GetPath() const;

	// BrnGuiCustRendererDebugComponent.cpp:384
	virtual void OnActivate();

private:
	// BrnGuiCustRendererDebugComponent.cpp:360
	void UpdateBoostColours();

}

// BrnGuiCustRendererDebugComponent.h:53
void BrnGui::GuiCustRendererDebugComponent::GuiCustRendererDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

