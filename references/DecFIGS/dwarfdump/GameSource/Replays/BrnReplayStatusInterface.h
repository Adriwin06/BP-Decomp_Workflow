// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayStatusInterface.h:29
	namespace ReplayIO {
	}

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayStatusInterface.h:29
	namespace ReplayIO {
		struct StatusInterface;

		struct RequestInterface;

	}

}

// BrnReplayStatusInterface.h:38
struct BrnReplays::ReplayIO::StatusInterface {
private:
	// BrnReplayStatusInterface.h:101
	uint32_t mxStatusFlags;

	// BrnReplayStatusInterface.h:102
	Reel[5] maReels;

	// BrnReplayStatusInterface.h:103
	int32_t miCurrentRecordReel;

	// BrnReplayStatusInterface.h:104
	int32_t miCurrentPlaybackReel;

public:
	// BrnReplayStatusInterface.h:52
	void Construct();

	// BrnReplayStatusInterface.h:55
	StatusInterface & operator=(const StatusInterface &);

	// BrnReplayStatusInterface.h:58
	bool IsPlaying() const;

	// BrnReplayStatusInterface.h:61
	void SetPlaying(bool);

	// BrnReplayStatusInterface.h:64
	bool IsRecording() const;

	// BrnReplayStatusInterface.h:67
	void SetRecording(bool);

	// BrnReplayStatusInterface.h:70
	bool IsSaving() const;

	// BrnReplayStatusInterface.h:73
	void SetSaving(bool);

	// BrnReplayStatusInterface.h:76
	bool IsFull() const;

	// BrnReplayStatusInterface.h:79
	void SetFull(bool);

	// BrnReplayStatusInterface.h:82
	uint32_t GetStatusFlags() const;

	// BrnReplayStatusInterface.h:85
	void SetReel(int32_t, const Reel *);

	// BrnReplayStatusInterface.h:88
	const Reel * GetReel(int32_t) const;

	// BrnReplayStatusInterface.h:91
	void SetCurrentReels(int32_t, int32_t);

	// BrnReplayStatusInterface.h:94
	int32_t GetCurrentRecordReel() const;

	// BrnReplayStatusInterface.h:97
	int32_t GetCurrentPlaybackReel() const;

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayStatusInterface.h:29
	namespace ReplayIO {
		struct StatusInterface;

		struct RequestInterface;

		struct InputBuffer_PreSim;

		struct OutputBuffer_PreSim;

		struct InputBuffer_PostSim;

		struct OutputBuffer_PostSim;

	}

}

// BrnReplayShared.h:96
namespace BrnReplays {
	// BrnReplayStatusInterface.h:29
	namespace ReplayIO {
		struct StatusInterface;

	}

}

