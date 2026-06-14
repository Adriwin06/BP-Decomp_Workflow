// CgsGatherStreamPS3.h:44
struct CgsMemory::GatherStream : public GatherStreamBase {
	// CgsGatherStreamPS3.h:47
	extern int32_t _miLocalTransferPerfMon;

private:
	// CgsGatherStreamPS3.h:63
	bool mbRunningSPUStream;

	// CgsGatherStreamPS3.h:64
	Job mStreamJob;

	// CgsGatherStreamPS3.h:65
	GatherStreamData mJobData;

	// CgsGatherStreamPS3.h:66
	GatherStreamStatus mJobStatus;

public:
	// CgsGatherStreamPS3.h:51
	void Construct();

	// CgsGatherStreamPS3.h:55
	void Destruct();

	// CgsGatherStreamPS3.h:59
	bool Update();

private:
	// CgsGatherStreamPS3.h:70
	bool UpdateLocalMemoryStream();

	// CgsGatherStreamPS3.h:74
	bool UpdateSPUMemoryStream();

	// CgsGatherStreamPS3.h:78
	void MemCpyLocal(void *, const void *, uint32_t);

}

// CgsGatherStreamPS3.h:47
extern int32_t _miLocalTransferPerfMon;

