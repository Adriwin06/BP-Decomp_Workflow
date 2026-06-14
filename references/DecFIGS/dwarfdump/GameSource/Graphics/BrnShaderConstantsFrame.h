// BrnShaderConstantsFrame.h:33
struct BrnShaderConstantsFrame {
private:
	// BrnShaderConstantsFrame.h:187
	Matrix44 mViewProjection;

	// BrnShaderConstantsFrame.h:188
	Vector3 mViewPosition;

	// BrnShaderConstantsFrame.h:189
	Matrix44Affine mCameraTransform;

	// BrnShaderConstantsFrame.h:192
	Matrix44[6] maEnvMapViewProjectionMatrices;

	// BrnShaderConstantsFrame.h:193
	Vector3 mEnvMapViewPosition;

	// BrnShaderConstantsFrame.h:196
	Vector3 mKeyLightDirection;

	// BrnShaderConstantsFrame.h:197
	Vector3 mKeyLightColour;

	// BrnShaderConstantsFrame.h:198
	Vector4 mCloudLayerRadii;

	// BrnShaderConstantsFrame.h:199
	Vector4 mCloudDarkColour0;

	// BrnShaderConstantsFrame.h:200
	Vector4 mCloudLiteColour0;

	// BrnShaderConstantsFrame.h:201
	Vector4 mCloudTextureScaleAndOffsets0;

	// BrnShaderConstantsFrame.h:203
	Vector4 mCloudLayerDensity;

	// BrnShaderConstantsFrame.h:204
	Vector4 mCloudLayerInvFeather;

	// BrnShaderConstantsFrame.h:205
	Vector4 mCloudLayerOpacity;

	// BrnShaderConstantsFrame.h:207
	Vector4 mTopColourDrk;

	// BrnShaderConstantsFrame.h:208
	Vector4 mHorColourPow;

	// BrnShaderConstantsFrame.h:209
	Vector4 mSunColourPow;

	// BrnShaderConstantsFrame.h:210
	Vector3 mHorBleedSclPow;

	// BrnShaderConstantsFrame.h:212
	Vector4 mFogScattering;

	// BrnShaderConstantsFrame.h:214
	Vector3 mUnbiasedKeyLightDirection;

	// BrnShaderConstantsFrame.h:216
	float32_t mfCloudDistanceCurve;

	// BrnShaderConstantsFrame.h:217
	float32_t mGameTime;

	// BrnShaderConstantsFrame.h:218
	float32_t mfWhiteLevel;

	// BrnShaderConstantsFrame.h:222
	bool volatile mbLockedForWriting;

public:
	// BrnShaderConstantsFrame.h:38
	void Construct();

	// BrnShaderConstantsFrame.h:42
	void SetViewProjectionMatrix(Matrix44);

	// BrnShaderConstantsFrame.h:45
	Matrix44 GetViewProjectionMatrix() const;

	// BrnShaderConstantsFrame.h:50
	void SetEnvMapViewProjectionMatrix(BrnGraphics::EEnvironmentMapFace, Matrix44);

	// BrnShaderConstantsFrame.h:54
	Matrix44 GetEnvMapViewProjectionMatrix(BrnGraphics::EEnvironmentMapFace) const;

	// BrnShaderConstantsFrame.h:57
	void SetViewPosition(Vector3);

	// BrnShaderConstantsFrame.h:60
	Vector3 GetViewPosition() const;

	// BrnShaderConstantsFrame.h:64
	void SetCameraTransform(Matrix44Affine);

	// BrnShaderConstantsFrame.h:67
	Matrix44Affine GetCameraTransform() const;

	// BrnShaderConstantsFrame.h:70
	void SetEnvMapViewPosition(Vector3);

	// BrnShaderConstantsFrame.h:73
	Vector3 GetEnvMapViewPosition() const;

	// BrnShaderConstantsFrame.h:77
	void SetKeyLightDirection(Vector3);

	// BrnShaderConstantsFrame.h:80
	Vector3 GetKeyLightDirection() const;

	// BrnShaderConstantsFrame.h:83
	void SetKeyLightColour(Vector3);

	// BrnShaderConstantsFrame.h:86
	Vector3 GetKeyLightColour() const;

	// BrnShaderConstantsFrame.h:89
	Vector4 GetTopColourDrk() const;

	// BrnShaderConstantsFrame.h:92
	Vector4 GetHorColourPow() const;

	// BrnShaderConstantsFrame.h:95
	Vector4 GetSunColourPow() const;

	// BrnShaderConstantsFrame.h:98
	Vector3 GetHorBleedSclPow() const;

	// BrnShaderConstantsFrame.h:101
	void SetTopColourDrk(Vector4);

	// BrnShaderConstantsFrame.h:104
	void SetHorColourPow(Vector4);

	// BrnShaderConstantsFrame.h:107
	void SetSunColourPow(Vector4);

	// BrnShaderConstantsFrame.h:110
	void SetHorBleedSclPow(Vector3);

	// BrnShaderConstantsFrame.h:113
	void SetFogScattering(Vector4);

	// BrnShaderConstantsFrame.h:116
	Vector4 GetFogScattering() const;

	// BrnShaderConstantsFrame.h:120
	void SetCloudDarkColour0(Vector4);

	// BrnShaderConstantsFrame.h:123
	Vector4 GetCloudDarkColour0() const;

	// BrnShaderConstantsFrame.h:126
	void SetCloudLiteColour0(Vector4);

	// BrnShaderConstantsFrame.h:129
	Vector4 GetCloudLiteColour0() const;

	// BrnShaderConstantsFrame.h:132
	void SetCloudTextureScaleAndOffsets0(Vector4);

	// BrnShaderConstantsFrame.h:135
	Vector4 GetCloudTextureScaleAndOffsets0() const;

	// BrnShaderConstantsFrame.h:138
	void SetCloudLayerDensity(Vector4);

	// BrnShaderConstantsFrame.h:141
	Vector4 GetCloudLayerDensity() const;

	// BrnShaderConstantsFrame.h:144
	void SetCloudLayerInvFeather(Vector4);

	// BrnShaderConstantsFrame.h:147
	Vector4 GetCloudLayerInvFeather() const;

	// BrnShaderConstantsFrame.h:150
	void SetCloudLayerOpacity(Vector4);

	// BrnShaderConstantsFrame.h:153
	Vector4 GetCloudLayerOpacity() const;

	// BrnShaderConstantsFrame.h:156
	void SetCloudDistanceCurve(float32_t);

	// BrnShaderConstantsFrame.h:159
	float32_t GetCloudDistanceCurve() const;

	// BrnShaderConstantsFrame.h:165
	void SetGameTime(float32_t);

	// BrnShaderConstantsFrame.h:168
	float32_t GetGameTime() const;

	// BrnShaderConstantsFrame.h:172
	void SetWhiteLevel(float32_t);

	// BrnShaderConstantsFrame.h:175
	float32_t GetWhiteLevel() const;

	// BrnShaderConstantsFrame.h:178
	Vector3 GetUnbiasedKeyLightDirection() const;

	// BrnShaderConstantsFrame.h:182
	void SetUnbiasedKeyLightDirection(Vector3);

}

