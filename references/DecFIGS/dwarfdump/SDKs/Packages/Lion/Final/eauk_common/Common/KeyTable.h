// KeyTable.h:18
struct sKeyValue {
	// KeyTable.h:19
	U32 mKey;

	// KeyTable.h:20
	U32 mValue;

}

// KeyTable.h:24
struct sKeyString {
	// KeyTable.h:25
	U32 mKey;

	// KeyTable.h:26
	char * mpString;

	// KeyTable.h:27
	U32 mHash;

}

// KeyTable.h:36
struct cKeyValueTable {
private:
	// KeyTable.h:55
	U32 mCount;

	// KeyTable.h:56
	sKeyValue * mpData;

public:
	// KeyTable.h:42
	cKeyValueTable(sKeyValue *, U32);

	// KeyTable.h:45
	U32 GetKey(U32) const;

	// KeyTable.h:46
	U32 GetValue(U32) const;

	// KeyTable.h:48
	bool IsKeyInTable(U32) const;

	// KeyTable.h:49
	bool IsValueInTable(U32) const;

	// KeyTable.h:51
	bool Validate() const;

}

// KeyTable.h:61
struct cKeyStringTable {
private:
	// KeyTable.h:83
	U32 mCount;

	// KeyTable.h:84
	sKeyString * mpData;

public:
	// KeyTable.h:66
	cKeyStringTable(sKeyString *, U32);

	// KeyTable.h:69
	U32 GetCount() const;

	// KeyTable.h:70
	U32 GetKeyFromIndex(U32);

	// KeyTable.h:71
	char * GetpStringFromIndex(U32);

	// KeyTable.h:73
	U32 GetKey(const char *) const;

	// KeyTable.h:74
	char * GetpString(U32) const;

	// KeyTable.h:76
	bool IsKeyInTable(U32) const;

	// KeyTable.h:77
	bool IsStringInTable(const char *) const;

	// KeyTable.h:79
	bool Validate() const;

	// KeyTable.h:80
	void BuildHashes();

}

