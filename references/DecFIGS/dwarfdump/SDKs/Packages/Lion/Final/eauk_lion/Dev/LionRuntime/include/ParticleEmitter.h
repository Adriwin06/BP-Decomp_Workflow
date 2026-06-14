// ParticleEmitter.h:37
struct cParticleEmitter {
	// ParticleEmitter.h:266
	enum EParticleBuildResult {
		eParticleBuildResultNotBornYet = 0,
		eParticleBuildResultAlive = 1,
		eParticleBuildResultDead = 2,
	}

	// ParticleEmitter.h:277
	struct ParticleBuildData {
		// ParticleEmitter.h:278
		Vector4 mvDeltaTimeAndCurrentTime;

		// ParticleEmitter.h:281
		Vector2 mvAlphaFadeInAndFadeOut;

		// ParticleEmitter.h:282
		Vector3 mvScaleAndProportionalScaleYXAndZX;

		// ParticleEmitter.h:283
		Vector2 mvOrientStepAndDragFrameRateConstants;

		// ParticleEmitter.h:284
		Vector3 mvDragFactorsVelRotScale;

		// ParticleEmitter.h:287
		Vector3Plus mvRGBADiff;

		// ParticleEmitter.h:288
		Vector3Plus mvRGBA0;

		// ParticleEmitter.h:289
		Vector3Plus mvRGBAVar;

		// ParticleEmitter.h:290
		Vector3Plus mvRGBABase;

		// ParticleEmitter.h:293
		VecFloat mvfFrameCount;

		// ParticleEmitter.h:294
		VecFloat mvfOneOverFrameCount;

	}

private:
	// ParticleEmitter.h:333
	U32 mBucketsUsed;

	// ParticleEmitter.h:334
	cMatrix mParentBaseMatrix;

	// ParticleEmitter.h:335
	cVector mParentVel;

	// ParticleEmitter.h:336
	cVector mForce;

	// ParticleEmitter.h:337
	sParticleNucleus mParentEmitterNucleus;

	// ParticleEmitter.h:338
	cParticleRandomSeed mParentRandomSeed;

	// ParticleEmitter.h:339
	U32 mParentIndex;

	// ParticleEmitter.h:340
	cParticleEmitter * mpParentEmitter;

	// ParticleEmitter.h:341
	cTime mParentTime;

	// ParticleEmitter.h:342
	cTime mLastTime;

	// ParticleEmitter.h:343
	cTime mUpdateLastTime;

	// ParticleEmitter.h:344
	S32 mNextEmissionTime;

	// ParticleEmitter.h:345
	FP32 m_age;

	// ParticleEmitter.h:346
	FP32 mDt;

	// ParticleEmitter.h:347
	cParticleRandomSeed mEmitterSeed;

	// ParticleEmitter.h:349
	U32 mFlags;

	// ParticleEmitter.h:350
	U32 mEmissionCount;

	// ParticleEmitter.h:351
	cParticleDescriptor * mpDescriptor;

	// ParticleEmitter.h:352
	cLionBindings * mpBindings;

	// ParticleEmitter.h:353
	cParticleBucket * mpBucket;

	// ParticleEmitter.h:354
	cParticleEmitter * mpNext;

	// ParticleEmitter.h:355
	U32 mPhysicsHandle;

	// ParticleEmitter.h:357
	const cParticleBehaviour * mpCurrentBehaviour;

	// ParticleEmitter.h:358
	cParticleBehaviour * mpTempBehaviour;

	// ParticleEmitter.h:359
	FP32 mBlendLast;

	// ParticleEmitter.h:363
	cParticleEmitter::ParticleBuildData mPrecalculatedParticleBuildData;

public:
	// ParticleEmitter.h:40
	void Init(cParticleDescriptor *);

	// ParticleEmitter.h:41
	void DeInit();

	// ParticleEmitter.h:42
	void Flush();

	// ParticleEmitter.h:43
	void Blend();

	// ParticleEmitter.h:46
	cParticleBucket * GetBucket();

	// ParticleEmitter.h:52
	void BucketInsert(cParticleBucket *);

	// ParticleEmitter.h:55
	void BucketInsertAtTail(cParticleBucket *);

	// ParticleEmitter.h:58
	void BucketRemove(cParticleBucket *);

	// ParticleEmitter.h:60
	cParticleEmitter *& GetNextEmitter();

	// ParticleEmitter.h:65
	const cLionBindings & GetBindings() const;

	// ParticleEmitter.h:70
	void Bind(cLionBindings &);

	// ParticleEmitter.h:72
	void Unbind();

	// ParticleEmitter.h:74
	void SetPhysicsHandle(U32);

	// ParticleEmitter.h:79
	void SetNext(cParticleEmitter *);

	// ParticleEmitter.h:85
	void ParentMatrixCurrentBuild(cMatrix &, const cTime &, FP32, const cTime &);

	// ParticleEmitter.h:87
	void GetMatrix(cMatrix *);

	// ParticleEmitter.h:89
	cMatrix * GetpParentBaseMatrix();

	// ParticleEmitter.h:95
	U32 GetActiveFlag() const;

	// ParticleEmitter.h:100
	void SetActiveFlag(U32);

	// ParticleEmitter.h:107
	U32 GetCloneFlag() const;

	// ParticleEmitter.h:112
	void SetCloneFlag(U32);

	// ParticleEmitter.h:119
	U32 GetGeneratingFlag() const;

	// ParticleEmitter.h:124
	void SetGeneratingFlag(U32);

	// ParticleEmitter.h:131
	U32 GetSubEmitterFlag() const;

	// ParticleEmitter.h:136
	void SetSubEmitterFlag(U32);

	// ParticleEmitter.h:143
	U32 GetVisibleFlag() const;

	// ParticleEmitter.h:148
	void SetVisibleFlag(U32);

	// ParticleEmitter.h:155
	const cParticleDescriptor & GetDescriptor() const;

	// ParticleEmitter.h:160
	cParticleDescriptor & GetDescriptor();

	// ParticleEmitter.h:165
	void SetInitialEmissionTime(U32);

	// ParticleEmitter.h:171
	FP32 GetAge() const;

	// ParticleEmitter.h:173
	U32 GetParticleCount() const;

	// ParticleEmitter.h:179
	U32 Update(const cTime &);

	// ParticleEmitter.h:182
	cParticleBucket * AddBucket(cParticleRandomSeed &, const cTime &, const cMatrix &, cParticleBucket *);

	// ParticleEmitter.h:184
	void SpawnSubEmitter(cParticleBucket *, U32, const cTime &);

	// ParticleEmitter.h:186
	bool IsGenerating(cParticleRandomSeed &, const cTime &, const cTime &);

	// ParticleEmitter.h:187
	void Generate(const cTime &);

	// ParticleEmitter.h:188
	void Emit(cParticleRandomSeed &, const cTime &, const cTime &);

	// ParticleEmitter.h:189
	void SplineEval(const cMatrix &, cVector &, FP32);

	// ParticleEmitter.h:191
	void SubEmitterInit(cParticleBucket *, U32, const cTime &);

	// ParticleEmitter.h:194
	const cTime & GetUpdateLastTime() const;

	// ParticleEmitter.h:200
	const cTime & GetLastTime() const;

	// ParticleEmitter.h:206
	cParticleRandomSeed & GetEmitterSeed();

	// ParticleEmitter.h:212
	U32 EmissionCount() const;

	// ParticleEmitter.h:218
	U32 BucketsUsed() const;

	// ParticleEmitter.h:223
	void IncrementBucketUsed();

	// ParticleEmitter.h:229
	void ToConsole(U32) const;

	// ParticleEmitter.h:231
	void ToConsole() const;

	// ParticleEmitter.h:248
	U32 SimulateMatrixParticlesInBucket(RenderedParticle *, cMatrix *, cParticleBucket *, const cTime &, const cTime &, const cMatrix &);

	// ParticleEmitter.h:251
	U32 SimulateVectorParticlesInBucket(RenderedParticle *, cVector *, cParticleBucket *, const cTime &, const cTime &, const cMatrix &);

	// ParticleEmitter.h:254
	U32 SimulateLocalParticlesInBucket(RenderedParticle *, cMatrix *, cParticleBucket *, const cTime &, const cTime &, const cMatrix &);

	// ParticleEmitter.h:257
	void RemoveDeadParticles(const cTime &);

	// ParticleEmitter.h:259
	const cParticleBehaviour * GetCurrentBehaviour() const;

private:
	// ParticleEmitter.h:299
	void PrecalculateParticleBuildData();

	// ParticleEmitter.h:303
	bool ParticleInsert(cParticleBucket *, cMatrix *, const cVector &, const cTime &, cParticleRandomSeed &, U32, const cTime &);

	// ParticleEmitter.h:306
	void InitialiseParticle(sParticleNucleus &, cVector *, cMatrix *, const cMatrix &, const cVector &, cParticleRandomSeed &, const cTime &, const cTime &);

	// ParticleEmitter.h:309
	cParticleEmitter::EParticleBuildResult ParticleBuild(RenderedParticle &, cParticleRandomSeed &, sParticleNucleus &, const cParticleDescriptor &, const cParticleBehaviour &, const cParticleEmitter::ParticleBuildData &);

}

