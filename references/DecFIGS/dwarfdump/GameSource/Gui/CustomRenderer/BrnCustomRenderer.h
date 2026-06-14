// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CustomRendererManager {
		// BrnCustomRenderer.h:69
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnCustomRenderer.h:75
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

}

// BrnCustomRenderer.h:64
struct BrnGui::CustomRendererManager : public CgsGui::CustomRendererManager {
private:
	// BrnCustomRenderer.h:210
	CgsGui::CustomRenderComponentInterface *[10] mpCustomRenderComponents;

	// BrnCustomRenderer.h:217
	SatNavRenderer mSatNavRendererInstance;

	// BrnCustomRenderer.h:218
	MainMapRenderer mMainMapRendererInstance;

	// BrnCustomRenderer.h:219
	CrashNavIconRenderer mCrashNavIconRendererInstance;

	// BrnCustomRenderer.h:220
	BoostBarRenderer mBoostBarRendererInstance;

	// BrnCustomRenderer.h:221
	NetworkPlayerImageRenderer mNetworkPlayerImageRendererInstance;

	// BrnCustomRenderer.h:222
	AboveCarRenderer mAboveCarRendererInstance;

	// BrnCustomRenderer.h:223
	ProgressBarRenderer mProgressBarRendererInstance;

	// BrnCustomRenderer.h:224
	BlackBarRenderer mBlackBarRendererInstance;

	// BrnCustomRenderer.h:225
	CreditsTextRenderer mCreditsTextRenderer;

	// BrnCustomRenderer.h:228
	InGameMessageRenderer mInGameMessageRendererInstance;

	// BrnCustomRenderer.h:231
	BrnGui::CustomRendererManager::EPrepareStage mePrepareStage;

	// BrnCustomRenderer.h:232
	BrnGui::CustomRendererManager::EReleaseStage meReleaseStage;

	// BrnCustomRenderer.h:235
	bool mbRenderingEnable;

	// BrnCustomRenderer.h:239
	BrnGui::GuiCustRendererDebugComponent mDebugComponent;

	// BrnCustomRenderer.h:242
	int miHACK_NumberOfRendersWithoutUpdate;

public:
	// BrnCustomRenderer.cpp:47
	virtual void Construct();

	// BrnCustomRenderer.cpp:101
	void SetFlaptRenderer(BrnFlapt::FlaptRenderer *);

	// BrnCustomRenderer.cpp:121
	virtual bool Prepare(rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnCustomRenderer.cpp:199
	virtual bool Release();

	// BrnCustomRenderer.cpp:244
	virtual void Destruct();

	// BrnCustomRenderer.cpp:274
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnCustomRenderer.cpp:575
	virtual void Update();

	// BrnCustomRenderer.cpp:531
	virtual void Render(ImRendererSet *, CgsGui::eCustomRenderLayer);

	// BrnCustomRenderer.cpp:748
	void EndOfFrame();

	// BrnCustomRenderer.cpp:623
	virtual renderengine::Texture * GetComponentTexture(CgsID, int32_t, int32_t *, ImRendererSet *);

	// BrnCustomRenderer.cpp:681
	virtual void SetComponentRenderable(int32_t, bool);

	// BrnCustomRenderer.cpp:704
	virtual bool GetComponentRenderable(int32_t);

	// BrnCustomRenderer.cpp:660
	virtual CgsID GetComponentID(int32_t) const;

	// BrnCustomRenderer.cpp:803
	virtual int32_t GetNumComponents() const;

	// BrnCustomRenderer.cpp:815
	virtual int32_t GetNumTexturesForComponent(int32_t) const;

	// BrnCustomRenderer.cpp:728
	virtual void SetAllRenderingState(bool);

	// BrnCustomRenderer.cpp:763
	virtual void SetTextRenderer(TextRenderer *);

	// BrnCustomRenderer.cpp:785
	virtual void SetLanguageManager(LanguageManager *);

	// BrnCustomRenderer.h:259
	BrnGui::BoostBarRenderer * GetBoostBarRendererInstance();

	// BrnCustomRenderer.h:275
	BrnGui::SatNavRenderer * GetSatNavRendererInstance();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CustomRendererManager {
		// BrnCustomRenderer.h:88
		enum ECustomRenderTypes {
			E_NETWORK_PLAYER_IMAGE = 0,
			E_SATNAV = 1,
			E_MAINMAP = 2,
			E_CRASHNAVICONS = 3,
			E_BOOSTBAR = 4,
			E_ABOVECAR = 5,
			E_PROGRESSBAR = 6,
			E_BLACKBAR = 7,
			E_INGAME_MESSAGE = 8,
			E_CREDITS_TEXT = 9,
			E_CUSTOM_RENDER_TYPES_COUNT = 10,
		}

	public:
		// BrnCustomRenderer.h:259
		BrnGui::BoostBarRenderer * GetBoostBarRendererInstance();

		// BrnCustomRenderer.h:275
		BrnGui::SatNavRenderer * GetSatNavRendererInstance();

	}

}

// BrnCustomRenderer.h:64
void BrnGui::CustomRendererManager::CustomRendererManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

