// dynamicatomtable.h:58
struct rw::core::atom::DynamicAtomTable {
private:
	// dynamicatomtable.h:81
	StaticAtomTable ** staticAtomTableArray;

	// dynamicatomtable.h:82
	uint32_t numTables;

	// dynamicatomtable.h:83
	rw::IResourceAllocator * allocator;

public:
	// dynamicatomtable.h:62
	rw::core::atom::StaticAtomTable::Members::AtomID Register(const RwChar *);

	// dynamicatomtable.h:62
	void Register(const RwChar *, rw::core::atom::StaticAtomTable::Members::AtomID);

	// dynamicatomtable.h:62
	rw::core::atom::StaticAtomTable::Members::AtomID At(const RwChar *) const;

	// dynamicatomtable.h:62
	const RwChar * At(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// dynamicatomtable.h:62
	bool Exists(const RwChar *) const;

	// dynamicatomtable.h:62
	bool Exists(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// dynamicatomtable.h:62
	bool FindID(const RwChar *, rw::core::atom::StaticAtomTable::Members::AtomID &) const;

	// dynamicatomtable.h:62
	bool Empty() const;

	// dynamicatomtable.h:62
	rw::core::atom::StaticAtomTable::Members::AtomID NumAtoms() const;

	// dynamicatomtable.h:62
	uint32_t BytesUsedByAtomStrings() const;

	// dynamicatomtable.h:65
	void Initialize(rw::IResourceAllocator &);

	// dynamicatomtable.h:68
	void Release();

private:
	// dynamicatomtable.h:73
	void CreateNewTable();

	// dynamicatomtable.h:76
	void * Alloc(size_t);

	// dynamicatomtable.h:79
	void Free(void *);

}

