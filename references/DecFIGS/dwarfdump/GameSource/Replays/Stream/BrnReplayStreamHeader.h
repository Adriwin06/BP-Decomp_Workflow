// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayStreamHeader.h:33
	const uint16_t KU_FLAG_VOID = 1;

	// BrnReplayStreamHeader.h:34
	const uint16_t KU_FLAG_KEYFRAME = 2;

}

// BrnReplayStreamHeader.h:45
struct BrnReplays::StreamOffset {
	// BrnReplayStreamHeader.h:47
	int32_t miFileOffset;

	// BrnReplayStreamHeader.h:48
	int32_t miFrunkSize;

	// BrnReplayStreamHeader.h:49
	int16_t miFrameNumber;

	// BrnReplayStreamHeader.h:50
	uint16_t mxFlags;

	// BrnReplayStreamHeader.h:51
	float32_t mfFrameTime;

}

// BrnReplayStreamHeader.h:63
struct BrnReplays::StreamHeader {
	// BrnReplayStreamHeader.h:78
	char[8] macMagicNumber;

	// BrnReplayStreamHeader.h:79
	int32_t miVersion;

	// BrnReplayStreamHeader.h:80
	int32_t miNumFrunks;

	// BrnReplayStreamHeader.h:81
	int32_t miFirstFrunk;

	// BrnReplayStreamHeader.h:82
	StreamOffset * mpFrameOffsets;

public:
	// BrnReplayStreamHeader.h:67
	void Clear();

	// BrnReplayStreamHeader.h:70
	void FixUp();

	// BrnReplayStreamHeader.h:73
	void FixDown();

	// BrnReplayStreamHeader.h:76
	bool IsFrunkInStream(int32_t);

}

