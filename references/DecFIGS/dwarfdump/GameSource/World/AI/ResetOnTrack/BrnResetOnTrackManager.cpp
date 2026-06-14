// BrnRoute.h:26
namespace BrnAI {
	// BrnResetOnTrackManager.cpp:57
	const float32_t KF_RESET_SIDE_STEP;

	// BrnResetOnTrackManager.cpp:58
	const float32_t KF_ANGLE_TO_JOIN_FROM_SIDE_ROAD;

	// BrnResetOnTrackManager.cpp:60
	const float32_t KF_ASSUMED_FOV_FOR_RESET_AHEAD;

	// BrnResetOnTrackManager.cpp:61
	const float32_t KF_TOO_CLOSE_DISTANCE;

	// BrnResetOnTrackManager.cpp:62
	const float32_t KF_TOO_CLOSE_TO_SPAWN_IN_VIEW;

	// BrnResetOnTrackManager.cpp:65
	const float32_t KF_JUMP_RESET_SPEED_SLOW;

	// BrnResetOnTrackManager.cpp:66
	const float32_t KF_JUMP_RESET_SPEED_FAST;

	// BrnResetOnTrackManager.cpp:67
	const float32_t KF_MIN_RESET_DISTANCE_BEHIND;

	// BrnResetOnTrackManager.cpp:810
	const int32_t KI_ITERATION_COUNT = 10;

	// BrnResetOnTrackManager.cpp:811
	const float32_t KF_START_OUT_OF_RANGE;

	// BrnResetOnTrackManager.cpp:1109
	const float32_t KF_START_BEHIND_AT_FIRST_TIME;

}

// BrnResetOnTrackManager.cpp:664
void BrnAI::ResetOnTrackManager::ComputeNearestPositionInSegment(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lLineStart, const rw::math::vpu::Vector3  lLineEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:668
		Vector3 lLineDirection;

		// BrnResetOnTrackManager.cpp:669
		Vector3 lStartPositionVector;

		// BrnResetOnTrackManager.cpp:670
		float32_t lfDistance;

		rw::math::vpu::IsSimilar(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1245
void BrnAI::ResetOnTrackManager::IsSimilarInXZ(Vector3  lPoint1, Vector3  lPoint2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsSimilar<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
}

// BrnResetOnTrackManager.cpp:2293
void BrnAI::ResetOnTrackManager::TestTrafficHNG(const BrnAI::NearbyVehicles *  laNearbyVehicles, const rw::math::vpu::Vector2  lStartPos, const rw::math::vpu::Vector2  lEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResetOnTrackManager.cpp:2307
void BrnAI::ResetOnTrackManager::TestRecentResets(const rw::math::vpu::Vector3  lTestPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2309
		int32_t liIndex;

		// BrnResetOnTrackManager.cpp:2310
		float32_t lfMinDistanceSquared;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::operator[](/* parameters */);
}

// BrnResetOnTrackManager.cpp:2563
void BrnAI::ResetOnTrackManager::ComputeAISectionWidth(const AISection *  lpAISection, Vector2  lDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2565
		Vector2 lLine0;

		// BrnResetOnTrackManager.cpp:2566
		Vector2 lLine1;

		// BrnResetOnTrackManager.cpp:2567
		Vector2 lLine2;

		// BrnResetOnTrackManager.cpp:2568
		Vector2 lLine3;

		// BrnResetOnTrackManager.cpp:2570
		float32_t lLine0Magnitude;

		// BrnResetOnTrackManager.cpp:2571
		float32_t lLine1Magnitude;

		// BrnResetOnTrackManager.cpp:2573
		float32_t lCos0;

		// BrnResetOnTrackManager.cpp:2574
		float32_t lCos1;

		AISection::GetCorner(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	AISection::GetCorner(/* parameters */);
	AISection::GetCorner(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	AISection::GetCorner(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	AISection::GetCorner(/* parameters */);
	AISection::GetCorner(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	AISection::GetCorner(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	AISection::GetCorner(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
}

// BrnResetOnTrackManager.cpp:172
void BrnAI::ResetOnTrackManager::PushResetOnTrackRequest(const ResetOnTrackRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:174
		uint32_t luIndex;

		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::GetLength(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Append(/* parameters */);
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

// BrnResetOnTrackManager.cpp:796
void BrnAI::ResetOnTrackManager::GetResetDistanceBehindPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:798
		const AICar * lpPlayerAICar;

	}
	GetAICar(/* parameters */);
	AICar::GetSpeed(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1737
void BrnAI::ResetOnTrackManager::InterpolatePositionFromAngle(Vector2  lPlayerPosition, Vector2  lPlayerDirection, Vector3  lEntranceNodePosition, Vector3  lExitNodePosition, float32_t  lfAngleToJoin) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1741
		Vector2 lVectorFromPlayer;

		// BrnResetOnTrackManager.cpp:1751
		float32_t lfEntranceDot;

		// BrnResetOnTrackManager.cpp:1765
		float32_t lfExitDot;

		// BrnResetOnTrackManager.cpp:1767
		float32_t lfRange;

		// BrnResetOnTrackManager.cpp:1774
		float32_t lfUse;

		// BrnResetOnTrackManager.cpp:1776
		float32_t lfInterp;

		BrnMath::Flatten(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1005
void BrnAI::ResetOnTrackManager::GetRoadSideForStartingLine(const RouteNode *  lpNextNode, int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1007
		const AISection * lpNextSection;

		// BrnResetOnTrackManager.cpp:1008
		const Portal * lNextPortal;

		// BrnResetOnTrackManager.cpp:1009
		const BoundaryLine * lpNextBoundaryLine;

		// BrnResetOnTrackManager.cpp:1011
		float lfRoadWidth;

		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	}
	AISectionsData::GetAISection(/* parameters */);
	Portal::GetBoundaryLine(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1020
		float32_t lfInterp;

		CgsNumeric::Random::RandomFloat(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:474
void BrnAI::ResetOnTrackManager::ComputeInitialCoordinatesStandard(ResetData *  lpResetData, EGlobalRaceCarIndex  leGlobalRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:477
		const AICar * lpAICar;

		// BrnResetOnTrackManager.cpp:478
		uint16_t luResetSectionIndex;

		// BrnResetOnTrackManager.cpp:480
		Vector3 lStartPortalPosition;

		// BrnResetOnTrackManager.cpp:481
		Vector3 lEndPortalPosition;

		// BrnResetOnTrackManager.cpp:483
		Vector3 lPosition;

		// BrnResetOnTrackManager.cpp:484
		Vector3 lDirection;

		// BrnResetOnTrackManager.cpp:485
		const AISection * lpAISection;

		GetAICar(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	Portal::GetPosition(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	AICar::GetLastGoodPosition(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:518
		Vector3 lRightVector;

		rw::math::vpu::operator+=(/* parameters */);
	}
	AICar::GetLastGoodPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::MagnitudeSquared2D(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:2359
void BrnAI::ResetOnTrackManager::UpdateResetOnTrackSectionUsingRoute(AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::HasValidRoute(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:2366
		uint16_t luRouteNodeIndex;

		// BrnResetOnTrackManager.cpp:2367
		uint16_t luSectionIndex;

		// BrnResetOnTrackManager.cpp:2368
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:2369
		const RouteNode * lpNextNode;

		// BrnResetOnTrackManager.cpp:2370
		const AISection * lpAISection;

		{
			// BrnResetOnTrackManager.cpp:2387
			uint8_t luEndPortal;

			// BrnResetOnTrackManager.cpp:2388
			uint8_t luStartPortal;

			// BrnResetOnTrackManager.cpp:2389
			int32_t liPortalIndex;

			{
				// BrnResetOnTrackManager.cpp:2404
				Vector3 lPosition0;

				// BrnResetOnTrackManager.cpp:2405
				Vector3 lPosition1;

			}
		}
	}
	Route::GetNode(/* parameters */);
	Route::GetNode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsInAir(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	Portal::GetPosition(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnResetOnTrackManager.cpp:776
void BrnAI::ResetOnTrackManager::PlayerIsLookingBackwards() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:778
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:780
		float32_t lfCameraFacing;

	}
	GetAICar(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1093
void BrnAI::ResetOnTrackManager::EnsureAIIsDrivingSameDirectionAsPlayer(const AICar *  lpPlayerAICar, ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	AICar::GetDirection(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	BrnMath::IsNormal(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:814
void BrnAI::ResetOnTrackManager::ResetAwayFromPlayer(ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:816
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:817
		Vector3 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:821
		int32_t liRepeats;

	}
	GetAICar(/* parameters */);
	AICar::GetPosition(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:825
		int32_t liIndex;

		// BrnResetOnTrackManager.cpp:827
		const AISection * lpSection;

		// BrnResetOnTrackManager.cpp:828
		Vector3 lResetPosition;

		// BrnResetOnTrackManager.cpp:834
		float32_t lfSeperation;

		AISectionsData::GetAISection(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	AICar::GetRandomNumber(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1176
void BrnAI::ResetOnTrackManager::ResetNearRoutelessPlayer(ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1178
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1182
		uint16_t liResetOnTrackIndex;

		// BrnResetOnTrackManager.cpp:1191
		Vector3 lNextPortal;

		// BrnResetOnTrackManager.cpp:1192
		Vector3 lPrevPortal;

		// BrnResetOnTrackManager.cpp:1206
		Vector3 lPlayerRelativePosition;

		// BrnResetOnTrackManager.cpp:1215
		float32_t lfAheadness;

	}
	GetAICar(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Portal::GetPosition(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1228
		const float32_t KF_DISTANCE_BEHIND_PLAYER;

		AICar::GetPosition(/* parameters */);
		AICar::GetDirection(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:1271
void BrnAI::ResetOnTrackManager::ScanBackwardsAlongExtrapolatedRoute(const const RouteNode *&  lpPrevNode, const const RouteNode *&  lpNextNode, float32_t  lfResetDistance, BrnAI::EExtrapolateType  leExtrapolateType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1273
		ExtrapolatedIndexArray lGeneratedForwardIndices;

		// BrnResetOnTrackManager.cpp:1274
		ExtrapolatedIndexArray lGeneratedIndices;

		// BrnResetOnTrackManager.cpp:1276
		Vector2 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:1277
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:1279
		int32_t liForwardSectionsGenerated;

		// BrnResetOnTrackManager.cpp:1280
		int32_t liSectionsGenerated;

		// BrnResetOnTrackManager.cpp:1281
		int32_t liResetNodeIndex;

		// BrnResetOnTrackManager.cpp:1285
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1303
		uint32_t liExtrapolationLength;

		// BrnResetOnTrackManager.cpp:1336
		uint32_t luNextAISectionIndex;

		// BrnResetOnTrackManager.cpp:1337
		uint32_t luNextAIPortalIndex;

		// BrnResetOnTrackManager.cpp:1359
		float32_t lfBestSeparation;

	}
	GetAICar(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Array(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Array(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(/* parameters */);
	AICar::GetDirection(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1430
		const float32_t KF_CLOSE_ENOUGH_TO_BE_VISIBLE;

	}
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1365
		Vector2 lNextPosition;

		// BrnResetOnTrackManager.cpp:1366
		Vector2 lPrevPosition;

		// BrnResetOnTrackManager.cpp:1368
		const AISection * lpNextSection;

		// BrnResetOnTrackManager.cpp:1369
		const AISection * lpPrevSection;

		// BrnResetOnTrackManager.cpp:1371
		uint32_t luPrevAISectionIndex;

		// BrnResetOnTrackManager.cpp:1372
		uint32_t luPrevAIPortalIndex;

		// BrnResetOnTrackManager.cpp:1375
		float32_t lfSeparationFromPlayer;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		{
		}
		AISectionsData::GetAISection(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		{
		}
		AISectionsData::GetAISection(/* parameters */);
		Portal::GetPosition2D(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		Portal::GetPosition2D(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		RouteNode::Construct(/* parameters */);
		RouteNode::Construct(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:1456
void BrnAI::ResetOnTrackManager::ScanForwardsAlongExtrapolatedRoute(const const RouteNode *&  lpPrevNode, const const RouteNode *&  lpNextNode, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1458
		ExtrapolatedIndexArray lGeneratedIndices;

		// BrnResetOnTrackManager.cpp:1460
		Vector2 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:1461
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:1463
		int32_t liSectionsGenerated;

		// BrnResetOnTrackManager.cpp:1464
		int32_t liResetNodeIndex;

		// BrnResetOnTrackManager.cpp:1468
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1493
		uint32_t luNextAISectionIndex;

		// BrnResetOnTrackManager.cpp:1494
		uint32_t luNextAIPortalIndex;

	}
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Array(/* parameters */);
	GetAICar(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::Construct(/* parameters */);
	AICar::GetDirection(/* parameters */);
	AICar::GetPosition(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::GetMemoryResource(/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1502
		Vector2 lNextPosition;

		// BrnResetOnTrackManager.cpp:1503
		Vector2 lPrevPosition;

		// BrnResetOnTrackManager.cpp:1505
		const AISection * lpNextSection;

		// BrnResetOnTrackManager.cpp:1506
		const AISection * lpPrevSection;

		// BrnResetOnTrackManager.cpp:1508
		uint32_t luPrevAISectionIndex;

		// BrnResetOnTrackManager.cpp:1509
		uint32_t luPrevAIPortalIndex;

		// BrnResetOnTrackManager.cpp:1511
		float32_t lfSeparationFromPlayer;

		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u>::operator[](/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		{
		}
		AISectionsData::GetAISection(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		{
		}
		AISectionsData::GetAISection(/* parameters */);
		AISection::IsAIShortcut(/* parameters */);
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
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	Portal::GetPosition2D(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	RouteNode::Construct(/* parameters */);
	Portal::GetPosition2D(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	RouteNode::Construct(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
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
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:1570
void BrnAI::ResetOnTrackManager::ScanBackwardsAlongPlayerRoute(const const RouteNode *&  lpPrevNode, const const RouteNode *&  lpNextNode, const AICar *  lpPlayerAICar, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1572
		const Route * lpRoute;

		// BrnResetOnTrackManager.cpp:1573
		int32_t liPlayerNextNodeIndex;

		// BrnResetOnTrackManager.cpp:1574
		Vector3 lPlayerPos;

		// BrnResetOnTrackManager.cpp:1576
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:1577
		Vector2 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:1599
		int32_t liResetNodeIndex;

		AICar::HasRouteWithMoreThanOneNode(/* parameters */);
	}
	Route::GetNodeCount(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	AICar::GetDirection(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1605
		Vector2 lOurPosition;

		// BrnResetOnTrackManager.cpp:1606
		Vector2 lRelativePosition;

		// BrnResetOnTrackManager.cpp:1608
		float32_t lfSeparationFromPlayer;

		Route::GetNode(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Route::GetNode(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	RouteNode::GetPosition(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1653
void BrnAI::ResetOnTrackManager::ScanForwardsAlongPlayerRoute(const const RouteNode *&  lpPrevNode, const const RouteNode *&  lpNextNode, const AICar *  lpPlayerAICar, float32_t  lfResetAheadDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1656
		int32_t liLastNodeIndex;

		// BrnResetOnTrackManager.cpp:1658
		const Route * lpRoute;

		// BrnResetOnTrackManager.cpp:1659
		int32_t liPlayerNextNodeIndex;

		// BrnResetOnTrackManager.cpp:1660
		Vector3 lPlayerPos;

		// BrnResetOnTrackManager.cpp:1662
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:1663
		Vector2 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:1686
		int32_t liResetNodeIndex;

		AICar::GetPosition(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	AICar::HasRouteWithMoreThanOneNode(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	AICar::GetDirection(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1691
		Vector2 lOurPosition;

		// BrnResetOnTrackManager.cpp:1693
		Vector2 lRelativePosition;

		// BrnResetOnTrackManager.cpp:1695
		float32_t lfSeparationFromPlayer;

		Route::GetNode(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		Route::GetNode(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::IsSimilar(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
		RouteNode::GetPosition(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:1803
void BrnAI::ResetOnTrackManager::ScanForwardsAndAlongJunction(ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1809
		int32_t liLastNodeIndex;

		// BrnResetOnTrackManager.cpp:1810
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1812
		const Route * lpRoute;

		// BrnResetOnTrackManager.cpp:1813
		int32_t liPlayerNextNodeIndex;

		// BrnResetOnTrackManager.cpp:1825
		float32_t lfResetAheadDistance;

		// BrnResetOnTrackManager.cpp:1831
		int32_t liResetNodeIndex;

		// BrnResetOnTrackManager.cpp:1832
		bool lbJunctionFound;

		// BrnResetOnTrackManager.cpp:1836
		const AISection * lpJunctionSection;

		// BrnResetOnTrackManager.cpp:1837
		const AISection * lpEntrySection;

		// BrnResetOnTrackManager.cpp:1838
		const RouteNode * lpNextNode;

		// BrnResetOnTrackManager.cpp:1882
		Vector2 lJunctionMiddle;

		// BrnResetOnTrackManager.cpp:1895
		int32_t liNextSectionIndex;

		// BrnResetOnTrackManager.cpp:1896
		const AISection * lpSectionAfterJunction;

		// BrnResetOnTrackManager.cpp:1897
		Vector2 lSectionAfterJunctionMiddle;

		// BrnResetOnTrackManager.cpp:1904
		Vector2 lfRouteDirection;

		// BrnResetOnTrackManager.cpp:1914
		int32_t liPortal;

		// BrnResetOnTrackManager.cpp:1918
		float32_t lfBestAheadness;

		// BrnResetOnTrackManager.cpp:1919
		const AISection * lpSideRouteSection;

		// BrnResetOnTrackManager.cpp:1921
		Vector3 lDirection3D;

		// BrnResetOnTrackManager.cpp:1923
		Vector3 lEntranceNodePosition;

		// BrnResetOnTrackManager.cpp:1987
		int32_t liSideScan;

		// BrnResetOnTrackManager.cpp:1988
		const int32_t KI_SIDE_SCAN_BAIL_OUT;

		// BrnResetOnTrackManager.cpp:1989
		const AISection * lpNextSideRouteSection;

		// BrnResetOnTrackManager.cpp:1993
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:1996
		Vector3 lExitNodePosition;

		// BrnResetOnTrackManager.cpp:2084
		float32_t lfAheadness;

		// BrnResetOnTrackManager.cpp:2086
		Vector3 lRelativePosition;

		// BrnResetOnTrackManager.cpp:2090
		float32_t lfSeparation;

	}
	GetAICar(/* parameters */);
	AICar::GetNextRouteNodeIndex(/* parameters */);
	AICar::GetRandomNumber(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1844
		int32_t liCurrentSectionIndex;

		// BrnResetOnTrackManager.cpp:1848
		float32_t lfDistanceFromCar;

		Route::GetNode(/* parameters */);
		CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
		AISectionsData::GetAISection(/* parameters */);
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnMath::Flatten(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	Route::GetNode(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:1931
		const AISection * lpNeighbourAISection;

		// BrnResetOnTrackManager.cpp:1945
		Vector2 lNeighboutMiddle;

		// BrnResetOnTrackManager.cpp:1948
		Vector2 lExitDirection;

		// BrnResetOnTrackManager.cpp:1958
		float32_t lfAheadness;

		AISectionsData::GetAISection(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
	Portal::GetPosition(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	AICar::GetDirection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:2001
		float32_t lfBestDistanceToMiddle;

		// BrnResetOnTrackManager.cpp:2042
		Vector2 lVectorFromPlayer;

		// BrnResetOnTrackManager.cpp:2052
		float32_t lfOffset;

	}
	{
		// BrnResetOnTrackManager.cpp:2007
		const AISection * lpNeighbourAISection;

		// BrnResetOnTrackManager.cpp:2015
		Vector2 lNeighbourMiddle;

		// BrnResetOnTrackManager.cpp:2018
		float32_t lfDistanceToJunction;

		AISectionsData::GetAISection(/* parameters */);
		BrnMath::Flatten(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	Portal::GetPosition(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	AICar::GetPosition(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
	}
	rw::math::vpu::Normalize(/* parameters */);
	AICar::GetDirection(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
		{
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnResetOnTrackManager.cpp:2144
void BrnAI::ResetOnTrackManager::DeterminePositionBetweenNodes(Vector3  lPrevPortalPosition, Vector3  lNextPortalPosition, const AICar *  lpPlayerAICar, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2146
		Vector2 lPlayerDirection;

		// BrnResetOnTrackManager.cpp:2147
		Vector2 lPlayerPosition;

		// BrnResetOnTrackManager.cpp:2157
		Vector2 lRelativePosition;

		// BrnResetOnTrackManager.cpp:2159
		float32_t lfSeparationFromPrev;

		// BrnResetOnTrackManager.cpp:2163
		float32_t lfSeparationFromNext;

		// BrnResetOnTrackManager.cpp:2167
		float32_t lfGap;

		// BrnResetOnTrackManager.cpp:2168
		float32_t lfStep;

		rw::math::vpu::Vector2::SetZero(/* parameters */);
	}
	AICar::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	AICar::GetDirection(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnMath::Flatten(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
	}
	{
	}
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnResetOnTrackManager.cpp:700
void BrnAI::ResetOnTrackManager::ConvertNodesToPositionAndDirection(const RouteNode *  lpPrevNode, const RouteNode *  lpNextNode, float32_t  lfRoadSide, float32_t  lfResetDistance, ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:712
		const AISection * lpNextSection;

		// BrnResetOnTrackManager.cpp:713
		const AISection * lpPrevSection;

		// BrnResetOnTrackManager.cpp:721
		Vector3 lNextPortalPosition;

		// BrnResetOnTrackManager.cpp:722
		Vector3 lPrevPortalPosition;

		// BrnResetOnTrackManager.cpp:723
		Vector3 lDirection;

		// BrnResetOnTrackManager.cpp:725
		const Portal * lPrevPortal;

		// BrnResetOnTrackManager.cpp:726
		const Portal * lNextPortal;

		// BrnResetOnTrackManager.cpp:728
		const BoundaryLine * lpPrevBoundaryLine;

		// BrnResetOnTrackManager.cpp:729
		const BoundaryLine * lpNextBoundaryLine;

		// BrnResetOnTrackManager.cpp:733
		Vector2 l2DBoundaryOut;

		// BrnResetOnTrackManager.cpp:734
		Vector2 l2DBoundaryIn;

		// BrnResetOnTrackManager.cpp:752
		const AICar * lpPlayerAICar;

	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	Portal::GetBoundaryLine(/* parameters */);
	Portal::GetBoundaryLine(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	Portal::GetPosition(/* parameters */);
	Portal::GetPosition(/* parameters */);
	GetAICar(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
		{
			{
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:1112
void BrnAI::ResetOnTrackManager::ResetAheadFromSideTurnings(ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1115
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1129
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:1130
		const RouteNode * lpNextNode;

		// BrnResetOnTrackManager.cpp:1132
		float32_t lfResetDistance;

	}
	GetAICar(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	AICar::GetRandomNumber(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:1049
void BrnAI::ResetOnTrackManager::ResetFixedDistanceBehindPlayerAtStartOfRace(ResetData *  lpResetData, float32_t  lfResetDistance, EGlobalRaceCarIndex  leCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:1051
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:1060
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:1061
		const RouteNode * lpNextNode;

		// BrnResetOnTrackManager.cpp:1068
		float32_t lfRoadSide;

	}
	GetAICar(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:954
void BrnAI::ResetOnTrackManager::ResetFixedDistanceAheadPlayerDuringReverse(ResetData *  lpResetData, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:956
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:960
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:961
		const RouteNode * lpNextNode;

	}
	GetAICar(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:908
void BrnAI::ResetOnTrackManager::ResetFixedDistanceAheadOfPlayer(ResetData *  lpResetData, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:910
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:914
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:915
		const RouteNode * lpNextNode;

	}
	GetAICar(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:862
void BrnAI::ResetOnTrackManager::ResetFixedDistanceBehindPlayer(ResetData *  lpResetData, float32_t  lfResetDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:864
		const AICar * lpPlayerAICar;

		// BrnResetOnTrackManager.cpp:868
		const RouteNode * lpPrevNode;

		// BrnResetOnTrackManager.cpp:869
		const RouteNode * lpNextNode;

	}
	GetAICar(/* parameters */);
	AICar::GetBestSectionIndex(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:2429
void BrnAI::ResetOnTrackManager::UpdateResetOnTrackSectionUsingCurrentSection(AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2431
		uint16_t luCurrentSectionIndex;

		// BrnResetOnTrackManager.cpp:2432
		bool lbIsOverwrittenSection;

		// BrnResetOnTrackManager.cpp:2433
		bool lbUseOverwrittenSection;

		{
			// BrnResetOnTrackManager.cpp:2437
			const AISection * lpAISection;

			// BrnResetOnTrackManager.cpp:2438
			const SectionResetPair * lpSectionResetPair;

			// BrnResetOnTrackManager.cpp:2439
			BrnAI::EResetSpeedType leResetSpeedType;

			// BrnResetOnTrackManager.cpp:2440
			int32_t liJumpPairIndex;

			// BrnResetOnTrackManager.cpp:2441
			int32_t liNumGoodPortalsFound;

			// BrnResetOnTrackManager.cpp:2442
			uint8_t luFirstGoodPortalIndex;

			// BrnResetOnTrackManager.cpp:2443
			uint8_t luSecondGoodPortalIndex;

			// BrnResetOnTrackManager.cpp:2444
			uint8_t luPortalIndex;

			// BrnResetOnTrackManager.cpp:2445
			bool lbPortalsFound;

		}
	}
	AISectionsData::GetSectionResetPair(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AICar::SetInResetPairSection(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsInAir(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:2508
		Vector3 lPosition0;

		// BrnResetOnTrackManager.cpp:2509
		Vector3 lPosition1;

		// BrnResetOnTrackManager.cpp:2510
		Vector3 lCarDirection;

		// BrnResetOnTrackManager.cpp:2511
		uint8_t luStartPortal;

		// BrnResetOnTrackManager.cpp:2512
		uint8_t luEndPortal;

		Portal::GetPosition(/* parameters */);
		Portal::GetPosition(/* parameters */);
		AICar::GetPosition(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator-(/* parameters */);
		SectionResetPair::GetResetSpeed(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	AICar::SetInResetPairSection(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:2479
		const Portal * lpPortal;

		// BrnResetOnTrackManager.cpp:2480
		const AISection * lpLinkSection;

	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	AISectionsData::GetAISection(/* parameters */);
	AISection::IsUnsuitableForResetOnTrackLink(/* parameters */);
	AISection::IsUnsuitableForResetOnTrackLink(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:2331
void BrnAI::ResetOnTrackManager::UpdateResetOnTrackSection(AICar *  lpAICar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResetOnTrackManager.cpp:2250
void BrnAI::ResetOnTrackManager::TestSectionHNG(const AISection *  lpAISection, const rw::math::vpu::Vector2  lStartPos, const rw::math::vpu::Vector2  lEndPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2256
		int32_t liPortalIndex;

		// BrnResetOnTrackManager.cpp:2257
		bool lbHit;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:2265
		const AISection * lpLinkAISection;

		AISectionsData::GetAISection(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnAI::AISectionsData>::operator->(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:2213
void BrnAI::ResetOnTrackManager::TestCarHNG(const AISection *  lpAISection, const BrnAI::NearbyVehicles *  laNearbyVehicles, const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lDirection, float32_t  lfSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:2218
		Vector2 lAheadPosition;

		// BrnResetOnTrackManager.cpp:2219
		Vector2 lCloseAheadPosition;

		// BrnResetOnTrackManager.cpp:2220
		Vector2 lRightVector;

		// BrnResetOnTrackManager.cpp:2221
		bool lbHit;

	}
	BrnMath::IsNormal(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnResetOnTrackManager.cpp:547
void BrnAI::ResetOnTrackManager::AvoidObstacles(const ResetOnTrackRequest *  lpRequest, ResetData *  lpResetData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:551
		const AICar * lpAICar;

		// BrnResetOnTrackManager.cpp:552
		const AIDriver * lpAIDriver;

		// BrnResetOnTrackManager.cpp:553
		const BrnAI::NearbyVehicles * lpNearbyVehicles;

		// BrnResetOnTrackManager.cpp:554
		Vector3 lSweepDirection;

		// BrnResetOnTrackManager.cpp:555
		Vector2 lPosition2D;

		// BrnResetOnTrackManager.cpp:556
		Vector2 lDirection2D;

		// BrnResetOnTrackManager.cpp:557
		bool lbTestRecentResets;

		// BrnResetOnTrackManager.cpp:596
		int32_t liAttemptIndex;

		// BrnResetOnTrackManager.cpp:597
		float32_t[2] labSideBlocked;

		// BrnResetOnTrackManager.cpp:598
		Vector3[2] laSideDirections;

	}
	AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
	GetAICar(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	AIModuleIO::ResetOnTrackRequest::GetResetType(/* parameters */);
	AICar::IsActive(/* parameters */);
	AIDriver::GetNearbyVehicles(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:603
		int32_t liSweepSide;

		{
			// BrnResetOnTrackManager.cpp:610
			Vector3 lSweepVector;

			// BrnResetOnTrackManager.cpp:611
			Vector2 lSweepVector2D;

		}
	}
	rw::math::vpu::operator+(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:643
		float32_t liCarOffset;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnResetOnTrackManager.cpp:379
void BrnAI::ResetOnTrackManager::ComputeResetOnTrack(ResetData *  lpResetData, const ResetOnTrackRequest *  lpRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:385
		bool lbSuccess;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:443
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnResetOnTrackManager.cpp:409
		float32_t lfResetDistance;

		AIModuleIO::ResetOnTrackRequest::GetResetDistance(/* parameters */);
	}
}

// BrnResetOnTrackManager.cpp:203
void BrnAI::ResetOnTrackManager::ProcessResetOnTrackRequest(const ResetOnTrackRequest *  lpRequest, AIModuleResultInterface *  lpResultInterface, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:205
		ResetData lResetData;

	}
	{
		// BrnResetOnTrackManager.cpp:209
		BrnAI::ResetOnTrackManager::RecentResetEntry lRecentResetEntry;

		// BrnResetOnTrackManager.cpp:210
		AICar * lpCar;

		// BrnResetOnTrackManager.cpp:211
		float32_t lfResetSpeed;

		AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
		GetAICar(/* parameters */);
		AIModuleIO::ResetOnTrackRequest::GetResetSpeed(/* parameters */);
		AIModuleIO::AIModuleResultInterface::AddResetOnTrackResult(/* parameters */);
		AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
		AIModuleIO::ResetOnTrackResult::Construct(/* parameters */);
		CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Push(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetEvent(/* parameters */);
	AIModuleIO::AIModuleResultInterface::AddResetOnTrackResult(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
	AIModuleIO::ResetOnTrackResult::Construct(/* parameters */);
	AIModuleIO::ResetOnTrackRequest::GetResetSpeed(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnResetOnTrackManager.cpp:104
void BrnAI::ResetOnTrackManager::Update(AIModuleResultInterface *  lpResultInterface, EGlobalRaceCarIndex  lePlayerGlobalRaceCarIndex, float32_t  lfTime, Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResetOnTrackManager.cpp:107
		EGlobalRaceCarIndex leGlobalRaceCarIndex;

		// BrnResetOnTrackManager.cpp:108
		int32_t liLength;

		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::GetLength(/* parameters */);
	}
	operator=(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:120
		float32_t lfRecentTime;

		CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::operator[](/* parameters */);
	}
	{
		// BrnResetOnTrackManager.cpp:131
		const ResetOnTrackRequest * lpRequest;

		// BrnResetOnTrackManager.cpp:132
		const AICar * lpPlayerCar;

		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::operator[](/* parameters */);
		GetAICar(/* parameters */);
		AICar::GetBestSectionIndex(/* parameters */);
		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::operator[](/* parameters */);
		CgsContainers::Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u>::Erase(/* parameters */);
	}
	{
		// BrnResetOnTrackManager.cpp:152
		AICar * lpAIcar;

		GetAICar(/* parameters */);
	}
	operator++(/* parameters */);
	CgsContainers::RingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry>::Pop(/* parameters */);
	{
		// BrnResetOnTrackManager.cpp:135
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		AIModuleIO::ResetOnTrackRequest::GetGlobalRaceCarIndex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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

// BrnResetOnTrackManager.cpp:32
// BrnResetOnTrackManager.cpp:33
// BrnResetOnTrackManager.cpp:34
// BrnResetOnTrackManager.cpp:35
// BrnResetOnTrackManager.cpp:37
// BrnResetOnTrackManager.cpp:39
// BrnResetOnTrackManager.cpp:30
// BrnResetOnTrackManager.cpp:46
// BrnResetOnTrackManager.cpp:40
// BrnResetOnTrackManager.cpp:42
// BrnResetOnTrackManager.cpp:43
// BrnResetOnTrackManager.cpp:44
// BrnResetOnTrackManager.cpp:48
// BrnResetOnTrackManager.cpp:50
// BrnResetOnTrackManager.cpp:51
// BrnResetOnTrackManager.cpp:53
// BrnResetOnTrackManager.cpp:54
// BrnResetOnTrackManager.cpp:55
// BrnResetOnTrackManager.cpp:72
// BrnResetOnTrackManager.cpp:74
// BrnResetOnTrackManager.cpp:73
