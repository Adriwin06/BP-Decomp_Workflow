// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnCameraEffects.h:32
	namespace Camera {
		// BrnCollisionPolicy.cpp:161
		const VecFloat KVF_MIN_CAMERA_DIST;

		// BrnCollisionPolicy.cpp:795
		const uint32_t KU_TEST_PROBABILITY = 20;

	}

}

// BrnCollisionPolicy.cpp:80
void BrnDirector::Camera::FrustrumCollisionResolver::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionPolicy.cpp:571
void BrnDirector::Camera::VisibilityTest::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionPolicy.cpp:705
void BrnDirector::Camera::GroundConstraint::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCollisionPolicy.cpp:65
void BrnDirector::Camera::FrustrumCollisionResolver::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnCollisionPolicy.cpp:512
void BrnDirector::Camera::GeometryCollisionPredictor::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnCollisionPolicy.cpp:333
void BrnDirector::Camera::FrustrumCollisionResolver::GetHeightAboveTraffic(const VecFloat  lvfTopCurveFactor, const VecFloat  lvfBottomCurveFactor, const VecFloat  lvfDistanceFromCentre) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:335
		VecFloat lvfClampedDistanceFromCentre;

		// BrnCollisionPolicy.cpp:338
		VecFloat lvfCosDistance;

		// BrnCollisionPolicy.cpp:341
		VecFloat lvfEllipsoidCurveHeight;

		// BrnCollisionPolicy.cpp:342
		VecFloat lvfSphereCurveNegativeHeight;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Cos(/* parameters */);
		vec_add(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpeq(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnCollisionPolicy.cpp:223
void BrnDirector::Camera::FrustrumCollisionResolver::ResolveVehicleCollision(const rw::math::vpu::Matrix44Affine &  lTrafficTransform, const rw::math::vpu::Vector3  lTrafficExtentsIn, const Vector3 &  lCurrentCameraPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:225
		VecFloat lvfDistanceSq;

		// BrnCollisionPolicy.cpp:226
		VecFloat lvfMinDistance;

		// BrnCollisionPolicy.cpp:227
		VecFloat lvfTrafficRadiusSq;

		// BrnCollisionPolicy.cpp:228
		Vector3 lTrafficAxisUp;

		// BrnCollisionPolicy.cpp:229
		Vector3 lTrafficExtents;

		rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVector3_One(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetYColumn(/* parameters */);
	rw::math::vpu::GetVector3_One(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnCollisionPolicy.cpp:254
		Vector3 lWorldYInTrafficSpace;

		// BrnCollisionPolicy.cpp:255
		VecFloat lTrafficExtentAlongY;

		// BrnCollisionPolicy.cpp:256
		Vector3 lSphereToEllipsoid;

		// BrnCollisionPolicy.cpp:257
		Vector3 lClosestSpherePos;

		// BrnCollisionPolicy.cpp:258
		Vector3 lCameraPosFlattened;

		// BrnCollisionPolicy.cpp:259
		Matrix44Affine lInverseTrafficTransform;

		// BrnCollisionPolicy.cpp:260
		Vector3 lLocalCameraPosFlattened;

		// BrnCollisionPolicy.cpp:261
		VecFloat lvfDist;

		// BrnCollisionPolicy.cpp:262
		VecFloat lvfHeight;

		// BrnCollisionPolicy.cpp:263
		MaskScalar lbAboveCar;

		// BrnCollisionPolicy.cpp:264
		Vector3 lPos;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator/=(/* parameters */);
		rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Abs(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		{
		}
		rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
	}
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
}

// BrnCollisionPolicy.cpp:358
void BrnDirector::Camera::FrustrumCollisionResolver::CalculateFrustumLineTests(const VecFloat  lDesiredNearClip, const Camera &  lCamera, const rw::math::vpu::Vector3  lTarget, const Vector3 &  lForward, const Vector3 &  lUp, const Vector3 &  lLeft, const Vector3 &  lStart, const Vector3 &  lEnd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:361
		VecFloat lNewClipDistance;

		// BrnCollisionPolicy.cpp:364
		VecFloat lHorizontalHalfFOV;

		// BrnCollisionPolicy.cpp:365
		VecFloat lViewportHalfWidth;

		// BrnCollisionPolicy.cpp:373
		VecFloat lViewportHalfHeight;

		rw::math::vpu::GetVecFloat_Half(/* parameters */);
	}
	rw::math::vpu::Tan(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	Camera::GetTransform(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Camera::SetCustomNearClipDistance(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnCollisionPolicy.cpp:390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
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
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnCollisionPolicy.cpp:503
void BrnDirector::Camera::FrustrumCollisionResolver::Resolve(const const CollisionPolicySharedInfo &  lSharedInfo, const LineTestNearestPostBox &  lPostBox, const rw::math::vpu::Vector3  lFrustrumPoint, const rw::math::vpu::Vector3  lPosToTarget, const Vector3 &  lPlaneNormalInOut, const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnCollisionPolicy.cpp:443
void BrnDirector::Camera::FrustrumCollisionResolver::ProcessSceneQueryResults(const const CollisionPolicySharedInfo &  lSharedInfo, const Camera &  lCamera, const rw::math::vpu::Vector3  lTarget, const Vector3 &  lPlaneNormalOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:447
		bool lbHasResolvedAnything;

		// BrnCollisionPolicy.cpp:449
		VecFloat kNearClip;

		// BrnCollisionPolicy.cpp:451
		VecFloat lHorizontalHalfFOV;

		// BrnCollisionPolicy.cpp:452
		VecFloat lViewportWidth;

		// BrnCollisionPolicy.cpp:453
		VecFloat lViewportHeight;

		// BrnCollisionPolicy.cpp:455
		Vector3 lForward;

		// BrnCollisionPolicy.cpp:456
		Vector3 lUp;

		// BrnCollisionPolicy.cpp:457
		Vector3 lLeft;

		// BrnCollisionPolicy.cpp:458
		Vector3 lPos;

		// BrnCollisionPolicy.cpp:459
		Vector3 lPosToTarget;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
	}
	Camera::GetNearClipDistance(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetW(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	Camera::GetTransform(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	vec_and(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Tan(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	std(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
}

// BrnCollisionPolicy.cpp:536
void BrnDirector::Camera::GeometryCollisionPredictor::ProcessSceneQueryResults(float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetPackage(/* parameters */);
	PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetPackage(/* parameters */);
}

// BrnCollisionPolicy.cpp:649
void BrnDirector::Camera::VisibilityTest::ProcessSceneQueryResults(float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:659
		bool lbOccludedThisFrame;

	}
}

// BrnCollisionPolicy.cpp:736
void BrnDirector::Camera::GroundConstraint::ProcessSceneQueryResults(float32_t  lfTimestep, const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:741
		bool lbGotIntersection;

	}
	PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetPackage(/* parameters */);
	PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetPackage(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
}

// BrnCollisionPolicy.cpp:717
void BrnDirector::Camera::GroundConstraint::GenerateSceneQueries(const const Camera &  lCamera, float32_t  lfTimestep, const SceneQueryInterface *  lpRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:721
		Vector3 lStart;

		// BrnCollisionPolicy.cpp:722
		Vector3 lEnd;

	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVector3_YAxis(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnCollisionPolicy.cpp:603
void BrnDirector::Camera::VisibilityTest::GenerateSceneQueries(const const Camera &  lCamera, float32_t  lfTimestep, const Random &  lRandom, const SceneQueryInterface *  lpRequestInterface, const rw::math::vpu::Matrix44Affine &  lTargetTransform, const const AABBox &  lTargetBox, bool  lbDoTests, EntityId  lTargetEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:605
		float32_t sfMaxPerceivedDistance;

		// BrnCollisionPolicy.cpp:606
		const VecFloat kMaxPerceivedDistanceSq;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetW(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetW(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	Camera::GetZoomFactor(/* parameters */);
	rw::math::fpu::Tan(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnCollisionPolicy.cpp:526
void BrnDirector::Camera::GeometryCollisionPredictor::GenerateSceneQueries(const const Camera &  lCamera, float32_t  lfTimestep, const Random &  lRandom, const SceneQueryInterface *  lpRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// BrnCollisionPolicy.cpp:402
void BrnDirector::Camera::FrustrumCollisionResolver::RequestFrustumLineTests(const SceneQueryInterface *  lpRequestInterface, const rw::math::vpu::Vector3  lStart, const rw::math::vpu::Vector3  lLeft, const rw::math::vpu::Vector3  lUp, const rw::math::vpu::Vector3  lEnd, const rw::math::vpu::Vector3  lForward) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:404
		Vector3 lLineStart;

		// BrnCollisionPolicy.cpp:405
		Vector3 lLineEnd;

	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		{
		}
	}
	{
		{
		}
	}
	{
		{
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnCollisionPolicy.cpp:167
void BrnDirector::Camera::FrustrumCollisionResolver::ResolveVehicleCollisions(const AllVehicleData *  lpAllVehicles, const rw::math::vpu::Vector3  lCameraPos, const Camera &  lCamera, const rw::math::vpu::Vector3  lTarget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:169
		Vector3 lCurrentCameraPos;

		// BrnCollisionPolicy.cpp:170
		Vector3 lStartPosition;

		// BrnCollisionPolicy.cpp:171
		const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> * lpAllTraffic;

		// BrnCollisionPolicy.cpp:172
		int32_t liNumTrafficVehicles;

		// BrnCollisionPolicy.cpp:189
		Vector3 lResolveVector;

		// BrnCollisionPolicy.cpp:200
		VecFloat lvfDist;

		// BrnCollisionPolicy.cpp:205
		VecFloat lvfAngle;

		AllVehicleData::GetTraffic(/* parameters */);
	}
	CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetLength(/* parameters */);
	{
		// BrnCollisionPolicy.cpp:175
		int32_t liTrafficIndex;

		{
			// BrnCollisionPolicy.cpp:177
			const TrafficDirectorEntity * lpTrafficVehicle;

			CgsContainers::Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>::GetItem(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		// BrnCollisionPolicy.cpp:182
		int32_t liRaceCarIndex;

		AllVehicleData::GetUsedRaceCarsBitArray(/* parameters */);
		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::ATan(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	vec_re(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsNaN(/* parameters */);
	rw::math::vpu::operator==(/* parameters */);
	rw::math::vpu::Matrix44AffineFromXRotationAngle(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	vec_cts(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	vec_ctf(/* parameters */);
	vec_and(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	vec_xor(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnCollisionPolicy.cpp:214
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
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
	{
		// BrnCollisionPolicy.cpp:209
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnCollisionPolicy.cpp:208
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
		// BrnCollisionPolicy.cpp:207
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	{
	}
	{
		// BrnCollisionPolicy.cpp:184
		const VehicleInfo * lpRaceCar;

		AllVehicleData::GetRaceCar(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCollisionPolicy.cpp:97
void BrnDirector::Camera::FrustrumCollisionResolver::GenerateSceneQueries(const const CollisionPolicySharedInfo &  lSharedInfo, const Camera &  lCamera, const rw::math::vpu::Vector3  lTarget, const VecFloat  lVehicleResolveAmount, const VecFloat  lDesiredNearClip, bool  lbResolveVehicleCollisions) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollisionPolicy.cpp:100
		Vector3 lForward;

		// BrnCollisionPolicy.cpp:101
		Vector3 lUp;

		// BrnCollisionPolicy.cpp:102
		Vector3 lLeft;

		// BrnCollisionPolicy.cpp:103
		Vector3 lStart;

		// BrnCollisionPolicy.cpp:104
		Vector3 lEnd;

		rw::math::vpu::IsZero(/* parameters */);
	}
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// BrnCollisionPolicy.cpp:42
// BrnCollisionPolicy.cpp:43
// BrnCollisionPolicy.cpp:44
// BrnCollisionPolicy.cpp:46
// BrnCollisionPolicy.cpp:47
// BrnCollisionPolicy.cpp:38
// BrnCollisionPolicy.cpp:39
// BrnCollisionPolicy.cpp:40
// BrnCollisionPolicy.cpp:49
// BrnCollisionPolicy.cpp:50
// BrnCollisionPolicy.cpp:51
// BrnCollisionPolicy.cpp:52
// BrnCollisionPolicy.cpp:53
// BrnCollisionPolicy.cpp:54
// BrnCollisionPolicy.cpp:35
// BrnCollisionPolicy.cpp:36
// BrnCollisionPolicy.cpp:32
// BrnCollisionPolicy.cpp:33
