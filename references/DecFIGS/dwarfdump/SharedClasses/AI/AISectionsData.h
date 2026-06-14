// BrnRoute.h:26
namespace BrnAI {
	// AISectionsData.h:87
	enum SectionSpeed {
		E_SECTION_SPEED_VERY_SLOW = 0,
		E_SECTION_SPEED_SLOW = 1,
		E_SECTION_SPEED_NORMAL = 2,
		E_SECTION_SPEED_FAST = 3,
		E_SECTION_SPEED_VERY_FAST = 4,
		E_SECTION_SPEED_COUNT = 5,
	}

	// AISectionsData.h:99
	enum EResetSpeedType {
		E_RESET_SPEED_TYPE_CUSTOM = 0,
		E_RESET_SPEED_TYPE_NONE = 1,
		E_RESET_SPEED_TYPE_SLOW = 2,
		E_RESET_SPEED_TYPE_FAST = 3,
		E_RESET_SPEED_TYPE_SLOW_NORTH_FACE = 4,
		E_RESET_SPEED_TYPE_SLOW_SOUTH_FACE = 5,
		E_RESET_SPEED_TYPE_SLOW_EAST_FACE = 6,
		E_RESET_SPEED_TYPE_SLOW_WEST_FACE = 7,
		E_RESET_SPEED_TYPE_SLOW_REVERSE = 8,
		E_RESET_SPEED_TYPE_STOP_REVERSE = 9,
		E_RESET_SPEED_TYPE_STOP_NORTH_FACE = 10,
		E_RESET_SPEED_TYPE_STOP_SOUTH_FACE = 11,
		E_RESET_SPEED_TYPE_STOP_EAST_FACE = 12,
		E_RESET_SPEED_TYPE_STOP_WEST_FACE = 13,
		E_RESET_SPEED_TYPE_STOP_NORTH_EAST_FACE = 14,
		E_RESET_SPEED_TYPE_STOP_SOUTH_WEST_FACE = 15,
		E_RESET_SPEED_TYPE_NONE_AND_IGNORE = 16,
		E_RESET_SPEED_TYPE_WEST_AND_IGNORE = 17,
		E_RESET_SPEED_TYPE_REVERSE_AND_IGNORE = 18,
		E_RESET_SPEED_TYPE_REVERSE_AND_IGNORE_SLOW = 19,
		E_RESET_SPEED_TYPE_COUNT = 20,
	}

	// AISectionsData.h:51
	const uint32_t KI_MAX_NUM_SECTIONS = 20000;

	// AISectionsData.h:52
	const uint32_t KI_MAX_PORTALS_PER_SECTION = 32;

	// AISectionsData.h:53
	const uint32_t KI_MAX_NO_GO_WALLS_PER_SECTION = 200;

	// AISectionsData.h:54
	const uint32_t KI_AI_SECTIONS_DATA_ALIGNMENT = 16;

	// AISectionsData.h:55
	const uint32_t KI_NUM_VERTS_IN_BOUNDARY_LINE = 2;

	// AISectionsData.h:56
	const int32_t KI_AI_SECTION_EDGES = 4;

	// AISectionsData.h:59
	const uint8_t KX_SECTION_FLAG_SHORTCUT = 1;

	// AISectionsData.h:60
	const uint8_t KX_SECTION_FLAG_NO_RESET = 2;

	// AISectionsData.h:61
	const uint8_t KX_SECTION_FLAG_IN_AIR = 4;

	// AISectionsData.h:62
	const uint8_t KX_SECTION_FLAG_SPLIT = 8;

	// AISectionsData.h:63
	const uint8_t KX_SECTION_FLAG_JUNCTION = 16;

	// AISectionsData.h:64
	const uint8_t KX_SECTION_FLAG_TERMINATOR = 32;

	// AISectionsData.h:65
	const uint8_t KX_SECTION_FLAG_AI_SHORTCUT = 64;

	// AISectionsData.h:66
	const uint8_t KX_SECTION_FLAG_AI_INTERSTATE_EXIT = 128;

	// AISectionsData.h:70
	const uint32_t KU_AI_SECTIONS_DATA_VERSION = 12;

	// AISectionsData.h:82
	const uint8_t KX_HARD_NO_GO_ORIGIN_NOT_SET;

	// AISectionsData.h:83
	const uint8_t KX_HARD_NO_GO_ORIGIN_DRIVABLE_SURFACE = 1;

	// AISectionsData.h:84
	const uint8_t KX_HARD_NO_GO_ORIGIN_VERTICAL_DRIVING_COLLISION = 2;

	// AISectionsData.h:85
	const uint8_t KX_HARD_NO_GO_ORIGIN_CLIPPING_DRIVABLE_SURFACE = 4;

}

// AISectionsData.h:142
struct BrnAI::BoundaryLine {
private:
	// AISectionsData.h:211
	Vector4 mVerts;

public:
	// AISectionsData.h:148
	void FixDown();

	// AISectionsData.h:151
	void FixUp();

	// AISectionsData.h:155
	float32_t GetX(uint8_t) const;

	// AISectionsData.h:159
	float32_t GetY(uint8_t) const;

	// AISectionsData.h:164
	void GetVert(uint8_t, Vector2 &) const;

	// AISectionsData.h:168
	Vector2 GetStartPos() const;

	// AISectionsData.h:171
	Vector2 GetEndPos() const;

	// AISectionsData.h:178
	void SetVerts(Vector2, Vector2);

	// AISectionsData.h:181
	float32_t GetLength() const;

	// AISectionsData.h:184
	Vector2 GetInterp(float32_t) const;

	// AISectionsData.h:187
	Vector2 GetDirection() const;

}

// AISectionsData.h:227
struct BrnAI::Portal {
private:
	// AISectionsData.h:276
	float32_t mPositionX;

	// AISectionsData.h:277
	float32_t mPositionY;

	// AISectionsData.h:278
	float32_t mPositionZ;

	// AISectionsData.h:280
	BoundaryLine * mpaBoundaryLines;

	// AISectionsData.h:282
	uint16_t mu16LinkSection;

	// AISectionsData.h:284
	uint8_t mu8NumBoundaryLines;

	// AISectionsData.h:285
	uint8_t[1] mau8Pad;

public:
	// AISectionsData.h:236
	void FixDown(MemoryResource);

	// AISectionsData.h:240
	void FixUp(const Resource &);

	// AISectionsData.h:243
	const uint8_t GetNumBoundryLines() const;

	// AISectionsData.h:247
	const BoundaryLine * GetBoundaryLine(uint8_t) const;

	// AISectionsData.h:250
	Vector3 GetPosition() const;

	// AISectionsData.h:253
	Vector2 GetPosition2D() const;

	// AISectionsData.h:256
	float32_t GetPositionX() const;

	// AISectionsData.h:259
	float32_t GetPositionY() const;

	// AISectionsData.h:262
	float32_t GetPositionZ() const;

	// AISectionsData.h:266
	void SetPosition(Vector3);

	// AISectionsData.h:270
	void SetNumBoundaryLines(uint8_t);

	// AISectionsData.h:273
	const uint16_t GetLinkSectionIndex() const;

}

// AISectionsData.h:339
struct BrnAI::AISection {
	// AISectionsData.h:462
	Portal * mpaPortals;

	// AISectionsData.h:463
	BoundaryLine * mpaNoGoLines;

	// AISectionsData.h:464
	Basic2dColouredVertex::Vector2 * mpaCorners;

	// AISectionsData.h:130
	typedef uint32_t AISectionId;

	// AISectionsData.h:465
	AISection::AISectionId mId;

	// AISectionsData.h:467
	Road::SpanIndex miSpanIndex;

	// AISectionsData.h:468
	uint16_t muNumNoGoLines;

	// AISectionsData.h:470
	uint8_t mu8NumPortals;

	// AISectionsData.h:471
	uint8_t muSpeed;

	// AISectionsData.h:472
	uint8_t mu8eDistrict;

	// AISectionsData.h:473
	uint8_t mx8Flags;

public:
	// AISectionsData.h:343
	Vector3 GetMiddle() const;

	// AISectionsData.h:347
	void FixDown(MemoryResource);

	// AISectionsData.h:351
	void FixUp(const Resource &);

	// AISectionsData.h:355
	const Portal * GetPortal(uint8_t) const;

	// AISectionsData.h:358
	uint8_t GetPortalCount() const;

	// AISectionsData.h:362
	const BoundaryLine * GetHNGLine(uint16_t) const;

	// AISectionsData.h:365
	int32_t GetHNGLineCount() const;

	// AISectionsData.h:368
	BrnAI::SectionSpeed GetSectionSpeed() const;

	// AISectionsData.h:371
	bool IsUnsuitableForRoadSigns() const;

	// AISectionsData.h:374
	bool IsUnsuitableForResetOnTrackLink() const;

	// AISectionsData.h:377
	bool IsShortcut() const;

	// AISectionsData.h:380
	bool IsAIShortcut() const;

	// AISectionsData.h:383
	bool IsNoReset() const;

	// AISectionsData.h:386
	bool IsInAir() const;

	// AISectionsData.h:389
	bool IsSplit() const;

	// AISectionsData.h:392
	bool IsTerminator() const;

	// AISectionsData.h:395
	bool IsInterstateExit() const;

	// AISectionsData.h:398
	bool IsJunction() const;

	// AISectionsData.h:401
	Road::SpanIndex GetSpanIndex() const;

	// AISectionsData.h:404
	AISection::AISectionId GetId() const;

	// AISectionsData.h:409
	bool IsInside(float32_t, float32_t) const;

	// AISectionsData.h:414
	bool PassesThrough(Vector2, Vector2) const;

	// AISectionsData.h:448
	BoundaryLine GetEdgeLine(uint16_t) const;

	// AISectionsData.h:452
	Vector2 GetCorner(int32_t) const;

	// AISectionsData.h:456
	float32_t GetCornerX(int32_t) const;

	// AISectionsData.h:460
	float32_t GetCornerZ(int32_t) const;

}

// AISectionsData.h:488
struct BrnAI::SectionResetPair {
private:
	// AISectionsData.h:533
	uint32_t meResetSpeed;

	// AISectionsData.h:534
	uint16_t muStartSectionIndex;

	// AISectionsData.h:535
	uint16_t muResetSectionIndex;

public:
	// AISectionsData.h:495
	void Construct(uint16_t, uint16_t, uint32_t);

	// AISectionsData.h:498
	void FixDown();

	// AISectionsData.h:501
	void FixUp();

	// AISectionsData.h:504
	uint16_t GetStartSectionIndex() const;

	// AISectionsData.h:507
	uint16_t GetResetSectionIndex() const;

	// AISectionsData.h:510
	BrnAI::EResetSpeedType GetResetSpeed() const;

	// AISectionsData.h:513
	bool IgnoreForSubsequentPairs() const;

}

// AISectionsData.h:540
struct BrnAI::AISectionPointMap {
	// AISectionsData.h:543
	int32_t miGridWidth;

	// AISectionsData.h:544
	int32_t miGridHeight;

	// AISectionsData.h:545
	Vector2 mvGridUnitSize;

	// AISectionsData.h:546
	Vector2 mvGridMin;

	// AISectionsData.h:549
	Vector3 * mpPoints;

	// AISectionsData.h:550
	uint16_t * mpuSections;

	// AISectionsData.h:551
	uint16_t * mpuGridUnitMap;

	// AISectionsData.h:553
	uint16_t * mpuGridUnitPointIndices;

	// AISectionsData.h:554
	uint16_t * mpuGridUnitPointCount;

}

// AISectionsData.h:568
struct BrnAI::AISectionsData {
	// AISectionsData.h:637
	AISection * mpaSections;

	// AISectionsData.h:638
	SectionResetPair * mpaSectionResetPairs;

	// AISectionsData.h:640
	float32_t[5] mafSectionMinSpeeds;

	// AISectionsData.h:641
	float32_t[5] mafSectionMaxSpeeds;

	// AISectionsData.h:643
	uint32_t muNumSections;

	// AISectionsData.h:644
	uint32_t muNumSectionResetPairs;

	// AISectionsData.h:646
	uint32_t muVersion;

private:
	// AISectionsData.h:650
	uint32_t muSizeInBytes;

public:
	// AISectionsData.h:575
	void Construct(uint32_t, uint32_t, uint32_t);

	// AISectionsData.h:579
	void FixUp(const Resource &);

	// AISectionsData.h:583
	void FixDown(const Resource &);

	// AISectionsData.h:587
	void FixDown(MemoryResource);

	// AISectionsData.h:590
	uint32_t GetSizeInBytes() const;

	// AISectionsData.h:594
	const AISection * GetAISection(uint32_t) const;

	// AISectionsData.h:597
	uint16_t GetAISectionCount() const;

	// AISectionsData.h:601
	const SectionResetPair * GetSectionResetPair(uint32_t) const;

	// AISectionsData.h:604
	uint16_t GetSectionResetPairCount() const;

	// AISectionsData.h:609
	const Portal * GetPortal(uint16_t, uint8_t) const;

	// AISectionsData.h:613
	Vector3 GetMiddle(uint16_t) const;

	// AISectionsData.h:617
	uint16_t FindNearestAISection(Vector3) const;

	// AISectionsData.h:623
	uint16_t FindNearestAISection(Vector3, AISectionPointMap *) const;

	// AISectionsData.h:626
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const;

	// AISectionsData.h:631
	float32_t GetMinSectionSpeed(BrnAI::SectionSpeed) const;

	// AISectionsData.h:635
	float32_t GetMaxSectionSpeed(BrnAI::SectionSpeed) const;

}

// BrnRoute.h:26
namespace BrnAI {
	// AISectionsData.h:87
	enum SectionSpeed {
		E_SECTION_SPEED_VERY_SLOW = 0,
		E_SECTION_SPEED_SLOW = 1,
		E_SECTION_SPEED_NORMAL = 2,
		E_SECTION_SPEED_FAST = 3,
		E_SECTION_SPEED_VERY_FAST = 4,
		E_SECTION_SPEED_COUNT = 5,
	}

	// AISectionsData.h:51
	const uint32_t KI_MAX_NUM_SECTIONS = 20000;

	// AISectionsData.h:52
	const uint32_t KI_MAX_PORTALS_PER_SECTION = 32;

	// AISectionsData.h:53
	const uint32_t KI_MAX_NO_GO_WALLS_PER_SECTION = 200;

	// AISectionsData.h:54
	const uint32_t KI_AI_SECTIONS_DATA_ALIGNMENT = 16;

	// AISectionsData.h:55
	const uint32_t KI_NUM_VERTS_IN_BOUNDARY_LINE = 2;

	// AISectionsData.h:56
	const int32_t KI_AI_SECTION_EDGES = 4;

	// AISectionsData.h:59
	const uint8_t KX_SECTION_FLAG_SHORTCUT = 1;

	// AISectionsData.h:60
	const uint8_t KX_SECTION_FLAG_NO_RESET = 2;

	// AISectionsData.h:61
	const uint8_t KX_SECTION_FLAG_IN_AIR = 4;

	// AISectionsData.h:62
	const uint8_t KX_SECTION_FLAG_SPLIT = 8;

	// AISectionsData.h:63
	const uint8_t KX_SECTION_FLAG_JUNCTION = 16;

	// AISectionsData.h:64
	const uint8_t KX_SECTION_FLAG_TERMINATOR = 32;

	// AISectionsData.h:65
	const uint8_t KX_SECTION_FLAG_AI_SHORTCUT = 64;

	// AISectionsData.h:66
	const uint8_t KX_SECTION_FLAG_AI_INTERSTATE_EXIT = 128;

	// AISectionsData.h:70
	const uint32_t KU_AI_SECTIONS_DATA_VERSION = 12;

	// AISectionsData.h:82
	const uint8_t KX_HARD_NO_GO_ORIGIN_NOT_SET;

	// AISectionsData.h:83
	const uint8_t KX_HARD_NO_GO_ORIGIN_DRIVABLE_SURFACE = 1;

	// AISectionsData.h:84
	const uint8_t KX_HARD_NO_GO_ORIGIN_VERTICAL_DRIVING_COLLISION = 2;

	// AISectionsData.h:85
	const uint8_t KX_HARD_NO_GO_ORIGIN_CLIPPING_DRIVABLE_SURFACE = 4;

}

// AISectionsData.h:339
struct BrnAI::AISection {
	// AISectionsData.h:462
	Portal * mpaPortals;

	// AISectionsData.h:463
	BoundaryLine * mpaNoGoLines;

	// AISectionsData.h:464
	FontChar::Vector2 * mpaCorners;

	// AISectionsData.h:130
	typedef uint32_t AISectionId;

	// AISectionsData.h:465
	AISection::AISectionId mId;

	// AISectionsData.h:467
	Road::SpanIndex miSpanIndex;

	// AISectionsData.h:468
	uint16_t muNumNoGoLines;

	// AISectionsData.h:470
	uint8_t mu8NumPortals;

	// AISectionsData.h:471
	uint8_t muSpeed;

	// AISectionsData.h:472
	uint8_t mu8eDistrict;

	// AISectionsData.h:473
	uint8_t mx8Flags;

public:
	// AISectionsData.h:343
	Vector3 GetMiddle() const;

	// AISectionsData.h:347
	void FixDown(MemoryResource);

	// AISectionsData.h:351
	void FixUp(const Resource &);

	// AISectionsData.h:355
	const Portal * GetPortal(uint8_t) const;

	// AISectionsData.h:358
	uint8_t GetPortalCount() const;

	// AISectionsData.h:362
	const BoundaryLine * GetHNGLine(uint16_t) const;

	// AISectionsData.h:365
	int32_t GetHNGLineCount() const;

	// AISectionsData.h:368
	BrnAI::SectionSpeed GetSectionSpeed() const;

	// AISectionsData.h:371
	bool IsUnsuitableForRoadSigns() const;

	// AISectionsData.h:374
	bool IsUnsuitableForResetOnTrackLink() const;

	// AISectionsData.h:377
	bool IsShortcut() const;

	// AISectionsData.h:380
	bool IsAIShortcut() const;

	// AISectionsData.h:383
	bool IsNoReset() const;

	// AISectionsData.h:386
	bool IsInAir() const;

	// AISectionsData.h:389
	bool IsSplit() const;

	// AISectionsData.h:392
	bool IsTerminator() const;

	// AISectionsData.h:395
	bool IsInterstateExit() const;

	// AISectionsData.h:398
	bool IsJunction() const;

	// AISectionsData.h:401
	Road::SpanIndex GetSpanIndex() const;

	// AISectionsData.h:404
	AISection::AISectionId GetId() const;

	// AISectionsData.h:409
	bool IsInside(float32_t, float32_t) const;

	// AISectionsData.h:414
	bool PassesThrough(Vector2, Vector2) const;

	// AISectionsData.h:448
	BoundaryLine GetEdgeLine(uint16_t) const;

	// AISectionsData.h:452
	Vector2 GetCorner(int32_t) const;

	// AISectionsData.h:456
	float32_t GetCornerX(int32_t) const;

	// AISectionsData.h:460
	float32_t GetCornerZ(int32_t) const;

}

// AISectionsData.h:339
struct BrnAI::AISection {
	// AISectionsData.h:462
	Portal * mpaPortals;

	// AISectionsData.h:463
	BoundaryLine * mpaNoGoLines;

	// AISectionsData.h:464
	SmoothStep::Vector2 * mpaCorners;

	// AISectionsData.h:130
	typedef uint32_t AISectionId;

	// AISectionsData.h:465
	AISection::AISectionId mId;

	// AISectionsData.h:467
	Road::SpanIndex miSpanIndex;

	// AISectionsData.h:468
	uint16_t muNumNoGoLines;

	// AISectionsData.h:470
	uint8_t mu8NumPortals;

	// AISectionsData.h:471
	uint8_t muSpeed;

	// AISectionsData.h:472
	uint8_t mu8eDistrict;

	// AISectionsData.h:473
	uint8_t mx8Flags;

public:
	// AISectionsData.h:343
	Vector3 GetMiddle() const;

	// AISectionsData.h:347
	void FixDown(MemoryResource);

	// AISectionsData.h:351
	void FixUp(const Resource &);

	// AISectionsData.h:355
	const Portal * GetPortal(uint8_t) const;

	// AISectionsData.h:358
	uint8_t GetPortalCount() const;

	// AISectionsData.h:362
	const BoundaryLine * GetHNGLine(uint16_t) const;

	// AISectionsData.h:365
	int32_t GetHNGLineCount() const;

	// AISectionsData.h:368
	BrnAI::SectionSpeed GetSectionSpeed() const;

	// AISectionsData.h:371
	bool IsUnsuitableForRoadSigns() const;

	// AISectionsData.h:374
	bool IsUnsuitableForResetOnTrackLink() const;

	// AISectionsData.h:377
	bool IsShortcut() const;

	// AISectionsData.h:380
	bool IsAIShortcut() const;

	// AISectionsData.h:383
	bool IsNoReset() const;

	// AISectionsData.h:386
	bool IsInAir() const;

	// AISectionsData.h:389
	bool IsSplit() const;

	// AISectionsData.h:392
	bool IsTerminator() const;

	// AISectionsData.h:395
	bool IsInterstateExit() const;

	// AISectionsData.h:398
	bool IsJunction() const;

	// AISectionsData.h:401
	Road::SpanIndex GetSpanIndex() const;

	// AISectionsData.h:404
	AISection::AISectionId GetId() const;

	// AISectionsData.h:409
	bool IsInside(float32_t, float32_t) const;

	// AISectionsData.h:414
	bool PassesThrough(Vector2, Vector2) const;

	// AISectionsData.h:448
	BoundaryLine GetEdgeLine(uint16_t) const;

	// AISectionsData.h:452
	Vector2 GetCorner(int32_t) const;

	// AISectionsData.h:456
	float32_t GetCornerX(int32_t) const;

	// AISectionsData.h:460
	float32_t GetCornerZ(int32_t) const;

}

// AISectionsData.h:339
struct BrnAI::AISection {
	// AISectionsData.h:462
	Portal * mpaPortals;

	// AISectionsData.h:463
	BoundaryLine * mpaNoGoLines;

	// vector2.h:123
	typedef Vector2Template<float> Vector2;

	// AISectionsData.h:464
	AISection::Vector2 * mpaCorners;

	// AISectionsData.h:130
	typedef uint32_t AISectionId;

	// AISectionsData.h:465
	AISection::AISectionId mId;

	// AISectionsData.h:467
	Road::SpanIndex miSpanIndex;

	// AISectionsData.h:468
	uint16_t muNumNoGoLines;

	// AISectionsData.h:470
	uint8_t mu8NumPortals;

	// AISectionsData.h:471
	uint8_t muSpeed;

	// AISectionsData.h:472
	uint8_t mu8eDistrict;

	// AISectionsData.h:473
	uint8_t mx8Flags;

public:
	// AISectionsData.h:343
	Vector3 GetMiddle() const;

	// AISectionsData.h:347
	void FixDown(MemoryResource);

	// AISectionsData.h:351
	void FixUp(const Resource &);

	// AISectionsData.h:355
	const Portal * GetPortal(uint8_t) const;

	// AISectionsData.h:358
	uint8_t GetPortalCount() const;

	// AISectionsData.h:362
	const BoundaryLine * GetHNGLine(uint16_t) const;

	// AISectionsData.h:365
	int32_t GetHNGLineCount() const;

	// AISectionsData.h:368
	BrnAI::SectionSpeed GetSectionSpeed() const;

	// AISectionsData.h:371
	bool IsUnsuitableForRoadSigns() const;

	// AISectionsData.h:374
	bool IsUnsuitableForResetOnTrackLink() const;

	// AISectionsData.h:377
	bool IsShortcut() const;

	// AISectionsData.h:380
	bool IsAIShortcut() const;

	// AISectionsData.h:383
	bool IsNoReset() const;

	// AISectionsData.h:386
	bool IsInAir() const;

	// AISectionsData.h:389
	bool IsSplit() const;

	// AISectionsData.h:392
	bool IsTerminator() const;

	// AISectionsData.h:395
	bool IsInterstateExit() const;

	// AISectionsData.h:398
	bool IsJunction() const;

	// AISectionsData.h:401
	Road::SpanIndex GetSpanIndex() const;

	// AISectionsData.h:404
	AISection::AISectionId GetId() const;

	// AISectionsData.h:409
	bool IsInside(float32_t, float32_t) const;

	// AISectionsData.h:414
	bool PassesThrough(Vector2, Vector2) const;

	// AISectionsData.h:448
	BoundaryLine GetEdgeLine(uint16_t) const;

	// AISectionsData.h:452
	Vector2 GetCorner(int32_t) const;

	// AISectionsData.h:456
	float32_t GetCornerX(int32_t) const;

	// AISectionsData.h:460
	float32_t GetCornerZ(int32_t) const;

}

// BrnRoute.h:26
namespace BrnAI {
	// AISectionsData.h:51
	const uint32_t KI_MAX_NUM_SECTIONS = 20000;

	// AISectionsData.h:52
	const uint32_t KI_MAX_PORTALS_PER_SECTION = 32;

	// AISectionsData.h:53
	const uint32_t KI_MAX_NO_GO_WALLS_PER_SECTION = 200;

	// AISectionsData.h:54
	const uint32_t KI_AI_SECTIONS_DATA_ALIGNMENT = 16;

	// AISectionsData.h:55
	const uint32_t KI_NUM_VERTS_IN_BOUNDARY_LINE = 2;

	// AISectionsData.h:56
	const int32_t KI_AI_SECTION_EDGES = 4;

	// AISectionsData.h:59
	const uint8_t KX_SECTION_FLAG_SHORTCUT = 1;

	// AISectionsData.h:60
	const uint8_t KX_SECTION_FLAG_NO_RESET = 2;

	// AISectionsData.h:61
	const uint8_t KX_SECTION_FLAG_IN_AIR = 4;

	// AISectionsData.h:62
	const uint8_t KX_SECTION_FLAG_SPLIT = 8;

	// AISectionsData.h:63
	const uint8_t KX_SECTION_FLAG_JUNCTION = 16;

	// AISectionsData.h:64
	const uint8_t KX_SECTION_FLAG_TERMINATOR = 32;

	// AISectionsData.h:65
	const uint8_t KX_SECTION_FLAG_AI_SHORTCUT = 64;

	// AISectionsData.h:66
	const uint8_t KX_SECTION_FLAG_AI_INTERSTATE_EXIT = 128;

	// AISectionsData.h:70
	const uint32_t KU_AI_SECTIONS_DATA_VERSION = 12;

	// AISectionsData.h:82
	const uint8_t KX_HARD_NO_GO_ORIGIN_NOT_SET;

	// AISectionsData.h:83
	const uint8_t KX_HARD_NO_GO_ORIGIN_DRIVABLE_SURFACE = 1;

	// AISectionsData.h:84
	const uint8_t KX_HARD_NO_GO_ORIGIN_VERTICAL_DRIVING_COLLISION = 2;

	// AISectionsData.h:85
	const uint8_t KX_HARD_NO_GO_ORIGIN_CLIPPING_DRIVABLE_SURFACE = 4;

}

// AISectionsData.h:47
namespace BrnAI {
	// AISectionsData.h:87
	enum SectionSpeed {
		E_SECTION_SPEED_VERY_SLOW = 0,
		E_SECTION_SPEED_SLOW = 1,
		E_SECTION_SPEED_NORMAL = 2,
		E_SECTION_SPEED_FAST = 3,
		E_SECTION_SPEED_VERY_FAST = 4,
		E_SECTION_SPEED_COUNT = 5,
	}

	// AISectionsData.h:99
	enum EResetSpeedType {
		E_RESET_SPEED_TYPE_CUSTOM = 0,
		E_RESET_SPEED_TYPE_NONE = 1,
		E_RESET_SPEED_TYPE_SLOW = 2,
		E_RESET_SPEED_TYPE_FAST = 3,
		E_RESET_SPEED_TYPE_SLOW_NORTH_FACE = 4,
		E_RESET_SPEED_TYPE_SLOW_SOUTH_FACE = 5,
		E_RESET_SPEED_TYPE_SLOW_EAST_FACE = 6,
		E_RESET_SPEED_TYPE_SLOW_WEST_FACE = 7,
		E_RESET_SPEED_TYPE_SLOW_REVERSE = 8,
		E_RESET_SPEED_TYPE_STOP_REVERSE = 9,
		E_RESET_SPEED_TYPE_STOP_NORTH_FACE = 10,
		E_RESET_SPEED_TYPE_STOP_SOUTH_FACE = 11,
		E_RESET_SPEED_TYPE_STOP_EAST_FACE = 12,
		E_RESET_SPEED_TYPE_STOP_WEST_FACE = 13,
		E_RESET_SPEED_TYPE_STOP_NORTH_EAST_FACE = 14,
		E_RESET_SPEED_TYPE_STOP_SOUTH_WEST_FACE = 15,
		E_RESET_SPEED_TYPE_NONE_AND_IGNORE = 16,
		E_RESET_SPEED_TYPE_WEST_AND_IGNORE = 17,
		E_RESET_SPEED_TYPE_REVERSE_AND_IGNORE = 18,
		E_RESET_SPEED_TYPE_REVERSE_AND_IGNORE_SLOW = 19,
		E_RESET_SPEED_TYPE_COUNT = 20,
	}

	struct BoundaryLine;

	struct Portal;

	struct BoundingBox;

	struct DrivingCollisionTriangle;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

	struct AISectionsResourceType;

	// AISectionsData.h:51
	const uint32_t KI_MAX_NUM_SECTIONS = 20000;

	// AISectionsData.h:52
	const uint32_t KI_MAX_PORTALS_PER_SECTION = 32;

	// AISectionsData.h:53
	const uint32_t KI_MAX_NO_GO_WALLS_PER_SECTION = 200;

	// AISectionsData.h:54
	const uint32_t KI_AI_SECTIONS_DATA_ALIGNMENT = 16;

	// AISectionsData.h:55
	const uint32_t KI_NUM_VERTS_IN_BOUNDARY_LINE = 2;

	// AISectionsData.h:56
	const int32_t KI_AI_SECTION_EDGES = 4;

	// AISectionsData.h:59
	const uint8_t KX_SECTION_FLAG_SHORTCUT = 1;

	// AISectionsData.h:60
	const uint8_t KX_SECTION_FLAG_NO_RESET = 2;

	// AISectionsData.h:61
	const uint8_t KX_SECTION_FLAG_IN_AIR = 4;

	// AISectionsData.h:62
	const uint8_t KX_SECTION_FLAG_SPLIT = 8;

	// AISectionsData.h:63
	const uint8_t KX_SECTION_FLAG_JUNCTION = 16;

	// AISectionsData.h:64
	const uint8_t KX_SECTION_FLAG_TERMINATOR = 32;

	// AISectionsData.h:65
	const uint8_t KX_SECTION_FLAG_AI_SHORTCUT = 64;

	// AISectionsData.h:66
	const uint8_t KX_SECTION_FLAG_AI_INTERSTATE_EXIT = 128;

	// AISectionsData.h:70
	const uint32_t KU_AI_SECTIONS_DATA_VERSION = 12;

	// AISectionsData.h:82
	const uint8_t KX_HARD_NO_GO_ORIGIN_NOT_SET;

	// AISectionsData.h:83
	const uint8_t KX_HARD_NO_GO_ORIGIN_DRIVABLE_SURFACE = 1;

	// AISectionsData.h:84
	const uint8_t KX_HARD_NO_GO_ORIGIN_VERTICAL_DRIVING_COLLISION = 2;

	// AISectionsData.h:85
	const uint8_t KX_HARD_NO_GO_ORIGIN_CLIPPING_DRIVABLE_SURFACE = 4;

}

// AISectionsData.h:299
struct BrnAI::BoundingBox {
	// AISectionsData.h:307
	Vector3[8] maCorners;

public:
	// AISectionsData.h:302
	void FixDown();

	// AISectionsData.h:305
	void FixUp();

}

// AISectionsData.h:319
struct BrnAI::DrivingCollisionTriangle {
	// AISectionsData.h:327
	Vector3[3] maVerts;

public:
	// AISectionsData.h:322
	void FixDown();

	// AISectionsData.h:325
	void FixUp();

}

// AISectionsData.h:568
struct BrnAI::AISectionsData {
	// AISectionsData.h:637
	AISection * mpaSections;

	// AISectionsData.h:638
	SectionResetPair * mpaSectionResetPairs;

	// AISectionsData.h:640
	float32_t[5] mafSectionMinSpeeds;

	// AISectionsData.h:641
	float32_t[5] mafSectionMaxSpeeds;

	// AISectionsData.h:643
	uint32_t muNumSections;

	// AISectionsData.h:644
	uint32_t muNumSectionResetPairs;

	// AISectionsData.h:646
	uint32_t muVersion;

private:
	// AISectionsData.h:650
	uint32_t muSizeInBytes;

public:
	// AISectionsData.h:575
	void Construct(uint32_t, uint32_t, uint32_t);

	// AISectionsData.h:579
	void FixUp(const Resource &);

	// AISectionsData.h:583
	void FixDown(const Resource &);

	// AISectionsData.h:587
	void FixDown(MemoryResource);

	// AISectionsData.h:590
	uint32_t GetSizeInBytes() const;

	// AISectionsData.h:594
	const AISection * GetAISection(uint32_t) const;

	// AISectionsData.h:597
	uint16_t GetAISectionCount() const;

	// AISectionsData.h:601
	const SectionResetPair * GetSectionResetPair(uint32_t) const;

	// AISectionsData.h:604
	uint16_t GetSectionResetPairCount() const;

	// AISectionsData.h:609
	const Portal * GetPortal(uint16_t, uint8_t) const;

	// AISectionsData.h:613
	Vector3 GetMiddle(uint16_t) const;

	// AISectionsData.h:617
	uint16_t FindNearestAISection(Vector3) const;

	// AISectionsData.h:623
	// Declaration
	uint16_t FindNearestAISection(Vector3, AISectionPointMap *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// AISectionsData.cpp:622
		using namespace rw::math::vpu;

	}

	// AISectionsData.h:626
	// Declaration
	AISectionPointMap * BuildAISectionPointMap(LinearMalloc *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// AISectionsData.cpp:712
		using namespace rw::math::vpu;

	}

	// AISectionsData.h:631
	float32_t GetMinSectionSpeed(BrnAI::SectionSpeed) const;

	// AISectionsData.h:635
	float32_t GetMaxSectionSpeed(BrnAI::SectionSpeed) const;

}

