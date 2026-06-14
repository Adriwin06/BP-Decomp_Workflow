// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct DataStreamResultReader {
		// CgsDataStreamResultReader.h:57
		enum EReadResultStatus {
			E_READ_SUCCESS = 0,
			E_READ_EMPTY = 1,
			E_READ_FINISHED = 2,
			E_READ_COUNT = 3,
		}

	}

}

// CgsDataStreamResultReader.h:41
struct CgsMemory::DataStreamResultReader {
	// CgsDataStreamResultReader.h:44
	extern const uint64_t KU_NUM_RESULTS_BIT;

	// CgsDataStreamResultReader.h:45
	extern const uint64_t KU_DATA_BUFFER_USED_BIT = 24;

	// CgsDataStreamResultReader.h:46
	extern const uint64_t KU_NUM_USERS_BIT = 48;

	// CgsDataStreamResultReader.h:48
	extern const uint64_t KU_NUM_RESULTS_MAX = 16777215;

	// CgsDataStreamResultReader.h:49
	extern const uint64_t KU_DATA_BUFFER_USED_MAX = 16777215;

	// CgsDataStreamResultReader.h:50
	extern const uint64_t KU_NUM_USERS_MAX = 15;

	// CgsDataStreamResultReader.h:52
	extern const uint64_t KU_NUM_RESULTS_MASK = 16777215;

	// CgsDataStreamResultReader.h:53
	extern const uint64_t KU_DATA_BUFFER_USED_MASK = 4278190080;

	// CgsDataStreamResultReader.h:54
	extern const uint64_t KU_NUM_USERS_MASK;

private:
	// CgsDataStreamResultReader.h:99
	Futex::AtomicUint64 mEncodedStatus;

	// CgsDataStreamResultReader.h:104
	char * mpcResultBuffer;

	// CgsDataStreamResultReader.h:105
	int32_t miResultBufferSize;

	// CgsDataStreamResultReader.h:106
	int32_t miResultSize;

	// CgsDataStreamResultReader.h:107
	int32_t miMaxResults;

	// CgsDataStreamResultReader.h:108
	char * mpcDataBuffer;

	// CgsDataStreamResultReader.h:109
	int32_t miDataBufferSize;

	// CgsDataStreamResultReader.h:110
	bool mbStreaming;

	// CgsDataStreamResultReader.h:111
	int32_t miNextResult;

	// CgsDataStreamResultReader.h:112
	int32_t miNumResultsAtEnd;

public:
	// CgsDataStreamResultReader.h:73
	void Construct(void *, int32_t, int32_t, void *, int32_t);

	// CgsDataStreamResultReader.h:77
	void Destruct();

	// CgsDataStreamResultReader.h:81
	void Begin();

	// CgsDataStreamResultReader.h:85
	void End();

	// CgsDataStreamResultReader.h:90
	CgsMemory::DataStreamResultReader::EReadResultStatus ReadResult(void *);

	// CgsDataStreamResultReader.h:94
	int32_t GetResultSize() const;

private:
	// CgsDataStreamResultReader.h:119
	uint64_t EncodeStatus(uint8_t, uint32_t, uint32_t);

	// CgsDataStreamResultReader.h:127
	void DecodeStatus(const uint64_t &, uint8_t *, uint32_t *, uint32_t *);

}

// CgsDataStreamResultReader.h:44
extern const uint64_t KU_NUM_RESULTS_BIT;

// CgsDataStreamResultReader.h:45
extern const uint64_t KU_DATA_BUFFER_USED_BIT = 24;

// CgsDataStreamResultReader.h:46
extern const uint64_t KU_NUM_USERS_BIT = 48;

// CgsDataStreamResultReader.h:48
extern const uint64_t KU_NUM_RESULTS_MAX = 16777215;

// CgsDataStreamResultReader.h:49
extern const uint64_t KU_DATA_BUFFER_USED_MAX = 16777215;

// CgsDataStreamResultReader.h:50
extern const uint64_t KU_NUM_USERS_MAX = 15;

// CgsDataStreamResultReader.h:52
extern const uint64_t KU_NUM_RESULTS_MASK = 16777215;

// CgsDataStreamResultReader.h:53
extern const uint64_t KU_DATA_BUFFER_USED_MASK = 4278190080;

// CgsDataStreamResultReader.h:54
extern const uint64_t KU_NUM_USERS_MASK;

// CgsLuaState.h:32
namespace CgsMemory {
	// Declaration
	struct DataStreamResultReader {
		// CgsDataStreamResultReader.h:57
		enum EReadResultStatus {
			E_READ_SUCCESS = 0,
			E_READ_EMPTY = 1,
			E_READ_FINISHED = 2,
			E_READ_COUNT = 3,
		}

	}

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// Declaration
	struct DataStreamResultReader {
		// CgsDataStreamResultReader.h:57
		enum EReadResultStatus {
			E_READ_SUCCESS = 0,
			E_READ_EMPTY = 1,
			E_READ_FINISHED = 2,
			E_READ_COUNT = 3,
		}

	}

}

// CgsDataStreamResultReader.h:24
namespace CgsMemory {
	// Declaration
	struct DataStreamResultReader {
		// CgsDataStreamResultReader.h:57
		enum EReadResultStatus {
			E_READ_SUCCESS = 0,
			E_READ_EMPTY = 1,
			E_READ_FINISHED = 2,
			E_READ_COUNT = 3,
		}

	}

	struct HeapMalloc;

	struct LinearMalloc;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

}

// CgsDataStreamResultReader.h:41
struct CgsMemory::DataStreamResultReader {
	// CgsDataStreamResultReader.h:44
	extern const uint64_t KU_NUM_RESULTS_BIT;

	// CgsDataStreamResultReader.h:45
	extern const uint64_t KU_DATA_BUFFER_USED_BIT = 24;

	// CgsDataStreamResultReader.h:46
	extern const uint64_t KU_NUM_USERS_BIT = 48;

	// CgsDataStreamResultReader.h:48
	extern const uint64_t KU_NUM_RESULTS_MAX = 16777215;

	// CgsDataStreamResultReader.h:49
	extern const uint64_t KU_DATA_BUFFER_USED_MAX = 16777215;

	// CgsDataStreamResultReader.h:50
	extern const uint64_t KU_NUM_USERS_MAX = 15;

	// CgsDataStreamResultReader.h:52
	extern const uint64_t KU_NUM_RESULTS_MASK = 16777215;

	// CgsDataStreamResultReader.h:53
	extern const uint64_t KU_DATA_BUFFER_USED_MASK = 4278190080;

	// CgsDataStreamResultReader.h:54
	extern const uint64_t KU_NUM_USERS_MASK;

	// eathread_atomic.h:299
	typedef AtomicInt<std::uint64_t> AtomicUint64;

private:
	// CgsDataStreamResultReader.h:99
	DataStreamResultReader::AtomicUint64 mEncodedStatus;

	// CgsDataStreamResultReader.h:104
	char * mpcResultBuffer;

	// CgsDataStreamResultReader.h:105
	int32_t miResultBufferSize;

	// CgsDataStreamResultReader.h:106
	int32_t miResultSize;

	// CgsDataStreamResultReader.h:107
	int32_t miMaxResults;

	// CgsDataStreamResultReader.h:108
	char * mpcDataBuffer;

	// CgsDataStreamResultReader.h:109
	int32_t miDataBufferSize;

	// CgsDataStreamResultReader.h:110
	bool mbStreaming;

	// CgsDataStreamResultReader.h:111
	int32_t miNextResult;

	// CgsDataStreamResultReader.h:112
	int32_t miNumResultsAtEnd;

public:
	// CgsDataStreamResultReader.h:73
	void Construct(void *, int32_t, int32_t, void *, int32_t);

	// CgsDataStreamResultReader.h:77
	void Destruct();

	// CgsDataStreamResultReader.h:81
	void Begin();

	// CgsDataStreamResultReader.h:85
	void End();

	// CgsDataStreamResultReader.h:90
	CgsMemory::DataStreamResultReader::EReadResultStatus ReadResult(void *);

	// CgsDataStreamResultReader.h:94
	int32_t GetResultSize() const;

private:
	// CgsDataStreamResultReader.h:119
	uint64_t EncodeStatus(uint8_t, uint32_t, uint32_t);

	// CgsDataStreamResultReader.h:127
	void DecodeStatus(const uint64_t &, uint8_t *, uint32_t *, uint32_t *);

}

