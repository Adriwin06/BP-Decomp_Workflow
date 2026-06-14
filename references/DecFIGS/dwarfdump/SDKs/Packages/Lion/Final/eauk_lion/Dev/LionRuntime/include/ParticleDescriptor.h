// ParticleDescriptor.h:38
struct cParticleDescriptor {
	// ParticleDescriptor.h:43
	enum eParticleDescriptorFlag {
		eDO_LIGHTING = 1,
		eDO_INTENSITY = 2,
		eDO_REPEAT = 4,
		eDO_CELLRENDER = 8,
		eDO_DYNAMICPLACE = 16,
		eDO_USE_MATRICES = 32,
		eDO_FACECAMERA = 64,
		eDO_WORLD_ACC = 128,
		eDO_IGNOREROT = 256,
		eDO_PHYSICS = 512,
		eDO_RGBA_INTERPOLANT = 1024,
		eDO_RGBA_VARIANCE = 2048,
		eDO_LOCATOR_INSTANCING = 4096,
		eDO_TRIGGER_INSTANCING = 8192,
		eDO_PREFORM = 16384,
		eDO_DISABLED = 32768,
		eDO_RIBBON = 65536,
	}

	// ParticleDescriptor.h:88
	enum DynamicBucketType {
		eDYN_NONE = 0,
		eDYN_VECTOR = 1,
		eDYN_MATRIX = 2,
	}

	// ParticleDescriptor.h:262
	U32 mID;

	// ParticleDescriptor.h:263
	FP32 mPauseTime;

	// ParticleDescriptor.h:264
	FP32 mPauseTimeVariance;

	// ParticleDescriptor.h:265
	FP32 mRepeatTime;

	// ParticleDescriptor.h:266
	FP32 mRepeatTimeVariance;

	// ParticleDescriptor.h:267
	FP32 mEmitterLifeBase;

	// ParticleDescriptor.h:268
	FP32 mEmitterLifeVariance;

	// ParticleDescriptor.h:269
	U32 mEmitterLifeInfiniteFlag;

	// ParticleDescriptor.h:270
	U32 mFlags;

	// ParticleDescriptor.h:272
	U32 mLodGroup;

	// ParticleDescriptor.h:273
	U32 mRenderGroup;

	// ParticleDescriptor.h:274
	U32 mShape;

	// ParticleDescriptor.h:276
	U32 mCollisionType;

	// ParticleDescriptor.h:278
	FP32 mBlendLast;

	// ParticleDescriptor.h:279
	LionChar * mpName;

private:
	// ParticleDescriptor.h:282
	S32 mBehaviourCount;

	// ParticleDescriptor.h:283
	cParticleBehaviour * mpBehaviours;

	// ParticleDescriptor.h:284
	cParticleBehaviour * mpBehaviourTemp;

	// ParticleDescriptor.h:285
	const cParticleBehaviour * mpBehaviour;

	// ParticleDescriptor.h:287
	cParticleMaterial * mpMaterial;

	// ParticleDescriptor.h:289
	cLionEffectDefinition * mpDef;

	// ParticleDescriptor.h:290
	cParticleDescriptor * mpNext;

	// ParticleDescriptor.h:292
	cParticleDescriptor * mpParent;

	// ParticleDescriptor.h:293
	cParticleDescriptor * mpChild;

public:
	// ParticleDescriptor.h:41
	S32 GetGlobalBehaviourCount();

	// ParticleDescriptor.h:95
	void Init();

	// ParticleDescriptor.h:96
	void DeInit();

	// ParticleDescriptor.h:98
	void Delocate(U32);

	// ParticleDescriptor.h:99
	void Relocate();

	// ParticleDescriptor.h:101
	void GetSerialiseSize(cLionSerialiser &) const;

	// ParticleDescriptor.h:102
	cParticleDescriptor * Serialise(cLionSerialiser &) const;

	// ParticleDescriptor.h:103
	void Remap(cLionSerialiser &);

	// ParticleDescriptor.h:104
	void UnBuild();

	// ParticleDescriptor.h:107
	bool IsEqualTo(cParticleDescriptor *) const;

	// ParticleDescriptor.h:112
	bool IsEqualTo(const cParticleDescriptor &) const;

	// ParticleDescriptor.h:117
	cParticleDescriptor * GetChild() const;

	// ParticleDescriptor.h:122
	const cParticleDescriptor * GetParent() const;

	// ParticleDescriptor.h:127
	cParticleDescriptor *& GetNextDescriptor();

	// ParticleDescriptor.h:132
	cLionEffectDefinition *& GetDefinition();

	// ParticleDescriptor.h:137
	const cLionEffectDefinition & GetDefinition() const;

	// ParticleDescriptor.h:142
	void SetDefinition(cLionEffectDefinition *);

	// ParticleDescriptor.h:147
	S32 GetBehaviourCount() const;

	// ParticleDescriptor.h:152
	const cParticleBehaviour * GetBehaviours() const;

	// ParticleDescriptor.h:157
	cParticleBehaviour * GetBehaviours();

	// ParticleDescriptor.h:180
	U32 Flags() const;

	// ParticleDescriptor.h:185
	bool IsFlagSet(cParticleDescriptor::eParticleDescriptorFlag) const;

	// ParticleDescriptor.h:190
	cParticleMaterial * Material() const;

	// ParticleDescriptor.h:195
	const LionChar * Name() const;

	// ParticleDescriptor.h:200
	void CloneInit(const cParticleDescriptor *, cParticleDescriptor *);

	// ParticleDescriptor.h:201
	void Build();

	// ParticleDescriptor.h:202
	FP32 GetDurationMax() const;

	// ParticleDescriptor.h:203
	FP32 GetRadius() const;

	// ParticleDescriptor.h:204
	void Lerp(const cParticleDescriptor *, const cParticleDescriptor *, FP32);

	// ParticleDescriptor.h:205
	cParticleBehaviour * BehaviourAdd(cLionParticleEffectManager &);

	// ParticleDescriptor.h:206
	void BehaviourRemove(cParticleBehaviour *);

	// ParticleDescriptor.h:207
	void BehaviourMoveDown(cParticleBehaviour *);

	// ParticleDescriptor.h:208
	void BehaviourMoveUp(cParticleBehaviour *);

	// ParticleDescriptor.h:209
	const cParticleBehaviour * GetBehaviour(U32) const;

	// ParticleDescriptor.h:211
	cParticleDescriptor * DescriptorAdd();

	// ParticleDescriptor.h:212
	void DescriptorRemove(cParticleDescriptor *);

	// ParticleDescriptor.h:213
	void DescriptorMoveDown(cParticleDescriptor *);

	// ParticleDescriptor.h:214
	void DescriptorMoveUp(cParticleDescriptor *);

	// ParticleDescriptor.h:216
	cParticleMaterial * MaterialAdd();

	// ParticleDescriptor.h:217
	void MaterialRemove();

	// ParticleDescriptor.h:218
	void MaterialRemove(cParticleMaterial *);

	// ParticleDescriptor.h:219
	U32 IsChildOf(const cParticleDescriptor &) const;

	// ParticleDescriptor.h:221
	cParticleDescriptor & operator=(const cParticleDescriptor &);

	// ParticleDescriptor.h:223
	void ToConsole(U32) const;

	// ParticleDescriptor.h:226
	cParticleDescriptor::DynamicBucketType GetRequiredBucketType() const;

}

