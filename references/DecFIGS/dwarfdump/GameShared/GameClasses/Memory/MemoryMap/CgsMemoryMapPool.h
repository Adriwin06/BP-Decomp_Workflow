// CgsMemoryMapPool.h:42
struct CgsMemory::MemoryMapPool : public MemoryMapBaseBank {
private:
	// CgsMemoryMapPool.h:56
	CreatePoolRequest mRequest;

public:
	// CgsMemoryMapPool.h:46
	void FixUp(const Resource &);

	// CgsMemoryMapPool.h:49
	void FixDown(const Resource &);

	// CgsMemoryMapPool.h:52
	const CreatePoolRequest * GetRequest() const;

}

