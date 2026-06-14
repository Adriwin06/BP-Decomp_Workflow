// BrnGuiEventTypes.h:28
namespace BrnGui {
	// BrnAboveCarRenderer.h:35
	const int32_t KI_MAX_BANKING_SCORES = 6;

	// BrnAboveCarRenderer.h:36
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

}

// BrnAboveCarRenderer.h:55
extern const int32_t KI_RIVALNAME_LENGTH = 64;

// BrnAboveCarRenderer.h:56
extern const int32_t KI_POSITION_LENGTH = 16;

// BrnAboveCarRenderer.h:125
extern const float32_t KF_MARKER_ABOVE_CAR_DIST;

// BrnAboveCarRenderer.h:126
extern const float32_t KF_MARKER_SIZE;

// CgsGuiShared.h:45
namespace BrnGui {
	// BrnAboveCarRenderer.h:35
	const int32_t KI_MAX_BANKING_SCORES = 6;

	// BrnAboveCarRenderer.h:36
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AboveCarRenderer {
		// BrnAboveCarRenderer.h:79
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// BrnAboveCarRenderer.h:85
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

	}

	// BrnAboveCarRenderer.h:35
	const int32_t KI_MAX_BANKING_SCORES = 6;

	// BrnAboveCarRenderer.h:36
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

}

// BrnAboveCarRenderer.h:43
struct BrnGui::BankingScore {
	// BrnAboveCarRenderer.h:45
	Vector2 mv2ScreenSpacePosition;

	// BrnAboveCarRenderer.h:46
	Vector3 mv3OriginalWorldSpacePosition;

	// BrnAboveCarRenderer.h:47
	int16_t miBaseScore;

	// BrnAboveCarRenderer.h:48
	int16_t miComboBonus;

	// BrnAboveCarRenderer.h:49
	bool mbIsRoadRageTimeExtension;

}

// BrnAboveCarRenderer.h:53
struct BrnGui::PlayerGamerTagAboveCarInfo {
	// BrnAboveCarRenderer.h:55
	extern const int32_t KI_RIVALNAME_LENGTH = 64;

	// BrnAboveCarRenderer.h:56
	extern const int32_t KI_POSITION_LENGTH = 16;

	// BrnAboveCarRenderer.h:58
	bool mbUsed;

	// BrnAboveCarRenderer.h:59
	char[64] macRivalName;

	// BrnAboveCarRenderer.h:60
	const UnicodeBuffer::CgsUtf8 * mpRivalName;

	// BrnAboveCarRenderer.h:61
	char[16] macPositionText;

	// BrnAboveCarRenderer.h:62
	const UnicodeBuffer::CgsUtf8 * mpPositionText;

	// BrnAboveCarRenderer.h:63
	RGBA mColour;

	// BrnAboveCarRenderer.h:64
	float32_t mfNameStringWidth;

	// BrnAboveCarRenderer.h:65
	float32_t mfPositionStringWidth;

	// BrnAboveCarRenderer.h:66
	uint32_t muRivalPosition;

}

// BrnAboveCarRenderer.h:77
struct BrnGui::AboveCarRenderer : public CgsGui::CustomRenderComponentInterface {
private:
	// BrnAboveCarRenderer.cpp:28
	extern const float32_t KF_MARKER_ABOVE_CAR_DIST;

	// BrnAboveCarRenderer.cpp:29
	extern const float32_t KF_MARKER_SIZE;

	// BrnAboveCarRenderer.cpp:32
	extern RGBA K_MARKER_COLOURS_DULL_RED;

	// BrnAboveCarRenderer.cpp:33
	extern RGBA K_MARKER_COLOURS_PURE_RED;

	// BrnAboveCarRenderer.cpp:34
	extern RGBA K_MARKER_COLOURS_BLUE;

	// BrnAboveCarRenderer.cpp:35
	extern RGBA K_MARKER_COLOURS_GREY;

	// BrnAboveCarRenderer.cpp:36
	extern RGBA K_MARKER_COLOURS_YELLOW;

	// BrnAboveCarRenderer.cpp:37
	extern RGBA K_MARKER_COLOURS_GREEN;

	// BrnAboveCarRenderer.cpp:38
	extern RGBA K_MARKER_COLOURS_ORANGE;

	// BrnAboveCarRenderer.cpp:39
	extern RGBA K_MARKER_COLOURS_PINK;

	// BrnAboveCarRenderer.cpp:41
	extern RGBA K_MARKER_COLOURS_ONLINE_YELLOW;

	// BrnAboveCarRenderer.cpp:42
	extern RGBA K_MARKER_COLOURS_ONLINE_RED;

	// BrnAboveCarRenderer.cpp:43
	extern RGBA K_MARKER_COLOURS_ONLINE_BLUE;

	// BrnAboveCarRenderer.cpp:44
	extern RGBA K_MARKER_COLOURS_ONLINE_PINK;

	// BrnAboveCarRenderer.cpp:45
	extern RGBA K_MARKER_COLOURS_ONLINE_GREEN;

	// BrnAboveCarRenderer.cpp:46
	extern RGBA K_MARKER_COLOURS_ONLINE_ORANGE;

	// BrnAboveCarRenderer.cpp:47
	extern RGBA K_MARKER_COLOURS_ONLINE_PURPLE;

	// BrnAboveCarRenderer.cpp:48
	extern RGBA K_MARKER_COLOURS_ONLINE_CYAN;

	// BrnAboveCarRenderer.cpp:49
	extern RGBA K_MARKER_COLOURS_ONLINE_WHITE;

	// BrnAboveCarRenderer.cpp:50
	extern RGBA K_MARKER_COLOURS_ONLINE_GRAY;

	// BrnAboveCarRenderer.cpp:51
	extern RGBA K_MARKER_COLOURS_ONLINE_BLACK;

	// BrnAboveCarRenderer.cpp:87
	extern RGBA *[12] KAP_ONLINE_COLOUR_LOOKUP;

	// BrnAboveCarRenderer.cpp:53
	extern RGBA * KP_MARKER_INVALID_COLOUR;

	// BrnAboveCarRenderer.cpp:54
	extern RGBA * KP_MARKER_UNKNOWN_COLOUR;

	// BrnAboveCarRenderer.cpp:55
	extern RGBA * KP_MARKER_DRIVER_COLOUR;

	// BrnAboveCarRenderer.cpp:56
	extern RGBA * KP_MARKER_RIVAL_COLOUR;

	// BrnAboveCarRenderer.cpp:57
	extern RGBA * KP_MARKER_TARGET_COLOUR;

	// BrnAboveCarRenderer.cpp:58
	extern RGBA * KP_MARKER_WRECKED_COLOUR;

	// BrnAboveCarRenderer.cpp:59
	extern RGBA * KP_MARKER_MARKED_MAN_COLOUR;

	// BrnAboveCarRenderer.cpp:60
	extern RGBA * KP_MARKER_BLUE_TEAM_COLOUR;

	// BrnAboveCarRenderer.cpp:61
	extern RGBA * KP_MARKER_RED_TEAM_COLOUR;

	// BrnAboveCarRenderer.cpp:63
	extern const char * KAC_MARKER_FONT_NAME;

	// BrnAboveCarRenderer.cpp:64
	extern const char * KAC_TICKER_FONT_NAME;

	// BrnAboveCarRenderer.h:186
	BrnGui::AboveCarRenderer::EPrepareStage mePrepareStage;

	// BrnAboveCarRenderer.h:187
	BrnGui::AboveCarRenderer::EReleaseStage meReleaseStage;

	// BrnAboveCarRenderer.h:188
	rw::IResourceAllocator * mpHeapAllocator;

	// BrnAboveCarRenderer.h:191
	PlayerGamerTagAboveCarInfo[8] maCachedPlayerGameTagInfos;

	// BrnAboveCarRenderer.h:194
	SafeResourceHandle<CgsResource::Font> mpScoreFont;

	// BrnAboveCarRenderer.h:197
	Array<BrnGui::BankingScore,6u> maBankingScores;

	// BrnAboveCarRenderer.h:201
	BitArray<601u> mRecentCrashSet;

	// BrnAboveCarRenderer.h:204
	Resource mBlendStateResource;

	// BrnAboveCarRenderer.h:205
	BlendState * mpBlendState;

	// BrnAboveCarRenderer.h:207
	TextObject mTextObject;

	// BrnAboveCarRenderer.h:208
	TextRenderer * mpTextRenderer;

	// BrnAboveCarRenderer.h:209
	LanguageManager * mpLanguageManager;

	// BrnAboveCarRenderer.h:211
	BrnGui::GuiCache * mpGuiCache;

	// BrnAboveCarRenderer.h:213
	int16_t miTimeExtension;

	// BrnAboveCarRenderer.h:214
	bool mbTimeExtensionPending;

	// BrnAboveCarRenderer.h:217
	int32_t miAboveCarRendererPM;

public:
	// BrnAboveCarRenderer.cpp:140
	virtual void Construct();

	// BrnAboveCarRenderer.cpp:201
	virtual bool Prepare(GuiEventQueueSmall *, rw::IResourceAllocator *, rw::IResourceAllocator *);

	// BrnAboveCarRenderer.cpp:243
	virtual bool Release();

	// BrnAboveCarRenderer.cpp:287
	virtual void Destruct();

	// BrnAboveCarRenderer.cpp:322
	virtual void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnAboveCarRenderer.cpp:303
	virtual void Update();

	// BrnAboveCarRenderer.h:239
	void SetTextRenderer(TextRenderer *);

	// BrnAboveCarRenderer.h:255
	void SetLanguageManager(LanguageManager *);

	// BrnAboveCarRenderer.cpp:1245
	virtual CgsID GetID() const;

private:
	// BrnAboveCarRenderer.cpp:485
	// Declaration
	virtual void RenderComponent(ImRendererSet *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAboveCarRenderer.cpp:489
		using namespace rw::math;

	}

	// BrnAboveCarRenderer.cpp:848
	void RenderTrafficCarScores(ImRendererSet *);

	// BrnAboveCarRenderer.cpp:997
	void RenderBankingScores(ImRendererSet *);

	// BrnAboveCarRenderer.cpp:1201
	// Declaration
	float32_t SetTransformMatrixForCar(ImRendererSet *, Vector3) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAboveCarRenderer.cpp:1203
		using namespace rw::math;

	}

	// BrnAboveCarRenderer.cpp:732
	void UpdateCachedInfoForRival(EActiveRaceCarIndex);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct AboveCarRenderer {
	public:
		AboveCarRenderer();

	private:
		// BrnAboveCarRenderer.h:125
		extern const float32_t KF_MARKER_ABOVE_CAR_DIST;

		// BrnAboveCarRenderer.h:126
		extern const float32_t KF_MARKER_SIZE;

	}

	// BrnAboveCarRenderer.h:35
	const int32_t KI_MAX_BANKING_SCORES = 6;

	// BrnAboveCarRenderer.h:36
	const int32_t KI_MAX_RECENTLY_HIT_CARS = 64;

}

// BrnAboveCarRenderer.h:77
void BrnGui::AboveCarRenderer::AboveCarRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

