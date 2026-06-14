// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsBitArray.h:29
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsIndexedPool.h:24
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsSet.h:28
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
	}

}

// CgsReadOnlyObjectCache.h:29
namespace CgsContainers {
	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsReadOnlyObjectCache.h:41
	namespace ReadOnlyObjectCacheUnitTest {
		struct TestStruct;

	}

}

// CgsReadOnlyObjectCache.h:43
struct CgsContainers::ReadOnlyObjectCacheUnitTest::TestStruct {
	// CgsReadOnlyObjectCache.h:45
	int32_t[4] maValues;

}

// CgsReadOnlyObjectCache.h:68
struct CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode> {
private:
	// CgsReadOnlyObjectCache.h:105
	const PolygonSoupSpacialNode * mpSourceBuffer;

	// CgsReadOnlyObjectCache.h:106
	int32_t miNumSourceEntries;

public:
	// CgsReadOnlyObjectCache.h:148
	void Construct(const PolygonSoupSpacialNode *, int, int, int);

	// CgsReadOnlyObjectCache.h:190
	int32_t StartFetch(int);

	// CgsReadOnlyObjectCache.h:232
	const PolygonSoupSpacialNode * WaitForFetch(int);

	// CgsReadOnlyObjectCache.h:263
	const PolygonSoupSpacialNode * Fetch(int);

	// CgsReadOnlyObjectCache.h:287
	void Release(const PolygonSoupSpacialNode *);

	// CgsReadOnlyObjectCache.h:316
	void ReleaseAll();

	// CgsReadOnlyObjectCache.h:358
	int32_t GetNumUsedSlots() const;

	// CgsReadOnlyObjectCache.h:379
	int32_t GetNumFreeSlots() const;

}

