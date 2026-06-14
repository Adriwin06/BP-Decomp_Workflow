// BrnRoute.h:26
namespace BrnAI {
	// BrnRacingLineGenerator.cpp:1332
	extern bool IsInsideSectionFast(SectionData *, float32_t, float32_t);

	// BrnRacingLineGenerator.cpp:33
	const int32_t KI_MAX_HNG_LINES_TO_PLACE_PER_FRAME = 60;

	// BrnRacingLineGenerator.cpp:37
	const float32_t KF_APROX_CAR_WIDTH;

	// BrnRacingLineGenerator.cpp:42
	const float32_t K_UNKNOWN_ROAD_WIDTH;

	// BrnRacingLineGenerator.cpp:48
	const float32_t K_MAX_CURVE_VECTOR_LENGTH;

	// BrnRacingLineGenerator.cpp:49
	const float32_t KF_ITERATIVE_HERMITE_ERROR_REDUCTION;

	// BrnRacingLineGenerator.cpp:50
	const int32_t KI_ITERATIVE_HERMITE_ATTEMPTS = 5;

	// BrnRacingLineGenerator.cpp:53
	const float32_t KF_STEP_AHEAD_FOR_PERPENDICULAR;

	// BrnRacingLineGenerator.cpp:2859
	const int32_t KI_EARLY_SECTIONS;

}

// BrnRacingLineGenerator.cpp:3333
void BrnAI::RacingLineGenerator::RaceDefaultsLineToAutoCentre(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRacingLineGenerator.cpp:2050
void BrnAI::RacingLineGenerator::CacheUpToDate(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRacingLineGenerator.cpp:922
void BrnAI::RacingLineGenerator::FinishedSpreadingBack(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRacingLineGenerator.cpp:993
void BrnAI::RacingLineGenerator::HasSpreadHardNoGoLinesFinished(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:995
		int32_t liX;

	}
}

// BrnRacingLineGenerator.cpp:2069
void BrnAI::RacingLineGenerator::IsTargetUpToDate(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2076
		int32_t lCacheIndex;

	}
}

// BrnRacingLineGenerator.cpp:2024
void BrnAI::RacingLineGenerator::GetBestSectionIndex(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRacingLineGenerator.cpp:3318
void BrnAI::RacingLineGenerator::RaceLineDefaultsToHoldingRoadPosition(RacingLine *  lpRacingLine, float32_t  lfOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRacingLineGenerator.cpp:716
void BrnAI::RacingLineGenerator::GetSectionPortal(SectionData *  lpSection, const Vector2 &  lVertA, const Vector2 &  lVertB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:718
		const BoundaryLine * lpBoundary;

	}
	Portal::GetBoundaryLine(/* parameters */);
	BoundaryLine::GetVert(/* parameters */);
	BoundaryLine::GetVert(/* parameters */);
}

// BrnRacingLineGenerator.cpp:735
void BrnAI::RacingLineGenerator::GuessInwardsSectionPortal(SectionData *  lpSection, const Vector2 &  lVertA, const Vector2 &  lVertB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:737
		const BoundaryLine * lpBoundary;

		// BrnRacingLineGenerator.cpp:742
		const AISection * lpAISection;

		// BrnRacingLineGenerator.cpp:743
		int32_t liSideIndex;

		// BrnRacingLineGenerator.cpp:744
		int32_t liLastIndex;

		// BrnRacingLineGenerator.cpp:745
		int32_t liMatchedEdge;

		Portal::GetBoundaryLine(/* parameters */);
		BoundaryLine::GetVert(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		BoundaryLine::GetVert(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:751
			Vector2 lStart;

			// BrnRacingLineGenerator.cpp:752
			Vector2 lEnd;

			AISection::GetCornerX(/* parameters */);
		}
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		AISection::GetCornerX(/* parameters */);
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		{
		}
		{
			// BrnRacingLineGenerator.cpp:766
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
		AISection::GetCornerX(/* parameters */);
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
		AISection::GetCornerX(/* parameters */);
		AISection::GetCornerZ(/* parameters */);
		rw::math::vpu::Vector2::Set(/* parameters */);
	}
	rw::math::vpu::IsSimilar(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2115
void BrnAI::RacingLineGenerator::GetSectionPointerForWrite(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2121
		int32_t lCacheIndex;

	}
}

// BrnRacingLineGenerator.cpp:91
void BrnAI::RacingLineGenerator::GetPerpendicularDistanceToCentreLine(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  l2DCarPos, float32_t  lDefaultFail) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:93
		Vector2 lCentre;

		// BrnRacingLineGenerator.cpp:94
		Vector2 lCentreAhead;

	}
}

// BrnRacingLineGenerator.cpp:3293
void BrnAI::RacingLineGenerator::RaceLineDefaultsToSlamPlayer(RacingLine *  lpRacingLine, const rw::math::vpu::Vector3  lSlamTarget3D) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:3299
		Vector2 lSlamTarget2D;

		rw::math::vpu::IsValid(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1804
void BrnAI::RacingLineGenerator::GetSimpleHermite(const rw::math::vpu::Vector2  lVertA, const rw::math::vpu::Vector2  lVertB, const rw::math::vpu::Vector2  lInVector, const rw::math::vpu::Vector2  lOutVector, const VecFloat  lfT, const Vector2 &  lResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1812
		VecFloat KF_1;

		// BrnRacingLineGenerator.cpp:1813
		VecFloat KF_2;

		// BrnRacingLineGenerator.cpp:1814
		VecFloat KF_3;

		// BrnRacingLineGenerator.cpp:1816
		VecFloat t2;

		// BrnRacingLineGenerator.cpp:1817
		VecFloat t3;

		// BrnRacingLineGenerator.cpp:1819
		VecFloat h1;

		// BrnRacingLineGenerator.cpp:1820
		VecFloat h2;

		// BrnRacingLineGenerator.cpp:1821
		VecFloat h3;

		// BrnRacingLineGenerator.cpp:1822
		VecFloat h4;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1806
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1807
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1809
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1810
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1826
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1808
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
	}
	{
	}
}

// BrnRacingLineGenerator.cpp:472
void BrnAI::RacingLineGenerator::CalculateIntersectionWithProjectedRoute(RacingLine *  lpRacingLine, int32_t  lNodeIndex, Vector2  lJunctionEntrance, Vector2  lJunctionExit, float32_t  lfCarY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:476
		SectionData * lpSectionData;

		// BrnRacingLineGenerator.cpp:478
		Vector2 lVertA;

		// BrnRacingLineGenerator.cpp:479
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:508
		float32_t lfR;

		// BrnRacingLineGenerator.cpp:509
		float32_t lfS;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
		rw::math::vpu::Vector2::SetZero(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		SectionData::SetSectionExit(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		SectionData::SetSectionExit(/* parameters */);
		SetW<VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:474
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:554
		const float32_t KF_VERY_SMALL_STEP;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SectionData::SetSectionExit(/* parameters */);
	}
	SetZ<VectorAxisX>(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	SectionData::SetSectionExit(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:535
		const float32_t KF_VERY_SMALL_STEP;

		SectionData::SetSectionExit(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1844
void BrnAI::RacingLineGenerator::GetIterativeHermite(const rw::math::vpu::Vector2  lVertA, const rw::math::vpu::Vector2  lVertB, const rw::math::vpu::Vector2  lInVector, const rw::math::vpu::Vector2  lOutVector, float32_t  lInterp, const Vector2 &  lResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1853
		VecFloat lfBestGuess;

		// BrnRacingLineGenerator.cpp:1857
		Vector2 lVectorLine;

		// BrnRacingLineGenerator.cpp:1859
		const float32_t KF_SHORT_LINE;

		// BrnRacingLineGenerator.cpp:1870
		VecFloat lLineDot;

		// BrnRacingLineGenerator.cpp:1879
		VecFloat lErrorReduction;

		// BrnRacingLineGenerator.cpp:1883
		int32_t liIterate;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1847
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1848
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1850
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1851
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1891
		Vector2 lPointLine;

		// BrnRacingLineGenerator.cpp:1894
		VecFloat lNewInterp;

		// BrnRacingLineGenerator.cpp:1897
		VecFloat lError;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1849
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1906
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:1899
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnRacingLineGenerator.cpp:2092
void BrnAI::RacingLineGenerator::SetTargetUpToDate(RacingLine *  lpRacingLine, int32_t  lIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2094
		int32_t lCacheIndex;

	}
	{
		// BrnRacingLineGenerator.cpp:2098
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:3085
void BrnAI::RacingLineGenerator::ExtrapolateRouteBackwards(int32_t  liNumSectionsToGenerate, uint16_t  luStartSectionIndex, const rw::math::vpu::Vector2  lCarDirection, const rw::math::vpu::Vector2  lCarPosition, const AISectionsData *  lpAISectionsData, const ExtrapolatedIndexArray &  lpauGeneratedIndices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:3089
		int32_t liCurrentSectionIndex;

		// BrnRacingLineGenerator.cpp:3091
		const AISection * lpCurrentSection;

		// BrnRacingLineGenerator.cpp:3092
		bool lbUseShortcuts;

		// BrnRacingLineGenerator.cpp:3093
		bool lbUseAIShortcuts;

		// BrnRacingLineGenerator.cpp:3097
		Vector2 lCarBackwardsDirection;

		// BrnRacingLineGenerator.cpp:3100
		int32_t liBlockedSection;

		// BrnRacingLineGenerator.cpp:3101
		int32_t liPreviousSection;

		// BrnRacingLineGenerator.cpp:3102
		int32_t liStuckIterations;

		// BrnRacingLineGenerator.cpp:3104
		int32_t liGeneratedNodeIndex;

	}
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsShortcut(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AISection::IsAIShortcut(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:3107
		int32_t lPortalIndex;

		// BrnRacingLineGenerator.cpp:3108
		int16_t liExitToSectionIndex;

		// BrnRacingLineGenerator.cpp:3109
		float32_t lfBestAheadnesss;

		// BrnRacingLineGenerator.cpp:3161
		const Portal * lpBestNextPortal;

		// BrnRacingLineGenerator.cpp:3248
		const AISection * lpExitSection;

		// BrnRacingLineGenerator.cpp:3249
		const Portal * lpExitPortal;

		AISectionsData::GetAISection(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:3130
		int32_t liTrackBack;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:3167
		const Portal * lpPossibleNextPortal;

		// BrnRacingLineGenerator.cpp:3169
		int32_t liLinkedSectionIndex;

		// BrnRacingLineGenerator.cpp:3183
		const AISection * lpNextSection;

		// BrnRacingLineGenerator.cpp:3197
		Vector3 lPossiblePortalCentre3D;

		// BrnRacingLineGenerator.cpp:3198
		Vector2 lPossiblePortalCentre2D;

		// BrnRacingLineGenerator.cpp:3202
		Vector3 lCentreOfNextSection3D;

		// BrnRacingLineGenerator.cpp:3203
		Vector2 lCentreOfNextSection2D;

		// BrnRacingLineGenerator.cpp:3207
		Vector2 lPortalLeadsToDirection;

		// BrnRacingLineGenerator.cpp:3221
		float32_t lfAheadness;

		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Dot(/* parameters */);
	}
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:3211
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:2877
void BrnAI::RacingLineGenerator::ExtrapolateTwistyRoute(int32_t  liNumSectionsToGenerate, int32_t  liStartSectionIndex, const rw::math::vpu::Vector2  lCarDirection, const rw::math::vpu::Vector2  lCarPosition, const AISectionsData *  lpAISectionsData, const ExtrapolatedIndexArray &  lpauGeneratedIndices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2879
		int32_t liCurrentSectionIndex;

		// BrnRacingLineGenerator.cpp:2882
		int32_t liBlockedSection;

		// BrnRacingLineGenerator.cpp:2883
		int32_t liPreviousSection;

		// BrnRacingLineGenerator.cpp:2884
		int32_t liStuckIterations;

		// BrnRacingLineGenerator.cpp:2886
		const AISection * lpCurrentSection;

		// BrnRacingLineGenerator.cpp:2887
		bool lbUseShortcuts;

		// BrnRacingLineGenerator.cpp:2889
		int32_t liGeneratedNodeIndex;

	}
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsShortcut(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2892
		int32_t lPortalIndex;

		// BrnRacingLineGenerator.cpp:2893
		int16_t liExitToSectionIndex;

		// BrnRacingLineGenerator.cpp:2894
		float32_t lfBestAheadnesss;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:2926
		int32_t liTrackBack;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:2961
		const Portal * lpPossibleNextPortal;

		// BrnRacingLineGenerator.cpp:2963
		int32_t liLinkedSectionIndex;

		// BrnRacingLineGenerator.cpp:2977
		const AISection * lpNextSection;

		// BrnRacingLineGenerator.cpp:2988
		Vector3 lPossiblePortalCentre3D;

		// BrnRacingLineGenerator.cpp:2989
		Vector2 lPossiblePortalCentre2D;

		// BrnRacingLineGenerator.cpp:2993
		Vector3 lCentreOfNextSection3D;

		// BrnRacingLineGenerator.cpp:2994
		Vector2 lCentreOfNextSection2D;

		// BrnRacingLineGenerator.cpp:2998
		Vector2 lPortalLeadsToDirection;

		// BrnRacingLineGenerator.cpp:3012
		float32_t lfAheadness;

		// BrnRacingLineGenerator.cpp:3014
		bool lbKeepThisSection;

		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Dot(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:3002
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:2699
void BrnAI::RacingLineGenerator::ExtrapolateRouteForwards(int32_t  liNumSectionsToGenerate, int32_t  liStartSectionIndex, const rw::math::vpu::Vector2  lCarDirection, const rw::math::vpu::Vector2  lCarPosition, const AISectionsData *  lpAISectionsData, const ExtrapolatedIndexArray &  lpauGeneratedIndices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2701
		int32_t liCurrentSectionIndex;

		// BrnRacingLineGenerator.cpp:2704
		int32_t liBlockedSection;

		// BrnRacingLineGenerator.cpp:2705
		int32_t liPreviousSection;

		// BrnRacingLineGenerator.cpp:2706
		int32_t liStuckIterations;

		// BrnRacingLineGenerator.cpp:2708
		const AISection * lpCurrentSection;

		// BrnRacingLineGenerator.cpp:2709
		bool lbUseShortcuts;

		// BrnRacingLineGenerator.cpp:2710
		bool lbUseAIShortcuts;

		// BrnRacingLineGenerator.cpp:2712
		int32_t liGeneratedNodeIndex;

		AISectionsData::GetAISection(/* parameters */);
	}
	AISection::IsShortcut(/* parameters */);
	AISection::IsAIShortcut(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2715
		int32_t lPortalIndex;

		// BrnRacingLineGenerator.cpp:2716
		int16_t liExitToSectionIndex;

		// BrnRacingLineGenerator.cpp:2717
		float32_t lfBestAheadnesss;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2740
		int32_t liTrackBack;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:2775
		const Portal * lpPossibleNextPortal;

		// BrnRacingLineGenerator.cpp:2777
		int32_t liLinkedSectionIndex;

		// BrnRacingLineGenerator.cpp:2791
		const AISection * lpNextSection;

		// BrnRacingLineGenerator.cpp:2805
		Vector3 lPossiblePortalCentre3D;

		// BrnRacingLineGenerator.cpp:2806
		Vector2 lPossiblePortalCentre2D;

		// BrnRacingLineGenerator.cpp:2810
		Vector3 lCentreOfNextSection3D;

		// BrnRacingLineGenerator.cpp:2811
		Vector2 lCentreOfNextSection2D;

		// BrnRacingLineGenerator.cpp:2815
		Vector2 lPortalLeadsToDirection;

		// BrnRacingLineGenerator.cpp:2829
		float32_t lfAheadness;

		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Dot(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2819
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:2635
void BrnAI::RacingLineGenerator::GetForwardPortalIndex(const AISectionsData *  lpAISectionsData, const AISection *  lpCurrentSection, Vector2  lCarPosition, Vector2  lCarDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2637
		float32_t lfBestAheadness;

		// BrnRacingLineGenerator.cpp:2638
		uint8_t luBestPortal;

		// BrnRacingLineGenerator.cpp:2644
		uint32_t liPortalIndex;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2650
		Vector2 lNextTarget2D;

		// BrnRacingLineGenerator.cpp:2651
		const Portal * lpPossiblePortal;

		// BrnRacingLineGenerator.cpp:2654
		Vector2 lVectorToNextTarget;

		// BrnRacingLineGenerator.cpp:2670
		float32_t lfAheadness;

		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
	}
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1362
void BrnAI::RacingLineGenerator::GetLocalSectionID(RacingLine *  lpRacingLine, Vector2  lVPUStartPos, int32_t  liSectionGuess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1364
		int32_t lIndex;

		// BrnRacingLineGenerator.cpp:1379
		float32_t lCarX;

		// BrnRacingLineGenerator.cpp:1380
		float32_t lCarY;

		// BrnRacingLineGenerator.cpp:1383
		SectionData * lpCurrentSectionData;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1425
		int32_t liNeighbourSectionGuess;

		IsInsideSectionFast(/* parameters */);
		CgsNumeric(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpl::VecPermute(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::CompLessThan(/* parameters */);
		CgsNumeric(/* parameters */);
	}
	IsInsideSectionFast(/* parameters */);
	IsInsideSectionFast(/* parameters */);
	IsInsideSectionFast(/* parameters */);
	IsInsideSectionFast(/* parameters */);
	IsInsideSectionFast(/* parameters */);
}

// BrnRacingLineGenerator.cpp:332
void BrnAI::RacingLineGenerator::CacheLocalSections(RacingLine *  lpRacingLine, const Route *  lpRoute, AISectionsData *  lpAISectionsData, AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:334
		int32_t lNodeIndex;

		// BrnRacingLineGenerator.cpp:336
		bool lbFakingRequired;

	}
	{
		// BrnRacingLineGenerator.cpp:351
		const RouteNode * lpRouteNode;

		{
			// BrnRacingLineGenerator.cpp:357
			SectionData * lpSectionData;

			// BrnRacingLineGenerator.cpp:362
			const AISection * lpSection;

			// BrnRacingLineGenerator.cpp:366
			uint8_t lu8TargetPortalIndice;

			Route::GetNode(/* parameters */);
			AISectionsData::GetAISection(/* parameters */);
			SectionData::SetFastSectionCorners(/* parameters */);
			rw::math::vpl::VecPermuteSingleImm<12306>(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::Vector4::operator=(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:391
		int32_t liNumSectionsToGenerate;

		// BrnRacingLineGenerator.cpp:392
		ExtrapolatedIndexArray lGeneratedIndices;

		// BrnRacingLineGenerator.cpp:400
		int32_t liSectionsGenerated;

		// BrnRacingLineGenerator.cpp:401
		Vector2 lDirection;

		// BrnRacingLineGenerator.cpp:402
		Vector2 lPosition;

		// BrnRacingLineGenerator.cpp:427
		int32_t liGeneratedNodeIndex;

		// BrnRacingLineGenerator.cpp:429
		int32_t liLocalNodeIndex;

		// BrnRacingLineGenerator.cpp:430
		SectionData * lpSectionData;

		AICar::GetBestSectionIndex(/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(/* parameters */);
		Route::GetNode(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		AICar::GetBestSectionIndex(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:434
			uint32_t luSectionIndex;

			// BrnRacingLineGenerator.cpp:435
			uint8_t luPortalIndex;

			// BrnRacingLineGenerator.cpp:439
			const AISection * lpSection;

			CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
			CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
			AISectionsData::GetAISection(/* parameters */);
			SectionData::SetFastSectionCorners(/* parameters */);
		}
		rw::math::vpu::Vector4::operator=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpl::VecPermuteSingleImm<12306>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector4::operator=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnRacingLineGenerator.cpp:259
void BrnAI::RacingLineGenerator::GetWidthHalfWidthOfKnownSection(RacingLine *  lpRacingLine, int32_t  liCurrentSection, float32_t  lfInterp) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:262
		SectionData * lpCurrentSectionData;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:696
void BrnAI::RacingLineGenerator::IsAJunction(RacingLine *  lpRacingLine, int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:698
		SectionData * lpCurrentSectionData;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:656
void BrnAI::RacingLineGenerator::LookForStraightSectionBehind(RacingLine *  lpRacingLine, int32_t  liCurrentSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:658
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:615
void BrnAI::RacingLineGenerator::LookForStraightSectionAhead(RacingLine *  lpRacingLine, int32_t  liCurrentSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:618
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:798
void BrnAI::RacingLineGenerator::GetRouteCentre(RacingLine *  lpRacingLine, int32_t  liNodeIndex, const Vector2 &  lOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:800
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:802
		Vector2 lLeftEdge;

		// BrnRacingLineGenerator.cpp:803
		Vector2 lRightEdge;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:808
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:827
void BrnAI::RacingLineGenerator::SetupSectionExit(RacingLine *  lpRacingLine, int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:829
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:831
		Vector2 lLeftEdge;

		// BrnRacingLineGenerator.cpp:832
		Vector2 lRightEdge;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	SectionData::SetSectionExit(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	SetZ<VectorAxisX>(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
}

// BrnRacingLineGenerator.cpp:855
void BrnAI::RacingLineGenerator::SetUpHardNoGoMap(RacingLine *  lpRacingLine, int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:863
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:873
		Vector2 lCurrentRight;

		// BrnRacingLineGenerator.cpp:874
		Vector2 lCurrentLeft;

		// BrnRacingLineGenerator.cpp:875
		Vector2 lPreviousRight;

		// BrnRacingLineGenerator.cpp:876
		Vector2 lPreviousLeft;

		// BrnRacingLineGenerator.cpp:882
		int32_t liPreviousIndex;

		GetSectionPointer(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:890
			SectionData * lpPreviousSectionData;

			GetSectionPointer(/* parameters */);
		}
	}
	{
		// BrnRacingLineGenerator.cpp:897
		SectionData * lpPreviousSectionData;

		GetSectionPointer(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:944
void BrnAI::RacingLineGenerator::DropHardNoGoLinesIntoMap(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:946
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:950
		int32_t liStart;

		// BrnRacingLineGenerator.cpp:951
		int32_t liEnd;

	}
	GetSectionPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:976
void BrnAI::RacingLineGenerator::SpreadHardNoGoLinesThroughCurrentSection(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:978
		SectionData * lpCurrentSectionData;

	}
	GetSectionPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:1024
void BrnAI::RacingLineGenerator::SpreadHNGBackOneStep(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1083
		int32_t liPreviousSection;

		// BrnRacingLineGenerator.cpp:1096
		SectionData * lpSectionData;

	}
	GetSectionPointer(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:1140
void BrnAI::RacingLineGenerator::SetUpIncomingPortalTarget(RacingLine *  lpRacingLine, int32_t  liNodeIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1143
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:1145
		int32_t liPreviousSection;

		// BrnRacingLineGenerator.cpp:1168
		Vector2 lBottomLeft;

		// BrnRacingLineGenerator.cpp:1169
		Vector2 lBottomRight;

		// BrnRacingLineGenerator.cpp:1173
		Vector2 lMiddle2D;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:1150
		SectionData * lpPreviousSectionData;

		GetSectionPointer(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	SectionData::SetSectionEntrance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisX>(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1178
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	SectionData::GetSectionExit(/* parameters */);
	SectionData::SetSectionEntrance(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisX>(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	rw::math::vpu::operator!=<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1159
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:1512
void BrnAI::RacingLineGenerator::GetNearSectionID(RacingLine *  lpRacingLine, Vector2  lVPUStartPos, int32_t  liSectionGuess) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1527
		float32_t lCarX;

		// BrnRacingLineGenerator.cpp:1528
		float32_t lCarY;

		// BrnRacingLineGenerator.cpp:1530
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:1546
		int32_t liNeighbourSectionGuess;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:1516
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	GetSectionPointer(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	IsInsideSectionFast(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	CgsNumeric(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpl::VecCompEqual_UInt(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	CgsNumeric(/* parameters */);
	GetSectionPointer(/* parameters */);
	IsInsideSectionFast(/* parameters */);
	CgsNumeric(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	CgsNumeric(/* parameters */);
	GetSectionPointer(/* parameters */);
	IsInsideSectionFast(/* parameters */);
	CgsNumeric(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpl::VecPermute(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::CompLessThan(/* parameters */);
	CgsNumeric(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1713
void BrnAI::RacingLineGenerator::RenderSectionDetails(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  lRealCarPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1716
		int32_t liIndex;

		// BrnRacingLineGenerator.cpp:1723
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:1725
		Vector3 lA;

		// BrnRacingLineGenerator.cpp:1725
		Vector3 lB;

		// BrnRacingLineGenerator.cpp:1725
		Vector3 lC;

		// BrnRacingLineGenerator.cpp:1725
		Vector3 lD;

		// BrnRacingLineGenerator.cpp:1727
		const AISection * lpSection;

		// BrnRacingLineGenerator.cpp:1749
		DebugInterface lDebugInterface;

		// BrnRacingLineGenerator.cpp:1761
		Vector2 lTopR2D;

		// BrnRacingLineGenerator.cpp:1762
		Vector2 lTopL2D;

		// BrnRacingLineGenerator.cpp:1763
		Vector2 lBottomR2D;

		// BrnRacingLineGenerator.cpp:1764
		Vector2 lBottomL2D;

	}
	GetSectionPointer(/* parameters */);
	SetY<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	rw::math::vpu::Vector3::GetY(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	AISection::GetCornerX(/* parameters */);
	AISection::GetCornerX(/* parameters */);
	AISection::GetCornerX(/* parameters */);
	AISection::GetCornerX(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	SectionData::GetSectionExit(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetX<VectorAxisX>(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	SetZ<VectorAxisY>(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1940
void BrnAI::RacingLineGenerator::GenerateInOutVectors(RacingLine *  lpRacingLine, int32_t  lIndex, const Vector2 &  lInVector, const Vector2 &  lOutVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1944
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:1946
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:1947
		Vector2 lVertC;

		// BrnRacingLineGenerator.cpp:1949
		float32_t lSectionLength;

		// BrnRacingLineGenerator.cpp:1961
		int32_t lPreviousIndex;

		// BrnRacingLineGenerator.cpp:1988
		int32_t lNextIndex;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	SectionData::GetSectionExit(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Min<float>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1971
		Vector2 lVertA;

		GetSectionPointer(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		SectionData::GetSectionEntrance(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
		}
	}
	{
		// BrnRacingLineGenerator.cpp:1997
		Vector2 lVertD;

		GetSectionPointer(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnRacingLineGenerator.cpp:1601
void BrnAI::RacingLineGenerator::DrawCentreLine(RacingLine *  lpRacingLine, Vector2  lPlayerDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1605
		int32_t liIndex;

		// BrnRacingLineGenerator.cpp:1607
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:1611
		Vector3 lA3D;

		// BrnRacingLineGenerator.cpp:1612
		Vector3 lB3D;

		// BrnRacingLineGenerator.cpp:1613
		Vector3 lC3D;

		// BrnRacingLineGenerator.cpp:1614
		Vector3 lD3D;

		// BrnRacingLineGenerator.cpp:1616
		SectionData * lpCurrentSectionData;

		// BrnRacingLineGenerator.cpp:1620
		Vector2 lInVector;

		// BrnRacingLineGenerator.cpp:1621
		Vector2 lOutVector;

		// BrnRacingLineGenerator.cpp:1625
		Vector2 lVertA;

		// BrnRacingLineGenerator.cpp:1626
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:1628
		float32_t lfDrawInterp;

		GetSectionPointer(/* parameters */);
		SectionData::GetSectionEntrance(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:1632
			Vector2 lA;

			// BrnRacingLineGenerator.cpp:1632
			Vector2 lB;

			// BrnRacingLineGenerator.cpp:1632
			Vector2 lC;

			// BrnRacingLineGenerator.cpp:1638
			Vector2 lStep;

			// BrnRacingLineGenerator.cpp:1652
			Vector3 lPerp;

			// BrnRacingLineGenerator.cpp:1654
			float32_t lfTurning;

			// BrnRacingLineGenerator.cpp:1671
			float32_t lfAheadness;

			// BrnRacingLineGenerator.cpp:1673
			uint8_t liGreen;

			// BrnRacingLineGenerator.cpp:1674
			uint8_t liRed;

			// BrnRacingLineGenerator.cpp:1676
			const float32_t KF_START_FADE_OUT;

			// BrnRacingLineGenerator.cpp:1677
			const float32_t KF_END_FADE_OUT;

			rw::RGBA::RGBA(/* parameters */);
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::Vector3::SetX(/* parameters */);
		rw::math::vpu::Vector3::SetZ(/* parameters */);
		rw::math::vpu::Vector3::GetY(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:1688
			float32_t lfInterp;

			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
			rw::math::vpu::Lerp(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::Mult(/* parameters */);
		}
		rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2141
void BrnAI::RacingLineGenerator::GetPointAndNormalOnCurve(RacingLine *  lpRacingLine, int32_t  liIndex, float32_t  lfInterp, const Vector2 &  lCentreLine, const Vector2 &  lNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2143
		Vector2 lInVector;

		// BrnRacingLineGenerator.cpp:2144
		Vector2 lOutVector;

		// BrnRacingLineGenerator.cpp:2146
		SectionData * lpNextSectionData;

		// BrnRacingLineGenerator.cpp:2152
		Vector2 lVertA;

		// BrnRacingLineGenerator.cpp:2153
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:2219
		float32_t lfCorrectedInterp;

		// BrnRacingLineGenerator.cpp:2224
		float32_t lfNewInterp;

		// BrnRacingLineGenerator.cpp:2225
		bool lbFlip;

		// BrnRacingLineGenerator.cpp:2229
		Vector2 lCentreLineAhead;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	SectionData::GetSectionExit(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	GetSectionPointer(/* parameters */);
	SectionData::GetSectionExit(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::GetVector(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2172
		SectionData * lpFirstTrySectionData;

		// BrnRacingLineGenerator.cpp:2173
		SectionData * lpSecondTrySectionData;

		GetSectionPointer(/* parameters */);
		GetSectionPointer(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2220
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2244
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2148
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector2::SetY(/* parameters */);
	rw::math::vpu::Vector2::SetX(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2267
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
}

// BrnRacingLineGenerator.cpp:2290
void BrnAI::RacingLineGenerator::FindTargetFixedDistanceAhead(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  lPos, const Vector2 &  lTarget, float32_t  lfRadius, float32_t  lfRoadPlacement, int32_t  liStartSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2292
		int32_t lIndex;

	}
	{
		// BrnRacingLineGenerator.cpp:2294
		SectionData * lpNextSectionData;

		// BrnRacingLineGenerator.cpp:2296
		Vector2 lVertA;

		// BrnRacingLineGenerator.cpp:2297
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:2298
		Vector2 lPointOnLine;

		// BrnRacingLineGenerator.cpp:2306
		float32_t lfPerpendicularDistanceToCentreLine;

		// BrnRacingLineGenerator.cpp:2308
		float32_t lfDistanceAlongLine;

		// BrnRacingLineGenerator.cpp:2321
		Vector2 lVector;

		// BrnRacingLineGenerator.cpp:2326
		Vector2 lIntersection;

		// BrnRacingLineGenerator.cpp:2333
		float32_t lfInterp;

		// BrnRacingLineGenerator.cpp:2353
		Vector2 lCentreLine;

		// BrnRacingLineGenerator.cpp:2354
		Vector2 lNormal;

		GetSectionPointer(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SectionData::GetSectionEntrance(/* parameters */);
	}
	DistancePointToLine(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::fpu::Sqrt<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2331
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2393
void BrnAI::RacingLineGenerator::FindAnyTargetOnLineAhead(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  lPos, const Vector2 &  lTarget, float32_t  lfRadius, float32_t  lfRoadPlacement, int32_t  liStartSection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2397
		int32_t liTargetSection;

	}
	{
		// BrnRacingLineGenerator.cpp:2417
		int32_t lIndex;

	}
	{
		// BrnRacingLineGenerator.cpp:2419
		SectionData * lpThisSectionData;

		// BrnRacingLineGenerator.cpp:2421
		Vector2 lVertA;

		// BrnRacingLineGenerator.cpp:2422
		Vector2 lVertB;

		// BrnRacingLineGenerator.cpp:2423
		Vector2 lPointOnLine;

		GetSectionPointer(/* parameters */);
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SectionData::GetSectionEntrance(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	IsPointOnLine(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2588
void BrnAI::RacingLineGenerator::GetSectionInterpPosition(RacingLine *  lpRacingLine, int32_t  liSection, const rw::math::vpu::Vector2  l2DCarPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2590
		Vector2 l2DCurrentPortalCentre;

		// BrnRacingLineGenerator.cpp:2591
		Vector2 l2DNextPortalCentre;

		// BrnRacingLineGenerator.cpp:2593
		SectionData * lpNextSectionData;

		// BrnRacingLineGenerator.cpp:2600
		Vector2 l2DPointOnLine;

		// BrnRacingLineGenerator.cpp:2602
		Vector2 lVectorLine;

		// BrnRacingLineGenerator.cpp:2603
		Vector2 lPointLine;

		// BrnRacingLineGenerator.cpp:2612
		float32_t lfInterp;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	SectionData::GetSectionExit(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	SectionData::GetSectionEntrance(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2616
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2487
void BrnAI::RacingLineGenerator::GetPointFarAhead(RacingLine *  lpRacingLine, float32_t  lfDistance, const rw::math::vpu::Vector2  l2DCarPos, const Vector2 &  lPosition, const Vector2 &  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2494
		int32_t liCurrentSection;

		// BrnRacingLineGenerator.cpp:2503
		SectionData * lpSectionData;

		// BrnRacingLineGenerator.cpp:2505
		float32_t lfSectionLength;

		// BrnRacingLineGenerator.cpp:2515
		float32_t lfSectionInterp;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GetSectionPointer(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:2525
		SectionData * lpSectionData;

		// BrnRacingLineGenerator.cpp:2527
		float32_t lfSectionLength;

		GetSectionPointer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnRacingLineGenerator.cpp:2547
		float32_t lfInterp;

		// BrnRacingLineGenerator.cpp:2549
		Vector2 lCentre;

		// BrnRacingLineGenerator.cpp:2550
		Vector2 lNormal;

		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Vector2::SetY(/* parameters */);
		SetX<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:281
void BrnAI::RacingLineGenerator::GetHalfRoadWidthHere(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  l2DCarPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:283
		int32_t liCurrentSection;

	}
	{
		// BrnRacingLineGenerator.cpp:295
		float32_t lfInterp;

		// BrnRacingLineGenerator.cpp:299
		float32_t lfWidth;

	}
}

// BrnRacingLineGenerator.cpp:124
void BrnAI::RacingLineGenerator::GetCentreCentreLineHere(RacingLine *  lpRacingLine, const rw::math::vpu::Vector2  l2DSectionPos, const rw::math::vpu::Vector2  l2DCarPos, const Vector2 &  lCentreOut, const Vector2 &  lCentreAhead) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:128
		int32_t liStartSection;

		// BrnRacingLineGenerator.cpp:129
		int32_t liEndSection;

		// BrnRacingLineGenerator.cpp:130
		int32_t liInitialSection;

		// BrnRacingLineGenerator.cpp:153
		float32_t lfSmallestOffset;

		// BrnRacingLineGenerator.cpp:155
		int32_t liIndex;

	}
	rw::math::vpu::Max<int32_t>(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:159
		float32_t lfInterp;

		// BrnRacingLineGenerator.cpp:165
		SectionData * lpThisSectionData;

		// BrnRacingLineGenerator.cpp:167
		Vector2 l2DLastPortalCentre;

		// BrnRacingLineGenerator.cpp:168
		Vector2 l2DThisPortalCentre;

		// BrnRacingLineGenerator.cpp:179
		float32_t lBestGuess;

		// BrnRacingLineGenerator.cpp:181
		Vector2 lInVector;

		// BrnRacingLineGenerator.cpp:182
		Vector2 lOutVector;

		// BrnRacingLineGenerator.cpp:183
		Vector2 lCentre;

		// BrnRacingLineGenerator.cpp:184
		Vector2 lTarget;

		// BrnRacingLineGenerator.cpp:189
		float32_t lfCorrectedInterp;

		// BrnRacingLineGenerator.cpp:190
		float32_t lfDistanceToCentreLine;

		// BrnRacingLineGenerator.cpp:207
		float32_t lfNewInterp;

		// BrnRacingLineGenerator.cpp:209
		bool lbFlip;

		// BrnRacingLineGenerator.cpp:210
		Vector2 lCentreLineAhead;

		GetSectionPointer(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		SectionData::GetSectionExit(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SectionData::GetSectionEntrance(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			// BrnRacingLineGenerator.cpp:228
			Vector2 lStep;

			rw::math::vpu::operator-(/* parameters */);
		}
	}
	rw::math::vpu::operator-(/* parameters */);
}

// BrnRacingLineGenerator.cpp:3341
void BrnAI::RacingLineGenerator::RenderHardNoGoMap(RacingLine *  lpRacingLine) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:3343
		int32_t liNodeIndex;

	}
	{
		// BrnRacingLineGenerator.cpp:3349
		SectionData * lpCurrentSectionData;

		GetSectionPointer(/* parameters */);
	}
}

// BrnRacingLineGenerator.cpp:1194
void BrnAI::RacingLineGenerator::InitialiseRacingLine(RacingLine *  lpRacingLine, AICar *  lpCar, int32_t  lStartRouteNode, AISectionsData *  lpSectionsData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:1199
		const Route * lpRoute;

		// BrnRacingLineGenerator.cpp:1204
		Vector3 l3DCarPos;

		// BrnRacingLineGenerator.cpp:1238
		int32_t lNumAvailableSections;

		// BrnRacingLineGenerator.cpp:1249
		int32_t lNodeIndex;

	}
	AICar::GetPosition(/* parameters */);
	RacingLine::SetInitialised(/* parameters */);
	rw::math::vpu::Min<int>(/* parameters */);
	RacingLine::SetInitialised(/* parameters */);
	{
		// BrnRacingLineGenerator.cpp:1308
		const int32_t K_SECTIONS_TO_STEP_AHEAD;

	}
	{
		// BrnRacingLineGenerator.cpp:1271
		int32_t liStraightSectionAhead;

		// BrnRacingLineGenerator.cpp:1272
		int32_t liStraightSectionBehind;

		// BrnRacingLineGenerator.cpp:1276
		Vector2 lRoadPositionAhead;

		// BrnRacingLineGenerator.cpp:1279
		Vector2 lRoadPositionBehind;

		// BrnRacingLineGenerator.cpp:1284
		Vector2 lDummy;

		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRacingLineGenerator.cpp:2453
void BrnAI::RacingLineGenerator::GetRoadPositionAsPercentage(RacingLine *  lpRacingLine, AICar *  lpCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRacingLineGenerator.cpp:2461
		Vector3 lRaceCar3DPosition;

		// BrnRacingLineGenerator.cpp:2464
		Vector2 lRaceCarPosition;

		// BrnRacingLineGenerator.cpp:2467
		float32_t lfCurrentCarRoadPosition;

		// BrnRacingLineGenerator.cpp:2468
		float32_t lfHalfRoadWidth;

	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnRacingLineGenerator.cpp:56
// BrnRacingLineGenerator.cpp:57
// BrnRacingLineGenerator.cpp:58
// BrnRacingLineGenerator.cpp:59
// BrnRacingLineGenerator.cpp:60
// BrnRacingLineGenerator.cpp:61
// BrnRacingLineGenerator.cpp:69
