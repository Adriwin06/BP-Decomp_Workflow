// CgsPolygonSoupListSpatialMap.h:45
struct CgsGeometric::PolygonSoupSpacialNode {
	// CgsPolygonSoupListSpatialMap.h:47
	AxisAlignedBox mBoundingBox;

	// CgsPolygonSoupListSpatialMap.h:48
	uint16_t * mpuNodeIndices;

	// CgsPolygonSoupListSpatialMap.h:49
	uint16_t muNumNodes;

	// CgsPolygonSoupListSpatialMap.h:50
	uint16_t muPad0;

	// CgsPolygonSoupListSpatialMap.h:51
	uint32_t[2] muPad1;

}

// CgsPolygonSoupListSpatialMap.h:55
struct CgsGeometric::PolygonSoupLeafNode {
	// CgsPolygonSoupListSpatialMap.h:57
	AxisAlignedBox mBoundingBox;

	// CgsPolygonSoupListSpatialMap.h:58
	const PolygonSoup * mpPolygonSoup;

	// CgsPolygonSoupListSpatialMap.h:59
	uint16_t muDataSize;

	// CgsPolygonSoupListSpatialMap.h:60
	uint16_t muPad0;

	// CgsPolygonSoupListSpatialMap.h:61
	uint32_t[2] muPad1;

}

// CgsPolygonSoupListSpatialMap.h:65
struct CgsGeometric::PolygonSoupJobQueryParams {
	// CgsPolygonSoupListSpatialMap.h:67
	uint16_t * mpuQueryBuffer0;

	// CgsPolygonSoupListSpatialMap.h:68
	uint16_t * mpuQueryBuffer1;

	// CgsPolygonSoupListSpatialMap.h:69
	int32_t miQueryBufferSize;

}

// CgsPolygonSoupListSpatialMap.h:88
struct CgsGeometric::PolygonSoupListSpatialMap {
	// CgsPolygonSoupListSpatialMap.h:91
	extern const int32_t KI_MAX_LEVELS = 8;

private:
	// CgsPolygonSoupListSpatialMap.h:168
	ResourceHandle * mpaPolySoupListHandles;

	// CgsPolygonSoupListSpatialMap.h:169
	int32_t miNumSoupLists;

	// CgsPolygonSoupListSpatialMap.h:170
	PolygonSoupSpacialNode *[8] mapParentNodes;

	// CgsPolygonSoupListSpatialMap.h:171
	int32_t[8] maiParentNodeCounts;

	// CgsPolygonSoupListSpatialMap.h:172
	PolygonSoupLeafNode * mpLeafNodes;

	// CgsPolygonSoupListSpatialMap.h:173
	int32_t miLeafNodeCount;

	// CgsPolygonSoupListSpatialMap.h:174
	uint16_t *[2] mapQueryBuffers;

	// CgsPolygonSoupListSpatialMap.h:175
	uint16_t * mpOutputQueryBuffer;

	// CgsPolygonSoupListSpatialMap.h:176
	int32_t miNumLevels;

	// CgsPolygonSoupListSpatialMap.h:177
	int32_t miQueryBufferSize;

	// CgsPolygonSoupListSpatialMap.h:178
	int32_t miLastQueryResultCount;

public:
	// CgsPolygonSoupListSpatialMap.h:95
	void Construct();

	// CgsPolygonSoupListSpatialMap.h:100
	void Prepare(ResourceHandle *, int32_t);

	// CgsPolygonSoupListSpatialMap.h:103
	void Clear();

	// CgsPolygonSoupListSpatialMap.h:107
	const CgsGeometric::PolygonSoupList * GetPolySoupList(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:111
	void AddList(const CgsGeometric::PolygonSoupList *);

	// CgsPolygonSoupListSpatialMap.h:117
	void BuildSpacialPartition(LinearMalloc *, int32_t, int32_t);

	// CgsPolygonSoupListSpatialMap.h:121
	// Declaration
	int32_t RunQuery(AxisAlignedBoxArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox.h:94
		typedef const AxisAlignedBox & AxisAlignedBoxArg;

	}

	// CgsPolygonSoupListSpatialMap.h:125
	// Declaration
	int32_t RunQuery(LineArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLine.h:74
		typedef const Line & LineArg;

	}

	// CgsPolygonSoupListSpatialMap.h:128
	int32_t GetLastQueryResultCount() const;

	// CgsPolygonSoupListSpatialMap.h:131
	const uint16_t * GetQueryResultBuffer() const;

	// CgsPolygonSoupListSpatialMap.h:140
	// Declaration
	void RunJobQuery(AxisAlignedBoxArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.h:76
		typedef CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode> PolygonSoupSpacialNodeCache;

	}

	// CgsPolygonSoupListSpatialMap.h:148
	void RunJobQuery(LineArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const;

	// CgsPolygonSoupListSpatialMap.h:151
	int32_t GetNumPolySoupLists() const;

	// CgsPolygonSoupListSpatialMap.h:154
	const PolygonSoupLeafNode * GetPolygonSoupNode(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:157
	const PolygonSoupLeafNode * GetPolygonSoupNodeForResult(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:160
	int32_t GetNumLeafNodes() const;

	// CgsPolygonSoupListSpatialMap.h:164
	const PolygonSoupSpacialNode * GetSpacialNode(int32_t) const;

}

// CgsPolygonSoupListSpatialMap.h:91
extern const int32_t KI_MAX_LEVELS = 8;

// CgsPolygonSoupListSpatialMap.h:88
struct CgsGeometric::PolygonSoupListSpatialMap {
	// CgsPolygonSoupListSpatialMap.h:91
	extern const int32_t KI_MAX_LEVELS = 8;

private:
	// CgsPolygonSoupListSpatialMap.h:168
	ResourceHandle * mpaPolySoupListHandles;

	// CgsPolygonSoupListSpatialMap.h:169
	int32_t miNumSoupLists;

	// CgsPolygonSoupListSpatialMap.h:170
	PolygonSoupSpacialNode *[8] mapParentNodes;

	// CgsPolygonSoupListSpatialMap.h:171
	int32_t[8] maiParentNodeCounts;

	// CgsPolygonSoupListSpatialMap.h:172
	PolygonSoupLeafNode * mpLeafNodes;

	// CgsPolygonSoupListSpatialMap.h:173
	int32_t miLeafNodeCount;

	// CgsPolygonSoupListSpatialMap.h:174
	uint16_t *[2] mapQueryBuffers;

	// CgsPolygonSoupListSpatialMap.h:175
	uint16_t * mpOutputQueryBuffer;

	// CgsPolygonSoupListSpatialMap.h:176
	int32_t miNumLevels;

	// CgsPolygonSoupListSpatialMap.h:177
	int32_t miQueryBufferSize;

	// CgsPolygonSoupListSpatialMap.h:178
	int32_t miLastQueryResultCount;

public:
	// CgsPolygonSoupListSpatialMap.h:95
	void Construct();

	// CgsPolygonSoupListSpatialMap.h:100
	void Prepare(ResourceHandle *, int32_t);

	// CgsPolygonSoupListSpatialMap.h:103
	void Clear();

	// CgsPolygonSoupListSpatialMap.h:107
	const CgsGeometric::PolygonSoupList * GetPolySoupList(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:111
	void AddList(const CgsGeometric::PolygonSoupList *);

	// CgsPolygonSoupListSpatialMap.h:117
	void BuildSpacialPartition(LinearMalloc *, int32_t, int32_t);

	// CgsPolygonSoupListSpatialMap.h:121
	// Declaration
	int32_t RunQuery() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox.h:94
		typedef const AxisAlignedBox & AxisAlignedBoxArg;

	}

	// CgsPolygonSoupListSpatialMap.h:125
	// Declaration
	int32_t RunQuery(LineArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLine.h:74
		typedef const Line & LineArg;

	}

	// CgsPolygonSoupListSpatialMap.h:128
	int32_t GetLastQueryResultCount() const;

	// CgsPolygonSoupListSpatialMap.h:131
	const uint16_t * GetQueryResultBuffer() const;

	// CgsPolygonSoupListSpatialMap.h:140
	// Declaration
	void RunJobQuery(AxisAlignedBoxArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.h:76
		typedef CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode> PolygonSoupSpacialNodeCache;

	}

	// CgsPolygonSoupListSpatialMap.h:148
	void RunJobQuery(LineArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const;

	// CgsPolygonSoupListSpatialMap.h:151
	int32_t GetNumPolySoupLists() const;

	// CgsPolygonSoupListSpatialMap.h:154
	const PolygonSoupLeafNode * GetPolygonSoupNode(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:157
	const PolygonSoupLeafNode * GetPolygonSoupNodeForResult(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:160
	int32_t GetNumLeafNodes() const;

	// CgsPolygonSoupListSpatialMap.h:164
	const PolygonSoupSpacialNode * GetSpacialNode(int32_t) const;

}

// CgsPolygonSoupListSpatialMap.h:88
struct CgsGeometric::PolygonSoupListSpatialMap {
	// CgsPolygonSoupListSpatialMap.h:91
	extern const int32_t KI_MAX_LEVELS = 8;

private:
	// CgsPolygonSoupListSpatialMap.h:168
	CgsResource::ResourceHandle * mpaPolySoupListHandles;

	// CgsPolygonSoupListSpatialMap.h:169
	int32_t miNumSoupLists;

	// CgsPolygonSoupListSpatialMap.h:170
	PolygonSoupSpacialNode *[8] mapParentNodes;

	// CgsPolygonSoupListSpatialMap.h:171
	int32_t[8] maiParentNodeCounts;

	// CgsPolygonSoupListSpatialMap.h:172
	PolygonSoupLeafNode * mpLeafNodes;

	// CgsPolygonSoupListSpatialMap.h:173
	int32_t miLeafNodeCount;

	// CgsPolygonSoupListSpatialMap.h:174
	uint16_t *[2] mapQueryBuffers;

	// CgsPolygonSoupListSpatialMap.h:175
	uint16_t * mpOutputQueryBuffer;

	// CgsPolygonSoupListSpatialMap.h:176
	int32_t miNumLevels;

	// CgsPolygonSoupListSpatialMap.h:177
	int32_t miQueryBufferSize;

	// CgsPolygonSoupListSpatialMap.h:178
	int32_t miLastQueryResultCount;

public:
	// CgsPolygonSoupListSpatialMap.h:95
	void Construct();

	// CgsPolygonSoupListSpatialMap.h:100
	void Prepare(CgsResource::ResourceHandle *, int32_t);

	// CgsPolygonSoupListSpatialMap.h:103
	void Clear();

	// CgsPolygonSoupListSpatialMap.h:107
	const CgsGeometric::PolygonSoupList * GetPolySoupList(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:111
	void AddList(const CgsGeometric::PolygonSoupList *);

	// CgsPolygonSoupListSpatialMap.h:117
	void BuildSpacialPartition(LinearMalloc *, int32_t, int32_t);

	// CgsPolygonSoupListSpatialMap.h:121
	// Declaration
	int32_t RunQuery() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox.h:94
		typedef const AxisAlignedBox & AxisAlignedBoxArg;

	}

	// CgsPolygonSoupListSpatialMap.h:125
	// Declaration
	int32_t RunQuery(LineArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLine.h:74
		typedef const Line & LineArg;

	}

	// CgsPolygonSoupListSpatialMap.h:128
	int32_t GetLastQueryResultCount() const;

	// CgsPolygonSoupListSpatialMap.h:131
	const uint16_t * GetQueryResultBuffer() const;

	// CgsPolygonSoupListSpatialMap.h:140
	// Declaration
	void RunJobQuery(AxisAlignedBoxArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.h:76
		typedef CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode> PolygonSoupSpacialNodeCache;

	}

	// CgsPolygonSoupListSpatialMap.h:148
	void RunJobQuery(LineArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const;

	// CgsPolygonSoupListSpatialMap.h:151
	int32_t GetNumPolySoupLists() const;

	// CgsPolygonSoupListSpatialMap.h:154
	const PolygonSoupLeafNode * GetPolygonSoupNode(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:157
	const PolygonSoupLeafNode * GetPolygonSoupNodeForResult(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:160
	int32_t GetNumLeafNodes() const;

	// CgsPolygonSoupListSpatialMap.h:164
	const PolygonSoupSpacialNode * GetSpacialNode(int32_t) const;

}

// CgsPolygonSoupListSpatialMap.h:30
namespace CgsResource {
	struct ResourceHandle;

	struct FontChar;

	struct Font;

	struct SmallResource;

	struct ID;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

}

// CgsPolygonSoupListSpatialMap.h:88
struct CgsGeometric::PolygonSoupListSpatialMap {
	// CgsPolygonSoupListSpatialMap.h:91
	extern const int32_t KI_MAX_LEVELS = 8;

private:
	// CgsPolygonSoupListSpatialMap.h:168
	ResourceHandle * mpaPolySoupListHandles;

	// CgsPolygonSoupListSpatialMap.h:169
	int32_t miNumSoupLists;

	// CgsPolygonSoupListSpatialMap.h:170
	PolygonSoupSpacialNode *[8] mapParentNodes;

	// CgsPolygonSoupListSpatialMap.h:171
	int32_t[8] maiParentNodeCounts;

	// CgsPolygonSoupListSpatialMap.h:172
	PolygonSoupLeafNode * mpLeafNodes;

	// CgsPolygonSoupListSpatialMap.h:173
	int32_t miLeafNodeCount;

	// CgsPolygonSoupListSpatialMap.h:174
	uint16_t *[2] mapQueryBuffers;

	// CgsPolygonSoupListSpatialMap.h:175
	uint16_t * mpOutputQueryBuffer;

	// CgsPolygonSoupListSpatialMap.h:176
	int32_t miNumLevels;

	// CgsPolygonSoupListSpatialMap.h:177
	int32_t miQueryBufferSize;

	// CgsPolygonSoupListSpatialMap.h:178
	int32_t miLastQueryResultCount;

public:
	// CgsPolygonSoupListSpatialMap.h:95
	void Construct();

	// CgsPolygonSoupListSpatialMap.h:100
	void Prepare(ResourceHandle *, int32_t);

	// CgsPolygonSoupListSpatialMap.h:103
	void Clear();

	// CgsPolygonSoupListSpatialMap.h:107
	// Declaration
	const CgsGeometric::PolygonSoupList * GetPolySoupList(int32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.cpp:123
		using namespace CgsGeometric;

	}

	// CgsPolygonSoupListSpatialMap.h:111
	void AddList(const CgsGeometric::PolygonSoupList *);

	// CgsPolygonSoupListSpatialMap.h:117
	// Declaration
	void BuildSpacialPartition(LinearMalloc *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.cpp:169
		using namespace CgsGeometric;

		// CgsPolygonSoupListSpatialMap.cpp:170
		using namespace rw::math::vpu;

		// CgsPolygonSoupListSpatialMap.cpp:175
		using namespace CgsDev::Message;

		// CgsPolygonSoupListSpatialMap.cpp:207
		using namespace CgsDev::Message;

		// CgsPolygonSoupListSpatialMap.cpp:214
		using namespace CgsDev::Message;

		// CgsPolygonSoupListSpatialMap.cpp:277
		using namespace CgsDev::Message;

		// CgsPolygonSoupListSpatialMap.cpp:333
		using namespace CgsDev::Message;

		// CgsPolygonSoupListSpatialMap.cpp:391
		using namespace CgsDev::Message;

	}

	// CgsPolygonSoupListSpatialMap.h:121
	// Declaration
	int32_t RunQuery(AxisAlignedBoxArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAxisAlignedBox.h:94
		typedef const AxisAlignedBox & AxisAlignedBoxArg;

	}

	// CgsPolygonSoupListSpatialMap.h:125
	// Declaration
	int32_t RunQuery(LineArg) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsLine.h:74
		typedef const Line & LineArg;

	}

	// CgsPolygonSoupListSpatialMap.h:128
	int32_t GetLastQueryResultCount() const;

	// CgsPolygonSoupListSpatialMap.h:131
	const uint16_t * GetQueryResultBuffer() const;

	// CgsPolygonSoupListSpatialMap.h:140
	// Declaration
	void RunJobQuery(AxisAlignedBoxArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListSpatialMap.h:76
		typedef CgsContainers::ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode> PolygonSoupSpacialNodeCache;

	}

	// CgsPolygonSoupListSpatialMap.h:148
	void RunJobQuery(LineArg, PolygonSoupJobQueryParams *, uint16_t **, int32_t *, PolygonSoupSpacialNodeCache *) const;

	// CgsPolygonSoupListSpatialMap.h:151
	int32_t GetNumPolySoupLists() const;

	// CgsPolygonSoupListSpatialMap.h:154
	const PolygonSoupLeafNode * GetPolygonSoupNode(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:157
	const PolygonSoupLeafNode * GetPolygonSoupNodeForResult(int32_t) const;

	// CgsPolygonSoupListSpatialMap.h:160
	int32_t GetNumLeafNodes() const;

	// CgsPolygonSoupListSpatialMap.h:164
	const PolygonSoupSpacialNode * GetSpacialNode(int32_t) const;

}

