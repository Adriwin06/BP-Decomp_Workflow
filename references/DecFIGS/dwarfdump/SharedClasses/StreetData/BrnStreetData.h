// BrnChallengeData.h:27
namespace BrnStreetData {
	// Declaration
	struct SpanBase {
		// BrnStreetData.h:218
		enum ESpanType {
			STREET = 0,
			JUNCTION = 1,
			SPAN_TYPE_COUNT = 2,
		}

	}

	// BrnStreetData.h:42
	const int32_t KI_MAX_NAME = 16;

	// BrnStreetData.h:51
	const CgsID kCGSID_INTERSTATE_EXIT = 1744830464;

	// BrnStreetData.h:53
	const SpanBase::RoadIndex KI_INTERSTATE_EXIT_ROAD_INDEX = 4294967294;

}

// BrnStreetData.h:66
struct BrnStreetData::Road {
	// vector3.h:125
	typedef Vector3Template<float> Vector3;

private:
	// BrnStreetData.h:134
	Road::Vector3 mReferencePosition;

	// Unknown accessibility
	// BrnStreetData.h:33
	typedef int16_t SpanIndex;

	// BrnStreetData.h:135
	Road::SpanIndex * mpaSpans;

	// BrnStreetData.h:136
	CgsID mId;

	// BrnStreetData.h:137
	CgsID miRoadLimitId0;

	// BrnStreetData.h:138
	CgsID miRoadLimitId1;

	// BrnStreetData.h:139
	char[16] macDebugName;

	// Unknown accessibility
	// BrnChallengeData.h:34
	typedef int32_t ChallengeIndex;

	// BrnStreetData.h:140
	Road::ChallengeIndex mChallenge;

	// BrnStreetData.h:141
	int32_t miSpanCount;

public:
	// BrnStreetData.h:83
	void Construct(const Vector3Template<float> &, const char *, CgsID, CgsID, CgsID, int32_t, int32_t, LinearMalloc *);

	// BrnStreetData.h:87
	void Destruct();

	// BrnStreetData.h:92
	CgsID GetId() const;

	// BrnStreetData.h:95
	Road::Vector3 GetReferencePosition();

	// BrnStreetData.h:98
	CgsID GetRoadLimitId0() const;

	// BrnStreetData.h:101
	CgsID GetRoadLimitId1() const;

	// BrnStreetData.h:105
	const Road::SpanIndex GetSpanIndex(int32_t);

	// BrnStreetData.h:111
	void SetSpanIndex(int32_t, int32_t);

	// BrnStreetData.h:115
	const Road::ChallengeIndex GetChallengeIndex();

	// BrnStreetData.h:119
	const char * GetDebugName() const;

	// BrnStreetData.h:123
	int32_t GetSpanCount() const;

	// BrnStreetData.h:127
	void FixDown(MemoryResource);

	// BrnStreetData.h:131
	void FixUp(MemoryResource);

}

// BrnStreetData.h:212
struct BrnStreetData::SpanBase {
	// BrnStreetData.h:38
	typedef int32_t RoadIndex;

protected:
	// BrnStreetData.h:256
	SpanBase::RoadIndex miRoadIndex;

	// BrnStreetData.h:257
	Road::SpanIndex miSpanIndex;

	// BrnStreetData.h:258
	BrnStreetData::SpanBase::ESpanType meSpanType;

public:
	// BrnStreetData.h:231
	void Construct(SpanBase::RoadIndex, Road::SpanIndex);

	// BrnStreetData.h:237
	BrnStreetData::SpanBase::ESpanType GetSpanType() const;

	// BrnStreetData.h:241
	SpanBase::RoadIndex GetRoadIndex() const;

	// BrnStreetData.h:245
	Road::SpanIndex GetSpanIndex() const;

	// BrnStreetData.h:248
	void FixDown();

	// BrnStreetData.h:251
	void FixUp();

}

// BrnStreetData.h:46
extern const Road::SpanIndex KI_JUNCTION_START_INDEX;

// BrnStreetData.h:47
extern const Road::SpanIndex KI_INVALID_SPAN_INDEX;

// BrnStreetData.h:48
extern const SpanBase::RoadIndex KI_INVALID_ROAD_INDEX;

// BrnStreetData.h:66
struct BrnStreetData::Road {
private:
	// BrnStreetData.h:134
	SmoothStep::Vector3 mReferencePosition;

	// Unknown accessibility
	// BrnStreetData.h:33
	typedef int16_t SpanIndex;

	// BrnStreetData.h:135
	Road::SpanIndex * mpaSpans;

	// BrnStreetData.h:136
	CgsID mId;

	// BrnStreetData.h:137
	CgsID miRoadLimitId0;

	// BrnStreetData.h:138
	CgsID miRoadLimitId1;

	// BrnStreetData.h:139
	char[16] macDebugName;

	// Unknown accessibility
	// BrnChallengeData.h:34
	typedef int32_t ChallengeIndex;

	// BrnStreetData.h:140
	Road::ChallengeIndex mChallenge;

	// BrnStreetData.h:141
	int32_t miSpanCount;

public:
	// BrnStreetData.h:83
	void Construct(const Vector3Template<float> &, const char *, CgsID, CgsID, CgsID, int32_t, int32_t, LinearMalloc *);

	// BrnStreetData.h:87
	void Destruct();

	// BrnStreetData.h:92
	CgsID GetId() const;

	// BrnStreetData.h:95
	SmoothStep::Vector3 GetReferencePosition();

	// BrnStreetData.h:98
	CgsID GetRoadLimitId0() const;

	// BrnStreetData.h:101
	CgsID GetRoadLimitId1() const;

	// BrnStreetData.h:105
	const Road::SpanIndex GetSpanIndex(int32_t);

	// BrnStreetData.h:111
	void SetSpanIndex(int32_t, int32_t);

	// BrnStreetData.h:115
	const Road::ChallengeIndex GetChallengeIndex();

	// BrnStreetData.h:119
	const char * GetDebugName() const;

	// BrnStreetData.h:123
	int32_t GetSpanCount() const;

	// BrnStreetData.h:127
	void FixDown(MemoryResource);

	// BrnStreetData.h:131
	void FixUp(MemoryResource);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// Declaration
	struct SpanBase {
		// BrnStreetData.h:218
		enum ESpanType {
			STREET = 0,
			JUNCTION = 1,
			SPAN_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct Junction {
		// BrnStreetData.h:394
		struct Exit {
			// BrnStreetData.h:396
			Road::SpanIndex mSpan;

			// BrnStreetData.h:397
			float_t mrAngle;

		}

	}

	// BrnStreetData.h:42
	const int32_t KI_MAX_NAME = 16;

	// BrnStreetData.h:51
	const CgsID kCGSID_INTERSTATE_EXIT = 1744830464;

	// BrnStreetData.h:53
	const SpanBase::RoadIndex KI_INTERSTATE_EXIT_ROAD_INDEX = 4294967294;

}

// BrnStreetData.h:285
struct BrnStreetData::AIInfo {
private:
	// BrnStreetData.h:313
	uint8_t muMaxSpeedMPS;

	// BrnStreetData.h:314
	uint8_t muMinSpeedMPS;

public:
	// BrnStreetData.h:291
	void Construct(uint8_t, uint8_t);

	// BrnStreetData.h:295
	void Construct(AIInfo *);

	// BrnStreetData.h:299
	void Destruct();

	// BrnStreetData.h:304
	void GetSpeeds(uint8_t *, uint8_t *) const;

	// BrnStreetData.h:307
	void FixDown();

	// BrnStreetData.h:310
	void FixUp();

}

// BrnStreetData.h:336
struct BrnStreetData::Street : public SpanBase {
private:
	// BrnStreetData.h:363
	AIInfo mAIInfo;

public:
	// BrnStreetData.h:343
	void Construct(SpanBase::RoadIndex, int32_t, AIInfo *);

	// BrnStreetData.h:347
	void Destruct();

	// BrnStreetData.h:353
	const AIInfo * GetAIInfo() const;

	// BrnStreetData.h:356
	void FixDown();

	// BrnStreetData.h:359
	void FixUp();

}

// BrnStreetData.h:387
struct BrnStreetData::Junction : public SpanBase {
private:
	// BrnStreetData.h:442
	BrnStreetData::Junction::Exit * mpaExits;

	// BrnStreetData.h:443
	int32_t miExitCount;

	// BrnStreetData.h:444
	char[16] macName;

public:
	// BrnStreetData.h:407
	void Construct(Road::SpanIndex, int32_t, LinearMalloc *);

	// BrnStreetData.h:411
	void Destruct();

	// BrnStreetData.h:417
	const char * GetName();

	// BrnStreetData.h:423
	const BrnStreetData::Junction::Exit * GetExit(int32_t);

	// BrnStreetData.h:427
	const BrnStreetData::Junction::Exit * GetExit(float32_t);

	// BrnStreetData.h:431
	const int32_t GetExitCount();

	// BrnStreetData.h:435
	void FixDown(MemoryResource);

	// BrnStreetData.h:439
	void FixUp(MemoryResource);

}

// BrnStreetData.h:471
struct BrnStreetData::StreetData {
	// BrnStreetData.h:476
	extern const int32_t KI_VERSION = 5;

	// BrnStreetData.h:477
	extern const int32_t KI_ALIGNMENT = 16;

private:
	// BrnStreetData.h:590
	int32_t miVersion;

	// BrnStreetData.h:591
	int32_t miSize;

	// BrnStreetData.h:594
	Street * mpaStreets;

	// BrnStreetData.h:595
	Junction * mpaJunctions;

	// BrnStreetData.h:596
	Road * mpaRoads;

	// BrnStreetData.h:597
	ChallengeParScoresEntry * mpaChallengeParScores;

	// BrnStreetData.h:599
	int32_t miStreetCount;

	// BrnStreetData.h:600
	int32_t miJunctionCount;

	// BrnStreetData.h:601
	int32_t miRoadCount;

public:
	// BrnStreetData.h:487
	void Construct(int32_t, int32_t, int32_t, LinearMalloc *);

	// BrnStreetData.h:491
	void Destruct();

	// BrnStreetData.h:496
	void Update();

	// BrnStreetData.h:505
	int32_t GetRoadCount() const;

	// BrnStreetData.h:510
	const Road * GetRoad(SpanBase::RoadIndex) const;

	// BrnStreetData.h:518
	const Junction * GetJunction(Road::SpanIndex);

	// BrnStreetData.h:522
	const bool IsJunction(Road::SpanIndex);

	// BrnStreetData.h:529
	const Street * GetStreet(Road::SpanIndex);

	// BrnStreetData.h:533
	const bool IsStreet(Road::SpanIndex);

	// BrnStreetData.h:540
	const SpanBase * GetSpan(Road::SpanIndex);

	// BrnStreetData.h:550
	const ChallengeParScoresEntry * GetChallengeParScore(Road::ChallengeIndex) const;

	// BrnStreetData.h:553
	int32_t GetSize() const;

	// BrnStreetData.h:557
	void SetSize(int32_t);

	// BrnStreetData.h:561
	void FixDown(MemoryResource);

	// BrnStreetData.h:565
	void FixUp(MemoryResource);

	// Unknown accessibility
	// BrnStreetData.h:35
	typedef int16_t JunctionIndex;

private:
	// BrnStreetData.h:574
	const StreetData::JunctionIndex GetJunctionIndexFromSpanIndex(Road::SpanIndex);

	// Unknown accessibility
	// BrnStreetData.h:36
	typedef int16_t StreetIndex;

	// BrnStreetData.h:578
	const StreetData::StreetIndex GetStreetIndexFromSpanIndex(Road::SpanIndex);

	// BrnStreetData.h:582
	const Road::SpanIndex GetSpanIndexFromJunction(StreetData::JunctionIndex);

	// BrnStreetData.h:586
	const StreetData::StreetIndex GetSpanIndexFromStreet(StreetData::StreetIndex);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// Declaration
	struct SpanBase {
		// BrnStreetData.h:218
		enum ESpanType {
			STREET = 0,
			JUNCTION = 1,
			SPAN_TYPE_COUNT = 2,
		}

	}

	// Declaration
	struct Junction {
		// BrnStreetData.h:394
		struct Exit {
			// BrnStreetData.h:396
			Road::SpanIndex mSpan;

			// BrnStreetData.h:397
			float_t mrAngle;

		}

	}

	// BrnStreetData.h:42
	const int32_t KI_MAX_NAME = 16;

	// BrnStreetData.h:46
	extern const Road::SpanIndex KI_JUNCTION_START_INDEX;

	// BrnStreetData.h:47
	extern const Road::SpanIndex KI_INVALID_SPAN_INDEX;

	// BrnStreetData.h:48
	extern const SpanBase::RoadIndex KI_INVALID_ROAD_INDEX;

	// BrnStreetData.h:51
	const CgsID kCGSID_INTERSTATE_EXIT = 1744830464;

	// BrnStreetData.h:53
	const SpanBase::RoadIndex KI_INTERSTATE_EXIT_ROAD_INDEX = 4294967294;

}

// BrnStreetData.h:476
extern const int32_t KI_VERSION = 5;

// BrnChallengeData.h:27
namespace BrnStreetData {
	// Declaration
	struct SpanBase {
		// BrnStreetData.h:218
		enum ESpanType {
			STREET = 0,
			JUNCTION = 1,
			SPAN_TYPE_COUNT = 2,
		}

	}

	// BrnStreetData.h:42
	const int32_t KI_MAX_NAME = 16;

	// BrnStreetData.h:46
	extern const Road::SpanIndex KI_JUNCTION_START_INDEX;

	// BrnStreetData.h:47
	extern const Road::SpanIndex KI_INVALID_SPAN_INDEX;

	// BrnStreetData.h:48
	extern const SpanBase::RoadIndex KI_INVALID_ROAD_INDEX;

	// BrnStreetData.h:51
	const CgsID kCGSID_INTERSTATE_EXIT = 1744830464;

	// BrnStreetData.h:53
	const SpanBase::RoadIndex KI_INTERSTATE_EXIT_ROAD_INDEX = 4294967294;

}

// BrnStreetData.h:477
extern const int32_t KI_ALIGNMENT = 16;

