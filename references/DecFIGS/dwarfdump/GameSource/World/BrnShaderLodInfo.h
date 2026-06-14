// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnShaderLodInfo.h:27
	enum WorldShaderTechnique {
		E_TECHNIQUE_INVALID = -1,
		E_TECHNIQUE_LOD0 = 0,
		E_TECHNIQUE_ZONLY = 1,
		E_TECHNIQUE_LOD1 = 2,
	}

}

// BrnShaderLodInfo.h:40
struct BrnWorld::ShaderLodInfo {
	// BrnShaderLodInfo.h:57
	VecFloat mShaderLod1NearDistance;

	// BrnShaderLodInfo.h:58
	VecFloat mMaxBelievableRadius;

	// BrnShaderLodInfo.h:59
	float32_t mfShaderLod1NearDistance;

	// BrnShaderLodInfo.h:60
	int32_t miEnvMapTechnique;

	// BrnShaderLodInfo.h:61
	int32_t miOverrideTechnique;

	// BrnShaderLodInfo.h:62
	bool mbUseShaderLod;

public:
	// BrnShaderLodInfo.h:43
	void Construct();

	// BrnShaderLodInfo.h:46
	void Update();

	// BrnShaderLodInfo.h:52
	BrnWorld::WorldShaderTechnique GetLodTechnique(Vector3Plus, Matrix44Affine, Vector3) const;

	// BrnShaderLodInfo.h:55
	BrnWorld::WorldShaderTechnique GetEnvMapTechnique() const;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnShaderLodInfo.h:27
	enum WorldShaderTechnique {
		E_TECHNIQUE_INVALID = -1,
		E_TECHNIQUE_LOD0 = 0,
		E_TECHNIQUE_ZONLY = 1,
		E_TECHNIQUE_LOD1 = 2,
	}

}

