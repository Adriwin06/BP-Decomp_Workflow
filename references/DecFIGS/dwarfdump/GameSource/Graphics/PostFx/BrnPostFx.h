// BrnPostFx.h:59
using rw::graphics::postfx;

// BrnPostFx.h:64
struct BrnPostFx {
private:
	// BrnPostFx.h:204
	BrnPostFxShader mPostFxShader;

	// BrnPostFx.h:205
	rw::IResourceAllocator * mpAllocator;

	// BrnPostFx.h:207
	extern const uint32_t knPostFxMaxLayerCount = 16;

	// BrnPostFx.h:208
	extern const uint32_t knPostFxBufferSize = 4194304;

	// BrnPostFx.h:209
	extern const uint32_t knPostFxBufferAlignment = 128;

	// BrnPostFx.h:210
	extern const uint32_t knPostFxNumTintBuffers = 2;

	// BrnPostFx.h:212
	uint32_t mnActiveLayerBitMask;

	// BrnPostFx.h:213
	uint32_t mnActiveLayerCount;

	// BrnPostFx.h:214
	uint32_t m_enabledFx;

	// BrnPostFx.h:216
	rw::graphics::postfx::Vignette::State m_vignetteState;

	// BrnPostFx.h:217
	rw::graphics::postfx::DepthOfField::State m_dofState;

	// BrnPostFx.h:218
	rw::graphics::postfx::B4Blur::State m_b4blurState;

	// BrnPostFx.h:220
	MotionBlurState mMotionBlurState;

	// BrnPostFx.h:223
	RenderTarget * m_deviceRt;

	// BrnPostFx.h:224
	RenderTarget * m_mainRt;

	// BrnPostFx.h:225
	RenderTarget * m_renderTarget;

	// BrnPostFx.h:227
	RenderTarget * m_frameRt;

	// BrnPostFx.h:230
	RenderTarget * m_bloomDsRt;

	// BrnPostFx.h:231
	RenderTarget * m_depthOfFieldRt;

	// BrnPostFx.h:233
	DepthOfField * m_pfxDof;

	// BrnPostFx.h:234
	Vignette * m_pfxVignette;

	// BrnPostFx.h:235
	rw::graphics::postfx::Tint *[2] m_pfxTint;

	// BrnPostFx.h:236
	B4Blur * m_pfxB4Blur;

	// BrnPostFx.h:238
	rw::graphics::postfx::ColourCube *[5] m_colourCubes;

	// BrnPostFx.h:239
	float[5] m_tintFactors;

	// BrnPostFx.h:240
	bool m_processTint;

	// BrnPostFx.h:241
	uint32_t m_numCubesToBlend;

	// BrnPostFx.h:242
	uint32_t m_currentTintBuffer;

	// BrnPostFx.h:244
	Job m_blendJob;

	// BrnPostFx.h:246
	extern BrnPostFx msPostFx;

	// BrnPostFx.h:249
	BrnPostFxBloomData mBloomData;

	// BrnPostFx.h:250
	BrnPostFxBloom mBloom;

public:
	// BrnPostFx.h:79
	BrnPostFx();

	// BrnPostFx.h:83
	BrnPostFx & GetInstance();

	// BrnPostFx.h:89
	void SetFrameTarget(RenderTargetState *);

	// BrnPostFx.h:94
	void Construct(rw::IResourceAllocator *);

	// BrnPostFx.h:98
	void Destruct();

	// BrnPostFx.h:102
	void Clear();

	// BrnPostFx.h:117
	void Render(BrnRendererMemory &, RenderTarget *, RenderTarget *, Vector4, bool8_t, float32_t, float32_t, float32_t, float32_t, renderengine::Texture *);

	// BrnPostFx.h:120
	void BeginTintBlend();

	// BrnPostFx.h:123
	void EndTintBlend();

	// BrnPostFx.h:128
	void SetDepthOfField(const bool &);

	// BrnPostFx.h:132
	void SetBloom(const bool &);

	// BrnPostFx.h:136
	void SetVignette(const bool &);

	// BrnPostFx.h:140
	void SetTint(const bool &);

	// BrnPostFx.h:144
	void SetB4Blur(const bool &);

	// BrnPostFx.h:148
	void SetTintBlendNumber(const int &);

	// BrnPostFx.h:153
	void SetTintBlendFactor(int, float);

	// BrnPostFx.h:158
	void SetColourCube(int, rw::graphics::postfx::ColourCube *);

	// BrnPostFx.h:161
	bool IsDepthOfField();

	// BrnPostFx.h:164
	bool IsBloom();

	// BrnPostFx.h:167
	bool IsVignette();

	// BrnPostFx.h:170
	int IsTint();

	// BrnPostFx.h:173
	bool IsB4Blur();

	// BrnPostFx.h:176
	Vignette * GetVignette();

	// BrnPostFx.h:179
	BrnPostFxBloomData * GetBloom();

	// BrnPostFx.h:182
	DepthOfField * GetDepthOfField();

	// BrnPostFx.h:185
	rw::graphics::postfx::Tint * GetTint();

	// BrnPostFx.h:188
	B4Blur * GetB4Blur();

	// BrnPostFx.h:191
	rw::graphics::postfx::Vignette::State * GetVignetteState();

	// BrnPostFx.h:194
	rw::graphics::postfx::DepthOfField::State * GetDofState();

	// BrnPostFx.h:197
	rw::graphics::postfx::B4Blur::State * GetB4BlurState();

	// BrnPostFx.h:200
	MotionBlurState & GetMotionBlurState();

private:
	// BrnPostFx.h:259
	void PrepareDownSampleBuffers(BrnRendererMemory &, RenderTarget *, float32_t);

}

// BrnPostFx.h:210
extern const uint32_t knPostFxNumTintBuffers = 2;

// BrnPostFx.h:246
extern BrnPostFx msPostFx;

