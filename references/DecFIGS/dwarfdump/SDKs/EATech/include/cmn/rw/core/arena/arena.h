// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// importnamespaces.h:11
		namespace arena {
			// arena.h:130
			const size_t rwDEFAULT_ARENAID_MAP_SIZE = 1024;

		}

	}

}

// arena.h:174
struct rw::core::arena::UnfixContextImpl {
	// arena.h:208
	rw::core::arena::Arena * m_arena;

	// arena.h:209
	rw::core::arena::ArenaSectionTypes * m_types;

	// arena.h:210
	rw::core::arena::ArenaSectionExternalArenas * m_externalArenas;

	// arena.h:211
	rw::core::arena::ArenaSectionSubreferences * m_subrefs;

	// arena.h:214
	DynamicAtomTable * m_unfixAtomTable;

	// arena.h:215
	rw::core::atom::UnfixRefixAtoms * m_unfixAtomCallback;

	// arena.h:217
	void * m_baseObjectPtr;

	// arena.h:221
	rw::core::arena::ArenaIterator * iterator;

public:
	// arena.h:182
	void UnfixContextImpl(rw::core::arena::Arena &, rw::core::arena::ArenaSectionManifest &, DynamicAtomTable &, rw::core::atom::UnfixRefixAtoms *);

	// arena.h:185
	void Serialize(const void *&);

	// arena.h:188
	void Serialize(rw::core::arena::ArenaDictEntry &);

	// arena.h:191
	void AddOffset(SPU::HostPtr);

	// arena.h:194
	uint32_t ObjectTypeIdToIndex(uint32_t) const;

	// arena.h:197
	RwBool ConvertExistingObjectToId(void **);

	// arena.h:200
	rw::core::atom::StaticAtomTable::Members::AtomID UnfixAtom(rw::core::atom::StaticAtomTable::Members::AtomID);

protected:
	// arena.h:204
	rw::core::arena::RefixContextImpl & RefixContext();

private:
	// arena.h:226
	rw::core::arena::ArenaSectionTypes & Types() const;

	// arena.h:229
	rw::core::arena::ArenaSectionExternalArenas & ExternalArenas() const;

	// arena.h:232
	void UpdateArenaSubreferencesLinks();

	// arena.h:235
	uint32_t AddSubref(const void *, uint32_t, uint32_t);

	// arena.h:238
	RwBool FindBaseObject(rw::core::arena::Arena &, const void *, uint32_t &);

	// arena.h:241
	RwBool FindExistingSubObject(const void *, uint32_t &);

	// arena.h:244
	RwBool FindNewSubObject(rw::core::arena::Arena &, const void *, uint32_t &, uint32_t &);

	// arena.h:247
	rw::core::arena::ArenaSectionSubreferences & Subrefs() const;

}

// arena.h:264
struct rw::core::arena::SizeAndAlignment : public UnfixContextImpl {
	// arena.h:278
	void * base;

	// arena.h:279
	uint32_t size;

	// arena.h:280
	uint32_t extraSize;

	// arena.h:281
	uint32_t alignment;

public:
	// arena.h:271
	void SizeAndAlignment(rw::core::arena::Arena &, rw::core::arena::ArenaSectionManifest &, DynamicAtomTable &, rw::core::atom::UnfixRefixAtoms *);

}

// arena.h:322
struct rw::core::arena::ArenaDictEntry {
	// arena.h:323
	void * ptr;

	// arena.h:324
	void * reloc;

	// arena.h:325
	uint32_t size;

	// arena.h:326
	uint32_t align;

	// arena.h:327
	uint32_t typeIndex;

	// arena.h:328
	uint32_t typeId;

public:
	// arena.h:338
	MemoryResourceDescriptor GetDescriptor() const;

}

// arena.h:352
struct rw::core::arena::ArenaSectionSubreferencesRecord {
	// arena.h:353
	uint32_t objectId;

	// arena.h:354
	uint32_t offset;

}

// arena.h:364
struct rw::core::arena::ArenaExportedObject {
	// arena.h:386
	uint32_t typeId;

	// arena.h:387
	void * ptr;

	// arena.h:388
	Resource resource;

	// arena.h:389
	ResourceDescriptor resourceDescriptor;

public:
	// arena.h:368
	void ArenaExportedObject();

	// arena.h:379
	void ArenaExportedObject(uint32_t, void *, const Resource &, const ResourceDescriptor &);

}

// arena.h:399
struct rw::core::arena::ArenaFileHeaderMagicNumber {
	// arena.h:400
	uint8_t[4] prefix;

	// arena.h:401
	uint8_t[4] body;

	// arena.h:402
	uint8_t[4] suffix;

}

// arena.h:412
struct rw::core::arena::ArenaFileHeader {
	// arena.h:413
	ArenaFileHeaderMagicNumber magicNumber;

	// arena.h:414
	uint8_t isBigEndian;

	// arena.h:415
	uint8_t pointerSizeInBits;

	// arena.h:416
	uint8_t pointerAlignment;

	// arena.h:417
	uint8_t unused;

	// arena.h:418
	uint8_t[4] majorVersion;

	// arena.h:419
	uint8_t[4] minorVersion;

	// arena.h:420
	uint32_t buildNo;

public:
	// arena.h:423
	bool IsValid() const;

}

// arena.h:434
struct rw::core::arena::Arena {
	// arena.h:437
	ArenaFileHeader fileHeader;

	// arena.h:439
	uint32_t id;

	// arena.h:440
	uint32_t numEntries;

	// arena.h:441
	uint32_t numUsed;

	// arena.h:442
	uint32_t alignment;

	// arena.h:444
	uint32_t virt;

	// arena.h:447
	ArenaDictEntry * dictStart;

	// arena.h:448
	rw::core::arena::ArenaSectionManifest * sections;

	// arena.h:449
	void * base;

	// arena.h:283
	typedef SizeAndAlignment SizeAndAlignment;

private:
	// arena.h:457
	Arena::SizeAndAlignment * m_unfixContext;

	// arena.h:458
	rw::core::arena::ArenaIterator * m_fixContext;

	// arena.h:460
	ResourceDescriptor m_resourceDescriptor;

	// arena.h:462
	ResourceDescriptor m_resourcesUsed;

	// arena.h:465
	TargetResource m_resource;

	// arena.h:467
	rw::core::arena::ArenaGroup * m_arenaGroup;

public:
	// arena.h:476
	ResourceDescriptor GetResourceDescriptor(uint32_t, RwBool, uint32_t, rw::core::arena::ArenaSection *, const ResourceDescriptor &, const rw::core::arena::ArenaGroup &);

	// arena.h:481
	ResourceDescriptor GetResourceDescriptor(uint32_t, RwBool, uint32_t, uint32_t, rw::core::arena::ArenaSection *, const rw::core::arena::ArenaGroup &);

	// arena.h:487
	rw::core::arena::Arena * Initialize(const Resource &, uint32_t, RwBool, uint32_t, rw::core::arena::ArenaSection *, const ResourceDescriptor &, const rw::core::arena::ArenaGroup &);

	// arena.h:492
	rw::core::arena::Arena * Initialize(const Resource &, uint32_t, RwBool, uint32_t, uint32_t, rw::core::arena::ArenaSection *, const rw::core::arena::ArenaGroup &);

	// arena.h:496
	uint32_t GetAlignment(uint32_t, RwBool, uint32_t, uint32_t, rw::core::arena::ArenaSection *);

	// arena.h:499
	uint32_t GetSize(uint32_t, RwBool, uint32_t, uint32_t, rw::core::arena::ArenaSection *);

	// arena.h:505
	rw::core::arena::Arena * InitializeFromMemoryDump(const Resource &, rw::core::atom::FixupAtoms *, rw::core::arena::ArenaGroup &);

	// arena.h:511
	rw::core::arena::Arena * InitializeFromMemoryDump(rw::core::arena::Arena *, rw::core::atom::FixupAtoms *, rw::core::arena::ArenaGroup &);

	// arena.h:514
	void Release();

	// arena.h:522
	const ResourceDescriptor & GetResourceDescriptor() const;

	// arena.h:532
	ResourceDescriptor & GetResourceDescriptor();

	// arena.h:543
	Resource GetResource() const;

	// arena.h:550
	uint32_t AddObject(const Resource &, uint32_t, const ResourceDescriptor &);

	// arena.h:553
	Resource Allocate(const ResourceDescriptor &);

	// arena.h:556
	uint32_t ObjectToId(const void *);

	// arena.h:559
	const void * IdToObject(uint32_t) const;

	// arena.h:562
	void * IdToObject(uint32_t);

	// arena.h:591
	RwBool ConvertExistingObjectToId(void **);

	// arena.h:594
	RwBool UnfixStart(rw::core::arena::ArenaIterator *, void *);

	// arena.h:597
	RwBool UnfixNext(rw::core::arena::ArenaIterator *);

	// arena.h:600
	// Declaration
	RwBool RefixStart() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// arena.h:293
		typedef RwBool (*)(void *, uint32_t, uint32_t) RwWriteCB;

	}

	// arena.h:603
	// Declaration
	RwBool RefixStart() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// arena.h:306
		typedef RwBool (*)(void *, uint32_t, uint32_t, void *) RwWriteCBWithData;

	}

	// arena.h:606
	RwBool RefixNext(rw::core::arena::ArenaIterator *);

	// arena.h:609
	RwBool FixupStart(rw::core::arena::Arena *, rw::core::arena::ArenaIterator *, const Resource &, RwBool *);

	// arena.h:612
	RwBool FixupStart(rw::core::arena::Arena *, rw::core::arena::ArenaIterator *, RwBool *);

	// arena.h:615
	RwBool FixupNext(rw::core::arena::ArenaIterator *);

	// arena.h:618
	void DestructStart(rw::core::arena::Arena *, rw::core::arena::ArenaIterator *);

	// arena.h:621
	RwBool DestructNext(rw::core::arena::ArenaIterator *);

	// arena.h:629
	uint32_t GetId() const;

	// arena.h:637
	uint32_t GetNumExportedObjects() const;

	// arena.h:640
	RwBool GetExportedObjectByIndex(uint32_t, ArenaExportedObject *);

	// arena.h:642
	void SetArenaGroup(rw::core::arena::ArenaGroup *);

	// arena.h:649
	rw::core::arena::ArenaGroup * GetArenaGroup();

private:
	// arena.h:658
	void WriteDictionary(rw::core::arena::Arena &, rw::core::arena::ArenaIterator *);

	// arena.h:661
	RwBool RefixStart(rw::core::arena::ArenaIterator *);

}

// arena.h:741
struct rw::core::arena::FixupContextImpl {
protected:
	// arena.h:777
	RwBool * m_isFixupOk;

	// arena.h:782
	const StaticAtomTable * m_fixupAtomTable;

	// arena.h:786
	rw::core::atom::FixupAtoms * fixupAtomCallback;

public:
	// arena.h:746
	void FixupContextImpl();

	// arena.h:749
	void Serialize(rw::core::arena::ArenaDictEntry &);

	// arena.h:752
	rw::core::atom::StaticAtomTable::Members::AtomID FixupAtom(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// arena.h:761
	void SetArenaLocalAtomTable(const StaticAtomTable &);

	// arena.h:769
	void SetFixupCallback(rw::core::atom::FixupAtoms *);

private:
	// arena.h:790
	rw::core::arena::ArenaSectionTypes & Types();

	// arena.h:793
	rw::core::arena::ArenaIterator & Iterator();

}

// arena.h:802
struct rw::core::arena::RefixContextImpl {
	// arena.h:827
	ResourceDescriptor m_alignmentRequirements;

protected:
	// arena.h:830
	RwWriteCB m_writeCB;

	// arena.h:831
	RwWriteCBWithData m_writeCBWithData;

	// arena.h:832
	void * m_writeCBData;

	// arena.h:838
	rw::IResourceAllocator * m_refixStorageAllocator;

	// arena.h:841
	Resource m_refixStorage;

	// arena.h:842
	ResourceDescriptor m_refixStorageUsage;

	// arena.h:844
	const rw::core::atom::DynamicAtomTable * m_refixAtomTable;

	// arena.h:845
	rw::core::atom::UnfixRefixAtoms * m_refixAtomCallback;

	// arena.h:847
	void * m_baseObjectPtr;

public:
	// arena.h:807
	void RefixContextImpl();

	// arena.h:809
	void ~RefixContextImpl();

	// arena.h:811
	void AllocateTemporaryRefixStorage(const ResourceDescriptor &);

	// arena.h:812
	void SetTemporaryRefixStorageAllocator(rw::IResourceAllocator *);

	// arena.h:813
	Resource GetTemporaryRefixStorage() const;

	// arena.h:814
	ResourceDescriptor GetTemporaryRefixStorageUsage() const;

	// arena.h:817
	rw::core::atom::StaticAtomTable::Members::AtomID RefixAtom(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// arena.h:819
	void Serialize(rw::core::arena::ArenaDictEntry &);

	// arena.h:822
	void SetRefixAtomTable(const rw::core::atom::DynamicAtomTable *);

protected:
	// arena.h:859
	void SetWriteCB(RwWriteCB &);

	// arena.h:880
	void SetWriteCB(RwWriteCBWithData &, void *);

	// arena.h:896
	RwBool CallWriteCB(void *, uint32_t, uint32_t) const;

private:
	// arena.h:908
	rw::core::arena::ArenaSectionTypes & Types();

	// arena.h:911
	rw::core::arena::ArenaIterator & Iterator();

}

// arena.h:927
struct rw::core::arena::DynamicArenaSubreferencesData {
private:
	// arena.h:955
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord> m_records;

	// arena.h:956
	SimpleVector<rw::core::arena::ArenaDictEntry> m_dict;

public:
	// arena.h:930
	void DynamicArenaSubreferencesData(rw::IResourceAllocator &);

	// arena.h:931
	void ~DynamicArenaSubreferencesData();

	// arena.h:934
	void Clear();

	// arena.h:937
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * GetRecords();

	// arena.h:938
	ArenaDictEntry * GetDict();

	// arena.h:941
	uint32_t Size();

	// arena.h:944
	uint32_t AddNewSubreference();

private:
	// arena.h:948
	void DynamicArenaSubreferencesData(const DynamicArenaSubreferencesData &);

	// arena.h:949
	DynamicArenaSubreferencesData & operator=(const DynamicArenaSubreferencesData &);

}

// arena.h:971
struct rw::core::arena::ArenaIterator : public RefixContextImpl {
	// arena.h:1081
	rw::core::arena::Arena * m_arena;

	// arena.h:1082
	void * offset;

private:
	// arena.h:1134
	void * m_origOffset;

	// arena.h:1135
	void * m_dictStart;

	// arena.h:1136
	uint32_t m_align;

	// arena.h:1137
	uint32_t m_dictEntry;

	// arena.h:1140
	bool m_arenaLocalAtomTableAdded;

	// arena.h:1145
	DynamicAtomTable m_unfixRefixAtomTable;

	// arena.h:1148
	rw::core::atom::UnfixRefixAtoms * m_unfixRefixAtoms;

	// arena.h:1150
	ResourceDescriptor m_resourceDescriptor;

	// arena.h:1152
	rw::IResourceAllocator * m_temporaryStorageAllocator;

	// arena.h:1155
	DynamicArenaSubreferencesData m_subreferencesData;

	// arena.h:1156
	Resource m_subreferencesResource;

public:
	// arena.h:973
	void ArenaIterator();

	// arena.h:974
	void ~ArenaIterator();

	// arena.h:982
	void AddOffset(SPU::HostPtr);

	// arena.h:996
	void Align(uint32_t);

	// arena.h:1009
	ResourceDescriptor & GetResourceDescriptor();

	// arena.h:1019
	RwBool WriteCallback(void *, uint32_t, uint32_t) const;

	// arena.h:1029
	rw::core::arena::Arena * GetArena() const;

	// arena.h:1042
	void SetUnfixRefixAtomIDCallback(rw::core::atom::UnfixRefixAtoms *);

	// arena.h:1054
	void Serialize(const void *&) const;

	// arena.h:1056
	void SetTemporaryStorageAllocator(rw::IResourceAllocator *);

	// arena.h:1057
	rw::IResourceAllocator & GetTemporaryStorageAllocator();

	// arena.h:1060
	void UpdateSubreferencesData();

	// arena.h:1062
	uint32_t AddNewSubreference();

	// arena.h:1068
	rw::core::arena::ArenaSectionSubreferences & Subrefs() const;

	// arena.h:1073
	rw::core::arena::ArenaSectionExternalArenas & ExternalArenas() const;

private:
	// arena.h:1126
	UnfixContextImpl & UnfixContext();

	// arena.h:1129
	rw::core::arena::RefixContextImpl & RefixContext();

	// arena.h:1132
	FixupContextImpl & FixupContext();

	// arena.h:1159
	void ArenaIterator(const ArenaIterator &);

	// arena.h:1160
	rw::core::arena::ArenaIterator & operator=(const ArenaIterator &);

}

// arena.h:1348
struct rw::core::arena::ArenaGroup {
	// arena.h:1257
	typedef rw::HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits> ArenaIdMap;

private:
	// arena.h:1438
	ArenaGroup::ArenaIdMap * m_ArenaIdMap;

public:
	// arena.h:1353
	void ArenaGroup();

	// arena.h:1358
	void ArenaGroup(ArenaGroup::ArenaIdMap *);

	// arena.h:1363
	void ~ArenaGroup();

	// arena.h:1365
	rw::core::arena::Arena * FindArena(uint32_t) const;

	// arena.h:1367
	void AddArena(rw::core::arena::Arena *);

	// arena.h:1368
	void RemoveArena(rw::core::arena::Arena *);

	// arena.h:1387
	void AddSharedArena(rw::core::arena::Arena *);

	// arena.h:1414
	void RemoveSharedArena(rw::core::arena::Arena *);

	// arena.h:1430
	ArenaGroup::ArenaIdMap *& GetArenaIdMap();

private:
	// arena.h:1440
	void DoAddArena(rw::core::arena::Arena *);

	// arena.h:1441
	void DoRemoveArena(rw::core::arena::Arena *);

}

