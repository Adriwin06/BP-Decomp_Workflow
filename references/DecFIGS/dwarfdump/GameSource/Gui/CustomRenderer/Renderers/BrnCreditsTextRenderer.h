// BrnCreditsTextRenderer.h:60
extern const int32_t KI_MAX_PARAGRAPHS = 500;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CreditsTextRenderer {
		// BrnCreditsTextRenderer.h:52
		struct ParagraphInfo {
			// BrnCreditsTextRenderer.h:54
			float32_t mfHeight;

			// BrnCreditsTextRenderer.h:55
			float32_t mfPosition;

			// BrnCreditsTextRenderer.h:56
			const UnicodeBuffer::CgsUtf8 * mpText;

			// BrnCreditsTextRenderer.h:57
			bool mbTitle;

		}

	}

}

// BrnCreditsTextRenderer.h:48
struct BrnGui::CreditsTextRenderer : public CgsGui::CustomRenderComponentInterface {
	// BrnCreditsTextRenderer.h:60
	extern const int32_t KI_MAX_PARAGRAPHS = 500;

private:
	// BrnCreditsTextRenderer.h:116
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnCreditsTextRenderer.h:117
	Im2dTransform mScreenTransform;

	// BrnCreditsTextRenderer.h:118
	TextRenderer * mpTextRenderer;

	// BrnCreditsTextRenderer.h:119
	LanguageManager * mpLanguageManager;

	// BrnCreditsTextRenderer.h:120
	SafeResourceHandle<CgsResource::Font> mpNormalFont;

	// BrnCreditsTextRenderer.h:121
	SafeResourceHandle<CgsResource::Font> mpTitleFont;

	// BrnCreditsTextRenderer.h:122
	int32_t miNumStrings;

	// BrnCreditsTextRenderer.h:123
	BrnGui::CreditsTextRenderer::ParagraphInfo[500] maParagraphs;

	// BrnCreditsTextRenderer.h:124
	TextObject mTitleTextObject;

	// BrnCreditsTextRenderer.h:125
	TextObject mNormalTextObject;

	// BrnCreditsTextRenderer.h:126
	float32_t mfScroll;

	// BrnCreditsTextRenderer.h:127
	float32_t mfFade;

	// BrnCreditsTextRenderer.h:128
	Resource mBackgroundMaskTextureStateResource;

	// BrnCreditsTextRenderer.h:129
	TextureState * mpBackgroundMaskTextureState;

public:
	// BrnCreditsTextRenderer.cpp:105
	virtual void Construct();

	// BrnCreditsTextRenderer.cpp:123
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnCreditsTextRenderer.cpp:130
	virtual bool Release();

	// BrnCreditsTextRenderer.cpp:136
	virtual void Destruct();

	// BrnCreditsTextRenderer.cpp:143
	// Declaration
	virtual void RecvEvent(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCreditsTextRenderer.cpp:175
		using namespace CgsDev::Message;

	}

	// BrnCreditsTextRenderer.cpp:221
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCreditsTextRenderer.cpp:223
		using namespace rw::math::vpu;

	}

	// BrnCreditsTextRenderer.cpp:288
	virtual CgsID GetID() const;

	// BrnCreditsTextRenderer.cpp:380
	virtual void SetTextRenderer(TextRenderer *);

	// BrnCreditsTextRenderer.cpp:388
	virtual void SetLanguageManager(LanguageManager *);

	// BrnCreditsTextRenderer.cpp:396
	virtual void SetRenderEnabled(bool);

private:
	// BrnCreditsTextRenderer.cpp:295
	virtual void RenderComponent(ImRendererSet *);

	// BrnCreditsTextRenderer.cpp:408
	void RecalculateParagraphs();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CreditsTextRenderer {
	public:
		CreditsTextRenderer();

		// Unknown accessibility
		// BrnCreditsTextRenderer.h:60
		extern const int32_t KI_MAX_PARAGRAPHS = 500;

	}

}

// BrnCreditsTextRenderer.h:48
void BrnGui::CreditsTextRenderer::CreditsTextRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

