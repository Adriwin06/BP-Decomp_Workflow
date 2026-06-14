// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsDistributionStream.h:35
	const uint32_t KU_DISTRIBUTION_STREAM_ALIGNMENT = 128;

}

// CgsDistributionStream.h:50
extern const uint32_t KU_FLAG_ACTIVE = 1;

// CgsLuaState.h:32
namespace CgsMemory {
	// CgsDistributionStream.h:35
	const uint32_t KU_DISTRIBUTION_STREAM_ALIGNMENT = 128;

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// CgsDistributionStream.h:35
	const uint32_t KU_DISTRIBUTION_STREAM_ALIGNMENT = 128;

}

// CgsDistributionStream.h:47
struct CgsMemory::DistributionStream {
	// CgsDistributionStream.h:50
	extern const uint32_t KU_FLAG_ACTIVE = 1;

protected:
	// CgsDistributionStream.h:83
	uint32_t muMaximumToMove;

	// CgsDistributionStream.h:84
	DistributionEntry * mpDistributionList;

	// CgsDistributionStream.h:85
	uint32_t muDistributionListLength;

	// CgsDistributionStream.h:86
	void * mpLinearBuffer;

	// CgsDistributionStream.h:87
	uint32_t muMemoryType;

	// CgsDistributionStream.h:88
	uint32_t muCurrentEntry;

	// CgsDistributionStream.h:89
	uint32_t muCurrentEntryPosition;

	// CgsDistributionStream.h:90
	uint32_t muBufferPosition;

	// CgsDistributionStream.h:91
	uint32_t muFlags;

public:
	// CgsDistributionStream.h:54
	void Execute(DistributionEntry *, uint32_t, void *, uint32_t);

	// CgsDistributionStream.h:58
	void Abort();

	// CgsDistributionStream.h:61
	uint32_t GetMaxToMove() const;

	// CgsDistributionStream.h:64
	void SetMaxToMove(uint32_t);

	// CgsDistributionStream.h:67
	uint32_t GetMemoryType() const;

	// CgsDistributionStream.h:70
	uint32_t GetCurrentEntry() const;

	// CgsDistributionStream.h:73
	uint32_t GetCurrentEntryPosition() const;

	// CgsDistributionStream.h:76
	uint32_t GetBufferPosition() const;

	// CgsDistributionStream.h:79
	bool IsActive() const;

protected:
	// CgsDistributionStream.h:95
	void Construct();

	// CgsDistributionStream.h:99
	void Destruct();

}

