// LionParticleEffect.h:28
struct cLionParticleEffect {
	// LionParticleEffect.h:52
	U32 mHash;

	// LionParticleEffect.h:53
	cParticleDescriptor * mpDescriptors;

	// LionParticleEffect.h:54
	cLionParticleEffect * mpNext;

public:
	// LionParticleEffect.h:30
	void Init(const char *);

	// LionParticleEffect.h:31
	void DeInit();

	// LionParticleEffect.h:33
	void Build();

	// LionParticleEffect.h:34
	void UnBuild();

	// LionParticleEffect.h:36
	void Delocate(U32);

	// LionParticleEffect.h:37
	void Relocate();

	// LionParticleEffect.h:39
	void GetSerialiseSize(cLionSerialiser &) const;

	// LionParticleEffect.h:40
	cLionParticleEffect * Serialise(cLionSerialiser &) const;

	// LionParticleEffect.h:41
	void Remap(cLionSerialiser &);

	// LionParticleEffect.h:43
	cParticleDescriptor * DescriptorAdd();

	// LionParticleEffect.h:44
	cParticleDescriptor * DescriptorClone(const cParticleDescriptor *);

	// LionParticleEffect.h:45
	void DescriptorRemove(cParticleDescriptor *);

	// LionParticleEffect.h:46
	void DescriptorMoveUp(cParticleDescriptor *);

	// LionParticleEffect.h:47
	void DescriptorMoveDown(cParticleDescriptor *);

	// LionParticleEffect.h:49
	FP32 GetDurationMax() const;

	// LionParticleEffect.h:50
	FP32 GetRadius() const;

	// LionParticleEffect.h:56
	S32 GetGlobalDescriptorsCount();

}

