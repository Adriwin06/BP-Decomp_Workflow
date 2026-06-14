// attribinstance.cpp:74
void Attrib::Instance::GetCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetKey(/* parameters */);
}

// attribinstance.cpp:82
void Attrib::Instance::GetParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetParent(/* parameters */);
}

// attribinstance.cpp:125
void Attrib::Instance::LocalAttribCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:66
void Attrib::Instance::GetClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetClass(/* parameters */);
}

// attribinstance.cpp:120
void Attrib::Instance::Iterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:37
void Attrib::Instance::Instance(const const Attrib::Instance &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:11
void Attrib::Instance::Instance(const Attrib::Collection *  collection, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:24
void Attrib::Instance::Instance(const const Attrib::RefSpec &  refspec, uint32_t  msgPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:220
void Attrib::Instance::GUKeyInternal(Attribute::Key  classKey, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:222
		uint32_t gGUKindexer;

		// attribinstance.cpp:223
		char[64] namebuffer;

		// attribinstance.cpp:226
		Class * c;

		// attribinstance.cpp:229
		Attribute::Key k;

	}
	{
		// attribinstance.cpp:233
		uint32_t index;

		// attribinstance.cpp:234
		char * ptr;

		{
			// attribinstance.cpp:238
			unsigned int n;

			{
				// attribinstance.cpp:240
				uint32_t nibble;

			}
		}
	}
}

// attribinstance.cpp:207
void Attrib::Instance::GenerateUniqueKey(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetClass(/* parameters */);
	Class::GetKey(/* parameters */);
}

// attribinstance.cpp:112
void Attrib::Instance::Contains(Attribute::Key  attributeKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:336
void Attrib::Instance::GetAttributePointer(Attribute::Key  attribkey, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:101
void Attrib::Instance::Lookup(Attribute::Key  attributeKey, const Attribute &  attrib) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:96
void Attrib::Instance::Get(Attribute::Key  attributeKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:90
void Attrib::Instance::SetParent(Attribute::Key  parent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:58
void Attrib::Instance::~Instance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:187
void Attrib::Instance::Unmodify() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:191
		const Attrib::Collection * collection;

		Collection::Parent(/* parameters */);
		Collection::AddRef(/* parameters */);
		Collection::Release(/* parameters */);
	}
	{
	}
}

// attribinstance.cpp:298
void Attrib::Instance::Change(const Attrib::Collection *  collection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:309
		bool isDynamic;

		Collection::Release(/* parameters */);
		Collection::AddRef(/* parameters */);
	}
	{
	}
}

// attribinstance.cpp:331
void Attrib::Instance::ChangeWithDefault(const const Attrib::RefSpec &  refspec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:326
void Attrib::Instance::Change(const const Attrib::RefSpec &  refspec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:50
void Attrib::Instance::operator=(const const Attrib::Instance &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// attribinstance.cpp:213
void Attrib::Instance::Reserve(unsigned int  spaceForAdditionalAttributes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:216
		Attrib::Collection * c;

	}
	GetDynamicCollection(/* parameters */);
}

// attribinstance.cpp:166
void Attrib::Instance::ModifyInternal(Attribute::Key  classKey, Attribute::Key  dynamicCollectionKey, unsigned int  reserve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:170
		Class * c;

		// attribinstance.cpp:174
		const Attrib::Collection * parent;

		Collection::operator new(/* parameters */);
		CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
		Collection::Release(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

// attribinstance.cpp:160
void Attrib::Instance::Modify(Attribute::Key  dynamicCollectionKey, unsigned int  spaceForAdditionalAttributes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetClass(/* parameters */);
	Class::GetKey(/* parameters */);
}

// attribinstance.cpp:133
void Attrib::Instance::Add(Attribute::Key  attributeKey, unsigned int  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:138
		Attrib::Collection * dynamicCollection;

	}
}

// attribinstance.cpp:344
void Attrib::Instance::MergeCollection(Attrib::Collection *  target, const const Attrib::Instance &  src, const Attrib::Collection *  c, bool  recursive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:356
		bool inLayout;

		// attribinstance.cpp:357
		Attribute::Key k;

		Collection::Capacity(/* parameters */);
	}
	{
		// attribinstance.cpp:360
		Attribute attrib;

	}
}

// attribinstance.cpp:271
void Attrib::Instance::Merge(const const Attrib::Instance &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:276
		Attrib::Collection * dynamicCollection;

		// attribinstance.cpp:280
		bool inLayout;

		// attribinstance.cpp:281
		unsigned int count;

		// attribinstance.cpp:282
		const Attrib::Collection * c;

	}
	GetDynamicCollection(/* parameters */);
	{
		// attribinstance.cpp:285
		Attribute::Key k;

	}
}

// attribinstance.cpp:261
void Attrib::Instance::Clone(const const Attrib::Instance &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:264
		Attrib::Collection * dynamicCollection;

		GetDynamicCollection(/* parameters */);
	}
}

// attribinstance.cpp:252
void Attrib::Instance::Flatten() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:255
		Attrib::Collection * dynamicCollection;

		// attribinstance.cpp:256
		Instance parentInstance;

	}
	GetDynamicCollection(/* parameters */);
}

// attribinstance.cpp:148
void Attrib::Instance::Remove(Attribute::Key  attributeKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribinstance.cpp:150
		bool result;

		// attribinstance.cpp:151
		Attrib::Collection * dynamicCollection;

	}
	GetDynamicCollection(/* parameters */);
}

