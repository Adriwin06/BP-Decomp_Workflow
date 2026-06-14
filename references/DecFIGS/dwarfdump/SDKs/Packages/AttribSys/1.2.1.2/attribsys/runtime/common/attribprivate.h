// attribuserinclude.h:119
namespace Attrib {
	// Declaration
	struct ClassPrivate {
		// attribprivate.h:342
		struct CollectionHashMap : public VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u> {
		public:
			// attribprivate.h:342
			CollectionHashMap(unsigned int);

		}

	}

	// Declaration
	struct CollectionLoadData {
		// attribprivate.h:170
		struct AttribEntry {
			// attribprivate.h:171
			Attribute::Key mKey;

			// attribprivate.h:172
			void * mData;

			// attribprivate.h:173
			uint16_t mType;

			// attribprivate.h:174
			uint8_t mNodeFlags;

			// attribprivate.h:175
			uint8_t mEntryFlags;

		}

	}

}

// attribprivate.h:139
struct Attrib::ClassStaticDesc {
	// attribprivate.h:140
	Attribute::Key mKey;

	// attribprivate.h:141
	void * mStruct;

	// attribprivate.h:142
	unsigned int mSize;

public:
	// attribprivate.h:143
	const ClassStaticDesc * GetTable(unsigned int &);

	// attribprivate.h:144
	const ClassStaticDesc * GetStatic(Attribute::Key);

}

// attribprivate.h:167
struct Attrib::CollectionLoadData {
	// attribprivate.h:178
	Attribute::Key mKey;

	// attribprivate.h:179
	Attribute::Key mClass;

	// attribprivate.h:180
	Attribute::Key mParent;

	// attribprivate.h:181
	uint32_t mTableReserve;

	// attribprivate.h:182
	uint32_t mTableKeyShift;

	// attribprivate.h:183
	uint32_t mNumEntries;

	// attribprivate.h:184
	uint16_t mNumTypes;

	// attribprivate.h:185
	uint16_t mTypesLen;

	// attribprivate.h:186
	void * mLayout;

public:
	// attribprivate.h:188
	const Attribute::Type * GetTypes() const;

	// attribprivate.h:189
	const Attrib::CollectionLoadData::AttribEntry * GetEntries() const;

}

// attribprivate.h:194
struct Attrib::ClassLoadData {
	// attribprivate.h:196
	Attribute::Key mClass;

	// attribprivate.h:197
	uint32_t mCollectionReserve;

	// attribprivate.h:198
	uint32_t mNumDefinitions;

	// attribprivate.h:199
	Definition * mDefinitions;

	// attribprivate.h:200
	uint32_t mStaticSize;

	// attribprivate.h:201
	void * mStaticData;

	// attribprivate.h:202
	uint32_t mLayoutSize;

	// attribprivate.h:203
	uint16_t mLayoutKeyShift;

	// attribprivate.h:204
	uint16_t mLayoutCount;

}

// attribprivate.h:223
struct Attrib::Collection {
private:
	// attribprivate.h:280
	HashMap mTable;

	// attribprivate.h:281
	const Attrib::Collection * mParent;

	// attribprivate.h:283
	Attribute::Key mKey;

	// attribprivate.h:284
	Class * mClass;

	// attribprivate.h:285
	void * mLayout;

	// attribprivate.h:286
	Vault * mSource;

public:
	// attribprivate.h:225
	void * operator new(size_t);

	// attribprivate.h:225
	void operator delete(void *, size_t);

	// attribprivate.h:225
	void * operator new(size_t, void *);

	// attribprivate.h:225
	void operator delete(void *, void *);

	// attribprivate.h:227
	void Collection(Class *, const Attrib::Collection *, Attribute::Key, unsigned int);

	// attribprivate.h:228
	void Collection(const CollectionLoadData &, Vault *);

	// attribprivate.h:229
	void Collection(const Attrib::Collection &, Attribute::Key);

	// attribprivate.h:230
	void ~Collection();

	// attribprivate.h:232
	const Attrib::Collection * Parent() const;

	// attribprivate.h:233
	Class * ContainingClass() const;

	// attribprivate.h:235
	void AddRef(Attribute::Key) const;

	// attribprivate.h:236
	void Release(Attribute::Key) const;

	// attribprivate.h:237
	unsigned int GetRefs() const;

	// attribprivate.h:238
	bool IsReferenced() const;

	// attribprivate.h:239
	bool IsDynamic() const;

	// attribprivate.h:240
	Vault * GetSource() const;

	// attribprivate.h:242
	Attribute::Key GetClass() const;

	// attribprivate.h:243
	Attribute::Key GetParent() const;

	// attribprivate.h:244
	Attribute::Key GetKey() const;

	// attribprivate.h:246
	Attrib::Node * GetNode(Attribute::Key, const Attrib::Collection *&) const;

	// attribprivate.h:247
	Attribute Get(const Attrib::Instance &, Attribute::Key) const;

	// attribprivate.h:249
	void * GetData(Attribute::Key, unsigned int) const;

	// attribprivate.h:250
	void * GetLayout() const;

	// attribprivate.h:252
	unsigned int LocalCount() const;

	// attribprivate.h:253
	unsigned int LayoutCount() const;

	// attribprivate.h:254
	unsigned int Count() const;

	// attribprivate.h:255
	bool Contains(Attribute::Key) const;

	// attribprivate.h:256
	Attribute::Key FirstKey(bool &) const;

	// attribprivate.h:257
	Attribute::Key NextKey(Attribute::Key, bool &) const;

	// attribprivate.h:259
	void SetParent(Attribute::Key);

	// attribprivate.h:260
	bool AddAttribute(Attribute::Key, unsigned int);

	// attribprivate.h:261
	bool CopyAttribute(Attribute::Key, const Attrib::Collection &);

	// attribprivate.h:262
	bool RemoveAttribute(Attribute::Key);

	// attribprivate.h:264
	void Reserve(unsigned int);

	// attribprivate.h:265
	unsigned int Capacity() const;

	// attribprivate.h:266
	unsigned int TableCount() const;

	// attribprivate.h:267
	unsigned int WorstCollision() const;

	// attribprivate.h:268
	Attrib::Node * GetNodeAtIndex(unsigned int) const;

	// attribprivate.h:270
	void Clear();

	// attribprivate.h:271
	void Clean() const;

	// attribprivate.h:272
	void FreeNodeData(bool, void *, bool, const TypeDesc &);

	// attribprivate.h:273
	void Delete() const;

private:
	// attribprivate.h:276
	void Collection(const Attrib::Collection &);

}

// attribprivate.h:297
struct Attrib::ClassPrivate : public Class {
	// attribprivate.h:344
	HashMap mLayoutTable;

	// attribprivate.h:345
	Attrib::ClassPrivate::CollectionHashMap mCollections;

	// attribprivate.h:347
	uint16_t mLayoutSize;

	// attribprivate.h:348
	uint16_t mNumDefinitions;

	// attribprivate.h:349
	Definition * mDefinitions;

	// attribprivate.h:350
	Vault * mSource;

	// attribprivate.h:351
	void * mStaticData;

public:
	// attribprivate.h:299
	void * operator new(size_t);

	// attribprivate.h:299
	void operator delete(void *, size_t);

	// attribprivate.h:299
	void * operator new(size_t, void *);

	// attribprivate.h:299
	void operator delete(void *, void *);

	// attribprivate.h:300
	void ClassPrivate(const ClassLoadData &, Vault *);

	// attribprivate.h:327
	void ~ClassPrivate();

	// attribprivate.h:334
	void AddRef() const;

	// attribprivate.h:335
	void Release() const;

	// attribprivate.h:336
	unsigned int GetRefs() const;

	// attribprivate.h:337
	bool IsReferenced() const;

	// attribprivate.h:338
	Vault * GetSource() const;

	// attribprivate.h:339
	const Class & operator=(const Class &);

}

// attribuserinclude.h:119
namespace Attrib {
	// Declaration
	struct ClassPrivate {
		// attribprivate.h:342
		struct CollectionHashMap : public VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u> {
		public:
			// attribprivate.h:342
			CollectionHashMap(unsigned int);

		}

	}

	// Declaration
	struct CollectionLoadData {
		// attribprivate.h:170
		struct AttribEntry {
			// attribprivate.h:171
			Attribute::Key mKey;

			// attribprivate.h:172
			void * mData;

			// attribprivate.h:173
			uint16_t mType;

			// attribprivate.h:174
			uint8_t mNodeFlags;

			// attribprivate.h:175
			uint8_t mEntryFlags;

		}

	}

	// attribprivate.h:360
	extern Attribute::Key ScanForValidKey<Attrib::ClassPrivate::CollectionHashMap>(const Attrib::ClassPrivate::CollectionHashMap &, unsigned int);

	// attribprivate.h:360
	extern Attribute::Key ScanForValidKey<Attrib::ClassTable>(const ClassTable &, unsigned int);

	// attribprivate.h:360
	extern Attribute::Key ScanForValidKey<Attrib::HashMap>(const HashMap &, unsigned int);

	// attribprivate.h:150
	extern void TableFreeFunc(void *, size_t);

	// attribprivate.h:149
	extern void * TableAllocFunc(size_t);

}

// attribprivate.h:153
struct Attrib::Class::TablePolicy {
public:
	// attribprivate.h:155
	void * Alloc(size_t);

	// attribprivate.h:156
	void Free(void *, size_t);

	// attribprivate.h:157
	unsigned int GrowRequest(unsigned int, bool);

	// attribprivate.h:158
	unsigned int TableSize(unsigned int);

	// attribprivate.h:159
	unsigned int KeyIndex(Attribute::Key, unsigned int, unsigned int);

	// attribprivate.h:160
	unsigned int WrapIndex(unsigned int, unsigned int, unsigned int);

}

// attribprivate.h:209
struct Attrib::DatabaseLoadData {
	// attribprivate.h:211
	uint32_t mNumClasses;

	// attribprivate.h:212
	uint32_t mDefaultDataSize;

	// attribprivate.h:213
	uint32_t mNumTypes;

	// attribprivate.h:214
	const char * mTypenames;

public:
	// attribprivate.h:217
	const uint32_t * GetTypeSizes() const;

}

// attribprivate.h:51
extern int ATTRIB_GROWTABLE(int  currententries, int  overrun) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

