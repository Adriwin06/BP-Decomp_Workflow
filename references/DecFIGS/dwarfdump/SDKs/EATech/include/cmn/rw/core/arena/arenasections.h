// arenasections.h:105
struct rw::core::arena::ArenaSection {
	// arenasections.h:96
	typedef ArenaTypeReg * ArenaTypeRegPtr;

	// arenasections.h:107
	ArenaSection::ArenaTypeRegPtr typeReg;

	// arenasections.h:108
	uint32_t numEntries;

public:
	// arenasections.h:111
	void Release();

}

// arenasections.h:124
struct rw::core::arena::ArenaSectionManifest : public ArenaSection {
	// arenasections.h:78
	typedef rw::core::arena::ArenaSection * ArenaSectionPtr;

	// arenasections.h:126
	ArenaSectionManifest::ArenaSectionPtr * dict;

public:
	// arenasections.h:131
	ResourceDescriptor GetResourceDescriptor(uint32_t);

	// arenasections.h:134
	rw::core::arena::ArenaSectionManifest * Initialize(const Resource &, uint32_t);

	// arenasections.h:137
	rw::core::arena::ArenaSectionTypes & Types();

	// arenasections.h:140
	const rw::core::arena::ArenaSectionTypes & Types() const;

	// arenasections.h:143
	rw::core::arena::ArenaSectionExternalArenas & ExternalArenas();

	// arenasections.h:146
	const rw::core::arena::ArenaSectionExternalArenas & ExternalArenas() const;

	// arenasections.h:149
	rw::core::arena::ArenaSectionSubreferences & Subreferences();

	// arenasections.h:152
	const rw::core::arena::ArenaSectionSubreferences & Subreferences() const;

	// arenasections.h:155
	rw::core::arena::ArenaSectionAtoms & Atoms();

	// arenasections.h:158
	const rw::core::arena::ArenaSectionAtoms & Atoms() const;

	// arenasections.h:161
	void Release();

	// arenasections.h:164
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// arenasections.h:167
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:170
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

// arenasections.h:175
struct rw::core::arena::ArenaSectionTypes : public ArenaSection {
	// arenasections.h:177
	ArenaSection::ArenaTypeRegPtr * dict;

public:
	// arenasections.h:181
	ResourceDescriptor GetResourceDescriptor(uint32_t);

	// arenasections.h:184
	rw::core::arena::ArenaSectionTypes * Initialize(const Resource &, uint32_t);

	// arenasections.h:187
	void Release();

	// arenasections.h:190
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// arenasections.h:193
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:196
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

// arenasections.h:201
struct rw::core::arena::ArenaSectionExternalArenas : public ArenaSection {
	// arenasections.h:99
	typedef ArenaDictEntry * ArenaDictEntryPtr;

	// arenasections.h:203
	ArenaSectionExternalArenas::ArenaDictEntryPtr * dict;

public:
	// arenasections.h:206
	ResourceDescriptor GetResourceDescriptor(uint32_t);

	// arenasections.h:209
	rw::core::arena::ArenaSectionExternalArenas * Initialize(const Resource &, uint32_t);

	// arenasections.h:212
	void Release();

	// arenasections.h:215
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// arenasections.h:218
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:221
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:224
	rw::core::arena::Arena *const& Record(size_t) const;

	// arenasections.h:229
	rw::core::arena::Arena *& Record(size_t);

	// arenasections.h:237
	void SynchronizeInternalArenas(rw::core::arena::Arena &, rw::core::arena::ArenaSectionSubreferences &);

}

// arenasections.h:241
struct rw::core::arena::ArenaSectionSubreferences : public ArenaSection {
private:
	// arenasections.h:244
	ArenaDictEntry * m_dictAfterRefix;

	// arenasections.h:245
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * m_recordsAfterRefix;

	// Unknown accessibility
	// arenasections.h:248
	ArenaDictEntry * dict;

	// Unknown accessibility
	// arenasections.h:249
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * records;

	// Unknown accessibility
	// arenasections.h:250
	uint32_t numUsed;

public:
	// arenasections.h:253
	ResourceDescriptor GetResourceDescriptor();

	// arenasections.h:255
	ResourceDescriptor GetResourceDescriptor(uint32_t);

	// arenasections.h:258
	rw::core::arena::ArenaSectionSubreferences * Initialize(const Resource &);

	// arenasections.h:260
	rw::core::arena::ArenaSectionSubreferences * Initialize(const Resource &, uint32_t);

	// arenasections.h:263
	void Release();

	// arenasections.h:266
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// arenasections.h:269
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:272
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:274
	void UnfixData(rw::core::arena::ArenaIterator *);

	// arenasections.h:275
	void RefixData(rw::core::arena::ArenaIterator *);

	// arenasections.h:277
	const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord & Record(size_t) const;

	// arenasections.h:282
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord & Record(size_t);

}

// arenasections.h:295
struct rw::core::arena::ArenaSectionAtoms : public ArenaSection {
	// arenasections.h:298
	StaticAtomTable * atomTable;

public:
	// arenasections.h:301
	ArenaSectionAtoms * Initialize(const Resource &);

	// arenasections.h:304
	ResourceDescriptor GetResourceDescriptor();

	// arenasections.h:307
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// arenasections.h:310
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:313
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// arenasections.h:316
	void SetAtomTableAndUnfixIt(StaticAtomTable *, rw::core::arena::Arena &);

}

