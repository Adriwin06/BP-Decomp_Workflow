// LionSmallAlloc.h:24
namespace LionSmallAlloc {
	// LionSmallAlloc.cpp:165
	extern void DeInit();

	// LionSmallAlloc.cpp:186
	extern void Flush();

	// LionSmallAlloc.cpp:567
	extern sLSAMerge::sLSAPage * PageFind(void *);

	// LionSmallAlloc.cpp:413
	extern sLSAMerge::sLSAPage * PageCreate(U32);

	// LionSmallAlloc.cpp:143
	extern void Init(EA::Allocator::ITaggedAllocator *, U32, U32);

	// LionSmallAlloc.cpp:292
	extern void * BinSplitAlloc(U32);

	// LionSmallAlloc.cpp:229
	extern void * BinBestAlloc(U32);

	// LionSmallAlloc.cpp:198
	extern void * Alloc(U32);

	// LionSmallAlloc.cpp:356
	extern void DeAlloc(void *);

	// LionSmallAlloc.cpp:114
	extern EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionSmallAlloc.cpp:115
	extern sLSAMerge::sLSAPage * mpPages;

	// LionSmallAlloc.cpp:117
	extern U32 mMainSize;

	// LionSmallAlloc.cpp:118
	extern U32 mGrowthSize;

}

// LionSmallAlloc.cpp:29
struct LionSmallAlloc::sLSABinItem {
private:
	// LionSmallAlloc.cpp:74
	U8 mSize;

	// LionSmallAlloc.cpp:75
	U8 mPad;

	// LionSmallAlloc.cpp:76
	U16 mPrevOff;

	// LionSmallAlloc.cpp:77
	U16 mNextOff;

public:
	// LionSmallAlloc.cpp:30
	void MarkZone(U32);

	// LionSmallAlloc.cpp:32
	U8 GetSize() const;

	// LionSmallAlloc.cpp:37
	void SetSize(U8);

	// LionSmallAlloc.cpp:42
	U8 GetAllocFlag() const;

	// LionSmallAlloc.cpp:47
	void SetAllocFlag(U8);

	// LionSmallAlloc.cpp:53
	U16 GetNextOff() const;

	// LionSmallAlloc.cpp:58
	void SetNextOff(U16);

	// LionSmallAlloc.cpp:63
	U16 GetPrevOff() const;

	// LionSmallAlloc.cpp:68
	void SetPrevOff(U16);

}

// LionSmallAlloc.cpp:82
struct LionSmallAlloc::sLSAPage {
	// LionSmallAlloc.cpp:78
	typedef sLSABinItem sLSABinItem;

	// LionSmallAlloc.cpp:87
	sLSAPage::sLSABinItem *[255] mpFreeBins;

	// LionSmallAlloc.cpp:88
	S32 mAllocCount;

	// LionSmallAlloc.cpp:89
	S32 mAllocBytes;

	// LionSmallAlloc.cpp:90
	S32 mPageSize;

	// LionSmallAlloc.cpp:91
	U32 mMainFlag;

	// LionSmallAlloc.cpp:92
	U8 * mpData;

	// LionSmallAlloc.cpp:94
	sLSAPage * mpNext;

public:
	// LionSmallAlloc.cpp:83
	void Init(U32);

	// LionSmallAlloc.cpp:84
	void BinItemLink(sLSAPage::sLSABinItem *, U32);

	// LionSmallAlloc.cpp:85
	void BinItemUnlink(sLSAPage::sLSABinItem *);

}

// LionSmallAlloc.cpp:98
struct LionSmallAlloc::sLSAMerge {
	// LionSmallAlloc.cpp:104
	sLSAPage::sLSABinItem * mpBin;

	// LionSmallAlloc.cpp:105
	U32 mSize;

	// LionSmallAlloc.cpp:95
	typedef sLSAPage sLSAPage;

	// LionSmallAlloc.cpp:106
	sLSAMerge::sLSAPage * mpPage;

public:
	// LionSmallAlloc.cpp:99
	void Init(sLSAPage::sLSABinItem *, sLSAMerge::sLSAPage *);

	// LionSmallAlloc.cpp:100
	void MergeForward();

	// LionSmallAlloc.cpp:101
	void MergeBackward();

	// LionSmallAlloc.cpp:102
	void BinsBuild();

}

