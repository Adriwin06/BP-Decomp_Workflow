// RadixSort.h:27
struct SortKey {
	// RadixSort.h:29
	uint64_t mu64Whole;

	// RadixSort.h:31
	extern const uint64_t KU_MASK_OFFSET = 1048575;

	// RadixSort.h:32
	extern const uint64_t KU_MASK_KEY = [0, 0, 0, 0, 255, 240, 0, 0];

	// RadixSort.h:34
	extern const uint64_t KU_SHIFT_OFFSET;

	// RadixSort.h:35
	extern const uint64_t KU_SHIFT_KEY = 20;

}

// RadixSort.h:42
struct SortKeyBlock {
	// RadixSort.h:44
	SortKey * mpKeyArray;

	// RadixSort.h:45
	uint32_t muKeyCount;

	// RadixSort.h:46
	uint32_t muKeyCapacity;

	// RadixSort.h:47
	SortKeyBlock * mpNextBlock;

}

// RadixSort.h:50
struct SortJobInputOutput {
	// RadixSort.h:52
	SortKeyBlock * mpKeyBlockListHeader;

	// RadixSort.h:53
	SortKey * mpSortedPointerArray;

	// RadixSort.h:54
	uint32_t muSortedPointerCount;

}

// RadixSort.h:31
extern const uint64_t KU_MASK_OFFSET = 1048575;

// RadixSort.h:35
extern const uint64_t KU_SHIFT_KEY = 20;

// RadixSort.h:60
struct SortInfo {
	// RadixSort.h:62
	uint64_t mu64KeyInAddress;

	// RadixSort.h:63
	uint64_t mu64KeyOutAddress;

	// RadixSort.h:64
	uint16_t mu16Count;

	// RadixSort.h:66
	SortJobInputOutput mInputOutputInfo;

}

// _built-in_
namespace :: {
	// RadixSort.h:87
	extern char[] _binary_RadixSort_elf_start;

	// RadixSort.h:88
	extern uint32_t _binary_RadixSort_elf_size;

}

// RadixSort.h:87
extern char[] _binary_RadixSort_elf_start;

// RadixSort.h:88
extern uint32_t _binary_RadixSort_elf_size;

