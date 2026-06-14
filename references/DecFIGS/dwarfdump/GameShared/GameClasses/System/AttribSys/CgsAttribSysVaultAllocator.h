// _built-in_
namespace :: {
	// CgsAttribSysVaultAllocator.h:22
	const int32_t KI_MAX_STREAMED_VAULT_BIN_SIZE = 4096;

	// CgsAttribSysVaultAllocator.h:25
	const int32_t KI_MAX_NUM_STREAMED_VAULTS = 24;

}

// CgsAttribSysVaultAllocator.h:56
struct CgsAttribSys::StreamedVaultAllocator {
	// CgsAttribSysVaultAllocator.h:44
	typedef BitArray<24u> UsedStreamedVaults;

private:
	// CgsAttribSysVaultAllocator.h:85
	StreamedVaultAllocator::UsedStreamedVaults mUsedStreamedVaults;

	// CgsAttribSysVaultAllocator.h:86
	uint8_t * mpau8VaultMemory;

public:
	// CgsAttribSysVaultAllocator.h:60
	void Construct();

	// CgsAttribSysVaultAllocator.h:64
	void Prepare(LinearMalloc *);

	// CgsAttribSysVaultAllocator.h:70
	int32_t GetFreeSlot(uint8_t *, uint32_t);

	// CgsAttribSysVaultAllocator.h:75
	void ReleaseSlot(int32_t);

	// CgsAttribSysVaultAllocator.h:80
	uint8_t * GetSlotMemory(int32_t);

}

