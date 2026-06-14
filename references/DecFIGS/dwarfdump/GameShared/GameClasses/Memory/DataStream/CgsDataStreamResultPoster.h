// CgsDataStreamResultPoster.h:50
struct CgsMemory::DataStreamResultPoster {
private:
	// CgsDataStreamResultPoster.h:92
	DataStreamResultReader * mpReader;

public:
	// CgsDataStreamResultPoster.h:56
	void Construct(DataStreamResultReader *);

	// CgsDataStreamResultPoster.h:60
	void Destruct();

	// CgsDataStreamResultPoster.h:66
	void * AllocateData(int32_t, int32_t);

	// CgsDataStreamResultPoster.h:71
	int32_t AddResult(void *);

	// CgsDataStreamResultPoster.h:77
	int32_t AddResults(void *, int32_t);

	// CgsDataStreamResultPoster.h:80
	uint32_t GetResultSize() const;

	// CgsDataStreamResultPoster.h:83
	uint32_t GetMaxResultsInBuffer() const;

private:
	// CgsDataStreamResultPoster.h:95
	uint64_t GetReaderEncodedStatus() const;

	// CgsDataStreamResultPoster.h:98
	bool SetReaderEncodedStatusConditional(uint64_t, uint64_t);

}

