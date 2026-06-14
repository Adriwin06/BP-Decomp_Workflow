struct _CGprogram;

struct _CGparameter;

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void Attrib::AllocationAccounting(size_t  bytes, bool  add) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::Get() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::IsSimple() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::GetVaultArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysDebugComponent::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::AdjustHashTableSize(unsigned int  requiredSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::Parent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionParent(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::Parent(/* parameters */);
}

void Attrib::Class::Class(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Class::~Class(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::GetTableNodeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CacheLineCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TotalAttribNodes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ByValueBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Attribute::~Attribute(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Attribute::Attribute(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::AttributeIterator::AttributeIterator(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::Database(const Attrib::DatabasePrivate &  privates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::Database(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>::operator*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::IsExported(const const TypeID &  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::AnyReferences(const const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::PrepareToClean(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::Clean(const Attrib::Vault &, const const TypeID &, const const ExportID &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::PrepareToDeinitialize(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::IsExported(const const TypeID &  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::IsReferenced(const const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::Clean(const Attrib::Vault &  v, const const TypeID &, const const ExportID &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::Deinitialize(const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::IsExported(const const TypeID &  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::IsReferenced(const const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::Clean(const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::Deinitialize(const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::IExportPolicy::~IExportPolicy() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::IExportPolicy::~IExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetNumClasses() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetNumIndexedTypes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::DumpContents(Attribute::Key  classFilter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::hash32(const uint8_t *  k, unsigned int  length, unsigned int  initval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhash32.cpp:76
		uint32_t len;

		// attribhash32.cpp:77
		uint32_t a;

		// attribhash32.cpp:77
		uint32_t b;

		// attribhash32.cpp:77
		uint32_t c;

	}
}

void Attrib::StringHash32(const char *  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringHash32(const void *  k, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::hash64(const uint8_t *  k, unsigned int  length, uint64_t  initval) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhash64.cpp:59
		unsigned int len;

		// attribhash64.cpp:60
		uint64_t a;

		// attribhash64.cpp:60
		uint64_t b;

		// attribhash64.cpp:60
		uint64_t c;

	}
}

void Attrib::StringHash64(const void *  k, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringToKey(const char *  str, unsigned int  len) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringHash64(const char *  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringToKey(const char *  str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringToTypeID(const char *  typeName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CharToEditOpCodeLabel(char  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:27
		const char * ptr;

	}
}

void Attrib::Attribute::Attribute(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::SetEditNotifier(void (*)(const Attrib::Collection *, Attribute::Key)  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::SetLoopNotifier(void (*)(const Attrib::Collection *, Attribute::Key)  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::SetMessageSender(void (*)(const char *)  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::SetArrayLengthMessageSender(void (*)(const char *)  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::SetHashLookupSender(const char *(*)(const char *, Attribute::Key)  func) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TextToHex(char  text) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::NibbleChar(unsigned char  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ModifyMemory(unsigned char *  dataptr, unsigned int  size, const char *  info) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:297
		unsigned int index;

	}
	{
		// attriblivelink.cpp:299
		char hiNibbleText;

		// attriblivelink.cpp:300
		char loNibbleText;

	}
}

void eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>::rbtree_iterator(const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>::rbtree_iterator(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>::operator*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ValueToText(const void *  data, unsigned int  bytes, char *  output) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:524
		const unsigned char * dataptr;

		{
			// attriblivelink.cpp:525
			unsigned int b;

		}
	}
	{
		// attriblivelink.cpp:527
		unsigned char d;

	}
}

void Attrib::CopyString(char *  dst, const char *  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::IntToString(char *  dst, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:544
		bool needZero;

		// attriblivelink.cpp:545
		unsigned int divisor;

		{
			// attriblivelink.cpp:548
			unsigned int digit;

		}
	}
}

void Attrib::InsertSchemaVersion(char *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:566
		uint64_t sv;

	}
}

void Attrib::HashLookup(Attribute::Key  hashKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:573
		char[17] keyStr;

		// attriblivelink.cpp:575
		char[1024] buffer;

		// attriblivelink.cpp:576
		char * ptr;

		// attriblivelink.cpp:580
		const char * returnStr;

	}
}

void Attrib::StringToAssetID(const char *  assetName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringToExportID(const char *  exportName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::IGarbageCollector::~IGarbageCollector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::IGarbageCollector::~IGarbageCollector(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::GetData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::find<Attrib::AssetID*, Attrib::ExportID>(Vault::AssetID *  first, Vault::AssetID *  last, const const ExportID &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::Set(void *  data, unsigned int  bytes, unsigned char  kind) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::PeakMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CurrMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::GetSource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionSource(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::tolower(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ctype.h:129
		int __x;

	}
}

void std::isupper(int  _Ch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::StringToLowerCaseKey(const char *  str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribsupport.cpp:90
		char[256] temp;

		// attribsupport.cpp:90
		char * ptr;

	}
	std(/* parameters */);
}

void Attrib::AssertOnClassCheck(Attribute::Key  k1, Attribute::Key  k2, Attribute::Key  collectionKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ITypeHandler::~ITypeHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ITypeHandler::~ITypeHandler(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::IsDynamic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsMemory::LinearMalloc::GetAlignment() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>::rbtree_iterator(const eastl::rbtree_node<Attrib::TypeDesc> *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>::rbtree_iterator(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>::rbtree_iterator(const eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::distance<const Attrib::Definition*>(const Definition *  first, const Definition *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::distance_impl<const Attrib::Definition*>(const Definition *  first, const Definition *  last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::advance<const Attrib::Definition*, int>(const const Definition *&  i, int  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::advance_impl<const Attrib::Definition*, int>(const const Definition *&  i, int  n, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::operator<(const const Definition &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::lower_bound<const Attrib::Definition*, Attrib::Definition>(const Definition *  first, const Definition *  last, const const Definition &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:2300
		ptrdiff_t d;

		distance<const Attrib::Definition*>(/* parameters */);
		{
			// algorithm.h:2304
			const Definition * i;

			// algorithm.h:2305
			ptrdiff_t d2;

			Attrib::Definition::operator<(/* parameters */);
		}
		advance<const Attrib::Definition*, int>(/* parameters */);
	}
}

void eastl::distance<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::distance_impl<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::advance<Attrib::ExportManager::ExportPolicyPair*, int>(const ExportManager::ExportPolicyPair *&  i, int  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::advance_impl<Attrib::ExportManager::ExportPolicyPair*, int>(const ExportManager::ExportPolicyPair *&  i, int  n, random_access_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ExportManager::ExportPolicyPair::operator<(const const ExportPolicyPair &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::lower_bound<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last, const const ExportPolicyPair &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:2300
		ptrdiff_t d;

		distance<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
		{
			// algorithm.h:2304
			ExportManager::ExportPolicyPair * i;

			// algorithm.h:2305
			ptrdiff_t d2;

			Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
		}
		advance<Attrib::ExportManager::ExportPolicyPair*, int>(/* parameters */);
	}
}

void Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(TypeID  t, Attrib::IExportPolicy *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Private::ToArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(const const ExportPolicyPair &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ExportManager::ExportPolicyPair::operator=(const const ExportPolicyPair &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::insertion_sort<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		// sort.h:172
		ExportManager::ExportPolicyPair * iCurrent;

		// sort.h:172
		ExportManager::ExportPolicyPair * iNext;

		// sort.h:172
		ExportManager::ExportPolicyPair * iSorted;

		{
			// sort.h:176
			const ExportPolicyPair temp;

			Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
			Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
			Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
		}
		Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
	}
}

void eastl::promote_heap<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t, Attrib::ExportManager::ExportPolicyPair>(ExportManager::ExportPolicyPair *  first, ptrdiff_t  topPosition, ptrdiff_t  position, ExportPolicyPair &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// heap.h:63
		ptrdiff_t parentPosition;

	}
}

void eastl::adjust_heap<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t, Attrib::ExportManager::ExportPolicyPair>(ExportManager::ExportPolicyPair *  first, ptrdiff_t  topPosition, ptrdiff_t  heapSize, ptrdiff_t  position, ExportPolicyPair &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// heap.h:114
		ptrdiff_t childPosition;

	}
	Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
	promote_heap<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t, Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator=(/* parameters */);
}

void eastl::make_heap<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// heap.h:281
		const ptrdiff_t heapSize;

	}
	{
		// heap.h:285
		ptrdiff_t parentPosition;

		Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
	}
}

void Attrib::Collection::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::GetParent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionKey(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetKey(/* parameters */);
}

void Attrib::Vault::DataBlock::GetKind() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::ExportNode::GetExports() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetFlag(unsigned int  mask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::AssertOnTypeCheck(Attribute::Type  t, Attrib::Node *  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Node::GetKey(/* parameters */);
	Node::GetKey(/* parameters */);
}

void Attrib::IsSourceVault(const Attrib::Collection *  c, const Attrib::Vault *  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::GetClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Class::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionClassKey(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::GetClass(/* parameters */);
}

void Attrib::EncodeClassCollectionAttribute(const Attribute &  a, char *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:589
		char[17] className;

		// attriblivelink.cpp:590
		Attribute::Key key;

		// attriblivelink.cpp:593
		char[17] collectionName;

		// attriblivelink.cpp:597
		char[17] attributeName;

		// attriblivelink.cpp:603
		char * ptr;

	}
}

void Attrib::TweakAttributeLength(const Attribute &  a, unsigned int  arrayLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:653
		char[1024] buffer;

		// attriblivelink.cpp:654
		char * ptr;

		// attriblivelink.cpp:655
		int prefixLen;

		// attriblivelink.cpp:657
		char * intAsString;

	}
}

void Attrib::EncodeTweakPacketPrefix(const Attribute &  a, unsigned int  index, const char *  fieldName, char *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:612
		char * ptr;

	}
}

void Attrib::TweakAttribute(const Attribute &  a, unsigned int  index, const char *  fieldName, const void *  data, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:634
		char[1024] buffer;

		// attriblivelink.cpp:635
		unsigned int prefixLen;

		// attriblivelink.cpp:637
		const unsigned char * dataptr;

		// attriblivelink.cpp:638
		char * output;

	}
	{
		// attriblivelink.cpp:639
		unsigned int b;

	}
	{
		// attriblivelink.cpp:641
		unsigned char d;

	}
}

void Attrib::TweakAttribute(const Attribute &  a, unsigned int  index, const char *  fieldName, const char *  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:624
		char[1024] buffer;

		// attriblivelink.cpp:625
		unsigned int prefixLen;

	}
}

void Attrib::Node::IsLaidOut() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::IsDynamic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetDynamicCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetConstCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::IsReferenced(const const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:145
		unsigned int index;

		// attribdatabase.cpp:146
		DatabasePrivate * db;

	}
}

void Attrib::Collection::ContainingClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionStaticData(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::GetCollectionClass(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::Definition(Attribute::Key  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::GetNextValidIndex(unsigned int  startPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:293
		unsigned int index;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::ValidIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::GetKeyAtIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Key() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ScanForValidKey<Attrib::ClassPrivate::CollectionHashMap>(const const Attrib::ClassPrivate::CollectionHashMap &  v, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::GetNextValidIndex(/* parameters */);
	{
	}
	VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::ValidIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::GetKeyAtIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::IsValid(/* parameters */);
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::GetNextValidIndex(unsigned int  startPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:293
		unsigned int index;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::IsValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::ValidIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::GetKeyAtIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ScanForValidKey<Attrib::ClassTable>(const const ClassTable &  v, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::GetNextValidIndex(/* parameters */);
	{
	}
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::ValidIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::GetKeyAtIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::IsValid(/* parameters */);
}

void Attrib::Database::GetFirstClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugUI::LogWindow::LogWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void DebugInternal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	CgsDev::DebugUI::LogWindow::LogWindow(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	CgsDev::DebugUI::CustomWindowMenuItem::CustomWindowMenuItem(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassPrivate::IsReferenced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::IsReferenced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DependencyNode::GetName(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DependencyNode::GetNameBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DependencyNode::GetNameOffsets() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DependencyNode::GetAssetIDs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::use_self<Attrib::TypeDesc>::operator()(const const TypeDesc &  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::less<Attrib::TypeDesc>::operator()(const const TypeDesc &  a, const const TypeDesc &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::operator<(const const TypeDesc &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::find(const const TypeDesc &  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1308
		use_self<Attrib::TypeDesc> extractKey;

		// red_black_tree.h:1310
		eastl::rbtree_node<Attrib::TypeDesc> * pCurrent;

		// red_black_tree.h:1311
		eastl::rbtree_node<Attrib::TypeDesc> * pRangeEnd;

		less<Attrib::TypeDesc>::operator()(/* parameters */);
	}
}

void eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::less<Attrib::EditSpecifier>::operator()(const const EditSpecifier &  a, const const EditSpecifier &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::operator<(const const EditSpecifier &  rhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::find(const const EditSpecifier &  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1308
		use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > extractKey;

		// red_black_tree.h:1310
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * pCurrent;

		// red_black_tree.h:1311
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * pRangeEnd;

	}
	less<Attrib::EditSpecifier>::operator()(/* parameters */);
	use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(/* parameters */);
	use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(/* parameters */);
	less<Attrib::EditSpecifier>::operator()(/* parameters */);
}

void Attrib::Node::IsArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::GetLayoutPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetArray(void *  layoutptr, const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::IsStatic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetData(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::IsReferences() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::Data(unsigned int  byteindex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:46
		uint8_t * base;

	}
}

void Attrib::Array::BasePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetPad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetPointer(void *  layoutptr, const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::IsByValue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::TypeDesc(Attribute::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::end() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>(const const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &  a, const const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::operator[](eastl_size_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetTypeDesc(Attribute::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:491
		rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> iter;

		TypeDesc::TypeDesc(/* parameters */);
	}
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::end(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::operator[](/* parameters */);
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsContainers::BitArray<24u>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<24u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	UnSetAll(/* parameters */);
}

void CgsAttribSys::AttribSysGarbageCollector::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.cpp:61
		int32_t liI;

		AttribSysGarbageCollector::Construct(/* parameters */);
	}
	VaultArray::Construct(/* parameters */);
	StreamedVaultAllocator::Construct(/* parameters */);
}

void Attrib::Vault::PointerNode::GetPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::ReleaseAsset(Vault::AssetID  id, Attrib::IGarbageCollector *  gc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::Inited() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetIndexedTypeDesc(uint16_t  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:484
		unsigned int actualIndex;

		// attribdatabase.cpp:485
		const const TypeDesc & result;

	}
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::operator[](/* parameters */);
}

void Attrib::HashMap::GetNextValidIndex(unsigned int  startPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:523
		unsigned int index;

	}
}

void Attrib::HashMap::ValidIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::GetKeyAtIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ScanForValidKey<Attrib::HashMap>(const const HashMap &  v, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	HashMap::GetNextValidIndex(/* parameters */);
	HashMap::GetKeyAtIndex(/* parameters */);
	Node::IsValid(/* parameters */);
	HashMap::ValidIndex(/* parameters */);
	HashMap::ValidIndex(/* parameters */);
}

void Attrib::Collection::AddRef(Attribute::Key  who) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::AddRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RefSpec::RefSpec(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Collection::AddRef(/* parameters */);
}

void Attrib::Collection::GetLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Instance::Instance(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Collection::AddRef(/* parameters */);
}

void Attrib::Instance::Instance(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Collection::AddRef(/* parameters */);
}

void Attrib::ClassPrivate::AddRef() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::median<Attrib::ExportManager::ExportPolicyPair>(const const ExportPolicyPair &  a, const const ExportPolicyPair &  b, const const ExportPolicyPair &  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::get_partition<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last, ExportPolicyPair &  pivotValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::iter_swap<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  a, ExportManager::ExportPolicyPair *  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::swap<Attrib::ExportManager::ExportPolicyPair>(const ExportPolicyPair &  a, const ExportPolicyPair &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:879
		ExportPolicyPair temp;

	}
}

void eastl::quick_sort_impl<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last, ptrdiff_t  kRecursionCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		{
			// sort.h:656
			ExportManager::ExportPolicyPair *const position;

		}
	}
}

void eastl::partial_sort<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  middle, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		{
			// sort.h:571
			ExportManager::ExportPolicyPair * i;

			{
				// sort.h:575
				const ExportPolicyPair temp;

			}
		}
	}
}

void eastl::sort_heap<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::pop_heap<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// heap.h:231
		const ExportPolicyPair tempBottom;

	}
}

void eastl::quick_sort_impl<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t>(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		eastl::median<Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
		Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
		eastl::get_partition<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
		eastl::quick_sort_impl<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t>(/* parameters */);
		{
			eastl::median<Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
			Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
			eastl::get_partition<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
		}
		eastl::partial_sort<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
	}
	eastl::pop_heap<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
	eastl::partial_sort<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
}

void eastl::Log2<int>(int  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sort.h:473
		int i;

	}
}

void eastl::insertion_sort_simple<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sort.h:532
		ExportManager::ExportPolicyPair * current;

		{
			// sort.h:536
			ExportManager::ExportPolicyPair * end;

			// sort.h:536
			ExportManager::ExportPolicyPair * prev;

			// sort.h:537
			const ExportPolicyPair value;

		}
	}
}

void eastl::quick_sort<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	Log2<int>(/* parameters */);
	quick_sort_impl<Attrib::ExportManager::ExportPolicyPair*, std::ptrdiff_t>(/* parameters */);
	{
		median<Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
	}
	Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::ExportPolicyPair(/* parameters */);
	get_partition<Attrib::ExportManager::ExportPolicyPair*, Attrib::ExportManager::ExportPolicyPair>(/* parameters */);
	insertion_sort_simple<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
	partial_sort<Attrib::ExportManager::ExportPolicyPair*>(/* parameters */);
	Attrib::ExportManager::ExportPolicyPair::operator<(/* parameters */);
}

void eastl::sort<Attrib::ExportManager::ExportPolicyPair*>(ExportManager::ExportPolicyPair *  first, ExportManager::ExportPolicyPair *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ID::SetHash(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::IsOccupied() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::ContainsVaultResource(ResourceHandle  lResHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator==(ID  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultArray::GetNumSlots() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.h:115
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(CgsModule::DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(CgsModule::DataStructure *  lpInputDataStructure, CgsModule::DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void Attrib::Node::GetTypeDesc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetSize(void *  layoutptr, const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetTypeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::GetCount(void *  layoutptr, const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::SetCount(unsigned int  newCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:83
		unsigned int i;

	}
}

void Attrib::Array::SetData(unsigned int  index, void *  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:110
		Attrib::ITypeHandler * typeHandler;

	}
}

void Attrib::Array::GetTypeDesc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetTypeIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::GetHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Find(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:273
		unsigned int index;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::FindIndex(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:257
		VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node * table;

		// vechashmap.h:258
		unsigned int actualIndex;

		// vechashmap.h:260
		unsigned int searchLen;

		// vechashmap.h:260
		unsigned int maxSearchlen;

	}
}

void Attrib::Class::TablePolicy::KeyIndex(Attribute::Key  k, unsigned int  tableSize, unsigned int  keyShift) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::MaxSearch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Class::TablePolicy::WrapIndex(unsigned int  index, unsigned int  tableSize, unsigned int  keyShift) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Get() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Find(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:273
		unsigned int index;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::FindIndex(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:257
		VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node * table;

		// vechashmap.h:258
		unsigned int actualIndex;

		// vechashmap.h:260
		unsigned int searchLen;

		// vechashmap.h:260
		unsigned int maxSearchlen;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::MaxSearch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Get() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetClass(Attribute::Key  k) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Find(/* parameters */);
	Class::TablePolicy::KeyIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::MaxSearch(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::IsValid(/* parameters */);
	Class::TablePolicy::WrapIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
}

void Attrib::FindCollectionWithDefault(Attribute::Key  classKey, Attribute::Key  collectionKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribsupport.cpp:46
		const Class * classPtr;

	}
}

void Attrib::FindCollection(Attribute::Key  classKey, Attribute::Key  collectionKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribsupport.cpp:37
		const Class * classPtr;

	}
}

void Attrib::Database::GetNextClass(Attribute::Key  prev) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:468
		unsigned int index;

		VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::FindIndex(/* parameters */);
		VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::ValidIndex(/* parameters */);
	}
	Class::TablePolicy::KeyIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::MaxSearch(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::IsValid(/* parameters */);
	Class::TablePolicy::WrapIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
}

void Attrib::Definition::IsStatic() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::GetFlag(unsigned int  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::GetOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::GetType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::IsArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::PrepareToClean(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:235
		const Database & db;

		{
			// attribdatabase.cpp:236
			Attribute::Key classkey;

		}
	}
	{
		// attribdatabase.cpp:238
		Class * c;

		// attribdatabase.cpp:239
		const ClassStaticDesc * sDesc;

		{
			// attribdatabase.cpp:242
			Attribute::Key definitionKey;

			{
				// attribdatabase.cpp:244
				const Definition * definition;

				{
					// attribdatabase.cpp:248
					unsigned char * dataptr;

					{
						// attribdatabase.cpp:253
						Attrib::ITypeHandler * typeHandler;

					}
				}
			}
		}
	}
	TypeDesc::GetHandler(/* parameters */);
	{
		// attribdatabase.cpp:258
		Attrib::Array * array;

		{
			// attribdatabase.cpp:259
			unsigned int i;

			Array::GetData(/* parameters */);
			Array::IsReferences(/* parameters */);
			Array::Data(/* parameters */);
		}
	}
}

void Attrib::ClassPrivate::GetSource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassPrivate::GetRefs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::GetRefs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::AnyReferences(const const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:215
		const Database & db;

		// attribdatabase.cpp:216
		Attribute::Key classkey;

		{
			// attribdatabase.cpp:219
			ClassPrivate * c;

		}
	}
}

void Attrib::Collection::GetRefs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::AnyReferences(const const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:321
		const Database & db;

		// attribdatabase.cpp:322
		Attribute::Key classkey;

	}
	{
		// attribdatabase.cpp:325
		Class * c;

		// attribdatabase.cpp:326
		Attribute::Key collectkey;

	}
	{
		// attribdatabase.cpp:329
		const Attrib::Collection * collect;

	}
}

void Attrib::Attribute::Attribute(None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Node::GetPointer(/* parameters */);
	Attrib::Instance::GetLayoutPointer(/* parameters */);
}

void Attrib::HashMap::Find(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:504
		unsigned int index;

	}
}

void Attrib::HashMap::FindIndex(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:489
		Attrib::Node * table;

		// attribhashmap.h:490
		unsigned int actualIndex;

		// attribhashmap.h:491
		unsigned int searchLen;

		// attribhashmap.h:491
		unsigned int maxSearchlen;

	}
}

void Attrib::HashMapTablePolicy::KeyIndex(Attribute::Key  k, unsigned int  tableSize, unsigned int  keyShift) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::MaxSearch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMapTablePolicy::WrapIndex(unsigned int  index, unsigned int  tableSize, unsigned int  keyShift) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::AttributeIterator::Valid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::AttributeIterator::GetKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::IsNotSearchable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::PrepareToClean(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:347
		const Database & db;

		// attribdatabase.cpp:348
		Attribute::Key classkey;

	}
	{
		// attribdatabase.cpp:351
		Class * c;

		// attribdatabase.cpp:352
		Attribute::Key collectkey;

		{
			// attribdatabase.cpp:355
			const Attrib::Collection * collect;

		}
	}
}

void Attrib::Array::CopyData(unsigned int  index, void *  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:124
		void * dataPtr;

		{
			// attribhashmap.h:127
			Attrib::ITypeHandler * typeHandler;

		}
	}
}

void CgsAttribSys::AttribSysPackageAllocator::Construct(CgsAttribSys::AttribSysPackageAllocator::EAttribSysUserPackage  leUserPackage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::Prepare(HeapMalloc *  lpHeapAllocator, int32_t  liAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::operator++(const CgsAttribSys::AttribSysModule::EPrepareStage &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.h:230
		CgsAttribSys::AttribSysModule::EPrepareStage leOldEnumIndex;

	}
}

void CgsAttribSys::AttribSysModule::Prepare(LinearMalloc *  lpLinearAlloc, HeapMalloc *  lpAttribSysHeap, HeapMalloc *  lpGameTalkHeap, HeapMalloc *  lpEastlHeap, int32_t  liMaxNumVaults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoFreeNode(eastl::rbtree_node<Attrib::TypeDesc> *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~rbtree_node() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::Free(void *  lpMemory, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::Free(void *  lpMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoNukeSubtree(eastl::rbtree_node<Attrib::TypeDesc> *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1686
		eastl::rbtree_node<Attrib::TypeDesc> *const pNodeLeft;

		DoFreeNode(/* parameters */);
	}
	CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
}

void CgsAttribSys::AttribSysPackageAllocator::Malloc(size_t  liSize, int  liFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysPackageAllocator.h:247
		void * lpMemory;

		{
			// CgsAttribSysPackageAllocator.h:249
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsAttribSys::AttribSysPackageAllocator::MallocAligned(size_t  liSize, size_t  liAlignment, size_t  liOffset, int  liFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysPackageAllocator.h:304
		void * lpNull;

		{
			// CgsAttribSysPackageAllocator.h:302
			CgsDev::StrStream lStrStream;

		}
	}
}

void eastl::allocate_memory<CgsAttribSys::AttribSysPackageAllocator>(const AttribSysPackageAllocator &  a, size_t  n, size_t  alignment, size_t  alignmentOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::MallocAligned(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>::ListIterator(const ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::end() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::find<eastl::ListIterator<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&>, const Attrib::Class*>(ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  first, ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  last, const const Class *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&>(const const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  a, const const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>::operator*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>::ListIterator(const const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator==<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&, const Attrib::Class**, const Attrib::Class*&>(const const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  a, const const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::push_back(const const Class *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoInsertValue(ListNodeBase *  pNode, const const Class *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:1521
		eastl::ListNode<const Attrib::Class*> *const pNodeNew;

	}
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoCreateNode(const const Class *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:1404
		eastl::ListNode<const Attrib::Class*> *const pNode;

	}
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoAllocateNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListNodeBase::insert(ListNodeBase *const  pNext) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::Delete(const Class *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	QueueForDelete<Attrib::Class>(/* parameters */);
	eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::begin(/* parameters */);
	eastl::find<eastl::ListIterator<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&>, const Attrib::Class*>(/* parameters */);
	eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::push_back(/* parameters */);
}

void Attrib::ClassPrivate::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:623
		bool isReleased;

	}
}

void Attrib::ClassExportPolicy::PrepareToDeinitialize(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:279
		const Database & db;

		// attribdatabase.cpp:280
		Attribute::Key classkey;

	}
	{
		// attribdatabase.cpp:283
		ClassPrivate * c;

	}
	ClassPrivate::Release(/* parameters */);
	HashMap::Release(/* parameters */);
}

void Attrib::Collection::IsReferenced() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>::ListIterator(const ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::end() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::find<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&>, const Attrib::Collection*>(ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  first, ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  last, const const Attrib::Collection *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&>(const const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  a, const const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>::operator*() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>::ListIterator(const const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator==<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&, const Attrib::Collection**, const Attrib::Collection*&>(const const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  a, const const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::push_back(const const Attrib::Collection *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoInsertValue(ListNodeBase *  pNode, const const Attrib::Collection *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:1521
		eastl::ListNode<const Attrib::Collection*> *const pNodeNew;

	}
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoCreateNode(const const Attrib::Collection *const&  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:1404
		eastl::ListNode<const Attrib::Collection*> *const pNode;

	}
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoAllocateNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::Delete(const Attrib::Collection *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	QueueForDelete<Attrib::Collection>(/* parameters */);
	eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::begin(/* parameters */);
	eastl::find<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&>, const Attrib::Collection*>(/* parameters */);
	eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::push_back(/* parameters */);
}

void Attrib::Collection::Release(Attribute::Key  who) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoAllocateNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::operator new(size_t, void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::TypeDesc(const const TypeDesc &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoCreateNode(const const TypeDesc &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1596
		eastl::rbtree_node<Attrib::TypeDesc> *const pNode;

		DoAllocateNode(/* parameters */);
	}
	Attrib::TypeDesc::TypeDesc(/* parameters */);
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoInsertValueImpl(eastl::rbtree_node<Attrib::TypeDesc> *  pNodeParent, const const TypeDesc &  value, bool  bForceToLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1167
		eastl::RBTreeSide side;

		// red_black_tree.h:1168
		use_self<Attrib::TypeDesc> extractKey;

		// red_black_tree.h:1178
		eastl::rbtree_node<Attrib::TypeDesc> *const pNodeNew;

	}
}

void eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool>::pair(const const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &  x, const const bool &  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::DoInsertValue(const const TypeDesc &  value, integral_constant<bool,true>) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:861
		use_self<Attrib::TypeDesc> extractKey;

		// red_black_tree.h:863
		eastl::rbtree_node<Attrib::TypeDesc> * pCurrent;

		// red_black_tree.h:864
		eastl::rbtree_node<Attrib::TypeDesc> * pLowerBound;

		// red_black_tree.h:865
		eastl::rbtree_node<Attrib::TypeDesc> * pParent;

		// red_black_tree.h:867
		bool bValueLessThanNode;

	}
	less<Attrib::TypeDesc>::operator()(/* parameters */);
	{
		// red_black_tree.h:895
		const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> itResult;

		pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool>::pair(/* parameters */);
	}
	pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool>::pair(/* parameters */);
	{
		// red_black_tree.h:903
		const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> itResult;

		pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool>::pair(/* parameters */);
	}
}

void Attrib::TypeDesc::TypeDesc(const char *  name, unsigned int  size, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator==<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&, const Attrib::TypeDesc*, const Attrib::TypeDesc&>(const const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &  a, const const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::insert(const const TypeDesc &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::AddType(const char *  name, unsigned int  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:500
		TypeDesc desc;

		// attribdatabase.cpp:501
		rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> iter;

		TypeDesc::TypeDesc(/* parameters */);
	}
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::end(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::insert(/* parameters */);
}

void eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoAllocate(eastl_size_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::uninitialized_copy_ptr<const Attrib::TypeDesc**, const Attrib::TypeDesc**, const Attrib::TypeDesc**>(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// memory.h:200
		const generic_iterator<const Attrib::TypeDesc**,void> i;

	}
}

void eastl::generic_iterator<const Attrib::TypeDesc**,void>::generic_iterator(const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const&  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::uninitialized_copy_impl<eastl::generic_iterator<const Attrib::TypeDesc**, void>, eastl::generic_iterator<const Attrib::TypeDesc**, void> >(generic_iterator<const Attrib::TypeDesc**,void>  first, generic_iterator<const Attrib::TypeDesc**,void>  last, generic_iterator<const Attrib::TypeDesc**,void>  dest, integral_constant<bool,true>) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::copy<eastl::generic_iterator<const Attrib::TypeDesc**, void>, eastl::generic_iterator<const Attrib::TypeDesc**, void> >(generic_iterator<const Attrib::TypeDesc**,void>  first, generic_iterator<const Attrib::TypeDesc**,void>  last, generic_iterator<const Attrib::TypeDesc**,void>  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:1187
		const bool bInputIsGenericIterator;

		// algorithm.h:1188
		const bool bOutputIsGenericIterator;

	}
}

void eastl::generic_iterator<const Attrib::TypeDesc**,void>::base() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::copy_chooser<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:1109
		const bool bHasTrivialCopy;

	}
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoDestroyValues(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoFree(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  p, eastl_size_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::reserve(eastl_size_t  n) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector.h:604
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const pNewData;

		// vector.h:608
		const ptrdiff_t nPrevSize;

		DoRealloc<const Attrib::TypeDesc**>(/* parameters */);
		uninitialized_copy_ptr<const Attrib::TypeDesc**, const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
		DoDestroyValues(/* parameters */);
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoFree(/* parameters */);
		CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	}
}

void eastl::copy_backward<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:1307
		const bool bInputIsGenericIterator;

		// algorithm.h:1308
		const bool bOutputIsGenericIterator;

	}
}

void eastl::copy_backward_chooser<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:1234
		const bool bHasTrivialCopy;

	}
}

void eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::GetNewCapacity(eastl_size_t  currentCapacity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoInsertValue(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  position, const const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector.h:1234
		const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * pValue;

		copy_backward<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
	}
	{
		// vector.h:1244
		const eastl_size_t nPrevSize;

		// vector.h:1245
		const eastl_size_t nNewSize;

		// vector.h:1246
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const pNewData;

		// vector.h:1263
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * pNewEnd;

		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::GetNewCapacity(/* parameters */);
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoAllocate(/* parameters */);
		uninitialized_copy_ptr<const Attrib::TypeDesc**, const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
		uninitialized_copy_ptr<const Attrib::TypeDesc**, const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
		DoDestroyValues(/* parameters */);
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoFree(/* parameters */);
		CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	}
}

void Attrib::Vault::UserID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::PrepareToDeinitialize(const Attrib::Vault &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:371
		const Database & db;

		// attribdatabase.cpp:372
		Attribute::Key classkey;

	}
	{
		// attribdatabase.cpp:375
		Class * c;

		// attribdatabase.cpp:376
		Attribute::Key collectkey;

	}
	{
		// attribdatabase.cpp:379
		const Attrib::Collection * collect;

	}
	Collection::Release(/* parameters */);
}

void Attrib::Instance::~Instance(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Collection::Release(/* parameters */);
}

void Attrib::EditSpecifier::GetClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::GetAttribKey() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::GetCollection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TweakableAttribute::TweakableAttribute(const Attribute &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TweakableAttribute::GetPointer(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Attribute::GetElementPointer(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~TweakableAttribute() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::InLayout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RetrieveAttribDbDataPointer(const const EditSpecifier &  editSpec, const Attribute::Type &  t, const const Definition *&  d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:309
		const Class * c;

		// attriblivelink.cpp:315
		unsigned char * dataptr;

		// attriblivelink.cpp:316
		const Attrib::Collection * collection;

		EditSpecifier::GetClass(/* parameters */);
		{
			// attriblivelink.cpp:356
			Attrib::Array * array;

			Array::GetData(/* parameters */);
		}
	}
	EditSpecifier::GetCollection(/* parameters */);
	{
		// attriblivelink.cpp:320
		Instance instance;

		// attriblivelink.cpp:323
		Attribute attrib;

		{
			// attriblivelink.cpp:326
			TweakableAttribute tAttrib;

			~TweakableAttribute(/* parameters */);
		}
	}
	Definition::InLayout(/* parameters */);
	Collection::GetLayout(/* parameters */);
	EditSpecifier::GetIndex(/* parameters */);
	Array::IsReferences(/* parameters */);
	Array::Data(/* parameters */);
	TweakableAttribute::TweakableAttribute(/* parameters */);
	TweakableAttribute::GetPointer(/* parameters */);
	EditSpecifier::GetIndex(/* parameters */);
	{
		// attriblivelink.cpp:345
		const ClassStaticDesc * sDesc;

	}
}

void Attrib::ReleaseCollection(const Attrib::Collection *  c, Attribute::Key  who) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Collection::Release(/* parameters */);
	{
	}
}

void Attrib::Class::TablePolicy::Free(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TableFreeFunc(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::Free(void *  lpMemory, int32_t  liSize, const char *  lpacBufferName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Class::TablePolicy::TableSize(unsigned int  entries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Class::TablePolicy::Alloc(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TableAllocFunc(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysPackageAllocator::Malloc(int32_t  liSize, const char *  lpacBufferName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysPackageAllocator.h:274
		void * lpMemory;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::CopyFromOldTable(VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node *  oldTable, unsigned int  oldSize, bool  needFree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:461
		unsigned int i;

	}
	{
		// vechashmap.h:467
		unsigned int i;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Node() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::InternalAdd(Attribute::Key  key, Attrib::Collection *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:381
		unsigned int targetIndex;

		// vechashmap.h:382
		unsigned int actualIndex;

		// vechashmap.h:384
		unsigned int searchLen;

		// vechashmap.h:385
		unsigned int tableSize;

	}
}

void Attrib::Class::TablePolicy::GrowRequest(unsigned int  currententries, bool  collisionoverrun) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Node(Attribute::Key  key, Attrib::Collection *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::SetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::RebuildTable(unsigned int  requestedCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Class::TablePolicy::Free(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	{
		// vechashmap.h:494
		unsigned int tableSize;

		// vechashmap.h:497
		VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node * oldTable;

		// vechashmap.h:498
		unsigned int oldSize;

		Attrib::Class::TablePolicy::Alloc(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
		CopyFromOldTable(/* parameters */);
		Node::Node(/* parameters */);
		{
			Node::Get(/* parameters */);
			InternalAdd(/* parameters */);
			Node::Key(/* parameters */);
			Attrib::Class::TablePolicy::KeyIndex(/* parameters */);
			Node::Key(/* parameters */);
			Attrib::Class::TablePolicy::WrapIndex(/* parameters */);
			Node::Node(/* parameters */);
			Node::SetSearchLength(/* parameters */);
		}
		Attrib::Class::TablePolicy::Free(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	Attrib::Class::TablePolicy::GrowRequest(/* parameters */);
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Reserve(unsigned int  reservationSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::SetTableBuffer(void *  fixedAlloc, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:310
		unsigned int capacity;

		// vechashmap.h:312
		VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node * oldTable;

		// vechashmap.h:313
		unsigned int oldSize;

		// vechashmap.h:314
		bool needFree;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Add(Attribute::Key  key, Attrib::Collection *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:201
		bool result;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::CopyFromOldTable(VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node *  oldTable, unsigned int  oldSize, bool  needFree) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:461
		unsigned int i;

	}
	{
		// vechashmap.h:467
		unsigned int i;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Node() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::InternalAdd(Attribute::Key  key, Class *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:381
		unsigned int targetIndex;

		// vechashmap.h:382
		unsigned int actualIndex;

		// vechashmap.h:384
		unsigned int searchLen;

		// vechashmap.h:385
		unsigned int tableSize;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Node(Attribute::Key  key, Class *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::SetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::RebuildTable(unsigned int  requestedCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Class::TablePolicy::Free(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	{
		// vechashmap.h:494
		unsigned int tableSize;

		// vechashmap.h:497
		VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node * oldTable;

		// vechashmap.h:498
		unsigned int oldSize;

		Attrib::Class::TablePolicy::Alloc(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
		CopyFromOldTable(/* parameters */);
		Node::Node(/* parameters */);
		{
			Node::Get(/* parameters */);
			InternalAdd(/* parameters */);
			Node::Key(/* parameters */);
			Attrib::Class::TablePolicy::KeyIndex(/* parameters */);
			Node::Key(/* parameters */);
			Attrib::Class::TablePolicy::WrapIndex(/* parameters */);
			Node::Node(/* parameters */);
			Node::SetSearchLength(/* parameters */);
		}
		Attrib::Class::TablePolicy::Free(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	Attrib::Class::TablePolicy::GrowRequest(/* parameters */);
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Add(Attribute::Key  key, Class *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:201
		bool result;

	}
}

void Attrib::Database::AddClass(Class *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Class::GetKey(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Add(/* parameters */);
	Class::TablePolicy::GrowRequest(/* parameters */);
}

void std::atoi(const char *  _Str) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ResolveSymbolicNameToPointer(const char *  symName, unsigned int  len) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::ProcessReplace(const char *  msgBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:939
		Attribute::Type t;

		// attriblivelink.cpp:940
		const Definition * d;

		// attriblivelink.cpp:941
		unsigned char * destptr;

		// attriblivelink.cpp:945
		const const TypeDesc & typeDesc;

		// attriblivelink.cpp:946
		unsigned int typeSize;

		// attriblivelink.cpp:947
		char[16] tempBuffer;

		// attriblivelink.cpp:947
		char * tempPtr;

		// attriblivelink.cpp:965
		const char * fixupPtr;

		// attriblivelink.cpp:966
		unsigned int extraSize;

	}
	TypeDesc::GetSize(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	{
		// attriblivelink.cpp:1016
		unsigned int ptrOffset;

		// attriblivelink.cpp:1019
		void ** resolvedPointer;

		std(/* parameters */);
	}
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	{
		// attriblivelink.cpp:1027
		unsigned int dstOffset;

		std(/* parameters */);
	}
	{
		// attriblivelink.cpp:1034
		const char * symName;

	}
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::EditRecord::Process(const char *  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:671
		Attrib::EDecodeResult result;

		// attriblivelink.cpp:672
		Attrib::EditOpCodeLabel opCodeLabel;

	}
}

void Attrib::EditRecord::RevertReplace() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:1083
		Attribute::Type t;

		// attriblivelink.cpp:1084
		const Definition * d;

		// attriblivelink.cpp:1085
		unsigned char * destptr;

	}
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
}

void Attrib::EditRecord::Revert(unsigned char  opInfoFilter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::begin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::EqualUnderFieldMask(const const EditSpecifier &  rhs, unsigned int  fieldmask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::end() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>(const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  a, const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RevertPartiallySpecifiedEdit(const const EditSpecifier &  editSpec, unsigned int  fieldmask) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:485
		unsigned char opInfoFilter;

		{
			// attriblivelink.cpp:487
			rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> editIter;

			eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::begin(/* parameters */);
			EditSpecifier::EqualUnderFieldMask(/* parameters */);
			eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::end(/* parameters */);
		}
	}
}

void Attrib::EditSpecifier::EditSpecifier(Attribute::Key  classKey, Attribute::Key  collectionKey, Attribute::Key  attribKey, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RevertEdit(Attribute::Key  classKey, Attribute::Key  collectionKey, Attribute::Key  attribKey, unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EditSpecifier::EditSpecifier(/* parameters */);
}

void Attrib::RevertAttributeEdits(Attribute::Key  classKey, Attribute::Key  collectionKey, Attribute::Key  attribKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EditSpecifier::EditSpecifier(/* parameters */);
}

void Attrib::RevertCollectionEdits(Attribute::Key  classKey, Attribute::Key  collectionKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EditSpecifier::EditSpecifier(/* parameters */);
}

void Attrib::RevertClassEdits(Attribute::Key  classKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EditSpecifier::EditSpecifier(/* parameters */);
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoFreeNode(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~pair() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::~EditRecord() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoNukeSubtree(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1686
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *const pNodeLeft;

		DoFreeNode(/* parameters */);
	}
	~rbtree_node(/* parameters */);
	Attrib::EditRecord::~EditRecord(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetEaStlAllocator(/* parameters */);
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::RevertAllEdits() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EditSpecifier::EditSpecifier(/* parameters */);
	eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::clear(/* parameters */);
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoAllocateNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void pair(const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditSpecifier::EditSpecifier(const const EditSpecifier &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::EditRecord(const const EditRecord &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoCreateNode(const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1596
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *const pNode;

		DoAllocateNode(/* parameters */);
	}
	pair(/* parameters */);
	Attrib::EditSpecifier::EditSpecifier(/* parameters */);
	Attrib::EditRecord::EditRecord(/* parameters */);
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoInsertValueImpl(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *  pNodeParent, const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &  value, bool  bForceToLeft) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:1167
		eastl::RBTreeSide side;

		// red_black_tree.h:1168
		use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > extractKey;

		// red_black_tree.h:1178
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *const pNodeNew;

	}
	use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(/* parameters */);
	less<Attrib::EditSpecifier>::operator()(/* parameters */);
}

void eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool>::pair(const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  x, const const bool &  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::DoInsertValue(const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &  value, integral_constant<bool,true>) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// red_black_tree.h:861
		use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > extractKey;

		// red_black_tree.h:863
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * pCurrent;

		// red_black_tree.h:864
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * pLowerBound;

		// red_black_tree.h:865
		eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * pParent;

		// red_black_tree.h:867
		bool bValueLessThanNode;

	}
	less<Attrib::EditSpecifier>::operator()(/* parameters */);
	use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(/* parameters */);
	use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >::operator()(/* parameters */);
	less<Attrib::EditSpecifier>::operator()(/* parameters */);
	{
		// red_black_tree.h:895
		const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> itResult;

		pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool>::pair(/* parameters */);
	}
	pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool>::pair(/* parameters */);
	{
		// red_black_tree.h:903
		const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> itResult;

		pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool>::pair(/* parameters */);
	}
}

void Attrib::EditSpecifier::Decode(const char *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:82
		const char * classname;

		// attriblivelink.cpp:83
		const char * colname;

		// attriblivelink.cpp:87
		const char * attribname;

		// attriblivelink.cpp:91
		const char * indexstr;

		// attriblivelink.cpp:95
		const char * value;

		// attriblivelink.cpp:99
		char[16] indexTemp;

		// attriblivelink.cpp:100
		unsigned int indexLen;

	}
}

void Attrib::EditTable::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void EditTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::map<Attrib::EditSpecifier,Attrib::EditRecord,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator>::map(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::rbtree(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rb_base<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,eastl::rbtree<Attrib::EditSpecifier, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::less<Attrib::EditSpecifier>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >, true, true> >::rb_base() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::~rbtree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~map() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator==<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>(const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  a, const const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::EditRecord() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord>::pair(const const EditSpecifier &  x, const const EditRecord &  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::insert(const const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::SetEditSpecifier(const const EditSpecifier &  editSpec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::IsLoopEdit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::EditRecord::GetEditSpecifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DecodeLiveLinkMessage(const char *  data) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attriblivelink.cpp:447
		EditSpecifier editSpec;

		// attriblivelink.cpp:448
		const char * value;

		// attriblivelink.cpp:456
		rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> editIter;

		// attriblivelink.cpp:466
		const EditRecord & editRecord;

		// attriblivelink.cpp:467
		Attrib::EDecodeResult result;

		EditSpecifier::Decode(/* parameters */);
	}
	EditSpecifier::EditSpecifier(/* parameters */);
	std(/* parameters */);
	eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::end(/* parameters */);
	eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord>::pair(/* parameters */);
	EditRecord::EditRecord(/* parameters */);
	eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::insert(/* parameters */);
	EditRecord::EditRecord(/* parameters */);
	~pair(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	EditRecord::~EditRecord(/* parameters */);
	eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true>::end(/* parameters */);
	EditRecord::SetEditSpecifier(/* parameters */);
	EditRecord::GetEditSpecifier(/* parameters */);
	EditRecord::GetEditSpecifier(/* parameters */);
	EditSpecifier::GetCollection(/* parameters */);
	EditTable::operator new(/* parameters */);
	EditTable(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Remove(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:234
		unsigned int actualIndex;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::RemoveIndex(unsigned int  actualIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:216
		Attrib::Collection * result;

		// vechashmap.h:217
		Attribute::Key key;

		// vechashmap.h:224
		unsigned int freedIndex;

	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::UpdateSearchLength(unsigned int  targetIndex, unsigned int  freeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:420
		unsigned int maxSearch;

		// vechashmap.h:424
		unsigned int worstIndex;

		// vechashmap.h:434
		unsigned int newMaxSearch;

		{
			// vechashmap.h:411
			unsigned int distance;

		}
		{
			// vechashmap.h:435
			unsigned int searchLen;

			{
				// vechashmap.h:437
				unsigned int index;

			}
		}
		{
			// vechashmap.h:449
			unsigned int prevWorst;

			{
				// vechashmap.h:451
				unsigned int i;

			}
		}
	}
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::Move(const Node &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Node::ResetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Remove(Attribute::Key  key) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:234
		unsigned int actualIndex;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::RemoveIndex(unsigned int  actualIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:216
		Class * result;

		// vechashmap.h:217
		Attribute::Key key;

		// vechashmap.h:224
		unsigned int freedIndex;

	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::UpdateSearchLength(unsigned int  targetIndex, unsigned int  freeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:420
		unsigned int maxSearch;

		// vechashmap.h:424
		unsigned int worstIndex;

		// vechashmap.h:434
		unsigned int newMaxSearch;

		{
			// vechashmap.h:411
			unsigned int distance;

		}
		{
			// vechashmap.h:435
			unsigned int searchLen;

			{
				// vechashmap.h:437
				unsigned int index;

			}
		}
		{
			// vechashmap.h:449
			unsigned int prevWorst;

			{
				// vechashmap.h:451
				unsigned int i;

			}
		}
	}
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Move(const Node &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::ResetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::RemoveClass(const Class *  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Class::GetKey(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Remove(/* parameters */);
	Class::TablePolicy::KeyIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::MaxSearch(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::IsValid(/* parameters */);
	Class::TablePolicy::WrapIndex(/* parameters */);
	VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Node::Key(/* parameters */);
	Class::TablePolicy::WrapIndex(/* parameters */);
	{
		{
		}
	}
	Class::TablePolicy::WrapIndex(/* parameters */);
	Class::TablePolicy::WrapIndex(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::GetResourceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::operator<<(const CgsDev::StrStreamBase &  lLhs, ID  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceID.h:265
		char[32] lacBuffer;

		// CgsResourceID.h:267
		uint8_t * lpuInt;

	}
}

void CgsAttribSys::VaultSlot::GetRefCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::ContainsStreamedVault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::GetStreamedVaultIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::operator<<(const CgsDev::StrStreamBase &  lLhs, const const VaultArray &  lVaultArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.cpp:248
		int32_t liSlot;

	}
	{
		// CgsAttribSysVaultArray.cpp:251
		VaultSlot * lpSlot;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VaultSlot::ContainsStreamedVault(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		VaultSlot::GetStreamedVaultIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsContainers::BitArray<24u>::GetFirstZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:590
		uint32_t liIndex;

		{
			// CgsBitArray.h:600
			int32_t liFirstZeroBit;

			{
				// CgsBitArray.h:601
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:606
			int32_t liFirstZeroBit;

		}
	}
}

void CgsContainers::BitArray<24u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsContainers::BitArray<24u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::BitArray<24u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Alloc(size_t  bytes, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Definition::GetMaxCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::CreateInPlace(void *  ptr, Attribute::Type  t, unsigned int  count, unsigned int  allocSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:148
		const const TypeDesc & desc;

		// attribhashmap.h:149
		uint16_t typeIndex;

		// attribhashmap.h:150
		unsigned int typesize;

		// attribhashmap.h:151
		bool align16;

	}
}

void Attrib::TypeDesc::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::Array(unsigned int  typesize, unsigned int  count, unsigned int  allocSize, unsigned int  typeIndex, bool  align16) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:188
		unsigned int i;

	}
}

void Attrib::ExportManager::ExportManager(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Alloc(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::ExportManager::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::GetExportPolicies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ExportManager::operator new(/* parameters */);
	DatabaseExportPolicy::operator new(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	ClassExportPolicy::operator new(/* parameters */);
	DatabaseExportPolicy::DatabaseExportPolicy(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	CollectionExportPolicy::operator new(/* parameters */);
	ClassExportPolicy::ClassExportPolicy(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	CollectionExportPolicy::CollectionExportPolicy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
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

void Attrib::Vault::ChunkBlock::Next() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::operator new(size_t, void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::DataBlock::DataBlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::Vault(None, None, None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	Attrib::Vault::ChunkBlock::Next(/* parameters */);
	Attrib::Vault::ExportNode::GetExports(/* parameters */);
	{
	}
	Attrib::Alloc(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Malloc(/* parameters */);
	{
	}
	Attrib::Vault::DataBlock::DataBlock(/* parameters */);
	Attrib::Alloc(/* parameters */);
	{
	}
	Attrib::Vault::DataBlock::Set(/* parameters */);
	{
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

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::GetVaultResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::ResourcePtr(const const ResourceHandle &  lHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::operator->() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.h:543
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Vault::operator new(size_t, void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::GetVaultType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::IncreaseRefCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::IsSchemaLoaded() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::VaultRegisteredResponse::Construct(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterVaultRequest::GetReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventReceiverQueue::AddEvent(const CgsModule::Event *  lpEvent, int32_t  liEventId, int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:434
		int32_t liTotalEventSize;

		// CgsEventReceiverQueue.h:435
		int32_t liPaddingBytes;

		// CgsEventReceiverQueue.h:441
		CgsModule::BaseEventReceiverQueue::CBufferEntry * lpBufferEntry;

		{
			// CgsEventReceiverQueue.h:438
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::BaseEventReceiverQueue::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsEventReceiverQueue.h:590
		int32_t liRem;

		// CgsEventReceiverQueue.h:591
		int32_t liPaddingBytes;

	}
}

void CgsAttribSys::AttribSysModule::RegisterVault(RegisterVaultRequest *  lpRegisterVaultRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.cpp:369
		VaultRegisteredResponse lResponse;

		AddEvent<CgsAttribSys::AttribSysIO::VaultRegisteredResponse>(/* parameters */);
	}
	AttribSysIO::RegisterVaultRequest::GetReceiverQueue(/* parameters */);
	AttribSysIO::VaultRegisteredResponse::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::GetSchemaVltDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::GetSchemaBinDataSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::GetSchemaVltData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::GetSchemaBinData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::SchemaRegisteredResponse::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::RegisterSchemaRequest::GetReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::RegisterSchema(RegisterSchemaRequest *  lpRegisterSchemaRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.cpp:400
		int32_t liVltSize;

		// CgsAttribSysModule.cpp:401
		int32_t liBinSize;

		// CgsAttribSysModule.cpp:402
		void * lpVltData;

		// CgsAttribSysModule.cpp:403
		void * lpBinData;

		// CgsAttribSysModule.cpp:405
		VaultSlot::AttribSysVault * lpNewVault;

	}
	AttribSysIO::RegisterSchemaRequest::GetSchemaBinDataSize(/* parameters */);
	AttribSysIO::RegisterSchemaRequest::GetSchemaVltDataSize(/* parameters */);
	AttribSysIO::RegisterSchemaRequest::GetSchemaVltData(/* parameters */);
	AttribSysIO::RegisterSchemaRequest::GetSchemaBinData(/* parameters */);
	{
		// CgsAttribSysModule.cpp:435
		SchemaRegisteredResponse lResponse;

		AddEvent<CgsAttribSys::AttribSysIO::SchemaRegisteredResponse>(/* parameters */);
	}
	AttribSysIO::RegisterSchemaRequest::GetReceiverQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<2048,16>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:213
		int32_t liEffectiveFirstAddress;

		// CgsVariableEventQueue.h:214
		int32_t liAlignRem;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMapTablePolicy::GrowRequest(unsigned int  currententries, bool  collisionoverflow) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::RebuildTable(unsigned int  requestedCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:535
		unsigned int tableSize;

		// attribhashmap.h:539
		Attrib::Node * oldTable;

		// attribhashmap.h:540
		unsigned int oldSize;

		{
			// attribhashmap.h:549
			unsigned int i;

		}
		{
			// attribhashmap.h:554
			unsigned int i;

		}
	}
}

void Attrib::HashMapTablePolicy::TableSize(unsigned int  entries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMapTablePolicy::Alloc(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::operator new(size_t, void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::Node() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::ResetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Transfer(const Node &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:632
		unsigned int searchLen;

		// attribhashmap.h:633
		unsigned int targetIndex;

		// attribhashmap.h:634
		unsigned int actualIndex;

	}
}

void Attrib::HashMap::PreFlightAdd(Attribute::Key  key, unsigned int  targetIndex, const unsigned int &  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:700
		unsigned int actualIndex;

	}
}

void Attrib::Node::Move(const Node &  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::PostFlightAdd(unsigned int  targetIndex, unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::SetSearchLength(unsigned int  searchLen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMapTablePolicy::Free(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Free(void *  ptr, size_t  bytes, const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Node::Node(Attribute::Key  key, Attribute::Type  type, void *  ptr, bool  ptrIsRaw, uint8_t  flags, void *  layoutptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Add(Attribute::Key  key, Attribute::Type  type, void *  ptr, bool  ptrIsRaw, uint8_t  flags, bool  exactFit, void *  layoutptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:430
		unsigned int searchLen;

		// attribhashmap.h:431
		unsigned int targetIndex;

		// attribhashmap.h:432
		unsigned int actualIndex;

		HashMapTablePolicy::KeyIndex(/* parameters */);
		PreFlightAdd(/* parameters */);
		Node::GetKey(/* parameters */);
		HashMapTablePolicy::WrapIndex(/* parameters */);
		Node::Node(/* parameters */);
		PostFlightAdd(/* parameters */);
		HashMapTablePolicy::GrowRequest(/* parameters */);
		RebuildTable(/* parameters */);
		HashMapTablePolicy::Free(/* parameters */);
	}
	HashMapTablePolicy::GrowRequest(/* parameters */);
	RebuildTable(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	HashMapTablePolicy::Free(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::HashMap::HashMap(unsigned int  reservationSize, unsigned int  keyShift, bool  exactFit) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::~HashMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::Collection(None, None, None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::HashMap::HashMap(/* parameters */);
	Attrib::HashMapTablePolicy::GrowRequest(/* parameters */);
	Attrib::HashMap::RebuildTable(/* parameters */);
	{
		Attrib::Collection::AddRef(/* parameters */);
	}
	Attrib::Collection::AddRef(/* parameters */);
	Attrib::HashMap::Transfer(/* parameters */);
	Attrib::Node::ResetSearchLength(/* parameters */);
	Attrib::Node::GetKey(/* parameters */);
	Attrib::HashMapTablePolicy::KeyIndex(/* parameters */);
	Attrib::Node::GetKey(/* parameters */);
	Attrib::Node::Node(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::Collection::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionLoadData::GetTypes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionLoadData::GetEntries() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::CountSearchCacheLines(Attribute::Key  key, unsigned int  lineSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:591
		unsigned int result;

		// attribhashmap.h:595
		uintptr_t prevline;

		// attribhashmap.h:595
		uintptr_t currline;

		// attribhashmap.h:597
		Attrib::Node * table;

		// attribhashmap.h:598
		unsigned int actualIndex;

		// attribhashmap.h:599
		unsigned int searchLen;

		// attribhashmap.h:599
		unsigned int maxSearchlen;

	}
}

void Attrib::Array::SetTypeIndex(uint16_t  typeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::Collection(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::HashMap::HashMap(/* parameters */);
	{
		Attrib::Collection::AddRef(/* parameters */);
	}
	Attrib::CollectionLoadData::GetTypes(/* parameters */);
	Attrib::CollectionLoadData::GetEntries(/* parameters */);
	{
	}
	{
		Attrib::HashMap::CountSearchCacheLines(/* parameters */);
		Attrib::HashMapTablePolicy::KeyIndex(/* parameters */);
		Attrib::Node::MaxSearch(/* parameters */);
		Attrib::HashMapTablePolicy::WrapIndex(/* parameters */);
		Attrib::Node::GetKey(/* parameters */);
	}
	{
		Attrib::TypeDesc::GetSize(/* parameters */);
	}
	{
	}
	Attrib::Node::GetArray(/* parameters */);
	Attrib::Collection::AddRef(/* parameters */);
	Attrib::HashMap::RebuildTable(/* parameters */);
	Attrib::Node::GetTypeDesc(/* parameters */);
	Attrib::Array::SetTypeIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::CollectionExportPolicy::Initialize(const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id, void *  data, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:308
		const CollectionLoadData * loadData;

		// attribdatabase.cpp:311
		Class * container;

	}
	Collection::operator new(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::Database::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::~Database() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::~Database(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::~DatabaseExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::~ClassExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::~CollectionExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::erase(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector.h:859
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const position;

	}
}

void eastl::copy<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  result) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// algorithm.h:1187
		const bool bInputIsGenericIterator;

		// algorithm.h:1188
		const bool bOutputIsGenericIterator;

	}
}

extern void ~ClassList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~list() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::~ListBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoClear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:662
		eastl::ListNode<const Attrib::Class*> * p;

		{
			// list.h:666
			eastl::ListNode<const Attrib::Class*> *const pTemp;

		}
	}
}

extern void ~ListNode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~CollectionList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::~ListBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoClear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// list.h:662
		eastl::ListNode<const Attrib::Collection*> * p;

		{
			// list.h:666
			eastl::ListNode<const Attrib::Collection*> *const pTemp;

		}
	}
}

extern void ~TypeTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~set() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::~rbtree() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~TypeDescPtrVec() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::~vector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::~VectorBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ClassTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::~VecHashMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:177
		unsigned int i;

	}
}

void Attrib::Class::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabasePrivate::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabasePrivate::~DatabasePrivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabasePrivate::~DatabasePrivate(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::clear(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::clear(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::erase(/* parameters */);
	eastl::copy<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoDestroyValues(/* parameters */);
	~ClassList(/* parameters */);
	eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::~ListBase(/* parameters */);
	~CollectionList(/* parameters */);
	~TypeTable(/* parameters */);
	~TypeDescPtrVec(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::~rbtree(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::~vector(/* parameters */);
	~ClassTable(/* parameters */);
}

void Attrib::Array::Create(Attribute::Type  t, unsigned int  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:157
		const const TypeDesc & desc;

		// attribhashmap.h:158
		uint16_t typeIndex;

		// attribhashmap.h:159
		unsigned int typesize;

		// attribhashmap.h:160
		bool align16;

		// attribhashmap.h:161
		unsigned int actualtypesize;

		// attribhashmap.h:162
		unsigned int allocBytes;

		// attribhashmap.h:163
		unsigned int allocSize;

	}
}

void Attrib::Array::AllocSizeFromCount(unsigned int  count, unsigned int  typesize, bool  align16, const unsigned int &  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:140
		unsigned int overhead;

		// attribhashmap.h:141
		unsigned int allocSize;

	}
}

void Attrib::Array::Destroy(Attrib::Array *  array) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:175
		unsigned int allocSize;

	}
}

void Attrib::Array::GetAlloc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::GetElementSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Array::~Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:213
		Attrib::ITypeHandler * typeHandler;

		// attribhashmap.h:215
		void ** ptrs;

		{
			// attribhashmap.h:216
			unsigned int i;

		}
	}
}

void Attrib::Definition::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::KeyShift() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::GetNodeAtIndex(unsigned int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::Collection(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::HashMap::HashMap(/* parameters */);
	{
		Attrib::Collection::AddRef(/* parameters */);
	}
	Attrib::HashMap::KeyShift(/* parameters */);
	Attrib::Collection::AddRef(/* parameters */);
	Attrib::HashMap::GetNextValidIndex(/* parameters */);
	Attrib::HashMap::ValidIndex(/* parameters */);
	Attrib::Node::IsValid(/* parameters */);
	{
		Attrib::Node::GetKey(/* parameters */);
		Attrib::Node::GetCount(/* parameters */);
		Attrib::Node::GetArray(/* parameters */);
		Attrib::Array::GetCount(/* parameters */);
		Attrib::Node::GetKey(/* parameters */);
		Attrib::HashMap::GetNextValidIndex(/* parameters */);
	}
}

void Attrib::Node::RequiresRelease() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Remove(Attrib::Node *  node, void *  layoutptr, const Attrib::Collection *  c, bool  maintainTableInvariant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:451
		Attribute::Key key;

		// attribhashmap.h:452
		void * result;

		{
			// attribhashmap.h:461
			unsigned int actualIndex;

			// attribhashmap.h:462
			unsigned int freedIndex;

		}
	}
}

void Attrib::Node::Invalidate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::UpdateSearchLength(unsigned int  targetIndex, unsigned int  freeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribhashmap.h:658
		unsigned int maxSearch;

		// attribhashmap.h:662
		unsigned int worstIndex;

		// attribhashmap.h:672
		unsigned int newMaxSearch;

		{
			// attribhashmap.h:649
			unsigned int distance;

		}
		{
			// attribhashmap.h:673
			unsigned int searchLen;

			{
				// attribhashmap.h:675
				unsigned int index;

			}
		}
		{
			// attribhashmap.h:687
			unsigned int prevWorst;

			{
				// attribhashmap.h:689
				unsigned int i;

			}
		}
	}
}

void Attrib::Collection::Capacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::Capacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::CollectionExportPolicy::~CollectionExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::CollectionExportPolicy::operator delete(/* parameters */);
}

void Attrib::ClassExportPolicy::~ClassExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::ClassExportPolicy::operator delete(/* parameters */);
}

void Attrib::DatabaseExportPolicy::~DatabaseExportPolicy(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::DatabaseExportPolicy::operator delete(/* parameters */);
}

void Attrib::ClassTable::ClassTable(unsigned int  capacity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::VecHashMap(unsigned int  reservationSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TypeDescPtrVec() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::vector(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::VectorBase(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TypeTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::set<Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator>::set(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::rbtree(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::rb_base<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,eastl::use_self<Attrib::TypeDesc>,true,eastl::rbtree<Attrib::TypeDesc, Attrib::TypeDesc, eastl::less<Attrib::TypeDesc>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_self<Attrib::TypeDesc>, false, true> >::rb_base() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void CollectionList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::list(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::ListBase(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ClassList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::list(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::ListBase(const const AttribSysPackageAllocator &  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoInit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Reserve(unsigned int  reservationSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::TypeDesc::TypeDesc() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::push_back(const const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseLoadData::GetTypeSizes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabasePrivate::DatabasePrivate(const const DatabaseLoadData &  loadData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:56
		const char * name;

		// attribdatabase.cpp:57
		const uint32_t * sizes;

		{
			// attribdatabase.cpp:58
			unsigned int i;

			{
				// attribdatabase.cpp:60
				rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> iter;

			}
		}
	}
}

void Attrib::DatabasePrivate::DatabasePrivate(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::ClassTable::ClassTable(/* parameters */);
	TypeDescPtrVec(/* parameters */);
	TypeTable(/* parameters */);
	CollectionList(/* parameters */);
	eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::VectorBase(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::rbtree(/* parameters */);
	ClassList(/* parameters */);
	eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::ListBase(/* parameters */);
	eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::ListBase(/* parameters */);
	eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoInit(/* parameters */);
	{
		VecHashMap<Attrib::Key,Attrib::Class,Attrib::Class::TablePolicy,false,16u>::Reserve(/* parameters */);
	}
	eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoInit(/* parameters */);
	Attrib::TypeDesc::TypeDesc(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::insert(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::push_back(/* parameters */);
	{
	}
	Attrib::DatabaseLoadData::GetTypeSizes(/* parameters */);
	{
		eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::push_back(/* parameters */);
	}
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::size(/* parameters */);
	Attrib::TypeDesc::TypeDesc(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::insert(/* parameters */);
}

void Attrib::DatabasePrivate::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::DatabaseExportPolicy::Initialize(const Attrib::Vault &  v, const const TypeID &  type, const const ExportID &  id, void *  data, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:129
		const DatabaseLoadData * loadData;

	}
	DatabasePrivate::operator new(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::DatabasePrivate::~DatabasePrivate(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::clear(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::clear(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::erase(/* parameters */);
	eastl::copy<const Attrib::TypeDesc**, const Attrib::TypeDesc**>(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::DoDestroyValues(/* parameters */);
	~ClassList(/* parameters */);
	eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::~ListBase(/* parameters */);
	~CollectionList(/* parameters */);
	~TypeTable(/* parameters */);
	~TypeDescPtrVec(/* parameters */);
	eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true>::~rbtree(/* parameters */);
	eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::~vector(/* parameters */);
	~ClassTable(/* parameters */);
	Attrib::DatabasePrivate::operator delete(/* parameters */);
}

void Attrib::Database::~Database(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Database::operator delete(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
}

void Attrib::ExportManager::~ExportManager(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Free(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
}

void Attrib::ExportManager::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::ReleaseExportPolicies() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ExportManager::operator delete(/* parameters */);
}

void Attrib::Vault::~Vault(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Free(/* parameters */);
	Attrib::Free(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
	CgsAttribSys::AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
	CgsAttribSys::AttribSysPackageAllocator::Free(/* parameters */);
}

void Attrib::Vault::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Collection::~Collection(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Attrib::Collection::Release(/* parameters */);
	Attrib::HashMap::~HashMap(/* parameters */);
	{
	}
}

void Attrib::Collection::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassPrivate::operator new(size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassPrivate::ClassPrivate(const const ClassLoadData &  loadData, Vault *  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribprivate.h:313
		unsigned int d;

		{
			// attribprivate.h:315
			const Definition & def;

			{
				// attribprivate.h:319
				uint8_t flags;

			}
		}
	}
}

void Attrib::ClassPrivate::CollectionHashMap::CollectionHashMap(unsigned int  reserve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::VecHashMap(unsigned int  reservationSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::~VecHashMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void VecHashMap<Attrib::Key,Attrib::Collection,Attrib::Class::TablePolicy,true,96u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vechashmap.h:177
		unsigned int i;

	}
}

extern void ~CollectionHashMap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassExportPolicy::Initialize(const Attrib::Vault &  v, const const TypeID &, const const ExportID &  id, void *  data, unsigned int  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// attribdatabase.cpp:193
		const ClassLoadData * loadData;

	}
	ClassPrivate::operator new(/* parameters */);
	ClassPrivate::ClassPrivate(/* parameters */);
	ClassPrivate::CollectionHashMap::CollectionHashMap(/* parameters */);
	HashMap::AddRef(/* parameters */);
	{
		{
			{
			}
		}
	}
	{
		// attribdatabase.cpp:200
		const ClassStaticDesc * sDesc;

		{
			// attribdatabase.cpp:203
			uint32_t size;

		}
	}
	HashMap::RebuildTable(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsAttribSys::AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
}

void Attrib::ClassPrivate::~ClassPrivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::HashMap::ClearForRelease() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::ClassPrivate::operator delete(void *  ptr, size_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::pop_front() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoErase(ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListNodeBase::remove() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::DoFreeNode(eastl::ListNode<const Attrib::Collection*> *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::pop_front() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoErase(ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::DoFreeNode(eastl::ListNode<const Attrib::Class*> *  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>::ListIterator(const ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::distance<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> >(ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>  first, ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::distance_impl<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> >(ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>  first, ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>  last, input_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// iterator.h:468
		ptrdiff_t n;

	}
}

void eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&>(const const ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> &  a, const const ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::size() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>::ListIterator(const ListNodeBase *  pNode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::distance<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> >(ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>  first, ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void eastl::distance_impl<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> >(ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>  first, ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>  last, input_iterator_tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// iterator.h:468
		ptrdiff_t n;

	}
}

void eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>::operator++() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void eastl::operator!=<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&>(const const ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> &  a, const const ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void Attrib::Database::CollectGarbage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator>::size(/* parameters */);
	eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator>::size(/* parameters */);
	CollectGarbageBag<Attrib::Collection>(/* parameters */);
	CollectGarbageBag<Attrib::Class>(/* parameters */);
}

void CgsContainers::BitArray<24u>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::VaultSlot::DecreaseRefCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultSlot.h:208
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::UnregisterVaultRequest::GetVaultResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::UnregisterVaultRequest::GetEventId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::VaultUnregisteredResponse::Construct(int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::UnregisterVaultRequest::GetReceiverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::UnregisterVault(UnregisterVaultRequest *  lpUnregisterVaultRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.cpp:470
		VaultUnregisteredResponse lResponse;

		AddEvent<CgsAttribSys::AttribSysIO::VaultUnregisteredResponse>(/* parameters */);
	}
	AttribSysIO::UnregisterVaultRequest::GetReceiverQueue(/* parameters */);
	AttribSysIO::VaultUnregisteredResponse::Construct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysIO::InputBuffer::GetVaultRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModuleIO.h:85
		CgsDev::StrStream lStrStream;

	}
}

void CgsAttribSys::AttribSysIO::AttribSysRequestInterface<2048>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::ProcessInputs(const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysModule.cpp:303
		int32_t liEventId;

		// CgsAttribSysModule.cpp:304
		int32_t liEventSize;

		// CgsAttribSysModule.cpp:305
		const CgsModule::Event * lpEvent;

	}
	CgsModule::IOBuffer::LockForRead(/* parameters */);
	AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(/* parameters */);
	AttribSysIO::InputBuffer::GetVaultRequestInterface(/* parameters */);
	CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void Attrib::DatabaseExportPolicy::Deinitialize(const Attrib::Vault &  v, const const TypeID &  type, const const ExportID &  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsAttribSys::AttribSysModule::Update(const InputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsFileSystem::KU_INVALID_FILE_ID = -1;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::gDefaultExportID;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;

