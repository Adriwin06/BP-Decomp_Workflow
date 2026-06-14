// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

	}

	// attribsys.h:201
	extern void * Alloc(size_t, const char *);

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribsys.h:223
struct Attrib::Attribute {
private:
	// attribsys.h:302
	const Attrib::Instance * mInstance;

	// attribsys.h:303
	const Attrib::Collection * mCollection;

	// attribsys.h:304
	Attrib::Node * mInternal;

	// attribsys.h:305
	void * mDataPointer;

public:
	// attribsys.h:225
	void Attribute();

	// attribsys.h:226
	void Attribute(const Attribute &);

	// attribsys.h:227
	void ~Attribute();

	// attribsys.h:229
	const Attribute & operator=(const Attribute &);

	// attribsys.h:230
	bool operator==(const Attribute &) const;

	// attribsys.h:231
	bool operator!=(const Attribute &) const;

	// attribsys.h:233
	bool IsValid() const;

	// attribsys.h:234
	bool IsInherited() const;

	// attribsys.h:235
	bool IsMutable() const;

	// Unknown accessibility
	// attribsys.h:129
	typedef Attribute::HashInt Key;

	// Unknown accessibility
	// attribsys.h:118
	typedef uint64_t HashInt;

	// attribsys.h:237
	Attribute::Key GetKey() const;

	// Unknown accessibility
	// attribsys.h:130
	typedef Attribute::HashInt Type;

	// attribsys.h:238
	Attribute::Type GetType() const;

	// attribsys.h:239
	const Attrib::Instance * GetInstance() const;

	// attribsys.h:240
	const Attrib::Collection * GetCollection() const;

	// attribsys.h:241
	unsigned int GetSize() const;

	// attribsys.h:243
	unsigned int GetLength() const;

	// attribsys.h:244
	bool SetLength(unsigned int);

	// attribsys.h:275
	const void * GetDataAddress() const;

	// attribsys.h:278
	void SendChangeMsg() const;

	// attribsys.h:281
	Attrib::Node * GetInternal() const;

protected:
	// attribsys.h:284
	void * GetElementPointer(unsigned int) const;

private:
	// attribsys.h:295
	void Attribute(const Attrib::Instance &, const Attrib::Collection *, Attrib::Node *);

	// attribsys.h:296
	void * GetInternalPointer(unsigned int) const;

	// attribsys.h:299
	void * operator new(size_t);

	// attribsys.h:299
	void operator delete(void *, size_t);

	// attribsys.h:299
	void * operator new(size_t, void *);

	// attribsys.h:299
	void operator delete(void *, void *);

}

// attribsys.h:399
struct Attrib::AttributeIterator {
private:
	// attribsys.h:408
	Attribute::Key mCurrentKey;

	// attribsys.h:409
	const Attrib::Collection * mCollection;

	// attribsys.h:410
	bool mInLayout;

public:
	// attribsys.h:401
	void AttributeIterator(const Attrib::Collection *);

	// attribsys.h:402
	void AttributeIterator(const AttributeIterator &);

	// attribsys.h:403
	const AttributeIterator & operator=(const AttributeIterator &);

	// attribsys.h:404
	Attribute::Key GetKey() const;

	// attribsys.h:405
	bool Valid();

	// attribsys.h:406
	bool Advance();

}

// attribsys.h:418
struct Attrib::Instance {
private:
	// attribsys.h:534
	const Attrib::Collection * mCollection;

	// attribsys.h:535
	void * mLayoutPtr;

	// attribsys.h:536
	uint32_t mMsgPort;

	// attribsys.h:537
	uint32_t mFlags;

public:
	// attribsys.h:420
	void * operator new(size_t);

	// attribsys.h:420
	void operator delete(void *, size_t);

	// attribsys.h:420
	void * operator new(size_t, void *);

	// attribsys.h:420
	void operator delete(void *, void *);

	// attribsys.h:422
	void Instance(const Attrib::Collection *, uint32_t);

	// attribsys.h:423
	void Instance(const Attrib::RefSpec &, uint32_t);

	// attribsys.h:424
	void Instance(const Attrib::Instance &);

	// attribsys.h:425
	void ~Instance();

	// attribsys.h:427
	const Attrib::Instance & operator=(const Attrib::Instance &);

	// attribsys.h:428
	bool operator==(const Attrib::Instance &) const;

	// attribsys.h:429
	bool operator!=(const Attrib::Instance &) const;

	// attribsys.h:431
	Attribute::Key GetClass() const;

	// attribsys.h:432
	Attribute::Key GetCollection() const;

	// attribsys.h:434
	Attribute::Key GetParent() const;

	// attribsys.h:435
	void SetParent(Attribute::Key);

	// attribsys.h:437
	bool IsValid() const;

	// attribsys.h:438
	bool IsDynamic() const;

	// attribsys.h:440
	Attrib::Collection * GetDynamicCollection() const;

	// attribsys.h:441
	const Attrib::Collection * GetConstCollection() const;

	// attribsys.h:442
	const Attrib::Collection * GetParentCollection() const;

	// attribsys.h:445
	Attribute Get(Attribute::Key) const;

	// attribsys.h:446
	bool Lookup(Attribute::Key, Attribute &) const;

	// attribsys.h:447
	bool Contains(Attribute::Key) const;

	// attribsys.h:450
	AttributeIterator Iterator() const;

	// attribsys.h:451
	unsigned int LocalAttribCount() const;

	// attribsys.h:454
	bool Add(Attribute::Key, unsigned int);

	// attribsys.h:455
	bool Remove(Attribute::Key);

	// attribsys.h:489
	Attrib::Gen::GenericAccessor * operator->();

	// attribsys.h:490
	const Attrib::Gen::GenericAccessor * operator->() const;

	// attribsys.h:496
	void Change(const Attrib::Collection *);

	// attribsys.h:497
	void Change(const Attrib::RefSpec &);

	// attribsys.h:498
	void ChangeWithDefault(const Attrib::RefSpec &);

	// attribsys.h:501
	bool Modify(Attribute::Key, unsigned int);

	// attribsys.h:502
	void Unmodify();

	// attribsys.h:503
	Attribute::Key GenerateUniqueKey(const char *) const;

	// attribsys.h:504
	void Reserve(unsigned int);

	// attribsys.h:507
	void Flatten();

	// attribsys.h:508
	void Clone(const Attrib::Instance &);

	// attribsys.h:509
	void Merge(const Attrib::Instance &);

	// attribsys.h:512
	uint32_t GetMsgPort() const;

	// attribsys.h:513
	void SetMsgPort(uint32_t);

protected:
	// attribsys.h:516
	bool ModifyInternal(Attribute::Key, Attribute::Key, unsigned int);

	// attribsys.h:517
	Attribute::Key GUKeyInternal(Attribute::Key, const char *) const;

	// attribsys.h:521
	const void * GetAttributePointer(Attribute::Key, unsigned int) const;

	// attribsys.h:522
	void SetDefaultLayout(unsigned int) const;

	// attribsys.h:523
	void * GetLayoutPointer() const;

private:
	// attribsys.h:531
	void MergeCollection(Attrib::Collection *, const Attrib::Instance &, const Attrib::Collection *, bool);

	// attribsys.h:532
	void LockReleased() const;

}

// attribsys.h:543
struct Attrib::Definition {
private:
	// attribsys.h:575
	Attribute::Key mKey;

	// attribsys.h:576
	Attribute::Type mType;

	// attribsys.h:577
	uint16_t mOffset;

	// attribsys.h:578
	uint16_t mSize;

	// attribsys.h:579
	uint16_t mMaxCount;

	// attribsys.h:580
	uint8_t mFlags;

	// attribsys.h:581
	uint8_t mAlignment;

public:
	// attribsys.h:545
	Attribute::Key GetKey() const;

	// attribsys.h:546
	Attribute::Type GetType() const;

	// attribsys.h:547
	unsigned int GetSize() const;

	// attribsys.h:548
	unsigned int GetAlignment() const;

	// attribsys.h:549
	unsigned int GetMaxCount() const;

	// attribsys.h:550
	unsigned int GetOffset() const;

	// attribsys.h:552
	bool IsArray() const;

	// attribsys.h:553
	bool InLayout() const;

	// attribsys.h:554
	bool IsBound() const;

	// attribsys.h:555
	bool IsStatic() const;

	// attribsys.h:556
	bool IsNotSearchable() const;

	// attribsys.h:557
	bool operator<(const Definition &) const;

private:
	// attribsys.h:560
	void * operator new(size_t);

	// attribsys.h:560
	void operator delete(void *, size_t);

	// attribsys.h:560
	void * operator new(size_t, void *);

	// attribsys.h:560
	void operator delete(void *, void *);

	// attribsys.h:572
	void Definition(Attribute::Key);

	// attribsys.h:573
	bool GetFlag(unsigned int) const;

}

// attribsys.h:588
struct Attrib::Class {
private:
	// attribsys.h:638
	Attribute::Key mKey;

	// attribsys.h:639
	const Attrib::ClassPrivate & mPrivates;

public:
	// attribsys.h:590
	void AddRef(Attribute::Key) const;

	// attribsys.h:591
	void Release(Attribute::Key) const;

	// attribsys.h:592
	bool IsReferenced() const;

	// attribsys.h:594
	Attribute::Key GetKey() const;

	// attribsys.h:596
	const Definition * GetDefinition(Attribute::Key) const;

	// attribsys.h:597
	unsigned int GetNumDefinitions() const;

	// attribsys.h:598
	Attribute::Key GetFirstDefinition() const;

	// attribsys.h:599
	Attribute::Key GetNextDefinition(Attribute::Key) const;

	// attribsys.h:601
	const Attrib::Collection * GetCollection(Attribute::Key) const;

	// attribsys.h:602
	const Attrib::Collection * GetCollectionWithDefault(Attribute::Key) const;

	// attribsys.h:603
	unsigned int GetNumCollections() const;

	// attribsys.h:604
	Attribute::Key GetFirstCollection() const;

	// attribsys.h:605
	Attribute::Key GetNextCollection(Attribute::Key) const;

	// attribsys.h:608
	void Reserve(unsigned int);

	// attribsys.h:609
	void SetTableBuffer(void *, unsigned int);

	// attribsys.h:610
	unsigned int GetTableNodeSize() const;

private:
	// attribsys.h:613
	void * operator new(size_t);

	// attribsys.h:613
	void operator delete(void *, size_t);

	// attribsys.h:613
	void * operator new(size_t, void *);

	// attribsys.h:613
	void operator delete(void *, void *);

	// attribsys.h:624
	void Class(Attribute::Key, Attrib::ClassPrivate &);

	// attribsys.h:625
	void ~Class();

	// attribsys.h:626
	const Class & operator=(const Class &);

	// attribsys.h:628
	void Delete() const;

	// attribsys.h:630
	bool AddCollection(Attrib::Collection *);

	// attribsys.h:631
	bool RemoveCollection(Attrib::Collection *);

	// attribsys.h:633
	void * AllocLayout() const;

	// attribsys.h:634
	void * CloneLayout(void *) const;

	// attribsys.h:635
	void CopyLayout(void *, void *) const;

	// attribsys.h:636
	void FreeLayout(void *) const;

}

// attribsys.h:702
struct Attrib::TypeDesc {
private:
	// attribsys.h:724
	Attribute::Type mType;

	// attribsys.h:725
	const char * mName;

	// attribsys.h:726
	unsigned int mSize;

	// attribsys.h:727
	unsigned int mIndex;

	// attribsys.h:728
	Attrib::ITypeHandler * mHandler;

public:
	// attribsys.h:704
	void * operator new(size_t);

	// attribsys.h:704
	void operator delete(void *, size_t);

	// attribsys.h:704
	void * operator new(size_t, void *);

	// attribsys.h:704
	void operator delete(void *, void *);

	// attribsys.h:705
	Attribute::Type NameToType(const char *);

	// attribsys.h:706
	Attrib::ITypeHandler * Lookup(Attribute::Type);

	// attribsys.h:708
	void TypeDesc(const TypeDesc &);

	// attribsys.h:709
	bool operator<(const TypeDesc &) const;

	// attribsys.h:711
	Attribute::Type GetType() const;

	// attribsys.h:712
	const char * GetName() const;

	// attribsys.h:713
	unsigned int GetSize() const;

	// attribsys.h:714
	uint16_t GetIndex() const;

	// attribsys.h:715
	Attrib::ITypeHandler * GetHandler() const;

private:
	// attribsys.h:720
	void TypeDesc(Attribute::Type);

	// attribsys.h:721
	void TypeDesc();

	// attribsys.h:722
	void TypeDesc(const char *, unsigned int, unsigned int);

}

// attribsys.h:735
struct Attrib::RefSpec {
private:
	// attribsys.h:762
	Attribute::Key mClassKey;

	// attribsys.h:763
	Attribute::Key mCollectionKey;

	// attribsys.h:764
	const Attrib::Collection * mCollectionPtr;

public:
	// attribsys.h:737
	void * operator new(size_t);

	// attribsys.h:737
	void operator delete(void *, size_t);

	// attribsys.h:737
	void * operator new(size_t, void *);

	// attribsys.h:737
	void operator delete(void *, void *);

	// attribsys.h:738
	void RefSpec();

	// attribsys.h:739
	void RefSpec(Attribute::Key, Attribute::Key);

	// attribsys.h:740
	void RefSpec(Attribute::Key);

	// attribsys.h:741
	void RefSpec(const Attrib::RefSpec &);

	// attribsys.h:742
	void ~RefSpec();

	// attribsys.h:744
	const Attrib::RefSpec & operator=(const Attrib::RefSpec &);

	// attribsys.h:745
	void SetCollection(Attribute::Key);

	// attribsys.h:746
	void SetCollection(const Attrib::Collection *);

	// attribsys.h:748
	bool operator==(const Attrib::RefSpec &) const;

	// attribsys.h:749
	bool operator!=(const Attrib::RefSpec &) const;

	// attribsys.h:750
	bool operator<(const Attrib::RefSpec &) const;

	// attribsys.h:752
	const Class * GetClass() const;

	// attribsys.h:753
	const Attrib::Collection * GetCollection() const;

	// attribsys.h:754
	const Attrib::Collection * GetCollectionWithDefault() const;

	// attribsys.h:756
	Attribute::Key GetClassKey() const;

	// attribsys.h:757
	Attribute::Key GetCollectionKey() const;

	// attribsys.h:759
	void Clean() const;

}

// attribsys.h:209
void Attrib::ITypeHandler::ITypeHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribsys.h:696
extern Attrib::Database * sThis;

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct aftertouchcam;

		// Declaration
		struct iceanim {
			// iceanim.h:104
			struct _LayoutStruct {
				// attribsys.h:875
				typedef uint32_t UInt32;

			}

		}

		struct camerabumperbehaviour;

		struct cameraexternalbehaviour;

		struct shotgroup;

		struct cameradefaults;

		struct proceduralshot;

		struct proceduralshake;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Float> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Float> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Float> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float &);

	// attribsys.h:894
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Vector3> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Vector3> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Vector3> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 &);

	// attribsys.h:894
	const Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Bool> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Bool> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Bool> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool &);

	// attribsys.h:894
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Bool * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<Attrib::RefSpec> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<Attrib::RefSpec> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<Attrib::RefSpec> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::RefSpec & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, RefSpec &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::RefSpec &);

	// attribsys.h:894
	const Attrib::RefSpec * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Int64> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Int64> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Int64> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 &);

	// attribsys.h:894
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<const char*> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<const char*> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<const char*> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text &);

	// attribsys.h:894
	const Attrib::Gen::burnoutcarasset::_LayoutStruct::Text * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Int32> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Int32> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Int32> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 &);

	// attribsys.h:894
	const Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::UInt32> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::UInt32> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::UInt32> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::iceanim::_LayoutStruct::UInt32 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::iceanim::_LayoutStruct::UInt32 &);

	// attribsys.h:894
	const Attrib::Gen::iceanim::_LayoutStruct::UInt32 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::ProceduralShotType::ProceduralShotType> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::ProceduralShotType::ProceduralShotType> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::ProceduralShotType::ProceduralShotType> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::ProceduralShotType::ProceduralShotType & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::ProceduralShotType::ProceduralShotType &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::ProceduralShotType::ProceduralShotType &);

	// attribsys.h:894
	const AttribSys::Enums::ProceduralShotType::ProceduralShotType * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod &);

	// attribsys.h:894
	const AttribSys::Enums::ProceduralShakeMethod::ProceduralShakeMethod * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct debrisparams;

		struct sparkeffect;

		struct surfacelist;

		struct junkyardlocators;

		struct b4blurasset;

		struct surface;

		// Declaration
		struct visualfxsurface {
			// visualfxsurface.h:217
			struct _LayoutStruct {
				// attribsys.h:872
				typedef int16_t Int16;

			}

		}

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Vector4> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Vector4> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Vector4> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 &);

	// attribsys.h:894
	const Attrib::Gen::nativeparticleparams::_LayoutStruct::Vector4 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::ParticleBlend::ParticleBlend> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::ParticleBlend::ParticleBlend> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::ParticleBlend::ParticleBlend> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::ParticleBlend::ParticleBlend & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::ParticleBlend::ParticleBlend &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::ParticleBlend::ParticleBlend &);

	// attribsys.h:894
	const AttribSys::Enums::ParticleBlend::ParticleBlend * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Vector2> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Vector2> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Vector2> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 &);

	// attribsys.h:894
	const Attrib::Gen::vignetteasset::_LayoutStruct::RwVector2 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Int16> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Int16> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Int16> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::visualfxsurface::_LayoutStruct::Int16 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::visualfxsurface::_LayoutStruct::Int16 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::visualfxsurface::_LayoutStruct::Int16 &);

	// attribsys.h:894
	const Attrib::Gen::visualfxsurface::_LayoutStruct::Int16 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::NativeParticleType::NativeParticleType> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::NativeParticleType::NativeParticleType> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::NativeParticleType::NativeParticleType> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::NativeParticleType::NativeParticleType & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::NativeParticleType::NativeParticleType &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::NativeParticleType::NativeParticleType &);

	// attribsys.h:894
	const AttribSys::Enums::NativeParticleType::NativeParticleType * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct camerabumperbehaviour;

		struct cameraexternalbehaviour;

		struct boostparamsasset;

		struct surfacelist;

		struct burnoutcargraphicsasset;

		struct surface;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		struct physicsvehiclehandling;

		struct physicsvehicleengineattribs;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct surfacelist;

		struct rumblesurface;

		struct surface;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct camerabumperbehaviour;

		struct cameraexternalbehaviour;

		struct shotgroup;

		struct cameradefaults;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehiclecollisionattribs;

		struct physicsvehicleengineattribs;

		struct physicsvehiclesteeringattribs;

		struct physicsvehiclesuspensionattribs;

		struct physicsvehiclebodyrollattribs;

		struct physicsvehicledriftattribs;

		struct gameplaysurface;

		struct physicssurface;

		struct surfacelist;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Vector4> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Vector4> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Vector4> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::surface::_LayoutStruct::Vector4 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::surface::_LayoutStruct::Vector4 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::surface::_LayoutStruct::Vector4 &);

	// attribsys.h:894
	const Attrib::Gen::surface::_LayoutStruct::Vector4 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct bloomasset;

		struct depthoffieldasset;

		struct b4blurasset;

		struct tint2dasset;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		// Declaration
		struct iceanim {
			// iceanim.h:104
			struct _LayoutStruct {
				// attribsys.h:875
				typedef uint32_t UInt32;

			}

		}

		struct shiftpattern;

		// Declaration
		struct sampletags {
			// sampletags.h:100
			struct _LayoutStruct {
				// sampletags.h:101
				Private _Array_Volumes;

				// sampletags.h:102
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float[32] Volumes;

				// sampletags.h:103
				Private _Array_LastIndices;

				// attribsys.h:872
				typedef int16_t Int16;

				// sampletags.h:104
				Attrib::Gen::sampletags::_LayoutStruct::Int16[32] LastIndices;

				// sampletags.h:105
				Private _Array_FirstIndices;

				// sampletags.h:106
				Attrib::Gen::sampletags::_LayoutStruct::Int16[32] FirstIndices;

			}

		}

		struct vehicleengine;

		// Declaration
		struct crashbin {
			// crashbin.h:248
			struct _LayoutStruct {
				// crashbin.h:249
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Volumes;

				// crashbin.h:250
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 Pitch;

				// crashbin.h:251
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::RwVector3 IntensityThreshold;

				// crashbin.h:252
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Text mSpliceBankAsset;

				// attribsys.h:874
				typedef uint64_t UInt64;

				// crashbin.h:253
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialB;

				// crashbin.h:254
				Attrib::Gen::crashbin::_LayoutStruct::UInt64 mMaterialA;

				// crashbin.h:255
				Private _Array_mCollisionsSmall;

				// crashbin.h:256
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsSmall;

				// crashbin.h:257
				Private _Array_mCollisionsMedium;

				// crashbin.h:258
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsMedium;

				// crashbin.h:259
				Private _Array_mCollisionsLarge;

				// crashbin.h:260
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32[20] mCollisionsLarge;

				// crashbin.h:261
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float Priority;

				// crashbin.h:262
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MIN;

				// crashbin.h:263
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float PhysicsImpulseNormalization_MAX;

				// crashbin.h:264
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mOrientation;

				// crashbin.h:265
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsSmall;

				// crashbin.h:266
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsMedium;

				// crashbin.h:267
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 mNumCollisionsLarge;

				// crashbin.h:268
				AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders MixerSlider;

				// crashbin.h:269
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mImpactTime;

				// crashbin.h:270
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mGameModes;

				// crashbin.h:271
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mFatalityFlag;

				// crashbin.h:272
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mCameras;

				// crashbin.h:273
				Attrib::Gen::iceanim::_LayoutStruct::UInt32 mAction;

				// crashbin.h:274
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Min;

				// crashbin.h:275
				Attrib::Gen::physicsvehiclebaseattribs::_LayoutStruct::Float DistanceFactor_Max;

			}

		}

		// Declaration
		struct proptomaterialmappings {
			// proptomaterialmappings.h:99
			struct _LayoutStruct {
				// proptomaterialmappings.h:100
				Private _Array_CgsIds;

				// proptomaterialmappings.h:101
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[512] CgsIds;

				// proptomaterialmappings.h:102
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 MappingCount;

				// proptomaterialmappings.h:103
				Private _Array_MaterialIndices;

				// attribsys.h:877
				typedef uint8_t UInt8;

				// proptomaterialmappings.h:104
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[512] MaterialIndices;

			}

		}

		struct streamsettings;

		struct song;

		struct passbybin;

		// Declaration
		struct presentationcomponent {
			// presentationcomponent.h:123
			struct _LayoutStruct {
				// presentationcomponent.h:124
				Private _Array_MessageIds;

				// presentationcomponent.h:125
				Attrib::Gen::burnoutcarasset::_LayoutStruct::Int64[256] MessageIds;

				// presentationcomponent.h:126
				Attrib::Gen::physicsvehicleboostattribs::_LayoutStruct::Int32 NumMappings;

				// presentationcomponent.h:127
				Private _Array_SpliceIndices;

				// attribsys.h:876
				typedef uint16_t UInt16;

				// presentationcomponent.h:128
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16[256] SpliceIndices;

				// presentationcomponent.h:129
				Private _Array_LastSpliceIndices;

				// presentationcomponent.h:130
				Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16[256] LastSpliceIndices;

				// presentationcomponent.h:131
				Private _Array_MixerOutputs;

				// presentationcomponent.h:132
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] MixerOutputs;

				// presentationcomponent.h:133
				Private _Array_ChokeGroups;

				// presentationcomponent.h:134
				Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8[256] ChokeGroups;

			}

		}

		struct surfacelist;

		struct surface;

		struct audiosurface;

		struct reverbparams;

		struct worldemitter;

		struct streammappings;

		struct languagestreamcollection;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribsys.h:792
struct Attrib::Private {
private:
	// attribsys.h:798
	uint8_t[8] mData;

public:
	// attribsys.h:794
	unsigned int GetLength() const;

	// attribsys.h:795
	Attrib::Array * ToArray();

	// attribsys.h:796
	const Attrib::Array * ToArray() const;

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::ePassbyTypes::ePassbyTypes> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::ePassbyTypes::ePassbyTypes> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::ePassbyTypes::ePassbyTypes> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::ePassbyTypes::ePassbyTypes & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::ePassbyTypes::ePassbyTypes &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::ePassbyTypes::ePassbyTypes &);

	// attribsys.h:894
	const AttribSys::Enums::ePassbyTypes::ePassbyTypes * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::eReverbTypes::eReverbTypes> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::eReverbTypes::eReverbTypes> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::eReverbTypes::eReverbTypes> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::eReverbTypes::eReverbTypes & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::eReverbTypes::eReverbTypes &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::eReverbTypes::eReverbTypes &);

	// attribsys.h:894
	const AttribSys::Enums::eReverbTypes::eReverbTypes * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::eSampleTags::eSampleTags> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::eSampleTags::eSampleTags> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::eSampleTags::eSampleTags> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::eSampleTags::eSampleTags & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::eSampleTags::eSampleTags &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::eSampleTags::eSampleTags &);

	// attribsys.h:894
	const AttribSys::Enums::eSampleTags::eSampleTags * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::eShiftTypes::eShiftTypes> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::eShiftTypes::eShiftTypes> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::eShiftTypes::eShiftTypes> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::eShiftTypes::eShiftTypes & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::eShiftTypes::eShiftTypes &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::eShiftTypes::eShiftTypes &);

	// attribsys.h:894
	const AttribSys::Enums::eShiftTypes::eShiftTypes * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Matrix44> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Matrix44> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Matrix44> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix &);

	// attribsys.h:894
	const Attrib::Gen::globalenginedata::_LayoutStruct::Matrix * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<rw::math::vpu::Vector2> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<rw::math::vpu::Vector2> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<rw::math::vpu::Vector2> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 &);

	// attribsys.h:894
	const Attrib::Gen::globalenginedata::_LayoutStruct::RwVector2 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::Int16> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::Int16> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::Int16> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::sampletags::_LayoutStruct::Int16 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::sampletags::_LayoutStruct::Int16 &);

	// attribsys.h:894
	const Attrib::Gen::sampletags::_LayoutStruct::Int16 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders &);

	// attribsys.h:894
	const AttribSys::Enums::eCollisionMixerSliders::eCollisionMixerSliders * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::UInt64> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::UInt64> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::UInt64> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::crashbin::_LayoutStruct::UInt64 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::crashbin::_LayoutStruct::UInt64 &);

	// attribsys.h:894
	const Attrib::Gen::crashbin::_LayoutStruct::UInt64 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::UInt8> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::UInt8> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::UInt8> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 &);

	// attribsys.h:894
	const Attrib::Gen::proptomaterialmappings::_LayoutStruct::UInt8 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::eSongHint::eSongHint> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::eSongHint::eSongHint> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::eSongHint::eSongHint> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::eSongHint::eSongHint & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::eSongHint::eSongHint &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::eSongHint::eSongHint &);

	// attribsys.h:894
	const AttribSys::Enums::eSongHint::eSongHint * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<EA::Reflection::UInt16> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<EA::Reflection::UInt16> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<EA::Reflection::UInt16> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &) const;

	// attribsys.h:368
	bool Set(unsigned int, const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 &);

	// attribsys.h:894
	const Attrib::Gen::presentationcomponent::_LayoutStruct::UInt16 * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribsys.h:312
struct Attrib::TAttrib<AttribSys::Enums::PresentationAction::PresentationAction> : Attribute {
public:
	// attribsys.h:316
	void TAttrib();

	// attribsys.h:317
	void TAttrib(const TAttrib<AttribSys::Enums::PresentationAction::PresentationAction> &);

	// attribsys.h:318
	void TAttrib(const Attribute &);

	// attribsys.h:320
	Attribute & GetBase();

	// attribsys.h:321
	const Attribute & GetBase() const;

	// attribsys.h:324
	const TAttrib<AttribSys::Enums::PresentationAction::PresentationAction> & operator=(const Attribute &);

	// attribsys.h:347
	unsigned int GetSize() const;

	// attribsys.h:893
	const AttribSys::Enums::PresentationAction::PresentationAction & Get(unsigned int) const;

	// attribsys.h:356
	bool Get(unsigned int, AttribSys::Enums::PresentationAction::PresentationAction &) const;

	// attribsys.h:368
	bool Set(unsigned int, const AttribSys::Enums::PresentationAction::PresentationAction &);

	// attribsys.h:894
	const AttribSys::Enums::PresentationAction::PresentationAction * Locate() const;

private:
	// attribsys.h:385
	void * operator new(unsigned int);

	// attribsys.h:385
	void operator delete(void *, unsigned int);

	// attribsys.h:385
	void * operator new(unsigned int, void *);

	// attribsys.h:385
	void operator delete(void *, void *);

	// attribsys.h:389
	void TAttrib(long long unsigned int, Instance &, Attrib::Collection *, Attrib::Node *);

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct burnoutcargraphicsasset;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct physicsvehiclesteeringattribs;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

		// Declaration
		struct physicsvehiclebaseattribs {
			// physicsvehiclebaseattribs.h:531
			struct _LayoutStruct {
				// attribuserinclude.h:127
				typedef Vector3 RwVector3;

				// attribsys.h:880
				typedef float Float;

			}

		}

		// Declaration
		struct burnoutcarasset {
			// burnoutcarasset.h:210
			struct _LayoutStruct {
				// attribsys.h:882
				typedef const char * Text;

				// attribsys.h:870
				typedef int64_t Int64;

				// attribsys.h:879
				typedef bool Bool;

			}

		}

		struct physicsvehiclehandling;

		// Declaration
		struct physicsvehicleboostattribs {
			// physicsvehicleboostattribs.h:188
			struct _LayoutStruct {
				// attribsys.h:871
				typedef int32_t Int32;

			}

		}

		struct physicsvehicleengineattribs;

		struct camerabumperbehaviour;

		struct cameraexternalbehaviour;

		// Declaration
		struct iceanim {
			// iceanim.h:104
			struct _LayoutStruct {
				// attribsys.h:875
				typedef uint32_t UInt32;

			}

		}

		struct shotgroup;

		struct cameradefaults;

		struct surfacelist;

		struct nativeparticleparams;

		struct debrisparams;

		struct burnoutglobaldata;

		struct sparkeffect;

		struct junkyardlocators;

	}

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// Declaration
	struct Database {
	private:
		// attribsys.h:696
		extern Attrib::Database * sThis;

	}

}

// attribuserinclude.h:119
namespace Attrib {
	// attribsys.h:152
	namespace Gen {
		struct GenericAccessor;

	}

	// attribsys.h:201
	extern void * Alloc(size_t, const char *);

	// attribsys.h:202
	extern void Free(void *, size_t, const char *);

	// attribsys.h:861
	const Attribute::Key key_default = [0, 0, 0, 0, 45, 125, 33, 82];

	// attribsys.h:862
	const Attribute::Key h64_default = [0, 0, 0, 0, 45, 125, 33, 82];

}

// attribsys.h:588
struct Attrib::Class {
private:
	// attribsys.h:638
	Attribute::Key mKey;

	// attribsys.h:639
	const Attrib::ClassPrivate & mPrivates;

	// Unknown accessibility
	struct TablePolicy;

public:
	// attribsys.h:590
	void AddRef(Attribute::Key) const;

	// attribsys.h:591
	void Release(Attribute::Key) const;

	// attribsys.h:592
	bool IsReferenced() const;

	// attribsys.h:594
	Attribute::Key GetKey() const;

	// attribsys.h:596
	const Definition * GetDefinition(Attribute::Key) const;

	// attribsys.h:597
	unsigned int GetNumDefinitions() const;

	// attribsys.h:598
	Attribute::Key GetFirstDefinition() const;

	// attribsys.h:599
	Attribute::Key GetNextDefinition(Attribute::Key) const;

	// attribsys.h:601
	const Attrib::Collection * GetCollection(Attribute::Key) const;

	// attribsys.h:602
	const Attrib::Collection * GetCollectionWithDefault(Attribute::Key) const;

	// attribsys.h:603
	unsigned int GetNumCollections() const;

	// attribsys.h:604
	Attribute::Key GetFirstCollection() const;

	// attribsys.h:605
	Attribute::Key GetNextCollection(Attribute::Key) const;

	// attribsys.h:608
	void Reserve(unsigned int);

	// attribsys.h:609
	void SetTableBuffer(void *, unsigned int);

	// attribsys.h:610
	unsigned int GetTableNodeSize() const;

private:
	// attribsys.h:613
	void * operator new(size_t);

	// attribsys.h:613
	void operator delete(void *, size_t);

	// attribsys.h:613
	void * operator new(size_t, void *);

	// attribsys.h:613
	void operator delete(void *, void *);

	// attribsys.h:624
	void Class(Attribute::Key, Attrib::ClassPrivate &);

	// attribsys.h:625
	void ~Class();

	// attribsys.h:626
	const Class & operator=(const Class &);

	// attribsys.h:628
	void Delete() const;

	// attribsys.h:630
	bool AddCollection(Attrib::Collection *);

	// attribsys.h:631
	bool RemoveCollection(Attrib::Collection *);

	// attribsys.h:633
	void * AllocLayout() const;

	// attribsys.h:634
	void * CloneLayout(void *) const;

	// attribsys.h:635
	void CopyLayout(void *, void *) const;

	// attribsys.h:636
	void FreeLayout(void *) const;

}

// attribsys.h:109
struct VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u> {
	struct Node;

private:
	// vechashmap.h:527
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node * mTable;

	// vechashmap.h:528
	short unsigned int mTableSize;

	// vechashmap.h:529
	short unsigned int mNumEntries;

	// vechashmap.h:530
	short unsigned int mFixedAlloc;

	// vechashmap.h:531
	short unsigned int mWorstCollision;

public:
	// vechashmap.h:155
	void VecHashMap(unsigned int);

	// vechashmap.h:162
	void ~VecHashMap();

	// vechashmap.h:167
	bool ValidIndex(unsigned int) const;

	// vechashmap.h:168
	Attribute::Key GetKeyAtIndex(unsigned int) const;

	// vechashmap.h:169
	Class * GetPtrAtIndex(unsigned int) const;

	// vechashmap.h:170
	unsigned int Size() const;

	// vechashmap.h:171
	unsigned int Capacity() const;

	// vechashmap.h:173
	void Clear();

	// vechashmap.h:199
	bool Add(long long unsigned int, Class *);

	// vechashmap.h:210
	Class * RemoveIndex(unsigned int);

	// vechashmap.h:231
	Class * Remove(long long unsigned int);

	// vechashmap.h:238
	void DeleteIndex(unsigned int);

	// vechashmap.h:245
	void Delete(long long unsigned int);

	// vechashmap.h:252
	unsigned int FindIndex(long long unsigned int) const;

	// vechashmap.h:271
	Class * Find(long long unsigned int) const;

	// vechashmap.h:280
	unsigned int GetNextValidIndex(unsigned int) const;

	// vechashmap.h:302
	void Reserve(unsigned int);

	// vechashmap.h:308
	void SetTableBuffer(void *, unsigned int);

	// vechashmap.h:337
	size_t GetTableNodeSize() const;

private:
	// vechashmap.h:373
	bool InternalAdd(long long unsigned int, Class *);

	// vechashmap.h:403
	unsigned int UpdateSearchLength(unsigned int, unsigned int);

	// vechashmap.h:459
	void CopyFromOldTable(VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node *, unsigned int, bool);

	// vechashmap.h:476
	void RebuildTable(unsigned int);

	// vechashmap.h:510
	void ValidateTable() const;

}

// attribsys.h:209
struct Attrib::ITypeHandler {
	int (*)(...) * _vptr.ITypeHandler;

public:
	// attribsupport.cpp:224
	virtual void ~ITypeHandler();

	// attribsys.h:212
	virtual void * Retain(void *);

	// attribsys.h:213
	virtual void * Clone(void *);

	// attribsys.h:214
	virtual void Clean(void *);

	// attribsys.h:215
	virtual void Release(void *);

}

// attribsys.h:646
struct Attrib::Database {
	int (*)(...) * _vptr.Database;

private:
	// attribsys.h:695
	const Attrib::DatabasePrivate & mPrivates;

	// attribdatabase.cpp:112
	extern Database * sThis;

public:
	void Database(const Database &);

	// attribsys.h:649
	Database & Get();

	// attribsys.h:650
	bool IsInitialized();

	// attribdatabase.cpp:409
	ExportManager & GetExportPolicies();

	// attribdatabase.cpp:427
	void ReleaseExportPolicies();

	// attribdatabase.cpp:451
	Class * GetClass(Attribute::Key) const;

	// attribdatabase.cpp:456
	unsigned int GetNumClasses() const;

	// attribdatabase.cpp:461
	Attribute::Key GetFirstClass() const;

	// attribdatabase.cpp:466
	Attribute::Key GetNextClass(Attribute::Key) const;

	// attribdatabase.cpp:477
	unsigned int GetNumIndexedTypes() const;

	// attribdatabase.cpp:482
	const TypeDesc & GetIndexedTypeDesc(uint16_t) const;

	// attribdatabase.cpp:489
	const TypeDesc & GetTypeDesc(Attribute::Type) const;

	// attribdatabase.cpp:498
	Attribute::Type AddType(const char *, unsigned int);

	// attribdatabase.cpp:524
	void CollectGarbage();

	// attribdatabase.cpp:554
	void DumpContents(Attribute::Key) const;

private:
	// attribsys.h:677
	void * operator new(size_t);

	// attribsys.h:677
	void operator delete(void *, size_t);

	// attribsys.h:677
	void * operator new(size_t, void *);

	// attribsys.h:677
	void operator delete(void *, void *);

	// attribdatabase.cpp:440
	void Database(Attrib::DatabasePrivate &);

	// attribdatabase.cpp:445
	virtual void ~Database();

	// attribsys.h:685
	const Database & operator=(const Database &);

	// attribdatabase.cpp:519
	void Delete(const Class *);

	// attribdatabase.cpp:514
	void Delete(const Attrib::Collection *);

	// attribdatabase.cpp:544
	bool AddClass(Class *);

	// attribdatabase.cpp:549
	void RemoveClass(const Class *);

}

