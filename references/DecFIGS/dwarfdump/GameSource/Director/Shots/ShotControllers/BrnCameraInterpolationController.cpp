// BrnCameraInterpolationController.cpp:53
void BrnDirector::CameraInterpolationController::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraInterpolationController.cpp:38
void BrnDirector::CameraInterpolationController::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraInterpolationController.cpp:240
void BrnDirector::CameraInterpolationController::ExtractRotateAboutPivotParams(const rw::math::vpu::Matrix44Affine &  lIn, const rw::math::vpu::Matrix44Affine &  lInverseCarTransform, BrnDirector::CameraInterpolationController::RotateAboutPivotParams *  lpRotateParamsOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraInterpolationController.cpp:242
		Matrix44Affine lLocalTransform;

		// BrnCameraInterpolationController.cpp:243
		Matrix44Affine lLookAt;

		// BrnCameraInterpolationController.cpp:244
		Vector3 lFromCar;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::InverseOrthonormal(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	{
	}
	rw::math::vpu::Matrix33::operator=(/* parameters */);
}

// BrnCameraInterpolationController.cpp:274
void BrnDirector::CameraInterpolationController::Matrix44AffineFromRotateAboutPivotParams(const const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &  lParams, const rw::math::vpu::Matrix44Affine &  lCarTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraInterpolationController.cpp:276
		Matrix44Affine lLocalTransform;

		// BrnCameraInterpolationController.cpp:277
		Matrix33 lCarLocalRotation;

		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		{
		}
		{
		}
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
	}
}

// BrnCameraInterpolationController.cpp:187
void BrnDirector::CameraInterpolationController::RotateAboutPivotParams::Interpolate(const const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &  lFrom, const const BrnDirector::CameraInterpolationController::RotateAboutPivotParams &  lTo, const VecFloat  lT, const Interpolater &  lInterpolaterA, const Interpolater &  lInterpolaterB, BrnDirector::CameraInterpolationController::RotateAboutPivotParams *  lpOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
}

// BrnCameraInterpolationController.cpp:210
void BrnDirector::CameraInterpolationController::RotateAboutPivot(const rw::math::vpu::Matrix44Affine &  lCarTransform, const rw::math::vpu::Matrix44Affine &  lFrom, const rw::math::vpu::Matrix44Affine &  lTo, const VecFloat  lT, const Interpolater &  lInterpolaterA, const Interpolater &  lInterpolaterB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraInterpolationController.cpp:214
		Matrix44Affine lInverseCarTransform;

		// BrnCameraInterpolationController.cpp:218
		BrnDirector::CameraInterpolationController::RotateAboutPivotParams lFromParams;

		// BrnCameraInterpolationController.cpp:219
		BrnDirector::CameraInterpolationController::RotateAboutPivotParams lToParams;

		// BrnCameraInterpolationController.cpp:220
		BrnDirector::CameraInterpolationController::RotateAboutPivotParams lInterpolated;

		rw::math::vpu::operator>=(/* parameters */);
	}
	rw::math::vpu::operator<=(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnCameraInterpolationController.cpp:72
void BrnDirector::CameraInterpolationController::Update(Camera *  lpCamera, const const Camera &  lBlendCamera, const rw::math::vpu::Matrix44Affine &  lPivotPoint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraInterpolationController.cpp:75
		float lfMappedT;

		// BrnCameraInterpolationController.cpp:117
		VecFloat lMappedT;

	}
	Camera::Camera::GetEffects(/* parameters */);
	Camera::CameraEffects::GetGameCameraBlend(/* parameters */);
	Camera::Camera::GetState(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	Camera::Camera::GetState(/* parameters */);
	Camera::CameraState::IsFlagSet(/* parameters */);
	operator=(/* parameters */);
	Camera::Camera::GetDepthOfField(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
	Camera::Camera::GetFOV(/* parameters */);
	Camera::Camera::SetFOV(/* parameters */);
	Camera::Camera::GetNearClipDistance(/* parameters */);
	Camera::Camera::GetNearClipDistance(/* parameters */);
	Camera::Camera::SetCustomNearClipDistance(/* parameters */);
	Camera::CameraEffects::SetGameCameraBlend(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Camera::Camera::SetTransform(/* parameters */);
	Camera::Camera::SetTransform(/* parameters */);
	{
		// BrnCameraInterpolationController.cpp:105
		const float32_t lfBase;

		rw::math::fpu::Pow(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_sel(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

