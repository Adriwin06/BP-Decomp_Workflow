// CgsHash.h:42
struct CgsCore::Hash64 {
private:
	// CgsHash.h:82
	uint64_t muHash;

public:
	// CgsHash.h:47
	void ConstructFromString(const char *);

	// CgsHash.h:51
	void ConstructFromStringUpperCase(const char *);

	// CgsHash.h:55
	void ConstructFromStringLowerCase(const char *);

	// CgsHash.h:59
	void ConstructFromData(const uint8_t *, uint32_t);

	// CgsHash.h:62
	uint64_t GetHash() const;

	// CgsHash.h:65
	void SetHash(uint64_t);

private:
	// CgsHash.h:86
	uint64_t HashString(const char *);

	// CgsHash.h:90
	uint64_t HashStringUpperCase(const char *);

	// CgsHash.h:94
	uint64_t HashStringLowerCase(const char *);

	// CgsHash.h:98
	uint64_t HashData(const uint8_t *, uint32_t);

}

// CgsCore.h:98
namespace CgsCore {
	// CgsHash.h:206
	extern bool operator==(Hash64, Hash64);

}

