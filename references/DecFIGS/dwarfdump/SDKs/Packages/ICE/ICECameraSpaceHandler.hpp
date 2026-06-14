// ICECameraSpaceHandler.hpp:37
struct ICE::CameraSpaceHandler {
private:
	// ICECameraSpaceHandler.hpp:109
	Matrix44Affine mCarToWorld;

	// ICECameraSpaceHandler.hpp:110
	Matrix44Affine mCar2ToWorld;

	// ICECameraSpaceHandler.hpp:111
	Matrix44Affine mTrafficLightToWorld;

	// ICECameraSpaceHandler.hpp:112
	Matrix44Affine mSceneToWorld;

	// ICECameraSpaceHandler.hpp:113
	Matrix44Affine mImpactToWorld;

	// ICECameraSpaceHandler.hpp:114
	Matrix44Affine mHeadingToWorld;

	// ICECameraSpaceHandler.hpp:115
	Matrix44Affine mLooseHeadingToWorld;

	// ICECameraSpaceHandler.hpp:116
	Matrix44Affine mHeading2ToWorld;

	// ICECameraSpaceHandler.hpp:118
	const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> * mpGamePlayCam;

public:
	// ICECameraSpaceHandler.hpp:50
	void Construct(Matrix44Affine, Matrix44Affine, Matrix44Affine, Matrix44Affine, Matrix44Affine, Matrix44Affine, Matrix44Affine, Matrix44Affine, const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> *);

	// ICECameraSpaceHandler.hpp:55
	Vector3 TransformToWorld(Vector3, ICE::eICESpace) const;

	// ICECameraSpaceHandler.hpp:64
	Vector3 TransformToWorld(Vector3, uint8_t, uint8_t, uint8_t, uint8_t, float32_t) const;

	// ICECameraSpaceHandler.hpp:69
	void GetSpaceTransformationMatrix(Matrix4 *, uint8_t) const;

	// ICECameraSpaceHandler.hpp:75
	void GetWorldOrientationMatrix(Matrix4 *, uint8_t, uint8_t) const;

	// ICECameraSpaceHandler.hpp:78
	const rw::math::vpu::Matrix44Affine & GetCarToWorld() const;

	// ICECameraSpaceHandler.hpp:82
	void SetCarToWorld(Matrix44Affine);

	// ICECameraSpaceHandler.hpp:86
	void SetCar2ToWorld(Matrix44Affine);

	// ICECameraSpaceHandler.hpp:90
	void SetHeadingToWorld(Matrix44Affine);

	// ICECameraSpaceHandler.hpp:95
	void SetHeading2ToWorld(Matrix44Affine);

	// ICECameraSpaceHandler.hpp:99
	const rw::math::vpu::Matrix44Affine GetTransformToWorld(ICE::eICESpace) const;

private:
	// ICECameraSpaceHandler.hpp:104
	const rw::math::vpu::Matrix44Affine GetTakedownToWorld() const;

	// ICECameraSpaceHandler.hpp:107
	const rw::math::vpu::Matrix44Affine GetReverseTakedownToWorld() const;

}

