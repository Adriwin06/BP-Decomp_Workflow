// simplevector.h:117
extern const uint32_t INITIAL_CAPACITY;

// simplevector.h:119
extern const float32_t GROWTH_FACTOR;

// simplevector.h:67
struct rw::SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord> {
private:
	// simplevector.h:106
	const rw::IResourceAllocator & m_allocator;

	// simplevector.h:107
	Resource m_storage;

	// Unknown accessibility
	// arena.h:355
	typedef ArenaSectionSubreferencesRecord ArenaSectionSubreferencesRecord;

	// simplevector.h:108
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * m_elements;

	// simplevector.h:109
	uint32_t m_capacity;

	// simplevector.h:110
	uint32_t m_size;

	// simplevector.h:117
	extern const uint32_t INITIAL_CAPACITY;

	// simplevector.h:119
	extern const float32_t GROWTH_FACTOR;

public:
	// simplevector.h:128
	void SimpleVector(rw::IResourceAllocator &, unsigned int);

	// simplevector.h:147
	void SimpleVector(unsigned int);

	// simplevector.h:164
	void ~SimpleVector();

	// simplevector.h:180
	bool empty() const;

	// simplevector.h:191
	uint32_t size() const;

	// simplevector.h:203
	uint32_t capacity() const;

	// simplevector.h:214
	void clear();

	// simplevector.h:227
	void resize(unsigned int);

	// simplevector.h:242
	void reserve(unsigned int);

	// simplevector.h:284
	const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord & operator[](unsigned int) const;

	// simplevector.h:297
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord & operator[](unsigned int);

	// simplevector.h:310
	const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * data() const;

	// simplevector.h:322
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord * data();

	// simplevector.h:334
	void push_back(const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord>::ArenaSectionSubreferencesRecord &);

private:
	// simplevector.h:100
	void SimpleVector(const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord> &);

	// simplevector.h:101
	SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord> & operator=(const SimpleVector<rw::core::arena::ArenaSectionSubreferencesRecord> &);

}

// simplevector.h:67
struct rw::SimpleVector<rw::core::arena::ArenaDictEntry> {
private:
	// simplevector.h:106
	const rw::IResourceAllocator & m_allocator;

	// simplevector.h:107
	Resource m_storage;

	// simplevector.h:108
	ArenaDictEntry * m_elements;

	// simplevector.h:109
	uint32_t m_capacity;

	// simplevector.h:110
	uint32_t m_size;

	// simplevector.h:117
	extern const uint32_t INITIAL_CAPACITY;

	// simplevector.h:119
	extern const float32_t GROWTH_FACTOR;

public:
	// simplevector.h:128
	void SimpleVector(rw::IResourceAllocator &, unsigned int);

	// simplevector.h:147
	void SimpleVector(unsigned int);

	// simplevector.h:164
	void ~SimpleVector();

	// simplevector.h:180
	bool empty() const;

	// simplevector.h:191
	uint32_t size() const;

	// simplevector.h:203
	uint32_t capacity() const;

	// simplevector.h:214
	void clear();

	// simplevector.h:227
	void resize(unsigned int);

	// simplevector.h:242
	void reserve(unsigned int);

	// simplevector.h:284
	const ArenaDictEntry & operator[](unsigned int) const;

	// simplevector.h:297
	rw::core::arena::ArenaDictEntry & operator[](unsigned int);

	// simplevector.h:310
	const ArenaDictEntry * data() const;

	// simplevector.h:322
	ArenaDictEntry * data();

	// simplevector.h:334
	void push_back(const ArenaDictEntry &);

private:
	// simplevector.h:100
	void SimpleVector(const SimpleVector<rw::core::arena::ArenaDictEntry> &);

	// simplevector.h:101
	SimpleVector<rw::core::arena::ArenaDictEntry> & operator=(const SimpleVector<rw::core::arena::ArenaDictEntry> &);

}

