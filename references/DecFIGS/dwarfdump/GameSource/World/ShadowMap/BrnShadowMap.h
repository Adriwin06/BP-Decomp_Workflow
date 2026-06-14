// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct ShadowMap {
		// BrnShadowMap.h:69
		struct TsmBBInfo {
			// BrnShadowMap.h:71
			float32_t mfNearClip;

			// BrnShadowMap.h:72
			float32_t mfFarClip;

			// BrnShadowMap.h:73
			Camera mCamera;

			// BrnShadowMap.h:74
			Matrix44 mWorldToLight;

			// BrnShadowMap.h:75
			Matrix44Affine mWorldToLightView;

			// BrnShadowMap.h:76
			Matrix44Affine mLightToWorldView;

			// BrnShadowMap.h:77
			bool mbInvertCullMode;

			// BrnShadowMap.h:78
			Matrix44 mBestFitMatrix;

			// BrnShadowMap.h:79
			Frustum mSubFrustum;

			// BrnShadowMap.h:81
			float32_t mfTsmSlideBack;

			// BrnShadowMap.h:82
			bool mbDebugRender;

			// BrnShadowMap.h:84
			bool mbSceneOptimised;

			// BrnShadowMap.h:85
			SmoothStep::Vector2 mYExtents;

		}

	}

	// BrnShadowMap.h:41
	enum ShadowMapType {
		E_SHADOWMAP_TYPE_ORTHO = 0,
		E_SHADOWMAP_TYPE_TSM = 1,
		E_SHADOWMAP_TYPE_BOUNDINGBOX = 2,
		E_SHADOWMAP_TYPE_CACHED = 3,
	}

	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnShadowMap.h:67
struct BrnWorld::ShadowMap {
private:
	// BrnShadowMap.h:226
	bool mbRenderingShadowMap;

	// BrnShadowMap.h:227
	bool mbUseZOnlyRenderingPath;

	// BrnShadowMap.h:229
	Camera[3] maShadowMapCamera;

	// BrnShadowMap.h:230
	Camera[3] maCgsShadowMapCamera;

	// BrnShadowMap.h:232
	Matrix44Affine[3] maCachedMatrix;

	// BrnShadowMap.h:233
	Vector3 mCachedOffsetWorld;

	// BrnShadowMap.h:237
	TextureState * mpTextureState;

	// BrnShadowMap.h:238
	Parameters mTextureStateParams;

	// BrnShadowMap.h:239
	Resource mTextureStateResource;

	// BrnShadowMap.h:242
	BrnWorld::ShadowMap::TsmBBInfo[3] maTsmBBInfo;

	// BrnShadowMap.h:244
	float32_t[3] mafShadowMapOrthoScale;

	// BrnShadowMap.h:245
	float32_t[3] mafShadowMapAtOffset;

	// BrnShadowMap.h:246
	Frustum[3] maFrustum;

	// BrnShadowMap.h:248
	BrnWorld::ShadowMapType[3] maShadowMapTypes;

	// BrnShadowMap.h:249
	bool[3] mabMapEnabled;

	// BrnShadowMap.h:253
	float32_t mfShadowMapNearPlane;

	// BrnShadowMap.h:254
	float32_t mfShadowMapFarPlane;

	// BrnShadowMap.h:255
	float32_t mfEyeOffset;

	// BrnShadowMap.h:256
	Vector3 mShadowMapFocusPoint;

	// BrnShadowMap.h:258
	float32_t mfFadeStartDistance;

	// BrnShadowMap.h:260
	uint32_t muCurrentShadowMap;

	// BrnShadowMap.h:263
	bool mbRenderShadowMapView;

	// BrnShadowMap.h:264
	bool mbRenderWorldIntoShadowMap;

	// BrnShadowMap.h:265
	bool mbRenderRaceCarsIntoShadowMap;

	// BrnShadowMap.h:266
	bool mbRenderTrafficIntoShadowMap;

	// BrnShadowMap.h:267
	bool mbRenderMultipleShadowMaps;

	// BrnShadowMap.h:268
	bool mbRenderPropsIntoShadowMap;

	// BrnShadowMap.h:270
	bool mbRenderPropsNearOnly;

	// BrnShadowMap.h:271
	bool mbRenderTrafficNearOnly;

	// BrnShadowMap.h:272
	bool mbRenderRaceCarsNearOnly;

	// BrnShadowMap.h:274
	bool mbUpdateDebugRender;

	// BrnShadowMap.h:275
	bool mbUpdateTsmCamera;

	// BrnShadowMap.h:276
	bool mbPreferShortAndFatProjection;

	// BrnShadowMap.h:277
	bool mbShowLightFrustumInDebugRender;

	// BrnShadowMap.h:279
	bool mbOptimiseForIdealAspectRatio;

	// BrnShadowMap.h:280
	float32_t mfIdealAspectRatio;

	// BrnShadowMap.h:282
	float32_t mfNDotLFallOffCutoffWorld;

	// BrnShadowMap.h:283
	float32_t mfNDotLFallOffScaleWorld;

	// BrnShadowMap.h:285
	float32_t mfDynamicFarClipOffset;

	// BrnShadowMap.h:287
	float32_t mfShadowFadeToValue;

	// BrnShadowMap.h:288
	bool mbDynamicFarClipPlane;

	// BrnShadowMap.h:290
	float32_t mfVariableBiasMin;

	// BrnShadowMap.h:291
	float32_t mfBiasFrustumLength;

public:
	// BrnShadowMap.h:89
	void Construct();

	// BrnShadowMap.h:93
	void Update(Vector3);

	// BrnShadowMap.h:98
	void CalculateShadowMapCameras(Vector3, const Camera *);

	// BrnShadowMap.h:102
	void UpdateShadowMapFocusPoint(Vector3);

	// BrnShadowMap.h:105
	float32_t GetFarPlane() const;

	// BrnShadowMap.h:108
	bool GetRenderShadowMapView() const;

	// BrnShadowMap.h:111
	bool GetRenderWorldIntoShadowMap() const;

	// BrnShadowMap.h:114
	bool GetRenderRaceCarsIntoShadowMap() const;

	// BrnShadowMap.h:117
	bool GetRenderTrafficIntoShadowMap() const;

	// BrnShadowMap.h:120
	bool GetRenderMultipleShadowMaps() const;

	// BrnShadowMap.h:123
	bool GetRenderPropsIntoShadowMap() const;

	// BrnShadowMap.h:126
	Camera * GetShadowMapCamera(int32_t);

	// BrnShadowMap.h:129
	bool GetRenderingShadowMap();

	// BrnShadowMap.h:135
	bool UseZOnlyRenderingPath();

	// BrnShadowMap.h:141
	void SetRenderingShadowMap(bool);

	// BrnShadowMap.h:147
	Camera * GetCgsShadowMapCamera(int32_t);

	// BrnShadowMap.h:150
	bool GetRenderRaceCarsNearOnly() const;

	// BrnShadowMap.h:153
	bool GetRenderTrafficNearOnly() const;

	// BrnShadowMap.h:156
	bool GetRenderPropsNearOnly() const;

	// BrnShadowMap.h:161
	void DebugRender(uint32_t) const;

	// BrnShadowMap.h:165
	const Frustum & GetFrustum(uint32_t) const;

	// BrnShadowMap.h:170
	CgsGraphics::Model::State CalcOptimisedLod(CgsGraphics::Model::State, CgsGraphics::Model::State);

	// BrnShadowMap.h:173
	VecFloat CalcLodDistanceModifier();

	// BrnShadowMap.h:176
	void SetCurrentShadowMap(uint32_t);

	// BrnShadowMap.h:182
	uint32_t GetCurrentShadowMap();

	// BrnShadowMap.h:188
	void ObjectCSMSelect(float32_t) const;

	// BrnShadowMap.h:191
	void SetConstantsForEnvmap();

protected:
	// BrnShadowMap.h:196
	void SetConstants(const Camera *);

	// BrnShadowMap.h:201
	bool CameraMatrixNeedsUpdate(Matrix44Affine, uint32_t);

	// BrnShadowMap.h:206
	void ComputeTSMMatrix(uint32_t, Camera &);

	// BrnShadowMap.h:211
	void ComputeBoundingBoxMatrix(uint32_t, Camera &);

	// BrnShadowMap.h:215
	BrnWorld::ShadowMapType GetShadowMapType(uint32_t);

	// BrnShadowMap.h:223
	void ComputeOptimalViewVolume(const Frustum &, Matrix44Affine, Frustum &, const rw::math::vpu::Vector3 *, const rw::math::vpu::Vector3 *);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// Declaration
	struct ShadowMap {
		// BrnShadowMap.h:69
		struct TsmBBInfo {
			// BrnShadowMap.h:71
			float32_t mfNearClip;

			// BrnShadowMap.h:72
			float32_t mfFarClip;

			// BrnShadowMap.h:73
			Camera mCamera;

			// BrnShadowMap.h:74
			Matrix44 mWorldToLight;

			// BrnShadowMap.h:75
			Matrix44Affine mWorldToLightView;

			// BrnShadowMap.h:76
			Matrix44Affine mLightToWorldView;

			// BrnShadowMap.h:77
			bool mbInvertCullMode;

			// BrnShadowMap.h:78
			Matrix44 mBestFitMatrix;

			// BrnShadowMap.h:79
			Frustum mSubFrustum;

			// BrnShadowMap.h:81
			float32_t mfTsmSlideBack;

			// BrnShadowMap.h:82
			bool mbDebugRender;

			// BrnShadowMap.h:84
			bool mbSceneOptimised;

			// BrnShadowMap.h:85
			AISection::Vector2 mYExtents;

		}

	}

	// BrnShadowMap.h:41
	enum ShadowMapType {
		E_SHADOWMAP_TYPE_ORTHO = 0,
		E_SHADOWMAP_TYPE_TSM = 1,
		E_SHADOWMAP_TYPE_BOUNDINGBOX = 2,
		E_SHADOWMAP_TYPE_CACHED = 3,
	}

	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct ShadowMap {
		// BrnShadowMap.h:69
		struct TsmBBInfo {
			// BrnShadowMap.h:71
			float32_t mfNearClip;

			// BrnShadowMap.h:72
			float32_t mfFarClip;

			// BrnShadowMap.h:73
			Camera mCamera;

			// BrnShadowMap.h:74
			Matrix44 mWorldToLight;

			// BrnShadowMap.h:75
			Matrix44Affine mWorldToLightView;

			// BrnShadowMap.h:76
			Matrix44Affine mLightToWorldView;

			// BrnShadowMap.h:77
			bool mbInvertCullMode;

			// BrnShadowMap.h:78
			Matrix44 mBestFitMatrix;

			// BrnShadowMap.h:79
			Frustum mSubFrustum;

			// BrnShadowMap.h:81
			float32_t mfTsmSlideBack;

			// BrnShadowMap.h:82
			bool mbDebugRender;

			// BrnShadowMap.h:84
			bool mbSceneOptimised;

			// BrnShadowMap.h:85
			SmoothStep::Vector2 mYExtents;

		}

	}

	// BrnShadowMap.h:41
	enum ShadowMapType {
		E_SHADOWMAP_TYPE_ORTHO = 0,
		E_SHADOWMAP_TYPE_TSM = 1,
		E_SHADOWMAP_TYPE_BOUNDINGBOX = 2,
		E_SHADOWMAP_TYPE_CACHED = 3,
	}

	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct ShadowMap {
		// BrnShadowMap.h:69
		struct TsmBBInfo {
			// BrnShadowMap.h:71
			float32_t mfNearClip;

			// BrnShadowMap.h:72
			float32_t mfFarClip;

			// BrnShadowMap.h:73
			Camera mCamera;

			// BrnShadowMap.h:74
			Matrix44 mWorldToLight;

			// BrnShadowMap.h:75
			Matrix44Affine mWorldToLightView;

			// BrnShadowMap.h:76
			Matrix44Affine mLightToWorldView;

			// BrnShadowMap.h:77
			bool mbInvertCullMode;

			// BrnShadowMap.h:78
			Matrix44 mBestFitMatrix;

			// BrnShadowMap.h:79
			Frustum mSubFrustum;

			// BrnShadowMap.h:81
			float32_t mfTsmSlideBack;

			// BrnShadowMap.h:82
			bool mbDebugRender;

			// BrnShadowMap.h:84
			bool mbSceneOptimised;

			// BrnShadowMap.h:85
			Basic2dColouredVertex::Vector2 mYExtents;

		}

	}

	// BrnShadowMap.h:41
	enum ShadowMapType {
		E_SHADOWMAP_TYPE_ORTHO = 0,
		E_SHADOWMAP_TYPE_TSM = 1,
		E_SHADOWMAP_TYPE_BOUNDINGBOX = 2,
		E_SHADOWMAP_TYPE_CACHED = 3,
	}

	// BrnShadowMap.h:60
	const uint32_t KU_NUM_SHADOW_MAPS = 3;

}

