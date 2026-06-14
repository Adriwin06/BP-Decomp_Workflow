// ParticleRender.h:46
struct iParticleRender {
public:
	// ParticleRender.h:59
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// ParticleRender.h:71
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cVector *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// ParticleRender.h:73
	void MeshRegister(cParticleMaterial *, char *, int);

	// ParticleRender.h:74
	void MeshUnRegister(cParticleMaterial *, int);

	// ParticleRender.h:77
	void TextureRegister(cParticleMaterial *, char *);

	// ParticleRender.h:80
	void TextureUnRegister(cParticleMaterial *);

	// ParticleRender.h:83
	void RenderGroupBegin(const cParticleMaterial &);

	// ParticleRender.h:86
	void RenderGroupEnd();

	// ParticleRender.h:91
	void RenderGroupBeginLite(const cParticleMaterial &);

	// ParticleRender.h:94
	void RenderGroupEndLite();

	// ParticleRender.h:106
	void BeginRendering(float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, TextureState *);

	// ParticleRender.h:109
	void EndRendering();

	// ParticleRender.h:112
	bool IsVisible(const cVector &, cParticleEmitter *, U32);

	// ParticleRender.h:115
	bool IsVisible(const cVector &, FP32, U32);

	// ParticleRender.h:118
	cMatrix GetCameraMatrix();

	// ParticleRender.h:121
	const rw::math::vpu::Matrix44 & GetPackedFrustumLrtb() const;

	// ParticleRender.h:123
	U32 LightRegister(U32, FP32, cLionLightBehaviour *, const cMatrix &);

	// ParticleRender.h:124
	void LightUnRegister(U32, U32);

	// ParticleRender.h:125
	void LightUpdate(U32, U32, cLionLightBehaviour *, const cMatrix &);

	// ParticleRender.h:131
	uint32_t GetVertexStride(const cParticleMaterial &);

}

// ParticleRender.h:137
struct cParticleRender {
private:
	// ParticleRender.h:249
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// ParticleRender.h:250
	iParticleRender * mpRenderer;

	// ParticleRender.h:251
	U32 mParticlesRenderedCount;

	// ParticleRender.h:252
	U32 mFogEnabledFlag;

	// ParticleRender.h:253
	FP32 mFogNear;

	// ParticleRender.h:254
	FP32 mFogFar;

	// ParticleRender.h:255
	cVector mCamPos;

	// ParticleRender.h:256
	cVector mCamDir;

	// ParticleRender.h:257
	FP32[8] mLodDistances;

	// ParticleRender.h:258
	FP32[256] mFogAlphas;

public:
	// ParticleRender.h:165
	cParticleRender & Instance();

	// ParticleRender.h:172
	~cParticleRender();

	// ParticleRender.h:174
	void AppInit(EA::Allocator::ITaggedAllocator *, iParticleRender *);

	// ParticleRender.h:175
	void AppDeInit();

	// ParticleRender.h:176
	void GameInit();

	// ParticleRender.h:177
	void GameDeInit();

	// ParticleRender.h:184
	void Render(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitterManager &, const cTime &);

	// ParticleRender.h:198
	void Dispatch(renderengine::VertexBuffer *, const LionBatchArray &, float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, TextureState *);

	// ParticleRender.h:200
	void FogEnable();

	// ParticleRender.h:201
	void FogDisable();

	// ParticleRender.h:202
	void FogSetNear(FP32);

	// ParticleRender.h:203
	void FogSetFar(FP32);

	// ParticleRender.h:204
	void FogApply(RenderedParticle *, const cMatrix **, U32);

	// ParticleRender.h:205
	void FogSetAlpha(U32, FP32);

	// ParticleRender.h:207
	void SetLodDistance(U32, FP32);

	// ParticleRender.h:215
	FP32 GetLodDistance(U32);

	// ParticleRender.h:217
	iParticleRender * GetpRenderer();

	// ParticleRender.h:224
	void Update(const cTime &);

private:
	// ParticleRender.h:239
	void EmitterRender(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitter *, const cTime &);

	// ParticleRender.h:247
	void EmitterCubeRender(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitter *, const cTime &);

}

// ParticleRender.h:46
struct iParticleRender {
public:
	// ParticleRender.h:59
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cMatrix *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// ParticleRender.h:71
	void Render(EffectsVertexBufferIterator &, RenderedParticle *, const cVector *, U32, U32, const cParticleEmitter *, const cLionFog *, const cTime &);

	// ParticleRender.h:73
	void MeshRegister(cParticleMaterial *, char *, int);

	// ParticleRender.h:74
	void MeshUnRegister(cParticleMaterial *, int);

	// ParticleRender.h:77
	void TextureRegister(cParticleMaterial *, char *);

	// ParticleRender.h:80
	void TextureUnRegister(cParticleMaterial *);

	// ParticleRender.h:83
	void RenderGroupBegin(const cParticleMaterial &);

	// ParticleRender.h:86
	void RenderGroupEnd();

	// ParticleRender.h:91
	void RenderGroupBeginLite(const cParticleMaterial &);

	// ParticleRender.h:94
	void RenderGroupEndLite();

	// ParticleRender.h:106
	void BeginRendering(float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, renderengine::TextureState *);

	// ParticleRender.h:109
	void EndRendering();

	// ParticleRender.h:112
	bool IsVisible(const cVector &, cParticleEmitter *, U32);

	// ParticleRender.h:115
	bool IsVisible(const cVector &, FP32, U32);

	// ParticleRender.h:118
	cMatrix GetCameraMatrix();

	// ParticleRender.h:121
	const rw::math::vpu::Matrix44 & GetPackedFrustumLrtb() const;

	// ParticleRender.h:123
	U32 LightRegister(U32, FP32, cLionLightBehaviour *, const cMatrix &);

	// ParticleRender.h:124
	void LightUnRegister(U32, U32);

	// ParticleRender.h:125
	void LightUpdate(U32, U32, cLionLightBehaviour *, const cMatrix &);

	// ParticleRender.h:131
	uint32_t GetVertexStride(const cParticleMaterial &);

}

// ParticleRender.h:137
struct cParticleRender {
private:
	// ParticleRender.h:249
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// ParticleRender.h:250
	iParticleRender * mpRenderer;

	// ParticleRender.h:251
	U32 mParticlesRenderedCount;

	// ParticleRender.h:252
	U32 mFogEnabledFlag;

	// ParticleRender.h:253
	FP32 mFogNear;

	// ParticleRender.h:254
	FP32 mFogFar;

	// ParticleRender.h:255
	cVector mCamPos;

	// ParticleRender.h:256
	cVector mCamDir;

	// ParticleRender.h:257
	FP32[8] mLodDistances;

	// ParticleRender.h:258
	FP32[256] mFogAlphas;

public:
	// ParticleRender.h:165
	cParticleRender & Instance();

	// ParticleRender.h:172
	~cParticleRender();

	// ParticleRender.h:174
	void AppInit(EA::Allocator::ITaggedAllocator *, iParticleRender *);

	// ParticleRender.h:175
	void AppDeInit();

	// ParticleRender.h:176
	void GameInit();

	// ParticleRender.h:177
	void GameDeInit();

	// ParticleRender.h:184
	void Render(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitterManager &, const cTime &);

	// ParticleRender.h:198
	void Dispatch(renderengine::VertexBuffer *, const LionBatchArray &, float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, renderengine::TextureState *);

	// ParticleRender.h:200
	void FogEnable();

	// ParticleRender.h:201
	void FogDisable();

	// ParticleRender.h:202
	void FogSetNear(FP32);

	// ParticleRender.h:203
	void FogSetFar(FP32);

	// ParticleRender.h:204
	void FogApply(RenderedParticle *, const cMatrix **, U32);

	// ParticleRender.h:205
	void FogSetAlpha(U32, FP32);

	// ParticleRender.h:207
	void SetLodDistance(U32, FP32);

	// ParticleRender.h:215
	FP32 GetLodDistance(U32);

	// ParticleRender.h:217
	iParticleRender * GetpRenderer();

	// ParticleRender.h:224
	void Update(const cTime &);

private:
	// ParticleRender.h:239
	void EmitterRender(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitter *, const cTime &);

	// ParticleRender.h:247
	void EmitterCubeRender(EffectsVertexBufferLocked &, LionBatchArray &, cParticleEmitter *, const cTime &);

}

