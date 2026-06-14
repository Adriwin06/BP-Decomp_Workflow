// hashcontainer.h:71
struct rw::SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*> {
private:
	// hashcontainer.h:186
	uint32_t key;

	// hashcontainer.h:187
	rw::core::arena::Arena * data;

public:
	// hashcontainer.h:76
	void SeparateKeyAndDatumContained();

	// hashcontainer.h:89
	void SeparateKeyAndDatumContained(const uint32_t &, rw::core::arena::Arena *const&);

	// hashcontainer.h:110
	const uint32_t & GetKey() const;

	// hashcontainer.h:121
	uint32_t & GetKey();

	// hashcontainer.h:132
	rw::core::arena::Arena *const& GetData() const;

	// hashcontainer.h:143
	rw::core::arena::Arena *& GetData();

	// hashcontainer.h:154
	RwBool operator==(const rw::SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*> &) const;

	// hashcontainer.h:165
	RwBool operator!=(const rw::SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*> &) const;

}

// hashcontainer.h:270
struct rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits> {
	// hashcontainer.h:342
	SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*> * contents;

	// hashcontainer.h:343
	size_t capacity;

	struct BufferPolicyDetails;

public:
	// hashcontainer.h:314
	void PreallocatedBufferPolicy(PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>::BufferPolicyDetails &);

	// hashcontainer.h:326
	size_t Capacity() const;

	// hashcontainer.h:336
	size_t GetInitialSize() const;

}

// hashcontainer.h:481
struct rw::HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits> : PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits> {
private:
	// hashcontainer.h:890
	size_t size;

	// Unknown accessibility
	struct IteratorT<rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> >;

	// Unknown accessibility
	struct IteratorT<const rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> >;

	// Unknown accessibility
	struct Index;

public:
	// hashcontainer.h:614
	void HashContainer(PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>::BufferPolicyDetails);

	// hashcontainer.h:632
	ResourceDescriptor GetResourceDescriptor();

	// hashcontainer.h:644
	size_t GetSize();

	// hashcontainer.h:657
	size_t GetAlign();

	// hashcontainer.h:670
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits> * Initialize(const Resource &, PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>::BufferPolicyDetails);

	// hashcontainer.h:683
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits> * Initialize(void *, PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>::BufferPolicyDetails);

	// hashcontainer.h:694
	bool Empty() const;

	// hashcontainer.h:704
	size_t Size() const;

	// hashcontainer.h:714
	size_t Capacity() const;

	// hashcontainer.h:900
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > Begin();

	// hashcontainer.h:914
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<const rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > Begin() const;

	// hashcontainer.h:928
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > End();

	// hashcontainer.h:937
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<const rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > End() const;

	// hashcontainer.h:1048
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > Find(const uint32_t &);

	// hashcontainer.h:1065
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<const rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > Find(const uint32_t &) const;

	// hashcontainer.h:946
	void Insert(const rw::SeparateKeyAndDatumContained<std::uint32_t,rw::core::arena::Arena*> &);

	// hashcontainer.h:970
	rw::core::arena::Arena *& operator[](const uint32_t &);

	// hashcontainer.h:995
	void Erase(const uint32_t &);

	// hashcontainer.h:1006
	void Erase(const HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::IteratorT<rw::SeparateKeyAndDatumContained<std::uint32_t, rw::core::arena::Arena*> > &);

	// hashcontainer.h:1017
	void Clear();

	// hashcontainer.h:1036
	void Swap(HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits> &);

private:
	// hashcontainer.h:1083
	HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::Index FindIndexForKey(const uint32_t &) const;

	// hashcontainer.h:1106
	void Remove(HashContainer<rw::PreallocatedBufferPolicy<rw::core::arena::ArenaIdMapHashTraits>,rw::core::arena::ArenaIdMapHashTraits>::Index);

}

