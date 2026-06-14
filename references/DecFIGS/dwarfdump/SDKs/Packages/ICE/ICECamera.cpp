// ICEActionQueue.hpp:21
namespace ICE {
	// ICECamera.cpp:472
	extern float32_t NoiseBase(int32_t);

	// ICECamera.cpp:491
	extern float32_t NoiseInterpolated(float32_t);

	// ICECamera.cpp:512
	extern float32_t Noise(float32_t);

}

// ICECamera.cpp:33
void ICE::ICECamera::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:51
void ICE::ICECamera::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:67
void ICE::ICECamera::ClearVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:131
void ICE::ICECamera::SetLetterBox(float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:152
void ICE::ICECamera::SetDepthOfField(float32_t  lfFocusStartDistanceMeters, float32_t  lfPerfectFocusStartDistanceMeters, float32_t  lfPerfectFocusEndDistanceMeters, float32_t  lfFocusEndDistanceMeters, float32_t  lfBlurriness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::Camera::GetDepthOfField(/* parameters */);
	BrnDirector::Camera::DepthOfField::SetParams(/* parameters */);
}

// ICECamera.cpp:171
void ICE::ICECamera::SetFocalDistance(float32_t  lfSacle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:188
void ICE::ICECamera::SetDOFFalloff(float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:205
void ICE::ICECamera::SetDOFMaxIntensity(float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:222
void ICE::ICECamera::SetFieldOfView(float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::Camera::SetFOV(/* parameters */);
}

// ICECamera.cpp:241
void ICE::ICECamera::SetNearZ(float32_t  lfScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:261
void ICE::ICECamera::SetNoiseAmplitude1(float32_t  lfX, float32_t  lfY, float32_t  lfAmplitudeX, float32_t  lfAmplitudeY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:281
void ICE::ICECamera::SetNoiseFrequency1(float32_t  lfX, float32_t  lfY, float32_t  lfFrequencyX, float32_t  lfFrequencyY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:301
void ICE::ICECamera::SetNoiseAmplitude2(float32_t  lfX, float32_t  lfY, float32_t  lfAmplitudeX, float32_t  lfAmplitudeY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:321
void ICE::ICECamera::SetNoiseFrequency2(float32_t  lfX, float32_t  lfY, float32_t  lfFrequencyX, float32_t  lfFrequencyY) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:340
void ICE::ICECamera::ApplyNoise(Matrix4 *  lpMatrix, float32_t  lfTime, float32_t  lfIntensity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:374
void ICE::ICECamera::SetTargetDistance(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:416
void ICE::ICECamera::SetOverlay(int32_t  liOverlay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:434
void ICE::ICECamera::ClearOverlay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:453
void ICE::ICECamera::SetHideOverlay(bool  lbHide) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ICECamera.cpp:84
void ICE::ICECamera::SetSimTimeMultiplier(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::CameraEffects::SetSimTimeScale(/* parameters */);
}

// ICECamera.cpp:353
void ICE::ICECamera::SetBloom(float32_t  lfBloomThreshold, float32_t  lfBloomLuminance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::Camera::GetEffects(/* parameters */);
	BrnDirector::Camera::CameraEffects::SetBloomLuminanceModifier(/* parameters */);
	BrnDirector::Camera::CameraEffects::SetBloomThresholdModifier(/* parameters */);
}

// ICECamera.cpp:104
void ICE::ICECamera::SetFadeColor(float32_t  lfRed, float32_t  lfGreen, float32_t  lfBlue, float32_t  lfAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECamera.cpp:106
		uint32_t luRed;

		// ICECamera.cpp:107
		uint32_t luGreen;

		// ICECamera.cpp:108
		uint32_t luBlue;

		// ICECamera.cpp:109
		uint32_t luAlpha;

		// ICECamera.cpp:113
		uint32_t luColourARGB;

		ICEMath::Clamp(/* parameters */);
		BrnDirector::Camera::CameraEffects::SetFadeColor(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		ICEMath::FloatToUInt(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		ICEMath::FloatToUInt(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		ICEMath::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		ICEMath::FloatToUInt(/* parameters */);
	}
}

// ICECamera.cpp:392
void ICE::ICECamera::SetCameraMatrix(Matrix4 *  lpMatrix, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ICECamera.cpp:395
		Matrix4 lCameraTransform;

		// ICECamera.cpp:396
		Matrix44Affine lCamera;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		BrnDirector::Camera::Camera::SetTransform(/* parameters */);
	}
	BrnDirector::Camera::CameraState::SetFlag(/* parameters */);
	CgsContainers::BitArray<30u>::SetBitToBool(/* parameters */);
}

