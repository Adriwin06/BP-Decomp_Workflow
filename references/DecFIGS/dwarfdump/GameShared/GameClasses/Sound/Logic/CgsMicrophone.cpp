// CgsMicrophone.cpp:80
void CgsSound::Logic::MicrophoneSystem::SetMicrophoneMatrix(const rw::math::vpu::Matrix44Affine &  lMicrophonePosition, CgsSound::Logic::MicrophoneSystem::EMicPositions  leMicPosition, CgsSound::Logic::MicrophoneSystem::EPlayer  lePlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	Microphone::SetMicrophoneMatrix(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	Utils::DataPoint<rw::math::vpu::Matrix44Affine>::operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
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

// CgsMicrophone.cpp:133
void CgsSound::Logic::MicrophoneSystem::Microphone::Update(float32_t  lfFrameTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		{
		}
	}
	{
		{
			{
			}
		}
	}
}

// CgsMicrophone.cpp:106
void CgsSound::Logic::MicrophoneSystem::UpdateMicrophones(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMicrophone.cpp:109
		int32_t liCount;

	}
}

// CgsMicrophone.cpp:158
void CgsSound::Logic::MicrophoneSystem::Microphone::GetDistanceSqrdFromPoint(const rw::math::vpu::Vector3  lInputVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMicrophone.cpp:160
		Vector3 lfVectorBetween;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
	}
}

// CgsMicrophone.cpp:179
void CgsSound::Logic::MicrophoneSystem::Microphone::GetDistanceSqrdFromPoint(const rw::math::vpu::Vector2  lInputVector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMicrophone.cpp:181
		Vector2 lVectorBetween;

		Get2dCurPosition(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
}

// CgsMicrophone.cpp:45
void CgsSound::Logic::MicrophoneSystem::MicrophoneSystem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsMicrophone.cpp:48
		int32_t lCnt;

	}
}

