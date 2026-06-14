// ParticleRandomSeed.h:27
struct cParticleRandomSeed {
protected:
	// ParticleRandomSeed.h:167
	Random mCgsRandom;

	// ParticleRandomSeed.h:168
	extern U32 mBaseSeed;

	// ParticleRandomSeed.h:169
	U32 mSeed;

public:
	// ParticleRandomSeed.h:35
	void Init();

	// ParticleRandomSeed.h:38
	void Set(U32);

	// ParticleRandomSeed.h:45
	void Offset(U32);

	// ParticleRandomSeed.h:52
	U32 Get() const;

	// ParticleRandomSeed.h:58
	void Update();

	// ParticleRandomSeed.h:71
	FP32 Build(FP32, FP32);

	// ParticleRandomSeed.h:87
	S32 Build(S32, S32);

	// ParticleRandomSeed.h:104
	void Build(Vector3 &, Vector3, Vector3);

	// ParticleRandomSeed.h:117
	Vector3Plus Build(Vector4, Vector4);

	// ParticleRandomSeed.h:130
	Vector3Plus BuildLerp(Vector4, Vector4);

	// ParticleRandomSeed.h:144
	void Build(cVector &, const cVector &, const cVector &);

}

// _built-in_
namespace :: {
	// ParticleRandomSeed.h:23
	const U32 kuSeedMultication = 69621;

}

