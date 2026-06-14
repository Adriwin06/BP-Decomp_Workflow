// LionBlockAlloc.h:24
struct cLionBlockAlloc {
private:
	// LionBlockAlloc.h:37
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionBlockAlloc.h:38
	U32 * mpBits;

	// LionBlockAlloc.h:39
	U8 * mpData;

	// LionBlockAlloc.h:40
	S32 mItemCount;

	// LionBlockAlloc.h:42
	S32 mItemSize;

	// LionBlockAlloc.h:43
	S32 mAllocCount;

	// LionBlockAlloc.h:44
	S32 mIndexLast;

	// LionBlockAlloc.h:45
	S32 mBitBlockCount;

public:
	// LionBlockAlloc.h:26
	void Init(EA::Allocator::ITaggedAllocator *, U32, U32);

	// LionBlockAlloc.h:27
	void DeInit();

	// LionBlockAlloc.h:28
	void Flush();

	// LionBlockAlloc.h:30
	void * Alloc();

	// LionBlockAlloc.h:31
	void DeAlloc(void *);

	// LionBlockAlloc.h:33
	S32 GetAllocCount() const;

	// LionBlockAlloc.h:34
	S32 GetItemCount() const;

}

