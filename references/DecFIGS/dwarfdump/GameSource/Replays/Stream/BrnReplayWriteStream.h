// BrnReplayWriteStream.h:48
struct BrnReplays::WriteStream {
	// BrnReplayWriteStream.h:51
	extern const int32_t KI_INTERMEDIATEBUFFERSIZE = 131072;

private:
	// BrnReplayWriteStream.h:90
	LinearMalloc mHeaderMalloc;

	// BrnReplayWriteStream.h:91
	StreamHeader * mpStreamHeader;

	// BrnReplayWriteStream.h:92
	FrunkHeader mCurrentFrunk;

	// BrnReplayWriteStream.h:93
	int32_t miCurrentWriteIndex;

	// BrnReplayWriteStream.h:94
	int32_t miStallCount;

	// BrnReplayWriteStream.h:95
	bool mbEnded;

	// BrnReplayWriteStream.h:96
	bool mbPaused;

	// BrnReplayWriteStream.h:97
	int32_t miNumFrunksAllocated;

	// BrnReplayWriteStream.h:100
	BrnReplays::DiskWriteStream * mpStream;

	// BrnReplayWriteStream.h:101
	int32_t miFilePosition;

	// BrnReplayWriteStream.h:102
	extern char[131072] mpcIntermediateBuffer;

	// BrnReplayWriteStream.h:103
	int32_t miBufferPosition;

public:
	// BrnReplayWriteStream.h:55
	void Construct();

	// BrnReplayWriteStream.h:59
	void Destruct();

	// BrnReplayWriteStream.h:66
	void StartNewStream(void *, int32_t, BrnReplays::DiskWriteStream *);

	// BrnReplayWriteStream.h:70
	void AddFrunk(int32_t, float32_t, FrunkSerialiserEntry *, void **, int32_t, bool);

	// BrnReplayWriteStream.h:74
	bool PauseStream();

	// BrnReplayWriteStream.h:78
	void ContinueStream();

	// BrnReplayWriteStream.h:82
	bool EndStream();

	// BrnReplayWriteStream.h:86
	// Declaration
	void ResetStartFrame(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnReplayWriteStream.cpp:414
		using namespace CgsDev::Message;

	}

private:
	// BrnReplayWriteStream.h:107
	void InvalidateFrunksAhead(int32_t);

	// BrnReplayWriteStream.h:110
	int32_t Write(void *, int32_t);

}

// BrnReplayWriteStream.h:51
extern const int32_t KI_INTERMEDIATEBUFFERSIZE = 131072;

