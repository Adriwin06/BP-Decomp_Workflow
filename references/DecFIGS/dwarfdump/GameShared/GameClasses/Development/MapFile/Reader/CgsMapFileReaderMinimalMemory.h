// CgsMapFileReaderMinimalMemory.h:91
extern const int32_t KI_BUFFER_SIZE = 4096;

// CgsMapFileReaderMinimalMemory.h:95
extern const int32_t KI_MAX_STACK_RESULTS = 10;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		// Declaration
		struct MinimalMemoryReader {
		protected:
			// CgsMapFileReaderMinimalMemory.h:91
			extern const int32_t KI_BUFFER_SIZE = 4096;

			// CgsMapFileReaderMinimalMemory.h:95
			extern const int32_t KI_MAX_STACK_RESULTS = 10;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		// Declaration
		struct MinimalMemoryReader {
		public:
			// CgsMapFileReaderMinimalMemory.h:104
			void SetAsyncronousMode(bool);

		protected:
			// CgsMapFileReaderMinimalMemory.h:91
			extern const int32_t KI_BUFFER_SIZE = 4096;

			// CgsMapFileReaderMinimalMemory.h:95
			extern const int32_t KI_MAX_STACK_RESULTS = 10;

		}

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		// Declaration
		struct MinimalMemoryReader {
		public:
			// CgsMapFileReaderMinimalMemory.h:55
			MinimalMemoryReader();

		protected:
			// CgsMapFileReaderMinimalMemory.h:91
			extern const int32_t KI_BUFFER_SIZE = 4096;

			// CgsMapFileReaderMinimalMemory.h:95
			extern const int32_t KI_MAX_STACK_RESULTS = 10;

		}

	}

}

// CgsMapFileReaderMinimalMemory.h:51
struct CgsDev::MapFile::MinimalMemoryReader : public CgsDev::MapFile::Reader {
protected:
	// CgsMapFileReaderMinimalMemory.h:82
	bool mbAsycronous;

	// CgsMapFileReaderMinimalMemory.h:85
	std::FILE * pFileHandle;

	// CgsMapFileReaderMinimalMemory.h:88
	bool mbFinished;

	// CgsMapFileReaderMinimalMemory.h:91
	extern const int32_t KI_BUFFER_SIZE = 4096;

	// CgsMapFileReaderMinimalMemory.h:92
	uint8_t[4096] maReadBuffer;

	// CgsMapFileReaderMinimalMemory.h:95
	extern const int32_t KI_MAX_STACK_RESULTS = 10;

	// CgsMapFileReaderMinimalMemory.h:96
	char[10][120] maacStackNames;

public:
	// CgsMapFileReaderMinimalMemory.h:55
	void MinimalMemoryReader();

	// CgsMapFileReaderMinimalMemory.cpp:49
	virtual void Prepare(const char *, StackUnpickBase *);

	// CgsMapFileReaderMinimalMemory.cpp:111
	virtual void Update();

	// CgsMapFileReaderMinimalMemory.cpp:132
	virtual const char * GetStackEntryName(int32_t);

	// CgsMapFileReaderMinimalMemory.h:104
	void SetAsyncronousMode(bool);

protected:
	// CgsMapFileReaderMinimalMemory.cpp:164
	void ReadRecords();

}

