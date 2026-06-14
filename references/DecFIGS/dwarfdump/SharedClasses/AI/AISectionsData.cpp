// AISectionsData.cpp:388
void BrnAI::SectionResetPair::Construct(uint16_t  luStartSectionIndex, uint16_t  luRespawnSectionIndex, uint32_t  luResetSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:439
void BrnAI::AISectionsData::Construct(uint32_t  luSize, uint32_t  luNumSections, uint32_t  luNumResetPairs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:564
void BrnAI::AISectionsData::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:153
void BrnAI::BoundaryLine::GetDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:155
		Vector2 lVert1;

		// AISectionsData.cpp:156
		Vector2 lVert2;

		rw::math::vpu::Normalize(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		SetX<VectorAxisZ>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetY<VectorAxisW>(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		rw::math::vpu::Vector2::Set(/* parameters */);
	}
}

// AISectionsData.cpp:108
void BrnAI::BoundaryLine::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:111
		Vector2 lVert1;

		// AISectionsData.cpp:112
		Vector2 lVert2;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
		SetX<VectorAxisX>(/* parameters */);
		SetX<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		SetY<VectorAxisW>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
	}
}

// AISectionsData.cpp:136
void BrnAI::BoundaryLine::GetInterp(float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:138
		Vector2 lVert1;

		// AISectionsData.cpp:139
		Vector2 lVert2;

		SetX<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		SetX<VectorAxisZ>(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		SetY<VectorAxisW>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::Lerp(/* parameters */);
}

// AISectionsData.cpp:620
void BrnAI::AISectionsData::FindNearestAISection(const rw::math::vpu::Vector3  lPosition, AISectionPointMap *  lpMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:625
		VecFloat lvfGridMinDimension;

		// AISectionsData.cpp:626
		VecFloat lvfSphereRad;

		// AISectionsData.cpp:628
		uint16_t luGridWidth;

		// AISectionsData.cpp:629
		uint16_t luGridHeight;

		// AISectionsData.cpp:630
		VecFloat lvfGridMaxX;

		// AISectionsData.cpp:631
		VecFloat lvfGridMaxZ;

		rw::math::vpu::GetVecFloat_Half(/* parameters */);
	}
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// AISectionsData.cpp:637
		VecFloat lvfSphereRadSq;

		// AISectionsData.cpp:640
		VecFloat lvfMinX;

		// AISectionsData.cpp:641
		VecFloat lvfMinZ;

		// AISectionsData.cpp:642
		VecFloat lvfMaxX;

		// AISectionsData.cpp:643
		VecFloat lvfMaxZ;

		// AISectionsData.cpp:646
		VecFloat lvfMinGridX;

		// AISectionsData.cpp:647
		VecFloat lvfMinGridZ;

		// AISectionsData.cpp:648
		VecFloat lvfMaxGridX;

		// AISectionsData.cpp:649
		VecFloat lvfMaxGridZ;

		// AISectionsData.cpp:652
		uint16_t luGridMinX;

		// AISectionsData.cpp:653
		uint16_t luGridMinZ;

		// AISectionsData.cpp:654
		uint16_t luGridMaxX;

		// AISectionsData.cpp:655
		uint16_t luGridMaxZ;

		// AISectionsData.cpp:657
		uint16_t luSectionIndex;

		// AISectionsData.cpp:658
		VecFloat lvfSectionDist;

		// AISectionsData.cpp:661
		uint16_t luX;

		// AISectionsData.cpp:661
		uint16_t luZ;

		rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector2::GetX(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::Ceil(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
				{
				}
			}
		}
		{
			{
				{
				}
			}
		}
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		rw::math::vpu::Floor(/* parameters */);
		rw::math::vpu::Floor(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Ceil(/* parameters */);
		rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// AISectionsData.cpp:667
			uint16_t luGridIndex;

			// AISectionsData.cpp:670
			uint16_t luGridPointCount;

			// AISectionsData.cpp:671
			uint16_t * lpuGridIndex;

			// AISectionsData.cpp:674
			uint16_t luGridPoint;

			{
				// AISectionsData.cpp:678
				uint16_t luIndex;

				// AISectionsData.cpp:679
				VecFloat lvfDist;

			}
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::MagnitudeSquared(/* parameters */);
			rw::math::vpu::operator<(/* parameters */);
		}
		rw::math::vpu::operator+=(/* parameters */);
	}
}

// AISectionsData.cpp:59
void BrnAI::BoundaryLine::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:43
void BrnAI::BoundaryLine::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:271
void BrnAI::DrivingCollisionTriangle::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:273
		int32_t i;

	}
}

// AISectionsData.cpp:252
void BrnAI::DrivingCollisionTriangle::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:254
		int32_t i;

	}
}

// AISectionsData.cpp:234
void BrnAI::BoundingBox::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:236
		uint32_t luVertIndex;

	}
}

// AISectionsData.cpp:216
void BrnAI::BoundingBox::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:218
		uint32_t luVertIndex;

	}
}

// AISectionsData.cpp:404
void BrnAI::SectionResetPair::FixDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:420
void BrnAI::SectionResetPair::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// AISectionsData.cpp:186
void BrnAI::Portal::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:191
		uint8_t i;

	}
}

// AISectionsData.cpp:340
void BrnAI::AISection::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:345
		uint8_t i;

	}
	{
		// AISectionsData.cpp:357
		uint32_t i;

	}
}

// AISectionsData.cpp:521
void BrnAI::AISectionsData::FixDown(MemoryResource  lpBaseData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:525
		uint32_t i;

	}
	{
		// AISectionsData.cpp:536
		uint32_t i;

	}
}

// AISectionsData.cpp:505
void BrnAI::AISectionsData::FixDown(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:507
		MemoryResource lpBaseData;

	}
}

// AISectionsData.cpp:74
void BrnAI::Portal::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:76
		MemoryResource lpBaseData;

		rw::Resource::GetMemoryResource(/* parameters */);
		{
			// AISectionsData.cpp:84
			uint8_t i;

		}
	}
}

// AISectionsData.cpp:291
void BrnAI::AISection::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:293
		MemoryResource lpBaseData;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
	{
		// AISectionsData.cpp:304
		uint8_t i;

	}
	{
		// AISectionsData.cpp:316
		uint32_t i;

	}
}

// AISectionsData.cpp:457
void BrnAI::AISectionsData::FixUp(const const Resource &  lBaseResource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:459
		MemoryResource lpBaseData;

	}
	rw::Resource::GetMemoryResource(/* parameters */);
	{
		// AISectionsData.cpp:468
		uint32_t i;

	}
	{
		// AISectionsData.cpp:481
		uint32_t i;

	}
}

// AISectionsData.cpp:857
void BrnAI::AISection::IsInside(float32_t  lfPX, float32_t  lfPY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:860
		VecFloat lvPX;

		// AISectionsData.cpp:861
		VecFloat lvPY;

		// AISectionsData.cpp:863
		VecFloat lfAX;

		// AISectionsData.cpp:864
		VecFloat lfAY;

		{
			// AISectionsData.cpp:866
			int32_t liCornerIndex;

			{
				// AISectionsData.cpp:868
				VecFloat lfBX;

				// AISectionsData.cpp:869
				VecFloat lfBY;

				// AISectionsData.cpp:871
				VecFloat lfEdgeX;

				// AISectionsData.cpp:872
				VecFloat lfPointX;

				// AISectionsData.cpp:874
				VecFloat lfEdgeY;

				// AISectionsData.cpp:875
				VecFloat lfPointY;

			}
		}
	}
}

// AISectionsData.cpp:912
void BrnAI::AISection::PassesThrough(const rw::math::vpu::Vector2  lStartPos, const rw::math::vpu::Vector2  lEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:928
		VecFloat lfCX;

		// AISectionsData.cpp:929
		VecFloat lfCY;

		// AISectionsData.cpp:931
		VecFloat lfDX;

		// AISectionsData.cpp:932
		VecFloat lfDY;

		// AISectionsData.cpp:934
		VecFloat lfAX;

		// AISectionsData.cpp:935
		VecFloat lfAY;

		// AISectionsData.cpp:937
		VecFloat lfBX;

		// AISectionsData.cpp:938
		VecFloat lfBY;

		// AISectionsData.cpp:940
		VecFloat lfR;

		// AISectionsData.cpp:941
		VecFloat lfS;

		IsInside(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
			GetCornerX(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			GetCornerZ(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	{
		// AISectionsData.cpp:943
		int32_t liCornerIndex;

	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	IsInside(/* parameters */);
	{
		{
			GetCornerX(/* parameters */);
		}
	}
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	GetCornerZ(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// AISectionsData.cpp:948
		VecFloat lfDenominator;

		GetCornerX(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		GetCornerZ(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator/=(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/=(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

// AISectionsData.cpp:898
void BrnAI::AISection::GetMiddle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// AISectionsData.cpp:900
	Vector3 lMiddle;

	{
		// AISectionsData.cpp:900
		Vector3 lMiddle;

		rw::math::vpu::Vector3::SetX(/* parameters */);
	}
	GetCornerX(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	GetPortal(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	Portal::GetPositionY(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// AISectionsData.cpp:710
void BrnAI::AISectionsData::BuildAISectionPointMap(LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:716
		AISectionPointMap * lpMap;

		// AISectionsData.cpp:717
		Vector3 * lpPoints;

		// AISectionsData.cpp:718
		uint16_t * lpuSections;

		// AISectionsData.cpp:719
		uint16_t * lpuGridUnit;

		// AISectionsData.cpp:721
		uint16_t luNumSections;

		// AISectionsData.cpp:723
		Vector3 lvGridMin;

		// AISectionsData.cpp:724
		Vector3 lvGridMax;

		// AISectionsData.cpp:727
		uint16_t luAISectionIndex;

		// AISectionsData.cpp:746
		const int32_t KI_GRID_WIDTH;

		// AISectionsData.cpp:747
		const int32_t KI_GRID_HEIGHT;

		// AISectionsData.cpp:750
		uint16_t * lpuGridUnitPointCounts;

		// AISectionsData.cpp:751
		uint16_t * lpuGridUnitPointIndices;

		// AISectionsData.cpp:752
		uint16_t * lpuGridPointMap;

		// AISectionsData.cpp:757
		Vector3 lvGridSize;

		// AISectionsData.cpp:758
		Vector3 lvGridUnitCount;

		// AISectionsData.cpp:759
		Vector3 lvGridUnitSize;

		// AISectionsData.cpp:760
		Vector3 lvGridUnitInvSize;

		// AISectionsData.cpp:763
		uint16_t luSectionIndex;

		// AISectionsData.cpp:779
		uint16_t luGridUnit;

		// AISectionsData.cpp:780
		uint16_t luNextIndex;

	}
	Malloc<BrnAI::AISectionPointMap>(/* parameters */);
	MallocArray<rw::math::vpu::Vector3>(/* parameters */);
	MallocArray<uint16_t>(/* parameters */);
	MallocArray<uint16_t>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// AISectionsData.cpp:730
		const AISection * lpAISection;

		GetAISection(/* parameters */);
		AISection::IsShortcut(/* parameters */);
		rw::math::vpu::Max(/* parameters */);
		rw::math::vpu::Min(/* parameters */);
	}
	rw::math::vpl::VecGetOne(/* parameters */);
	rw::math::vpl::VecFloor(/* parameters */);
	MallocArray<uint16_t>(/* parameters */);
	rw::math::vpl::VecFloor(/* parameters */);
	rw::math::vpl::VecAdd(/* parameters */);
	MallocArray<uint16_t>(/* parameters */);
	MallocArray<uint16_t>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator/<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX, VectorAxisX>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator/<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
		// AISectionsData.cpp:796
		uint16_t luGridUnit;

		// AISectionsData.cpp:797
		uint16_t luFirstIndex;

		// AISectionsData.cpp:798
		uint16_t luCurrentCount;

	}
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	{
		// AISectionsData.cpp:820
		uint16_t luGridX;

		// AISectionsData.cpp:820
		uint16_t luGridZ;

	}
	{
		// AISectionsData.cpp:825
		Vector2 lGridIntCoords;

		// AISectionsData.cpp:826
		Vector2 lGridMin;

		// AISectionsData.cpp:827
		Vector2 lGridMax;

		// AISectionsData.cpp:828
		uint16_t luGridIndex;

		// AISectionsData.cpp:829
		uint16_t luPoint;

		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		{
			// AISectionsData.cpp:832
			Vector3 lPos;

			rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator>=<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator>=<VectorAxisZ, VectorAxisY>(/* parameters */);
			rw::math::vpu::operator<=<VectorAxisZ, VectorAxisY>(/* parameters */);
		}
	}
	{
		// AISectionsData.cpp:766
		Vector3 lvGridEntry;

		// AISectionsData.cpp:767
		int32_t liGridX;

		// AISectionsData.cpp:768
		int32_t liGridY;

		// AISectionsData.cpp:769
		int32_t liGridUnit;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
}

// AISectionsData.cpp:582
void BrnAI::AISectionsData::FindNearestAISection(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// AISectionsData.cpp:584
		uint16_t luAISectionIndex;

		// AISectionsData.cpp:585
		uint16_t luNearestAISectionIndex;

		// AISectionsData.cpp:586
		float32_t lfMinDistance;

	}
	{
		// AISectionsData.cpp:590
		const AISection * lpAISection;

		GetAISection(/* parameters */);
		AISection::IsShortcut(/* parameters */);
		{
			// AISectionsData.cpp:594
			float32_t lfNewDistance;

		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
}

