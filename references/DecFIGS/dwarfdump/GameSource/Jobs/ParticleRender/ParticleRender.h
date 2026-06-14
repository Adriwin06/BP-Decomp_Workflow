// ParticleRender.h:33
struct ParticleRenderJobData {
	// ParticleRender.h:36
	Camera mCamera;

	// ParticleRender.h:37
	EffectsVertexBufferLocked mDestinationVertexBuffer;

	// ParticleRender.h:38
	SimpleParticleBatchArray mSimpleParticleBatchArray;

	// ParticleRender.h:39
	SparkBatchArray mSparkBatchArray;

	// ParticleRender.h:40
	const BrnSimpleParticleArray * mpaSimpleParticleArrays;

	// ParticleRender.h:41
	const SparkArray * mpaSparkArrays;

	// ParticleRender.h:42
	float32_t mfCurrentTime;

	// ParticleRender.h:43
	float32_t mfTimeMultiplier;

	// ParticleRender.h:44
	float32_t mfWhiteLevel;

	// ParticleRender.h:45
	bool8_t mbIsCrash;

	// ParticleRender.h:46
	bool8_t mbRenderParticles;

	// ParticleRender.h:47
	bool8_t mbRenderSparks;

	// ParticleRender.h:49
	SparkFrameDataSet mSparkFrameDataSet;

}

// _built-in_
namespace :: {
	// ParticleRender.h:71
	extern char[] _binary_ParticleRender_elf_start;

	// ParticleRender.h:72
	extern uint32_t _binary_ParticleRender_elf_size;

}

// ParticleRender.h:71
extern char[] _binary_ParticleRender_elf_start;

// ParticleRender.h:72
extern uint32_t _binary_ParticleRender_elf_size;

