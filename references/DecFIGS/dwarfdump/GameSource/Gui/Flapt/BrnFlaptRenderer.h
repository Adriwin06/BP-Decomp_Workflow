// CgsGuiShared.h:29
namespace BrnFlapt {
	// BrnFlaptRenderer.h:63
	const uint32_t KU_MAX_MASKS = 2;

}

// BrnFlaptRenderer.h:78
struct BrnFlapt::FlaptRenderer {
	// BrnFlaptRenderer.h:81
	extern int32_t _miStateSetTexturePerfMon;

	// BrnFlaptRenderer.h:82
	extern int32_t _miStateSetBlendStatePerfMon;

	// BrnFlaptRenderer.h:83
	extern int32_t _miStateRenderFromStaticPerfMon;

	// BrnFlaptRenderer.h:84
	extern int32_t _miStateSetTransformPerfMon;

	// BrnFlaptRenderer.h:85
	extern int32_t _miRenderPushTransformPerfMon;

	// BrnFlaptRenderer.h:86
	extern int32_t _miRenderPopTransformPerfMon;

	// BrnFlaptRenderer.h:87
	extern int32_t _miRenderMeshPerfMon;

	// BrnFlaptRenderer.h:88
	extern int32_t _miRenderRMGetTexturePerfMon;

	// BrnFlaptRenderer.h:89
	extern int32_t _miRenderRMNotMaskPerfMon;

	// BrnFlaptRenderer.h:90
	extern int32_t _miRenderRMMaskPerfMon;

private:
	// BrnFlaptRenderer.h:163
	ImRendererSet * mpImRenderSet;

	// BrnFlaptRenderer.h:164
	TextRenderer * mpTextRenderer;

	// BrnFlaptRenderer.h:165
	LanguageManager * mpLanguageManager;

	// BrnFlaptRenderer.h:166
	const CgsGui::FontCollection * mpFonts;

	// BrnFlaptRenderer.h:168
	const FlaptFile::GuiTexture * mpCurrentTexture;

	// BrnFlaptRenderer.h:169
	const BlendState * mpCurrentBlendState;

	// BrnFlaptRenderer.h:170
	int32_t miCurrentShader;

	// BrnFlaptRenderer.h:172
	int32_t miSpecialTextureShader;

	// BrnFlaptRenderer.h:174
	uint8_t mxFlags;

	// BrnFlaptRenderer.h:176
	Stack<CgsGraphics::Im2dTransform,33> mTransformStack;

	// BrnFlaptRenderer.h:178
	Stack<uint16_t,2> mMaskMeshCounts;

public:
	// BrnFlaptRenderer.h:99
	void Construct(ImRendererSet *, TextRenderer *, LanguageManager *, const CgsGui::FontCollection *);

	// BrnFlaptRenderer.h:104
	void StartRenderingFrame();

	// BrnFlaptRenderer.h:108
	void EndRenderingFrame();

	// BrnFlaptRenderer.h:115
	void RenderMesh(const Mesh *, const FlaptFile *);

	// BrnFlaptRenderer.h:120
	void RenderTextField(const TextObject *);

	// BrnFlaptRenderer.h:125
	void PushTransform(const Im2dTransform &);

	// BrnFlaptRenderer.h:129
	void PopTransform();

	// BrnFlaptRenderer.h:133
	void StartDrawingMask();

	// BrnFlaptRenderer.h:137
	void StopDrawingMask();

	// BrnFlaptRenderer.h:141
	void PopMask();

	// BrnFlaptRenderer.h:146
	void SetSpecialTextureShaderProgram(int32_t);

	// BrnFlaptRenderer.h:149
	const CgsGui::FontCollection * GetFonts() const;

private:
	// BrnFlaptRenderer.h:185
	void RenderMask(const Mesh *, const FlaptFile *, const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:190
	void SetTexture(const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:195
	void SetBlendState(const BlendState *);

	// BrnFlaptRenderer.h:200
	void SetShader(int32_t);

	// BrnFlaptRenderer.h:203
	bool IsRenderingMask() const;

}

// BrnFlaptRenderer.h:78
struct BrnFlapt::FlaptRenderer {
	// BrnFlaptRenderer.h:81
	extern int32_t _miStateSetTexturePerfMon;

	// BrnFlaptRenderer.h:82
	extern int32_t _miStateSetBlendStatePerfMon;

	// BrnFlaptRenderer.h:83
	extern int32_t _miStateRenderFromStaticPerfMon;

	// BrnFlaptRenderer.h:84
	extern int32_t _miStateSetTransformPerfMon;

	// BrnFlaptRenderer.h:85
	extern int32_t _miRenderPushTransformPerfMon;

	// BrnFlaptRenderer.h:86
	extern int32_t _miRenderPopTransformPerfMon;

	// BrnFlaptRenderer.h:87
	extern int32_t _miRenderMeshPerfMon;

	// BrnFlaptRenderer.h:88
	extern int32_t _miRenderRMGetTexturePerfMon;

	// BrnFlaptRenderer.h:89
	extern int32_t _miRenderRMNotMaskPerfMon;

	// BrnFlaptRenderer.h:90
	extern int32_t _miRenderRMMaskPerfMon;

private:
	// BrnFlaptRenderer.h:163
	ImRendererSet * mpImRenderSet;

	// BrnFlaptRenderer.h:164
	TextRenderer * mpTextRenderer;

	// BrnFlaptRenderer.h:165
	CgsLanguage::LanguageManager * mpLanguageManager;

	// BrnFlaptRenderer.h:166
	const CgsGui::FontCollection * mpFonts;

	// BrnFlaptRenderer.h:168
	const FlaptFile::GuiTexture * mpCurrentTexture;

	// BrnFlaptRenderer.h:169
	const BlendState * mpCurrentBlendState;

	// BrnFlaptRenderer.h:170
	int32_t miCurrentShader;

	// BrnFlaptRenderer.h:172
	int32_t miSpecialTextureShader;

	// BrnFlaptRenderer.h:174
	uint8_t mxFlags;

	// BrnFlaptRenderer.h:176
	Stack<CgsGraphics::Im2dTransform,33> mTransformStack;

	// BrnFlaptRenderer.h:178
	Stack<uint16_t,2> mMaskMeshCounts;

public:
	// BrnFlaptRenderer.h:99
	void Construct(ImRendererSet *, TextRenderer *, CgsLanguage::LanguageManager *, const CgsGui::FontCollection *);

	// BrnFlaptRenderer.h:104
	void StartRenderingFrame();

	// BrnFlaptRenderer.h:108
	void EndRenderingFrame();

	// BrnFlaptRenderer.h:115
	void RenderMesh(const Mesh *, const FlaptFile *);

	// BrnFlaptRenderer.h:120
	void RenderTextField(const TextObject *);

	// BrnFlaptRenderer.h:125
	void PushTransform(const Im2dTransform &);

	// BrnFlaptRenderer.h:129
	void PopTransform();

	// BrnFlaptRenderer.h:133
	void StartDrawingMask();

	// BrnFlaptRenderer.h:137
	void StopDrawingMask();

	// BrnFlaptRenderer.h:141
	void PopMask();

	// BrnFlaptRenderer.h:146
	void SetSpecialTextureShaderProgram(int32_t);

	// BrnFlaptRenderer.h:149
	const CgsGui::FontCollection * GetFonts() const;

private:
	// BrnFlaptRenderer.h:185
	void RenderMask(const Mesh *, const FlaptFile *, const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:190
	void SetTexture(const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:195
	void SetBlendState(const BlendState *);

	// BrnFlaptRenderer.h:200
	void SetShader(int32_t);

	// BrnFlaptRenderer.h:203
	bool IsRenderingMask() const;

}

// BrnFlaptTextFieldRef.h:31
namespace BrnFlapt {
	// BrnFlaptRenderer.h:63
	const uint32_t KU_MAX_MASKS = 2;

}

// BrnFlaptRenderer.h:78
struct BrnFlapt::FlaptRenderer {
	// BrnFlaptRenderer.h:81
	extern int32_t _miStateSetTexturePerfMon;

	// BrnFlaptRenderer.h:82
	extern int32_t _miStateSetBlendStatePerfMon;

	// BrnFlaptRenderer.h:83
	extern int32_t _miStateRenderFromStaticPerfMon;

	// BrnFlaptRenderer.h:84
	extern int32_t _miStateSetTransformPerfMon;

	// BrnFlaptRenderer.h:85
	extern int32_t _miRenderPushTransformPerfMon;

	// BrnFlaptRenderer.h:86
	extern int32_t _miRenderPopTransformPerfMon;

	// BrnFlaptRenderer.h:87
	extern int32_t _miRenderMeshPerfMon;

	// BrnFlaptRenderer.h:88
	extern int32_t _miRenderRMGetTexturePerfMon;

	// BrnFlaptRenderer.h:89
	extern int32_t _miRenderRMNotMaskPerfMon;

	// BrnFlaptRenderer.h:90
	extern int32_t _miRenderRMMaskPerfMon;

private:
	// BrnFlaptRenderer.h:163
	CgsGui::ImRendererSet * mpImRenderSet;

	// BrnFlaptRenderer.h:164
	CgsGraphics::TextRenderer * mpTextRenderer;

	// BrnFlaptRenderer.h:165
	LanguageManager * mpLanguageManager;

	// BrnFlaptRenderer.h:166
	const CgsGui::FontCollection * mpFonts;

	// BrnFlaptRenderer.h:168
	const FlaptFile::GuiTexture * mpCurrentTexture;

	// BrnFlaptRenderer.h:169
	const BlendState * mpCurrentBlendState;

	// BrnFlaptRenderer.h:170
	int32_t miCurrentShader;

	// BrnFlaptRenderer.h:172
	int32_t miSpecialTextureShader;

	// BrnFlaptRenderer.h:174
	uint8_t mxFlags;

	// BrnFlaptRenderer.h:176
	Stack<CgsGraphics::Im2dTransform,33> mTransformStack;

	// BrnFlaptRenderer.h:178
	Stack<std::uint16_t,2> mMaskMeshCounts;

public:
	// BrnFlaptRenderer.h:99
	void Construct(CgsGui::ImRendererSet *, CgsGraphics::TextRenderer *, LanguageManager *, const CgsGui::FontCollection *);

	// BrnFlaptRenderer.h:104
	void StartRenderingFrame();

	// BrnFlaptRenderer.h:108
	void EndRenderingFrame();

	// BrnFlaptRenderer.h:115
	void RenderMesh(const Mesh *, const FlaptFile *);

	// BrnFlaptRenderer.h:120
	void RenderTextField(const CgsGraphics::TextObject *);

	// BrnFlaptRenderer.h:125
	void PushTransform(const Im2dTransform &);

	// BrnFlaptRenderer.h:129
	void PopTransform();

	// BrnFlaptRenderer.h:133
	void StartDrawingMask();

	// BrnFlaptRenderer.h:137
	void StopDrawingMask();

	// BrnFlaptRenderer.h:141
	void PopMask();

	// BrnFlaptRenderer.h:146
	void SetSpecialTextureShaderProgram(int32_t);

	// BrnFlaptRenderer.h:149
	const CgsGui::FontCollection * GetFonts() const;

private:
	// BrnFlaptRenderer.h:185
	void RenderMask(const Mesh *, const FlaptFile *, const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:190
	void SetTexture(const FlaptFile::GuiTexture *);

	// BrnFlaptRenderer.h:195
	void SetBlendState(const BlendState *);

	// BrnFlaptRenderer.h:200
	void SetShader(int32_t);

	// BrnFlaptRenderer.h:203
	bool IsRenderingMask() const;

}

