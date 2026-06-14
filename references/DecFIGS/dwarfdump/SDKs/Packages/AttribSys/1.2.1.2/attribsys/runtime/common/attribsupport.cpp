// attribuserinclude.h:119
namespace Attrib {
	// attribsupport.cpp:12
	extern void AllocationAccounting(size_t, bool);

	// attribsupport.cpp:120
	extern unsigned int AdjustHashTableSize(unsigned int);

	// attribsupport.cpp:63
	extern const Attrib::Collection * GetCollectionParent(const Attrib::Collection *);

	// attribsupport.cpp:23
	extern unsigned int PeakMemory();

	// attribsupport.cpp:28
	extern unsigned int CurrMemory();

	// attribsupport.cpp:78
	extern Vault * GetCollectionSource(const Attrib::Collection *);

	// attribsupport.cpp:88
	extern Attribute::Key StringToLowerCaseKey(const char *);

	// attribsupport.cpp:109
	extern void AssertOnClassCheck(Attribute::Key, Attribute::Key, Attribute::Key);

	// attribsupport.cpp:53
	extern Attribute::Key GetCollectionKey(const Attrib::Collection *);

	// attribsupport.cpp:101
	extern void AssertOnTypeCheck(Attribute::Type, Attrib::Node *);

	// attribsupport.cpp:73
	extern bool IsSourceVault(const Attrib::Collection *, const Attrib::Vault *);

	// attribsupport.cpp:58
	extern Attribute::Key GetCollectionClassKey(const Attrib::Collection *);

	// attribsupport.cpp:68
	extern const Class * GetCollectionClass(const Attrib::Collection *);

	// attribsupport.cpp:44
	extern const Attrib::Collection * FindCollectionWithDefault(Attribute::Key, Attribute::Key);

	// attribsupport.cpp:35
	extern const Attrib::Collection * FindCollection(Attribute::Key, Attribute::Key);

	// attribsupport.cpp:83
	extern void ReleaseCollection(const Attrib::Collection *, Attribute::Key);

	// attribsupport.cpp:9
	unsigned int gPeakMemory;

	// attribsupport.cpp:10
	unsigned int gCurrMemory;

}

// attribsupport.cpp:129
void Attrib::Private::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribsupport.cpp:137
void Attrib::RefSpec::RefSpec(const const Attrib::RefSpec &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribsupport.cpp:169
void Attrib::RefSpec::GetClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribsupport.cpp:197
void Attrib::RefSpec::GetCollectionWithDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribsupport.cpp:201
		const Class * c;

		Collection::AddRef(/* parameters */);
	}
}

// attribsupport.cpp:179
void Attrib::RefSpec::GetCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribsupport.cpp:186
		const Class * c;

		Collection::AddRef(/* parameters */);
	}
}

// attribsupport.cpp:212
void Attrib::RefSpec::Clean() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::Release(/* parameters */);
}

// attribsupport.cpp:155
void Attrib::RefSpec::SetCollection(const Attrib::Collection *  collectionPtr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::AddRef(/* parameters */);
	Collection::GetClass(/* parameters */);
	Class::GetKey(/* parameters */);
}

// attribsupport.cpp:144
void Attrib::RefSpec::operator=(const const Attrib::RefSpec &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::AddRef(/* parameters */);
}

