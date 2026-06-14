// BrnNetworkPlayerImageRenderer.h:56
extern const int32_t KI_MAX_NUM_TEXTURES_TO_DISPLAY = 3;

// BrnNetworkPlayerImageRenderer.h:118
extern const uint32_t KU_TEXTURE_WIDTH;

// BrnNetworkPlayerImageRenderer.h:119
extern const uint32_t KU_TEXTURE_HEIGHT;

// BrnNetworkPlayerImageRenderer.h:120
extern const int32_t KI_INITIAL_COPY_TO_TEXTURE;

// BrnNetworkPlayerImageRenderer.h:121
extern const int32_t KI_INITIAL_RENDER_FROM_TEXTURE;

// BrnNetworkPlayerImageRenderer.h:122
extern const int32_t KI_CLEAR_TEXTURES_NOT_SET;

// BrnNetworkPlayerImageRenderer.h:127
extern const int32_t KI_NUM_TEXTURES_TO_BUFFER = 3;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct NetworkPlayerImageRenderer {
		// BrnNetworkPlayerImageRenderer.h:58
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_TEXTURES = 1,
			E_PREPARESTAGE_LOAD_DEFAULT_TEXTURE = 2,
			E_PREPARESTAGE_INIT_DEFAULT_TEXTURE = 3,
			E_PREPARESTAGE_DONE = 4,
		}

		// BrnNetworkPlayerImageRenderer.h:67
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_TEXTURES = 1,
			E_RELEASESTAGE_DONE = 2,
		}

	}

}

// BrnNetworkPlayerImageRenderer.h:53
struct BrnGui::NetworkPlayerImageRenderer : public CgsGui::CustomRenderComponentInterface {
	// BrnNetworkPlayerImageRenderer.h:56
	extern const int32_t KI_MAX_NUM_TEXTURES_TO_DISPLAY = 3;

private:
	// BrnNetworkPlayerImageRenderer.cpp:31
	extern const uint32_t KU_TEXTURE_WIDTH = 160;

	// BrnNetworkPlayerImageRenderer.cpp:32
	extern const uint32_t KU_TEXTURE_HEIGHT = 120;

	// BrnNetworkPlayerImageRenderer.cpp:34
	extern const int32_t KI_INITIAL_COPY_TO_TEXTURE = 2;

	// BrnNetworkPlayerImageRenderer.cpp:35
	extern const int32_t KI_INITIAL_RENDER_FROM_TEXTURE = 1;

	// BrnNetworkPlayerImageRenderer.cpp:37
	extern const int32_t KI_CLEAR_TEXTURES_NOT_SET = 4294967295;

	// BrnNetworkPlayerImageRenderer.h:127
	extern const int32_t KI_NUM_TEXTURES_TO_BUFFER = 3;

	// BrnNetworkPlayerImageRenderer.h:128
	Texture2D * mpDefaultTexture;

	// BrnNetworkPlayerImageRenderer.cpp:39
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnNetworkPlayerImageRenderer.cpp:45
	extern uint32_t muNumResourcesToLoad;

	// BrnNetworkPlayerImageRenderer.h:133
	Texture2D *[3][3] maapTextureBuffer;

	// BrnNetworkPlayerImageRenderer.h:134
	renderengine::Texture::Locked[3][3] maaLockedTextures;

	// BrnNetworkPlayerImageRenderer.h:136
	Texture2D *[3] mapCompressedTextureBuffer;

	// BrnNetworkPlayerImageRenderer.h:137
	renderengine::Texture::Locked[3] maLockedCompressedTextures;

	// BrnNetworkPlayerImageRenderer.h:144
	bool[3][3] maabRenderTexture;

	// BrnNetworkPlayerImageRenderer.h:145
	bool[3][3] maabRenderCompressedTexture;

	// BrnNetworkPlayerImageRenderer.h:146
	bool[3][3] maabRenderYUY2Texture;

	// BrnNetworkPlayerImageRenderer.h:148
	BrnGui::NetworkPlayerImageRenderer::EPrepareStage mePrepareStage;

	// BrnNetworkPlayerImageRenderer.h:149
	BrnGui::NetworkPlayerImageRenderer::EReleaseStage meReleaseStage;

	// BrnNetworkPlayerImageRenderer.h:151
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnNetworkPlayerImageRenderer.h:152
	rw::IResourceAllocator * mpTextureAllocator;

	// BrnNetworkPlayerImageRenderer.h:154
	BrnGui::GuiCache * mpGuiCache;

	// BrnNetworkPlayerImageRenderer.h:155
	BrnFlapt::FlaptRenderer * mpFlaptRenderer;

	// BrnNetworkPlayerImageRenderer.h:157
	int32_t miCurrentRenderTexture;

	// BrnNetworkPlayerImageRenderer.h:158
	int32_t miCurrentCopyToTexture;

	// BrnNetworkPlayerImageRenderer.h:160
	int32_t miClearTexturesFrameCount;

	// BrnNetworkPlayerImageRenderer.h:162
	bool mbRenderTexture;

	// BrnNetworkPlayerImageRenderer.h:163
	bool mbUseDefaultTexture;

public:
	// BrnNetworkPlayerImageRenderer.cpp:65
	virtual void Construct();

	// BrnNetworkPlayerImageRenderer.cpp:121
	void SetFlaptRenderer(BrnFlapt::FlaptRenderer *);

	// BrnNetworkPlayerImageRenderer.cpp:141
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnNetworkPlayerImageRenderer.cpp:301
	virtual bool Release();

	// BrnNetworkPlayerImageRenderer.cpp:387
	virtual void Destruct();

	// BrnNetworkPlayerImageRenderer.cpp:432
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnNetworkPlayerImageRenderer.cpp:408
	virtual void Update();

	// BrnNetworkPlayerImageRenderer.cpp:523
	virtual CgsID GetID() const;

	// BrnNetworkPlayerImageRenderer.cpp:543
	virtual renderengine::Texture * GetRenderOutput(int32_t, int32_t *, ImRendererSet *);

	// BrnNetworkPlayerImageRenderer.cpp:598
	void SwapBuffers();

	// BrnNetworkPlayerImageRenderer.cpp:725
	virtual int32_t GetNumTextures() const;

private:
	// BrnNetworkPlayerImageRenderer.cpp:507
	virtual void RenderComponent(ImRendererSet *);

	// BrnNetworkPlayerImageRenderer.cpp:624
	void CopyTexture(const GuiEventNetworkPlayerImage *, int32_t);

	// BrnNetworkPlayerImageRenderer.cpp:681
	void ClearTextures();

	// BrnNetworkPlayerImageRenderer.cpp:738
	void SetClearTextures();

	// BrnNetworkPlayerImageRenderer.cpp:756
	void PrepareDefaultTexture();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct NetworkPlayerImageRenderer {
	public:
		NetworkPlayerImageRenderer();

		// Unknown accessibility
		// BrnNetworkPlayerImageRenderer.h:56
		extern const int32_t KI_MAX_NUM_TEXTURES_TO_DISPLAY = 3;

	private:
		// BrnNetworkPlayerImageRenderer.h:118
		extern const uint32_t KU_TEXTURE_WIDTH;

		// BrnNetworkPlayerImageRenderer.h:119
		extern const uint32_t KU_TEXTURE_HEIGHT;

		// BrnNetworkPlayerImageRenderer.h:120
		extern const int32_t KI_INITIAL_COPY_TO_TEXTURE;

		// BrnNetworkPlayerImageRenderer.h:121
		extern const int32_t KI_INITIAL_RENDER_FROM_TEXTURE;

		// BrnNetworkPlayerImageRenderer.h:122
		extern const int32_t KI_CLEAR_TEXTURES_NOT_SET;

		// BrnNetworkPlayerImageRenderer.h:127
		extern const int32_t KI_NUM_TEXTURES_TO_BUFFER = 3;

	}

}

// BrnNetworkPlayerImageRenderer.h:53
void BrnGui::NetworkPlayerImageRenderer::NetworkPlayerImageRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

