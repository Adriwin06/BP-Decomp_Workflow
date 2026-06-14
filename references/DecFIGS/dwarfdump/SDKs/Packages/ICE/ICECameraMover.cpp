// ICECameraMover.cpp:37
void ICE::ICECameraAnchor::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:52
void ICE::ICECameraAnchor::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:167
void ICE::ICECameraAnchor::GetVelocityMagnitude() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:574
void ICE::ICECameraMover::UpdateConstraints(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:367
void ICE::ICECameraMover::UpdateScreenshots(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:663
void ICE::ICECameraMover::UpdateAccelOffset(float32_t  lfTimeStep, Vector3 *  pAccelOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:134
void ICE::ICECameraAnchor::GetVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// ICECameraMover.cpp:150
void ICE::ICECameraAnchor::GetAcceleration() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector3::Vector3(/* parameters */);
}

// ICECameraMover.cpp:69
void ICE::ICECameraAnchor::SetAnchor(const const ICE::CameraSpaceHandler &  lSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ICECameraMover.cpp:118
void ICE::ICECameraAnchor::GetGeometryOrientation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// ICECameraMover.cpp:556
void ICE::ICECameraMover::UpdateLetterBox(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:381
void ICE::ICECameraMover::UpdateSimTime(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ICEMath::Clamp(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// ICECameraMover.cpp:301
void ICE::ICECameraMover::UpdateBloom(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:303
		float32_t lfBloomthreshold;

		// ICECameraMover.cpp:307
		float32_t lfBloomLuminance;

	}
	ICEMath::Clamp(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
}

// ICECameraMover.cpp:225
void ICE::ICECameraMover::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:86
void ICE::ICECameraAnchor::GetGeometryPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:339
void ICE::ICECameraMover::UpdateHardCuts(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:341
		int32_t current_interval;

		ICETake::IsHardCut(/* parameters */);
	}
	{
		// ICECameraMover.cpp:348
		Vector3 lGeometryPos;

		// ICECameraMover.cpp:349
		Vector3 lForwardVec;

	}
}

// ICECameraMover.cpp:102
void ICE::ICECameraAnchor::GetForwardVector() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:521
void ICE::ICECameraMover::UpdateFade(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:523
		float32_t fade;

		// ICECameraMover.cpp:525
		int32_t color;

	}
	ICEMath::Clamp(/* parameters */);
}

// ICECameraMover.cpp:474
void ICE::ICECameraMover::UpdateFocus(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:479
		float32_t lfBlurriness;

	}
	{
		// ICECameraMover.cpp:483
		float32_t lfFocusFalloff;

		// ICECameraMover.cpp:484
		float32_t lfPerfectFocusStartDistanceMeters;

		// ICECameraMover.cpp:485
		float32_t lfPerfectFocusEndDistanceMeters;

		// ICECameraMover.cpp:487
		float32_t lfFocusStartDistanceMeters;

		// ICECameraMover.cpp:488
		float32_t lfFocusEndDistanceMeters;

	}
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// ICECameraMover.cpp:420
void ICE::ICECameraMover::UpdateOverlay(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:424
		int32_t overlay;

	}
}

// ICECameraMover.cpp:398
void ICE::ICECameraMover::UpdateEventTag(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:402
		uint32_t eventTag;

	}
}

// ICECameraMover.cpp:252
void ICE::ICECameraMover::UpdateFrameBegin(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:683
void ICE::ICECameraMover::UpdateForwardVector(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:685
		Vector3 v;

		// ICECameraMover.cpp:686
		const Vector3 lFwd;

		// ICECameraMover.cpp:687
		float32_t fDot;

		// ICECameraMover.cpp:689
		float32_t fDrift;

		ICEMath::Dot(/* parameters */);
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	ICEMath::Normalize(/* parameters */);
	ICEMath::Clamp(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Max<float>(/* parameters */);
	ICEMath::Scale(/* parameters */);
	ICEMath::ScaleAdd(/* parameters */);
	ICEMath::Add(/* parameters */);
	ICEMath::ScaleAdd(/* parameters */);
}

// ICECameraMover.cpp:447
void ICE::ICECameraMover::UpdateLens(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:449
		float32_t lensLength;

		// ICECameraMover.cpp:454
		Angle fieldOfView;

		ICEMath::ConvertLensLengthToFovAngle(/* parameters */);
	}
	{
	}
	ICEValue::GetFloat(/* parameters */);
	std(/* parameters */);
	ICEMath::Clamp(/* parameters */);
	ICEValue::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	Angle::SetFromVecFloat(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
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
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	ICEMath::Angles::AngToDeg(/* parameters */);
}

// ICECameraMover.cpp:190
void ICE::ICECameraMover::Construct(int32_t  liViewIndex, ICE::ICECameraAnchor *  lpCar, ICECamera *  lpCamera, ICETake *  lpTake, ICEGroup *  lpShakeGroup, const ICE::IResourceManager *  lpResourceMgr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:206
		Vector3 lICEGeometryPos;

		// ICECameraMover.cpp:207
		Vector3 lICEForwardVec;

	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
}

// ICECameraMover.cpp:708
void ICE::ICECameraMover::CreateLookAtMatrix(Matrix4 *  mat, const Vector3 &  eye, const Vector3 &  center, Angle  dutch) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:710
		Vector3 lvLook;

		// ICECameraMover.cpp:711
		Vector3 lvLeft;

		// ICECameraMover.cpp:712
		Vector3 lvUp;

		// ICECameraMover.cpp:717
		float32_t lfLookLength;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		ICEMath::Length(/* parameters */);
	}
	{
	}
	ICEMath::Sub(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	ICEMath::Normalize(/* parameters */);
	ICEMath::Cross(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ICEMath::RotateZ(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	ICEMath::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetX(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_sel(/* parameters */);
	vec_and(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_cts(/* parameters */);
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
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// ICECameraMover.cpp:748
void ICE::ICECameraMover::TransformToWorld(const rw::math::vpu::Vector3  lPosition, uint8_t  space, uint8_t  avatar, uint8_t  lag, uint8_t  bungee, float32_t  param) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:594
void ICE::ICECameraMover::UpdateTransformationMatrix(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECameraMover.cpp:596
		float32_t eyeX;

		// ICECameraMover.cpp:597
		float32_t eyeY;

		// ICECameraMover.cpp:598
		float32_t eyeZ;

		// ICECameraMover.cpp:599
		Vector3 vEye;

		// ICECameraMover.cpp:601
		float32_t lookX;

		// ICECameraMover.cpp:602
		float32_t lookY;

		// ICECameraMover.cpp:603
		float32_t lookZ;

		// ICECameraMover.cpp:604
		Vector3 vLook;

		// ICECameraMover.cpp:606
		float32_t param;

		// ICECameraMover.cpp:607
		int32_t lag;

		// ICECameraMover.cpp:608
		int32_t bungee;

		// ICECameraMover.cpp:610
		int32_t space;

		// ICECameraMover.cpp:611
		int32_t avatar;

		// ICECameraMover.cpp:625
		Matrix44Affine lCameraXform;

		// ICECameraMover.cpp:638
		float32_t lfDutch;

	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	ICETake::GetParameter(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::RotateAroundZAxis(/* parameters */);
	vec_add(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_and(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
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
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ICECameraMover.cpp:271
void ICE::ICECameraMover::UpdateFrameEnd(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECameraMover.cpp:323
void ICE::ICECameraMover::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// _built-in_
namespace :: {
	// ICECameraMover.cpp:18
	const float32_t KI_DEPTH_OF_FIELD_MAX_FALLOFF_DISTANCE;

	// ICECameraMover.cpp:19
	const float32_t KI_DEPTH_OF_FIELD_MIN_FALLOFF_DISTANCE;

}

