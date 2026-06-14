// BrnReplayFrunkHeader.h:42
struct BrnReplays::FrunkSerialiserEntry {
	// BrnReplayFrunkHeader.h:44
	int32_t miId;

	// BrnReplayFrunkHeader.h:45
	int32_t miSize;

}

// BrnReplayFrunkHeader.h:57
struct BrnReplays::FrunkHeader {
	// BrnReplayFrunkHeader.h:59
	char[4] macMagicNumber;

	// BrnReplayFrunkHeader.h:60
	int16_t miFrameNumber;

	// BrnReplayFrunkHeader.h:61
	uint16_t mxFlags;

	// BrnReplayFrunkHeader.h:62
	float32_t mfFrameTime;

	// BrnReplayFrunkHeader.h:63
	int32_t miNumSerialisers;

}

