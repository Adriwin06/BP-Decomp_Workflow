// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnLoadingScreenRenderer.h:36
	enum ELoadingScreenCommand {
		E_LSC_NONE = 0,
		E_LSC_SHOW = 1,
		E_LSC_HIDE = 2,
		E_LSC_SHOWSAVELOADBG = 3,
		E_LSC_BLACKFADEIN = 4,
		E_LSC_BLACKFADEOUT = 5,
		E_LSC_COUNT = 6,
	}

}

// BrnGlobalCpuMonitors.h:24
namespace BrnGame {
	// BrnLoadingScreenRenderer.h:36
	enum ELoadingScreenCommand {
		E_LSC_NONE = 0,
		E_LSC_SHOW = 1,
		E_LSC_HIDE = 2,
		E_LSC_SHOWSAVELOADBG = 3,
		E_LSC_BLACKFADEIN = 4,
		E_LSC_BLACKFADEOUT = 5,
		E_LSC_COUNT = 6,
	}

	// Declaration
	struct LoadingScreenRenderer {
		// BrnLoadingScreenRenderer.h:59
		enum ELoadingLanguage {
			E_LOADINGLANGUAGE_ENGLISH = 0,
			E_LOADINGLANGUAGE_JAPANESE = 1,
			E_LOADINGLANGUAGE_FRENCH = 2,
			E_LOADINGLANGUAGE_GERMAN = 3,
			E_LOADINGLANGUAGE_SPANISH = 4,
			E_LOADINGLANGUAGE_ITALIAN = 5,
			E_LOADINGLANGUAGE_COUNT = 6,
		}

	}

}

// BrnLoadingScreenRenderer.h:56
struct BrnGame::LoadingScreenRenderer {
private:
	// BrnLoadingScreenRenderer.h:104
	Texture2D * mpArrowTexture;

	// BrnLoadingScreenRenderer.h:105
	Texture2D * mpCarTexture;

	// BrnLoadingScreenRenderer.h:106
	Texture2D * mpTextTexture;

	// BrnLoadingScreenRenderer.h:107
	Texture2D * mpBoxTexture;

	// BrnLoadingScreenRenderer.h:109
	BrnGame::LoadingScreenRenderer::ELoadingLanguage meLanguage;

	// BrnLoadingScreenRenderer.h:112
	Texture2D * mpDiskErrorTexture;

	// BrnLoadingScreenRenderer.h:116
	bool mbVisible;

	// BrnLoadingScreenRenderer.h:117
	bool mbHiding;

	// BrnLoadingScreenRenderer.h:119
	bool mbBlackOverlayVisible;

	// BrnLoadingScreenRenderer.h:120
	bool mbBlackOverlayHiding;

	// BrnLoadingScreenRenderer.h:122
	uint64_t muLastTime;

	// BrnLoadingScreenRenderer.h:123
	float32_t mfArrowRotation;

	// BrnLoadingScreenRenderer.h:124
	float32_t mfArrowTranslation;

	// BrnLoadingScreenRenderer.h:125
	float32_t mfArrowDirection;

	// BrnLoadingScreenRenderer.h:127
	float32_t mfFade;

	// BrnLoadingScreenRenderer.h:128
	bool mbRenderInBackground;

	// BrnLoadingScreenRenderer.h:129
	float32_t mfBlackOverlayFade;

	// BrnLoadingScreenRenderer.h:130
	bool mbKillBlackOverlayWhenDone;

	// BrnLoadingScreenRenderer.h:132
	LinearMalloc mReusableDataBuffer;

	// BrnLoadingScreenRenderer.h:134
	float32_t mfTimeStep;

	// BrnLoadingScreenRenderer.h:135
	float32_t mfRotateSpeedInterp;

public:
	// BrnLoadingScreenRenderer.h:74
	// Declaration
	void Construct() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnLoadingScreenRenderer.cpp:168
		using namespace CgsDev::Message;

		// BrnLoadingScreenRenderer.cpp:179
		using namespace CgsDev::Message;

	}

	// BrnLoadingScreenRenderer.h:78
	void AddCommand(BrnGame::ELoadingScreenCommand);

	// BrnLoadingScreenRenderer.h:84
	void RenderDiskErrorMessage(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:89
	LinearMalloc * GetReusableDataAllocator();

	// BrnLoadingScreenRenderer.h:93
	void RenderForeground(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:96
	void RenderBackground(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:100
	bool IsRenderingLoadingScreen();

private:
	// BrnLoadingScreenRenderer.h:138
	Texture2D * SetupLoadingScreenTexture(float32_t, float32_t, void *, int32_t);

	// BrnLoadingScreenRenderer.h:141
	Basic2dColouredVertex::Vector2 RotatePointAroundAngle(const Vector2Template<float> &, float32_t, float32_t);

	// BrnLoadingScreenRenderer.h:145
	void Render(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:149
	void RenderBlackOverlay(CgsGraphics::Im2d *);

}

// BrnLoadingScreenRenderer.h:56
struct BrnGame::LoadingScreenRenderer {
private:
	// BrnLoadingScreenRenderer.h:104
	Texture2D * mpArrowTexture;

	// BrnLoadingScreenRenderer.h:105
	Texture2D * mpCarTexture;

	// BrnLoadingScreenRenderer.h:106
	Texture2D * mpTextTexture;

	// BrnLoadingScreenRenderer.h:107
	Texture2D * mpBoxTexture;

	// BrnLoadingScreenRenderer.h:109
	BrnGame::LoadingScreenRenderer::ELoadingLanguage meLanguage;

	// BrnLoadingScreenRenderer.h:112
	Texture2D * mpDiskErrorTexture;

	// BrnLoadingScreenRenderer.h:116
	bool mbVisible;

	// BrnLoadingScreenRenderer.h:117
	bool mbHiding;

	// BrnLoadingScreenRenderer.h:119
	bool mbBlackOverlayVisible;

	// BrnLoadingScreenRenderer.h:120
	bool mbBlackOverlayHiding;

	// BrnLoadingScreenRenderer.h:122
	uint64_t muLastTime;

	// BrnLoadingScreenRenderer.h:123
	float32_t mfArrowRotation;

	// BrnLoadingScreenRenderer.h:124
	float32_t mfArrowTranslation;

	// BrnLoadingScreenRenderer.h:125
	float32_t mfArrowDirection;

	// BrnLoadingScreenRenderer.h:127
	float32_t mfFade;

	// BrnLoadingScreenRenderer.h:128
	bool mbRenderInBackground;

	// BrnLoadingScreenRenderer.h:129
	float32_t mfBlackOverlayFade;

	// BrnLoadingScreenRenderer.h:130
	bool mbKillBlackOverlayWhenDone;

	// BrnLoadingScreenRenderer.h:132
	LinearMalloc mReusableDataBuffer;

	// BrnLoadingScreenRenderer.h:134
	float32_t mfTimeStep;

	// BrnLoadingScreenRenderer.h:135
	float32_t mfRotateSpeedInterp;

public:
	// BrnLoadingScreenRenderer.h:74
	void Construct();

	// BrnLoadingScreenRenderer.h:78
	void AddCommand(BrnGame::ELoadingScreenCommand);

	// BrnLoadingScreenRenderer.h:84
	void RenderDiskErrorMessage(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:89
	LinearMalloc * GetReusableDataAllocator();

	// BrnLoadingScreenRenderer.h:93
	void RenderForeground(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:96
	void RenderBackground(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:100
	bool IsRenderingLoadingScreen();

private:
	// BrnLoadingScreenRenderer.h:138
	Texture2D * SetupLoadingScreenTexture(float32_t, float32_t, void *, int32_t);

	// BrnLoadingScreenRenderer.h:141
	SmoothStep::Vector2 RotatePointAroundAngle(const Vector2Template<float> &, float32_t, float32_t);

	// BrnLoadingScreenRenderer.h:145
	void Render(CgsGraphics::Im2d *);

	// BrnLoadingScreenRenderer.h:149
	void RenderBlackOverlay(CgsGraphics::Im2d *);

}

