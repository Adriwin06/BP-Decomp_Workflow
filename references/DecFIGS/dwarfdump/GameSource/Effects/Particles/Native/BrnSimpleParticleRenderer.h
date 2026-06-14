// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// Declaration
		struct BrnSimpleParticleArray {
			// BrnSimpleParticleRenderer.h:286
			struct CB4ParticleBank {
				// BrnSimpleParticleRenderer.h:342
				CB4Particle * mpaParticles;

				// BrnSimpleParticleRenderer.h:343
				uint32_t muNumParticles;

				// BrnSimpleParticleRenderer.h:344
				uint32_t muNextParticle;

				// BrnSimpleParticleRenderer.h:345
				float32_t mrLastSpawnTime;

			public:
				// BrnSimpleParticleRenderer.h:294
				uint32_t Construct(HeapMalloc *, uint32_t);

				// BrnSimpleParticleRenderer.h:297
				void Destruct();

				// BrnSimpleParticleRenderer.h:302
				void Prepare(BrnParticle::Native::BrnSimpleParticleArray *);

				// BrnSimpleParticleRenderer.h:305
				void Release();

			}

		}

	}

}

// BrnSimpleParticleRenderer.h:78
struct BrnParticle::Native::CB4ParticleArrayStandardParams {
	// BrnSimpleParticleRenderer.h:81
	const RwChar * mpacTextureName;

	// ParticleBlend.h:23
	typedef AttribSys::Enums::ParticleBlend::ParticleBlend EParticleBlend;

	// BrnSimpleParticleRenderer.h:82
	CB4ParticleArrayStandardParams::EParticleBlend meBlendMode;

	// BrnSimpleParticleRenderer.h:84
	float32_t mrLifeTime;

	// BrnSimpleParticleRenderer.h:85
	float32_t mrMidTime;

	// BrnSimpleParticleRenderer.h:87
	RwRGBA mStartColour;

	// BrnSimpleParticleRenderer.h:88
	RwRGBA mMidColour;

	// BrnSimpleParticleRenderer.h:89
	RwRGBA mEndColour;

	// BrnSimpleParticleRenderer.h:91
	float32_t mrStartSize;

	// BrnSimpleParticleRenderer.h:92
	float32_t mrMidSize;

	// BrnSimpleParticleRenderer.h:93
	float32_t mrEndSize;

	// BrnSimpleParticleRenderer.h:95
	float32_t mrNearClip;

	// BrnSimpleParticleRenderer.h:96
	float32_t mrFarClip;

	// BrnSimpleParticleRenderer.h:97
	float32_t mrNearFade;

	// BrnSimpleParticleRenderer.h:98
	float32_t mrFarFade;

	// BrnSimpleParticleRenderer.h:100
	float32_t mrGravity;

	// BrnSimpleParticleRenderer.h:101
	Vector2 mLightingMinMax;

	// BrnSimpleParticleRenderer.h:104
	float32_t mrMaxScreenSize;

	// BrnSimpleParticleRenderer.h:107
	float32_t mrRotationSpeedMin;

	// BrnSimpleParticleRenderer.h:108
	float32_t mrRotationSpeedMax;

	// BrnSimpleParticleRenderer.h:111
	float32_t mrDragInitialVelocityScale;

	// BrnSimpleParticleRenderer.h:112
	float32_t mrDragTerminalVelocityScale;

	// BrnSimpleParticleRenderer.h:113
	float32_t mrDragDuration;

	// BrnSimpleParticleRenderer.h:114
	bool mbUseDrag;

	// BrnSimpleParticleRenderer.h:117
	uint32_t muTilesWide;

	// BrnSimpleParticleRenderer.h:118
	uint32_t muTilesHigh;

}

// BrnSimpleParticleRenderer.h:127
struct BrnParticle::Native::SimpleParticleBatch : public EffectsVertexBufferBatch {
	// NativeParticleType.h:33
	typedef AttribSys::Enums::NativeParticleType::NativeParticleType ENativeParticleType;

	// BrnSimpleParticleRenderer.h:130
	SimpleParticleBatch::ENativeParticleType meParticleType;

	// BrnSimpleParticleRenderer.h:131
	CB4ParticleArrayStandardParams::EParticleBlend meBlendMode;

}

// BrnSimpleParticleRenderer.h:136
struct BrnParticle::Native::SimpleParticleBatchArray : public Array<BrnParticle::Native::SimpleParticleBatch,13u> {
private:
	// BrnSimpleParticleRenderer.h:160
	uint32_t muPreLionCount;

public:
	// BrnSimpleParticleRenderer.h:140
	void Clear();

	// BrnSimpleParticleRenderer.h:147
	void SetPreLionCount();

	// BrnSimpleParticleRenderer.h:153
	uint32_t GetPreLionCount() const;

}

// BrnSimpleParticleRenderer.h:168
struct BrnParticle::Native::CB4Particle {
	// BrnSimpleParticleRenderer.h:171
	Vector3Plus mPositionTime;

	// BrnSimpleParticleRenderer.h:172
	Vector3Plus mVelocityRotation;

	// BrnSimpleParticleRenderer.h:173
	Vector4 mScaleAlpha;

}

// BrnSimpleParticleRenderer.h:181
struct BrnParticle::Native::CB4ParticleArrayXenon {
	// BrnSimpleParticleRenderer.h:185
	Vector4 mStartColour;

	// BrnSimpleParticleRenderer.h:186
	Vector4 mMidColour;

	// BrnSimpleParticleRenderer.h:187
	Vector4 mEndColour;

	// BrnSimpleParticleRenderer.h:191
	Vector3 mAcceleration;

	// BrnSimpleParticleRenderer.h:194
	float32_t mrLifeTime;

	// BrnSimpleParticleRenderer.h:195
	float32_t mrMidTime;

	// BrnSimpleParticleRenderer.h:198
	float32_t mrNearFade;

	// BrnSimpleParticleRenderer.h:199
	float32_t mrFarFade;

	// BrnSimpleParticleRenderer.h:200
	float32_t mrNearClip;

	// BrnSimpleParticleRenderer.h:201
	float32_t mrFarClip;

	// BrnSimpleParticleRenderer.h:205
	Vector4 mSizeParams;

}

// BrnSimpleParticleRenderer.h:218
struct BrnParticle::Native::BrnSimpleParticleArray {
	// BrnSimpleParticleRenderer.h:348
	bool mbIsReady;

	// BrnSimpleParticleRenderer.h:350
	BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank mBankRegular;

	// BrnSimpleParticleRenderer.h:351
	BrnParticle::Native::BrnSimpleParticleArray::CB4ParticleBank mBankCrash;

	// BrnSimpleParticleRenderer.h:353
	CB4ParticleArrayStandardParams * mpStandardParams;

	// BrnSimpleParticleRenderer.h:354
	CB4ParticleArrayXenon mParticleData;

private:
	// BrnSimpleParticleRenderer.h:372
	extern SafeResourceHandle<renderengine::Texture>[13] maTextures;

	// BrnSimpleParticleRenderer.h:373
	extern CB4ParticleArrayStandardParams[13] maStandardParams;

public:
	// BrnSimpleParticleRenderer.h:226
	void Construct(HeapMalloc *, SimpleParticleBatch::ENativeParticleType);

	// BrnSimpleParticleRenderer.h:229
	void Destruct();

	// BrnSimpleParticleRenderer.h:232
	bool Prepare();

	// BrnSimpleParticleRenderer.h:235
	void Release();

	// BrnSimpleParticleRenderer.h:240
	void UpdateParams(nativeparticleparams &);

	// BrnSimpleParticleRenderer.h:251
	bool SpawnParticle(Vector3, Vector3, float32_t, float32_t, float32_t, bool, float32_t);

	// BrnSimpleParticleRenderer.h:258
	void AcquireTexture(uint32_t, ResourceHandle, SimpleParticleBatch::ENativeParticleType);

	// BrnSimpleParticleRenderer.h:278
	CB4ParticleArrayStandardParams * GetStandardParams(SimpleParticleBatch::ENativeParticleType);

private:
	// BrnSimpleParticleRenderer.h:361
	void Initialize();

	// BrnSimpleParticleRenderer.h:366
	renderengine::Texture * GetTexture(SimpleParticleBatch::ENativeParticleType);

}

// BrnSimpleParticleRenderer.h:391
struct BrnParticle::Native::BrnSimpleParticleRenderer {
private:
	// BrnSimpleParticleRenderer.h:418
	BrnGraphics::Im3dSmokeRenderer * mpRenderer;

	// BrnSimpleParticleRenderer.h:420
	BlendState * mpStandardBlend;

	// BrnSimpleParticleRenderer.h:421
	BlendState * mpAdditiveBlend;

	// BrnSimpleParticleRenderer.h:422
	BlendState * mpSubtractiveBlend;

public:
	// BrnSimpleParticleRenderer.h:397
	void Construct(HeapMalloc *, BrnGraphics::Im3dSmokeRenderer *);

	// BrnSimpleParticleRenderer.h:400
	void Destruct();

	// BrnSimpleParticleRenderer.h:413
	void Dispatch(renderengine::VertexBuffer *, const SimpleParticleBatchArray &, uint32_t, uint32_t, CgsRenderTarget *, float32_t, float32_t, bool8_t);

}

// BrnSimpleParticleRenderer.h:372
extern SafeResourceHandle<renderengine::Texture>[13] maTextures;

// BrnSimpleParticleRenderer.h:373
extern CB4ParticleArrayStandardParams[13] maStandardParams;

