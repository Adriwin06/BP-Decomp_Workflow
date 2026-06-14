// GenerateOcclusionList.h:60
struct OcclusionJobOptions {
	// GenerateOcclusionList.h:61
	Matrix44 mViewProjectionMatrix;

	// GenerateOcclusionList.h:62
	VecFloat mNearClipOffset;

	// GenerateOcclusionList.h:63
	uint32_t muListSize;

	// GenerateOcclusionList.h:64
	int32_t miOcclusionCullIndexCountThreshold;

}

// GenerateOcclusionList.h:71
struct OcclusionJobData {
	// GenerateOcclusionList.h:73
	DispatchList * mpDispatchList;

	// GenerateOcclusionList.h:74
	OcclusionQueryList * mpQueryList;

	// GenerateOcclusionList.h:75
	OcclusionJobOptions mOcclusionOptions;

}

// _built-in_
namespace :: {
	// GenerateOcclusionList.h:46
	extern char[] _binary_GenerateOcclusionList_elf_start;

	// GenerateOcclusionList.h:47
	extern uint32_t _binary_GenerateOcclusionList_elf_size;

}

// GenerateOcclusionList.h:46
extern char[] _binary_GenerateOcclusionList_elf_start;

// GenerateOcclusionList.h:47
extern uint32_t _binary_GenerateOcclusionList_elf_size;

