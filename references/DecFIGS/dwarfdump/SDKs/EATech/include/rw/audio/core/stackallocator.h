// stackallocator.h:30
struct rw::audio::core::StackMemoryHandle {
	// stackallocator.h:35
	void * pMem;

private:
	// stackallocator.h:46
	uintptr_t pLastTop;

public:
	// stackallocator.h:38
	void AvertWarning();

}

// stackallocator.h:54
struct rw::audio::core::StackAllocator {
	// stackallocator.h:58
	extern const int ALLOC_ALIGNMENT_SIZE = 128;

private:
	// stackallocator.h:169
	System * mpSystem;

	// stackallocator.h:170
	uintptr_t mpUpperLimit;

	// stackallocator.h:171
	uintptr_t mpLowerLimit;

	// stackallocator.h:172
	uintptr_t mpTop;

public:
	// stackallocator.h:63
	void Init(void *, void *, System *);

	// stackallocator.h:80
	void SetLowerLimit(void *);

	// stackallocator.h:123
	void Alloc(StackMemoryHandle *, int);

	// stackallocator.h:145
	void Free(StackMemoryHandle *);

}

// stackallocator.h:58
extern const int ALLOC_ALIGNMENT_SIZE = 128;

