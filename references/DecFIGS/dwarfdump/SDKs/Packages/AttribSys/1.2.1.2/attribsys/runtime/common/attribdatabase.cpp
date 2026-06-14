// attribuserinclude.h:119
namespace Attrib {
	// attribdatabase.cpp:590
	extern Attribute::Key StringToKey(const char *, unsigned int);

	// attribdatabase.cpp:585
	extern Attribute::Key StringToKey(const char *);

	// attribdatabase.cpp:111
	bool gDatabaseSelfDestruct;

	// attribdatabase.cpp:396
	TypeID gDatabaseType;

	// attribdatabase.cpp:397
	DatabaseExportPolicy * gDatabaseExportPolicy;

	// attribdatabase.cpp:399
	TypeID gClassType;

	// attribdatabase.cpp:400
	ClassExportPolicy * gClassExportPolicy;

	// attribdatabase.cpp:402
	TypeID gCollectionType;

	// attribdatabase.cpp:403
	CollectionExportPolicy * gCollectionExportPolicy;

	// attribdatabase.cpp:405
	ExportManager * gExportPolicies;

}

// attribdatabase.cpp:16
struct Attrib::ClassTable : public VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u> {
public:
	// attribdatabase.cpp:16
	void * operator new(size_t);

	// attribdatabase.cpp:16
	void operator delete(void *, size_t);

	// attribdatabase.cpp:16
	void * operator new(size_t, void *);

	// attribdatabase.cpp:16
	void operator delete(void *, void *);

	// attribdatabase.cpp:16
	void ClassTable(unsigned int);

}

// attribdatabase.cpp:17
struct Attrib::TypeTable : public set<Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// attribdatabase.cpp:17
	void * operator new(size_t);

	// attribdatabase.cpp:17
	void operator delete(void *, size_t);

	// attribdatabase.cpp:17
	void * operator new(size_t, void *);

	// attribdatabase.cpp:17
	void operator delete(void *, void *);

}

// attribdatabase.cpp:18
struct Attrib::TypeDescPtrVec : public vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// attribdatabase.cpp:18
	void * operator new(size_t);

	// attribdatabase.cpp:18
	void operator delete(void *, size_t);

	// attribdatabase.cpp:18
	void * operator new(size_t, void *);

	// attribdatabase.cpp:18
	void operator delete(void *, void *);

}

// attribdatabase.cpp:22
struct Attrib::CollectionList : public list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// attribdatabase.cpp:22
	void * operator new(size_t);

	// attribdatabase.cpp:22
	void operator delete(void *, size_t);

	// attribdatabase.cpp:22
	void * operator new(size_t, void *);

	// attribdatabase.cpp:22
	void operator delete(void *, void *);

}

// attribdatabase.cpp:23
struct Attrib::ClassList : public list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// attribdatabase.cpp:23
	void * operator new(size_t);

	// attribdatabase.cpp:23
	void operator delete(void *, size_t);

	// attribdatabase.cpp:23
	void * operator new(size_t, void *);

	// attribdatabase.cpp:23
	void operator delete(void *, void *);

}

// attribdatabase.cpp:297
struct Attrib::CollectionExportPolicy : public IExportPolicy {
public:
	void CollectionExportPolicy(const CollectionExportPolicy &);

	void CollectionExportPolicy();

	// attribdatabase.cpp:299
	void * operator new(size_t);

	// attribdatabase.cpp:299
	void operator delete(void *, size_t);

	// attribdatabase.cpp:299
	void * operator new(size_t, void *);

	// attribdatabase.cpp:299
	void operator delete(void *, void *);

	// attribdatabase.cpp:301
	virtual bool IsExported(const TypeID &);

	// attribdatabase.cpp:306
	virtual void Initialize(Attrib::Vault &, const TypeID &, const ExportID &, void *, unsigned int);

	// attribdatabase.cpp:319
	virtual bool AnyReferences(const Attrib::Vault &);

	// attribdatabase.cpp:339
	virtual bool IsReferenced(const Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:345
	virtual void PrepareToClean(Attrib::Vault &);

	// attribdatabase.cpp:364
	virtual void Clean(Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:369
	virtual void PrepareToDeinitialize(Attrib::Vault &);

	// attribdatabase.cpp:389
	virtual void Deinitialize(Attrib::Vault &, const TypeID &, const ExportID &);

	virtual void ~CollectionExportPolicy();

}

// attribdatabase.cpp:182
struct Attrib::ClassExportPolicy : public IExportPolicy {
public:
	void ClassExportPolicy(const ClassExportPolicy &);

	void ClassExportPolicy();

	// attribdatabase.cpp:184
	void * operator new(size_t);

	// attribdatabase.cpp:184
	void operator delete(void *, size_t);

	// attribdatabase.cpp:184
	void * operator new(size_t, void *);

	// attribdatabase.cpp:184
	void operator delete(void *, void *);

	// attribdatabase.cpp:186
	virtual bool IsExported(const TypeID &);

	// attribdatabase.cpp:191
	virtual void Initialize(Attrib::Vault &, const TypeID &, const ExportID &, void *, unsigned int);

	// attribdatabase.cpp:213
	virtual bool AnyReferences(const Attrib::Vault &);

	// attribdatabase.cpp:227
	virtual bool IsReferenced(const Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:232
	virtual void PrepareToClean(Attrib::Vault &);

	// attribdatabase.cpp:272
	virtual void Clean(Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:277
	virtual void PrepareToDeinitialize(Attrib::Vault &);

	// attribdatabase.cpp:290
	virtual void Deinitialize(Attrib::Vault &, const TypeID &, const ExportID &);

	virtual void ~ClassExportPolicy();

}

// attribdatabase.cpp:118
struct Attrib::DatabaseExportPolicy : public IExportPolicy {
public:
	void DatabaseExportPolicy(const DatabaseExportPolicy &);

	void DatabaseExportPolicy();

	// attribdatabase.cpp:120
	void * operator new(size_t);

	// attribdatabase.cpp:120
	void operator delete(void *, size_t);

	// attribdatabase.cpp:120
	void * operator new(size_t, void *);

	// attribdatabase.cpp:120
	void operator delete(void *, void *);

	// attribdatabase.cpp:122
	virtual bool IsExported(const TypeID &);

	// attribdatabase.cpp:127
	virtual void Initialize(Attrib::Vault &, const TypeID &, const ExportID &, void *, unsigned int);

	// attribdatabase.cpp:138
	virtual bool AnyReferences(const Attrib::Vault &);

	// attribdatabase.cpp:143
	virtual bool IsReferenced(const Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:153
	virtual void PrepareToClean(Attrib::Vault &);

	// attribdatabase.cpp:158
	virtual void Clean(Attrib::Vault &, const TypeID &, const ExportID &);

	// attribdatabase.cpp:163
	virtual void PrepareToDeinitialize(Attrib::Vault &);

	// attribdatabase.cpp:168
	virtual void Deinitialize(Attrib::Vault &, const TypeID &, const ExportID &);

	virtual void ~DatabaseExportPolicy();

}

// attribdatabase.cpp:35
struct Attrib::DatabasePrivate : public Database {
	// attribdatabase.cpp:97
	ClassTable mClasses;

	// attribdatabase.cpp:99
	unsigned int mNumCompiledTypes;

	// attribdatabase.cpp:100
	TypeDescPtrVec mCompiledTypes;

	// attribdatabase.cpp:101
	TypeTable mTypes;

	// attribdatabase.cpp:103
	CollectionList mGarbageCollections;

	// attribdatabase.cpp:104
	ClassList mGarbageClasses;

public:
	void DatabasePrivate(const DatabasePrivate &);

	// attribdatabase.cpp:37
	void * operator new(size_t);

	// attribdatabase.cpp:37
	void operator delete(void *, size_t);

	// attribdatabase.cpp:37
	void * operator new(size_t, void *);

	// attribdatabase.cpp:37
	void operator delete(void *, void *);

	// attribdatabase.cpp:39
	void DatabasePrivate(const DatabaseLoadData &);

	// attribdatabase.cpp:66
	virtual void ~DatabasePrivate();

}

// attribdatabase.cpp:74
extern void QueueForDelete<Attrib::Class>(const Class *  obj, const list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &  bag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:74
extern void QueueForDelete<Attrib::Collection>(const Attrib::Collection *  obj, const list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &  bag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:118
void Attrib::DatabaseExportPolicy::DatabaseExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:182
void Attrib::ClassExportPolicy::ClassExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:297
void Attrib::CollectionExportPolicy::CollectionExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:118
void Attrib::DatabaseExportPolicy::~DatabaseExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:182
void Attrib::ClassExportPolicy::~ClassExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:297
void Attrib::CollectionExportPolicy::~CollectionExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribdatabase.cpp:81
extern void CollectGarbageBag<Attrib::Collection>(const list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &  bag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:83
		ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> iter;

		{
			// attribdatabase.cpp:86
			const Attrib::Collection * obj;

		}
	}
}

// attribdatabase.cpp:81
extern void CollectGarbageBag<Attrib::Class>(const list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &  bag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:83
		ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> iter;

		{
			// attribdatabase.cpp:86
			const Class * obj;

		}
	}
}

