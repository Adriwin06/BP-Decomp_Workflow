// CgsRelocator.h:44
struct CgsMemory::Relocator {
	// CgsRelocator.h:46
	extern int32_t _miExecutePerfMon;

	// CgsRelocator.h:47
	extern int32_t _miUpdatePerfMon;

	// CgsRelocator.h:48
	extern int32_t _miGPUCopyPerfMon;

private:
	// CgsRelocator.h:67
	bool mbRunningJob;

	// CgsRelocator.h:68
	bool mbRunningGPU;

	// CgsRelocator.h:69
	Job mJob;

	// CgsRelocator.h:70
	RelocatorData mJobData;

public:
	// CgsRelocator.h:52
	void Construct();

	// CgsRelocator.h:56
	void Destruct();

	// CgsRelocator.h:60
	void Execute(CgsMemory::RelocationParams *);

	// CgsRelocator.h:64
	bool Update(bool, bool);

private:
	// CgsRelocator.h:74
	void GPUMove(void *, const void *, bool, bool, int32_t);

	// CgsRelocator.h:77
	void GPUMemCopy(void *, const void *, bool, bool, int32_t);

}

// CgsRelocator.h:44
struct CgsMemory::Relocator {
	// CgsRelocator.h:46
	extern int32_t _miExecutePerfMon;

	// CgsRelocator.h:47
	extern int32_t _miUpdatePerfMon;

	// CgsRelocator.h:48
	extern int32_t _miGPUCopyPerfMon;

private:
	// CgsRelocator.h:67
	bool mbRunningJob;

	// CgsRelocator.h:68
	bool mbRunningGPU;

	// CgsRelocator.h:69
	Job mJob;

	// CgsRelocator.h:70
	RelocatorData mJobData;

public:
	// CgsRelocator.h:52
	void Construct();

	// CgsRelocator.h:56
	void Destruct();

	// CgsRelocator.h:60
	void Execute(CgsMemory::RelocationParams *);

	// CgsRelocator.h:64
	// Declaration
	bool Update(bool, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsRelocator.cpp:193
		using namespace CgsDev::Message;

		// CgsRelocator.cpp:203
		using namespace CgsDev::Message;

	}

private:
	// CgsRelocator.h:74
	void GPUMove(void *, const void *, bool, bool, int32_t);

	// CgsRelocator.h:77
	void GPUMemCopy(void *, const void *, bool, bool, int32_t);

}

// CgsRelocator.h:46
extern int32_t _miExecutePerfMon;

// CgsRelocator.h:47
extern int32_t _miUpdatePerfMon;

// CgsRelocator.h:48
extern int32_t _miGPUCopyPerfMon;

