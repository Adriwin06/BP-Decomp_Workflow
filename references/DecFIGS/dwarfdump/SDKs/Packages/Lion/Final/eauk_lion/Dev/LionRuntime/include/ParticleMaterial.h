// ParticleMaterial.h:21
struct cParticleMaterial {
	// ParticleMaterial.h:35
	enum eLionMaterialShaderType {
		eSHADER_LION = 0,
		eSHADER_LION_NORM = 1,
		eSHADER_LION_WARP = 2,
		eSHADER_LIMIT = 3,
	}

	// ParticleMaterial.h:228
	U32 mID;

	// ParticleMaterial.h:229
	U32 mMaterialHandle;

	// ParticleMaterial.h:230
	U32 mMeshHandle;

	// ParticleMaterial.h:233
	U32 mTextureHandle;

	// ParticleMaterial.h:234
	char * mpTextureName;

	// ParticleMaterial.h:237
	U32 mNormalMapHandle;

	// ParticleMaterial.h:238
	char * mpNormalMapName;

	// ParticleMaterial.h:242
	char * mpMeshName;

	// ParticleMaterial.h:244
	char * mpLayerGroupName;

	// ParticleMaterial.h:245
	U32 mFlags;

	// ParticleMaterial.h:247
	U32 mFrameMask;

	// ParticleMaterial.h:248
	S32 mFrameBase;

	// ParticleMaterial.h:249
	S32 mFrameVariance;

	// ParticleMaterial.h:250
	S32 mFrameCount;

	// ParticleMaterial.h:261
	U8 mXFrames;

	// ParticleMaterial.h:262
	U8 mYFrames;

	// ParticleMaterial.h:263
	U8 mBlendMode;

	// ParticleMaterial.h:265
	U8 mAlphaTestMode;

	// ParticleMaterial.h:266
	U8 mAlphaTestValue;

	// ParticleMaterial.h:267
	U8 mZTestMode;

	// ParticleMaterial.h:268
	U8 mPad;

	// ParticleMaterial.h:270
	U8 mUCoordOption;

	// ParticleMaterial.h:271
	U8 mVCoordOption;

	// ParticleMaterial.h:276
	U8 mAnimTexOptions;

	// ParticleMaterial.h:277
	U8 mShader;

	// ParticleMaterial.h:279
	U8 mNormalOption;

	// ParticleMaterial.h:282
	U32 mLayer;

	// ParticleMaterial.h:283
	FP32 mRibbonStretch;

	// ParticleMaterial.h:287
	U32[5] mMeshHandles;

	// ParticleMaterial.h:288
	char *[5] mpMeshNames;

	// ParticleMaterial.h:289
	U32[5] mPercentages;

	// ParticleMaterial.h:290
	U32 mNumMeshes;

	// ParticleMaterial.h:293
	FP32 mNormalBlend;

	// ParticleMaterial.h:296
	FP32 mKeyLightAmount;

	// ParticleMaterial.h:299
	FP32 mIBLAmount;

	// ParticleMaterial.h:302
	FP32 mZBlendDistance;

	// ParticleMaterial.h:304
	FP32 mFPS;

	// ParticleMaterial.h:305
	FP32 mFPSVariance;

public:
	// ParticleMaterial.h:64
	void Init();

	// ParticleMaterial.h:65
	void CloneInit(const cParticleMaterial *);

	// ParticleMaterial.h:66
	void DeInit();

	// ParticleMaterial.h:68
	void Build();

	// ParticleMaterial.h:69
	void UnBuild();

	// ParticleMaterial.h:71
	void Delocate(U32);

	// ParticleMaterial.h:72
	void Relocate();

	// ParticleMaterial.h:74
	void GetSerialiseSize(cLionSerialiser &) const;

	// ParticleMaterial.h:75
	cParticleMaterial * Serialise(cLionSerialiser &) const;

	// ParticleMaterial.h:76
	void Remap(cLionSerialiser &);

	// ParticleMaterial.h:78
	cParticleMaterial::eLionMaterialShaderType GetShaderType() const;

	// ParticleMaterial.h:186
	void SetTextureMapHandle(uint32_t);

	// ParticleMaterial.h:188
	U32 GetTextureMapHandle() const;

	// ParticleMaterial.h:193
	char * GetTextureMapName() const;

	// ParticleMaterial.h:202
	void SetNormalMapHandle(uint32_t);

	// ParticleMaterial.h:204
	U32 GetNormalMapHandle() const;

	// ParticleMaterial.h:209
	char * GetNormalMapName() const;

	// ParticleMaterial.h:214
	FP32 KeyLightAmount() const;

	// ParticleMaterial.h:219
	FP32 IBLAmount() const;

}

