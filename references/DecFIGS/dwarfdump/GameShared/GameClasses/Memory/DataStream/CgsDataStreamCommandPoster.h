// CgsDataStreamCommandPoster.h:41
struct CgsMemory::DataStreamCommandPoster {
	// CgsDataStreamCommandPoster.h:44
	extern const uint64_t KU_NEXT_COMMAND_BIT;

	// CgsDataStreamCommandPoster.h:45
	extern const uint64_t KU_NUM_USERS_BIT = 24;

	// CgsDataStreamCommandPoster.h:47
	extern const uint64_t KU_NEXT_COMMAND_MAX = 16777215;

	// CgsDataStreamCommandPoster.h:48
	extern const uint64_t KU_NUM_USERS_MAX = 15;

	// CgsDataStreamCommandPoster.h:50
	extern const uint64_t KU_NEXT_COMMAND_MASK = 16777215;

	// CgsDataStreamCommandPoster.h:51
	extern const uint64_t KU_NUM_USERS_MASK = 251658240;

private:
	// CgsDataStreamCommandPoster.h:114
	Futex::AtomicUint64 mEncodedStatus;

	// CgsDataStreamCommandPoster.h:119
	char * mpcCommandBuffer;

	// CgsDataStreamCommandPoster.h:120
	int32_t miCommandBufferSize;

	// CgsDataStreamCommandPoster.h:121
	int32_t miCommandSize;

	// CgsDataStreamCommandPoster.h:122
	int32_t miNumCommands;

	// CgsDataStreamCommandPoster.h:123
	int32_t miMaxCommands;

	// CgsDataStreamCommandPoster.h:124
	char * mpcDataBuffer;

	// CgsDataStreamCommandPoster.h:125
	int32_t miDataBufferSize;

	// CgsDataStreamCommandPoster.h:126
	int32_t miDataBufferUsed;

	// CgsDataStreamCommandPoster.h:127
	bool mbStreaming;

public:
	// CgsDataStreamCommandPoster.h:64
	void Construct(void *, int32_t, int32_t, int32_t, void *, int32_t, int32_t);

	// CgsDataStreamCommandPoster.h:68
	void Destruct();

	// CgsDataStreamCommandPoster.h:72
	void Begin();

	// CgsDataStreamCommandPoster.h:76
	void End();

	// CgsDataStreamCommandPoster.h:82
	void * AllocateData(int32_t, int32_t);

	// CgsDataStreamCommandPoster.h:87
	int32_t AddCommand(void *);

	// CgsDataStreamCommandPoster.h:93
	int32_t AddCommands(void *, int32_t);

	// CgsDataStreamCommandPoster.h:98
	int32_t AllocateCommand(void **);

	// CgsDataStreamCommandPoster.h:104
	int32_t AllocateCommands(int32_t, void **);

	// CgsDataStreamCommandPoster.h:109
	int32_t GetNumCommands() const;

private:
	// CgsDataStreamCommandPoster.h:132
	uint64_t EncodeStatus(uint8_t, uint32_t);

	// CgsDataStreamCommandPoster.h:138
	void DecodeStatus(const uint64_t &, uint8_t *, uint32_t *);

	// CgsDataStreamCommandPoster.h:141
	uint64_t GetEncodedStatus() const;

	// CgsDataStreamCommandPoster.h:144
	void SetEncodedStatusConditional(uint64_t, uint64_t);

}

// CgsDataStreamCommandPoster.h:44
extern const uint64_t KU_NEXT_COMMAND_BIT;

// CgsDataStreamCommandPoster.h:45
extern const uint64_t KU_NUM_USERS_BIT = 24;

// CgsDataStreamCommandPoster.h:47
extern const uint64_t KU_NEXT_COMMAND_MAX = 16777215;

// CgsDataStreamCommandPoster.h:48
extern const uint64_t KU_NUM_USERS_MAX = 15;

// CgsDataStreamCommandPoster.h:50
extern const uint64_t KU_NEXT_COMMAND_MASK = 16777215;

// CgsDataStreamCommandPoster.h:51
extern const uint64_t KU_NUM_USERS_MASK = 251658240;

// CgsDataStreamCommandPoster.h:41
struct CgsMemory::DataStreamCommandPoster {
	// CgsDataStreamCommandPoster.h:44
	extern const uint64_t KU_NEXT_COMMAND_BIT;

	// CgsDataStreamCommandPoster.h:45
	extern const uint64_t KU_NUM_USERS_BIT = 24;

	// CgsDataStreamCommandPoster.h:47
	extern const uint64_t KU_NEXT_COMMAND_MAX = 16777215;

	// CgsDataStreamCommandPoster.h:48
	extern const uint64_t KU_NUM_USERS_MAX = 15;

	// CgsDataStreamCommandPoster.h:50
	extern const uint64_t KU_NEXT_COMMAND_MASK = 16777215;

	// CgsDataStreamCommandPoster.h:51
	extern const uint64_t KU_NUM_USERS_MASK = 251658240;

private:
	// CgsDataStreamCommandPoster.h:114
	DataStreamResultReader::AtomicUint64 mEncodedStatus;

	// CgsDataStreamCommandPoster.h:119
	char * mpcCommandBuffer;

	// CgsDataStreamCommandPoster.h:120
	int32_t miCommandBufferSize;

	// CgsDataStreamCommandPoster.h:121
	int32_t miCommandSize;

	// CgsDataStreamCommandPoster.h:122
	int32_t miNumCommands;

	// CgsDataStreamCommandPoster.h:123
	int32_t miMaxCommands;

	// CgsDataStreamCommandPoster.h:124
	char * mpcDataBuffer;

	// CgsDataStreamCommandPoster.h:125
	int32_t miDataBufferSize;

	// CgsDataStreamCommandPoster.h:126
	int32_t miDataBufferUsed;

	// CgsDataStreamCommandPoster.h:127
	bool mbStreaming;

public:
	// CgsDataStreamCommandPoster.h:64
	void Construct(void *, int32_t, int32_t, int32_t, void *, int32_t, int32_t);

	// CgsDataStreamCommandPoster.h:68
	void Destruct();

	// CgsDataStreamCommandPoster.h:72
	void Begin();

	// CgsDataStreamCommandPoster.h:76
	void End();

	// CgsDataStreamCommandPoster.h:82
	void * AllocateData(int32_t, int32_t);

	// CgsDataStreamCommandPoster.h:87
	int32_t AddCommand(void *);

	// CgsDataStreamCommandPoster.h:93
	int32_t AddCommands(void *, int32_t);

	// CgsDataStreamCommandPoster.h:98
	int32_t AllocateCommand(void **);

	// CgsDataStreamCommandPoster.h:104
	int32_t AllocateCommands(int32_t, void **);

	// CgsDataStreamCommandPoster.h:109
	int32_t GetNumCommands() const;

private:
	// CgsDataStreamCommandPoster.h:132
	uint64_t EncodeStatus(uint8_t, uint32_t);

	// CgsDataStreamCommandPoster.h:138
	void DecodeStatus(const uint64_t &, uint8_t *, uint32_t *);

	// CgsDataStreamCommandPoster.h:141
	uint64_t GetEncodedStatus() const;

	// CgsDataStreamCommandPoster.h:144
	void SetEncodedStatusConditional(uint64_t, uint64_t);

}

