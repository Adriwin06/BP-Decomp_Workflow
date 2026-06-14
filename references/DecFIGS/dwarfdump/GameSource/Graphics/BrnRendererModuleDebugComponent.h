// BrnRendererModuleDebugComponent.h:44
struct BrnGraphics::DebugComponent : public CgsDev::DebugComponent {
private:
	// BrnRendererModuleDebugComponent.h:83
	BrnRendererModule * mpRendererModule;

	// BrnRendererModuleDebugComponent.h:86
	float32_t mfSunFlareOverrideBrightness;

	// BrnRendererModuleDebugComponent.h:87
	bool mbSunFlareOverrideBrightness;

public:
	// BrnRendererModuleDebugComponent.cpp:43
	void Construct(BrnRendererModule *);

	// BrnRendererModuleDebugComponent.cpp:63
	void Destruct();

	// BrnRendererModuleDebugComponent.cpp:79
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnRendererModuleDebugComponent.h:93
	const bool GetOverrideSunBrightness();

	// BrnRendererModuleDebugComponent.h:99
	const float32_t GetOverriddenSunBrightness();

protected:
	// BrnRendererModuleDebugComponent.cpp:91
	virtual const char * GetName() const;

	// BrnRendererModuleDebugComponent.h:73
	virtual const char * GetPath() const;

	// BrnRendererModuleDebugComponent.cpp:103
	virtual void OnActivate();

}

// BrnRendererModuleDebugComponent.h:44
void BrnGraphics::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

