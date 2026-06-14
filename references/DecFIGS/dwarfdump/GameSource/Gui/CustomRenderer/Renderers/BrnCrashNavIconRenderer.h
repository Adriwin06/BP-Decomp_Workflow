// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CrashNavIconRenderer {
		// BrnCrashNavIconRenderer.h:144
		enum ECrashNavEventTypeMiniIconIndex {
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// BrnCrashNavIconRenderer.h:83
extern const int32_t KI_NUM_ROAD_SIGNS = 65;

// BrnCrashNavIconRenderer.h:347
extern const RGBA8 K_WHITE_COLOUR;

// BrnCrashNavIconRenderer.h:348
extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

// BrnCrashNavIconRenderer.h:349
extern float32_t[] KAF_TEXTURE_WIDTH;

// BrnCrashNavIconRenderer.h:350
extern float32_t[] KAF_TEXTURE_HEIGHT;

// BrnCrashNavIconRenderer.h:351
extern float32_t[] KAF_ICON_WIDTH;

// BrnCrashNavIconRenderer.h:352
extern float32_t[] KAF_ICON_HEIGHT;

// BrnCrashNavIconRenderer.h:353
extern float32_t[] KAF_ICON_HALFWIDTH_SCREENSPACE;

// BrnCrashNavIconRenderer.h:354
extern float32_t[] KAF_ICON_HALFHEIGHT_SCREENSPACE;

// BrnCrashNavIconRenderer.h:355
extern float32_t[] KAF_ICON_HALFWIDTH_WORLDSIZE;

// BrnCrashNavIconRenderer.h:356
extern float32_t[] KAF_ICON_HALFHEIGHT_WORLDSIZE;

// BrnCrashNavIconRenderer.h:357
extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

// BrnCrashNavIconRenderer.h:362
extern float32_t[] KAF_MINI_ICON_WIDTH;

// BrnCrashNavIconRenderer.h:363
extern float32_t[] KAF_MINI_ICON_HEIGHT;

// BrnCrashNavIconRenderer.h:364
extern float32_t[] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

// BrnCrashNavIconRenderer.h:365
extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

// BrnCrashNavIconRenderer.h:366
extern float32_t[] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

// BrnCrashNavIconRenderer.h:367
extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

// BrnCrashNavIconRenderer.h:368
extern BrnGui::CrashNavIconRenderer::ECrashNavEventTypeMiniIconIndex[] K_ICON_MINI_ICON_MAP;

// BrnCrashNavIconRenderer.h:369
extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

// BrnCrashNavIconRenderer.h:371
extern const float32_t KF_SELECTED_GROW_TIME;

// BrnCrashNavIconRenderer.h:372
extern const float32_t KF_SELECTED_SHRINK_TIME;

// BrnCrashNavIconRenderer.h:374
extern const int32_t KI_MAX_RIVALS = 8;

// BrnCrashNavIconRenderer.h:378
extern char[] KAC_ROAD_SIGN_FONT_NAME;

// BrnCrashNavIconRenderer.h:464
extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CrashNavIconRenderer {
		// BrnCrashNavIconRenderer.h:144
		enum ECrashNavEventTypeMiniIconIndex {
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadSign {
		// BrnCrashNavIconRenderer.h:51
		enum ESignSize {
			E_SIGNSIZE_SMALL = 0,
			E_SIGNSIZE_MID_1 = 1,
			E_SIGNSIZE_MID_2 = 2,
			E_SIGNSIZE_LARGE = 3,
			E_SIGNSIZE_COUNT = 4,
		}

	}

	// Declaration
	struct CrashNavIconRenderer {
		// BrnCrashNavIconRenderer.h:100
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_LOAD = 1,
			E_PREPARESTAGE_INIT = 2,
			E_PREPARESTAGE_DONE = 3,
		}

		// BrnCrashNavIconRenderer.h:108
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// BrnCrashNavIconRenderer.h:115
		enum ECrashNavIconType {
			E_CRASHNAVICON_EVENT_NOTATTEMPTED = 0,
			E_CRASHNAVICON_EVENT_COMPLETED = 1,
			E_CRASHNAVICON_NUM = 2,
		}

		// BrnCrashNavIconRenderer.h:144
		enum ECrashNavEventTypeMiniIconIndex {
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	}

}

// BrnCrashNavIconRenderer.h:48
struct BrnGui::RoadSign {
	// BrnCrashNavIconRenderer.h:60
	Vector4[2] mavTextBoxBounds;

	// BrnCrashNavIconRenderer.h:61
	Basic2dColouredVertex::Vector2[2] mavIndividualTextOffsets;

	// BrnCrashNavIconRenderer.h:62
	Basic2dColouredVertex::Vector2 mvCoords;

	// BrnCrashNavIconRenderer.h:63
	Basic2dColouredVertex::Vector2 mvPoleOffset;

	// BrnCrashNavIconRenderer.h:64
	Basic2dColouredVertex::Vector2 mvSignOffset;

	// BrnCrashNavIconRenderer.h:65
	Basic2dColouredVertex::Vector2 mvTextOffset;

	// BrnCrashNavIconRenderer.h:66
	BrnGui::RoadSign::ESignSize meSignSize;

	// BrnCrashNavIconRenderer.h:67
	float32_t[2] mafFontSize;

	// BrnCrashNavIconRenderer.h:68
	char *[2] mapcText;

	// BrnCrashNavIconRenderer.h:69
	char * mpcRoadId;

}

// BrnCrashNavIconRenderer.h:81
struct BrnGui::RoadSignList {
	// BrnCrashNavIconRenderer.h:83
	extern const int32_t KI_NUM_ROAD_SIGNS = 65;

	// BrnCrashNavIconRenderer.h:84
	RoadSign[65] maRoadSigns;

public:
	// BrnCrashNavIconRenderer.h:85
	void Construct();

}

// BrnCrashNavIconRenderer.h:97
struct BrnGui::CrashNavIconRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnCrashNavIconRenderer.cpp:27
	extern const RGBA8 K_WHITE_COLOUR;

	// BrnCrashNavIconRenderer.cpp:28
	extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

	// BrnCrashNavIconRenderer.cpp:29
	extern const float32_t[2] KAF_TEXTURE_WIDTH;

	// BrnCrashNavIconRenderer.cpp:35
	extern const float32_t[2] KAF_TEXTURE_HEIGHT;

	// BrnCrashNavIconRenderer.cpp:41
	extern const float32_t[2] KAF_ICON_WIDTH;

	// BrnCrashNavIconRenderer.cpp:47
	extern const float32_t[2] KAF_ICON_HEIGHT;

	// BrnCrashNavIconRenderer.cpp:53
	extern float32_t[2] KAF_ICON_HALFWIDTH_SCREENSPACE;

	// BrnCrashNavIconRenderer.cpp:59
	extern float32_t[2] KAF_ICON_HALFHEIGHT_SCREENSPACE;

	// BrnCrashNavIconRenderer.cpp:67
	extern float32_t[2] KAF_ICON_HALFWIDTH_WORLDSIZE;

	// BrnCrashNavIconRenderer.cpp:73
	extern float32_t[2] KAF_ICON_HALFHEIGHT_WORLDSIZE;

	// BrnCrashNavIconRenderer.h:357
	extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

	// BrnCrashNavIconRenderer.h:358
	extern const uint32_t KU_ICON_EVENT_TYPE_ONLINE_OFFSET = 6;

	// BrnCrashNavIconRenderer.h:359
	extern const uint32_t KU_ICON_EVENT_TYPE_ADDITIONAL_OFFSET = 9;

	// BrnCrashNavIconRenderer.h:360
	extern const uint8_t KU_BURNING_ROUTE_ICON_ALPHA = 100;

	// BrnCrashNavIconRenderer.cpp:85
	extern const float32_t[2] KAF_MINI_ICON_WIDTH;

	// BrnCrashNavIconRenderer.cpp:91
	extern const float32_t[2] KAF_MINI_ICON_HEIGHT;

	// BrnCrashNavIconRenderer.cpp:97
	extern float32_t[2] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

	// BrnCrashNavIconRenderer.cpp:103
	extern float32_t[2] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

	// BrnCrashNavIconRenderer.cpp:111
	extern float32_t[2] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

	// BrnCrashNavIconRenderer.cpp:117
	extern float32_t[2] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

	// BrnCrashNavIconRenderer.cpp:123
	extern const BrnGui::CrashNavIconRenderer::ECrashNavEventTypeMiniIconIndex[7] K_ICON_MINI_ICON_MAP;

	// BrnCrashNavIconRenderer.cpp:134
	extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

	// BrnCrashNavIconRenderer.cpp:136
	extern const float32_t KF_SELECTED_GROW_TIME;

	// BrnCrashNavIconRenderer.cpp:137
	extern const float32_t KF_SELECTED_SHRINK_TIME;

	// BrnCrashNavIconRenderer.h:374
	extern const int32_t KI_MAX_RIVALS = 8;

	// BrnCrashNavIconRenderer.h:375
	extern const int32_t KI_PLAYER_ICON_INDEX = 5;

	// BrnCrashNavIconRenderer.h:376
	extern const int32_t KI_PLAYER_ICON_OVERLAY_INDEX = 7;

	// BrnCrashNavIconRenderer.cpp:139
	extern const char[12] KAC_ROAD_SIGN_FONT_NAME;

	// BrnCrashNavIconRenderer.h:380
	Im2dTransform mTextTransform;

	// BrnCrashNavIconRenderer.h:382
	LanguageManager * mpLanguageManager;

	// BrnCrashNavIconRenderer.h:384
	BrnGui::CrashNavIconRenderer::EPrepareStage mePrepareStage;

	// BrnCrashNavIconRenderer.h:385
	BrnGui::CrashNavIconRenderer::EReleaseStage meReleaseStage;

	// BrnCrashNavIconRenderer.h:387
	GuiEventRenderMainMap mRenderMainMapEvent;

	// BrnCrashNavIconRenderer.h:388
	BrnGui::GuiCache * mpGuiCache;

	// BrnCrashNavIconRenderer.h:389
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnCrashNavIconRenderer.cpp:151
	extern sResourceTuple[6] maResourcesToLoad;

	// BrnCrashNavIconRenderer.cpp:164
	extern uint32_t muNumResourcesToLoad;

	// BrnCrashNavIconRenderer.h:394
	GuiEventQueueSmall * mpOutputEventQueue;

	// BrnCrashNavIconRenderer.h:397
	Resource mBackgroundMaskTextureStateResource;

	// BrnCrashNavIconRenderer.h:398
	TextureState * mpBackgroundMaskTextureState;

	// BrnCrashNavIconRenderer.h:400
	Resource mPreRaceMaskTextureStateResource;

	// BrnCrashNavIconRenderer.h:401
	TextureState * mpPreRaceMaskTextureState;

	// BrnCrashNavIconRenderer.h:404
	Resource[2] maIconResources;

	// BrnCrashNavIconRenderer.h:405
	TextureState *[2] mapIconTextureStates;

	// BrnCrashNavIconRenderer.h:407
	Resource mIconsTextureStateResource;

	// BrnCrashNavIconRenderer.h:408
	TextureState * mpIconsTextureState;

	// BrnCrashNavIconRenderer.h:410
	Resource mRoadSignsTextureStateResource;

	// BrnCrashNavIconRenderer.h:411
	TextureState * mpRoadSignsTextureState;

	// BrnCrashNavIconRenderer.h:414
	BrnGui::GuiEventDrawEventIcons::EIconDisplayType meIconDisplayType;

	// BrnCrashNavIconRenderer.h:417
	Array<uint32_t,5u> mOnlineStartpointsToIgnore;

	// BrnCrashNavIconRenderer.h:420
	uint32_t muInspectedEventID;

	// BrnCrashNavIconRenderer.h:423
	GuiEventSetHoveredEventIcon mHoveredEventIcon;

	// BrnCrashNavIconRenderer.h:424
	GuiEventSetHoveredEventIcon mHoveredEventIconLastFrame;

	// BrnCrashNavIconRenderer.h:425
	int32_t miSelectedIndex;

	// BrnCrashNavIconRenderer.h:426
	float32_t mfHoveredIconScaleFactor;

	// BrnCrashNavIconRenderer.h:427
	float32_t mfHoveredIconScaleEndTime;

	// BrnCrashNavIconRenderer.h:428
	bool mfHoveredIconGrowing;

	// BrnCrashNavIconRenderer.h:429
	float32_t mfPlayerIconPulseScale;

	// BrnCrashNavIconRenderer.h:430
	float32_t mfPlayerIconPulseEndTime;

	// BrnCrashNavIconRenderer.h:432
	GuiEventMapCursorStatus mGuiEventMapCursorStatus;

	// BrnCrashNavIconRenderer.h:433
	float32_t mfCursorScaleFactor;

	// BrnCrashNavIconRenderer.h:434
	GuiEventMapIconStatus mGuiEventMapIconStatus;

	// BrnCrashNavIconRenderer.h:436
	CrashNavMapIcon[8] mRivalIcons;

	// BrnCrashNavIconRenderer.h:437
	int32_t miRivalIconsCount;

	// BrnCrashNavIconRenderer.h:439
	CrashNavMapIcon[2] mStartFinishIcons;

	// BrnCrashNavIconRenderer.h:440
	int32_t miStartFinishIconCount;

	// BrnCrashNavIconRenderer.h:443
	GuiEventRoadSignIconStatus mRoadSignIconStatus;

	// BrnCrashNavIconRenderer.h:444
	RoadSignList mRoadSignList;

	// BrnCrashNavIconRenderer.h:446
	TextObject mTextObject;

	// BrnCrashNavIconRenderer.h:447
	TextRenderer * mpTextRenderer;

	// BrnCrashNavIconRenderer.h:450
	BrnProgression::RaceEventData::EModeType meGameModeFilter;

	// BrnCrashNavIconRenderer.h:453
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvTopLeft;

	// BrnCrashNavIconRenderer.h:454
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvBottomLeft;

	// BrnCrashNavIconRenderer.h:455
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvTopRight;

	// BrnCrashNavIconRenderer.h:456
	Basic2dColouredVertex::Vector2[2][11] mav2IconUvBottomRight;

	// BrnCrashNavIconRenderer.h:458
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvTopLeft;

	// BrnCrashNavIconRenderer.h:459
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvBottomLeft;

	// BrnCrashNavIconRenderer.h:460
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvTopRight;

	// BrnCrashNavIconRenderer.h:461
	Basic2dColouredVertex::Vector2[2][6] mav2MiniIconUvBottomRight;

	// BrnCrashNavIconRenderer.cpp:79
	extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

	// BrnCrashNavIconRenderer.h:466
	uint32_t[10] mauIconsToIgnore;

	// BrnCrashNavIconRenderer.h:467
	int32_t miNumIconsToIgnore;

	// BrnCrashNavIconRenderer.h:470
	bool mbRenderEventStarts;

	// BrnCrashNavIconRenderer.h:473
	bool mbOldTypeFading;

	// BrnCrashNavIconRenderer.h:474
	BrnGui::GuiEventDrawEventIcons::EIconDisplayType meFadingIconDisplayType;

	// BrnCrashNavIconRenderer.h:475
	float32_t mfIconFadeStartTime;

	// BrnCrashNavIconRenderer.h:476
	float32_t mfIconFadeEndTime;

public:
	// BrnCrashNavIconRenderer.cpp:178
	virtual void Construct();

	// BrnCrashNavIconRenderer.cpp:280
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnCrashNavIconRenderer.cpp:339
	virtual bool Release();

	// BrnCrashNavIconRenderer.cpp:357
	virtual void Destruct();

	// BrnCrashNavIconRenderer.cpp:373
	// Declaration
	virtual void RecvEvent(const CgsModule::Event *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavIconRenderer.cpp:508
		using namespace CgsDev::Message;

		// BrnCrashNavIconRenderer.cpp:516
		using namespace CgsDev::Message;

	}

	// BrnCrashNavIconRenderer.cpp:534
	virtual void Update();

	// BrnCrashNavIconRenderer.h:496
	virtual CgsGui::eCustomRenderLayer GetRenderLayer() const;

	// BrnCrashNavIconRenderer.cpp:846
	virtual CgsID GetID() const;

	// BrnCrashNavIconRenderer.h:577
	virtual void SetRenderEnabled(bool);

	// BrnCrashNavIconRenderer.h:562
	void SetTextRenderer(TextRenderer *);

	// BrnCrashNavIconRenderer.h:487
	void SetLanguageManager(LanguageManager *);

private:
	// BrnCrashNavIconRenderer.cpp:550
	virtual void RenderComponent(ImRendererSet *);

	// BrnCrashNavIconRenderer.cpp:618
	void InitResources();

	// BrnCrashNavIconRenderer.cpp:719
	// Declaration
	void InitEventTypeUvs() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashNavIconRenderer.cpp:800
		using namespace CgsDev::Message;

	}

	// BrnCrashNavIconRenderer.cpp:1117
	void RenderIcons(CgsGraphics::Im2dRenderBuffer *);

	// BrnCrashNavIconRenderer.cpp:1324
	void RenderEventIcon(CgsGraphics::Im2dRenderBuffer *, bool, bool, BrnGui::CrashNavIconRenderer::ECrashNavIconType, uint32_t, uint32_t, Vector3, float32_t *, float32_t *, float32_t *, float32_t *, RGBA8, BrnGui::EventIconManager::EventIcon2D *, int32_t *);

	// BrnCrashNavIconRenderer.cpp:861
	uint32_t GetNumIcons() const;

	// BrnCrashNavIconRenderer.cpp:924
	void GetIconInformation(uint32_t, bool *, bool *, uint32_t *, BrnGui::CrashNavIconRenderer::ECrashNavIconType *, uint32_t *, Vector3 &) const;

	// BrnCrashNavIconRenderer.cpp:2797
	void CalculateUVsForIndex(int32_t, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &, float32_t, float32_t, float32_t, float32_t);

	// BrnCrashNavIconRenderer.cpp:1471
	void RenderCursor(CgsGraphics::Im2dRenderBuffer *);

	// BrnCrashNavIconRenderer.cpp:1592
	void RenderDriveThroughs(CgsGraphics::Im2dRenderBuffer *, float32_t);

	// BrnCrashNavIconRenderer.cpp:1694
	void RenderDriveThrough(CgsGraphics::Im2dRenderBuffer *, int32_t, float32_t);

	// BrnCrashNavIconRenderer.cpp:1846
	void RenderRoadSigns(CgsGraphics::Im2dRenderBuffer *);

	// BrnCrashNavIconRenderer.cpp:1881
	void RenderRoadSign(CgsGraphics::Im2dRenderBuffer *, int32_t);

	// BrnCrashNavIconRenderer.cpp:2311
	void RenderStartFinish(CgsGraphics::Im2dRenderBuffer *);

	// BrnCrashNavIconRenderer.cpp:2405
	void RenderRivals(CgsGraphics::Im2dRenderBuffer *);

	// BrnCrashNavIconRenderer.cpp:2708
	void RenderQuad(CgsGraphics::Im2dRenderBuffer *, const Vector2Template<float> &, const Vector2Template<float> &, const Vector2Template<float> &, const Vector2Template<float> &, Vector4, const TextureState *, const BlendState *, const Vector4Template<float> &);

	// BrnCrashNavIconRenderer.cpp:2747
	void RotatateRect(Vector4, float32_t, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &, Vector2Template<float> &);

	// BrnCrashNavIconRenderer.h:512
	const BrnGui::GuiEventDrawEventIcons::EIconDisplayType GetActiveIconType() const;

	// BrnCrashNavIconRenderer.h:536
	bool IsIgnoredIcon(uint32_t) const;

}

// BrnCrashNavIconRenderer.h:358
extern const uint32_t KU_ICON_EVENT_TYPE_ONLINE_OFFSET = 6;

// BrnCrashNavIconRenderer.h:359
extern const uint32_t KU_ICON_EVENT_TYPE_ADDITIONAL_OFFSET = 9;

// BrnCrashNavIconRenderer.h:375
extern const int32_t KI_PLAYER_ICON_INDEX = 5;

// BrnCrashNavIconRenderer.h:376
extern const int32_t KI_PLAYER_ICON_OVERLAY_INDEX = 7;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RoadSign {
		// BrnCrashNavIconRenderer.h:51
		enum ESignSize {
			E_SIGNSIZE_SMALL = 0,
			E_SIGNSIZE_MID_1 = 1,
			E_SIGNSIZE_MID_2 = 2,
			E_SIGNSIZE_LARGE = 3,
			E_SIGNSIZE_COUNT = 4,
		}

	}

	// Declaration
	struct CrashNavIconRenderer {
		// BrnCrashNavIconRenderer.h:144
		enum ECrashNavEventTypeMiniIconIndex {
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_CURRENT_BURNINGROUTE = 0,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_ROADRAGE = 1,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_BURNINGROUTE = 2,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_RACE = 3,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_MARKEDMAN = 4,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_STUNT = 5,
			E_CRASHNAVICON_EVENTTYPE_MINI_INDEX_COUNT = 6,
		}

	public:
		CrashNavIconRenderer();

	private:
		// BrnCrashNavIconRenderer.h:347
		extern const RGBA8 K_WHITE_COLOUR;

		// BrnCrashNavIconRenderer.h:348
		extern const float32_t KF_NOTINSPECTED_EVENT_ALPHASCALE;

		// BrnCrashNavIconRenderer.h:349
		extern float32_t[] KAF_TEXTURE_WIDTH;

		// BrnCrashNavIconRenderer.h:350
		extern float32_t[] KAF_TEXTURE_HEIGHT;

		// BrnCrashNavIconRenderer.h:351
		extern float32_t[] KAF_ICON_WIDTH;

		// BrnCrashNavIconRenderer.h:352
		extern float32_t[] KAF_ICON_HEIGHT;

		// BrnCrashNavIconRenderer.h:353
		extern float32_t[] KAF_ICON_HALFWIDTH_SCREENSPACE;

		// BrnCrashNavIconRenderer.h:354
		extern float32_t[] KAF_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnCrashNavIconRenderer.h:355
		extern float32_t[] KAF_ICON_HALFWIDTH_WORLDSIZE;

		// BrnCrashNavIconRenderer.h:356
		extern float32_t[] KAF_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnCrashNavIconRenderer.h:357
		extern const uint32_t KU_ICON_EVENT_TYPE_COUNT = 11;

		// BrnCrashNavIconRenderer.h:362
		extern float32_t[] KAF_MINI_ICON_WIDTH;

		// BrnCrashNavIconRenderer.h:363
		extern float32_t[] KAF_MINI_ICON_HEIGHT;

		// BrnCrashNavIconRenderer.h:364
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_SCREENSPACE;

		// BrnCrashNavIconRenderer.h:365
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_SCREENSPACE;

		// BrnCrashNavIconRenderer.h:366
		extern float32_t[] KAF_MINI_ICON_HALFWIDTH_WORLDSIZE;

		// BrnCrashNavIconRenderer.h:367
		extern float32_t[] KAF_MINI_ICON_HALFHEIGHT_WORLDSIZE;

		// BrnCrashNavIconRenderer.h:368
		extern BrnGui::CrashNavIconRenderer::ECrashNavEventTypeMiniIconIndex[] K_ICON_MINI_ICON_MAP;

		// BrnCrashNavIconRenderer.h:369
		extern const float32_t KF_MINI_ICON_TEXTURE_OFFSET;

		// BrnCrashNavIconRenderer.h:371
		extern const float32_t KF_SELECTED_GROW_TIME;

		// BrnCrashNavIconRenderer.h:372
		extern const float32_t KF_SELECTED_SHRINK_TIME;

		// BrnCrashNavIconRenderer.h:374
		extern const int32_t KI_MAX_RIVALS = 8;

		// BrnCrashNavIconRenderer.h:378
		extern char[] KAC_ROAD_SIGN_FONT_NAME;

		// BrnCrashNavIconRenderer.h:464
		extern const int32_t[2] KAI_NUM_EVENTICON_FRAMES;

	}

}

// BrnCrashNavIconRenderer.h:97
void BrnGui::CrashNavIconRenderer::CrashNavIconRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

