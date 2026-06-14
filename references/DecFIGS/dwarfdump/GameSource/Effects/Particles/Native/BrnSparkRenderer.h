// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnSparkRenderer.h:63
		enum ESparkArrayID {
			eSparkArray_GrindingWorld = 0,
			eSparkArray_GrindingRaceCars = 1,
			eSparkArray_Crashing = 2,
			eSparkArray_BodyPart_Contact = 3,
			eSparkArray_Max = 4,
		}

		struct SparkFrameData;

		struct SparkFrameDataSet;

		struct SparkBatch;

		struct BrnSpark;

		// Declaration
		struct SparkArray {
			// BrnSparkRenderer.h:257
			struct SparkBank {
				// BrnSparkRenderer.h:158
				typedef BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4> SparkBucket;

				// BrnSparkRenderer.h:289
				BrnParticle::Native::SparkArray::SparkBank::SparkBucket * mpBuckets;

				// BrnSparkRenderer.h:290
				FXBucketManager * mpBucketManager;

				// BrnSparkRenderer.h:291
				uint32_t muNumBuckets;

				// BrnSparkRenderer.h:293
				uint32_t muMaxNumSparks;

			public:
				// BrnSparkRenderer.h:264
				void Construct(FXBucketManager *, bool);

				// BrnSparkRenderer.h:268
				void Destruct();

				// BrnSparkRenderer.h:272
				void Prepare();

				// BrnSparkRenderer.h:276
				void Release();

				// BrnSparkRenderer.h:280
				BrnSpark * GetNewSpark(float32_t);

				// BrnSparkRenderer.h:286
				void FreeUnusedBuckets(float32_t, float32_t);

			}

		}

		struct SparkRenderer;

		struct TrailRenderer;

		struct TrailEmitter;

		struct TrailParams;

		struct TrailEmitterData;

		struct EmitterArray;

		struct TrailSystem;

		struct BrnDebris;

		struct BrnDebrisArrayParams;

		struct BrnDebrisArray;

		struct BrnDebrisArrayLite;

		struct BrnDebrisRenderer;

		struct CB4ParticleArrayStandardParams;

		struct SimpleParticleBatch;

		struct SimpleParticleBatchArray;

		struct CB4Particle;

		struct CB4ParticleArrayXenon;

		struct BrnSimpleParticleRenderer;

		struct BrnParticleBankSize;

		// BrnSparkRenderer.h:57
		const uint32_t knSparksMaxBlurFrames = 8;

	}

}

// BrnSparkRenderer.h:75
struct BrnParticle::Native::SparkFrameData {
	// BrnSparkRenderer.h:78
	Matrix44Affine mViewMatrix;

	// BrnSparkRenderer.h:79
	Matrix44 mProjectionMatrix;

	// BrnSparkRenderer.h:80
	float32_t mfTimeStamp;

	// BrnSparkRenderer.h:84
	float32_t mfTimeStampCopyForDebugBuildsOnly;

	// BrnSparkRenderer.h:85
	Matrix44Affine mViewMatrixCopyForDebugBuildsOnly;

public:
	// BrnSparkRenderer.h:92
	void Set(Matrix44Affine, Matrix44, float32_t);

}

// BrnSparkRenderer.h:105
struct BrnParticle::Native::SparkFrameDataSet {
private:
	// BrnSparkRenderer.h:135
	SparkFrameData[8] maFrames;

public:
	// BrnSparkRenderer.h:113
	void Reset(Matrix44Affine, Matrix44, float32_t);

	// BrnSparkRenderer.h:120
	void Update(Matrix44Affine, Matrix44, float32_t);

	// BrnSparkRenderer.h:125
	const SparkFrameData & GetFrame(uint32_t) const;

}

// BrnSparkRenderer.h:140
struct BrnParticle::Native::SparkBatch : public EffectsVertexBufferBatch {
	// BrnSparkRenderer.h:143
	BrnParticle::Native::ESparkArrayID meArrayId;

}

// BrnSparkRenderer.h:149
struct BrnParticle::Native::BrnSpark {
	// BrnSparkRenderer.h:152
	Vector4 mPosition;

	// BrnSparkRenderer.h:153
	Vector4 mVelocity;

	// BrnSparkRenderer.h:154
	float32_t mfSize;

}

// BrnSparkRenderer.h:170
struct BrnParticle::Native::SparkArray {
private:
	// BrnSparkRenderer.h:340
	Vector4[4] maColours;

	// BrnSparkRenderer.h:341
	float32_t[4] mafLifetimes;

	// BrnSparkRenderer.h:343
	BrnParticle::Native::SparkArray::SparkBank mRegularBank;

	// BrnSparkRenderer.h:344
	BrnParticle::Native::SparkArray::SparkBank mCrashBank;

	// BrnSparkRenderer.h:346
	float32_t mfGravityStrength;

	// BrnSparkRenderer.h:347
	float32_t mfBounceStrength;

	// BrnSparkRenderer.h:348
	float32_t mfMotionBlurTime;

	// BrnSparkRenderer.h:349
	float32_t mfSparkRadius;

	// BrnSparkRenderer.h:351
	float32_t mfDragInitialVelocityScale;

	// BrnSparkRenderer.h:352
	float32_t mfDragTerminalVelocityScale;

	// BrnSparkRenderer.h:353
	float32_t mfDragDuration;

	// BrnSparkRenderer.h:355
	const char * mpcSparkTextureName;

	// BrnSparkRenderer.h:359
	extern CgsResource::SafeResourceHandle<renderengine::Texture>[4] maTextures;

public:
	// BrnSparkRenderer.h:178
	void Construct(FXBucketManager *, BrnParticle::Native::ESparkArrayID);

	// BrnSparkRenderer.h:182
	void Destruct();

	// BrnSparkRenderer.h:186
	bool Prepare();

	// BrnSparkRenderer.h:190
	void Release();

	// BrnSparkRenderer.h:195
	void FreeUnusedBuckets(float32_t);

	// BrnSparkRenderer.h:204
	void SpawnSpark(Vector3, Vector3, float32_t, float32_t, float32_t, bool);

	// BrnSparkRenderer.h:210
	void AcquireTexture(CgsResource::SafeResourceHandle<renderengine::Texture>, BrnParticle::Native::ESparkArrayID);

	// BrnSparkRenderer.h:221
	renderengine::Texture * GetTexture(BrnParticle::Native::ESparkArrayID);

	// BrnSparkRenderer.h:230
	const char * GetTextureName();

	// BrnSparkRenderer.h:250
	void UpdateParams(float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, Vector4, Vector4, Vector4, Vector4, Vector4, const char *);

}

// BrnSparkRenderer.h:374
struct BrnParticle::Native::SparkRenderer {
private:
	// BrnSparkRenderer.h:407
	CgsGraphics::Im3d * mpRenderer;

public:
	// BrnSparkRenderer.h:381
	void Construct(HeapMalloc *, CgsGraphics::Im3d *);

	// BrnSparkRenderer.h:385
	void Destruct();

	// BrnSparkRenderer.h:389
	bool Prepare();

	// BrnSparkRenderer.h:393
	void Release();

	// BrnSparkRenderer.h:400
	// Declaration
	void Dispatch(Matrix44, renderengine::VertexBuffer *, const SparkBatchArray &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSparkRenderer.h:146
		typedef CgsContainers::Array<BrnParticle::Native::SparkBatch,4u> SparkBatchArray;

	}

}

// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		struct CB4ParticleArrayStandardParams;

		// BrnSparkRenderer.h:57
		const uint32_t knSparksMaxBlurFrames = 8;

	}

}

// BrnSparkRenderer.h:359
extern CgsResource::SafeResourceHandle<renderengine::Texture>[4] maTextures;

// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnSparkRenderer.h:63
		enum ESparkArrayID {
			eSparkArray_GrindingWorld = 0,
			eSparkArray_GrindingRaceCars = 1,
			eSparkArray_Crashing = 2,
			eSparkArray_BodyPart_Contact = 3,
			eSparkArray_Max = 4,
		}

		struct SparkFrameData;

		struct SparkFrameDataSet;

		struct SparkBatch;

		struct BrnSpark;

		// Declaration
		struct SparkArray {
			// BrnSparkRenderer.h:257
			struct SparkBank {
				// BrnSparkRenderer.h:158
				typedef BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4> SparkBucket;

				// BrnSparkRenderer.h:289
				BrnParticle::Native::SparkArray::SparkBank::SparkBucket * mpBuckets;

				// BrnSparkRenderer.h:290
				FXBucketManager * mpBucketManager;

				// BrnSparkRenderer.h:291
				uint32_t muNumBuckets;

				// BrnSparkRenderer.h:293
				uint32_t muMaxNumSparks;

			public:
				// BrnSparkRenderer.h:264
				void Construct(FXBucketManager *, bool);

				// BrnSparkRenderer.h:268
				void Destruct();

				// BrnSparkRenderer.h:272
				void Prepare();

				// BrnSparkRenderer.h:276
				void Release();

				// BrnSparkRenderer.h:280
				BrnSpark * GetNewSpark(float32_t);

				// BrnSparkRenderer.h:286
				void FreeUnusedBuckets(float32_t, float32_t);

			}

		}

		struct SparkRenderer;

		struct TrailRenderer;

		struct TrailEmitter;

		struct TrailParams;

		struct TrailEmitterData;

		struct EmitterArray;

		struct TrailSystem;

		struct BrnDebris;

		struct BrnDebrisArrayParams;

		struct BrnDebrisArray;

		struct BrnDebrisArrayLite;

		struct CB4ParticleArrayStandardParams;

		struct SimpleParticleBatch;

		struct SimpleParticleBatchArray;

		struct CB4Particle;

		struct CB4ParticleArrayXenon;

		// BrnSparkRenderer.h:57
		const uint32_t knSparksMaxBlurFrames = 8;

	}

}

// BrnSparkRenderer.h:374
struct BrnParticle::Native::SparkRenderer {
private:
	// BrnSparkRenderer.h:407
	CgsGraphics::Im3d * mpRenderer;

public:
	// BrnSparkRenderer.h:381
	void Construct(HeapMalloc *, CgsGraphics::Im3d *);

	// BrnSparkRenderer.h:385
	void Destruct();

	// BrnSparkRenderer.h:389
	bool Prepare();

	// BrnSparkRenderer.h:393
	void Release();

	// BrnSparkRenderer.h:400
	// Declaration
	void Dispatch() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSparkRenderer.h:146
		typedef CgsContainers::Array<BrnParticle::Native::SparkBatch,4u> SparkBatchArray;

	}

}

