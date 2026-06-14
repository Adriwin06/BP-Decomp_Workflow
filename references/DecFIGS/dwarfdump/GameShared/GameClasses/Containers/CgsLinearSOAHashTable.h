// CgsLinearSOAHashTable.h:56
struct CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue> {
private:
	// CgsLinearSOAHashTable.h:82
	uint64_t miLength;

	// CgsLinearSOAHashTable.h:83
	uint64_t miInvalidKey;

	// CgsLinearSOAHashTable.h:84
	uint64_t * mpKeys;

	// CgsLinearSOAHashTable.h:85
	ImportHashTableValue * mpValues;

public:
	// CgsLinearSOAHashTable.h:141
	uint64_t CalculateRequiredSize(long long unsigned int);

	// CgsLinearSOAHashTable.h:165
	void Initialize(uint64_t *, ImportHashTableValue *, long long unsigned int);

	// CgsLinearSOAHashTable.h:190
	void Clear();

	// CgsLinearSOAHashTable.h:239
	ImportHashTableValue * AddEntry(long long unsigned int, const ImportHashTableValue *);

	// CgsLinearSOAHashTable.h:288
	bool RemoveEntry(long long unsigned int);

	// CgsLinearSOAHashTable.h:420
	ImportHashTableValue * FindEntry(long long unsigned int);

	// CgsLinearSOAHashTable.h:520
	bool VerifyHashTable();

private:
	// CgsLinearSOAHashTable.h:475
	uint64_t FindEntryPosition(long long unsigned int);

	// CgsLinearSOAHashTable.h:386
	uint64_t FindFirstEmptyIndex(long long unsigned int);

	// CgsLinearSOAHashTable.h:337
	uint64_t RemoveEntryInternal(long long unsigned int);

	// CgsLinearSOAHashTable.h:210
	void ReAddIndex(long long unsigned int);

}

