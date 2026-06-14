// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsHash16.h:28
	const uint32_t KI_16BIT_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsHash16.h:28
	const uint32_t KI_16BIT_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsHash16.h:28
	const uint32_t KI_16BIT_HASH_LOOKUP_TABLE_SIZE = 256;

}

// CgsHash16.h:42
struct CgsContainers::CgsHash16 {
private:
	// CgsHash16.h:55
	extern uint32_t[256] manHashTable;

public:
	// CgsHash16.h:48
	uint16_t CalculateHash(void *, uint32_t);

	// CgsHash16.h:52
	void CalculateHashTable(uint32_t);

}

