// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficVehicle.cpp:85
	RwBool _TriangleLineSegIntersect(Vector3, Vector3, Vector3, Vector3, Vector3, Vector3 &, Vector3 &);

	// BrnTrafficVehicle.cpp:34
	const VecFloat KF_AXLE_LINE_TEST_HALF_HEIGHT;

	// BrnTrafficVehicle.cpp:37
	const float32_t KF_TRIANGLE_INTERSECT_EPSILONlhs;

	// BrnTrafficVehicle.cpp:38
	const float32_t KF_TRIANGLE_INTERSECT_EDGE_EPSILONlhs;

	// BrnTrafficVehicle.cpp:39
	const VecFloat KF_TRIANGLE_INTERSECT_EPSILON;

	// BrnTrafficVehicle.cpp:40
	const VecFloat KF_TRIANGLE_INTERSECT_EDGE_EPSILON;

	// BrnTrafficVehicle.cpp:43
	const VecFloat KF_MIN_CORRECTION_DIST_SQ;

}

// BrnTrafficVehicle.cpp:743
void BrnTraffic::Vehicle::OnPhysical(BrnPhysics::Vehicle::eCrashTrafficType  leCrashTrafficType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficVehicle.cpp:58
void BrnTraffic::Axle::Initialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3Plus::SetVector(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
}

// BrnTrafficVehicle.cpp:342
void BrnTraffic::Vehicle::Construct(VehicleAxles *  lpAxles, const Matrix44Affine &  lOutMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
}

// BrnTrafficVehicle.cpp:316
void BrnTraffic::VehicleAxles::SetFromVehicleTransform(const rw::math::vpu::Matrix44Affine &  lTransform, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const VehicleTypeUpdateData *  lpVehicleTypeUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:318
		Vector3 lFrontAxlePos;

		// BrnTrafficVehicle.cpp:319
		Vector3 lBackAxlePos;

		VehicleTypeRuntime::GetForwardAxleOffset(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::At(/* parameters */);
		VecFloat<VectorAxisW>(/* parameters */);
		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
		VehicleTypeRuntime::GetBackAxleOffset(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Matrix44Affine::Up(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		Axle::SetUp(/* parameters */);
		Axle::SetUp(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	}
}

// BrnTrafficVehicle.cpp:623
void BrnTraffic::Vehicle::UpdateEffects(float32_t  lfTimeDelta, int32_t  liBulbWarmthDelta, Random *  lpRand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:625
		int32_t liHeadlightWarmth;

		// BrnTrafficVehicle.cpp:626
		int32_t liIndicatorWarmth;

		// BrnTrafficVehicle.cpp:628
		bool lbIndicatorsOn;

		IsCrashing(/* parameters */);
		SetFlashingHeadlights(/* parameters */);
		IsAlarmOn(/* parameters */);
		IsLeftIndicatorOn(/* parameters */);
		AreHeadlightsFlashed(/* parameters */);
		BrnMath::IntMax(/* parameters */);
		BrnMath::IntMin(/* parameters */);
		IsIndicatingLeft(/* parameters */);
		IsIndicatingRight(/* parameters */);
		IsRightIndicatorOn(/* parameters */);
		BrnMath::IntMin(/* parameters */);
	}
	GetCurrentManoeuvre(/* parameters */);
	IsFlashingHeadlights(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:670
		bool lbHeadlightsFlashed;

		// BrnTrafficVehicle.cpp:672
		bool lbPatternPlaying;

		AreHeadlightsFlashed(/* parameters */);
		SetHeadlightsFlashed(/* parameters */);
		SetFlashingHeadlights(/* parameters */);
	}
	IsIndicatingLeft(/* parameters */);
	IsIndicatingRight(/* parameters */);
	IsSympatheticallyCrashing(/* parameters */);
	SetHeadlightsFlashed(/* parameters */);
	IsLeftIndicatorOn(/* parameters */);
	BrnMath::IntMax(/* parameters */);
	IsIndicatingLeft(/* parameters */);
	ToggleLeftIndicatorOn(/* parameters */);
	IsIndicatingRight(/* parameters */);
	ToggleRightIndicatorOn(/* parameters */);
	SetHeadlightsFlashed(/* parameters */);
}

// BrnTrafficVehicle.cpp:473
void BrnTraffic::Vehicle::InitialiseAsStatic(VehicleAxles *  lpAxles, const Matrix44Affine &  lOutMatrix, float32_t  lfRandomVal, uint32_t  luVehicleType, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const VehicleTypeUpdateData *  lpVehicleTypeUpdate, const rw::math::vpu::Matrix44Affine &  lTransform, uint32_t  luVehicle, const VehicleSoaData &  lVehicleSoaData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrafficVehicle.cpp:156
void BrnTraffic::Axle::TryIntersectWithLane(const const BrnTraffic::LaneRung &  lRung0, const const BrnTraffic::LaneRung &  lRung1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:158
		Vector3 lLineTop;

		// BrnTrafficVehicle.cpp:159
		Vector3 lLineBottom;

		// BrnTrafficVehicle.cpp:160
		Vector3 lLineDelta;

		// BrnTrafficVehicle.cpp:161
		Vector3 lCorner0;

		// BrnTrafficVehicle.cpp:162
		Vector3 lCorner1;

		// BrnTrafficVehicle.cpp:163
		Vector3 lCorner2;

		// BrnTrafficVehicle.cpp:164
		Vector3 lCorner3;

		// BrnTrafficVehicle.cpp:165
		Vector3 lNewPos;

		// BrnTrafficVehicle.cpp:166
		Vector3 lNormal;

		rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:190
		Vector3 lOldPos;

		// BrnTrafficVehicle.cpp:191
		Vector3 lDiff;

		// BrnTrafficVehicle.cpp:192
		VecFloat lfDistSq;

		rw::math::vpu::operator-(/* parameters */);
	}
	BrnMath::IsNormal(/* parameters */);
	{
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::CompGreaterThan(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	SetUp(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:200
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		// BrnTrafficVehicle.cpp:201
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
}

// BrnTrafficVehicle.cpp:278
void BrnTraffic::VehicleAxles::UpdateRearAxleForRoadCollision(const BrnTraffic::Param *  lpParam, BrnTraffic::Hull **  lpapHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:280
		uint32_t luHistoryIndex;

		// BrnTrafficVehicle.cpp:281
		uint32_t luHullIndex;

		// BrnTrafficVehicle.cpp:282
		uint32_t luSegmentIndex;

	}
	{
		// BrnTrafficVehicle.cpp:293
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficVehicle.cpp:294
		const const BrnTraffic::LaneRung & lRung0;

		// BrnTrafficVehicle.cpp:295
		const const BrnTraffic::LaneRung & lRung1;

		Param::GetHistoryEntry(/* parameters */);
	}
}

// BrnTrafficVehicle.cpp:222
void BrnTraffic::Axle::ForceIntersectWithLane(const const BrnTraffic::LaneRung &  lRung0, const const BrnTraffic::LaneRung &  lRung1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:224
		Vector3 lCorner0;

		// BrnTrafficVehicle.cpp:225
		Vector3 lCorner1;

		// BrnTrafficVehicle.cpp:226
		Vector3 lCorner2;

		// BrnTrafficVehicle.cpp:227
		Vector3 lEdge0;

		// BrnTrafficVehicle.cpp:228
		Vector3 lEdge1;

		// BrnTrafficVehicle.cpp:229
		Vector3 lNormal;

		// BrnTrafficVehicle.cpp:230
		VecFloat lPlaneDist;

		// BrnTrafficVehicle.cpp:231
		VecFloat lfIsectParam;

		// BrnTrafficVehicle.cpp:232
		Vector3 lOldPos;

		// BrnTrafficVehicle.cpp:233
		Vector3 lNewPos;

		rw::math::vpu::Cross(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:244
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:249
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::ReciprocalFast(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	SetUp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
		// BrnTrafficVehicle.cpp:245
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnTrafficVehicle.cpp:537
void BrnTraffic::Vehicle::InitialiseAsTrailer(VehicleAxles *  lpAxles, const Matrix44Affine &  lOutMatrix, const BrnTraffic::Param *  lpParam, float32_t  lfRandomVal, BrnTraffic::Hull **  lpapHulls, uint32_t  luVehicleType, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const VehicleTypeUpdateData *  lpVehicleTypeUpdate, const Vehicle *  lpCabVehicle, const rw::math::vpu::Matrix44Affine &  lCabTransform, const VehicleTypeUpdateData *  lpCabVehicleTypeUpdate, const VehicleTypeRuntime *  lpCabVehicleTypeRuntime, uint32_t  luVehicle, const VehicleSoaData &  lVehicleSoaData, uint16_t  luCabIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:550
		Matrix44Affine lTransform;

		// BrnTrafficVehicle.cpp:562
		Vector3 lArticulationPoint;

		// BrnTrafficVehicle.cpp:563
		Vector3 lFrontAxlePos;

		// BrnTrafficVehicle.cpp:564
		Vector3 lBackAxlePos;

		// BrnTrafficVehicle.cpp:573
		uint32_t luHull;

		// BrnTrafficVehicle.cpp:574
		uint32_t luSegment;

		// BrnTrafficVehicle.cpp:576
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficVehicle.cpp:577
		const const BrnTraffic::LaneRung & lRung0;

		// BrnTrafficVehicle.cpp:578
		const const BrnTraffic::LaneRung & lRung1;

	}
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CalcTowBarPos(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VehicleTypeRuntime::GetCabPivotDistance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	CalcFrontAxlePos(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VehicleTypeRuntime::GetForwardAxleOffset(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	VehicleTypeRuntime::GetTrailerPivotDistance(/* parameters */);
	VehicleTypeRuntime::GetBackAxleOffset(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	Param::GetHistoryEntry(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	GetSpeed(/* parameters */);
	SetSpeed(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
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

// BrnTrafficVehicle.cpp:388
void BrnTraffic::Vehicle::InitialiseAsStandard(VehicleAxles *  lpAxles, const Matrix44Affine &  lOutMatrix, const BrnTraffic::Param *  lpParam, float32_t  lfRandomVal, BrnTraffic::Hull **  lpapHulls, uint32_t  luVehicleType, const VehicleTypeRuntime *  lpVehicleTypeRuntime, const VehicleTypeUpdateData *  lpVehicleTypeUpdate, const BrnTraffic::VehicleTraits *  lpVehicleTraits, float32_t  lfDistAcrossLane, float32_t  lfSpeed, const rw::math::vpu::Vector3  lParamPos, const rw::math::vpu::Vector3  lParamDirection, uint32_t  luVehicle, const VehicleSoaData &  lVehicleSoaData, uint16_t  luTrailerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficVehicle.cpp:408
		Vector3 lFrontAxlePos;

		// BrnTrafficVehicle.cpp:410
		Vector3 lBackAxlePos;

		// BrnTrafficVehicle.cpp:419
		uint32_t luHull;

		// BrnTrafficVehicle.cpp:420
		uint32_t luSegment;

		// BrnTrafficVehicle.cpp:422
		const BrnTraffic::Hull * lpHull;

		// BrnTrafficVehicle.cpp:423
		const const BrnTraffic::LaneRung & lRung0;

		// BrnTrafficVehicle.cpp:424
		const const BrnTraffic::LaneRung & lRung1;

	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsContainers::FastBitArray<601>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	VehicleTypeRuntime::GetForwardAxleOffset(/* parameters */);
	VecFloat<VectorAxisW>(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	VehicleTypeRuntime::GetBackAxleOffset(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	Param::GetHistoryEntry(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	CgsContainers::FastBitArray<601>::SetBit(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

