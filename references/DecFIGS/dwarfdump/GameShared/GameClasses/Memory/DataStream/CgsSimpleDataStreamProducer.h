// CgsHeapMalloc.h:33
namespace CgsMemory {
	// Declaration
	struct SimpleDataStreamProducer {
		// CgsSimpleDataStreamProducer.h:79
		struct SharedData {
			// CgsSimpleDataStreamProducer.h:81
			int32_t miMaxCommands;

			// CgsSimpleDataStreamProducer.h:82
			int32_t miCommandSize;

			// CgsSimpleDataStreamProducer.h:83
			int32_t miMaxResults;

			// CgsSimpleDataStreamProducer.h:84
			int32_t miResultSize;

			// CgsSimpleDataStreamProducer.h:85
			int32_t miAlignedResultSize;

			// CgsSimpleDataStreamProducer.h:86
			void * mpResultBuffer;

			// CgsSimpleDataStreamProducer.h:87
			DataStreamCommandPoster * mpPoster;

		private:
			// CgsSimpleDataStreamProducer.h:89
			uint32_t[1] muPad;

		}

	}

}

// CgsSimpleDataStreamProducer.h:47
struct CgsMemory::SimpleDataStreamResultIterator {
private:
	// CgsSimpleDataStreamProducer.h:60
	int32_t miResultIndex;

	// CgsSimpleDataStreamProducer.h:61
	CgsMemory::SimpleDataStreamProducer * mpParent;

public:
	// CgsSimpleDataStreamProducer.h:51
	const void * GetFirst();

	// CgsSimpleDataStreamProducer.h:54
	const void * GetNext();

	// CgsSimpleDataStreamProducer.h:57
	const void * GetCurrent();

}

// CgsSimpleDataStreamProducer.h:75
struct CgsMemory::SimpleDataStreamProducer {
private:
	// CgsSimpleDataStreamProducer.h:152
	CgsMemory::SimpleDataStreamProducer::SharedData mShared;

	// CgsSimpleDataStreamProducer.h:154
	int32_t miMaxCommands;

	// CgsSimpleDataStreamProducer.h:155
	int32_t miCommandSize;

	// CgsSimpleDataStreamProducer.h:156
	int32_t miMaxResults;

	// CgsSimpleDataStreamProducer.h:157
	int32_t miResultSize;

	// CgsSimpleDataStreamProducer.h:158
	int32_t miAlignedResultSize;

	// CgsSimpleDataStreamProducer.h:159
	void * mpResultBuffer;

	// CgsSimpleDataStreamProducer.h:160
	SimpleDataStreamResultIterator mResultIterator;

	// CgsSimpleDataStreamProducer.h:161
	DataStreamCommandPoster mCommandPoster;

	// CgsSimpleDataStreamProducer.h:162
	bool mbIsStreaming;

	// CgsSimpleDataStreamProducer.h:163
	int32_t miNumAddedCommands;

public:
	// CgsSimpleDataStreamProducer.h:101
	void GetRequiredBufferSizes(int32_t, int32_t, int32_t, int32_t, int32_t *, int32_t *);

	// CgsSimpleDataStreamProducer.h:111
	void Construct(int32_t, int32_t, void *, int32_t, int32_t, void *);

	// CgsSimpleDataStreamProducer.h:115
	void Begin();

	// CgsSimpleDataStreamProducer.h:119
	void End();

	// CgsSimpleDataStreamProducer.h:124
	int32_t AddCommand(void *);

	// CgsSimpleDataStreamProducer.h:130
	int32_t AddCommands(void *, int32_t);

	// CgsSimpleDataStreamProducer.h:135
	int32_t AllocateCommand(void **);

	// CgsSimpleDataStreamProducer.h:141
	int32_t AllocateCommands(int32_t, void **);

	// CgsSimpleDataStreamProducer.h:144
	SimpleDataStreamResultIterator GetResultIterator() const;

	// CgsSimpleDataStreamProducer.h:147
	int32_t GetNumCommands() const;

}

// CgsLuaState.h:32
namespace CgsMemory {
	// Declaration
	struct SimpleDataStreamProducer {
		// CgsSimpleDataStreamProducer.h:79
		struct SharedData {
			// CgsSimpleDataStreamProducer.h:81
			int32_t miMaxCommands;

			// CgsSimpleDataStreamProducer.h:82
			int32_t miCommandSize;

			// CgsSimpleDataStreamProducer.h:83
			int32_t miMaxResults;

			// CgsSimpleDataStreamProducer.h:84
			int32_t miResultSize;

			// CgsSimpleDataStreamProducer.h:85
			int32_t miAlignedResultSize;

			// CgsSimpleDataStreamProducer.h:86
			void * mpResultBuffer;

			// CgsSimpleDataStreamProducer.h:87
			DataStreamCommandPoster * mpPoster;

		private:
			// CgsSimpleDataStreamProducer.h:89
			uint32_t[1] muPad;

		}

	}

}

// CgsLinearMalloc.h:28
namespace CgsMemory {
	// Declaration
	struct SimpleDataStreamProducer {
		// CgsSimpleDataStreamProducer.h:79
		struct SharedData {
			// CgsSimpleDataStreamProducer.h:81
			int32_t miMaxCommands;

			// CgsSimpleDataStreamProducer.h:82
			int32_t miCommandSize;

			// CgsSimpleDataStreamProducer.h:83
			int32_t miMaxResults;

			// CgsSimpleDataStreamProducer.h:84
			int32_t miResultSize;

			// CgsSimpleDataStreamProducer.h:85
			int32_t miAlignedResultSize;

			// CgsSimpleDataStreamProducer.h:86
			void * mpResultBuffer;

			// CgsSimpleDataStreamProducer.h:87
			DataStreamCommandPoster * mpPoster;

		private:
			// CgsSimpleDataStreamProducer.h:89
			uint32_t[1] muPad;

		}

	}

}

// CgsDataStreamResultReader.h:24
namespace CgsMemory {
	// Declaration
	struct SimpleDataStreamProducer {
		// CgsSimpleDataStreamProducer.h:79
		struct SharedData {
			// CgsSimpleDataStreamProducer.h:81
			int32_t miMaxCommands;

			// CgsSimpleDataStreamProducer.h:82
			int32_t miCommandSize;

			// CgsSimpleDataStreamProducer.h:83
			int32_t miMaxResults;

			// CgsSimpleDataStreamProducer.h:84
			int32_t miResultSize;

			// CgsSimpleDataStreamProducer.h:85
			int32_t miAlignedResultSize;

			// CgsSimpleDataStreamProducer.h:86
			void * mpResultBuffer;

			// CgsSimpleDataStreamProducer.h:87
			DataStreamCommandPoster * mpPoster;

		private:
			// CgsSimpleDataStreamProducer.h:89
			uint32_t[1] muPad;

		}

	}

}

