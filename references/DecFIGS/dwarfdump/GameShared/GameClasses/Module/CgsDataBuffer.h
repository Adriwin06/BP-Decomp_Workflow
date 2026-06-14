// CgsDataBuffer.h:49
struct CgsModule::DataBuffer {
private:
	// CgsDataBuffer.h:109
	RWMutex mMutex;

	// CgsDataBuffer.h:110
	CgsModule::DataStructure * mpDataStructure;

	// CgsDataBuffer.h:111
	IOBuffer::FlagSet8 mxStatusFlags;

	// CgsDataBuffer.h:112
	bool mbMultiThreaded;

public:
	// CgsDataBuffer.h:61
	void Construct();

	// CgsDataBuffer.h:65
	bool Prepare();

	// CgsDataBuffer.h:69
	bool Release();

	// CgsDataBuffer.h:73
	void Destruct();

	// CgsDataBuffer.h:77
	void SetDataStructure(CgsModule::DataStructure *);

	// CgsDataBuffer.h:81
	CgsModule::DataStructure * GetDataStructure();

	// CgsDataBuffer.h:86
	void SetMultiThreaded(bool);

	// CgsDataBuffer.h:90
	void LockForWrite();

	// CgsDataBuffer.h:94
	void UnlockForWrite();

	// CgsDataBuffer.h:98
	void LockForRead();

	// CgsDataBuffer.h:102
	void UnlockForRead();

	// CgsDataBuffer.h:105
	bool IsBufferLocked();

}

// CgsDataBuffer.h:30
namespace CgsModule {
	struct DataBuffer;

	struct DataStructure;

	struct Event;

	struct IOBufferStack;

	struct BaseVariableEventQueue;

	struct VariableEventQueue<16384,16>;

	struct Module;

}

// CgsDataBuffer.h:49
struct CgsModule::DataBuffer {
private:
	// CgsDataBuffer.h:109
	RWMutex mMutex;

	// CgsDataBuffer.h:110
	CgsModule::DataStructure * mpDataStructure;

	// Unknown accessibility
	// CgsFlagSet.h:307
	typedef FlagSet<std::int8_t> FlagSet8;

	// CgsDataBuffer.h:111
	DataBuffer::FlagSet8 mxStatusFlags;

	// CgsDataBuffer.h:112
	bool mbMultiThreaded;

public:
	// CgsDataBuffer.h:61
	void Construct();

	// CgsDataBuffer.h:65
	bool Prepare();

	// CgsDataBuffer.h:69
	bool Release();

	// CgsDataBuffer.h:73
	void Destruct();

	// CgsDataBuffer.h:77
	void SetDataStructure(CgsModule::DataStructure *);

	// CgsDataBuffer.h:81
	CgsModule::DataStructure * GetDataStructure();

	// CgsDataBuffer.h:86
	void SetMultiThreaded(bool);

	// CgsDataBuffer.h:90
	void LockForWrite();

	// CgsDataBuffer.h:94
	void UnlockForWrite();

	// CgsDataBuffer.h:98
	void LockForRead();

	// CgsDataBuffer.h:102
	void UnlockForRead();

	// CgsDataBuffer.h:105
	bool IsBufferLocked();

}

