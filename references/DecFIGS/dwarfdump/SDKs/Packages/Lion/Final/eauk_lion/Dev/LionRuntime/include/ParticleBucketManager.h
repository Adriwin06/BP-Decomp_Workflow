// ParticleBucketManager.h:31
struct cParticleBucketManager {
private:
	// ParticleBucketManager.h:88
	U32 mBucketCount;

	// ParticleBucketManager.h:89
	U32 mMatrixBucketCount;

	// ParticleBucketManager.h:90
	U32 mVectorBucketCount;

	// ParticleBucketManager.h:91
	U32 mVectorChunkCount;

	// ParticleBucketManager.h:92
	U32 * mpVectorBucketActiveBits;

	// ParticleBucketManager.h:93
	cParticleBucket * mpBuckets;

	// ParticleBucketManager.h:94
	cParticleBucket * mpFree;

	// ParticleBucketManager.h:95
	cParticleBucket * mpUsed;

	// ParticleBucketManager.h:96
	cMatrix * mpMatrices;

	// ParticleBucketManager.h:97
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// ParticleBucketManager.h:34
	cParticleBucketManager & Instance();

	// ParticleBucketManager.h:41
	void AppInit(EA::Allocator::ITaggedAllocator *, U32, U32);

	// ParticleBucketManager.h:42
	void AppDeInit();

	// ParticleBucketManager.h:43
	void GameInit();

	// ParticleBucketManager.h:44
	void GameDeInit();

	// ParticleBucketManager.h:45
	void Update();

	// ParticleBucketManager.h:46
	void Flush();

	// ParticleBucketManager.h:51
	cParticleBucket * AllocateBucket(U32, const cTime &, cParticleDescriptor::DynamicBucketType);

	// ParticleBucketManager.h:57
	void Free(cParticleBucket *);

	// ParticleBucketManager.h:59
	cMatrix * MatrixBucketAlloc();

	// ParticleBucketManager.h:60
	void MatrixBucketFree(cMatrix *);

	// ParticleBucketManager.h:61
	cVector * VectorBucketAlloc();

	// ParticleBucketManager.h:62
	void VectorBucketFree(cVector *);

	// ParticleBucketManager.h:64
	U32 GetParticleCount() const;

	// ParticleBucketManager.h:65
	U32 GetDynamicParticleCount() const;

	// ParticleBucketManager.h:66
	U32 GetBucketCount() const;

	// ParticleBucketManager.h:67
	U32 GetDynamicBucketCount() const;

	// ParticleBucketManager.h:68
	U32 GetUsedCount() const;

	// ParticleBucketManager.h:69
	U32 GetDynamicUsedCount() const;

	// ParticleBucketManager.h:71
	U32 GetVecBucketCount() const;

	// ParticleBucketManager.h:72
	U32 GetVecBucketUsedCount() const;

	// ParticleBucketManager.h:73
	U32 GetVecBucketUsedBitCount() const;

	// ParticleBucketManager.h:74
	U32 GetVecParticleCount() const;

	// ParticleBucketManager.h:76
	U32 GetMatBucketCount() const;

	// ParticleBucketManager.h:77
	U32 GetMatBucketUsedCount() const;

	// ParticleBucketManager.h:78
	U32 GetMatParticleCount() const;

	// ParticleBucketManager.h:80
	U32 GetVectorBucketActiveBit(U32) const;

	// ParticleBucketManager.h:81
	void SetVectorBucketActiveBit(U32, U32);

	// ParticleBucketManager.h:83
	U32 GetMatrixBucketActiveBit(U32) const;

	// ParticleBucketManager.h:84
	void SetMatrixBucketActiveBit(U32, U32);

private:
	// ParticleBucketManager.h:99
	cParticleBucket * BucketAlloc(U32, const cTime &);

}

