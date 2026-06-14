// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsHash12.h:28
	const uint32_t KI_12BIT_HASH_LOOKUP_TABLE_SIZE = 16;

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsHash12.h:28
	const uint32_t KI_12BIT_HASH_LOOKUP_TABLE_SIZE = 16;

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsHash12.h:28
	const uint32_t KI_12BIT_HASH_LOOKUP_TABLE_SIZE = 16;

}

// CgsHash12.h:42
struct CgsContainers::CgsHash12 {
private:
	// CgsHash12.h:55
	extern uint32_t[16] manHashTable;

public:
	// CgsHash12.h:48
	uint32_t CalculateHash(void *, uint32_t);

	// CgsHash12.h:52
	void CalculateHashTable(uint32_t);

}

