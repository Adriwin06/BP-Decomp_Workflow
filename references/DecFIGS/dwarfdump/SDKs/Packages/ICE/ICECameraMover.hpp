// ICECameraMover.hpp:62
struct ICE::ICECameraAnchor {
private:
	// ICECameraMover.hpp:89
	CameraSpaceHandler mSpace;

public:
	// ICECameraMover.hpp:65
	void Construct();

	// ICECameraMover.hpp:68
	void Destruct();

	// ICECameraMover.hpp:71
	const ICE::CameraSpaceHandler & GetSpace() const;

	// ICECameraMover.hpp:77
	void SetAnchor(const ICE::CameraSpaceHandler &);

	// ICECameraMover.hpp:80
	Vector3 GetGeometryPosition();

	// ICECameraMover.hpp:81
	Vector3 GetForwardVector();

	// ICECameraMover.hpp:82
	const Matrix4 GetGeometryOrientation() const;

	// ICECameraMover.hpp:83
	Vector3 GetVelocity();

	// ICECameraMover.hpp:84
	Vector3 GetAcceleration();

	// ICECameraMover.hpp:85
	float32_t GetVelocityMagnitude();

}

// ICECameraMover.hpp:100
struct ICE::ICECameraMover {
private:
	// ICECameraMover.hpp:151
	ICE::ICECameraAnchor * mpCar;

	// ICECameraMover.hpp:152
	ICECamera * mpICECamera;

	// ICECameraMover.hpp:154
	Cubic3D mAccelOffset;

	// ICECameraMover.hpp:155
	Cubic3D mForward;

	// ICECameraMover.hpp:157
	ICETake * mpTake;

	// ICECameraMover.hpp:159
	Matrix4 mWorldToCamera;

	// ICECameraMover.hpp:160
	Vector3 mBungeeCarPos;

	// ICECameraMover.hpp:161
	Vector3 mBungeeCarFwd;

	// ICECameraMover.hpp:163
	int32_t miHardCutInterval;

	// ICECameraMover.hpp:164
	float32_t mfSimTime;

	// ICECameraMover.hpp:165
	uint32_t muOldTag;

	// ICECameraMover.hpp:166
	int32_t miOldOverlay;

public:
	// ICECameraMover.hpp:109
	void Construct(int32_t, ICE::ICECameraAnchor *, ICECamera *, ICETake *, ICEGroup *, const ICE::IResourceManager *);

	// ICECameraMover.hpp:110
	void Destruct();

	// ICECameraMover.hpp:113
	void Update(float32_t);

	// ICECameraMover.hpp:114
	void UpdateFrameBegin(float32_t);

	// ICECameraMover.hpp:115
	void UpdateFrameEnd(float32_t);

	// ICECameraMover.hpp:117
	ICE::ICECameraAnchor * GetAnchor();

	// ICECameraMover.hpp:120
	void SetTake(ICETake *);

private:
	// ICECameraMover.hpp:125
	void UpdateFromCameraMovemnt(float32_t);

	// ICECameraMover.hpp:126
	void UpdateHardCuts(float32_t);

	// ICECameraMover.hpp:127
	void UpdateScreenshots(float32_t);

	// ICECameraMover.hpp:128
	void UpdateSimTime(float32_t);

	// ICECameraMover.hpp:129
	void UpdateEventTag(float32_t);

	// ICECameraMover.hpp:130
	void UpdateOverlay(float32_t);

	// ICECameraMover.hpp:131
	void UpdateLens(float32_t);

	// ICECameraMover.hpp:132
	void UpdateFocus(float32_t);

	// ICECameraMover.hpp:133
	void UpdateFade(float32_t);

	// ICECameraMover.hpp:134
	void UpdateLetterBox(float32_t);

	// ICECameraMover.hpp:135
	void UpdateConstraints(float32_t);

	// ICECameraMover.hpp:136
	void UpdateTransformationMatrix(float32_t);

	// ICECameraMover.hpp:137
	void UpdateAccelOffset(float32_t, Vector3 *);

	// ICECameraMover.hpp:138
	void UpdateForwardVector(float32_t);

	// ICECameraMover.hpp:139
	void UpdateBloom(float32_t);

	// ICECameraMover.hpp:141
	void CreateLookAtMatrix(Matrix4 *, Vector3 &, Vector3 &, Angle);

	// ICECameraMover.hpp:149
	Vector3 TransformToWorld(Vector3, uint8_t, uint8_t, uint8_t, uint8_t, float32_t);

}

