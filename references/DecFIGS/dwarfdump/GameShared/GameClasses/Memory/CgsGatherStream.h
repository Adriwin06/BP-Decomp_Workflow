// CgsGatherStream.h:43
struct CgsMemory::GatherStreamBase : public DistributionStream {
protected:
	// CgsGatherStream.h:50
	void Construct();

	// CgsGatherStream.h:54
	void Destruct();

	// CgsGatherStream.h:58
	bool UpdateStream();

}

