// CgsSmallResource.h:24
namespace CgsResource {
	// DecompressionJobInterface.h:39
	enum EDecompressionJobStage {
		E_DJS_IDLE = 0,
		E_DJS_ADDING_ENTRIES = 1,
		E_DJS_FLUSHING = 2,
		E_DJS_COUNT = 3,
	}

}

// DecompressionJobInterface.h:56
struct CgsResource::DecompressionJobInterface {
	// DecompressionJobInterface.h:59
	extern const uint32_t KU_COMPRESSION_BUFFER_SIZE = 131072;

private:
	// DecompressionJobInterface.h:99
	EA::Jobs::JobScheduler * mpScheduler;

	// DecompressionJobInterface.h:100
	DecompressionJobData mJobData;

	// DecompressionJobInterface.h:101
	DecompressionJobStatus mJobStatus;

	// DecompressionJobInterface.h:102
	Job mJob;

	// DecompressionJobInterface.h:103
	CompressedData * mpEntries;

	// DecompressionJobInterface.h:104
	uint32_t muMaxEntries;

	// DecompressionJobInterface.h:105
	uint32_t muNumEntries;

	// DecompressionJobInterface.h:106
	CgsResource::EDecompressionJobStage meStage;

	// DecompressionJobInterface.h:107
	bool mbEntryInProgress;

	// DecompressionJobInterface.h:113
	char[65536] macMallocBuffer;

	// DecompressionJobInterface.h:114
	IndexedNodeHeapListNode[256] maMallocNodes;

public:
	// DecompressionJobInterface.h:63
	void Construct(EA::Jobs::JobScheduler *, CompressedData *, uint32_t);

	// DecompressionJobInterface.h:67
	void Destruct();

	// DecompressionJobInterface.h:71
	void BeginStream();

	// DecompressionJobInterface.h:75
	bool RunFlushJobs();

	// DecompressionJobInterface.h:79
	bool WaitForFlushJobs(bool);

	// DecompressionJobInterface.h:83
	void EndStream();

	// DecompressionJobInterface.h:87
	void CreateEntry(void *, uint32_t);

	// DecompressionJobInterface.h:91
	void AppendToEntry(void *, uint32_t);

	// DecompressionJobInterface.h:95
	void FinishEntry();

}

// CgsResourceID.h:30
namespace CgsResource {
	// DecompressionJobInterface.h:39
	enum EDecompressionJobStage {
		E_DJS_IDLE = 0,
		E_DJS_ADDING_ENTRIES = 1,
		E_DJS_FLUSHING = 2,
		E_DJS_COUNT = 3,
	}

}

// DecompressionJobInterface.h:56
struct CgsResource::DecompressionJobInterface {
	// DecompressionJobInterface.h:59
	extern const uint32_t KU_COMPRESSION_BUFFER_SIZE = 131072;

private:
	// DecompressionJobInterface.h:99
	JobScheduler * mpScheduler;

	// DecompressionJobInterface.h:100
	DecompressionJobData mJobData;

	// DecompressionJobInterface.h:101
	DecompressionJobStatus mJobStatus;

	// DecompressionJobInterface.h:102
	Job mJob;

	// DecompressionJobInterface.h:103
	CompressedData * mpEntries;

	// DecompressionJobInterface.h:104
	uint32_t muMaxEntries;

	// DecompressionJobInterface.h:105
	uint32_t muNumEntries;

	// DecompressionJobInterface.h:106
	CgsResource::EDecompressionJobStage meStage;

	// DecompressionJobInterface.h:107
	bool mbEntryInProgress;

	// DecompressionJobInterface.h:113
	char[65536] macMallocBuffer;

	// DecompressionJobInterface.h:114
	IndexedNodeHeapListNode[256] maMallocNodes;

public:
	// DecompressionJobInterface.h:63
	void Construct(JobScheduler *, CompressedData *, uint32_t);

	// DecompressionJobInterface.h:67
	void Destruct();

	// DecompressionJobInterface.h:71
	void BeginStream();

	// DecompressionJobInterface.h:75
	bool RunFlushJobs();

	// DecompressionJobInterface.h:79
	bool WaitForFlushJobs(bool);

	// DecompressionJobInterface.h:83
	void EndStream();

	// DecompressionJobInterface.h:87
	void CreateEntry(void *, uint32_t);

	// DecompressionJobInterface.h:91
	void AppendToEntry(void *, uint32_t);

	// DecompressionJobInterface.h:95
	void FinishEntry();

}

