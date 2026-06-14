// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	struct WorldTexturedVertex;

	struct LionBlendRenderer;

}

// BrnEnvironmentMap.h:31
namespace BrnGraphics {
}

// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEnvironmentMap.h:35
	enum EEnvironmentMapFace {
		E_FACE_POSITIVE_X = 0,
		E_FACE_NEGATIVE_X = 1,
		E_FACE_POSITIVE_Y = 2,
		E_FACE_NEGATIVE_Y = 3,
		E_FACE_POSITIVE_Z = 4,
		E_FACE_NEGATIVE_Z = 5,
		E_FACE_NUM = 6,
	}

}

// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEnvironmentMap.h:35
	enum EEnvironmentMapFace {
		E_FACE_POSITIVE_X = 0,
		E_FACE_NEGATIVE_X = 1,
		E_FACE_POSITIVE_Y = 2,
		E_FACE_NEGATIVE_Y = 3,
		E_FACE_POSITIVE_Z = 4,
		E_FACE_NEGATIVE_Z = 5,
		E_FACE_NUM = 6,
	}

	struct EffectsArbitrator;

	struct ShadowMapRenderManager;

	struct Im3dSkyDomeVertex;

	struct DebugComponent;

}

// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEnvironmentMap.h:35
	enum EEnvironmentMapFace {
		E_FACE_POSITIVE_X = 0,
		E_FACE_NEGATIVE_X = 1,
		E_FACE_POSITIVE_Y = 2,
		E_FACE_NEGATIVE_Y = 3,
		E_FACE_POSITIVE_Z = 4,
		E_FACE_NEGATIVE_Z = 5,
		E_FACE_NUM = 6,
	}

	struct EnvironmentMap;

}

// BrnEnvironmentMap.h:57
struct BrnGraphics::EnvironmentMap {
private:
	// BrnEnvironmentMap.h:86
	Camera[6] maEnvMapCameras;

	// BrnEnvironmentMap.h:88
	Vector3 mCameraPosition;

	// BrnEnvironmentMap.h:90
	float32_t mfFOV;

	// BrnEnvironmentMap.h:91
	float32_t mfAspectRatio;

public:
	// BrnEnvironmentMap.h:61
	void Construct();

	// BrnEnvironmentMap.h:64
	void Destruct();

	// BrnEnvironmentMap.h:67
	bool Prepare();

	// BrnEnvironmentMap.h:70
	bool Release();

	// BrnEnvironmentMap.h:74
	void Update(Vector3);

	// BrnEnvironmentMap.h:78
	const Camera * GetCamera(BrnGraphics::EEnvironmentMapFace) const;

	// BrnEnvironmentMap.h:81
	Vector3 GetCameraPosition() const;

}

// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// BrnEnvironmentMap.h:35
	enum EEnvironmentMapFace {
		E_FACE_POSITIVE_X = 0,
		E_FACE_NEGATIVE_X = 1,
		E_FACE_POSITIVE_Y = 2,
		E_FACE_NEGATIVE_Y = 3,
		E_FACE_POSITIVE_Z = 4,
		E_FACE_NEGATIVE_Z = 5,
		E_FACE_NUM = 6,
	}

	struct EnvironmentMap;

	struct Im3dSkyDomeVertex;

	struct Im3dSkyDome;

	struct Im3dSkidsRenderer;

	struct WorldTexturedVertex;

	struct Im3dTexPlusLighting;

	struct Im3dSmokeRenderer;

	struct SkidVertex;

	struct LionBlendVertex;

	struct LionBlendRenderer;

	struct Im3dBlend;

	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

	}

}

