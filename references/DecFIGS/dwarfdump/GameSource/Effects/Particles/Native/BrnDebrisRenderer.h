// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnDebrisRenderer.h:67
		enum EDebrisArrayID {
			eDebrisArray_Coloured = 0,
			eDebrisArray_Shiny = 1,
			eDebrisArray_Dark = 2,
			eDebrisArray_HighDetail = 3,
			eDebrisArray_Glass = 4,
			eDebrisArray_Max = 5,
		}

	}

}

// BrnDebrisRenderer.h:79
struct BrnParticle::Native::BrnDebris {
	// BrnDebrisRenderer.h:82
	Vector3Plus mAxisPlusAngle;

	// BrnDebrisRenderer.h:83
	Vector3Plus mPositionPlusRotVel;

	// BrnDebrisRenderer.h:84
	Vector3Plus mVelocityPlusScale;

	// BrnDebrisRenderer.h:85
	Vector4 mDiffuseColour;

	// BrnDebrisRenderer.h:87
	uint8_t muBounceCount;

}

// BrnDebrisRenderer.h:92
struct BrnParticle::Native::BrnDebrisArrayParams {
	// BrnDebrisRenderer.h:95
	const char * mpMeshCollectionName;

	// BrnDebrisRenderer.h:96
	int32_t mnNumParticles;

	// BrnDebrisRenderer.h:97
	float32_t mfSpecularPower;

	// BrnDebrisRenderer.h:98
	float32_t mfSpecularIntensity;

	// BrnDebrisRenderer.h:99
	float32_t mfDiffuseFactor;

	// BrnDebrisRenderer.h:100
	float32_t mfAmbientFactor;

	// BrnDebrisRenderer.h:101
	Vector4 mColour;

	// BrnDebrisRenderer.h:102
	Vector3 mvBounciness;

	// BrnDebrisRenderer.h:103
	float32_t mfFadeInTime;

	// BrnDebrisRenderer.h:104
	float32_t mfDragResistance;

}

// BrnDebrisRenderer.h:115
struct BrnParticle::Native::BrnDebrisArray {
private:
	// BrnDebrisRenderer.h:200
	const BrnDebrisArrayParams * mpParams;

	// Unknown accessibility
	// BrnDebrisRenderer.h:111
	typedef BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32> DebrisBucket;

	// BrnDebrisRenderer.h:201
	BrnDebrisArray::DebrisBucket * mpBuckets;

	// BrnDebrisRenderer.h:202
	FXBucketManager * mpBucketManager;

	// BrnDebrisRenderer.h:203
	uint32_t muNumBuckets;

	// BrnDebrisRenderer.h:205
	SafeResourceHandle<renderengine::Texture> mTexture;

	// BrnDebrisRenderer.h:206
	SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> mMeshCollection;

public:
	// BrnDebrisRenderer.h:121
	void Construct(FXBucketManager *, BrnParticle::Native::EDebrisArrayID);

	// BrnDebrisRenderer.h:124
	void Destruct();

	// BrnDebrisRenderer.h:127
	bool Prepare();

	// BrnDebrisRenderer.h:130
	void Release();

	// BrnDebrisRenderer.h:140
	void SpawnDebris(Vector3, Vector3, Vector3, Vector4, float32_t, float32_t, float32_t);

	// BrnDebrisRenderer.h:144
	void AcquireTexture(SafeResourceHandle<renderengine::Texture>);

	// BrnDebrisRenderer.h:151
	void AcquireMeshCollection(SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>);

	// BrnDebrisRenderer.h:157
	const char * GetTextureName() const;

	// BrnDebrisRenderer.h:165
	void FreeExpiredBuckets(float32_t, bool);

	// BrnDebrisRenderer.h:168
	void ClearAllBuckets();

	// BrnDebrisRenderer.h:184
	const BrnDebrisArrayParams * GetParams() const;

private:
	// BrnDebrisRenderer.h:193
	BrnDebris * GetNewDebris(float32_t);

}

// BrnDebrisRenderer.h:211
struct BrnParticle::Native::BrnDebrisArrayLite {
private:
	// BrnDebrisRenderer.h:256
	BrnDebrisArray::DebrisBucket * mpBucketList;

	// BrnDebrisRenderer.h:257
	Vector3 mBounciness;

	// BrnDebrisRenderer.h:258
	float32_t mfDragResistance;

	// BrnDebrisRenderer.h:259
	bool mbCollisionEnabled;

public:
	// BrnDebrisRenderer.h:219
	bool Initialize(BrnDebrisArray *, bool);

}

// BrnDebrisRenderer.h:264
struct BrnParticle::Native::BrnDebrisRenderer {
private:
	// BrnDebrisRenderer.h:298
	BrnGraphics::Im3dTexPlusLighting * mpRenderer;

	// BrnDebrisRenderer.h:299
	BlendState * mpBlendState;

public:
	// BrnDebrisRenderer.h:271
	void Construct(rw::IResourceAllocator *, BrnGraphics::Im3dTexPlusLighting *);

	// BrnDebrisRenderer.h:274
	void Destruct();

	// BrnDebrisRenderer.h:283
	void BeginRender(Matrix44, Vector3, Vector3, Vector3, Vector3);

	// BrnDebrisRenderer.h:291
	void RenderDebrisArray(float32_t, const BrnDebrisArray *, BrnParticle::Native::EDebrisArrayID, bool);

	// BrnDebrisRenderer.h:294
	void EndRender();

}

