// ICECamera.hpp:51
struct ICE::ICECamera {
private:
	// ICECamera.hpp:133
	ICEOverlay mICEOverlay;

	// ICECamera.hpp:134
	bool mbShowOverlay;

	// Unknown accessibility
	// ICECamera.hpp:39
	typedef Camera Camera;

	// ICECamera.hpp:137
	ICECamera::Camera mCamera;

public:
	// ICECamera.hpp:53
	void Construct();

	// ICECamera.hpp:54
	void Destruct();

	// ICECamera.hpp:56
	ICECamera::Camera * GetCamera();

	// ICECamera.hpp:57
	const ICECamera::Camera * GetCamera() const;

	// ICECamera.hpp:58
	void SetCamera(ICECamera::Camera *);

	// ICECamera.hpp:60
	void ClearVelocity();

	// ICECamera.hpp:62
	void SetSimTimeMultiplier(float32_t);

	// ICECamera.hpp:69
	void SetFadeColor(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:71
	void SetLetterBox(float32_t);

	// ICECamera.hpp:78
	void SetDepthOfField(float32_t, float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:81
	void SetFocalDistance(float32_t);

	// ICECamera.hpp:83
	void SetDOFFalloff(float32_t);

	// ICECamera.hpp:85
	void SetDOFMaxIntensity(float32_t);

	// ICECamera.hpp:87
	void SetFieldOfView(float32_t);

	// ICECamera.hpp:89
	void SetNearZ(float32_t);

	// ICECamera.hpp:94
	void SetNoiseAmplitude1(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:99
	void SetNoiseFrequency1(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:104
	void SetNoiseAmplitude2(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:109
	void SetNoiseFrequency2(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:113
	// Declaration
	void ApplyNoise() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ICEMath.hpp:62
		typedef Matrix44Affine Matrix4;

	}

	// ICECamera.hpp:116
	void SetBloom(float32_t, float32_t);

	// ICECamera.hpp:120
	void SetTargetDistance(float32_t);

	// ICECamera.hpp:123
	void SetCameraMatrix(Matrix4 *, float32_t);

	// ICECamera.hpp:127
	void SetOverlay(int32_t);

	// ICECamera.hpp:128
	void ClearOverlay();

	// ICECamera.hpp:130
	void SetHideOverlay(bool);

}

// ICECamera.hpp:51
struct ICE::ICECamera {
private:
	// ICECamera.hpp:133
	ICEOverlay mICEOverlay;

	// ICECamera.hpp:134
	bool mbShowOverlay;

	// Unknown accessibility
	// ICECamera.hpp:39
	typedef Camera Camera;

	// ICECamera.hpp:137
	ICECamera::Camera mCamera;

public:
	// ICECamera.hpp:53
	void Construct();

	// ICECamera.hpp:54
	void Destruct();

	// ICECamera.hpp:56
	ICECamera::Camera * GetCamera();

	// ICECamera.hpp:57
	const ICECamera::Camera * GetCamera() const;

	// ICECamera.hpp:58
	void SetCamera(ICECamera::Camera *);

	// ICECamera.hpp:60
	void ClearVelocity();

	// ICECamera.hpp:62
	void SetSimTimeMultiplier(float32_t);

	// ICECamera.hpp:69
	void SetFadeColor(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:71
	void SetLetterBox(float32_t);

	// ICECamera.hpp:78
	void SetDepthOfField(float32_t, float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:81
	void SetFocalDistance(float32_t);

	// ICECamera.hpp:83
	void SetDOFFalloff(float32_t);

	// ICECamera.hpp:85
	void SetDOFMaxIntensity(float32_t);

	// ICECamera.hpp:87
	void SetFieldOfView(float32_t);

	// ICECamera.hpp:89
	void SetNearZ(float32_t);

	// ICECamera.hpp:94
	void SetNoiseAmplitude1(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:99
	void SetNoiseFrequency1(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:104
	void SetNoiseAmplitude2(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:109
	void SetNoiseFrequency2(float32_t, float32_t, float32_t, float32_t);

	// ICECamera.hpp:113
	// Declaration
	void ApplyNoise(Matrix4 *, float32_t, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ICEMath.hpp:62
		typedef Matrix44Affine Matrix4;

	}

	// ICECamera.hpp:116
	void SetBloom(float32_t, float32_t);

	// ICECamera.hpp:120
	void SetTargetDistance(float32_t);

	// ICECamera.hpp:123
	void SetCameraMatrix(Matrix4 *, float32_t);

	// ICECamera.hpp:127
	void SetOverlay(int32_t);

	// ICECamera.hpp:128
	void ClearOverlay();

	// ICECamera.hpp:130
	void SetHideOverlay(bool);

}

