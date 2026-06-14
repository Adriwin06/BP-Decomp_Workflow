// CgsParticleSystem2d.h:194
extern const VecFloat KF_COLOURSCALE;

// CgsParticleSystem2d.h:39
struct CgsGui::ParticleInfo {
	// CgsParticleSystem2d.h:40
	Vector2 mv2StartPos;

	// CgsParticleSystem2d.h:41
	Vector2 mv2StartVel;

	// CgsParticleSystem2d.h:42
	float32_t mfStartTime;

	// CgsParticleSystem2d.h:43
	float32_t mfLifetime;

	// CgsParticleSystem2d.h:44
	float32_t mfSpin;

}

// CgsParticleSystem2d.h:57
struct CgsGui::ParticleSystem2d {
private:
	// CgsParticleSystem2d.h:172
	Vector2 mv2Gravity;

	// CgsParticleSystem2d.h:173
	Vector2 mv2EmitterPos;

	// CgsParticleSystem2d.h:174
	Vector2 mv2EmitterDir;

	// CgsParticleSystem2d.h:175
	Vector2 mv2EmitterVol;

	// CgsParticleSystem2d.h:176
	float32_t mfEmitterInnerCone;

	// CgsParticleSystem2d.h:177
	float32_t mfEmitterOuterCone;

	// CgsParticleSystem2d.h:178
	float32_t mfEmitterLifetime;

	// CgsParticleSystem2d.h:179
	float32_t mfEmitterRate;

	// CgsParticleSystem2d.h:181
	float32_t mfParticleLifetime;

	// CgsParticleSystem2d.h:182
	float32_t mfParticleSpeed;

	// CgsParticleSystem2d.h:183
	float32_t mfParticleStartSize;

	// CgsParticleSystem2d.h:184
	float32_t mfParticleEndSize;

	// CgsParticleSystem2d.h:185
	float32_t mfParticleMinSpin;

	// CgsParticleSystem2d.h:186
	float32_t mfParticleMaxSpin;

	// CgsParticleSystem2d.h:187
	Vector4 mv4ParticleStartColour;

	// CgsParticleSystem2d.h:188
	Vector4 mv4ParticleEndColour;

	// CgsParticleSystem2d.h:189
	float32_t mfParticleAnimRate;

	// CgsParticleSystem2d.h:190
	CgsGui::BillboardRenderer::eAnimMode meParticleAnimMode;

	// CgsParticleSystem2d.h:194
	extern const VecFloat KF_COLOURSCALE;

	// CgsParticleSystem2d.h:198
	float32_t mfSystemTimeBorn;

	// CgsParticleSystem2d.h:199
	float32_t mfLastTime;

	// CgsParticleSystem2d.h:200
	Vector2 mv2LastEmitterPos;

	// CgsParticleSystem2d.h:201
	int32_t miMaxParticles;

	// CgsParticleSystem2d.h:202
	int32_t miNumActiveParticles;

	// CgsParticleSystem2d.h:204
	bool * mabIsActive;

	// CgsParticleSystem2d.h:205
	ParticleInfo * maParticles;

	// CgsParticleSystem2d.h:206
	BillboardInfo * maBillboards;

	// CgsParticleSystem2d.h:208
	BillboardRenderer mBillboardRenderer;

	// CgsParticleSystem2d.h:209
	int32_t miFramesX;

	// CgsParticleSystem2d.h:210
	int32_t miFramesY;

	// CgsParticleSystem2d.h:211
	int32_t miNumFrames;

	// CgsParticleSystem2d.h:213
	Random mRandom;

	// CgsParticleSystem2d.h:215
	rw::IResourceAllocator * mpAllocator;

	// CgsParticleSystem2d.h:218
	Resource mTextureStateResource;

	// CgsParticleSystem2d.h:219
	const TextureState * mpTextureState;

	// CgsParticleSystem2d.h:221
	Resource mBlendStateResource;

	// CgsParticleSystem2d.h:222
	const BlendState * mpBlendState;

	// CgsParticleSystem2d.h:224
	Resource mDepthStencilStateResource;

	// CgsParticleSystem2d.h:225
	const DepthStencilState * mpDepthStencilState;

public:
	// CgsParticleSystem2d.h:63
	// Declaration
	RGBA GetRGBA(const rw::math::vpu::Vector4 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsParticleSystem2d.h:233
		using namespace rw::math;

	}

	// CgsParticleSystem2d.h:70
	void ParticleSystem2d();

	// CgsParticleSystem2d.h:73
	void Construct(rw::IResourceAllocator *, const TextureState *, const BlendState *, int32_t, int32_t, int32_t);

	// CgsParticleSystem2d.h:76
	void Prepare(float32_t, float32_t, float32_t, float32_t);

	// CgsParticleSystem2d.h:79
	void Release();

	// CgsParticleSystem2d.h:82
	void Destruct();

	// CgsParticleSystem2d.h:86
	bool IsConstructed() const;

	// CgsParticleSystem2d.h:90
	bool IsPrepared() const;

	// CgsParticleSystem2d.h:94
	bool IsFinished(float32_t) const;

	// CgsParticleSystem2d.h:97
	void Render(CgsGraphics::Im2dRenderBuffer *, float32_t);

	// CgsParticleSystem2d.h:106
	void SetGravity(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:110
	void SetEmitterPos(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:114
	void JumpEmitterPos(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:118
	void SetEmitterDir(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:122
	void SetEmitterVol(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:126
	void SetEmitterInnerCone(float32_t);

	// CgsParticleSystem2d.h:130
	void SetEmitterOuterCone(float32_t);

	// CgsParticleSystem2d.h:134
	void SetParticleSpeed(float32_t);

	// CgsParticleSystem2d.h:138
	void SetParticleStartSize(float32_t);

	// CgsParticleSystem2d.h:142
	void SetParticleEndSize(float32_t);

	// CgsParticleSystem2d.h:146
	void SetParticleMinSpin(float32_t);

	// CgsParticleSystem2d.h:150
	void SetParticleMaxSpin(float32_t);

	// CgsParticleSystem2d.h:155
	void SetParticleStartColour(const rw::math::vpu::Vector4 &);

	// CgsParticleSystem2d.h:159
	void SetParticleEndColour(const rw::math::vpu::Vector4 &);

	// CgsParticleSystem2d.h:163
	void SetParticleAnimRate(float32_t);

	// CgsParticleSystem2d.h:167
	void SetParticleAnimMode(CgsGui::BillboardRenderer::eAnimMode);

private:
	// CgsParticleSystem2d.h:196
	float32_t GetSystemLifetime() const;

}

// CgsParticleSystem2d.h:57
struct CgsGui::ParticleSystem2d {
private:
	// CgsParticleSystem2d.h:172
	Vector2 mv2Gravity;

	// CgsParticleSystem2d.h:173
	Vector2 mv2EmitterPos;

	// CgsParticleSystem2d.h:174
	Vector2 mv2EmitterDir;

	// CgsParticleSystem2d.h:175
	Vector2 mv2EmitterVol;

	// CgsParticleSystem2d.h:176
	float32_t mfEmitterInnerCone;

	// CgsParticleSystem2d.h:177
	float32_t mfEmitterOuterCone;

	// CgsParticleSystem2d.h:178
	float32_t mfEmitterLifetime;

	// CgsParticleSystem2d.h:179
	float32_t mfEmitterRate;

	// CgsParticleSystem2d.h:181
	float32_t mfParticleLifetime;

	// CgsParticleSystem2d.h:182
	float32_t mfParticleSpeed;

	// CgsParticleSystem2d.h:183
	float32_t mfParticleStartSize;

	// CgsParticleSystem2d.h:184
	float32_t mfParticleEndSize;

	// CgsParticleSystem2d.h:185
	float32_t mfParticleMinSpin;

	// CgsParticleSystem2d.h:186
	float32_t mfParticleMaxSpin;

	// CgsParticleSystem2d.h:187
	Vector4 mv4ParticleStartColour;

	// CgsParticleSystem2d.h:188
	Vector4 mv4ParticleEndColour;

	// CgsParticleSystem2d.h:189
	float32_t mfParticleAnimRate;

	// CgsParticleSystem2d.h:190
	CgsGui::BillboardRenderer::eAnimMode meParticleAnimMode;

	// CgsParticleSystem2d.h:194
	extern const VecFloat KF_COLOURSCALE;

	// CgsParticleSystem2d.h:198
	float32_t mfSystemTimeBorn;

	// CgsParticleSystem2d.h:199
	float32_t mfLastTime;

	// CgsParticleSystem2d.h:200
	Vector2 mv2LastEmitterPos;

	// CgsParticleSystem2d.h:201
	int32_t miMaxParticles;

	// CgsParticleSystem2d.h:202
	int32_t miNumActiveParticles;

	// CgsParticleSystem2d.h:204
	bool * mabIsActive;

	// CgsParticleSystem2d.h:205
	ParticleInfo * maParticles;

	// CgsParticleSystem2d.h:206
	BillboardInfo * maBillboards;

	// CgsParticleSystem2d.h:208
	BillboardRenderer mBillboardRenderer;

	// CgsParticleSystem2d.h:209
	int32_t miFramesX;

	// CgsParticleSystem2d.h:210
	int32_t miFramesY;

	// CgsParticleSystem2d.h:211
	int32_t miNumFrames;

	// CgsParticleSystem2d.h:213
	Random mRandom;

	// CgsParticleSystem2d.h:215
	rw::IResourceAllocator * mpAllocator;

	// CgsParticleSystem2d.h:218
	Resource mTextureStateResource;

	// CgsParticleSystem2d.h:219
	const TextureState * mpTextureState;

	// CgsParticleSystem2d.h:221
	Resource mBlendStateResource;

	// CgsParticleSystem2d.h:222
	const BlendState * mpBlendState;

	// CgsParticleSystem2d.h:224
	Resource mDepthStencilStateResource;

	// CgsParticleSystem2d.h:225
	const DepthStencilState * mpDepthStencilState;

public:
	// CgsParticleSystem2d.h:63
	// Declaration
	RGBA GetRGBA(const rw::math::vpu::Vector4 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsParticleSystem2d.h:233
		using namespace rw::math;

	}

	// CgsParticleSystem2d.h:70
	void ParticleSystem2d();

	// CgsParticleSystem2d.h:73
	void Construct(rw::IResourceAllocator *, const TextureState *, const BlendState *, int32_t, int32_t, int32_t);

	// CgsParticleSystem2d.h:76
	void Prepare(float32_t, float32_t, float32_t, float32_t);

	// CgsParticleSystem2d.h:79
	void Release();

	// CgsParticleSystem2d.h:82
	void Destruct();

	// CgsParticleSystem2d.h:86
	bool IsConstructed() const;

	// CgsParticleSystem2d.h:90
	bool IsPrepared() const;

	// CgsParticleSystem2d.h:94
	bool IsFinished(float32_t) const;

	// CgsParticleSystem2d.h:97
	// Declaration
	void Render(CgsGraphics::Im2dRenderBuffer *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsParticleSystem2d.cpp:234
		using namespace rw::math;

	}

	// CgsParticleSystem2d.h:106
	void SetGravity(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:110
	void SetEmitterPos(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:114
	void JumpEmitterPos(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:118
	void SetEmitterDir(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:122
	void SetEmitterVol(const rw::math::vpu::Vector2 &);

	// CgsParticleSystem2d.h:126
	void SetEmitterInnerCone(float32_t);

	// CgsParticleSystem2d.h:130
	void SetEmitterOuterCone(float32_t);

	// CgsParticleSystem2d.h:134
	void SetParticleSpeed(float32_t);

	// CgsParticleSystem2d.h:138
	void SetParticleStartSize(float32_t);

	// CgsParticleSystem2d.h:142
	void SetParticleEndSize(float32_t);

	// CgsParticleSystem2d.h:146
	void SetParticleMinSpin(float32_t);

	// CgsParticleSystem2d.h:150
	void SetParticleMaxSpin(float32_t);

	// CgsParticleSystem2d.h:155
	void SetParticleStartColour(const rw::math::vpu::Vector4 &);

	// CgsParticleSystem2d.h:159
	void SetParticleEndColour(const rw::math::vpu::Vector4 &);

	// CgsParticleSystem2d.h:163
	void SetParticleAnimRate(float32_t);

	// CgsParticleSystem2d.h:167
	void SetParticleAnimMode(CgsGui::BillboardRenderer::eAnimMode);

private:
	// CgsParticleSystem2d.h:196
	float32_t GetSystemLifetime() const;

}

