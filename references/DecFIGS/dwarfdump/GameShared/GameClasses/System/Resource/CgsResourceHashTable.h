// CgsResourceHashTable.h:48
struct CgsResource::HashTable {
	// CgsResourceHashTable.h:37
	typedef LinearHashTable<std::uint64_t,std::int32_t> InternalHashTable;

private:
	// CgsResourceHashTable.h:71
	HashTable::InternalHashTable mHashTable;

public:
	// CgsResourceHashTable.h:52
	int32_t CalculateRequiredSize(int32_t);

	// CgsResourceHashTable.h:55
	// Declaration
	void Initialize() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourceHashTable.h:36
		typedef CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> HashEntry;

	}

	// CgsResourceHashTable.h:58
	void AddEntry(ID, int32_t);

	// CgsResourceHashTable.h:61
	void RemoveEntry(ID);

	// CgsResourceHashTable.h:64
	int32_t FindEntry(ID);

	// CgsResourceHashTable.h:67
	bool VerifyHashTable();

}

// CgsResourceHashTable.h:48
struct CgsResource::HashTable {
	// CgsResourceHashTable.h:37
	typedef LinearHashTable<std::uint64_t,std::int32_t> InternalHashTable;

private:
	// CgsResourceHashTable.h:71
	HashTable::InternalHashTable mHashTable;

public:
	// CgsResourceHashTable.h:52
	int32_t CalculateRequiredSize(int32_t);

	// CgsResourceHashTable.h:55
	// Declaration
	void Initialize(HashEntry *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourceHashTable.h:36
		typedef CgsContainers::LinearHashEntry<std::uint64_t,std::int32_t> HashEntry;

	}

	// CgsResourceHashTable.h:58
	void AddEntry(ID, int32_t);

	// CgsResourceHashTable.h:61
	void RemoveEntry(ID);

	// CgsResourceHashTable.h:64
	int32_t FindEntry(ID);

	// CgsResourceHashTable.h:67
	bool VerifyHashTable();

}

