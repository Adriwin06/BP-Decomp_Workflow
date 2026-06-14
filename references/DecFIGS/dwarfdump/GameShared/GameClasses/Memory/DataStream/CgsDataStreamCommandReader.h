// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct DataStreamCommandReader {
		// CgsDataStreamCommandReader.h:55
		enum EReadCommandStatus {
			E_READ_SUCCESS = 0,
			E_READ_FINISHED = 1,
			E_READ_COUNT = 2,
		}

	}

}

// CgsDataStreamCommandReader.h:52
struct CgsMemory::DataStreamCommandReader {
private:
	// CgsDataStreamCommandReader.h:98
	int32_t miLastCommandIndex;

	// CgsDataStreamCommandReader.h:106
	DataStreamCommandPoster * mpPoster;

public:
	// CgsDataStreamCommandReader.h:66
	void Construct(DataStreamCommandPoster *);

	// CgsDataStreamCommandReader.h:70
	void Destruct();

	// CgsDataStreamCommandReader.h:76
	CgsMemory::DataStreamCommandReader::EReadCommandStatus ReadCommand(void *, int32_t *);

	// CgsDataStreamCommandReader.h:84
	CgsMemory::DataStreamCommandReader::EReadCommandStatus ReadCommands(void *, int32_t, int32_t *, int32_t *);

	// CgsDataStreamCommandReader.h:87
	uint32_t GetCommandSize() const;

	// CgsDataStreamCommandReader.h:90
	uint32_t GetNumCommandsInBuffer() const;

private:
	// CgsDataStreamCommandReader.h:101
	uint64_t GetPosterEncodedStatus() const;

	// CgsDataStreamCommandReader.h:104
	bool SetPosterEncodedStatusConditional(uint64_t, uint64_t);

}

