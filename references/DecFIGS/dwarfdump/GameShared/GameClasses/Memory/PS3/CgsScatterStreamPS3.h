// CgsScatterStreamPS3.h:44
struct CgsMemory::ScatterStream : public ScatterStreamBase {
private:
	// CgsScatterStreamPS3.h:61
	bool mbRunningSPUStream;

	// CgsScatterStreamPS3.h:62
	Job mStreamJob;

	// CgsScatterStreamPS3.h:63
	ScatterStreamData mJobData;

	// CgsScatterStreamPS3.h:64
	ScatterStreamStatus mJobStatus;

public:
	// CgsScatterStreamPS3.h:49
	void Construct();

	// CgsScatterStreamPS3.h:53
	void Destruct();

	// CgsScatterStreamPS3.h:57
	bool Update();

private:
	// CgsScatterStreamPS3.h:68
	bool UpdateLocalMemoryStream();

	// CgsScatterStreamPS3.h:72
	bool UpdateSPUMemoryStream();

	// CgsScatterStreamPS3.h:76
	void MemCpyLocal(void *, const void *, uint32_t);

}

// CgsScatterStreamPS3.h:44
struct CgsMemory::ScatterStream : public ScatterStreamBase {
private:
	// CgsScatterStreamPS3.h:61
	bool mbRunningSPUStream;

	// CgsScatterStreamPS3.h:62
	Job mStreamJob;

	// CgsScatterStreamPS3.h:63
	ScatterStreamData mJobData;

	// CgsScatterStreamPS3.h:64
	ScatterStreamStatus mJobStatus;

public:
	// CgsScatterStreamPS3.h:49
	void Construct();

	// CgsScatterStreamPS3.h:53
	void Destruct();

	// CgsScatterStreamPS3.h:57
	bool Update();

private:
	// CgsScatterStreamPS3.h:68
	// Declaration
	bool UpdateLocalMemoryStream() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsScatterStreamPS3.cpp:223
		using namespace CgsDev::Message;

	}

	// CgsScatterStreamPS3.h:72
	bool UpdateSPUMemoryStream();

	// CgsScatterStreamPS3.h:76
	void MemCpyLocal(void *, const void *, uint32_t);

}

