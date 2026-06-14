// BrnCameraState.cpp:173
void BrnDirector::Camera::CameraState::GetDebugFlagName(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraState.cpp:91
void BrnDirector::Camera::CameraState::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ValidityAccount::ClearNonFailFlags(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<30u>::SetBit(/* parameters */);
	CgsContainers::BitArray<30u>::SetBit(/* parameters */);
}

// BrnCameraState.cpp:74
void BrnDirector::Camera::CameraState::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraState.cpp:104
void BrnDirector::Camera::CameraState::GetFlagAsDataPoint(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnCameraState.cpp:106
	DataPoint<bool> & lDataPoint;

	{
		// BrnCameraState.cpp:106
		CameraState::BoolDataPoint lDataPoint;

		CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	}
	CgsSound::Utils::DataPoint<bool>::DataPoint(/* parameters */);
	CgsSound::Utils::DataPoint<bool>::Update(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	CgsSound::Utils::DataPoint<bool>::Update(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnCameraState.cpp:119
void BrnDirector::Camera::CameraState::Interpolate(const const CameraState &  lLhs, const const CameraState &  lRhs, float32_t  lfT) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnCameraState.cpp:123
	const CameraState lResult;

	{
		// BrnCameraState.cpp:123
		CameraState lResult;

	}
	IsFlagSet(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	SetFlag(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetBit(/* parameters */);
}

// BrnCameraState.cpp:30
