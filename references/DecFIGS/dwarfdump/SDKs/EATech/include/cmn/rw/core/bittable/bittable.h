// bittable.h:69
struct rw::BitTable {
	// bittable.h:70
	uint32_t m_rows;

	// bittable.h:71
	uint32_t m_columns;

	// bittable.h:72
	uint32_t m_arraySize;

	// bittable.h:73
	uint32_t[1] m_array;

public:
	// bittable.h:84
	void BitTable(uint32_t, uint32_t);

	// bittable.h:102
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// bittable.h:111
	BitTable * Initialize(const Resource &, uint32_t, uint32_t);

	// bittable.h:125
	uint32_t GetSize(uint32_t, uint32_t);

	// bittable.h:141
	uint32_t GetAlignment(uint32_t, uint32_t);

	// bittable.h:150
	BitTable * Initialize(void *, uint32_t, uint32_t);

	// bittable.h:160
	void Release(BitTable *);

	// bittable.h:180
	void SetBit(uint32_t, uint32_t);

	// bittable.h:197
	void ClearBit(uint32_t, uint32_t);

	// bittable.h:214
	void SetBitValue(uint32_t, uint32_t, RwBool, RwBool);

	// bittable.h:242
	void ClearTable();

	// bittable.h:261
	uint32_t GetBit(uint32_t, uint32_t) const;

	// bittable.h:276
	uint32_t GetRowCount() const;

	// bittable.h:289
	uint32_t GetColumnCount() const;

	// bittable.h:297
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// bittable.h:300
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// bittable.h:303
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// bittable.h:306
	void RegisterArenaReadCallbacks();

	// bittable.h:309
	void RegisterArenaWriteCallbacks();

}

