// CgsResourceImportHashTable.h:49
struct CgsResource::ImportHashTableValue {
	// CgsResourceImportHashTable.h:51
	void * mpTempAddress;

	// CgsResourceImportHashTable.h:52
	void * mpDestAddress;

}

// CgsResourceImportHashTable.h:71
struct CgsResource::ImportHashTable {
	// CgsResourceImportHashTable.h:59
	typedef LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue> InternalImportHashTable;

private:
	// CgsResourceImportHashTable.h:105
	ImportHashTable::InternalImportHashTable mHashTable;

public:
	// CgsResourceImportHashTable.h:75
	int32_t CalculateRequiredSize(int32_t);

	// CgsResourceImportHashTable.h:82
	void Initialize(uint64_t *, ImportHashTableValue *, int32_t);

	// CgsResourceImportHashTable.h:86
	void Clear();

	// CgsResourceImportHashTable.h:89
	void AddEntry(ID, void *, void *);

	// CgsResourceImportHashTable.h:92
	void RemoveEntry(ID);

	// CgsResourceImportHashTable.h:95
	void * GetTempAddress(ID);

	// CgsResourceImportHashTable.h:98
	void * GetDestAddress(ID);

	// CgsResourceImportHashTable.h:101
	bool VerifyHashTable();

}

