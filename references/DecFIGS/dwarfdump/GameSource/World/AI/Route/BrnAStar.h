// BrnAStar.h:138
extern const float32_t KF_COST_WEIGHT;

// BrnAStar.h:140
extern const uint16_t KU_PARTITION_COUNT = 4;

// BrnAStar.h:141
extern const uint16_t KU_MAX_PARTITION_NODES = 256;

// BrnAStar.h:142
extern const uint16_t KU_MAX_NODES = 1024;

// BrnAStar.h:143
extern const uint16_t KU_MAX_OPEN_NODES = 128;

// BrnAStar.h:144
extern const uint16_t KU_INVALID_NODE_INDEX = 65535;

// BrnAStar.h:145
extern const uint8_t KU_INVALID_PORTAL_INDEX = 255;

// BrnAStar.h:195
extern const int32_t KI_MAX_BLOCK_SECTION_COUNT = 16;

// BrnAStar.h:196
extern const int32_t KI_MAX_ITERATIONS = 12;

// BrnAStar.h:236
extern const float32_t KF_EUCLIDEAN_BIAS;

// BrnAStar.h:237
extern const int32_t[12] KAI_MAX_NODES_PER_ITERATION;

// BrnAStar.h:238
extern const float32_t[2] KAF_QUALITY_WEIGHTS;

// BrnAStar.h:239
extern const float32_t (*)(const Vector2Template<float> &, const Vector2Template<float> &)[5] KAP_DISTANCE_FUNCTIONS;

// BrnAStar.h:55
struct BrnAI::AStarNode {
private:
	// BrnAStar.h:109
	Basic2dColouredVertex::Vector2 mPosition;

	// BrnAStar.h:110
	float32_t mfCost;

	// BrnAStar.h:111
	float32_t mfHeuristic;

	// BrnAStar.h:112
	uint16_t muParentIndex;

	// BrnAStar.h:113
	uint16_t muSectionIndex;

	// BrnAStar.h:114
	uint16_t muLinkSectionIndex;

	// BrnAStar.h:115
	uint8_t muPortalIndex;

	// BrnAStar.h:116
	bool mbOpen;

public:
	// BrnAStar.h:62
	void Construct(const Vector2Template<float> &, uint16_t, uint16_t, uint8_t);

	// BrnAStar.h:65
	Basic2dColouredVertex::Vector2 GetPosition() const;

	// BrnAStar.h:68
	float32_t GetCost() const;

	// BrnAStar.h:71
	float32_t GetHeuristic() const;

	// BrnAStar.h:74
	uint16_t GetSectionIndex() const;

	// BrnAStar.h:77
	uint16_t GetLinkSectionIndex() const;

	// BrnAStar.h:80
	uint8_t GetPortalIndex() const;

	// BrnAStar.h:83
	uint16_t GetParentIndex() const;

	// BrnAStar.h:86
	bool IsOpen() const;

	// BrnAStar.h:90
	void SetCost(float32_t);

	// BrnAStar.h:94
	void SetHeuristic(float32_t);

	// BrnAStar.h:98
	void SetParentIndex(uint16_t);

	// BrnAStar.h:101
	void Close();

	// BrnAStar.h:106
	bool UpdateCost(float32_t, uint16_t);

}

// BrnAStar.h:134
struct BrnAI::AStarNodePool {
	// BrnAStar.h:138
	extern const float32_t KF_COST_WEIGHT;

	// BrnAStar.h:139
	extern const uint16_t KU_HASH_MASK = 3;

	// BrnAStar.h:140
	extern const uint16_t KU_PARTITION_COUNT = 4;

	// BrnAStar.h:141
	extern const uint16_t KU_MAX_PARTITION_NODES = 256;

	// BrnAStar.h:142
	extern const uint16_t KU_MAX_NODES = 1024;

	// BrnAStar.h:143
	extern const uint16_t KU_MAX_OPEN_NODES = 128;

	// BrnAStar.h:144
	extern const uint16_t KU_INVALID_NODE_INDEX = 65535;

	// BrnAStar.h:145
	extern const uint8_t KU_INVALID_PORTAL_INDEX = 255;

private:
	// BrnAStar.h:175
	AStarNode[1024] maNodes;

	// BrnAStar.h:176
	uint16_t[128] mauOpenNodes;

	// BrnAStar.h:178
	uint16_t[256] mauNodeCount;

	// BrnAStar.h:179
	uint16_t muOpenNodeCount;

public:
	// BrnAStar.h:148
	void Construct();

	// BrnAStar.h:155
	AStarNode * NewNode(const Vector2Template<float> &, uint16_t, uint16_t, uint8_t);

	// BrnAStar.h:160
	AStarNode * ExtractBestOpenNode(uint16_t *, float32_t);

	// BrnAStar.h:165
	AStarNode * FindNode(uint16_t, uint8_t);

	// BrnAStar.h:169
	AStarNode * GetNode(uint16_t);

	// BrnAStar.h:172
	int32_t GetNodeCount() const;

}

// BrnAStar.h:191
struct BrnAI::AStar {
	// BrnAStar.h:195
	extern const int32_t KI_MAX_BLOCK_SECTION_COUNT = 16;

	// BrnAStar.h:196
	extern const int32_t KI_MAX_ITERATIONS = 12;

	// BrnAStar.h:227
	extern int32_t miAStarPM;

	// BrnAStar.h:228
	extern int32_t miAStarExtractBestOpenNodePM;

	// BrnAStar.h:229
	extern int32_t miAStarFindNodePM;

private:
	// BrnAStar.h:236
	extern const float32_t KF_EUCLIDEAN_BIAS;

	// BrnAStar.h:237
	extern const int32_t[12] KAI_MAX_NODES_PER_ITERATION;

	// BrnAStar.h:238
	extern const float32_t[2] KAF_QUALITY_WEIGHTS;

	// BrnAStar.h:239
	extern const float32_t (*)(const Vector2Template<float> &, const Vector2Template<float> &)[5] KAP_DISTANCE_FUNCTIONS;

	// BrnAStar.h:280
	AStarNodePool mAStarNodePool;

	// BrnAStar.h:281
	Basic2dColouredVertex::Vector2 mStartPosition;

	// BrnAStar.h:282
	Basic2dColouredVertex::Vector2 mEndPosition;

	// BrnAStar.h:283
	float32_t (*)(const Vector2Template<float> &, const Vector2Template<float> &) mpDistanceFunction;

	// BrnAStar.h:284
	const AISectionsData * mpAISectionsData;

	// BrnAStar.h:285
	AStarNode * mpBestNode;

	// BrnAStar.h:286
	BrnAI::Route::Status meRouteStatus;

	// BrnAStar.h:287
	int32_t miIterationCount;

	// BrnAStar.h:288
	float32_t mfCostWeight;

	// BrnAStar.h:289
	AISection::AISectionId[16] maBlockSectionIds;

	// BrnAStar.h:290
	int32_t miBlockSectionCount;

	// BrnAStar.h:291
	uint16_t muStartSectionIndex;

	// BrnAStar.h:292
	uint16_t muEndSectionIndex;

	// BrnAStar.h:293
	bool mbUseAIShortcuts;

	// BrnAStar.h:294
	bool mbInProgress;

public:
	// BrnAStar.h:200
	void Construct(const AISectionsData *);

	// BrnAStar.h:210
	bool Prepare(const Vector2Template<float> &, const Vector2Template<float> &, uint16_t, uint16_t, BrnAI::AStarQuality, BrnAI::AStarDistanceFunction, bool);

	// BrnAStar.h:214
	void AddBlockSectionId(AISection::AISectionId);

	// BrnAStar.h:217
	void Compute();

	// BrnAStar.h:221
	void BuildRoute(Route *);

	// BrnAStar.h:224
	bool IsInProgress() const;

private:
	// BrnAStar.h:244
	void BuildRoute(AStarNode *, Route *);

	// BrnAStar.h:248
	bool IsBlockSection(AISection::AISectionId);

	// BrnAStar.h:253
	float32_t Distance(const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnAStar.h:258
	float32_t EuclideanDistance(const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnAStar.h:263
	float32_t EuclideanDistanceXBiased(const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnAStar.h:268
	float32_t EuclideanDistanceYBiased(const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnAStar.h:273
	float32_t ManhattanDistance(const Vector2Template<float> &, const Vector2Template<float> &);

	// BrnAStar.h:278
	float32_t DiagonalDistance(const Vector2Template<float> &, const Vector2Template<float> &);

}

// BrnAStar.h:139
extern const uint16_t KU_HASH_MASK = 3;

