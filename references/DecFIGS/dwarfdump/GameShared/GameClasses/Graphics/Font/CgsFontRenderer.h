// CgsCamera.h:44
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsFontRenderer.h:60
struct CgsGraphics::TextBackground {
	// CgsFontRenderer.h:62
	RGBA lTopLeft;

	// CgsFontRenderer.h:63
	RGBA lTopRight;

	// CgsFontRenderer.h:64
	RGBA lBottomLeft;

	// CgsFontRenderer.h:65
	RGBA lBottomRight;

}

// CgsFontRenderer.h:77
struct CgsGraphics::TextObject {
	// CgsFontRenderer.h:98
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsFontRenderer.h:100
	float32_t mfFontHeight;

	// CgsFontRenderer.h:101
	float32_t mfAutosizedFontHeight;

	// CgsFontRenderer.h:102
	float32_t * mpfCurrentFontHeight;

	// CgsFontRenderer.h:103
	RGBA mTextColour;

	// CgsFontRenderer.h:105
	BasicColouredTexturedVertex::Vector2U_32 mv2TopLeft;

	// CgsFontRenderer.h:106
	BasicColouredTexturedVertex::Vector2U_32 mv2BottomRight;

	// CgsFontRenderer.h:107
	float32_t mfCharSpacingMultiplier;

	// CgsFontRenderer.h:109
	CgsGraphics::TextObject::ETextAlignment meAlignment;

	// CgsFontRenderer.h:113
	int32_t mbMultiLine;

	// CgsFontRenderer.h:114
	int32_t mbWordWrap;

	// CgsFontRenderer.h:115
	int32_t mbItalic;

	// CgsFontRenderer.h:116
	int32_t mbBackground;

	// CgsFontRenderer.h:117
	int32_t mbBorder;

	// CgsFontRenderer.h:118
	bool8_t mbGradient;

	// CgsFontRenderer.h:119
	bool8_t mbDropShadow;

	// CgsFontRenderer.h:120
	bool8_t mbEmbossed;

	// CgsFontRenderer.h:123
	TextBackground mBackgroundColours;

	// CgsFontRenderer.h:124
	RGBA mDropShadowColour;

	// CgsFontRenderer.h:125
	RGBA mBorderColour;

	// CgsFontRenderer.h:126
	RGBA mGradientColour1;

	// CgsFontRenderer.h:127
	RGBA mGradientColour2;

private:
	// CgsFontRenderer.h:164
	extern const float32_t KF_MIN_AUTOSIZED_FONT_SIZE;

	// CgsFontRenderer.h:165
	extern const float32_t KF_MIN_AUTOSIZED_SLACK_SPACE;

	// CgsFontRenderer.h:167
	const RGBA * mpAlternateTextColours;

	// CgsFontRenderer.h:168
	int32_t miNumAlternateColours;

	// CgsFontRenderer.h:170
	float32_t mfStringWidth;

	// CgsFontRenderer.h:171
	const UnicodeBuffer::CgsUtf8 * mpUtf8String;

	// CgsFontRenderer.h:172
	bool8_t mbAutosize;

public:
	// CgsFontRenderer.h:84
	void Construct(const RGBA *, int32_t);

	// CgsFontRenderer.h:131
	RGBA GetAlternateColour(int32_t) const;

	// CgsFontRenderer.h:134
	int32_t GetNumAlternateColours() const;

	// CgsFontRenderer.h:139
	uint32_t GetNumLinesAndStartLine(uint32_t, const UnicodeBuffer::CgsUtf8 **) const;

	// CgsFontRenderer.h:142
	void CalculateAutosizing();

	// CgsFontRenderer.h:146
	void SetText(const UnicodeBuffer::CgsUtf8 *);

	// CgsFontRenderer.h:149
	const UnicodeBuffer::CgsUtf8 * GetText() const;

	// CgsFontRenderer.h:153
	void SetStringWidth(float32_t);

	// CgsFontRenderer.h:156
	float32_t GetStringWidth() const;

	// CgsFontRenderer.h:160
	void SetAutosize(bool);

}

// CgsFontRenderer.h:276
struct CgsGraphics::TextRenderer {
private:
	// CgsFontRenderer.h:331
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsFontRenderer.h:332
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsFontRenderer.h:340
	uint32_t[1] mauVertexCount;

	// CgsFontRenderer.h:341
	ImCommandBatchTransformTextureBlendRender::Im2dVertex *[1] mapaVertices;

	// CgsFontRenderer.h:344
	bool[1] mabTempVerticesInUse;

	// CgsFontRenderer.h:345
	ImCommandBatchTransformTextureBlendRender::Im2dVertex[1][1536] maaTempVertices;

public:
	// CgsFontRenderer.h:281
	void Construct();

	// CgsFontRenderer.h:286
	void RenderString(CgsGraphics::Im2dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:291
	void RenderString(CgsGraphics::Im3dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:313
	void RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *, const TextObject &, float32_t, float32_t, float32_t, float32_t);

private:
	// CgsFontRenderer.h:351
	void ItaliciseVertices(ImCommandBatchTransformTextureBlendRender::Im2dVertex *, float32_t);

	// CgsFontRenderer.h:356
	void RenderStringInternal(const TextObject &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:361
	void RenderDropShadow(const RGBA &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:365
	void RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:372
	void RenderBackground(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, const TextBackground &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:379
	void RenderBorder(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, RGBA, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:385
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * RenderBufferRenderStart(uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:393
	void RenderBufferRenderEnd(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:398
	void RenderBufferSetTextureState(const TextureState *, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:403
	void RenderBufferSetBlendState(const BlendState *, CgsGraphics::TextRenderer::EImRenderingType);

}

// CgsFontRenderer.h:164
extern const float32_t KF_MIN_AUTOSIZED_FONT_SIZE;

// CgsFontRenderer.h:165
extern const float32_t KF_MIN_AUTOSIZED_SLACK_SPACE;

// CgsImRenderBuffer.h:33
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsFontRenderer.h:276
struct CgsGraphics::TextRenderer {
private:
	// CgsFontRenderer.h:331
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsFontRenderer.h:332
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsFontRenderer.h:340
	uint32_t[1] mauVertexCount;

	// Unknown accessibility
	// CgsIm2d.h:44
	typedef Basic2dColouredTexturedVertex Im2dVertex;

	// CgsFontRenderer.h:341
	TextRenderer::Im2dVertex *[1] mapaVertices;

	// CgsFontRenderer.h:344
	bool[1] mabTempVerticesInUse;

	// CgsFontRenderer.h:345
	TextRenderer::Im2dVertex[1][1536] maaTempVertices;

public:
	// CgsFontRenderer.h:281
	void Construct();

	// CgsFontRenderer.h:286
	void RenderString(CgsGraphics::Im2dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:291
	void RenderString(CgsGraphics::Im3dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:313
	void RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *, const TextObject &, float32_t, float32_t, float32_t, float32_t);

private:
	// CgsFontRenderer.h:351
	void ItaliciseVertices(TextRenderer::Im2dVertex *, float32_t);

	// CgsFontRenderer.h:356
	void RenderStringInternal(const TextObject &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:361
	void RenderDropShadow(const RGBA &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:365
	void RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:372
	void RenderBackground(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, const TextBackground &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:379
	void RenderBorder(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, RGBA, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:385
	TextRenderer::Im2dVertex * RenderBufferRenderStart(uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:393
	void RenderBufferRenderEnd(renderengine::PrimitiveType, const TextRenderer::Im2dVertex *, uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:398
	void RenderBufferSetTextureState(const TextureState *, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:403
	void RenderBufferSetBlendState(const BlendState *, CgsGraphics::TextRenderer::EImRenderingType);

}

// CgsTextureScopeTable.h:24
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsFontRenderer.h:276
struct CgsGraphics::TextRenderer {
private:
	// CgsFontRenderer.h:331
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsFontRenderer.h:332
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsFontRenderer.h:340
	uint32_t[1] mauVertexCount;

	// CgsFontRenderer.h:341
	GuiGeometryMesh::Im2dVertex *[1] mapaVertices;

	// CgsFontRenderer.h:344
	bool[1] mabTempVerticesInUse;

	// CgsFontRenderer.h:345
	GuiGeometryMesh::Im2dVertex[1][1536] maaTempVertices;

public:
	// CgsFontRenderer.h:281
	void Construct();

	// CgsFontRenderer.h:286
	void RenderString(CgsGraphics::Im2dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:291
	void RenderString(CgsGraphics::Im3dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:313
	void RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *, const TextObject &, float32_t, float32_t, float32_t, float32_t);

private:
	// CgsFontRenderer.h:351
	void ItaliciseVertices(GuiGeometryMesh::Im2dVertex *, float32_t);

	// CgsFontRenderer.h:356
	void RenderStringInternal(const TextObject &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:361
	void RenderDropShadow(const RGBA &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:365
	void RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:372
	void RenderBackground(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, const TextBackground &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:379
	void RenderBorder(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, RGBA, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:385
	GuiGeometryMesh::Im2dVertex * RenderBufferRenderStart(uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:393
	void RenderBufferRenderEnd(renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:398
	void RenderBufferSetTextureState(const TextureState *, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:403
	void RenderBufferSetBlendState(const BlendState *, CgsGraphics::TextRenderer::EImRenderingType);

}

// CgsIm2dTransform.h:26
namespace CgsGraphics {
	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsFontRenderer.h:276
struct CgsGraphics::TextRenderer {
private:
	// CgsFontRenderer.h:331
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsFontRenderer.h:332
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsFontRenderer.h:340
	uint32_t[1] mauVertexCount;

	// CgsFontRenderer.h:341
	GuiGeometryMesh::Im2dVertex *[1] mapaVertices;

	// CgsFontRenderer.h:344
	bool[1] mabTempVerticesInUse;

	// CgsFontRenderer.h:345
	GuiGeometryMesh::Im2dVertex[1][1536] maaTempVertices;

public:
	// CgsFontRenderer.h:281
	void Construct();

	// CgsFontRenderer.h:286
	void RenderString(CgsGraphics::Im2dRenderBuffer *, const CgsGraphics::TextObject &);

	// CgsFontRenderer.h:291
	void RenderString(CgsGraphics::Im3dRenderBuffer *, const CgsGraphics::TextObject &);

	// CgsFontRenderer.h:313
	void RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *, const CgsGraphics::TextObject &, float32_t, float32_t, float32_t, float32_t);

private:
	// CgsFontRenderer.h:351
	void ItaliciseVertices(GuiGeometryMesh::Im2dVertex *, float32_t);

	// CgsFontRenderer.h:356
	void RenderStringInternal(const CgsGraphics::TextObject &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:361
	void RenderDropShadow(const RGBA &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:365
	void RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:372
	void RenderBackground(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, const TextBackground &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:379
	void RenderBorder(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, RGBA, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:385
	GuiGeometryMesh::Im2dVertex * RenderBufferRenderStart(uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:393
	void RenderBufferRenderEnd(renderengine::PrimitiveType, const GuiGeometryMesh::Im2dVertex *, uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:398
	void RenderBufferSetTextureState(const TextureState *, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:403
	void RenderBufferSetBlendState(const BlendState *, CgsGraphics::TextRenderer::EImRenderingType);

}

// CgsMaterialState.h:37
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

// CgsFontRenderer.h:276
struct CgsGraphics::TextRenderer {
private:
	// CgsFontRenderer.h:331
	CgsGraphics::Im2dRenderBuffer * mpIm2dRenderBuffer;

	// CgsFontRenderer.h:332
	CgsGraphics::Im3dRenderBuffer * mpIm3dRenderBuffer;

	// CgsFontRenderer.h:340
	uint32_t[1] mauVertexCount;

	// CgsFontRenderer.h:341
	ImCommandBatchTransformTextureBlendRender::Im2dVertex *[1] mapaVertices;

	// CgsFontRenderer.h:344
	bool[1] mabTempVerticesInUse;

	// CgsFontRenderer.h:345
	ImCommandBatchTransformTextureBlendRender::Im2dVertex[1][1536] maaTempVertices;

public:
	// CgsFontRenderer.h:281
	void Construct();

	// CgsFontRenderer.h:286
	void RenderString(CgsGraphics::Im2dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:291
	void RenderString(CgsGraphics::Im3dRenderBuffer *, const TextObject &);

	// CgsFontRenderer.h:313
	// Declaration
	void RenderStringFadingY(CgsGraphics::Im2dRenderBuffer *, const TextObject &, float32_t, float32_t, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFontRenderer.cpp:968
		using namespace rw::math;

	}

private:
	// CgsFontRenderer.h:351
	void ItaliciseVertices(ImCommandBatchTransformTextureBlendRender::Im2dVertex *, float32_t);

	// CgsFontRenderer.h:356
	// Declaration
	void RenderStringInternal(const TextObject &, CgsGraphics::TextRenderer::EImRenderingType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFontRenderer.cpp:510
		using namespace rw::math;

	}

	// CgsFontRenderer.h:361
	void RenderDropShadow(const RGBA &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:365
	void RenderEmboss(CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:372
	void RenderBackground(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, const TextBackground &, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:379
	void RenderBorder(BasicColouredTexturedVertex::Vector2U_32, BasicColouredTexturedVertex::Vector2U_32, RGBA, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:385
	ImCommandBatchTransformTextureBlendRender::Im2dVertex * RenderBufferRenderStart(uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:393
	void RenderBufferRenderEnd(renderengine::PrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *, uint32_t, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:398
	void RenderBufferSetTextureState(const TextureState *, CgsGraphics::TextRenderer::EImRenderingType);

	// CgsFontRenderer.h:403
	void RenderBufferSetBlendState(const BlendState *, CgsGraphics::TextRenderer::EImRenderingType);

}

// CgsJpegEncode.h:30
namespace CgsGraphics {
	// Declaration
	struct TextObject {
		// CgsFontRenderer.h:86
		enum ETextAlignment {
			E_ALIGNMENT_START = 0,
			E_ALIGNMENT_LEFT = 1,
			E_ALIGNMENT_CENTER = 2,
			E_ALIGNMENT_RIGHT = 3,
			E_ALIGNMENT_COUNT = 4,
		}

	}

	// Declaration
	struct TextRenderer {
		// CgsFontRenderer.h:317
		enum EImRenderingType {
			EImRenderingType_Buffered = 0,
			EImRenderingType_Num = 1,
		}

	}

	// CgsFontRenderer.h:41
	const uint32_t KU_MAX_VERTICES = 1536;

}

