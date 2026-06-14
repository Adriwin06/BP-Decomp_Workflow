// BrnEffectsFrame.h:32
struct BrnEffectsFrame {
private:
	// BrnEffectsFrame.h:204
	bool mbUseBloom;

	// BrnEffectsFrame.h:205
	bool mbUseVignette;

	// BrnEffectsFrame.h:206
	bool mbUseDepthOfField;

	// BrnEffectsFrame.h:207
	bool mbUseBlur;

	// BrnEffectsFrame.h:208
	bool mbUseTint;

	// BrnEffectsFrame.h:209
	bool mbUseTint2d;

	// BrnEffectsFrame.h:211
	float32_t mfBloomWeight;

	// BrnEffectsFrame.h:212
	float32_t mfVignetteWeight;

	// BrnEffectsFrame.h:213
	float32_t mfDepthOfFieldWeight;

	// BrnEffectsFrame.h:214
	float32_t mfBlurWeight;

	// BrnEffectsFrame.h:215
	float32_t mfTintWeight;

	// BrnEffectsFrame.h:216
	float32_t mf2dTintWeight;

	// BrnEffectsFrame.h:218
	BloomData mBloomData;

	// BrnEffectsFrame.h:219
	VignetteData mVignetteData;

	// BrnEffectsFrame.h:220
	DepthOfFieldData mDepthOfFieldData;

	// BrnEffectsFrame.h:221
	BlurData mBlurData;

	// BrnEffectsFrame.h:222
	TintData mTintData;

	// BrnEffectsFrame.h:223
	TintData2d mTintData2d;

	// BrnEffectsFrame.h:226
	Matrix44Affine mCarTransform;

	// BrnEffectsFrame.h:227
	Matrix44Affine mCameraTransform;

	// BrnEffectsFrame.h:228
	Vector3 mLinearVelocity;

	// BrnEffectsFrame.h:229
	Vector3 mAngularVelocity;

	// BrnEffectsFrame.h:230
	float32_t mfSpeedMPH;

	// BrnEffectsFrame.h:231
	float32_t mfSteering;

	// BrnEffectsFrame.h:233
	MotionBlurData mMotionBlurData;

	// BrnEffectsFrame.h:235
	bool mbIsGameCamera;

public:
	// BrnEffectsFrame.h:37
	void Construct();

	// BrnEffectsFrame.h:41
	void Destruct();

	// BrnEffectsFrame.h:44
	bool Prepare();

	// BrnEffectsFrame.h:47
	bool Release();

	// BrnEffectsFrame.h:51
	void SetUseBloom(bool);

	// BrnEffectsFrame.h:54
	void SetUseVignette(bool);

	// BrnEffectsFrame.h:57
	void SetUseDepthOfField(bool);

	// BrnEffectsFrame.h:60
	void SetUseBlur(bool);

	// BrnEffectsFrame.h:63
	void SetUseTint(bool);

	// BrnEffectsFrame.h:66
	void SetUseTint2d(bool);

	// BrnEffectsFrame.h:71
	void SetBloomData(const BloomData &, float32_t);

	// BrnEffectsFrame.h:76
	void SetVignetteData(const VignetteData &, float32_t);

	// BrnEffectsFrame.h:81
	void SetDepthOfFieldData(const DepthOfFieldData &, float32_t);

	// BrnEffectsFrame.h:86
	void SetBlurData(const BlurData &, float32_t);

	// BrnEffectsFrame.h:91
	void SetTintData(const TintData &, float32_t);

	// BrnEffectsFrame.h:96
	void SetTintData2d(const TintData2d &, float32_t);

	// BrnEffectsFrame.h:100
	void SetLinearVelocity(Vector3);

	// BrnEffectsFrame.h:103
	void SetAngularVelocity(Vector3);

	// BrnEffectsFrame.h:106
	void SetSpeedMPH(float32_t);

	// BrnEffectsFrame.h:109
	void SetSteering(float32_t);

	// BrnEffectsFrame.h:112
	void SetCarTransform(Matrix44Affine);

	// BrnEffectsFrame.h:115
	void SetIsRacingGameplayCamera(bool);

	// BrnEffectsFrame.h:118
	void SetCameraTransform(Matrix44Affine);

	// BrnEffectsFrame.h:121
	void SetMotionBlurData(const MotionBlurData &);

	// BrnEffectsFrame.h:124
	bool GetUseBloom() const;

	// BrnEffectsFrame.h:127
	bool GetUseVignette() const;

	// BrnEffectsFrame.h:130
	bool GetUseDepthOfField() const;

	// BrnEffectsFrame.h:133
	bool GetUseBlur() const;

	// BrnEffectsFrame.h:136
	bool GetUseTint() const;

	// BrnEffectsFrame.h:139
	bool GetUseTint2d() const;

	// BrnEffectsFrame.h:142
	float32_t GetBloomWeight() const;

	// BrnEffectsFrame.h:145
	float32_t GetVignetteWeight() const;

	// BrnEffectsFrame.h:148
	float32_t GetDepthOfFieldWeight() const;

	// BrnEffectsFrame.h:151
	float32_t GetBlurWeight() const;

	// BrnEffectsFrame.h:154
	float32_t GetTintWeight() const;

	// BrnEffectsFrame.h:157
	float32_t Get2dTintWeight() const;

	// BrnEffectsFrame.h:160
	const BloomData & GetBloomData() const;

	// BrnEffectsFrame.h:163
	const VignetteData & GetVignetteData() const;

	// BrnEffectsFrame.h:166
	const DepthOfFieldData & GetDepthOfFieldData() const;

	// BrnEffectsFrame.h:169
	const BlurData & GetBlurData() const;

	// BrnEffectsFrame.h:172
	const TintData & GetTintData() const;

	// BrnEffectsFrame.h:175
	const TintData2d & GetTintData2d() const;

	// BrnEffectsFrame.h:179
	Vector3 GetLinearVelocity() const;

	// BrnEffectsFrame.h:182
	Vector3 GetAngularVelocity() const;

	// BrnEffectsFrame.h:185
	float32_t GetSpeedMPH() const;

	// BrnEffectsFrame.h:188
	float32_t GetSteering() const;

	// BrnEffectsFrame.h:191
	Matrix44Affine GetCarTransform() const;

	// BrnEffectsFrame.h:194
	bool GetIsRacingGameplayCamera() const;

	// BrnEffectsFrame.h:197
	Matrix44Affine GetCameraTransform() const;

	// BrnEffectsFrame.h:200
	const MotionBlurData & GetMotionBlurData() const;

}

