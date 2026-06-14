// ParticleBucket.h:33
struct cParticleBucket {
private:
	// ParticleBucket.h:219
	cParticleBucket * mpManagerNext;

	// ParticleBucket.h:222
	cParticleEmitter * mpEmitter;

	// ParticleBucket.h:225
	cParticleBucket * mpEmitterNext;

	// ParticleBucket.h:229
	cTime mLatestBirthTime;

	// ParticleBucket.h:232
	cParticleRandomSeed mRandomSeed;

	// ParticleBucket.h:235
	U32 mnNextParticlePositionToFill;

	// ParticleBucket.h:236
	U32 mActiveBits;

	// ParticleBucket.h:239
	sParticleNucleus[16] mParticles;

	// ParticleBucket.h:240
	cMatrix * mpMatrices;

	// ParticleBucket.h:241
	cVector * mpVectors;

public:
	// ParticleBucket.h:42
	void Init();

	// ParticleBucket.h:43
	void DeInit();

	// ParticleBucket.h:45
	void SetEmitter(cParticleEmitter *);

	// ParticleBucket.h:50
	void ClearEmitter();

	// ParticleBucket.h:55
	cParticleEmitter * GetEmitter() const;

	// ParticleBucket.h:60
	sParticleNucleus * GetParticles();

	// ParticleBucket.h:65
	void SetMatrices(cMatrix *);

	// ParticleBucket.h:70
	cMatrix * GetMatrices();

	// ParticleBucket.h:79
	cParticleBucket * GetEmitterNext();

	// ParticleBucket.h:84
	void SetEmitterNext(cParticleBucket *);

	// ParticleBucket.h:92
	cParticleBucket *& GetpManagerNext();

	// ParticleBucket.h:97
	void SetpManagerNext(cParticleBucket *);

	// ParticleBucket.h:102
	bool IsEmpty() const;

	// ParticleBucket.h:107
	void RetireParticle(U32);

	// ParticleBucket.h:112
	sParticleNucleus & GetNucleus(U32);

	// ParticleBucket.h:117
	void GetpMatrix(U32, cMatrix *, const cTime &);

	// ParticleBucket.h:120
	bool IsFull() const;

	// ParticleBucket.h:125
	void Clear();

	// ParticleBucket.h:131
	bool IsParticleActive(U32) const;

	// ParticleBucket.h:136
	bool HasMatrices() const;

	// ParticleBucket.h:141
	bool HasVectors() const;

	// ParticleBucket.h:147
	bool AllocateParticle(U32 &, sParticleNucleus **, cVector **, cMatrix **);

	// ParticleBucket.h:182
	const cTime & GetLatestBirthTime() const;

	// ParticleBucket.h:187
	void SetLatestBirthTime(const cTime &);

	// ParticleBucket.h:192
	U32 GetParticleCount() const;

	// ParticleBucket.h:198
	cVector * GetVectorArray() const;

	// ParticleBucket.h:203
	void SetVectorArray(cVector *);

	// ParticleBucket.h:208
	const cParticleRandomSeed & GetRandomSeed() const;

}

