// BrnLionBlendRenderer.h:38
struct BrnGraphics::LionBlendRenderer {
private:
	// BrnLionBlendRenderer.h:140
	BrnGraphics::Im3dBlend mRenderer;

	// BrnLionBlendRenderer.h:142
	cMatrix mCameraTransform;

	// BrnLionBlendRenderer.h:143
	Matrix44Affine mBackMat;

	// BrnLionBlendRenderer.h:144
	Matrix44Affine mViewMat;

	// BrnLionBlendRenderer.h:145
	Matrix44 mViewProjection;

public:
	// BrnLionBlendRenderer.h:41
	void Construct(rw::IResourceAllocator *);

	// BrnLionBlendRenderer.h:53
	void BeginRendering(Matrix44, float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, TextureState *);

	// BrnLionBlendRenderer.h:55
	void EndRendering();

	// BrnLionBlendRenderer.h:74
	void SetCameraData(Matrix44Affine, Matrix44Affine, Matrix44);

	// BrnLionBlendRenderer.h:76
	const CgsGraphics::ImRendererBase::StateLibrary & GetStateLibrary();

	// BrnLionBlendRenderer.h:81
	void SetState(const DepthStencilState *);

	// BrnLionBlendRenderer.h:86
	void SetState(const BlendState *);

	// BrnLionBlendRenderer.h:99
	void RenderSprites(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, const cParticleEmitter *, const cTime &);

	// BrnLionBlendRenderer.h:109
	void RenderQuads(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, const cParticleEmitter *, const cTime &);

	// BrnLionBlendRenderer.h:119
	void RenderTilts(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, const cParticleEmitter *, const cTime &);

	// BrnLionBlendRenderer.h:122
	uint32_t GetVertexStride() const;

private:
	// BrnLionBlendRenderer.h:130
	void MatrixConvert(const cMatrix &, Matrix44Affine &);

	// BrnLionBlendRenderer.h:138
	void BuildCameraOrientatedLocator(cMatrix &, const cParticleEmitter *, const cMatrix &, const cTime &);

}

