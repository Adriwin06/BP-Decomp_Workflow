// iallocator.h:25
struct EA::TagValuePair {
	// iallocator.h:48
	unsigned int mTag;

	// iallocator.h:56
	// iallocator.h:51
	union {
		// iallocator.h:52
		int mInt;

		// iallocator.h:53
		size_t mSize;

		// iallocator.h:54
		float mFloat;

		// iallocator.h:55
		const void * mPointer;

	}
 mValue;

	// iallocator.h:58
	const TagValuePair * mNext;

public:
	// iallocator.h:26
	void TagValuePair(unsigned int, int);

	// iallocator.h:27
	void TagValuePair(unsigned int, size_t);

	// iallocator.h:28
	void TagValuePair(unsigned int, float);

	// iallocator.h:29
	void TagValuePair(unsigned int, const void *);

	// iallocator.h:46
	const TagValuePair & operator+(const TagValuePair &) const;

}

// iallocator.h:106
struct EA::Allocator::IAllocator {
	int (*)(...) * _vptr.IAllocator;

public:
	void IAllocator(const IAllocator &);

	void IAllocator();

	// iallocator.h:127
	virtual void * Alloc(size_t, const TagValuePair &);

	// iallocator.h:144
	virtual void Free(void *, size_t);

	// iallocator.h:162
	virtual int AddRef();

	// iallocator.h:180
	virtual int Release();

protected:
	// iallocator.h:183
	virtual void ~IAllocator();

}

// iallocator.h:106
void EA::Allocator::IAllocator::IAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

