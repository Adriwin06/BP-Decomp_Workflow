// CgsScatterStream.h:43
struct CgsMemory::ScatterStreamBase : public DistributionStream {
protected:
	// CgsScatterStream.h:50
	void Construct();

	// CgsScatterStream.h:54
	void Destruct();

	// CgsScatterStream.h:58
	bool UpdateStream();

}

