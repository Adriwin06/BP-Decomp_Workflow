// CgsResourceID.h:30
namespace CgsResource {
	namespace {
		// CgsResourceID.cpp:38
		const uint32_t[256] crcTable;

	}

	// CgsResourceID.cpp:37
	using namespace CgsResource;

	// CgsResourceID.cpp:86
	extern void GtByteSwap(ID &);

}

// CgsResourceID.cpp:102
void CgsResource::ID::HashString(const RwChar *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceID.cpp:107
		uint32_t lHash;

		// CgsResourceID.cpp:109
		uint8_t mask;

		// CgsResourceID.cpp:110
		uint8_t temp;

	}
}

// CgsResourceID.cpp:146
void CgsResource::ID::HashData(const uint8_t *  lpuBytes, const uint32_t  luLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceID.cpp:151
		uint32_t lHash;

		// CgsResourceID.cpp:152
		uint32_t luIndex;

		// CgsResourceID.cpp:154
		uint8_t mask;

		// CgsResourceID.cpp:155
		uint8_t temp;

	}
}

