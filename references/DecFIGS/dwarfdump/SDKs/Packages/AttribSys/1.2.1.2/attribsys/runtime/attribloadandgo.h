// attribloadandgo.h:96
struct Attrib::ExportManager {
	struct ExportPolicyPair;

private:
	// attribloadandgo.h:121
	ExportManager::ExportPolicyPair * mExportPolicys;

	// attribloadandgo.h:122
	unsigned int mReserve;

	// attribloadandgo.h:123
	unsigned int mCount;

public:
	// attribloadandgo.h:98
	void * operator new(size_t);

	// attribloadandgo.h:98
	void operator delete(void *, size_t);

	// attribloadandgo.h:98
	void * operator new(size_t, void *);

	// attribloadandgo.h:98
	void operator delete(void *, void *);

	// attribloadandgo.h:99
	void ExportManager(unsigned int);

	// attribloadandgo.h:100
	void ~ExportManager();

	// attribloadandgo.h:103
	// Declaration
	void AddExportPolicy(TypeID, Attrib::IExportPolicy *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// attribloadandgo.h:25
		typedef Attribute::HashInt TypeID;

	}

	// attribloadandgo.h:106
	void Seal();

	// attribloadandgo.h:109
	Attrib::IExportPolicy * GetExportPolicy(TypeID) const;

	// attribloadandgo.h:110
	Attrib::IExportPolicy * GetExportPolicyByIndex(unsigned int) const;

	// attribloadandgo.h:111
	TypeID GetExportPolicyTypeByIndex(unsigned int) const;

	// attribloadandgo.h:112
	unsigned int GetExportPolicyIndex(TypeID) const;

	// attribloadandgo.h:115
	bool AnyReferences(const Attrib::Vault &) const;

	// attribloadandgo.h:116
	void PrepareToClean(Attrib::Vault &) const;

	// attribloadandgo.h:117
	void PrepareToDeinitialize(Attrib::Vault &) const;

}

// attribloadandgo.h:128
struct Attrib::Vault {
private:
	// attribloadandgo.h:203
	uint64_t mVersion;

	// attribloadandgo.h:204
	Attribute::HashInt mUserID;

	// attribloadandgo.h:206
	unsigned int mRefCount;

	// attribloadandgo.h:207
	const ExportManager & mExportMgr;

	// attribloadandgo.h:208
	Attrib::IGarbageCollector * mGC;

	// Unknown accessibility
	struct DependencyNode;

	// attribloadandgo.h:215
	Vault::DependencyNode * mDependencies;

	// Unknown accessibility
	struct DataBlock;

	// attribloadandgo.h:216
	Vault::DataBlock * mDepData;

	// Unknown accessibility
	// attribloadandgo.h:23
	typedef Attribute::HashInt AssetID;

	// attribloadandgo.h:217
	Vault::AssetID * mDepIDs;

	// attribloadandgo.h:218
	unsigned int mNumDependencies;

	// attribloadandgo.h:219
	unsigned int mResolvedCount;

	// Unknown accessibility
	struct PointerNode;

	// attribloadandgo.h:222
	Vault::PointerNode * mPointers;

	// attribloadandgo.h:223
	uint8_t * mTransientData;

	// Unknown accessibility
	struct ExportNode;

	// attribloadandgo.h:226
	Vault::ExportNode * mExports;

	// attribloadandgo.h:227
	Vault::DataBlock * mExportData;

	// attribloadandgo.h:228
	Vault::AssetID * mExportIDs;

	// attribloadandgo.h:229
	unsigned int mNumExports;

	// attribloadandgo.h:230
	unsigned int mNumAllocExports;

	// attribloadandgo.h:231
	unsigned int mNumLoadedExports;

	// attribloadandgo.h:233
	bool mInited;

	// attribloadandgo.h:234
	bool mDeinited;

public:
	// attribloadandgo.h:130
	void * operator new(size_t);

	// attribloadandgo.h:130
	void operator delete(void *, size_t);

	// attribloadandgo.h:130
	void * operator new(size_t, void *);

	// attribloadandgo.h:130
	void operator delete(void *, void *);

	// attribloadandgo.h:134
	void Vault(ExportManager &, Vault::AssetID, void *, unsigned int, unsigned char, Attrib::IGarbageCollector *);

	// attribloadandgo.h:137
	uint64_t Version() const;

	// attribloadandgo.h:139
	Attribute::HashInt UserID() const;

	// attribloadandgo.h:140
	void SetUserID(Attribute::HashInt);

	// attribloadandgo.h:143
	Attrib::IGarbageCollector * GarbageCollector() const;

	// attribloadandgo.h:145
	void AddRef(Attribute::Key) const;

	// attribloadandgo.h:146
	bool Release(Attribute::Key) const;

	// attribloadandgo.h:147
	bool IsReferenced() const;

	// attribloadandgo.h:153
	const Vault::AssetID * GetDependencyList(unsigned int &) const;

	// attribloadandgo.h:154
	const char * GetDependencyName(unsigned int) const;

	// attribloadandgo.h:155
	bool IsAssetDependency(unsigned int) const;

	// attribloadandgo.h:156
	void * GetDependency(unsigned int, unsigned int &) const;

	// attribloadandgo.h:160
	void ResolveDependency(unsigned int, void *, unsigned int, unsigned char);

	// attribloadandgo.h:163
	bool HasUnresolvedDependency() const;

	// attribloadandgo.h:166
	unsigned int CountExportInstances(TypeID) const;

	// attribloadandgo.h:169
	void Initialize();

	// attribloadandgo.h:172
	void Clean();

	// attribloadandgo.h:176
	void Deinitialize();

	// attribloadandgo.h:179
	// Declaration
	void Export(const TypeID &, const ExportID &, void *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// attribloadandgo.h:24
		typedef Attribute::HashInt ExportID;

	}

	// attribloadandgo.h:180
	void ClearExport(const ExportID &);

	// attribloadandgo.h:184
	unsigned int CountExplicitExports() const;

	// attribloadandgo.h:185
	unsigned int FindExportID(ExportID) const;

	// attribloadandgo.h:186
	const ExportID GetExportID(unsigned int) const;

	// attribloadandgo.h:187
	const TypeID GetExportType(unsigned int) const;

	// attribloadandgo.h:188
	void * GetExportData(unsigned int) const;

	// attribloadandgo.h:189
	unsigned int GetExportSize(unsigned int) const;

	// attribloadandgo.h:190
	bool IsExportReferenced(unsigned int) const;

	// attribloadandgo.h:192
	bool ExportsReferenced() const;

	// attribloadandgo.h:193
	bool ExportsCleared() const;

private:
	// attribloadandgo.h:196
	void ~Vault();

	// attribloadandgo.h:197
	const Attrib::Vault & operator=(const Attrib::Vault &);

}

// attribloadandgo.h:34
void Attrib::IGarbageCollector::IGarbageCollector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.h:128
struct Attrib::Vault {
private:
	// attribloadandgo.h:203
	uint64_t mVersion;

	// attribloadandgo.h:204
	Attribute::HashInt mUserID;

	// attribloadandgo.h:206
	unsigned int mRefCount;

	// attribloadandgo.h:207
	const ExportManager & mExportMgr;

	// attribloadandgo.h:208
	Attrib::IGarbageCollector * mGC;

	// Unknown accessibility
	struct DependencyNode;

	// attribloadandgo.h:215
	Vault::DependencyNode * mDependencies;

	// Unknown accessibility
	struct DataBlock;

	// attribloadandgo.h:216
	Vault::DataBlock * mDepData;

	// Unknown accessibility
	// attribloadandgo.h:23
	typedef Attribute::HashInt AssetID;

	// attribloadandgo.h:217
	Vault::AssetID * mDepIDs;

	// attribloadandgo.h:218
	unsigned int mNumDependencies;

	// attribloadandgo.h:219
	unsigned int mResolvedCount;

	// Unknown accessibility
	struct PointerNode;

	// attribloadandgo.h:222
	Vault::PointerNode * mPointers;

	// attribloadandgo.h:223
	uint8_t * mTransientData;

	// Unknown accessibility
	struct ExportNode;

	// attribloadandgo.h:226
	Vault::ExportNode * mExports;

	// attribloadandgo.h:227
	Vault::DataBlock * mExportData;

	// attribloadandgo.h:228
	Vault::AssetID * mExportIDs;

	// attribloadandgo.h:229
	unsigned int mNumExports;

	// attribloadandgo.h:230
	unsigned int mNumAllocExports;

	// attribloadandgo.h:231
	unsigned int mNumLoadedExports;

	// attribloadandgo.h:233
	bool mInited;

	// attribloadandgo.h:234
	bool mDeinited;

	// Unknown accessibility
	struct ChunkBlock;

	// Unknown accessibility
	struct ExportEntry;

public:
	// attribloadandgo.h:130
	void * operator new(size_t);

	// attribloadandgo.h:130
	void operator delete(void *, size_t);

	// attribloadandgo.h:130
	void * operator new(size_t, void *);

	// attribloadandgo.h:130
	void operator delete(void *, void *);

	// attribloadandgo.h:134
	void Vault(ExportManager &, Vault::AssetID, void *, unsigned int, unsigned char, Attrib::IGarbageCollector *);

	// attribloadandgo.h:137
	uint64_t Version() const;

	// attribloadandgo.h:139
	Attribute::HashInt UserID() const;

	// attribloadandgo.h:140
	void SetUserID(Attribute::HashInt);

	// attribloadandgo.h:143
	Attrib::IGarbageCollector * GarbageCollector() const;

	// attribloadandgo.h:145
	void AddRef(Attribute::Key) const;

	// attribloadandgo.h:146
	bool Release(Attribute::Key) const;

	// attribloadandgo.h:147
	bool IsReferenced() const;

	// attribloadandgo.h:153
	const Vault::AssetID * GetDependencyList(unsigned int &) const;

	// attribloadandgo.h:154
	const char * GetDependencyName(unsigned int) const;

	// attribloadandgo.h:155
	bool IsAssetDependency(unsigned int) const;

	// attribloadandgo.h:156
	void * GetDependency(unsigned int, unsigned int &) const;

	// attribloadandgo.h:160
	void ResolveDependency(unsigned int, void *, unsigned int, unsigned char);

	// attribloadandgo.h:163
	bool HasUnresolvedDependency() const;

	// attribloadandgo.h:166
	unsigned int CountExportInstances(TypeID) const;

	// attribloadandgo.h:169
	void Initialize();

	// attribloadandgo.h:172
	void Clean();

	// attribloadandgo.h:176
	void Deinitialize();

	// attribloadandgo.h:179
	// Declaration
	void Export(const TypeID &, const ExportID &, void *, unsigned int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// attribloadandgo.h:24
		typedef Attribute::HashInt ExportID;

	}

	// attribloadandgo.h:180
	void ClearExport(const ExportID &);

	// attribloadandgo.h:184
	unsigned int CountExplicitExports() const;

	// attribloadandgo.h:185
	unsigned int FindExportID(ExportID) const;

	// attribloadandgo.h:186
	const ExportID GetExportID(unsigned int) const;

	// attribloadandgo.h:187
	const TypeID GetExportType(unsigned int) const;

	// attribloadandgo.h:188
	void * GetExportData(unsigned int) const;

	// attribloadandgo.h:189
	unsigned int GetExportSize(unsigned int) const;

	// attribloadandgo.h:190
	bool IsExportReferenced(unsigned int) const;

	// attribloadandgo.h:192
	bool ExportsReferenced() const;

	// attribloadandgo.h:193
	bool ExportsCleared() const;

private:
	// attribloadandgo.h:196
	void ~Vault();

	// attribloadandgo.h:197
	const Attrib::Vault & operator=(const Attrib::Vault &);

}

// attribloadandgo.h:46
struct Attrib::IExportPolicy {
	int (*)(...) * _vptr.IExportPolicy;

public:
	void IExportPolicy(const IExportPolicy &);

	void IExportPolicy();

	// attribloadandgo.cpp:17
	virtual void ~IExportPolicy();

	// attribloadandgo.h:52
	virtual bool IsExported(const TypeID &);

	// attribloadandgo.h:57
	virtual void Initialize(Attrib::Vault &, const TypeID &, const ExportID &, void *, unsigned int);

	// attribloadandgo.h:61
	virtual bool AnyReferences(const Attrib::Vault &);

	// attribloadandgo.h:65
	virtual bool IsReferenced(const Attrib::Vault &, const TypeID &, const ExportID &);

	// attribloadandgo.h:70
	virtual void PrepareToClean(Attrib::Vault &);

	// attribloadandgo.h:76
	virtual void Clean(Attrib::Vault &, const TypeID &, const ExportID &);

	// attribloadandgo.h:82
	virtual void PrepareToDeinitialize(Attrib::Vault &);

	// attribloadandgo.h:88
	virtual void Deinitialize(Attrib::Vault &, const TypeID &, const ExportID &);

}

// attribloadandgo.h:34
struct Attrib::IGarbageCollector {
	int (*)(...) * _vptr.IGarbageCollector;

public:
	// attribloadandgo.cpp:16
	virtual void ~IGarbageCollector();

	// attribloadandgo.h:39
	virtual void ReleaseData(unsigned char, Vault::AssetID, void *, unsigned int);

}

// attribloadandgo.h:46
void Attrib::IExportPolicy::IExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

