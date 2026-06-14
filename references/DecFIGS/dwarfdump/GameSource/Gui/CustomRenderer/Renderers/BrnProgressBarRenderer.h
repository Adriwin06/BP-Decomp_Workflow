// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ProgressBarRenderer {
		// BrnProgressBarRenderer.h:49
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnProgressBarRenderer.h:55
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

}

// BrnProgressBarRenderer.h:46
struct BrnGui::ProgressBarRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnProgressBarRenderer.h:91
	BrnGui::ProgressBarRenderer::EPrepareStage mePrepareStage;

	// BrnProgressBarRenderer.h:92
	BrnGui::ProgressBarRenderer::EReleaseStage meReleaseStage;

	// BrnProgressBarRenderer.h:93
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnProgressBarRenderer.h:95
	GuiEventRenderProgressBar mRenderProgressBarEvent;

public:
	// BrnProgressBarRenderer.cpp:46
	virtual void Construct();

	// BrnProgressBarRenderer.cpp:74
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnProgressBarRenderer.cpp:116
	virtual bool Release();

	// BrnProgressBarRenderer.cpp:154
	virtual void Destruct();

	// BrnProgressBarRenderer.cpp:185
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnProgressBarRenderer.cpp:170
	virtual void Update();

	// BrnProgressBarRenderer.cpp:294
	virtual CgsID GetID() const;

	// BrnProgressBarRenderer.cpp:264
	void RenderQuadUntex(CgsGraphics::Im3dRenderBufferUntex *, const rw::math::vpu::Vector4 &, const RGBA32 &);

private:
	// BrnProgressBarRenderer.cpp:219
	// Declaration
	virtual void RenderComponent(ImRendererSet *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnProgressBarRenderer.cpp:221
		using namespace rw::math;

	}

}

// BrnProgressBarRenderer.h:46
void BrnGui::ProgressBarRenderer::ProgressBarRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

