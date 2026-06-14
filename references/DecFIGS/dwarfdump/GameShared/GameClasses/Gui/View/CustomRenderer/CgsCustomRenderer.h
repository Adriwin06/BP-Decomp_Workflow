// CgsCustomRenderer.h:55
struct CgsGui::ImRendererSet {
	// CgsCustomRenderer.h:60
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsCustomRenderer.h:64
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsCustomRenderer.h:65
	CgsGraphics::Im3dRenderBufferUntex * mpIm3dRenderBufferUntex;

	// CgsCustomRenderer.h:66
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBufferRacePosition;

	// CgsCustomRenderer.h:67
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBufferMenusAndHud;

	// CgsCustomRenderer.h:68
	Camera mCamera;

public:
	// CgsCustomRenderer.h:57
	void Construct();

	// CgsCustomRenderer.h:58
	void Clear();

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsCustomRenderer.h:95
	enum eCustomRenderLayer {
		E_CUSTOMRENDERLAYER_1 = 1,
		E_CUSTOMRENDERLAYER_2 = 2,
		E_CUSTOMRENDERLAYER_COUNT = 3,
	}

	// Declaration
	struct CustomRenderComponentInterface {
	public:
		// CgsCustomRenderer.h:307
		virtual void SetRenderEnabled(bool);

		// CgsCustomRenderer.h:341
		virtual CgsGui::eCustomRenderLayer GetRenderLayer() const;

		// CgsCustomRenderer.h:324
		bool GetRenderEnabled() const;

	}

}

// CgsCustomRenderer.h:195
void CgsGui::CustomRendererManager::CustomRendererManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCustomRenderer.h:105
void CgsGui::CustomRenderComponentInterface::CustomRenderComponentInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsCustomRenderer.h:95
	enum eCustomRenderLayer {
		E_CUSTOMRENDERLAYER_1 = 1,
		E_CUSTOMRENDERLAYER_2 = 2,
		E_CUSTOMRENDERLAYER_COUNT = 3,
	}

}

// CgsCustomRenderer.h:72
struct CgsGui::ImRendererSetNonBuffered {
	// CgsCustomRenderer.h:77
	CgsGraphics::Im2d * mpIm2dRenderer;

	// CgsCustomRenderer.h:78
	CgsGraphics::Im2dUntex * mpIm2dRendererUntex;

	// CgsCustomRenderer.h:79
	CgsGraphics::Im3d * mpIm3dRenderer;

	// CgsCustomRenderer.h:80
	CgsGraphics::Im3dUntex * mpIm3dRendererUntex;

public:
	// CgsCustomRenderer.h:74
	void Construct();

	// CgsCustomRenderer.h:75
	void Clear();

}

// CgsCustomRenderer.h:195
struct CgsGui::CustomRendererManager {
	int (*)(...) * _vptr.CustomRendererManager;

protected:
	// CgsCustomRenderer.h:285
	rw::IResourceAllocator * mpHeapAllocator;

	// CgsCustomRenderer.h:286
	rw::IResourceAllocator * mpTextureAllocator;

	// CgsCustomRenderer.h:288
	GuiEventQueueSmall mEventQueue;

public:
	// CgsCustomRenderer.cpp:228
	virtual void Construct();

	// CgsCustomRenderer.cpp:250
	virtual bool Prepare(rw::IResourceAllocator *, rw::IResourceAllocator *);

	// CgsCustomRenderer.cpp:269
	virtual bool Release();

	// CgsCustomRenderer.cpp:289
	virtual void Destruct();

	// CgsCustomRenderer.h:218
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// CgsCustomRenderer.h:222
	virtual void Update();

	// CgsCustomRenderer.h:227
	virtual void Render(ImRendererSet *, CgsGui::eCustomRenderLayer);

	// CgsCustomRenderer.h:356
	GuiEventQueueSmall * GetOutputEventQueue();

	// CgsCustomRenderer.h:244
	virtual renderengine::Texture * GetComponentTexture(CgsID, int32_t, int32_t *, ImRendererSet *);

	// CgsCustomRenderer.h:250
	virtual void SetComponentRenderable(int32_t, bool);

	// CgsCustomRenderer.h:255
	virtual bool GetComponentRenderable(int32_t);

	// CgsCustomRenderer.h:259
	virtual CgsID GetComponentID(int32_t) const;

	// CgsCustomRenderer.h:262
	virtual int32_t GetNumComponents() const;

	// CgsCustomRenderer.h:266
	virtual int32_t GetNumTexturesForComponent(int32_t) const;

	// CgsCustomRenderer.h:272
	virtual void SetAllRenderingState(bool);

	// CgsCustomRenderer.cpp:306
	virtual void SetTextRenderer(TextRenderer *);

	// CgsCustomRenderer.cpp:322
	virtual void SetLanguageManager(LanguageManager *);

}

// CgsCustomRenderer.h:105
struct CgsGui::CustomRenderComponentInterface {
	int (*)(...) * _vptr.CustomRenderComponentInterface;

protected:
	// CgsCustomRenderer.h:182
	bool mbRenderEnabled;

public:
	// CgsCustomRenderer.cpp:73
	virtual void Construct();

	// CgsCustomRenderer.h:116
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// CgsCustomRenderer.h:119
	virtual bool Release();

	// CgsCustomRenderer.cpp:91
	virtual void Destruct();

	// CgsCustomRenderer.cpp:112
	virtual renderengine::Texture * GetRenderOutput(int32_t, int32_t *, ImRendererSet *);

	// CgsCustomRenderer.h:135
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// CgsCustomRenderer.h:139
	virtual void Update();

	// CgsCustomRenderer.cpp:135
	void Render(ImRendererSet *);

	// CgsCustomRenderer.h:307
	virtual void SetRenderEnabled(bool);

	// CgsCustomRenderer.h:324
	bool GetRenderEnabled() const;

	// CgsCustomRenderer.h:341
	virtual CgsGui::eCustomRenderLayer GetRenderLayer() const;

	// CgsCustomRenderer.h:159
	virtual CgsID GetID() const;

	// CgsCustomRenderer.cpp:176
	virtual int32_t GetNumTextures() const;

	// CgsCustomRenderer.cpp:195
	virtual void StartFade(bool, float32_t);

	// CgsCustomRenderer.cpp:211
	virtual void ClearFadeState();

protected:
	// CgsCustomRenderer.h:180
	virtual void RenderComponent(ImRendererSet *);

}

