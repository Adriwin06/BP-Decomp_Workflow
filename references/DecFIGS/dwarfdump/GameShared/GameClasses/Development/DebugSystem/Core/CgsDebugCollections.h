// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugCollections.h:30
	namespace Internal {
		struct DebugStreamInputEntry;

		struct DebugStreamInput;

		struct DebugInternal;

		struct DebugLinkedList<CgsDev::DebugComponent>;

		struct DebugStaticArray<CgsDev::DebugUI::Menu>;

		struct DebugStaticPool<CgsDev::DebugUI::Menu>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticArray<CgsDev::DebugUI::Variable>;

		struct DebugStaticPool<CgsDev::DebugUI::Variable>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticArray<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticPool<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticArray<CgsDev::DebugUI::Function>;

		struct DebugStaticPool<CgsDev::DebugUI::Function>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugLinkedList<CgsDev::DebugUI::Window>;

	}

}

// CgsDebugCollections.h:116
struct CgsDev::Internal::DebugLinkedList<CgsDev::DebugComponent> {
private:
	// CgsDebugCollections.h:134
	CgsDev::DebugComponent * mpList;

public:
	// CgsDebugCollections.h:328
	void Clear();

	// CgsDebugCollections.h:335
	void Add(CgsDev::DebugComponent *);

	// CgsDebugCollections.h:369
	void AddAfter(CgsDev::DebugComponent *, CgsDev::DebugComponent *);

	// CgsDebugCollections.h:389
	void Remove(CgsDev::DebugComponent *);

	// CgsDebugCollections.h:422
	void Replace(CgsDev::DebugComponent *, CgsDev::DebugComponent *);

	// CgsDebugCollections.h:446
	bool IsAdded(const CgsDev::DebugComponent *) const;

	// CgsDebugCollections.h:463
	CgsDev::DebugComponent * GetNext(const CgsDev::DebugComponent *) const;

	// CgsDebugCollections.h:475
	CgsDev::DebugComponent * GetPrevious(const CgsDev::DebugComponent *) const;

	// CgsDebugCollections.h:506
	CgsDev::DebugComponent * GetNextWrap(const CgsDev::DebugComponent *) const;

	// CgsDebugCollections.h:525
	CgsDev::DebugComponent * GetPreviousWrap(const CgsDev::DebugComponent *) const;

	// CgsDebugCollections.h:544
	CgsDev::DebugComponent * GetFirst() const;

	// CgsDebugCollections.h:550
	CgsDev::DebugComponent * GetLast() const;

	// CgsDebugCollections.h:564
	bool IsEmpty() const;

	// CgsDebugCollections.h:570
	int32_t GetCount() const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Menu> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	CgsDev::DebugUI::Menu ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(CgsDev::DebugUI::Menu *);

	// CgsDebugCollections.h:217
	void Remove(CgsDev::DebugUI::Menu *);

	// CgsDebugCollections.h:239
	CgsDev::DebugUI::Menu * GetFirst() const;

	// CgsDebugCollections.h:252
	CgsDev::DebugUI::Menu * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	CgsDev::DebugUI::Menu * GetAt(int) const;

	// CgsDebugCollections.h:289
	CgsDev::DebugUI::Menu * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Menu> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::Menu> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::Menu> mFree;

	// CgsDebugCollections.h:171
	CgsDev::DebugUI::Menu * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	CgsDev::DebugUI::Menu * Allocate();

	// CgsDebugCollections.h:670
	void Free(CgsDev::DebugUI::Menu *);

	// CgsDebugCollections.h:684
	CgsDev::DebugUI::Menu * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	CgsDev::DebugUI::Menu * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	CgsDev::DebugUI::Menu * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	CgsDev::DebugUI::Menu * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(CgsDev::DebugUI::Menu *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuWindow> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	CgsDev::DebugUI::MenuWindow ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(CgsDev::DebugUI::MenuWindow *);

	// CgsDebugCollections.h:217
	void Remove(CgsDev::DebugUI::MenuWindow *);

	// CgsDebugCollections.h:239
	CgsDev::DebugUI::MenuWindow * GetFirst() const;

	// CgsDebugCollections.h:252
	CgsDev::DebugUI::MenuWindow * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	CgsDev::DebugUI::MenuWindow * GetAt(int) const;

	// CgsDebugCollections.h:289
	CgsDev::DebugUI::MenuWindow * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuWindow> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::MenuWindow> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::MenuWindow> mFree;

	// CgsDebugCollections.h:171
	CgsDev::DebugUI::MenuWindow * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	CgsDev::DebugUI::MenuWindow * Allocate();

	// CgsDebugCollections.h:670
	void Free(CgsDev::DebugUI::MenuWindow *);

	// CgsDebugCollections.h:684
	CgsDev::DebugUI::MenuWindow * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	CgsDev::DebugUI::MenuWindow * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	CgsDev::DebugUI::MenuWindow * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	CgsDev::DebugUI::MenuWindow * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(CgsDev::DebugUI::MenuWindow *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Variable> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	Variable ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(Variable *);

	// CgsDebugCollections.h:217
	void Remove(Variable *);

	// CgsDebugCollections.h:239
	Variable * GetFirst() const;

	// CgsDebugCollections.h:252
	Variable * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	Variable * GetAt(int) const;

	// CgsDebugCollections.h:289
	Variable * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Variable> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::Variable> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::Variable> mFree;

	// CgsDebugCollections.h:171
	Variable * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	Variable * Allocate();

	// CgsDebugCollections.h:670
	void Free(Variable *);

	// CgsDebugCollections.h:684
	Variable * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	Variable * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	Variable * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	Variable * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(Variable *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemVariable> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	CgsDev::DebugUI::MenuItemVariable ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugCollections.h:217
	void Remove(CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugCollections.h:239
	CgsDev::DebugUI::MenuItemVariable * GetFirst() const;

	// CgsDebugCollections.h:252
	CgsDev::DebugUI::MenuItemVariable * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	CgsDev::DebugUI::MenuItemVariable * GetAt(int) const;

	// CgsDebugCollections.h:289
	CgsDev::DebugUI::MenuItemVariable * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemVariable> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::MenuItemVariable> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::MenuItemVariable> mFree;

	// CgsDebugCollections.h:171
	CgsDev::DebugUI::MenuItemVariable * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	CgsDev::DebugUI::MenuItemVariable * Allocate();

	// CgsDebugCollections.h:670
	void Free(CgsDev::DebugUI::MenuItemVariable *);

	// CgsDebugCollections.h:684
	CgsDev::DebugUI::MenuItemVariable * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	CgsDev::DebugUI::MenuItemVariable * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	CgsDev::DebugUI::MenuItemVariable * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	CgsDev::DebugUI::MenuItemVariable * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(CgsDev::DebugUI::MenuItemVariable *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::VariableMetadata> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	VariableMetadata ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(VariableMetadata *);

	// CgsDebugCollections.h:217
	void Remove(VariableMetadata *);

	// CgsDebugCollections.h:239
	VariableMetadata * GetFirst() const;

	// CgsDebugCollections.h:252
	VariableMetadata * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	VariableMetadata * GetAt(int) const;

	// CgsDebugCollections.h:289
	VariableMetadata * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::VariableMetadata> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::VariableMetadata> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::VariableMetadata> mFree;

	// CgsDebugCollections.h:171
	VariableMetadata * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	VariableMetadata * Allocate();

	// CgsDebugCollections.h:670
	void Free(VariableMetadata *);

	// CgsDebugCollections.h:684
	VariableMetadata * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	VariableMetadata * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	VariableMetadata * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	VariableMetadata * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(VariableMetadata *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::Function> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	Function ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(Function *);

	// CgsDebugCollections.h:217
	void Remove(Function *);

	// CgsDebugCollections.h:239
	Function * GetFirst() const;

	// CgsDebugCollections.h:252
	Function * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	Function * GetAt(int) const;

	// CgsDebugCollections.h:289
	Function * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::Function> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::Function> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::Function> mFree;

	// CgsDebugCollections.h:171
	Function * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	Function * Allocate();

	// CgsDebugCollections.h:670
	void Free(Function *);

	// CgsDebugCollections.h:684
	Function * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	Function * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	Function * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	Function * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(Function *) const;

}

// CgsDebugCollections.h:87
struct CgsDev::Internal::DebugStaticArray<CgsDev::DebugUI::MenuItemFunction> {
private:
	// CgsDebugCollections.h:102
	int16_t miMaxSize;

	// CgsDebugCollections.h:103
	int16_t miCount;

	// CgsDebugCollections.h:104
	CgsDev::DebugUI::MenuItemFunction ** mppItems;

public:
	// CgsDebugCollections.h:185
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:193
	void Clear();

	// CgsDebugCollections.h:205
	void Add(CgsDev::DebugUI::MenuItemFunction *);

	// CgsDebugCollections.h:217
	void Remove(CgsDev::DebugUI::MenuItemFunction *);

	// CgsDebugCollections.h:239
	CgsDev::DebugUI::MenuItemFunction * GetFirst() const;

	// CgsDebugCollections.h:252
	CgsDev::DebugUI::MenuItemFunction * GetFree();

	// CgsDebugCollections.h:263
	bool IsEmpty() const;

	// CgsDebugCollections.h:270
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:277
	int32_t GetCount() const;

	// CgsDebugCollections.h:283
	CgsDev::DebugUI::MenuItemFunction * GetAt(int) const;

	// CgsDebugCollections.h:289
	CgsDev::DebugUI::MenuItemFunction * operator[](int) const;

}

// CgsDebugCollections.h:147
struct CgsDev::Internal::DebugStaticPool<CgsDev::DebugUI::MenuItemFunction> {
private:
	// CgsDebugCollections.h:169
	DebugStaticArray<CgsDev::DebugUI::MenuItemFunction> mActive;

	// CgsDebugCollections.h:170
	DebugStaticArray<CgsDev::DebugUI::MenuItemFunction> mFree;

	// CgsDebugCollections.h:171
	CgsDev::DebugUI::MenuItemFunction * mpItemsArray;

public:
	// CgsDebugCollections.h:630
	void Construct(int, rw::IResourceAllocator *);

	// CgsDebugCollections.h:638
	void Clear();

	// CgsDebugCollections.h:651
	int32_t GetMaxSize() const;

	// CgsDebugCollections.h:657
	CgsDev::DebugUI::MenuItemFunction * Allocate();

	// CgsDebugCollections.h:670
	void Free(CgsDev::DebugUI::MenuItemFunction *);

	// CgsDebugCollections.h:684
	CgsDev::DebugUI::MenuItemFunction * GetFreeAt(int) const;

	// CgsDebugCollections.h:678
	CgsDev::DebugUI::MenuItemFunction * GetFirstFree() const;

	// CgsDebugCollections.h:690
	int32_t GetFreeCount() const;

	// CgsDebugCollections.h:702
	CgsDev::DebugUI::MenuItemFunction * GetActiveAt(int) const;

	// CgsDebugCollections.h:696
	CgsDev::DebugUI::MenuItemFunction * GetFirstActive() const;

	// CgsDebugCollections.h:708
	int32_t GetActiveCount() const;

	// CgsDebugCollections.h:714
	bool IsFromPool(CgsDev::DebugUI::MenuItemFunction *) const;

}

// CgsDebugCollections.h:116
struct CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::Window> {
private:
	// CgsDebugCollections.h:134
	CgsDev::DebugUI::Window * mpList;

public:
	// CgsDebugCollections.h:328
	void Clear();

	// CgsDebugCollections.h:335
	void Add(CgsDev::DebugUI::Window *);

	// CgsDebugCollections.h:369
	void AddAfter(CgsDev::DebugUI::Window *, CgsDev::DebugUI::Window *);

	// CgsDebugCollections.h:389
	void Remove(CgsDev::DebugUI::Window *);

	// CgsDebugCollections.h:422
	void Replace(CgsDev::DebugUI::Window *, CgsDev::DebugUI::Window *);

	// CgsDebugCollections.h:446
	bool IsAdded(const CgsDev::DebugUI::Window *) const;

	// CgsDebugCollections.h:463
	CgsDev::DebugUI::Window * GetNext(const CgsDev::DebugUI::Window *) const;

	// CgsDebugCollections.h:475
	CgsDev::DebugUI::Window * GetPrevious(const CgsDev::DebugUI::Window *) const;

	// CgsDebugCollections.h:506
	CgsDev::DebugUI::Window * GetNextWrap(const CgsDev::DebugUI::Window *) const;

	// CgsDebugCollections.h:525
	CgsDev::DebugUI::Window * GetPreviousWrap(const CgsDev::DebugUI::Window *) const;

	// CgsDebugCollections.h:544
	CgsDev::DebugUI::Window * GetFirst() const;

	// CgsDebugCollections.h:550
	CgsDev::DebugUI::Window * GetLast() const;

	// CgsDebugCollections.h:564
	bool IsEmpty() const;

	// CgsDebugCollections.h:570
	int32_t GetCount() const;

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugCollections.h:30
	namespace Internal {
		struct DebugInternal;

		struct DebugStreamInputEntry;

		struct DebugStreamInput;

		struct DebugLinkedList<CgsDev::DebugComponent>;

		struct DebugStaticArray<CgsDev::DebugUI::Menu>;

		struct DebugStaticPool<CgsDev::DebugUI::Menu>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticArray<CgsDev::DebugUI::Variable>;

		struct DebugStaticPool<CgsDev::DebugUI::Variable>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticArray<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticPool<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticArray<CgsDev::DebugUI::Function>;

		struct DebugStaticPool<CgsDev::DebugUI::Function>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugLinkedList<CgsDev::DebugUI::Window>;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugCollections.h:30
	namespace Internal {
		struct DebugInternal;

		struct DebugLinkedList<CgsDev::DebugComponent>;

		struct DebugStaticArray<CgsDev::DebugUI::Menu>;

		struct DebugStaticPool<CgsDev::DebugUI::Menu>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticArray<CgsDev::DebugUI::Variable>;

		struct DebugStaticPool<CgsDev::DebugUI::Variable>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticArray<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticPool<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticArray<CgsDev::DebugUI::Function>;

		struct DebugStaticPool<CgsDev::DebugUI::Function>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugLinkedList<CgsDev::DebugUI::Window>;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugCollections.h:30
	namespace Internal {
	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugCollections.h:30
	namespace Internal {
		// CgsDebugCollections.h:30
		enum AllocationType {
			E_ALLOCATION_NORMAL = 0,
		}

		struct DebugStreamInputEntry;

		struct DebugStreamInput;

		struct CInEventDrawText2D;

		struct CInEventDrawLine2D;

		struct CInEventDrawBox2D;

		struct CInEventDrawFrame2D;

		struct CInEventDrawText;

		struct CInEventDrawLine;

		struct CInEventDrawPoint;

		struct CInEventDrawQuad;

		struct CInEventDrawAngle;

		struct CInEventDrawAxis;

		struct CInEventDrawSphere;

		struct CInEventDrawSolidSphere;

		struct CInEventDrawHollowSphere;

		struct CInEventDrawCircle;

		struct CInEventDrawBox;

		struct CInEventDrawBoxAA;

		struct CInEventDrawSolidBox;

		struct CInEventDrawSolidBoxAA;

		struct CInEventDrawArrow;

		struct CInEventDrawSolidArrow;

		struct CInEventDrawCylinder;

		struct CInEventDrawCapsule;

		struct CInEventDrawTriangle;

		struct DebugInternal;

		struct DebugLinkedList<CgsDev::DebugComponent>;

		struct DebugStaticArray<CgsDev::DebugUI::Menu>;

		struct DebugStaticPool<CgsDev::DebugUI::Menu>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuWindow>;

		struct DebugStaticArray<CgsDev::DebugUI::Variable>;

		struct DebugStaticPool<CgsDev::DebugUI::Variable>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemVariable>;

		struct DebugStaticArray<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticPool<CgsDev::DebugUI::VariableMetadata>;

		struct DebugStaticArray<CgsDev::DebugUI::Function>;

		struct DebugStaticPool<CgsDev::DebugUI::Function>;

		struct DebugStaticArray<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugStaticPool<CgsDev::DebugUI::MenuItemFunction>;

		struct DebugLinkedList<CgsDev::DebugUI::Window>;

		struct DebugLinkedList<CgsDev::DebugUI::MenuItem>;

	}

}

// CgsDebugCollections.h:116
struct CgsDev::Internal::DebugLinkedList<CgsDev::DebugUI::MenuItem> {
private:
	// CgsDebugCollections.h:134
	CgsDev::DebugUI::MenuItem * mpList;

public:
	// CgsDebugCollections.h:328
	void Clear();

	// CgsDebugCollections.h:335
	void Add(CgsDev::DebugUI::MenuItem *);

	// CgsDebugCollections.h:369
	void AddAfter(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsDebugCollections.h:389
	void Remove(CgsDev::DebugUI::MenuItem *);

	// CgsDebugCollections.h:422
	void Replace(CgsDev::DebugUI::MenuItem *, CgsDev::DebugUI::MenuItem *);

	// CgsDebugCollections.h:446
	bool IsAdded(const CgsDev::DebugUI::MenuItem *) const;

	// CgsDebugCollections.h:463
	CgsDev::DebugUI::MenuItem * GetNext(const CgsDev::DebugUI::MenuItem *) const;

	// CgsDebugCollections.h:475
	CgsDev::DebugUI::MenuItem * GetPrevious(const CgsDev::DebugUI::MenuItem *) const;

	// CgsDebugCollections.h:506
	CgsDev::DebugUI::MenuItem * GetNextWrap(const CgsDev::DebugUI::MenuItem *) const;

	// CgsDebugCollections.h:525
	CgsDev::DebugUI::MenuItem * GetPreviousWrap(const CgsDev::DebugUI::MenuItem *) const;

	// CgsDebugCollections.h:544
	CgsDev::DebugUI::MenuItem * GetFirst() const;

	// CgsDebugCollections.h:550
	CgsDev::DebugUI::MenuItem * GetLast() const;

	// CgsDebugCollections.h:564
	bool IsEmpty() const;

	// CgsDebugCollections.h:570
	int32_t GetCount() const;

}

// CgsDebugCollections.h:45
extern void * operator new [](size_t  size, rw::IResourceAllocator *  lpAllocator, CgsDev::Internal::AllocationType  leAllocation) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

