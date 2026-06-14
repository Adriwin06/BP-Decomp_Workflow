// attribuserinclude.h:119
namespace Attrib {
	// attribloadandgo.cpp:14
	extern TypeID StringToTypeID(const char *);

	// attribloadandgo.cpp:12
	extern Vault::AssetID StringToAssetID(const char *);

	// attribloadandgo.cpp:13
	extern ExportID StringToExportID(const char *);

}

// attribloadandgo.cpp:23
struct Attrib::ExportManager::ExportPolicyPair {
	// attribloadandgo.cpp:29
	TypeID mType;

	// attribloadandgo.cpp:30
	Attrib::IExportPolicy * mPolicy;

public:
	// attribloadandgo.cpp:25
	void ExportPolicyPair(TypeID, Attrib::IExportPolicy *);

	// attribloadandgo.cpp:26
	void ExportPolicyPair(const ExportPolicyPair &);

	// attribloadandgo.cpp:27
	bool operator<(const ExportPolicyPair &) const;

	// attribloadandgo.cpp:28
	const ExportPolicyPair & operator=(const ExportPolicyPair &);

}

// attribloadandgo.cpp:113
struct Attrib::Vault::ChunkBlock {
	// attribloadandgo.cpp:114
	uint32_t mType;

	// attribloadandgo.cpp:115
	uint32_t mSize;

public:
	// attribloadandgo.cpp:116
	ChunkBlock * Next();

	// attribloadandgo.cpp:117
	char * Data();

}

// attribloadandgo.cpp:121
struct Attrib::Vault::DependencyNode : public ChunkBlock {
	// attribloadandgo.cpp:123
	Attribute::HashInt mCount;

public:
	// attribloadandgo.cpp:124
	Vault::AssetID * GetAssetIDs();

	// attribloadandgo.cpp:125
	uint32_t * GetNameOffsets();

	// attribloadandgo.cpp:126
	const char * GetNameBlock();

	// attribloadandgo.cpp:128
	const char * GetName(unsigned int);

}

// attribloadandgo.cpp:145
struct Attrib::PtrRef {
	// attribloadandgo.cpp:146
	uint32_t mFixupOffset;

	// attribloadandgo.cpp:147
	uint16_t mPtrType;

	// attribloadandgo.cpp:148
	uint16_t mIndex;

	// attribloadandgo.cpp:149
	union {
		// attribloadandgo.cpp:150
		ExportID mExportID;

		// attribloadandgo.cpp:151
		Attribute::HashInt mOffset;

	}

}

// attribloadandgo.cpp:156
struct Attrib::Vault::PointerNode : public ChunkBlock {
public:
	// attribloadandgo.cpp:158
	PtrRef * GetPointers();

}

// attribloadandgo.cpp:162
struct Attrib::Vault::ExportEntry {
	// attribloadandgo.cpp:163
	ExportID mID;

	// attribloadandgo.cpp:164
	TypeID mType;

	// attribloadandgo.cpp:165
	uint32_t mDataBytes;

	// attribloadandgo.cpp:166
	uint32_t mDataOffset;

public:
	// attribloadandgo.cpp:167
	bool operator<(const ExportEntry &) const;

	// attribloadandgo.cpp:168
	bool operator<(ExportID) const;

	// attribloadandgo.cpp:169
	bool operator==(const ExportEntry &) const;

	// attribloadandgo.cpp:170
	bool operator==(ExportID) const;

	// attribloadandgo.cpp:171
	bool operator!=(const ExportEntry &) const;

	// attribloadandgo.cpp:172
	bool operator!=(ExportID) const;

}

// attribloadandgo.cpp:176
struct Attrib::Vault::ExportNode : public ChunkBlock {
	// attribloadandgo.cpp:178
	Attribute::HashInt mCount;

public:
	// attribloadandgo.cpp:179
	ExportEntry * GetExports();

}

// attribloadandgo.cpp:192
struct Attrib::Vault::DataBlock {
private:
	// attribloadandgo.cpp:218
	void * mData;

	// attribloadandgo.cpp:219
	unsigned int mKind;

	// attribloadandgo.cpp:220
	unsigned int mSize;

public:
	// attribloadandgo.cpp:194
	void * operator new(size_t);

	// attribloadandgo.cpp:194
	void operator delete(void *, size_t);

	// attribloadandgo.cpp:194
	void * operator new(size_t, void *);

	// attribloadandgo.cpp:194
	void operator delete(void *, void *);

	// attribloadandgo.cpp:195
	void DataBlock();

	// attribloadandgo.cpp:196
	void Set(void *, unsigned int, unsigned char);

	// attribloadandgo.cpp:203
	bool Inited() const;

	// attribloadandgo.cpp:204
	void ReleaseAsset(Vault::AssetID, Attrib::IGarbageCollector *);

	// attribloadandgo.cpp:214
	void * GetData() const;

	// attribloadandgo.cpp:215
	unsigned int GetSize() const;

	// attribloadandgo.cpp:216
	unsigned char GetKind() const;

}

// attribloadandgo.cpp:345
void Attrib::Vault::HasUnresolvedDependency() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:296
void Attrib::Vault::AddRef(Attribute::Key  who) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:64
void Attrib::ExportManager::GetExportPolicyByIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:72
void Attrib::ExportManager::GetExportPolicyTypeByIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:89
void Attrib::ExportManager::AnyReferences(const const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:91
		unsigned int i;

	}
}

// attribloadandgo.cpp:97
void Attrib::ExportManager::PrepareToClean(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:99
		unsigned int i;

	}
}

// attribloadandgo.cpp:103
void Attrib::ExportManager::PrepareToDeinitialize(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:105
		unsigned int i;

	}
}

// attribloadandgo.cpp:558
void Attrib::Vault::ExportsCleared() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:560
		unsigned int i;

		DataBlock::GetData(/* parameters */);
	}
}

// attribloadandgo.cpp:314
void Attrib::Vault::GetDependencyList(const unsigned int &  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:328
void Attrib::Vault::IsAssetDependency(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:492
void Attrib::Vault::CountExplicitExports() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:497
void Attrib::Vault::FindExportID(ExportID  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:499
		unsigned int result;

		eastl::find<Attrib::AssetID*, Attrib::ExportID>(/* parameters */);
	}
}

// attribloadandgo.cpp:485
void Attrib::Vault::ClearExport(const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:487
		unsigned int index;

		DataBlock::Set(/* parameters */);
	}
}

// attribloadandgo.cpp:506
void Attrib::Vault::GetExportID(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:530
void Attrib::Vault::GetExportSize(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:80
void Attrib::ExportManager::GetExportPolicyIndex(TypeID  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:82
		ExportManager::ExportPolicyPair * result;

		ExportPolicyPair::ExportPolicyPair(/* parameters */);
	}
}

// attribloadandgo.cpp:438
void Attrib::Vault::Clean() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:443
		unsigned int i;

	}
	{
		// attribloadandgo.cpp:446
		Attrib::IExportPolicy * policy;

	}
}

// attribloadandgo.cpp:512
void Attrib::Vault::GetExportType(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:517
		ExportEntry * exportTable;

	}
}

// attribloadandgo.cpp:536
void Attrib::Vault::IsExportReferenced(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:539
		Attrib::IExportPolicy * policy;

	}
}

// attribloadandgo.cpp:546
void Attrib::Vault::ExportsReferenced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:551
		unsigned int i;

	}
}

// attribloadandgo.cpp:524
void Attrib::Vault::GetExportData(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:350
void Attrib::Vault::CountExportInstances(TypeID  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:352
		unsigned int tally;

		// attribloadandgo.cpp:354
		ExportEntry * exportTable;

	}
	{
		// attribloadandgo.cpp:355
		unsigned int i;

	}
	ExportNode::GetExports(/* parameters */);
}

// attribloadandgo.cpp:44
void Attrib::ExportManager::AddExportPolicy(TypeID  type, Attrib::IExportPolicy *  policy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ExportPolicyPair::operator=(/* parameters */);
}

// attribloadandgo.cpp:55
void Attrib::ExportManager::GetExportPolicy(TypeID  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:57
		ExportManager::ExportPolicyPair * result;

		ExportPolicyPair::ExportPolicyPair(/* parameters */);
	}
}

// attribloadandgo.cpp:321
void Attrib::Vault::GetDependencyName(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DependencyNode::GetName(/* parameters */);
}

// attribloadandgo.cpp:361
void Attrib::Vault::Initialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:367
		char * fixuptarget;

		// attribloadandgo.cpp:368
		unsigned int fixupsize;

		// attribloadandgo.cpp:369
		unsigned int depcount;

		// attribloadandgo.cpp:371
		bool endOfPtrs;

		// attribloadandgo.cpp:372
		const PtrRef * ptr;

		// attribloadandgo.cpp:415
		ExportEntry * exportTable;

		{
			// attribloadandgo.cpp:375
			char ** targetptr;

		}
		{
			// attribloadandgo.cpp:419
			unsigned int i;

		}
		ExportNode::GetExports(/* parameters */);
		DataBlock::ReleaseAsset(/* parameters */);
	}
	{
		// attribloadandgo.cpp:401
		Vault * depVault;

		// attribloadandgo.cpp:402
		unsigned int exportindex;

	}
	DataBlock::GetSize(/* parameters */);
	{
		// attribloadandgo.cpp:421
		Attrib::IExportPolicy * policy;

	}
}

// attribloadandgo.cpp:50
void Attrib::ExportManager::Seal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	eastl::sort<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
}

// attribloadandgo.cpp:334
void Attrib::Vault::ResolveDependency(unsigned int  index, void *  data, unsigned int  bytes, unsigned char  kind) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DataBlock::Inited(/* parameters */);
	DataBlock::Set(/* parameters */);
}

// attribloadandgo.cpp:477
void Attrib::Vault::Export(const const TypeID &  type, const const ExportID &  id, void *  data, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:480
		unsigned int index;

	}
	DataBlock::Set(/* parameters */);
}

// attribloadandgo.cpp:33
void Attrib::ExportManager::ExportManager(unsigned int  reserve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:226
void Attrib::Vault::Vault(const ExportManager &  mgr, Vault::AssetID  id, void *  data, unsigned int  bytes, unsigned char  kind, Attrib::IGarbageCollector *  gc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:233
		ChunkBlock * chunk;

		// attribloadandgo.cpp:234
		ChunkBlock * endofdata;

		// attribloadandgo.cpp:258
		ExportEntry * exportTable;

		{
			// attribloadandgo.cpp:259
			unsigned int i;

			{
				// attribloadandgo.cpp:261
				Attrib::IExportPolicy * policy;

			}
		}
		{
			// attribloadandgo.cpp:270
			unsigned int i;

		}
		{
			// attribloadandgo.cpp:277
			unsigned int i;

		}
	}
}

// attribloadandgo.cpp:39
void Attrib::ExportManager::~ExportManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:286
void Attrib::Vault::~Vault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribloadandgo.cpp:302
void Attrib::Vault::Release(Attribute::Key  who) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator delete(/* parameters */);
}

// attribloadandgo.cpp:452
void Attrib::Vault::Deinitialize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribloadandgo.cpp:473
		unsigned int d;

	}
	DataBlock::ReleaseAsset(/* parameters */);
	{
		// attribloadandgo.cpp:460
		unsigned int i;

		{
			// attribloadandgo.cpp:463
			Attrib::IExportPolicy * policy;

		}
	}
}

