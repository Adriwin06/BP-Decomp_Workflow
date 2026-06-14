// CgsAptRender.h:237
extern const int32_t KI_NUM_APT_STRINGS = 256;

// CgsAptRender.h:273
extern const uint32_t KU_TEXTURESTATETABLE_MAXELEMENTS = 256;

// CgsAptRender.h:274
extern const uint32_t KU_TEXTURESTATETABLE_NUMBINS = 25;

// CgsAptRender.h:152
struct CgsGui::AptRenderHandler {
	// CgsAptRender.h:237
	extern const int32_t KI_NUM_APT_STRINGS = 256;

	// CgsAptRender.h:240
	const CgsGui::FontCollection * mpFonts;

	// CgsAptRender.h:49
	typedef RGBA RGBA;

	// CgsAptRender.h:241
	AptRenderHandler::RGBA mBackgroundColour;

	// CgsAptRender.h:243
	Im2dTransform mVertexTransform;

	// CgsAptRender.h:47
	typedef Vector2 Vector2;

	// CgsAptRender.h:245
	AptRenderHandler::Vector2 mAptResolution;

	// CgsAptRender.h:48
	typedef Vector4 Vector4;

	// CgsAptRender.h:246
	AptRenderHandler::Vector4 mPlatformTransform;

	// CgsAptRender.h:247
	AptRenderHandler::Vector4 mOriginTransform;

	// CgsAptRender.h:249
	GuiGeometryMeshHeader::GuiTexture * mpWhiteTexture;

	// CgsAptRender.h:251
	TextureState * mpWrapTextureState;

	// CgsAptRender.h:252
	Resource mWrapTextureStateResource;

	// CgsAptRender.h:253
	TextureState * mpClampTextureState;

	// CgsAptRender.h:254
	Resource mClampTextureStateResource;

	// CgsAptRender.h:259
	CgsGui::CustomRendererManager * mpCustomRendererManager;

	// CgsAptRender.h:262
	CgsAptString[256] maAptStrings;

	// CgsAptRender.h:263
	UnicodeBuffer::CgsUtf8[256][256] maacAptStringChars;

	// CgsAptRender.h:264
	bool[256] mabUnusedAptStrings;

	// CgsAptRender.h:266
	LanguageManager * mpLanguageManager;

	// CgsAptRender.h:273
	extern const uint32_t KU_TEXTURESTATETABLE_MAXELEMENTS = 256;

	// CgsAptRender.h:274
	extern const uint32_t KU_TEXTURESTATETABLE_NUMBINS = 25;

	// CgsAptRender.h:277
	HashTable<uint32_t,renderengine::TextureState*,25u> mWrapTextureStateTable;

	// CgsAptRender.h:278
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maWrapTextureStateTableElements;

	// CgsAptRender.h:280
	HashTable<uint32_t,renderengine::TextureState*,25u> mClampTextureStateTable;

	// CgsAptRender.h:281
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maClampTextureStateTableElements;

	// CgsAptRender.h:284
	CgsGui::CgsAptString::ETextEffects meTextEffect;

	// CgsAptRender.h:285
	float32_t mfCharSpacingMultiplier;

	// CgsAptRender.h:289
	extern int32_t miCgsAptFlashRender;

	// CgsAptRender.h:290
	extern int32_t miCgsAptStringRender;

	// CgsAptRender.h:291
	extern int32_t miCgsAptDrawRenderingUnit;

	// CgsAptRender.h:57
	typedef ImRendererSet ImRendererSetType;

private:
	// CgsAptRender.h:297
	AptRenderHandler::ImRendererSetType * mpImRenderers;

	// CgsAptRender.h:298
	TextRenderer * mpTextRenderer;

public:
	// CgsAptRender.h:172
	void Construct(ImRendererSet *, TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptRender.h:178
	void Render(GuiGeometryFile *, int32_t);

	// CgsAptRender.h:183
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptRender.h:187
	AptRenderHandler::RGBA RGBAFromAptColour(uint32_t);

	// CgsAptRender.h:193
	CgsAptString * GetUnusedAptString(UnicodeBuffer::CgsUtf8 *&, const char *);

	// CgsAptRender.h:197
	void DestroyAptString(CgsAptString *);

	// CgsAptRender.h:203
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptRender.h:208
	void DebugRotateToNextFont();

	// CgsAptRender.h:212
	void DebugRotateToNextFontEffect();

	// CgsAptRender.h:216
	void DebugChangeFontSpacing(float32_t);

	// CgsAptRender.h:219
	AptRenderHandler::ImRendererSetType * GetImRendererSet();

	// CgsAptRender.h:222
	void SetImRendererSet(AptRenderHandler::ImRendererSetType *);

	// CgsAptRender.h:225
	TextRenderer * GetTextRenderer();

	// CgsAptRender.h:228
	void SetTextRenderer(TextRenderer *);

	// Unknown accessibility
	// CgsAptRender.h:58
	typedef CgsGraphics::Im2dRenderBuffer Im2dRendererType;

	// CgsAptRender.h:231
	AptRenderHandler::Im2dRendererType * GetIm2dRendererType();

	// Unknown accessibility
	// CgsAptRender.h:59
	typedef CgsGraphics::Im3dRenderBuffer Im3dRendererType;

	// CgsAptRender.h:234
	AptRenderHandler::Im3dRendererType * GetIm3dRendererType();

}

// CgsAptRender.h:152
struct CgsGui::AptRenderHandler {
	// CgsAptRender.h:237
	extern const int32_t KI_NUM_APT_STRINGS = 256;

	// CgsAptRender.h:240
	const CgsGui::FontCollection * mpFonts;

	// CgsAptRender.h:49
	typedef RGBA RGBA;

	// CgsAptRender.h:241
	AptRenderHandler::RGBA mBackgroundColour;

	// CgsAptRender.h:243
	Im2dTransform mVertexTransform;

	// CgsAptRender.h:47
	typedef Vector2 Vector2;

	// CgsAptRender.h:245
	AptRenderHandler::Vector2 mAptResolution;

	// CgsAptRender.h:48
	typedef Vector4 Vector4;

	// CgsAptRender.h:246
	AptRenderHandler::Vector4 mPlatformTransform;

	// CgsAptRender.h:247
	AptRenderHandler::Vector4 mOriginTransform;

	// CgsAptRender.h:249
	GuiGeometryMeshHeader::GuiTexture * mpWhiteTexture;

	// CgsAptRender.h:251
	TextureState * mpWrapTextureState;

	// CgsAptRender.h:252
	Resource mWrapTextureStateResource;

	// CgsAptRender.h:253
	TextureState * mpClampTextureState;

	// CgsAptRender.h:254
	Resource mClampTextureStateResource;

	// CgsAptRender.h:259
	CgsGui::CustomRendererManager * mpCustomRendererManager;

	// CgsAptRender.h:262
	CgsAptString[256] maAptStrings;

	// CgsAptRender.h:263
	UnicodeBuffer::CgsUtf8[256][256] maacAptStringChars;

	// CgsAptRender.h:264
	bool[256] mabUnusedAptStrings;

	// CgsAptRender.h:266
	CgsLanguage::LanguageManager * mpLanguageManager;

	// CgsAptRender.h:273
	extern const uint32_t KU_TEXTURESTATETABLE_MAXELEMENTS = 256;

	// CgsAptRender.h:274
	extern const uint32_t KU_TEXTURESTATETABLE_NUMBINS = 25;

	// CgsAptRender.h:277
	HashTable<uint32_t,renderengine::TextureState*,25u> mWrapTextureStateTable;

	// CgsAptRender.h:278
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maWrapTextureStateTableElements;

	// CgsAptRender.h:280
	HashTable<uint32_t,renderengine::TextureState*,25u> mClampTextureStateTable;

	// CgsAptRender.h:281
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maClampTextureStateTableElements;

	// CgsAptRender.h:284
	CgsGui::CgsAptString::ETextEffects meTextEffect;

	// CgsAptRender.h:285
	float32_t mfCharSpacingMultiplier;

	// CgsAptRender.h:289
	extern int32_t miCgsAptFlashRender;

	// CgsAptRender.h:290
	extern int32_t miCgsAptStringRender;

	// CgsAptRender.h:291
	extern int32_t miCgsAptDrawRenderingUnit;

	// CgsAptRender.h:57
	typedef ImRendererSet ImRendererSetType;

private:
	// CgsAptRender.h:297
	AptRenderHandler::ImRendererSetType * mpImRenderers;

	// CgsAptRender.h:298
	TextRenderer * mpTextRenderer;

public:
	// CgsAptRender.h:172
	void Construct(ImRendererSet *, TextRenderer *, CgsLanguage::LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptRender.h:178
	void Render(GuiGeometryFile *, int32_t);

	// CgsAptRender.h:183
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptRender.h:187
	AptRenderHandler::RGBA RGBAFromAptColour(uint32_t);

	// CgsAptRender.h:193
	CgsAptString * GetUnusedAptString(UnicodeBuffer::CgsUtf8 *&, const char *);

	// CgsAptRender.h:197
	void DestroyAptString(CgsAptString *);

	// CgsAptRender.h:203
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptRender.h:208
	void DebugRotateToNextFont();

	// CgsAptRender.h:212
	void DebugRotateToNextFontEffect();

	// CgsAptRender.h:216
	void DebugChangeFontSpacing(float32_t);

	// CgsAptRender.h:219
	AptRenderHandler::ImRendererSetType * GetImRendererSet();

	// CgsAptRender.h:222
	void SetImRendererSet(AptRenderHandler::ImRendererSetType *);

	// CgsAptRender.h:225
	TextRenderer * GetTextRenderer();

	// CgsAptRender.h:228
	void SetTextRenderer(TextRenderer *);

	// Unknown accessibility
	// CgsAptRender.h:58
	typedef CgsGraphics::Im2dRenderBuffer Im2dRendererType;

	// CgsAptRender.h:231
	AptRenderHandler::Im2dRendererType * GetIm2dRendererType();

	// Unknown accessibility
	// CgsAptRender.h:59
	typedef CgsGraphics::Im3dRenderBuffer Im3dRendererType;

	// CgsAptRender.h:234
	AptRenderHandler::Im3dRendererType * GetIm3dRendererType();

}

// CgsAptRender.h:152
struct CgsGui::AptRenderHandler {
	// CgsAptRender.h:237
	extern const int32_t KI_NUM_APT_STRINGS = 256;

	// CgsAptRender.h:240
	const CgsGui::FontCollection * mpFonts;

	// CgsAptRender.h:49
	typedef RGBA RGBA;

	// CgsAptRender.h:241
	AptRenderHandler::RGBA mBackgroundColour;

	// CgsAptRender.h:243
	Im2dTransform mVertexTransform;

	// CgsAptRender.h:47
	typedef Vector2 Vector2;

	// CgsAptRender.h:245
	AptRenderHandler::Vector2 mAptResolution;

	// CgsAptRender.h:48
	typedef Vector4 Vector4;

	// CgsAptRender.h:246
	AptRenderHandler::Vector4 mPlatformTransform;

	// CgsAptRender.h:247
	AptRenderHandler::Vector4 mOriginTransform;

	// CgsAptRender.h:249
	GuiGeometryMeshHeader::GuiTexture * mpWhiteTexture;

	// CgsAptRender.h:251
	TextureState * mpWrapTextureState;

	// CgsAptRender.h:252
	Resource mWrapTextureStateResource;

	// CgsAptRender.h:253
	TextureState * mpClampTextureState;

	// CgsAptRender.h:254
	Resource mClampTextureStateResource;

	// CgsAptRender.h:259
	CgsGui::CustomRendererManager * mpCustomRendererManager;

	// CgsAptRender.h:262
	CgsAptString[256] maAptStrings;

	// CgsAptRender.h:263
	UnicodeBuffer::CgsUtf8[256][256] maacAptStringChars;

	// CgsAptRender.h:264
	bool[256] mabUnusedAptStrings;

	// CgsAptRender.h:266
	LanguageManager * mpLanguageManager;

	// CgsAptRender.h:273
	extern const uint32_t KU_TEXTURESTATETABLE_MAXELEMENTS = 256;

	// CgsAptRender.h:274
	extern const uint32_t KU_TEXTURESTATETABLE_NUMBINS = 25;

	// CgsAptRender.h:277
	HashTable<uint32_t,renderengine::TextureState*,25u> mWrapTextureStateTable;

	// CgsAptRender.h:278
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maWrapTextureStateTableElements;

	// CgsAptRender.h:280
	HashTable<uint32_t,renderengine::TextureState*,25u> mClampTextureStateTable;

	// CgsAptRender.h:281
	Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u> maClampTextureStateTableElements;

	// CgsAptRender.h:284
	CgsGui::CgsAptString::ETextEffects meTextEffect;

	// CgsAptRender.h:285
	float32_t mfCharSpacingMultiplier;

	// CgsAptRender.h:289
	extern int32_t miCgsAptFlashRender;

	// CgsAptRender.h:290
	extern int32_t miCgsAptStringRender;

	// CgsAptRender.h:291
	extern int32_t miCgsAptDrawRenderingUnit;

	// CgsAptRender.h:57
	typedef ImRendererSet ImRendererSetType;

private:
	// CgsAptRender.h:297
	AptRenderHandler::ImRendererSetType * mpImRenderers;

	// CgsAptRender.h:298
	CgsGraphics::TextRenderer * mpTextRenderer;

public:
	// CgsAptRender.h:172
	void Construct(CgsGui::ImRendererSet *, CgsGraphics::TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptRender.h:178
	void Render(GuiGeometryFile *, int32_t);

	// CgsAptRender.h:183
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptRender.h:187
	AptRenderHandler::RGBA RGBAFromAptColour(uint32_t);

	// CgsAptRender.h:193
	CgsAptString * GetUnusedAptString(UnicodeBuffer::CgsUtf8 *&, const char *);

	// CgsAptRender.h:197
	void DestroyAptString(CgsAptString *);

	// CgsAptRender.h:203
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptRender.h:208
	void DebugRotateToNextFont();

	// CgsAptRender.h:212
	void DebugRotateToNextFontEffect();

	// CgsAptRender.h:216
	void DebugChangeFontSpacing(float32_t);

	// CgsAptRender.h:219
	AptRenderHandler::ImRendererSetType * GetImRendererSet();

	// CgsAptRender.h:222
	void SetImRendererSet(AptRenderHandler::ImRendererSetType *);

	// CgsAptRender.h:225
	CgsGraphics::TextRenderer * GetTextRenderer();

	// CgsAptRender.h:228
	void SetTextRenderer(CgsGraphics::TextRenderer *);

	// Unknown accessibility
	// CgsAptRender.h:58
	typedef CgsGraphics::Im2dRenderBuffer Im2dRendererType;

	// CgsAptRender.h:231
	AptRenderHandler::Im2dRendererType * GetIm2dRendererType();

	// Unknown accessibility
	// CgsAptRender.h:59
	typedef CgsGraphics::Im3dRenderBuffer Im3dRendererType;

	// CgsAptRender.h:234
	AptRenderHandler::Im3dRendererType * GetIm3dRendererType();

}

// CgsAptRender.h:289
extern int32_t miCgsAptFlashRender;

// CgsAptRender.h:290
extern int32_t miCgsAptStringRender;

// CgsAptRender.h:291
extern int32_t miCgsAptDrawRenderingUnit;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptRenderHandler {
		// CgsAptRender.h:156
		union TexturePointerAddress {
			// CgsAptRender.h:157
			uint32_t muTexturePointerAddress;

			// CgsAptRender.h:158
			renderengine::Texture * mpTexture;

		}
	}

	// CgsAptRender.h:65
	namespace AptCallbackRender {
		void DrawRenderingUnit(AptAssetRenderingUnit, AptMaskRenderOperation, int32_t);

	}

}

