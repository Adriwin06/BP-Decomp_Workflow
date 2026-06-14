// icoreallocator_interface.h:31
namespace EA {
	// icoreallocator_interface.h:33
	namespace Allocator {
		struct ICoreAllocator;

	}

}

// icoreallocator_interface.h:61
struct EA::Allocator::ICoreAllocator {
	int (*)(...) * _vptr.ICoreAllocator;

public:
	ICoreAllocator & operator=(const ICoreAllocator &);

	// icoreallocator_interface.h:66
	virtual void ~ICoreAllocator();

	// icoreallocator_interface.h:92
	virtual void * Alloc(size_t, const char *, unsigned int);

	// icoreallocator_interface.h:117
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// icoreallocator_interface.h:135
	virtual void Free(void *, size_t);

	// icoreallocator_interface.h:142
	EA::Allocator::ICoreAllocator * GetDefaultAllocator();

}

// icoreallocator_interface.h:31
namespace EA {
	// icoreallocator_interface.h:33
	namespace Allocator {
		struct ICoreAllocator;

		struct ITaggedAllocator;

		struct IAllocator;

	}

	struct TagValuePair;

}

// icoreallocator_interface.h:61
struct EA::Allocator::ICoreAllocator {
	int (*)(...) * _vptr.ICoreAllocator;

public:
	void ICoreAllocator(const ICoreAllocator &);

	void ICoreAllocator();

	ICoreAllocator & operator=(const ICoreAllocator &);

	// icoreallocator_interface.h:66
	virtual void ~ICoreAllocator();

	// icoreallocator_interface.h:92
	virtual void * Alloc(size_t, const char *, unsigned int);

	// icoreallocator_interface.h:117
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// icoreallocator_interface.h:135
	virtual void Free(void *, size_t);

	// icoreallocator_interface.h:142
	EA::Allocator::ICoreAllocator * GetDefaultAllocator();

}

// icoreallocator_interface.h:61
void EA::Allocator::ICoreAllocator::ICoreAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// icoreallocator_interface.h:31
namespace EA {
	// icoreallocator_interface.h:33
	namespace Allocator {
		struct ICoreAllocator;

		struct ITaggedAllocator;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// icoreallocator_interface.h:33
	namespace Allocator {
		struct ICoreAllocator;

		struct ITaggedAllocator;

	}

	struct TagValuePair;

}

