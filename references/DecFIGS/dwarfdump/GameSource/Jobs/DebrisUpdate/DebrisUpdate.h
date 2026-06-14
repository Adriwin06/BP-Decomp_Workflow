// DebrisUpdate.h:38
struct DebrisUpdateJobData {
	// DebrisUpdate.h:43
	extern const uint32_t KU_NUM_DEBRIS_ARRAYS_PER_JOB = 1;

	// DebrisUpdate.h:49
	BrnDebrisArrayLite[1] maDebrisArrays;

	// DebrisUpdate.h:50
	uint32_t muNumDebrisArrays;

	// DebrisUpdate.h:51
	const BrnEffects::BrnCrashTriangleCache * mpTriCache;

	// DebrisUpdate.h:52
	float32_t mfCurrentTime;

	// DebrisUpdate.h:53
	float32_t mfTimeStep;

	// DebrisUpdate.h:54
	Random mRandom;

	// DebrisUpdate.h:55
	bool mbCollisionEnabled;

}

// _built-in_
namespace :: {
	// DebrisUpdate.h:77
	extern char[] _binary_DebrisUpdate_elf_start;

	// DebrisUpdate.h:78
	extern uint32_t _binary_DebrisUpdate_elf_size;

}

// DebrisUpdate.h:77
extern char[] _binary_DebrisUpdate_elf_start;

// DebrisUpdate.h:78
extern uint32_t _binary_DebrisUpdate_elf_size;

// DebrisUpdate.h:43
extern const uint32_t KU_NUM_DEBRIS_ARRAYS_PER_JOB = 1;

