// BrnReplayMemBuffer.h:42
struct BrnReplays::MemBuffer {
	// BrnReplayMemBuffer.h:45
	int32_t miFirstFrunkId;

	// BrnReplayMemBuffer.h:46
	int32_t miNumFrunks;

	// BrnReplayMemBuffer.h:47
	int32_t[15] maiFrunkOffsets;

	// BrnReplayMemBuffer.h:48
	int32_t miBufferUsed;

	// BrnReplayMemBuffer.h:49
	char[1048576] macBuffer;

}

