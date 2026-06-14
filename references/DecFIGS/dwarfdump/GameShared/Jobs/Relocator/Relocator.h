// Relocator.h:42
struct RelocatorData {
	// Relocator.h:44
	RelocationParams mParams;

	// Relocator.h:45
	RelocationTestParams * mpTestParams;

	// Relocator.h:46
	uint32_t[3] muPadding;

}

// _built-in_
namespace :: {
	// Relocator.h:66
	extern char[] _binary_Relocator_elf_start;

	// Relocator.h:67
	extern uint32_t _binary_Relocator_elf_size;

}

// Relocator.h:66
extern char[] _binary_Relocator_elf_start;

// Relocator.h:67
extern uint32_t _binary_Relocator_elf_size;

