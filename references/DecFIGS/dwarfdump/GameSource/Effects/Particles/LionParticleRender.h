// LionParticleRender.h:66
struct LionBatchArray : public Array<LionBatch,512u> {
}

// LionParticleRender.h:58
struct LionBatch : public EffectsVertexBufferBatch {
	// LionParticleRender.h:61
	const cParticleMaterial * mpMaterial;

}

// LionParticleRender.h:81
struct BrnParticle::LionParticleRender : public iParticleRender {
private:
	// LionParticleRender.h:212
	char ** mppTexturePaths;

	// LionParticleRender.h:213
	U32 mTexturePathCount;

	// LionParticleRender.h:214
	HeapMalloc * mpHeapMalloc;

	// LionParticleRender.h:215
	SafeResourceHandle<BrnParticle::TextureNameMap> mTextureNameMap;

	// LionParticleRender.h:221
	cMatrix mCameraTransform;

	// LionParticleRender.h:222
	Matrix44Affine mBackMat;

	// LionParticleRender.h:223
	Matrix44Affine mViewMat;

	// LionParticleRender.h:224
	Matrix44 mViewProjection;

	// LionParticleRender.h:225
	Matrix44 mPackedFrustumLrtb;

	// LionParticleRender.h:232
	BrnGraphics::LionBlendRenderer * mpRenderer;

	// LionParticleRender.h:235
	BrnGraphics::LionBlendRenderer * mpCurrentRenderer;

public:
	// LionParticleRender.h:84
	void LionParticleRender();

	// LionParticleRender.h:86
	void ~LionParticleRender();

	// LionParticleRender.h:102
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// LionParticleRender.h:114
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cVector *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// LionParticleRender.h:116
	void TextureRegister(cParticleMaterial *, char *);

	// LionParticleRender.h:117
	void TextureUnRegister(cParticleMaterial *);

	// LionParticleRender.h:122
	void RenderGroupBeginLite(const cParticleMaterial &);

	// LionParticleRender.h:125
	void RenderGroupEndLite();

	// LionParticleRender.h:137
	void BeginRendering(float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, TextureState *);

	// LionParticleRender.h:140
	void EndRendering();

	// LionParticleRender.h:145
	void RenderGroupBegin(const cParticleMaterial &);

	// LionParticleRender.h:148
	void RenderGroupEnd();

	// LionParticleRender.h:150
	bool IsVisible(const cVector &, FP32, U32);

	// LionParticleRender.h:151
	cMatrix GetCameraMatrix();

	// LionParticleRender.h:154
	const rw::math::vpu::Matrix44 & GetPackedFrustumLrtb() const;

	// LionParticleRender.h:167
	void Begin(Matrix44Affine, Matrix44Affine, Matrix44, Matrix44);

	// LionParticleRender.h:169
	void End();

	// LionParticleRender.h:177
	void SetCameraData(Matrix44Affine, Matrix44Affine, Matrix44, Matrix44);

	// LionParticleRender.h:179
	void SetRenderer(cParticleMaterial::eLionMaterialShaderType, BrnGraphics::LionBlendRenderer *);

	// LionParticleRender.h:181
	void SetAllocator(HeapMalloc *);

	// LionParticleRender.h:183
	void Setup();

	// LionParticleRender.h:186
	void SetTextureNameMap(SafeResourceHandle<BrnParticle::TextureNameMap>);

	// LionParticleRender.h:188
	void AcquireTexture(uint32_t, SafeResourceHandle<renderengine::Texture>);

	// LionParticleRender.h:193
	uint32_t GetVertexStride(const cParticleMaterial &);

private:
	// LionParticleRender.h:197
	void SetMaterial(const cParticleMaterial *);

	// LionParticleRender.h:200
	uint32_t HashMaterial(const cParticleMaterial *);

	// LionParticleRender.h:201
	uint32_t GetMaterialHandle(uint32_t);

	// LionParticleRender.h:202
	uint32_t CreateInternalMaterial(const cParticleMaterial *);

	// LionParticleRender.h:204
	renderengine::Texture * FindTexture(uint32_t) const;

}

// _built-in_
namespace :: {
	// LionParticleRender.h:64
	const uint32_t KU_MAX_LION_DISPATCH_BATCHES = 512;

}

// LionParticleRender.h:81
struct BrnParticle::LionParticleRender : public iParticleRender {
private:
	// LionParticleRender.h:212
	char ** mppTexturePaths;

	// LionParticleRender.h:213
	U32 mTexturePathCount;

	// LionParticleRender.h:214
	HeapMalloc * mpHeapMalloc;

	// LionParticleRender.h:215
	SafeResourceHandle<BrnParticle::TextureNameMap> mTextureNameMap;

	// LionParticleRender.h:221
	cMatrix mCameraTransform;

	// LionParticleRender.h:222
	Matrix44Affine mBackMat;

	// LionParticleRender.h:223
	Matrix44Affine mViewMat;

	// LionParticleRender.h:224
	Matrix44 mViewProjection;

	// LionParticleRender.h:225
	Matrix44 mPackedFrustumLrtb;

	// LionParticleRender.h:232
	BrnGraphics::LionBlendRenderer * mpRenderer;

	// LionParticleRender.h:235
	BrnGraphics::LionBlendRenderer * mpCurrentRenderer;

public:
	// LionParticleRender.h:84
	void LionParticleRender();

	// LionParticleRender.h:86
	void ~LionParticleRender();

	// LionParticleRender.h:102
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// LionParticleRender.h:114
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cVector *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// LionParticleRender.h:116
	void TextureRegister(cParticleMaterial *, char *);

	// LionParticleRender.h:117
	void TextureUnRegister(cParticleMaterial *);

	// LionParticleRender.h:122
	void RenderGroupBeginLite(const cParticleMaterial &);

	// LionParticleRender.h:125
	void RenderGroupEndLite();

	// LionParticleRender.h:137
	void BeginRendering(float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, renderengine::TextureState *);

	// LionParticleRender.h:140
	void EndRendering();

	// LionParticleRender.h:145
	void RenderGroupBegin(const cParticleMaterial &);

	// LionParticleRender.h:148
	void RenderGroupEnd();

	// LionParticleRender.h:150
	bool IsVisible(const cVector &, FP32, U32);

	// LionParticleRender.h:151
	cMatrix GetCameraMatrix();

	// LionParticleRender.h:154
	const rw::math::vpu::Matrix44 & GetPackedFrustumLrtb() const;

	// LionParticleRender.h:167
	void Begin(Matrix44Affine, Matrix44Affine, Matrix44, Matrix44);

	// LionParticleRender.h:169
	void End();

	// LionParticleRender.h:177
	void SetCameraData(Matrix44Affine, Matrix44Affine, Matrix44, Matrix44);

	// LionParticleRender.h:179
	void SetRenderer(cParticleMaterial::eLionMaterialShaderType, BrnGraphics::LionBlendRenderer *);

	// LionParticleRender.h:181
	void SetAllocator(HeapMalloc *);

	// LionParticleRender.h:183
	void Setup();

	// LionParticleRender.h:186
	void SetTextureNameMap(SafeResourceHandle<BrnParticle::TextureNameMap>);

	// LionParticleRender.h:188
	void AcquireTexture(uint32_t, CgsResource::SafeResourceHandle<renderengine::Texture>);

	// LionParticleRender.h:193
	uint32_t GetVertexStride(const cParticleMaterial &);

private:
	// LionParticleRender.h:197
	void SetMaterial(const cParticleMaterial *);

	// LionParticleRender.h:200
	uint32_t HashMaterial(const cParticleMaterial *);

	// LionParticleRender.h:201
	uint32_t GetMaterialHandle(uint32_t);

	// LionParticleRender.h:202
	uint32_t CreateInternalMaterial(const cParticleMaterial *);

	// LionParticleRender.h:204
	renderengine::Texture * FindTexture(uint32_t) const;

}

