// attribuserinclude.h:119
namespace Attrib {
	// attribcollection.cpp:14
	extern unsigned int CacheLineCount();

	// attribcollection.cpp:16
	extern unsigned int TotalAttribNodes();

	// attribcollection.cpp:18
	extern unsigned int ByValueBytes();

	// attribcollection.cpp:8
	extern void * GetCollectionStaticData(const Attrib::Collection *);

	// attribcollection.cpp:13
	unsigned int gSearchCacheLines;

	// attribcollection.cpp:15
	unsigned int gTotalAttribNodes;

	// attribcollection.cpp:17
	unsigned int gByValueBytes;

	// attribcollection.cpp:21
	ExportID gDefaultExportID;

}

// attribcollection.cpp:574
void Attrib::AttributeIterator::AttributeIterator(const const AttributeIterator &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:580
void Attrib::AttributeIterator::operator=(const const AttributeIterator &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:219
void Attrib::Collection::LocalCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:224
void Attrib::Collection::LayoutCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:229
void Attrib::Collection::Count() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:239
void Attrib::Collection::FirstKey(const bool &  inLayout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:241
		Attribute::Key k;

	}
}

// attribcollection.cpp:568
void Attrib::AttributeIterator::AttributeIterator(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:234
void Attrib::Collection::Contains(Attribute::Key  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HashMap::Find(/* parameters */);
	HashMap::ValidIndex(/* parameters */);
	HashMap::Find(/* parameters */);
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::MaxSearch(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::MaxSearch(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetKey(/* parameters */);
}

// attribcollection.cpp:163
void Attrib::Collection::GetNode(Attribute::Key  attributeKey, const const Attrib::Collection *&  container) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:167
		const Attrib::Collection * c;

	}
	{
		// attribcollection.cpp:170
		Attrib::Node * node;

		HashMap::Find(/* parameters */);
	}
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::MaxSearch(/* parameters */);
	Node::GetKey(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	{
		// attribcollection.cpp:182
		Attrib::Node * node;

		HashMap::Find(/* parameters */);
	}
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
}

// attribcollection.cpp:201
void Attrib::Collection::GetData(Attribute::Key  attributeKey, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:203
		const Attrib::Collection * c;

		// attribcollection.cpp:204
		Attrib::Node * node;

	}
	Node::GetPointer(/* parameters */);
	Node::GetArray(/* parameters */);
	Array::GetData(/* parameters */);
	Array::Data(/* parameters */);
}

// attribcollection.cpp:194
void Attrib::Collection::Get(const const Attrib::Instance &  instance, Attribute::Key  attributeKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:196
		const Attrib::Collection * c;

		// attribcollection.cpp:197
		Attrib::Node * node;

	}
}

// attribcollection.cpp:252
void Attrib::Collection::NextKey(Attribute::Key  prev, const bool &  inLayout) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:254
		Attribute::Key k;

	}
	{
		// attribcollection.cpp:257
		unsigned int index;

		HashMap::FindIndex(/* parameters */);
		HashMap::ValidIndex(/* parameters */);
	}
	{
		// attribcollection.cpp:269
		const HashMap & layoutTable;

		// attribcollection.cpp:270
		unsigned int index;

		HashMap::FindIndex(/* parameters */);
		HashMap::ValidIndex(/* parameters */);
	}
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::MaxSearch(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::MaxSearch(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetKey(/* parameters */);
}

// attribcollection.cpp:588
void Attrib::AttributeIterator::Advance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:485
void Attrib::Collection::Clean() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:487
		AttributeIterator iterator;

	}
	{
		// attribcollection.cpp:491
		const Attrib::Collection * container;

		// attribcollection.cpp:492
		Attrib::Node * node;

		{
			// attribcollection.cpp:498
			Attrib::ITypeHandler * handler;

			Node::GetTypeDesc(/* parameters */);
			TypeDesc::GetHandler(/* parameters */);
			Node::GetPointer(/* parameters */);
		}
	}
	{
		// attribcollection.cpp:516
		Definition * defs;

		// attribcollection.cpp:517
		unsigned int count;

		{
			// attribcollection.cpp:518
			unsigned int d;

			{
				// attribcollection.cpp:522
				Attrib::ITypeHandler * handler;

				{
					// attribcollection.cpp:525
					void * dataptr;

				}
			}
			TypeDesc::GetHandler(/* parameters */);
			{
				// attribcollection.cpp:528
				Attrib::Array * array;

				{
					// attribcollection.cpp:529
					unsigned int i;

					Array::GetData(/* parameters */);
					Array::IsReferences(/* parameters */);
					Array::Data(/* parameters */);
				}
			}
		}
	}
	{
		// attribcollection.cpp:503
		Attrib::Array * array;

		Node::GetArray(/* parameters */);
		{
			// attribcollection.cpp:504
			unsigned int i;

			Array::GetData(/* parameters */);
			Array::IsReferences(/* parameters */);
			Array::Data(/* parameters */);
		}
	}
}

// attribcollection.cpp:341
void Attrib::Collection::CopyAttribute(Attribute::Key  key, const const Attrib::Collection &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:343
		const Attrib::Collection * sC;

		// attribcollection.cpp:343
		const Attrib::Collection * dC;

		// attribcollection.cpp:344
		Attrib::Node * srcNode;

		// attribcollection.cpp:345
		Attrib::Node * dstNode;

	}
	Node::GetPointer(/* parameters */);
	Node::GetPointer(/* parameters */);
	Node::GetSize(/* parameters */);
	{
		// attribcollection.cpp:351
		Attrib::Array * srcArray;

		// attribcollection.cpp:352
		Attrib::Array * dstArray;

		Node::GetArray(/* parameters */);
		Node::GetArray(/* parameters */);
		Array::GetCount(/* parameters */);
		Array::SetCount(/* parameters */);
		{
			// attribcollection.cpp:354
			unsigned int i;

			Array::CopyData(/* parameters */);
			Array::GetData(/* parameters */);
			Array::IsReferences(/* parameters */);
			Array::Data(/* parameters */);
			Array::IsReferences(/* parameters */);
			Array::Data(/* parameters */);
			{
				Array::GetTypeDesc(/* parameters */);
				TypeDesc::GetHandler(/* parameters */);
				Array::Data(/* parameters */);
			}
		}
	}
	Array::Data(/* parameters */);
	Array::Data(/* parameters */);
	{
		Array::SetData(/* parameters */);
		{
			Array::GetTypeDesc(/* parameters */);
			TypeDesc::GetHandler(/* parameters */);
			Array::GetData(/* parameters */);
			Array::IsReferences(/* parameters */);
			Array::Data(/* parameters */);
			Array::Data(/* parameters */);
		}
	}
	Node::GetTypeDesc(/* parameters */);
	TypeDesc::GetSize(/* parameters */);
	Array::Data(/* parameters */);
	Array::Data(/* parameters */);
}

// attribcollection.cpp:278
void Attrib::Collection::SetParent(Attribute::Key  parent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Release(/* parameters */);
	AddRef(/* parameters */);
	{
	}
}

// attribcollection.cpp:415
void Attrib::Collection::Reserve(unsigned int  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HashMap::RebuildTable(/* parameters */);
	HashMapTablePolicy::Alloc(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	Node::Node(/* parameters */);
	{
	}
	{
	}
	HashMapTablePolicy::Free(/* parameters */);
	HashMap::Transfer(/* parameters */);
	Node::ResetSearchLength(/* parameters */);
	Node::GetKey(/* parameters */);
	HashMapTablePolicy::KeyIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::Node(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

// attribcollection.cpp:23
void Attrib::Collection::Collection(Class *  aclass, const Attrib::Collection *  parent, Attribute::Key  k, unsigned int  reserveSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:32
		bool success;

	}
}

// attribcollection.cpp:48
void Attrib::Collection::Collection(const const CollectionLoadData &  loadData, Vault *  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:58
		bool success;

		// attribcollection.cpp:80
		const Attribute::Type * typeList;

		// attribcollection.cpp:81
		const Attrib::CollectionLoadData::AttribEntry * entries;

		// attribcollection.cpp:101
		bool inLayout;

		// attribcollection.cpp:102
		Attribute::Key k;

		{
			// attribcollection.cpp:82
			unsigned int i;

			{
				// attribcollection.cpp:84
				const const Attrib::CollectionLoadData::AttribEntry & entry;

				{
					// attribcollection.cpp:89
					unsigned int bytes;

				}
			}
		}
		{
			// attribcollection.cpp:105
			const Attrib::Collection * container;

			// attribcollection.cpp:106
			Attrib::Node * node;

		}
	}
}

// attribcollection.cpp:292
void Attrib::Collection::AddAttribute(Attribute::Key  attributeKey, unsigned int  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:297
		const Class * c;

		// attribcollection.cpp:300
		bool result;

		// attribcollection.cpp:301
		uint8_t flags;

		// attribcollection.cpp:302
		const Definition * d;

		{
			// attribcollection.cpp:317
			void * dst;

			Definition::GetSize(/* parameters */);
			Definition::GetSize(/* parameters */);
			Free(/* parameters */);
		}
	}
	{
		// attribcollection.cpp:309
		Attrib::Array * array;

		Array::Create(/* parameters */);
		Array::Destroy(/* parameters */);
	}
	Definition::GetType(/* parameters */);
	TypeDesc::GetSize(/* parameters */);
	Array::AllocSizeFromCount(/* parameters */);
	Alloc(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	{
	}
	Array::SetData(/* parameters */);
	{
		Array::GetTypeDesc(/* parameters */);
		TypeDesc::GetHandler(/* parameters */);
		Array::GetData(/* parameters */);
		Array::IsReferences(/* parameters */);
		Array::Data(/* parameters */);
		Array::Data(/* parameters */);
	}
	Array::Data(/* parameters */);
	Alloc(/* parameters */);
	Array::Data(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	Array::GetTypeDesc(/* parameters */);
	{
		Array::GetTypeDesc(/* parameters */);
		TypeDesc::GetHandler(/* parameters */);
		Array::Data(/* parameters */);
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

// attribcollection.cpp:113
void Attrib::Collection::Collection(const const Attrib::Collection &  src, Attribute::Key  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:119
		bool success;

		// attribcollection.cpp:133
		unsigned int index;

		{
			// attribcollection.cpp:136
			Attrib::Node * srcNode;

		}
	}
}

// attribcollection.cpp:540
void Attrib::Collection::FreeNodeData(bool  isArray, void *  data, bool  requiresRelease, const const TypeDesc &  typeDesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:542
		Attrib::ITypeHandler * handler;

	}
	TypeDesc::GetHandler(/* parameters */);
	{
		// attribcollection.cpp:545
		Attrib::Array * array;

		{
			// attribcollection.cpp:547
			unsigned int i;

		}
		Array::GetData(/* parameters */);
		Array::IsReferences(/* parameters */);
		Array::Data(/* parameters */);
		Array::Destroy(/* parameters */);
	}
	TypeDesc::GetSize(/* parameters */);
	Free(/* parameters */);
	{
		Array::GetTypeDesc(/* parameters */);
		TypeDesc::GetHandler(/* parameters */);
		Array::Data(/* parameters */);
		{
		}
	}
}

// attribcollection.cpp:421
void Attrib::Collection::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:424
		unsigned int numAttributes;

		// attribcollection.cpp:425
		unsigned int numAttributesCleared;

		// attribcollection.cpp:427
		unsigned int index;

		// attribcollection.cpp:450
		const HashMap & layoutTable;

		HashMap::GetNextValidIndex(/* parameters */);
		Node::IsValid(/* parameters */);
		HashMap::ValidIndex(/* parameters */);
		{
			// attribcollection.cpp:431
			Attrib::Node * node;

			// attribcollection.cpp:435
			bool isArray;

			// attribcollection.cpp:436
			bool releaseRequired;

			// attribcollection.cpp:437
			const const TypeDesc & typeDesc;

			// attribcollection.cpp:441
			void * data;

			HashMap::GetNextValidIndex(/* parameters */);
		}
		HashMap::GetNextValidIndex(/* parameters */);
		HashMap::ValidIndex(/* parameters */);
	}
	Node::IsValid(/* parameters */);
	{
		// attribcollection.cpp:455
		Attribute::Key attribKey;

		// attribcollection.cpp:457
		Attrib::Node * node;

		HashMap::GetKeyAtIndex(/* parameters */);
		HashMap::Find(/* parameters */);
		{
			// attribcollection.cpp:463
			void * data;

			Node::GetPointer(/* parameters */);
			{
				// attribcollection.cpp:467
				bool isArray;

				// attribcollection.cpp:468
				bool releaseRequired;

				// attribcollection.cpp:469
				const const TypeDesc & typeDesc;

				Node::GetTypeDesc(/* parameters */);
			}
		}
	}
	HashMap::GetNodeAtIndex(/* parameters */);
	Node::GetTypeDesc(/* parameters */);
	HashMap::Remove(/* parameters */);
	Node::GetPointer(/* parameters */);
	Node::Invalidate(/* parameters */);
	Node::ResetSearchLength(/* parameters */);
	Node::IsValid(/* parameters */);
	HashMap::GetNextValidIndex(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
}

// attribcollection.cpp:365
void Attrib::Collection::RemoveAttribute(Attribute::Key  attributeKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribcollection.cpp:367
		const Attrib::Collection * container;

		// attribcollection.cpp:368
		Attrib::Node * node;

	}
	{
		// attribcollection.cpp:371
		bool isArray;

		// attribcollection.cpp:372
		bool releaseRequired;

		// attribcollection.cpp:373
		const const TypeDesc & typeDesc;

		{
			// attribcollection.cpp:404
			void * data;

		}
	}
	Node::GetTypeDesc(/* parameters */);
	{
		// attribcollection.cpp:377
		const Attrib::Collection * parent;

		Parent(/* parameters */);
		{
			// attribcollection.cpp:380
			const Attrib::Collection * parentcontainer;

			// attribcollection.cpp:381
			Attrib::Node * parentnode;

			{
				// attribcollection.cpp:385
				Attrib::Array * srcarray;

				// attribcollection.cpp:386
				Attrib::Array * dstarray;

				// attribcollection.cpp:387
				unsigned int count;

				Node::GetArray(/* parameters */);
				GetLayout(/* parameters */);
				Node::GetArray(/* parameters */);
				GetLayout(/* parameters */);
				Array::GetCount(/* parameters */);
				Array::SetCount(/* parameters */);
			}
		}
	}
	HashMap::Remove(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetPointer(/* parameters */);
	Node::Invalidate(/* parameters */);
	{
		HashMapTablePolicy::KeyIndex(/* parameters */);
	}
	HashMap::UpdateSearchLength(/* parameters */);
	HashMap::UpdateSearchLength(/* parameters */);
	Node::MaxSearch(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::Move(/* parameters */);
	{
		{
		}
		Node::GetKey(/* parameters */);
	}
	Node::ResetSearchLength(/* parameters */);
	{
		{
		}
	}
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Node::GetKey(/* parameters */);
	Node::GetArray(/* parameters */);
	GetLayout(/* parameters */);
	Array::SetCount(/* parameters */);
	{
		{
		}
	}
	{
		// attribcollection.cpp:389
		unsigned int i;

		Array::GetData(/* parameters */);
		Array::GetData(/* parameters */);
		Array::IsReferences(/* parameters */);
		Array::Data(/* parameters */);
		Array::Data(/* parameters */);
	}
	Node::GetPointer(/* parameters */);
	GetLayout(/* parameters */);
	Node::GetPointer(/* parameters */);
	GetLayout(/* parameters */);
	Node::GetPointer(/* parameters */);
	GetLayout(/* parameters */);
	HashMapTablePolicy::WrapIndex(/* parameters */);
	{
		Array::GetTypeDesc(/* parameters */);
		TypeDesc::GetHandler(/* parameters */);
		Array::GetData(/* parameters */);
		Array::IsReferences(/* parameters */);
		Array::Data(/* parameters */);
		Array::Data(/* parameters */);
	}
	HashMapTablePolicy::WrapIndex(/* parameters */);
	Array::Data(/* parameters */);
	Array::Data(/* parameters */);
}

// attribcollection.cpp:143
void Attrib::Collection::~Collection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribcollection.cpp:561
void Attrib::Collection::Delete() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator delete(/* parameters */);
}

