// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SatNavRenderer {
		// BrnSatNavRenderer.h:104
		enum ESatNavEventTypeMiniIconIndex {
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// BrnSatNavRenderer.h:211
extern const RGBA8 K_WHITE_COLOUR;

// BrnSatNavRenderer.h:212
extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

// BrnSatNavRenderer.h:213
extern float32_t[] KAF_TEXTURE_WIDTH;

// BrnSatNavRenderer.h:214
extern float32_t[] KAF_TEXTURE_HEIGHT;

// BrnSatNavRenderer.h:215
extern float32_t[] KAF_ICON_WIDTH;

// BrnSatNavRenderer.h:216
extern float32_t[] KAF_ICON_HEIGHT;

// BrnSatNavRenderer.h:217
extern float32_t[] KAF_ICON_HALFWIDTH_SCREENSPACE;

// BrnSatNavRenderer.h:218
extern float32_t[] KAF_ICON_HALFHEIGHT_SCREENSPACE;

// BrnSatNavRenderer.h:219
extern float32_t[] KAF_ICON_HALFWIDTH_WORLDSIZE;

// BrnSatNavRenderer.h:220
extern float32_t[] KAF_ICON_HALFHEIGHT_WORLDSIZE;

// BrnSatNavRenderer.h:221
extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

// BrnSatNavRenderer.h:224
extern const uint32_t KU_MAX_SATNAV_ICONS = 150;

// BrnSatNavRenderer.h:225
extern const float32_t KF_CLAMPED_ICON_OFFSET;

// BrnSatNavRenderer.h:229
extern float32_t[] KAF_MINI_ICON_WIDTH;

// BrnSatNavRenderer.h:230
extern float32_t[] KAF_MINI_ICON_HEIGHT;

// BrnSatNavRenderer.h:231
extern float32_t[] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

// BrnSatNavRenderer.h:232
extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

// BrnSatNavRenderer.h:233
extern float32_t[] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

// BrnSatNavRenderer.h:234
extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

// BrnSatNavRenderer.h:235
extern BrnGui::SatNavRenderer::ESatNavEventTypeMiniIconIndex[] K_ICON_MINI_ICON_MAP;

// BrnSatNavRenderer.h:236
extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

// BrnSatNavRenderer.h:292
extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavRenderer {
		// BrnSatNavRenderer.h:104
		enum ESatNavEventTypeMiniIconIndex {
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavRenderer {
		// BrnSatNavRenderer.h:53
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_LOAD = 1,
			E_PREPARESTAGE_INIT = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// BrnSatNavRenderer.h:61
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// BrnSatNavRenderer.h:68
		enum ESatNavIconType {
			E_SATNAVICON_EVENT_NOTATTEMPTED = 0,
			E_SATNAVICON_EVENT_COMPLETED = 1,
			E_SATNAVICON_NUM = 2,
		}

		// BrnSatNavRenderer.h:77
		struct IconRendererSatNavIconInfo {
			// BrnSatNavRenderer.h:79
			Vector3 mv3Position;

			// BrnSatNavRenderer.h:80
			int32_t miEventId;

			// BrnSatNavRenderer.h:81
			uint32_t muEventTypeIndex;

			// BrnSatNavRenderer.h:82
			BrnGui::SatNavRenderer::ESatNavIconType meSatNavIconType;

		}

		// BrnSatNavRenderer.h:104
		enum ESatNavEventTypeMiniIconIndex {
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// BrnSatNavRenderer.h:50
struct BrnGui::SatNavRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnSatNavRenderer.cpp:29
	extern const RGBA8 K_WHITE_COLOUR;

	// BrnSatNavRenderer.cpp:30
	extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

	// BrnSatNavRenderer.cpp:31
	extern const float32_t[2] KAF_TEXTURE_WIDTH;

	// BrnSatNavRenderer.cpp:37
	extern const float32_t[2] KAF_TEXTURE_HEIGHT;

	// BrnSatNavRenderer.cpp:43
	extern const float32_t[2] KAF_ICON_WIDTH;

	// BrnSatNavRenderer.cpp:49
	extern const float32_t[2] KAF_ICON_HEIGHT;

	// BrnSatNavRenderer.cpp:55
	extern float32_t[2] KAF_ICON_HALFWIDTH_SCREENSPACE;

	// BrnSatNavRenderer.cpp:61
	extern float32_t[2] KAF_ICON_HALFHEIGHT_SCREENSPACE;

	// BrnSatNavRenderer.cpp:69
	extern float32_t[2] KAF_ICON_HALFWIDTH_WORLDSIZE;

	// BrnSatNavRenderer.cpp:75
	extern float32_t[2] KAF_ICON_HALFHEIGHT_WORLDSIZE;

	// BrnSatNavRenderer.h:221
	extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

	// BrnSatNavRenderer.h:222
	extern const uint32_t KU_ICON_EVENT_TYPE_ONLINE_OFFSET = 6;

	// BrnSatNavRenderer.h:223
	extern const uint32_t KU_ICON_EVENT_TYPE_ADDITIONAL_OFFSET = 9;

	// BrnSatNavRenderer.h:224
	extern const uint32_t KU_MAX_SATNAV_ICONS = 150;

	// BrnSatNavRenderer.cpp:138
	extern const float32_t KF_CLAMPED_ICON_OFFSET;

	// BrnSatNavRenderer.h:226
	extern const uint8_t KI_ALPHA = 90;

	// BrnSatNavRenderer.h:227
	extern const uint8_t KU_BURNING_ROUTE_ICON_ALPHA = 100;

	// BrnSatNavRenderer.cpp:87
	extern const float32_t[2] KAF_MINI_ICON_WIDTH;

	// BrnSatNavRenderer.cpp:93
	extern const float32_t[2] KAF_MINI_ICON_HEIGHT;

	// BrnSatNavRenderer.cpp:99
	extern float32_t[2] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

	// BrnSatNavRenderer.cpp:105
	extern float32_t[2] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

	// BrnSatNavRenderer.cpp:113
	extern float32_t[2] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

	// BrnSatNavRenderer.cpp:119
	extern float32_t[2] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

	// BrnSatNavRenderer.cpp:125
	extern const BrnGui::SatNavRenderer::ESatNavEventTypeMiniIconIndex[7] K_ICON_MINI_ICON_MAP;

	// BrnSatNavRenderer.cpp:136
	extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

	// BrnSatNavRenderer.h:238
	RGBA mMapQuadColour;

	// BrnSatNavRenderer.h:240
	Im2dTransform mTransform;

	// BrnSatNavRenderer.h:242
	BrnGui::SatNavRenderer::EPrepareStage mePrepareStage;

	// BrnSatNavRenderer.h:243
	BrnGui::SatNavRenderer::EReleaseStage meReleaseStage;

	// BrnSatNavRenderer.h:245
	GuiEventRenderSatNav mRenderSatNavEvent;

	// BrnSatNavRenderer.h:246
	BrnGui::GuiCache * mpGuiCache;

	// BrnSatNavRenderer.h:248
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnSatNavRenderer.cpp:147
	extern sResourceTuple[2] maResourcesToLoad;

	// BrnSatNavRenderer.cpp:154
	extern uint32_t muNumResourcesToLoad;

	// BrnSatNavRenderer.h:254
	Resource mMapTextureStateResource;

	// BrnSatNavRenderer.h:255
	TextureState * mpMapTextureState;

	// BrnSatNavRenderer.h:256
	Resource mMapBlendStateResource;

	// BrnSatNavRenderer.h:257
	BlendState * mpMapBlendState;

	// BrnSatNavRenderer.h:259
	Resource mMaskTextureStateResource;

	// BrnSatNavRenderer.h:260
	TextureState * mpMaskTextureState;

	// BrnSatNavRenderer.h:261
	Resource mMaskBlendStateResource;

	// BrnSatNavRenderer.h:262
	BlendState * mpMaskBlendState;

	// BrnSatNavRenderer.h:264
	Resource mRouteSegmentTextureStateResource;

	// BrnSatNavRenderer.h:265
	TextureState * mpRouteSegmentTextureState;

	// BrnSatNavRenderer.h:267
	Resource mRouteSegmentBlendStateResource;

	// BrnSatNavRenderer.h:268
	BlendState * mpRouteSegmentBlendState;

	// BrnSatNavRenderer.h:271
	Resource[2] maIconResources;

	// BrnSatNavRenderer.h:272
	TextureState *[2] mapIconTextureStates;

	// BrnSatNavRenderer.h:275
	BrnGui::GuiEventEnableSatNavIcons::EIconDisplayType meIconDisplayType;

	// BrnSatNavRenderer.h:278
	BrnProgression::RaceEventData::EModeType meGameModeFilter;

	// BrnSatNavRenderer.h:281
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvTopLeft;

	// BrnSatNavRenderer.h:282
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvBottomLeft;

	// BrnSatNavRenderer.h:283
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvTopRight;

	// BrnSatNavRenderer.h:284
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvBottomRight;

	// BrnSatNavRenderer.h:286
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvTopLeft;

	// BrnSatNavRenderer.h:287
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvBottomLeft;

	// BrnSatNavRenderer.h:288
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvTopRight;

	// BrnSatNavRenderer.h:289
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvBottomRight;

	// BrnSatNavRenderer.cpp:81
	extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

	// BrnSatNavRenderer.h:294
	bool mbRenderEventStarts;

	// BrnSatNavRenderer.h:297
	bool mbRefreshSatNavIcons;

	// BrnSatNavRenderer.h:298
	BrnGui::SatNavRenderer::IconRendererSatNavIconInfo[150] maCachedSatNavIcons;

	// BrnSatNavRenderer.h:299
	uint32_t muNumberOfSatNavIcons;

	// BrnSatNavRenderer.h:301
	float32_t mfZoomLevel;

	// BrnSatNavRenderer.h:303
	bool mbDrawRoute;

	// BrnSatNavRenderer.h:306
	int32_t miSatNavRendererPM;

public:
	// BrnSatNavRenderer.cpp:170
	virtual void Construct();

	// BrnSatNavRenderer.cpp:247
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnSatNavRenderer.cpp:307
	virtual bool Release();

	// BrnSatNavRenderer.cpp:381
	virtual void Destruct();

	// BrnSatNavRenderer.cpp:414
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnSatNavRenderer.cpp:399
	virtual void Update();

	// BrnSatNavRenderer.cpp:819
	virtual CgsID GetID() const;

	// BrnSatNavRenderer.h:325
	void UpdateRendererTransform();

	// BrnSatNavRenderer.h:348
	void SetTransparency(uint8_t);

private:
	// BrnSatNavRenderer.cpp:485
	// Declaration
	virtual void RenderComponent(ImRendererSet *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSatNavRenderer.cpp:487
		using namespace rw::math;

		// BrnSatNavRenderer.cpp:586
		using namespace renderengine;

		// BrnSatNavRenderer.cpp:604
		using namespace renderengine;

	}

	// BrnSatNavRenderer.cpp:649
	void InitResources();

	// BrnSatNavRenderer.cpp:691
	// Declaration
	void InitEventTypeUvs() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSatNavRenderer.cpp:772
		using namespace CgsDev::Message;

	}

	// BrnSatNavRenderer.cpp:1011
	void RenderIconsForSatNav(CgsGraphics::Im2dRenderBuffer *);

	// BrnSatNavRenderer.cpp:834
	uint32_t GetNumIcons() const;

	// BrnSatNavRenderer.cpp:878
	void GetIconInformation(uint32_t, BrnGui::SatNavRenderer::IconRendererSatNavIconInfo *) const;

	// BrnSatNavRenderer.cpp:983
	void CalculateUVsForIndex(int32_t, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &, float32_t, float32_t, float32_t, float32_t);

	// BrnSatNavRenderer.cpp:1346
	void RenderSatNavIcon(float32_t, float32_t, float32_t, float32_t, BrnGui::SatNavRenderer::ESatNavIconType, uint32_t, CgsGraphics::Im2dRenderBuffer *);

	// BrnSatNavRenderer.cpp:1253
	void InitSatNavIcons();

	// BrnSatNavRenderer.cpp:1286
	void RefreshSatNavIconInfo(int32_t);

}

// BrnSatNavRenderer.h:222
extern const uint32_t KU_ICON_EVENT_TYPE_ONLINE_OFFSET = 6;

// BrnSatNavRenderer.h:223
extern const uint32_t KU_ICON_EVENT_TYPE_ADDITIONAL_OFFSET = 9;

// BrnSatNavRenderer.h:226
extern const uint8_t KI_ALPHA = 90;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavRenderer {
		// BrnSatNavRenderer.h:104
		enum ESatNavEventTypeMiniIconIndex {
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	public:
		// BrnSatNavRenderer.h:325
		void UpdateRendererTransform();

		// BrnSatNavRenderer.h:348
		void SetTransparency(uint8_t);

	private:
		// BrnSatNavRenderer.h:211
		extern const RGBA8 K_WHITE_COLOUR;

		// BrnSatNavRenderer.h:212
		extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

		// BrnSatNavRenderer.h:213
		extern float32_t[] KAF_TEXTURE_WIDTH;

		// BrnSatNavRenderer.h:214
		extern float32_t[] KAF_TEXTURE_HEIGHT;

		// BrnSatNavRenderer.h:215
		extern float32_t[] KAF_ICON_WIDTH;

		// BrnSatNavRenderer.h:216
		extern float32_t[] KAF_ICON_HEIGHT;

		// BrnSatNavRenderer.h:217
		extern float32_t[] KAF_ICON_HALFWIDTH_SCREENSPACE;

		// BrnSatNavRenderer.h:218
		extern float32_t[] KAF_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnSatNavRenderer.h:219
		extern float32_t[] KAF_ICON_HALFWIDTH_WORLDSIZE;

		// BrnSatNavRenderer.h:220
		extern float32_t[] KAF_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnSatNavRenderer.h:221
		extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

		// BrnSatNavRenderer.h:224
		extern const uint32_t KU_MAX_SATNAV_ICONS = 150;

		// BrnSatNavRenderer.h:225
		extern const float32_t KF_CLAMPED_ICON_OFFSET;

		// BrnSatNavRenderer.h:229
		extern float32_t[] KAF_MINI_ICON_WIDTH;

		// BrnSatNavRenderer.h:230
		extern float32_t[] KAF_MINI_ICON_HEIGHT;

		// BrnSatNavRenderer.h:231
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

		// BrnSatNavRenderer.h:232
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnSatNavRenderer.h:233
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

		// BrnSatNavRenderer.h:234
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnSatNavRenderer.h:235
		extern BrnGui::SatNavRenderer::ESatNavEventTypeMiniIconIndex[] K_ICON_MINI_ICON_MAP;

		// BrnSatNavRenderer.h:236
		extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

		// BrnSatNavRenderer.h:292
		extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

	}

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SatNavRenderer {
		// BrnSatNavRenderer.h:68
		enum ESatNavIconType {
			E_SATNAVICON_EVENT_NOTATTEMPTED = 0,
			E_SATNAVICON_EVENT_COMPLETED = 1,
			E_SATNAVICON_NUM = 2,
		}

		// BrnSatNavRenderer.h:77
		struct IconRendererSatNavIconInfo {
			// BrnSatNavRenderer.h:79
			Vector3 mv3Position;

			// BrnSatNavRenderer.h:80
			int32_t miEventId;

			// BrnSatNavRenderer.h:81
			uint32_t muEventTypeIndex;

			// BrnSatNavRenderer.h:82
			BrnGui::SatNavRenderer::ESatNavIconType meSatNavIconType;

		}

		// BrnSatNavRenderer.h:104
		enum ESatNavEventTypeMiniIconIndex {
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_SATNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	public:
		SatNavRenderer();

	private:
		// BrnSatNavRenderer.h:211
		extern const RGBA8 K_WHITE_COLOUR;

		// BrnSatNavRenderer.h:212
		extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

		// BrnSatNavRenderer.h:213
		extern float32_t[] KAF_TEXTURE_WIDTH;

		// BrnSatNavRenderer.h:214
		extern float32_t[] KAF_TEXTURE_HEIGHT;

		// BrnSatNavRenderer.h:215
		extern float32_t[] KAF_ICON_WIDTH;

		// BrnSatNavRenderer.h:216
		extern float32_t[] KAF_ICON_HEIGHT;

		// BrnSatNavRenderer.h:217
		extern float32_t[] KAF_ICON_HALFWIDTH_SCREENSPACE;

		// BrnSatNavRenderer.h:218
		extern float32_t[] KAF_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnSatNavRenderer.h:219
		extern float32_t[] KAF_ICON_HALFWIDTH_WORLDSIZE;

		// BrnSatNavRenderer.h:220
		extern float32_t[] KAF_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnSatNavRenderer.h:221
		extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

		// BrnSatNavRenderer.h:224
		extern const uint32_t KU_MAX_SATNAV_ICONS = 150;

		// BrnSatNavRenderer.h:225
		extern const float32_t KF_CLAMPED_ICON_OFFSET;

		// BrnSatNavRenderer.h:229
		extern float32_t[] KAF_MINI_ICON_WIDTH;

		// BrnSatNavRenderer.h:230
		extern float32_t[] KAF_MINI_ICON_HEIGHT;

		// BrnSatNavRenderer.h:231
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

		// BrnSatNavRenderer.h:232
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnSatNavRenderer.h:233
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

		// BrnSatNavRenderer.h:234
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnSatNavRenderer.h:235
		extern BrnGui::SatNavRenderer::ESatNavEventTypeMiniIconIndex[] K_ICON_MINI_ICON_MAP;

		// BrnSatNavRenderer.h:236
		extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

		// BrnSatNavRenderer.h:292
		extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

	}

}

// BrnSatNavRenderer.h:50
void BrnGui::SatNavRenderer::SatNavRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

