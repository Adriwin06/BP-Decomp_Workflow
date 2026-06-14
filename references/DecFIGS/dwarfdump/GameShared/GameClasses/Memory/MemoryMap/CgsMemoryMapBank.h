// CgsMemoryMapBank.h:42
struct CgsMemory::MemoryMapBank : public MemoryMapBaseBank {
private:
	// CgsMemoryMapBank.h:56
	CgsMemory::MemoryBank::Params mBankParams;

public:
	// CgsMemoryMapBank.h:46
	void FixUp(const Resource &);

	// CgsMemoryMapBank.h:49
	void FixDown(const Resource &);

	// CgsMemoryMapBank.h:52
	const CgsMemory::MemoryBank::Params * GetParams() const;

}

