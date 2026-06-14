// BrnBlackBarRenderer.h:82
extern const float32_t KF_MIN_BAR_SIZE;

// BrnBlackBarRenderer.h:83
extern const float32_t KF_MAX_BAR_SIZE;

// BrnBlackBarRenderer.h:47
struct BrnGui::BlackBarRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnBlackBarRenderer.cpp:23
	extern RGBA K_BLACK_BAR_COLOUR;

	// BrnBlackBarRenderer.cpp:24
	extern const float32_t KF_MIN_BAR_SIZE;

	// BrnBlackBarRenderer.cpp:25
	extern const float32_t KF_MAX_BAR_SIZE;

	// BrnBlackBarRenderer.h:85
	float32_t mfBarHeight;

	// BrnBlackBarRenderer.h:86
	bool mbStartedGame;

public:
	// BrnBlackBarRenderer.cpp:43
	virtual void Construct();

	// BrnBlackBarRenderer.cpp:67
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnBlackBarRenderer.cpp:85
	virtual bool Release();

	// BrnBlackBarRenderer.cpp:100
	virtual void Update();

	// BrnBlackBarRenderer.cpp:116
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnBlackBarRenderer.cpp:211
	virtual CgsID GetID() const;

private:
	// BrnBlackBarRenderer.cpp:152
	virtual void RenderComponent(ImRendererSet *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BlackBarRenderer {
	public:
		BlackBarRenderer();

	private:
		// BrnBlackBarRenderer.h:82
		extern const float32_t KF_MIN_BAR_SIZE;

		// BrnBlackBarRenderer.h:83
		extern const float32_t KF_MAX_BAR_SIZE;

	}

}

// BrnBlackBarRenderer.h:47
void BrnGui::BlackBarRenderer::BlackBarRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

