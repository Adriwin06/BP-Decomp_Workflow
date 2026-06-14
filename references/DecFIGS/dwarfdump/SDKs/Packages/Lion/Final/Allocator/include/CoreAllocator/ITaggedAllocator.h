// ITaggedAllocator.h:78
struct EA::Allocator::ITaggedAllocator : public EA::Allocator::IAllocator {
public:
	void ITaggedAllocator(const ITaggedAllocator &);

	void ITaggedAllocator();

	// ITaggedAllocator.h:80
	virtual void * Alloc(size_t, const char *, unsigned int);

	// ITaggedAllocator.h:81
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// ITaggedAllocator.h:82
	virtual void * Alloc(size_t, const TagValuePair &);

	// ITaggedAllocator.h:83
	virtual void Free(void *, size_t);

	virtual void ~ITaggedAllocator();

}

// ITaggedAllocator.h:78
void EA::Allocator::ITaggedAllocator::~ITaggedAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ITaggedAllocator.h:78
void EA::Allocator::ITaggedAllocator::ITaggedAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

