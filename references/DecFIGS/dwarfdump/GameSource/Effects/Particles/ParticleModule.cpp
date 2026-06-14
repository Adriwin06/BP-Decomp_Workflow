// vertexbuffer.h:27
namespace BrnParticle {
	// ParticleModule.cpp:101
	const uint16_t KU_NUM_DEBRIS_IN_SPAWN_BUFFER = 32;

	// ParticleModule.cpp:102
	const uint16_t KU_NUM_SPARKS_IN_SPAWN_BUFFER = 32;

	// ParticleModule.cpp:104
	const float32_t mParticleStatsPositionX;

	// ParticleModule.cpp:105
	const float32_t mParticleStatsPositionY;

	// ParticleModule.cpp:220
	ParticleCpuMonitors[2] gaCpuMonitors;

}

// ParticleModule.cpp:160
struct BrnParticle::ParticleCpuMonitors {
	// ParticleModule.cpp:186
	int32_t miPreRenderUpdate;

	// ParticleModule.cpp:187
	int32_t miDispatchThreadUpdate;

	// ParticleModule.cpp:188
	int32_t miSpawnSpark;

	// ParticleModule.cpp:189
	int32_t miBeginParticleRenderJob;

	// ParticleModule.cpp:190
	int32_t miBuildLionVertexBuffers;

	// ParticleModule.cpp:191
	int32_t miLionUpdate;

	// ParticleModule.cpp:192
	int32_t miLionRender;

	// ParticleModule.cpp:193
	int32_t miWaitOnParticleRenderJob;

	// ParticleModule.cpp:194
	int32_t miRenderFullResParticles;

	// ParticleModule.cpp:195
	int32_t miTrailsRender;

	// ParticleModule.cpp:196
	int32_t miWaitOnDebrisUpdateJob;

	// ParticleModule.cpp:197
	int32_t miDebrisRender;

	// ParticleModule.cpp:198
	int32_t miSparksDispatch;

	// ParticleModule.cpp:199
	int32_t miRenderQuarterResParticles;

	// ParticleModule.cpp:200
	int32_t miSimpleParticlesDispatch;

	// ParticleModule.cpp:201
	int32_t miLionDispatch;

public:
	// ParticleModule.cpp:166
	void Construct(const char *);

private:
	// ParticleModule.cpp:209
	int32_t AddMonitor(const char *, const char *);

}

// ParticleModule.cpp:108
struct BrnParticle::IInternalAllocator : public EA::Allocator::ITaggedAllocator {
private:
	// ParticleModule.cpp:155
	HeapMalloc * mpHeapMalloc;

public:
	void IInternalAllocator(const IInternalAllocator &);

	// ParticleModule.cpp:111
	void IInternalAllocator(HeapMalloc *);

	// ParticleModule.cpp:115
	virtual void * Alloc(size_t, const char *, unsigned int);

	// ParticleModule.cpp:122
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// ParticleModule.cpp:129
	virtual void * Alloc(size_t, const TagValuePair &);

	// ParticleModule.cpp:136
	virtual void Free(void *, size_t);

	// ParticleModule.cpp:143
	virtual int AddRef();

	// ParticleModule.cpp:148
	virtual int Release();

	virtual void ~IInternalAllocator();

}

// ParticleModule.cpp:235
void BrnParticle::LionEffect::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::fpu::Vector3Template<float>::SetZero(/* parameters */);
}

// ParticleModule.cpp:247
void BrnParticle::LionEffect::LionMatrixConvert(const const rw::math::vpu::Matrix44Affine &  lMatIn, const cMatrix &  lmatOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cMatrix::SetAxisX(/* parameters */);
	cVector::SetX(/* parameters */);
	cMatrix::SetAxisY(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetW(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cVector::SetY(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	cMatrix::SetAxisZ(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	cMatrix::SetAxisW(/* parameters */);
	cVector::SetW(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetW(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	cVector::SetZ(/* parameters */);
	cVector::SetY(/* parameters */);
	cVector::SetZ(/* parameters */);
}

// ParticleModule.cpp:108
void BrnParticle::IInternalAllocator::~IInternalAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

