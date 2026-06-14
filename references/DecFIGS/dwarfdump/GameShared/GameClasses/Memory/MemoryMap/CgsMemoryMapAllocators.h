// CgsMemoryMapAllocators.h:43
struct CgsMemory::MemoryMapRawResource : public MemoryMapBaseBank {
private:
	// CgsMemoryMapAllocators.h:60
	CreateResourceRequest mRequest;

public:
	// CgsMemoryMapAllocators.h:47
	void Construct(const char *, int32_t, int32_t, ResourceDescriptor *);

	// CgsMemoryMapAllocators.h:50
	void FixUp(const Resource &);

	// CgsMemoryMapAllocators.h:53
	void FixDown(const Resource &);

	// CgsMemoryMapAllocators.h:56
	const CreateResourceRequest * GetRequest() const;

}

// CgsMemoryMapAllocators.h:77
struct CgsMemory::MemoryMapLinearAllocator : public MemoryMapBaseBank {
private:
	// CgsMemoryMapAllocators.h:94
	CreateAllocatorRequest mRequest;

public:
	// CgsMemoryMapAllocators.h:81
	void Construct(const char *, int32_t, int32_t, int32_t, ResourceDescriptor *);

	// CgsMemoryMapAllocators.h:84
	void FixUp(const Resource &);

	// CgsMemoryMapAllocators.h:87
	void FixDown(const Resource &);

	// CgsMemoryMapAllocators.h:90
	const CreateAllocatorRequest * GetRequest() const;

}

// CgsMemoryMapAllocators.h:111
struct CgsMemory::MemoryMapHeapAllocator : public MemoryMapBaseBank {
private:
	// CgsMemoryMapAllocators.h:128
	CreateAllocatorRequest mRequest;

public:
	// CgsMemoryMapAllocators.h:115
	void Construct(const char *, int32_t, int32_t, int32_t, ResourceDescriptor *);

	// CgsMemoryMapAllocators.h:118
	void FixUp(const Resource &);

	// CgsMemoryMapAllocators.h:121
	void FixDown(const Resource &);

	// CgsMemoryMapAllocators.h:124
	const CreateAllocatorRequest * GetRequest() const;

}

// CgsMemoryMapAllocators.h:145
struct CgsMemory::MemoryMapRWLinearAllocator : public MemoryMapBaseBank {
private:
	// CgsMemoryMapAllocators.h:162
	CreateLinearAllocatorRequest mRequest;

public:
	// CgsMemoryMapAllocators.h:149
	void Construct(const char *, int32_t, int32_t, ResourceDescriptor *);

	// CgsMemoryMapAllocators.h:152
	void FixUp(const Resource &);

	// CgsMemoryMapAllocators.h:155
	void FixDown(const Resource &);

	// CgsMemoryMapAllocators.h:158
	const CreateLinearAllocatorRequest * GetRequest() const;

}

// CgsMemoryMapAllocators.h:179
struct CgsMemory::MemoryMapRWGeneralAllocator : public MemoryMapBaseBank {
private:
	// CgsMemoryMapAllocators.h:196
	CreateGeneralAllocatorRequest mRequest;

public:
	// CgsMemoryMapAllocators.h:183
	void Construct(const char *, int32_t, int32_t, ResourceDescriptor *);

	// CgsMemoryMapAllocators.h:186
	void FixUp(const Resource &);

	// CgsMemoryMapAllocators.h:189
	void FixDown(const Resource &);

	// CgsMemoryMapAllocators.h:192
	const CreateGeneralAllocatorRequest * GetRequest() const;

}

