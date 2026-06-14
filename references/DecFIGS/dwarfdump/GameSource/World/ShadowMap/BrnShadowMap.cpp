// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnShadowMap.cpp:356
	extern Vector4 _LineIntersection2d(Vector3, Vector3, Vector3, Vector3);

	// BrnShadowMap.cpp:42
	const BrnWorld::ShadowMapType[3] KA_SHADOWMAPTYPE;

	// BrnShadowMap.cpp:53
	const StringList[5] KA_SHADOWMAP_TYPE_OPTIONS;

	// BrnShadowMap.cpp:63
	const float32_t KF_SHADOWMAP_NEAR_PLANE_OFFSET;

	// BrnShadowMap.cpp:64
	const float32_t KF_SHADOWMAP_FAR_PLANE_OFFSET;

	// BrnShadowMap.cpp:65
	const float32_t KF_SHADOWMAP_EYE_OFFSET;

	// BrnShadowMap.cpp:66
	const float32_t KF_FADE_START_DISTANCE;

	// BrnShadowMap.cpp:68
	const float32_t KF_SHADOWMAP_FADE_TO_VALUE;

	// BrnShadowMap.cpp:69
	const float32_t KF_DYNAMIC_FAR_CLIP_OFFSET;

	// BrnShadowMap.cpp:72
	const float32_t KF_VARIABLE_BIAS_CONSTANT_MULTIPLIER;

	// BrnShadowMap.cpp:73
	const float32_t KF_VARIABLE_BIAS_MIN;

	// BrnShadowMap.cpp:74
	const float32_t KF_VARIABLE_BIAS_MAX;

	// BrnShadowMap.cpp:76
	const float32_t KF_BIAS_FRUSTUM_LENGTH;

	// BrnShadowMap.cpp:78
	const VecFloat K_VECFLOAT_ZEROPOINTTWOFIVE;

	// BrnShadowMap.cpp:79
	const VecFloat K_VECFLOAT_ONE_OVER_ZEROPOINTSEVENFIVE;

	// BrnShadowMap.cpp:86
	const float32_t[3] KAF_ORTHO_SCALE;

	// BrnShadowMap.cpp:87
	const float32_t[3] KAF_CENTRE_AT_OFFSET;

	// BrnShadowMap.cpp:88
	const float32_t KF_SHADOW_CAM_WORLD_Y_OFFSET;

	// BrnShadowMap.cpp:97
	const float32_t[3] KAF_SHADOWMAP_SUBSET_FRUSTUM_NEAR_CLIP;

	// BrnShadowMap.cpp:101
	const float32_t[3] KAF_SHADOWMAP_SUBSET_FRUSTUM_FAR_CLIP;

	// BrnShadowMap.cpp:129
	Matrix44 K_SCALE_AND_BIAS_MATRIX;

	// BrnShadowMap.cpp:135
	Matrix44 K_DISABLE_MATRIX;

	// BrnShadowMap.cpp:142
	const float32_t KF_NUM_CSMS;

	// BrnShadowMap.cpp:225
	Matrix44[3] KA_SINGLE_SHADOWMAP_BIAS_AND_SCALE;

	// BrnShadowMap.cpp:256
	const CgsGeometric::Frustum::Vertices[24] KA_FRUSTUM_VERT_LINE_INDICES;

	// BrnShadowMap.cpp:373
	int32_t[3] KA_SHADOWMAP_LOD_MODIFIER;

	// BrnShadowMap.cpp:374
	float32_t[3] KA_SHADOWMAP_LOD_DISTANCE_MODIFIER;

	// BrnShadowMap.cpp:378
	bool sbOptimiseShadowLods;

	// BrnShadowMap.cpp:379
	bool sbOptimiseShadowLodDistances;

	// BrnShadowMap.cpp:783
	const VecFloat K_SHADOWMAP_MIN_ROTATION_DEGREES;

	// BrnShadowMap.cpp:784
	const VecFloat K_SHADOWMAP_MIN_TRANSLATION_METRES;

	// BrnShadowMap.cpp:832
	extern TsmDebugRenderInfo[3] gTsmDebugRenderInfo;

	// BrnShadowMap.cpp:1203
	extern BoundingBoxDebugRenderInfo[3] gBoundingBoxDebugRenderInfo;

	// BrnShadowMap.cpp:1219
	extern VecFloat K_1_OVER_4;

	// BrnShadowMap.cpp:1220
	extern VecFloat K_HALF;

	// BrnShadowMap.cpp:1589
	const VecFloat K_VERY_SMALL;

	// BrnShadowMap.cpp:1590
	const VecFloat K_MINUS_VERY_SMALL;

	// BrnShadowMap.cpp:1591
	const VecFloat K_LOW_PRIORITY;

	// BrnShadowMap.cpp:1592
	const VecFloat K_HIGH_PRIORITY;

	// BrnShadowMap.cpp:1922
	const float32_t[3] KAF_ENVMAP_DISTANCES;

	// BrnShadowMap.cpp:1923
	const float32_t KF_ENV_MAP_FADE_DISTANCE;

	// BrnShadowMap.cpp:1924
	const float32_t KF_ENV_MAP_FADE_TO_VALUE;

}

// BrnShadowMap.cpp:330
struct BrnWorld::CandidateViewVolumePlane {
	// BrnShadowMap.cpp:339
	Vector3Plus mPlane;

	// BrnShadowMap.cpp:340
	VecFloat mScore;

public:
	// BrnShadowMap.cpp:334
	bool operator<(CandidateViewVolumePlane &) const;

}

// BrnShadowMap.cpp:816
struct BrnWorld::TsmDebugRenderInfo {
	// BrnShadowMap.cpp:818
	Vector3[8] maFrustumPoints;

	// BrnShadowMap.cpp:819
	Vector3[4] maTrapezoidPointsWorld;

	// BrnShadowMap.cpp:820
	Vector3 mCentreLineStart;

	// BrnShadowMap.cpp:821
	Vector3 mCentreLineEnd;

	// BrnShadowMap.cpp:822
	Vector3 mQ;

	// BrnShadowMap.cpp:823
	Vector3 mFocusLineCentrePoint;

	// BrnShadowMap.cpp:824
	Frustum mCameraFrustum;

	// BrnShadowMap.cpp:825
	Vector3[4] maTrapezoidPoints2;

	// BrnShadowMap.cpp:827
	Vector3[2] mSideLineStart;

	// BrnShadowMap.cpp:828
	Vector3[2] mSideLineEnd;

	// BrnShadowMap.cpp:829
	Vector3[2] mBaseLineStart;

	// BrnShadowMap.cpp:830
	Vector3[2] mBaseLineEnd;

	// BrnShadowMap.cpp:831
	Matrix44 mLightToWorld;

}

// BrnShadowMap.cpp:1187
struct BrnWorld::BoundingBoxDebugRenderInfo {
	// BrnShadowMap.cpp:1189
	Vector3[8] maFrustumPoints;

	// BrnShadowMap.cpp:1190
	Frustum mCameraFrustum;

	// BrnShadowMap.cpp:1191
	Vector3[4] maBoxPointsWorld;

	// BrnShadowMap.cpp:1192
	Vector3[4] maBoxPointsSquare;

	// BrnShadowMap.cpp:1193
	Vector3 mCentreLineStart;

	// BrnShadowMap.cpp:1194
	Vector3 mCentreLineEnd;

	// BrnShadowMap.cpp:1195
	Matrix44 mLightToWorld;

	// BrnShadowMap.cpp:1196
	Vector3[2] mSideLineStart;

	// BrnShadowMap.cpp:1197
	Vector3[2] mSideLineEnd;

	// BrnShadowMap.cpp:1198
	Vector3[2] mBaseLineStart;

	// BrnShadowMap.cpp:1199
	Vector3[2] mBaseLineEnd;

	// BrnShadowMap.cpp:1200
	VecFloat mZOffset;

	// BrnShadowMap.cpp:1201
	float32_t mfAspectRatio;

	// BrnShadowMap.cpp:1202
	Frustum mLightFrustum;

}

// BrnShadowMap.cpp:384
void BrnWorld::ShadowMap::CalcOptimisedLod(CgsGraphics::Model::State  leLodIn, CgsGraphics::Model::State  leMaxLod) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Min(/* parameters */);
}

// BrnShadowMap.cpp:620
void BrnWorld::ShadowMap::UpdateShadowMapFocusPoint(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShadowMap.cpp:603
void BrnWorld::ShadowMap::Update(const rw::math::vpu::Vector3  lPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShadowMap.cpp:396
void BrnWorld::ShadowMap::CalcLodDistanceModifier() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnShadowMap.cpp:1964
void BrnWorld::ShadowMap::DebugRender(uint32_t  luShadowMapIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1966
		DebugInterface lDebugInterface;

		// BrnShadowMap.cpp:1967
		const DebugRender & lDebugRender;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		// BrnShadowMap.cpp:1978
		const TsmDebugRenderInfo & lDebugInfo;

		// BrnShadowMap.cpp:2017
		Vector3[4] laLightSpaceSquare;

		{
			// BrnShadowMap.cpp:1979
			uint32_t luI;

		}
		{
			// BrnShadowMap.cpp:1986
			uint32_t luI;

		}
		{
			// BrnShadowMap.cpp:1999
			uint32_t luI;

		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:2040
		const BoundingBoxDebugRenderInfo & lDebugInfo;

		// BrnShadowMap.cpp:2076
		float32_t sfAxisZOffset;

		// BrnShadowMap.cpp:2077
		Vector3[4] laLightSpaceSquare;

		{
			// BrnShadowMap.cpp:2041
			uint32_t luI;

		}
		{
			// BrnShadowMap.cpp:2048
			uint32_t luI;

		}
		{
			// BrnShadowMap.cpp:2058
			uint32_t luI;

		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			// BrnShadowMap.cpp:2099
			char[32] lacAspectRatioText;

			// BrnShadowMap.cpp:2101
			Vector3 lTextPos;

		}
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
		}
		rw::math::vpu::TransformPoint(/* parameters */);
		{
		}
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnShadowMap.cpp:417
void BrnWorld::ShadowMap::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:488
		DebugInterface lDebugInterface;

		// BrnShadowMap.cpp:501
		char[64] lacShadowMapName;

		// BrnShadowMap.cpp:552
		int32_t * lpuShadowMapTypes;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:446
		uint32_t luI;

		rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	{
		// BrnShadowMap.cpp:461
		uint32_t luI;

	}
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	{
		// BrnShadowMap.cpp:502
		uint32_t luI;

	}
	{
		// BrnShadowMap.cpp:553
		uint32_t luI;

	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnShadowMap.cpp:800
void BrnWorld::ShadowMap::CameraMatrixNeedsUpdate(const rw::math::vpu::Matrix44Affine &  lNewMatrix, uint32_t  luShadowMapIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:802
		VecFloat lXDegrees;

		// BrnShadowMap.cpp:803
		VecFloat lYDegrees;

		// BrnShadowMap.cpp:804
		VecFloat lZDegrees;

		// BrnShadowMap.cpp:805
		VecFloat lWMetres;

		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::ACos(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
	}
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	std(/* parameters */);
	vec_sub(/* parameters */);
	vec_abs(/* parameters */);
	vec_abs(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sra(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_rsqrte(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	vec_cmpeq(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_sra(/* parameters */);
	vec_sra(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnShadowMap.cpp:1600
void BrnWorld::ShadowMap::ComputeOptimalViewVolume(const const Frustum &  lCameraFrustum, const rw::math::vpu::Matrix44Affine &  lLightToWorld, const Frustum &  lViewVolumeOut, const rw::math::vpu::Vector3 *  laFrustumPoints, const rw::math::vpu::Vector3 *  laFrustumPointsLightSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1604
		CandidateViewVolumePlane[32] laCandidatePlanes;

		// BrnShadowMap.cpp:1605
		uint32_t luNumCandidatePlanes;

		// BrnShadowMap.cpp:1610
		bool sbAddLinePlanes;

		// BrnShadowMap.cpp:1707
		Vector3 lLightVector;

		// BrnShadowMap.cpp:1708
		bool sbAddOpposingPlanes;

		// BrnShadowMap.cpp:1729
		bool sbAddNearClipPlane;

		// BrnShadowMap.cpp:1745
		bool sbSortPlanes;

		// BrnShadowMap.cpp:1750
		uint32_t luNumPlanes;

		// BrnShadowMap.cpp:1754
		bool sbClearPlanes;

		// BrnShadowMap.cpp:1755
		Vector3Plus[8] saClearPlanes;

		{
			// BrnShadowMap.cpp:1614
			Vector3[12] lLineStartLight;

			// BrnShadowMap.cpp:1615
			Vector3[12] lLineEndLight;

			// BrnShadowMap.cpp:1616
			Vector3[12] lLineStartWorld;

			// BrnShadowMap.cpp:1617
			Vector3[12] lLineEndWorld;

			// BrnShadowMap.cpp:1627
			Vector3Plus[12] laPlanes;

			{
				// BrnShadowMap.cpp:1618
				uint32_t luI;

			}
			{
				// BrnShadowMap.cpp:1628
				uint32_t luI;

				{
					// BrnShadowMap.cpp:1630
					Vector3 lLineVec;

					// BrnShadowMap.cpp:1631
					Vector3 lLineVecNormalised;

					// BrnShadowMap.cpp:1632
					Vector3 lPlaneNormalLight;

					// BrnShadowMap.cpp:1636
					Vector3 lPlaneNormalWorld;

					rw::math::vpu::operator-(/* parameters */);
					rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
					rw::math::vpu::Vector3::Vector3(/* parameters */);
					rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
					rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
					rw::math::vpu::Cross(/* parameters */);
					rw::math::vpu::Normalize(/* parameters */);
					{
						{
						}
					}
					rw::math::vpu::TransformVector(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
				}
			}
			{
				// BrnShadowMap.cpp:1644
				uint32_t luI;

				{
					// BrnShadowMap.cpp:1646
					bool lbPointsBehind;

					// BrnShadowMap.cpp:1647
					bool lbPointsInFront;

					// BrnShadowMap.cpp:1648
					const Vector3Plus & lPlane;

					// BrnShadowMap.cpp:1649
					const Vector4 & lPlaneVec4;

					// BrnShadowMap.cpp:1652
					VecFloat[8] laDistances;

					// BrnShadowMap.cpp:1662
					VecFloat lMinDist;

					// BrnShadowMap.cpp:1670
					VecFloat lMaxDist;

					rw::math::vpu::Vector3Plus::GetVector3(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::Dot(/* parameters */);
					rw::math::vpu::operator<(/* parameters */);
					rw::math::vpu::operator>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
					rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
				}
			}
		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		{
			// BrnShadowMap.cpp:1712
			uint32_t luI;

			{
				// BrnShadowMap.cpp:1715
				Plane lPlane;

				// BrnShadowMap.cpp:1716
				VecFloat lNDotL;

				CgsGeometric::Frustum::GetPlaneByIndex(/* parameters */);
				rw::math::vpu::operator-(/* parameters */);
				rw::math::vpu::Dot(/* parameters */);
			}
			rw::math::vpu::operator<(/* parameters */);
		}
		CgsNumeric::Min(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		rw::math::vpu::Vector3Plus::Vector3Plus(/* parameters */);
		{
			// BrnShadowMap.cpp:1768
			uint32_t luI;

		}
		{
			// BrnShadowMap.cpp:1789
			uint32_t luI;

			CgsGeometric::Frustum::SetPlaneByIndex(/* parameters */);
			operator=<VectorAxisY>(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
			operator=<VectorAxisW>(/* parameters */);
			operator=<VectorAxisZ>(/* parameters */);
			operator=<VectorAxisX>(/* parameters */);
			operator=<VectorAxisY>(/* parameters */);
			operator=<VectorAxisW>(/* parameters */);
		}
	}
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnShadowMap.cpp:1783
		uint32_t luI;

	}
	std::sort<BrnWorld::CandidateViewVolumePlane*>(/* parameters */);
	{
		// BrnShadowMap.cpp:1732
		const Vector3Plus & lNearPlane;

		// BrnShadowMap.cpp:1735
		Vector3 lLightPosWorldSpace;

		// BrnShadowMap.cpp:1736
		VecFloat lNearClip;

		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnShadowMap.cpp:849
void BrnWorld::ShadowMap::ComputeTSMMatrix(uint32_t  luMapIndex, const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:851
		const BrnWorld::ShadowMap::TsmBBInfo & lTsmBBInfo;

		// BrnShadowMap.cpp:855
		Frustum lFrustum;

		// BrnShadowMap.cpp:863
		const Matrix44 & lWorldToLight;

		// BrnShadowMap.cpp:864
		Matrix44 lWorldToLight2d;

		// BrnShadowMap.cpp:876
		Vector3[8] lFrustumPoints;

		// BrnShadowMap.cpp:880
		Vector3[8] lFrustumPointsLightSpace;

		// BrnShadowMap.cpp:889
		Vector3 lCentreLineStart;

		// BrnShadowMap.cpp:895
		Vector3 lCentreLineEnd;

		// BrnShadowMap.cpp:901
		Vector3 lFocusLineCentrePoint;

		// BrnShadowMap.cpp:902
		Vector3 lCentreLineVec;

		// BrnShadowMap.cpp:909
		Vector3 lBaseLineVec;

		// BrnShadowMap.cpp:912
		VecFloat lDistance;

		// BrnShadowMap.cpp:913
		VecFloat lNearestDistance;

		// BrnShadowMap.cpp:914
		VecFloat lFurthestDistance;

		// BrnShadowMap.cpp:915
		Vector3 lNearestPoint;

		// BrnShadowMap.cpp:916
		Vector3 lFurthestPoint;

		// BrnShadowMap.cpp:932
		Vector3 lBaseLineStart;

		// BrnShadowMap.cpp:933
		Vector3 lTopLineStart;

		// BrnShadowMap.cpp:936
		VecFloat lCentreLineStartOffset;

		// BrnShadowMap.cpp:937
		Vector3 lBaseLineCentre;

		// BrnShadowMap.cpp:938
		Vector3 lTopLineCentre;

		// BrnShadowMap.cpp:941
		VecFloat lFocusRegionDistance;

		// BrnShadowMap.cpp:951
		VecFloat lBaseToTopDist;

		// BrnShadowMap.cpp:952
		VecFloat lN;

		// BrnShadowMap.cpp:956
		Vector3 lQ;

		// BrnShadowMap.cpp:959
		Vector3 lSideLineRightVec;

		// BrnShadowMap.cpp:960
		Vector3 lSideLineRightStart;

		// BrnShadowMap.cpp:961
		Vector3 lSideLineLeftVec;

		// BrnShadowMap.cpp:962
		Vector3 lSideLineLeftStart;

		// BrnShadowMap.cpp:1002
		bool sbSwapLeftAndRight;

		// BrnShadowMap.cpp:1017
		Vector4[4] laTrapezoidPoints;

		// BrnShadowMap.cpp:1028
		Vector4 lVecU;

		// BrnShadowMap.cpp:1029
		Vector4 lVecV;

		// BrnShadowMap.cpp:1032
		Matrix44 lTransformT1;

		// BrnShadowMap.cpp:1040
		Matrix44 lTransformR;

		// BrnShadowMap.cpp:1047
		Matrix44 lTransformT1xR;

		// BrnShadowMap.cpp:1048
		Vector4 lQ4T;

		// BrnShadowMap.cpp:1049
		Matrix44 lTransformT2;

		// BrnShadowMap.cpp:1056
		Matrix44 lTransformT1xRxT2;

		// BrnShadowMap.cpp:1058
		Matrix44 lTransformH;

		// BrnShadowMap.cpp:1065
		Matrix44 lTransformT1xRxT2xH;

		// BrnShadowMap.cpp:1067
		Matrix44 lTransformS1;

		// BrnShadowMap.cpp:1073
		Matrix44 lTransformT1xRxT2xHxS1;

		// BrnShadowMap.cpp:1076
		Matrix44 lTransformN;

		// BrnShadowMap.cpp:1083
		Matrix44 lTransformT1xRxT2xHxS1xN;

		// BrnShadowMap.cpp:1086
		Matrix44 lTransformT3;

		// BrnShadowMap.cpp:1093
		Matrix44 lTransformT1xRxT2xHxS1xNxT3;

		// BrnShadowMap.cpp:1095
		Matrix44 lTransformS2;

		// BrnShadowMap.cpp:1121
		Matrix44 lIdentity;

		// BrnShadowMap.cpp:1122
		Matrix44 lTestMatrixRxT1;

		// BrnShadowMap.cpp:1123
		Matrix44 *[11] lpMatrices;

		// BrnShadowMap.cpp:1137
		int32_t siMatrixIndex;

	}
	Frustum(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::SetZColumn(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
		// BrnShadowMap.cpp:867
		Frustum lRwFrustum;

		rw::collision::Frustum::Frustum(/* parameters */);
		CgsGraphics::Camera::GetFrustum(/* parameters */);
		rw::math::vpu::Matrix44::GetElem(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:881
		uint32_t luI;

		rw::math::vpu::TransformPoint(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	VecFloat<VectorAxisY>(/* parameters */);
	{
		// BrnShadowMap.cpp:917
		uint32_t luI;

		rw::math::vpu::Dot(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
		// BrnShadowMap.cpp:965
		uint32_t luI;

		{
			// BrnShadowMap.cpp:968
			Vector3 lLineVec;

			// BrnShadowMap.cpp:969
			Vector3 lLineVecNormal;

			// BrnShadowMap.cpp:970
			VecFloat lLineD;

			// BrnShadowMap.cpp:973
			bool lbPositivePointsFound;

			// BrnShadowMap.cpp:974
			bool lbNegativePointsFound;

			rw::math::vpu::operator-(/* parameters */);
		}
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
		// BrnShadowMap.cpp:975
		uint32_t luJ;

		{
			// BrnShadowMap.cpp:979
			VecFloat lPointD;

		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator>=(/* parameters */);
	}
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-<VectorAxisW>(/* parameters */);
	{
	}
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	{
		// BrnShadowMap.cpp:1141
		Vector3 lFirstFrustumPoint;

		// BrnShadowMap.cpp:1143
		Matrix44 lLightToWorld;

		// BrnShadowMap.cpp:1144
		Vector3 lZOffset;

		// BrnShadowMap.cpp:1145
		const TsmDebugRenderInfo & lDebugInfo;

		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	}
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	{
	}
	rw::math::vpu::TransformPoint(/* parameters */);
	{
	}
	{
	}
	{
		{
			{
			}
		}
	}
	{
	}
	{
		{
			{
			}
		}
	}
	{
	}
	VecFloat<VectorAxisZ>(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	{
		// BrnShadowMap.cpp:1151
		uint32_t luI;

		rw::math::vpu::operator/<VectorAxisW>(/* parameters */);
	}
	rw::math::vpu::TransformPoint(/* parameters */);
	{
	}
	rw::math::vpu::TransformPoint(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator/<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	{
		// BrnShadowMap.cpp:1169
		uint32_t luI;

	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	{
		// BrnShadowMap.cpp:1106
		Matrix44 lTransformInvertCullMode;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
	}
	CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	CgsGraphics::Camera::GetFarClipPlane(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
}

// BrnShadowMap.cpp:1225
void BrnWorld::ShadowMap::ComputeBoundingBoxMatrix(uint32_t  luMapIndex, const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1230
		const BrnWorld::ShadowMap::TsmBBInfo & lTsmBBInfo;

		// BrnShadowMap.cpp:1234
		const Frustum & lFrustum;

		// BrnShadowMap.cpp:1246
		const Matrix44 & lWorldToLight;

		// BrnShadowMap.cpp:1259
		Vector3[8] lFrustumPoints;

		// BrnShadowMap.cpp:1263
		Vector3[8] lFrustumPointsLightSpace3d;

		// BrnShadowMap.cpp:1264
		Vector3[8] lFrustumPointsLightSpace;

		// BrnShadowMap.cpp:1278
		Vector3 lCentreLineStart;

		// BrnShadowMap.cpp:1284
		Vector3 lCentreLineEnd;

		// BrnShadowMap.cpp:1290
		Vector3 lFocusLineCentrePoint;

		// BrnShadowMap.cpp:1291
		Vector3 lCentreLineVec;

		// BrnShadowMap.cpp:1296
		Vector4[4] laBestBoxPoints;

		// BrnShadowMap.cpp:1297
		Vector3 lBestBoxBaseLineStart;

		// BrnShadowMap.cpp:1298
		Vector3 lBestBoxTopLineStart;

		// BrnShadowMap.cpp:1299
		Vector3 lBestBoxSideLineRightVec;

		// BrnShadowMap.cpp:1300
		Vector3 lBestBoxSideLineRightStart;

		// BrnShadowMap.cpp:1301
		Vector3 lBestBoxSideLineLeftVec;

		// BrnShadowMap.cpp:1302
		Vector3 lBestBoxSideLineLeftStart;

		// BrnShadowMap.cpp:1304
		VecFloat lSmallestArea;

		// BrnShadowMap.cpp:1305
		Vector3 lOriginalBaseLineVec;

		// BrnShadowMap.cpp:1306
		Vector3 lBaseLineVec;

		// BrnShadowMap.cpp:1307
		uint32_t KU_NUM_BOUNDING_BOX_ITERATIONS;

		// BrnShadowMap.cpp:1308
		VecFloat lRotateStep;

		// BrnShadowMap.cpp:1309
		VecFloat lRotation;

		// BrnShadowMap.cpp:1310
		Matrix44Affine lRotationAroundZMatrix;

		// BrnShadowMap.cpp:1311
		VecFloat lIdealAspectRatio;

		// BrnShadowMap.cpp:1436
		VecFloat lHeight;

		// BrnShadowMap.cpp:1437
		VecFloat lWidth;

		// BrnShadowMap.cpp:1460
		Vector4 lVecU;

		// BrnShadowMap.cpp:1461
		Vector4 lVecV;

		// BrnShadowMap.cpp:1463
		bool sbCentreBox;

		// BrnShadowMap.cpp:1472
		Matrix44 lTransformT1;

		// BrnShadowMap.cpp:1482
		float32_t[4] XMult;

		// BrnShadowMap.cpp:1483
		float32_t[4] YMult;

		// BrnShadowMap.cpp:1485
		Matrix44 lTransformR;

		// BrnShadowMap.cpp:1492
		Matrix44 lTransformT1xR;

		// BrnShadowMap.cpp:1496
		Matrix44 lTransformS2;

		// BrnShadowMap.cpp:1523
		Matrix44 lIdentity;

		// BrnShadowMap.cpp:1524
		Matrix44 lTestMatrixRxT1;

		// BrnShadowMap.cpp:1525
		Matrix44 *[6] lpMatrices;

		// BrnShadowMap.cpp:1534
		int32_t siBoxMatrixIndex;

	}
	{
		// BrnShadowMap.cpp:1248
		Frustum lRwFrustum;

		rw::collision::Frustum::Frustum(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:1265
		uint32_t luI;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::X(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::DegToRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector4_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	{
	}
	rw::math::vpu::GetVector3_Zero(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnShadowMap.cpp:1314
		uint32_t luIteration;

	}
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	{
		{
		}
	}
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	_LineIntersection2d(/* parameters */);
	_LineIntersection2d(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
	}
	{
	}
	{
		{
		}
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator/<VectorAxisX>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator/<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Inverse(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
		{
			{
			}
		}
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::GetMatrix44_Identity(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		// BrnShadowMap.cpp:1538
		Matrix44 lLightToWorld;

		// BrnShadowMap.cpp:1539
		Vector3 lZOffset;

		// BrnShadowMap.cpp:1540
		const BoundingBoxDebugRenderInfo & lDebugInfo;

		rw::math::vpu::Inverse(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
		}
		VecFloat<VectorAxisZ>(/* parameters */);
		{
		}
		{
		}
		{
			{
				{
					{
					}
				}
			}
		}
		{
		}
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			{
				{
				}
			}
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
		}
		{
			// BrnShadowMap.cpp:1547
			uint32_t luI;

			rw::math::vpu::operator/<VectorAxisW>(/* parameters */);
		}
		rw::math::vpu::TransformPoint(/* parameters */);
		{
		}
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator/<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		operator=<VectorAxisZ>(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		{
			// BrnShadowMap.cpp:1564
			uint32_t luI;

		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Min<float>(/* parameters */);
	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	CgsGraphics::Camera::GetFarClipPlane(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
	{
		// BrnShadowMap.cpp:1507
		Matrix44 lTransformInvertCullMode;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
	}
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnShadowMap.cpp:1316
		VecFloat lHeight;

		// BrnShadowMap.cpp:1317
		VecFloat lWidth;

		// BrnShadowMap.cpp:1318
		VecFloat lArea;

		// BrnShadowMap.cpp:1321
		Vector3 lPotentialBaseLineVec;

		// BrnShadowMap.cpp:1322
		Vector3 lBaseLineNormal;

		// BrnShadowMap.cpp:1328
		VecFloat lDistance;

		// BrnShadowMap.cpp:1329
		VecFloat lNearestDistance;

		// BrnShadowMap.cpp:1330
		VecFloat lFurthestDistance;

		// BrnShadowMap.cpp:1331
		Vector3 lNearestPoint;

		// BrnShadowMap.cpp:1332
		Vector3 lFurthestPoint;

		// BrnShadowMap.cpp:1350
		Vector3 lBaseLineStart;

		// BrnShadowMap.cpp:1351
		Vector3 lTopLineStart;

		// BrnShadowMap.cpp:1357
		Vector3 lSideLineRightVec;

		// BrnShadowMap.cpp:1358
		Vector3 lSideLineRightStart;

		// BrnShadowMap.cpp:1359
		Vector3 lSideLineLeftVec;

		// BrnShadowMap.cpp:1360
		Vector3 lSideLineLeftStart;

		// BrnShadowMap.cpp:1366
		Vector3 lLineVec;

		// BrnShadowMap.cpp:1367
		Vector3 lLineVecNormal;

		// BrnShadowMap.cpp:1368
		VecFloat lLineD;

		// BrnShadowMap.cpp:1369
		VecFloat lMaxD;

		// BrnShadowMap.cpp:1370
		VecFloat lMinD;

		// BrnShadowMap.cpp:1371
		uint32_t luLeftPoint;

		// BrnShadowMap.cpp:1372
		uint32_t luRightPoint;

		rw::math::vpu::Matrix44AffineFromZRotationAngle(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		{
		}
		rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisX>(/* parameters */);
		{
		}
		{
			// BrnShadowMap.cpp:1333
			uint32_t luI;

			rw::math::vpu::Dot(/* parameters */);
		}
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		VecFloat<VectorAxisY>(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		{
		}
		{
			// BrnShadowMap.cpp:1373
			uint32_t luI;

		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	{
		// BrnShadowMap.cpp:1398
		VecFloat lAspectRatio;

		// BrnShadowMap.cpp:1401
		VecFloat lAspectScore;

		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

// BrnShadowMap.cpp:1812
void BrnWorld::ShadowMap::ObjectCSMSelect(float32_t  lfDistance) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1815
		uint32_t luCSMIndex;

		// BrnShadowMap.cpp:1816
		float32_t lfThresh;

		// BrnShadowMap.cpp:1827
		Vector4 lCSMSelect;

		rw::math::vpu::Vector4::Vector4(/* parameters */);
		ShaderConstantTable::SetShaderConstantData(/* parameters */);
		ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	}
	rw::math::vpu::Vector4::operator=(/* parameters */);
}

// BrnShadowMap.cpp:1844
void BrnWorld::ShadowMap::SetConstants(const Camera *  lpBrnCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1847
		Vector3 lOffsetWorld;

		// BrnShadowMap.cpp:1848
		Vector3 lMap0Offset;

		// BrnShadowMap.cpp:1849
		Vector3 lMap1Offset;

		// BrnShadowMap.cpp:1853
		Matrix44[3] laWorldToLight;

		// BrnShadowMap.cpp:1886
		float32_t lfFadeVar;

		// BrnShadowMap.cpp:1891
		Vector4 lConstants;

		// BrnShadowMap.cpp:1899
		float32_t lfBiasScale;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetZ(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnShadowMap.cpp:1854
		uint32_t luI;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		rw::math::vpu::Transpose(/* parameters */);
	}
	ShaderConstantTable::SetShaderConstantArrayData(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	{
		// BrnShadowMap.cpp:1902
		float32_t lfFrustumLength;

	}
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
}

// BrnShadowMap.cpp:638
void BrnWorld::ShadowMap::CalculateShadowMapCameras(Vector3  lLightDirection, const Camera *  lpBrnCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:642
		Vector3 lLightOffset;

		// BrnShadowMap.cpp:643
		uint32_t luShadowMapIndex;

		// BrnShadowMap.cpp:682
		Camera lViewCamera;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	{
		// BrnShadowMap.cpp:647
		uint32_t luScaleOffsetIndex;

		operator=(/* parameters */);
		BrnDirector::Camera::Camera::SetFOV(/* parameters */);
		{
			// BrnShadowMap.cpp:656
			Matrix44Affine lLsm;

			{
				// BrnShadowMap.cpp:661
				Vector3 lEyePos;

				// BrnShadowMap.cpp:662
				Vector3 lLookAtPos;

				// BrnShadowMap.cpp:663
				Vector3 lUpVector;

				rw::math::vpu::Vector3::Vector3(/* parameters */);
				rw::math::vpu::Matrix44Affine::GetZ(/* parameters */);
			}
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		BrnDirector::Camera::Camera::SetTransform(/* parameters */);
		CgsGraphics::Camera::SetAspectRatio(/* parameters */);
		CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
		CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:707
		const const rw::math::vpu::Matrix44 & lProj;

		CgsGraphics::Camera::SetProjectionMatrix(/* parameters */);
	}
	{
		// BrnShadowMap.cpp:772
		uint32_t luI;

	}
	{
		// BrnShadowMap.cpp:700
		const const rw::math::vpu::Matrix44 & lProj;

	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	{
		// BrnShadowMap.cpp:722
		Matrix44 lWorldToShadowClip;

		// BrnShadowMap.cpp:726
		Camera lSubsetFrustumCamera;

		// BrnShadowMap.cpp:727
		Frustum lSubsetFrustum;

		// BrnShadowMap.cpp:733
		Vector3[8] lFrustumVertices;

		// BrnShadowMap.cpp:737
		VecFloat lMaxZ;

		// BrnShadowMap.cpp:746
		float32_t lfNewFrustumLength;

		CgsGraphics::Camera::GetViewProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		Frustum(/* parameters */);
		CgsGraphics::Camera::SetNearClipPlane(/* parameters */);
		CgsGraphics::Camera::GetNearClipPlane(/* parameters */);
		rw::math::vpu::Max<float>(/* parameters */);
		CgsGraphics::Camera::SetFarClipPlane(/* parameters */);
		CgsGraphics::Camera::GetFarClipPlane(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		{
			// BrnShadowMap.cpp:738
			uint32_t luI;

			{
				// BrnShadowMap.cpp:740
				Vector4 lVert;

				// BrnShadowMap.cpp:741
				Vector4 lVertShadowMap;

				rw::math::vpu::Max<rw::math::vpu::VecFloat>(/* parameters */);
			}
		}
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		VecFloat<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			// BrnShadowMap.cpp:751
			VecFloat lFrustumLength;

			// BrnShadowMap.cpp:752
			VecFloat lZZ;

			// BrnShadowMap.cpp:753
			VecFloat lWZ;

		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		{
			// BrnShadowMap.cpp:754
			uint32_t luI;

			{
				// BrnShadowMap.cpp:756
				Matrix44 lProjectionMatrix;

				// BrnShadowMap.cpp:757
				Vector4 lZRow;

				// BrnShadowMap.cpp:758
				Vector4 lWRow;

				CgsGraphics::Camera::SetProjectionMatrix(/* parameters */);
				CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
				rw::math::vpu::Matrix44::Matrix44(/* parameters */);
				rw::math::vpu::Vector4::SetZ(/* parameters */);
				rw::math::vpu::Vector4::SetZ(/* parameters */);
				rw::math::vpu::Matrix44::Matrix44(/* parameters */);
				rw::math::vpu::Matrix44::operator=(/* parameters */);
			}
		}
	}
}

// BrnShadowMap.cpp:1926
void BrnWorld::ShadowMap::SetConstantsForEnvmap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShadowMap.cpp:1928
		float32_t lfFadeVar;

		// BrnShadowMap.cpp:1933
		Vector4 lConstants;

		// BrnShadowMap.cpp:1939
		float32_t lfBiasScale;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
	rw::math::vpu::Vector4::SetW(/* parameters */);
	{
		// BrnShadowMap.cpp:1942
		float32_t lfFrustumLength;

	}
	rw::math::vpu::Vector4::SetX(/* parameters */);
	ShaderConstantTable::SetShaderConstantData(/* parameters */);
	rw::math::vpu::Vector4::SetY(/* parameters */);
	rw::math::vpu::Vector4::SetZ(/* parameters */);
	ShaderConstantTable::UpdateShaderChangeTableAndGetConstantDestination(/* parameters */);
	rw::math::vpu::Vector4::operator=(/* parameters */);
}

