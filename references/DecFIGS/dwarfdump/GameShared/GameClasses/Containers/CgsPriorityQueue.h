// CgsPriorityQueue.h:33
struct CgsContainers::BasePriorityQueue {
protected:
	// CgsPriorityQueue.h:55
	uint32_t muMaxEntries;

	// CgsPriorityQueue.h:56
	uint32_t muNumEntries;

private:
	// CgsPriorityQueue.h:84
	uint32_t muNumberToCheck;

	// CgsPriorityQueue.h:85
	uint32_t * mpuEntryIndices;

	// CgsPriorityQueue.h:86
	int32_t * mpiEntryPriorities;

public:
	// CgsPriorityQueue.h:38
	void Tick(int32_t);

	// CgsPriorityQueue.h:41
	void Clear();

	// CgsPriorityQueue.h:44
	int32_t GetLength() const;

	// CgsPriorityQueue.h:47
	int32_t GetMaxLength() const;

	// CgsPriorityQueue.h:51
	int32_t GetEntryPriority(int32_t) const;

protected:
	// CgsPriorityQueue.h:63
	void Construct(uint32_t, uint32_t, uint32_t *, int32_t *);

	// CgsPriorityQueue.h:67
	uint32_t AddEntry(int32_t);

	// CgsPriorityQueue.h:71
	void RemoveEntry(uint32_t);

	// CgsPriorityQueue.h:75
	bool GetNextIndexByPriority(uint32_t *) const;

	// CgsPriorityQueue.h:79
	uint32_t GetEntryIndex(int32_t) const;

}

// CgsPriorityQueue.h:90
struct CgsContainers::PriorityQueue<CgsResource::Events::LoadBundleRequest,128u> : public BasePriorityQueue {
private:
	// CgsPriorityQueue.h:121
	LoadBundleRequest * mpEntries;

public:
	// CgsPriorityQueue.h:256
	void Construct(unsigned int, uint32_t *, int32_t *, LoadBundleRequest *);

	// CgsPriorityQueue.h:276
	// Declaration
	bool Push(const LoadBundleRequest *, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPriorityQueue.h:281
		using namespace CgsDev::Message;

	}

	// CgsPriorityQueue.h:309
	bool Pop(LoadBundleRequest *);

	// CgsPriorityQueue.h:341
	bool Peek(LoadBundleRequest *);

	// CgsPriorityQueue.h:371
	const LoadBundleRequest & GetEntry(int) const;

}

// CgsPriorityQueue.h:127
struct CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::LoadBundleRequest,128u,128> : public PriorityQueue<CgsResource::Events::LoadBundleRequest,128u> {
private:
	// CgsPriorityQueue.h:135
	uint32_t[128] mauEntryIndices;

	// CgsPriorityQueue.h:136
	int32_t[128] maiEntryPriorities;

	// CgsPriorityQueue.h:137
	LoadBundleRequest[128] maEntries;

public:
	// CgsPriorityQueue.h:387
	void Construct();

}

// CgsPriorityQueue.h:90
struct CgsContainers::PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u> : public BasePriorityQueue {
private:
	// CgsPriorityQueue.h:121
	UnloadBundleRequest * mpEntries;

public:
	// CgsPriorityQueue.h:256
	void Construct(unsigned int, uint32_t *, int32_t *, UnloadBundleRequest *);

	// CgsPriorityQueue.h:276
	// Declaration
	bool Push(const UnloadBundleRequest *, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPriorityQueue.h:281
		using namespace CgsDev::Message;

	}

	// CgsPriorityQueue.h:309
	bool Pop(UnloadBundleRequest *);

	// CgsPriorityQueue.h:341
	bool Peek(UnloadBundleRequest *);

	// CgsPriorityQueue.h:371
	const UnloadBundleRequest & GetEntry(int) const;

}

// CgsPriorityQueue.h:127
struct CgsContainers::FixedLengthPriorityQueue<CgsResource::Events::UnloadBundleRequest,128u,128> : public PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u> {
private:
	// CgsPriorityQueue.h:135
	uint32_t[128] mauEntryIndices;

	// CgsPriorityQueue.h:136
	int32_t[128] maiEntryPriorities;

	// CgsPriorityQueue.h:137
	UnloadBundleRequest[128] maEntries;

public:
	// CgsPriorityQueue.h:387
	void Construct();

}

