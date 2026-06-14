// BrnCameraRig.h:57
struct BrnDirector::Camera::Utils::CameraRig {
	struct Params;

	// BrnCameraRig.h:63
	extern CameraRig::Params ParamsRearLongFlat;

	// BrnCameraRig.h:64
	extern CameraRig::Params ParamsFrontQuarterLong;

	// BrnCameraRig.h:65
	extern CameraRig::Params ParamsFrontQuarterClose;

	// BrnCameraRig.h:66
	extern CameraRig::Params ParamsFrontQuarterCloseDeep;

	// BrnCameraRig.h:67
	extern CameraRig::Params ParamsHighSideFlat;

	// BrnCameraRig.h:68
	extern CameraRig::Params ParamsSideFlat;

	// BrnCameraRig.h:69
	extern CameraRig::Params ParamsBonnetHigh;

	// BrnCameraRig.h:70
	extern CameraRig::Params ParamsBootHigh;

	// BrnCameraRig.h:71
	extern CameraRig::Params ParamsBonnetLow;

	// BrnCameraRig.h:72
	extern CameraRig::Params ParamsFrontQCuFwd;

	// BrnCameraRig.h:73
	extern CameraRig::Params ParamsSideLookingForwards;

	// BrnCameraRig.h:74
	extern CameraRig::Params ParamsRigFrontQBwd;

	// BrnCameraRig.h:75
	extern CameraRig::Params ParamsFrontRearview;

	// BrnCameraRig.h:76
	extern CameraRig::Params ParamsBootViewFwd;

	// BrnCameraRig.h:77
	extern CameraRig::Params ParamsFrontQLowBwd;

	// BrnCameraRig.h:78
	extern CameraRig::Params ParamsRoofFwd;

	// BrnCameraRig.h:79
	extern CameraRig::Params ParamsBootFwd;

	// BrnCameraRig.h:80
	extern CameraRig::Params ParamsRearQFwd;

	// BrnCameraRig.h:81
	extern CameraRig::Params ParamsFrontQCuFwd2;

	// BrnCameraRig.h:82
	extern CameraRig::Params ParamsUnderbelly;

private:
	// BrnCameraRig.h:106
	Matrix44Affine mRigTransform;

	// BrnCameraRig.h:107
	float32_t mfFOV;

public:
	// BrnCameraRig.h:88
	void Construct(const CameraRig::Params &, const AABBox &, bool);

	// BrnCameraRig.h:93
	void Update(Camera &, Matrix44Affine);

	// BrnCameraRig.h:96
	void Destruct();

	// BrnCameraRig.h:99
	Matrix44Affine & GetRigTransform();

	// BrnCameraRig.h:102
	float32_t GetFOV();

}

// BrnCameraRig.h:113
struct BrnDirector::Camera::Utils::CameraRig::Params {
	// BrnCameraRig.h:116
	Vector3 mOffsetFromTarget;

	// BrnCameraRig.h:117
	Vector3 mOffsetFromRotationCentre;

	// BrnCameraRig.h:119
	float32_t mfFOV;

	// BrnCameraRig.h:121
	float32_t mfRoll;

	// BrnCameraRig.h:122
	float32_t mfPitch;

	// BrnCameraRig.h:123
	float32_t mfYaw;

	// BrnCameraRig.h:125
	bool mbWidescreenOnly;

}

// BrnCameraRig.h:138
extern void Serialise<BrnDirector::Camera::DebugMenuSerialiser>(const DebugMenuSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	Serialise<VectorAxisY>(/* parameters */);
	Serialise<VectorAxisZ>(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::DebugMenuSerialiser::Serialise(/* parameters */);
}

// BrnCameraRig.h:138
extern void Serialise<BrnDirector::Camera::TextFileReadSerialiser>(const TextFileReadSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	Serialise<VectorAxisX>(/* parameters */);
	Serialise<VectorAxisY>(/* parameters */);
	Serialise<VectorAxisZ>(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
	BrnDirector::Camera::TextFileReadSerialiser::Serialise(/* parameters */);
	{
	}
}

// BrnCameraRig.h:138
extern void Serialise<BrnDirector::Camera::TextFileWriteSerialiser>(const TextFileWriteSerialiser &  lrSerialiser) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	Serialise<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<VectorAxisY>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	Serialise<VectorAxisZ>(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	BrnDirector::Camera::TextFileWriteSerialiser::Serialise(/* parameters */);
	{
		BrnDirector::Camera::TextFileWriteSerialiser::FormatName(/* parameters */);
	}
}

