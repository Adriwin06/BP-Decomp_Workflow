// CgsLinearHashTable.h:72
struct CgsContainers::LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> {
private:
	// CgsLinearHashTable.h:98
	uint32_t volatile miLength;

	// CgsLinearHashTable.h:99
	CgsContainers::LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> * mpEntries;

	// CgsLinearHashTable.h:100
	uint32_t volatile miInvalidKey;

public:
	// CgsLinearHashTable.h:156
	uint32_t volatile CalculateRequiredSize(unsigned int);

	// CgsLinearHashTable.h:180
	void Initialize(CgsContainers::LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> *, unsigned int);

	// CgsLinearHashTable.h:204
	void Clear();

	// CgsLinearHashTable.h:253
	DiskCacheEntry *volatile* AddEntry(unsigned int, DiskCacheEntry *volatileconst*);

	// CgsLinearHashTable.h:302
	bool RemoveEntry(unsigned int);

	// CgsLinearHashTable.h:434
	DiskCacheEntry *volatile* FindEntry(unsigned int);

	// CgsLinearHashTable.h:534
	bool VerifyHashTable();

private:
	// CgsLinearHashTable.h:489
	uint32_t volatile FindEntryPosition(unsigned int);

	// CgsLinearHashTable.h:400
	uint32_t volatile FindFirstEmptyIndex(unsigned int);

	// CgsLinearHashTable.h:351
	uint32_t volatile RemoveEntryInternal(unsigned int);

	// CgsLinearHashTable.h:224
	void ReAddIndex(unsigned int);

}

// CgsLinearHashTable.h:56
struct CgsContainers::LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile> {
	// CgsLinearHashTable.h:58
	uint32_t volatile miKey;

	// CgsLinearHashTable.h:59
	DiskCacheEntry *volatile mValue;

}

// CgsLinearHashTable.h:72
struct CgsContainers::LinearHashTable<std::uint64_t,std::int32_t> {
private:
	// CgsLinearHashTable.h:98
	uint64_t miLength;

	// CgsLinearHashTable.h:99
	CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> * mpEntries;

	// CgsLinearHashTable.h:100
	uint64_t miInvalidKey;

public:
	// CgsLinearHashTable.h:156
	uint64_t CalculateRequiredSize(long long unsigned int);

	// CgsLinearHashTable.h:180
	void Initialize(CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> *, long long unsigned int);

	// CgsLinearHashTable.h:204
	void Clear();

	// CgsLinearHashTable.h:253
	int32_t * AddEntry(long long unsigned int, const int32_t *);

	// CgsLinearHashTable.h:302
	bool RemoveEntry(long long unsigned int);

	// CgsLinearHashTable.h:434
	int32_t * FindEntry(long long unsigned int);

	// CgsLinearHashTable.h:534
	bool VerifyHashTable();

private:
	// CgsLinearHashTable.h:489
	uint64_t FindEntryPosition(long long unsigned int);

	// CgsLinearHashTable.h:400
	uint64_t FindFirstEmptyIndex(long long unsigned int);

	// CgsLinearHashTable.h:351
	uint64_t RemoveEntryInternal(long long unsigned int);

	// CgsLinearHashTable.h:224
	void ReAddIndex(long long unsigned int);

}

// CgsLinearHashTable.h:56
struct CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> {
	// CgsLinearHashTable.h:58
	uint64_t miKey;

	// CgsLinearHashTable.h:59
	int32_t mValue;

}

