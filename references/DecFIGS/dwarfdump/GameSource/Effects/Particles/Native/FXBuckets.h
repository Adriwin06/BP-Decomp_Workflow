// vertexbuffer.h:27
namespace BrnParticle {
	// FXBuckets.h:58
	const float32_t kfNumberOfSecondsInTenYears;

	// FXBuckets.h:60
	const uint32_t KU_FXBUCKET_SIZE = 8192;

}

// FXBuckets.h:73
struct BrnParticle::FXBucketBase {
protected:
	// FXBuckets.h:85
	FXBucketBase * mpPreviousBucket;

	// FXBuckets.h:86
	FXBucketBase * mpNextBucket;

	// FXBuckets.h:88
	float32_t mfFinalParticleBirthTime;

	// FXBuckets.h:89
	uint16_t mu16NumberOfParticlesInBucket;

	// FXBuckets.h:90
	uint16_t mu16NextPositionInBucket;

}

// FXBuckets.h:363
struct BrnParticle::FXBucketManager {
private:
	// FXBuckets.h:464
	FXBucketBase * mpFreeList;

	// FXBuckets.h:465
	uint8_t * mpData;

	// FXBuckets.h:466
	uint32_t muNumFreeBuckets;

	// FXBuckets.h:467
	uint32_t muNumBuckets;

public:
	// FXBuckets.h:370
	void Construct(HeapMalloc *, uint32_t);

	// FXBuckets.h:409
	void FreeBucket(FXBucketBase *);

	// FXBuckets.h:445
	uint32_t GetNumFreeBuckets() const;

	// FXBuckets.h:451
	uint32_t GetNumUsedBuckets() const;

	// FXBuckets.h:457
	uint32_t GetNumBuckets() const;

}

// FXBuckets.h:109
struct BrnParticle::FXBucket<BrnParticle::Native::BrnDebris,32> : public FXBucketBase {
private:
	// FXBuckets.h:311
	extern const uint32_t KuBucketManagementOverhead = 16;

	// FXBuckets.h:313
	extern const uint32_t KuTotalParticleSizeInBytes = 84;

	// FXBuckets.h:316
	extern const uint32_t KuMaxNumParticlesUnAligned = 97;

	// Unknown accessibility
	// FXBuckets.h:320
	extern const uint32_t KuMaxNumParticles = 96;

	// FXBuckets.h:326
	float32_t[96] maParticleBirthTimes;

	// FXBuckets.h:329
	BrnDebris[96] maParticleData;

public:
	// FXBuckets.h:114
	float32_t GetParticleBirthTime(unsigned char) const;

	// FXBuckets.h:121
	const rw::math::vpu::Vector4 * GetParticleBirthTimesAsArrayOfVector4() const;

	// FXBuckets.h:131
	const BrnDebris & GetParticleData(unsigned char) const;

	// FXBuckets.h:141
	BrnDebris & GetParticleData(unsigned char);

	// FXBuckets.h:150
	uint16_t NumParticlesInBucket() const;

	// FXBuckets.h:158
	uint16_t GetMaxNumParticles();

	// FXBuckets.h:166
	bool HasFreeParticles() const;

	// FXBuckets.h:176
	BrnDebris * GetNewParticle(float);

	// FXBuckets.h:200
	FXBucket<BrnParticle::Native::BrnDebris,32> * GetNextBucket();

	// FXBuckets.h:208
	const FXBucket<BrnParticle::Native::BrnDebris,32> * GetNextBucket() const;

	// FXBuckets.h:215
	float32_t GetFinalParticleBirthTime() const;

	// FXBuckets.h:224
	void Isolate();

	// FXBuckets.h:245
	void InsertBefore(FXBucket<BrnParticle::Native::BrnDebris,32> *);

	// FXBuckets.h:276
	void RecycleBucket();

	// FXBuckets.h:286
	void Clear();

}

// FXBuckets.h:109
struct BrnParticle::FXBucket<BrnParticle::Native::BrnSpark,4> : public FXBucketBase {
private:
	// FXBuckets.h:311
	extern const uint32_t KuBucketManagementOverhead = 16;

	// FXBuckets.h:313
	extern const uint32_t KuTotalParticleSizeInBytes = 52;

	// FXBuckets.h:316
	extern const uint32_t KuMaxNumParticlesUnAligned = 157;

	// Unknown accessibility
	// FXBuckets.h:320
	extern const uint32_t KuMaxNumParticles = 156;

	// FXBuckets.h:326
	float32_t[156] maParticleBirthTimes;

	// FXBuckets.h:329
	BrnSpark[156] maParticleData;

public:
	// FXBuckets.h:114
	float32_t GetParticleBirthTime(unsigned char) const;

	// FXBuckets.h:121
	const rw::math::vpu::Vector4 * GetParticleBirthTimesAsArrayOfVector4() const;

	// FXBuckets.h:131
	const BrnSpark & GetParticleData(unsigned char) const;

	// FXBuckets.h:141
	BrnSpark & GetParticleData(unsigned char);

	// FXBuckets.h:150
	uint16_t NumParticlesInBucket() const;

	// FXBuckets.h:158
	uint16_t GetMaxNumParticles();

	// FXBuckets.h:166
	bool HasFreeParticles() const;

	// FXBuckets.h:176
	BrnSpark * GetNewParticle(float);

	// FXBuckets.h:200
	FXBucket<BrnParticle::Native::BrnSpark,4> * GetNextBucket();

	// FXBuckets.h:208
	const FXBucket<BrnParticle::Native::BrnSpark,4> * GetNextBucket() const;

	// FXBuckets.h:215
	float32_t GetFinalParticleBirthTime() const;

	// FXBuckets.h:224
	void Isolate();

	// FXBuckets.h:245
	void InsertBefore(FXBucket<BrnParticle::Native::BrnSpark,4> *);

	// FXBuckets.h:276
	void RecycleBucket();

	// FXBuckets.h:286
	void Clear();

}

// FXBuckets.h:374
extern BrnParticle::Native::SparkArray::SparkBank::SparkBucket * AllocateBucket<BrnParticle::Native::SparkBucket>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:380
		BrnParticle::Native::SparkArray::SparkBank::SparkBucket * lpFreeBucket;

	}
}

// FXBuckets.h:374
extern BrnDebrisArray::DebrisBucket * AllocateBucket<BrnParticle::Native::DebrisBucket>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// FXBuckets.h:380
		BrnDebrisArray::DebrisBucket * lpFreeBucket;

	}
}

// FXBuckets.h:311
extern const uint32_t KuBucketManagementOverhead = 16;

// FXBuckets.h:313
extern const uint32_t KuTotalParticleSizeInBytes = 84;

// FXBuckets.h:316
extern const uint32_t KuMaxNumParticlesUnAligned = 97;

// FXBuckets.h:320
extern const uint32_t KuMaxNumParticles = 96;

// FXBuckets.h:313
extern const uint32_t KuTotalParticleSizeInBytes = 52;

// FXBuckets.h:316
extern const uint32_t KuMaxNumParticlesUnAligned = 157;

// FXBuckets.h:320
extern const uint32_t KuMaxNumParticles = 156;

