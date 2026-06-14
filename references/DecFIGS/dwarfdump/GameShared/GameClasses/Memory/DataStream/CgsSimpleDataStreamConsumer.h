// CgsSimpleDataStreamConsumer.h:44
struct CgsMemory::SimpleDataStreamConsumer {
private:
	// CgsSimpleDataStreamConsumer.h:87
	CgsMemory::SimpleDataStreamProducer::SharedData mProducerData;

	// CgsSimpleDataStreamConsumer.h:88
	void * mpIntermediateResultBuffer;

	// CgsSimpleDataStreamConsumer.h:89
	int32_t miIntermediateResultBufferSize;

	// CgsSimpleDataStreamConsumer.h:90
	DataStreamCommandReader mCommandReader;

public:
	// CgsSimpleDataStreamConsumer.h:49
	int32_t GetRequiredBufferSize(int32_t);

	// CgsSimpleDataStreamConsumer.h:56
	void Construct(CgsMemory::SimpleDataStreamProducer *, void *, int32_t);

	// CgsSimpleDataStreamConsumer.h:60
	void Destruct();

	// CgsSimpleDataStreamConsumer.h:66
	CgsMemory::DataStreamCommandReader::EReadCommandStatus ReadCommand(void *, int32_t *);

	// CgsSimpleDataStreamConsumer.h:69
	uint32_t GetCommandSize() const;

	// CgsSimpleDataStreamConsumer.h:72
	uint32_t GetNumCommandsInBuffer() const;

	// CgsSimpleDataStreamConsumer.h:78
	void AddResult(void *, int32_t);

	// CgsSimpleDataStreamConsumer.h:83
	void * AllocateResult(int32_t);

}

