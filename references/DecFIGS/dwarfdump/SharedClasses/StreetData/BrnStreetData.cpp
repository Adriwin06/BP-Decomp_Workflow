// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnStreetData.cpp:23
	extern const Road::SpanIndex KI_JUNCTION_START_INDEX = 15000;

	// BrnStreetData.cpp:24
	extern const Road::SpanIndex KI_INVALID_SPAN_INDEX = 4294967295;

	// BrnStreetData.cpp:25
	extern const SpanBase::RoadIndex KI_INVALID_ROAD_INDEX = 4294967295;

}

// BrnStreetData.cpp:54
void BrnStreetData::Road::Construct(const const Vector3Template<float> &  lReferencePosition, const char *  lpacDebugName, CgsID  lId, CgsID  lRoadLimitId0, CgsID  lRoadLimitId1, int32_t  liSpanCount, int32_t  liChallenge, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	MallocArray<BrnStreetData::SpanIndex>(/* parameters */);
}

// BrnStreetData.cpp:77
void BrnStreetData::Road::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:146
void BrnStreetData::SpanBase::Construct(SpanBase::RoadIndex  liRoadIndex, Road::SpanIndex  liSpanIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:180
void BrnStreetData::AIInfo::Construct(uint8_t  luMinSpeed, uint8_t  luMaxSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:187
void BrnStreetData::AIInfo::Construct(AIInfo *  lpAIInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:196
void BrnStreetData::AIInfo::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:201
void BrnStreetData::AIInfo::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:216
void BrnStreetData::Street::Construct(SpanBase::RoadIndex  liRoad, int32_t  liSpanIndex, AIInfo *  lpAIInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:268
void BrnStreetData::Junction::Construct(Road::SpanIndex  liSpanIndex, int32_t  liExitCount, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MallocArray<BrnStreetData::Junction::Exit>(/* parameters */);
}

// BrnStreetData.cpp:282
void BrnStreetData::Junction::GetExit(int32_t  liExitId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:291
void BrnStreetData::Junction::GetExit(float32_t  lrAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:295
		float32_t lrSmallestDifference;

		// BrnStreetData.cpp:296
		int32_t liSmallestDifferenceIndex;

		{
			// BrnStreetData.cpp:297
			int liIndex;

			{
				// BrnStreetData.cpp:300
				float32_t lrDifference;

				rw::math::fpu::Abs<float>(/* parameters */);
			}
		}
	}
}

// BrnStreetData.cpp:376
void BrnStreetData::StreetData::Construct(int32_t  liStreetCount, int32_t  liJunctionCount, int32_t  liRoadCount, LinearMalloc *  lpLinearMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	MallocArray<BrnStreetData::Street>(/* parameters */);
	MallocArray<BrnStreetData::Junction>(/* parameters */);
	MallocArray<BrnStreetData::Road>(/* parameters */);
	MallocArray<BrnStreetData::ChallengeParScoresEntry>(/* parameters */);
}

// BrnStreetData.cpp:110
void BrnStreetData::Road::FixUp(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:112
		int32_t liIndex;

	}
}

// BrnStreetData.cpp:157
void BrnStreetData::SpanBase::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:241
void BrnStreetData::Street::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:164
void BrnStreetData::SpanBase::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:249
void BrnStreetData::Street::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStreetData.cpp:342
void BrnStreetData::Junction::FixUp(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:346
		int32_t liIndex;

	}
}

// BrnStreetData.cpp:85
void BrnStreetData::Road::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:87
		int32_t liIndex;

	}
}

// BrnStreetData.cpp:320
void BrnStreetData::Junction::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:324
		int32_t liIndex;

	}
}

// BrnStreetData.cpp:403
void BrnStreetData::StreetData::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:405
		int32_t liIndex;

	}
	ChallengeData::FixDown(/* parameters */);
}

// BrnStreetData.cpp:455
void BrnStreetData::StreetData::FixUp(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStreetData.cpp:457
		int32_t liIndex;

	}
	{
		// BrnStreetData.cpp:462
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnStreetData.cpp:482
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	ChallengeData::FixUp(/* parameters */);
	CgsContainers::BitArray<2u>::SetAll(/* parameters */);
}

