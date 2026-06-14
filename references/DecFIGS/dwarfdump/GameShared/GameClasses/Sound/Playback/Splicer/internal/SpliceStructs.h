// SpliceStructs.h:13
typedef int8_t SPLICE_TYPE;

// SpliceStructs.h:19
struct SPLICE_SampleRef {
	// SpliceStructs.h:40
	uint16_t SampleIndex;

	// SpliceStructs.h:41
	int8_t eSpliceType;

	// SpliceStructs.h:42
	float Volume;

	// SpliceStructs.h:43
	float Pitch;

	// SpliceStructs.h:44
	float Offset;

	// SpliceStructs.h:45
	float Az;

	// SpliceStructs.h:47
	float Duration;

	// SpliceStructs.h:48
	float FadeIn;

	// SpliceStructs.h:49
	float FadeOut;

	// SpliceStructs.h:56
	float RND_Vol;

	// SpliceStructs.h:57
	float RND_Pitch;

	// SpliceStructs.h:58
	uint8_t Priority;

	// SpliceStructs.h:59
	uint8_t eRollOffType;

public:
	// SpliceStructs.h:20
	SPLICE_SampleRef();

}

// SpliceStructs.h:65
struct SPLICE_Data {
	// SpliceStructs.h:78
	uint32_t NameHash;

	// SpliceStructs.h:79
	uint16_t SpliceIndex;

	// SpliceStructs.h:80
	int8_t eSpliceType;

	// SpliceStructs.h:81
	uint8_t Num_SampleRefs;

	// SpliceStructs.h:82
	float Volume;

	// SpliceStructs.h:83
	float RND_Pitch;

	// SpliceStructs.h:84
	float RND_Vol;

	// SpliceStructs.h:88
	SPLICE_SampleRef * pSampleRefList;

public:
	// SpliceStructs.h:66
	SPLICE_Data();

}

// _built-in_
namespace :: {
	// SpliceStructs.h:14
	const SPLICE_TYPE SPLICE_TYPE_UNKNOWN = 4294967295;

	// SpliceStructs.h:15
	const SPLICE_TYPE MAX_NUM_SPLICE_TYPE = 8;

}

