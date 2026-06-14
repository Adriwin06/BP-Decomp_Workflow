// BrnKeyAnimController.h:45
struct BrnDirector::KeyAnimController : public BrnDirector::ShotController {
private:
	// BrnKeyAnimController.h:133
	Vector3 mLookPos;

	// BrnKeyAnimController.h:135
	ICETake mPlaybackTake;

	// BrnKeyAnimController.h:136
	ICE::eICESpace mEyeSpace;

	// BrnKeyAnimController.h:137
	ICE::eICESpace mLookSpace;

	// BrnKeyAnimController.h:138
	float32_t mfPlaybackTimer;

	// BrnKeyAnimController.h:140
	bool mbIsLooping;

	// BrnKeyAnimController.h:141
	bool mbPrepared;

	// BrnKeyAnimController.h:142
	bool mbPaused;

	// BrnKeyAnimController.h:143
	bool mbReversed;

public:
	void KeyAnimController(const KeyAnimController &);

	void KeyAnimController();

	// BrnKeyAnimController.cpp:38
	void Construct();

	// BrnKeyAnimController.cpp:62
	bool Prepare(const BrnDirector::DirectorResourceManager &, int32_t);

	// BrnKeyAnimController.cpp:224
	virtual void Update(const ShotContext &, Camera *);

	// BrnKeyAnimController.cpp:288
	void UpdateCameraFromICE(const ICETake &, const ICE::CameraSpaceHandler &, Camera *);

	// BrnKeyAnimController.h:69
	float32_t GetLength() const;

	// BrnKeyAnimController.cpp:331
	void SetParametricTime0To1(float32_t);

	// BrnKeyAnimController.cpp:357
	float32_t GetParametricTime0To1() const;

	// BrnKeyAnimController.h:85
	void Reverse();

	// BrnKeyAnimController.h:88
	void Pause();

	// BrnKeyAnimController.h:91
	void Resume();

	// BrnKeyAnimController.h:155
	bool HasFinished() const;

	// BrnKeyAnimController.h:97
	bool IsPrepared() const;

	// BrnKeyAnimController.h:101
	void SetLooping(bool);

	// BrnKeyAnimController.h:104
	bool IsLooping() const;

	// BrnKeyAnimController.h:107
	const ICE::eICESpace GetEyeSpace() const;

	// BrnKeyAnimController.h:110
	const ICE::eICESpace GetLookSpace() const;

	// BrnKeyAnimController.h:113
	const rw::math::vpu::Vector3 GetLookPos() const;

private:
	// BrnKeyAnimController.cpp:98
	void UpdateTransformationMatrix(const ICETake &, const ICE::CameraSpaceHandler &, Camera *);

	// BrnKeyAnimController.cpp:154
	void UpdateFocus(const ICETake &, Camera *);

	// BrnKeyAnimController.cpp:200
	void UpdateLens(const ICETake &, Camera *);

}

// BrnKeyAnimController.h:45
void BrnDirector::KeyAnimController::KeyAnimController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

