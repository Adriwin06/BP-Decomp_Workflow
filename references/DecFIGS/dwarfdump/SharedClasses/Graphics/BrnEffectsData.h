// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
		}

	}

}

// BrnEffectsData.h:49
enum ENamedFieldType {
	E_NAMEDFIELDTYPE_FLOAT = 0,
	E_NAMEDFIELDTYPE_VECTOR2 = 1,
	E_NAMEDFIELDTYPE_VECTOR2_X = 2,
	E_NAMEDFIELDTYPE_VECTOR2_Y = 3,
	E_NAMEDFIELDTYPE_VECTOR3 = 4,
	E_NAMEDFIELDTYPE_VECTOR3_SCL = 5,
	E_NAMEDFIELDTYPE_VECTOR3_X = 6,
	E_NAMEDFIELDTYPE_VECTOR3_Y = 7,
	E_NAMEDFIELDTYPE_VECTOR3_Z = 8,
	E_NAMEDFIELDTYPE_COLOUR = 9,
}

// BrnEffectsData.h:66
struct NamedField {
	// BrnEffectsData.h:68
	char[256] macName;

	// BrnEffectsData.h:69
	ENamedFieldType meType;

	// BrnEffectsData.h:70
	size_t muOffset;

}

// BrnEffectsData.h:75
namespace BrnEffects {
}

// BrnEffectsData.h:86
extern const float32_t kfDefLuminance;

// BrnEffectsData.h:87
extern const float32_t kfDefThreshold;

// BrnEffectsData.h:88
extern const rw::math::vpu::Vector4 kv4DefScale;

// BrnEffectsData.h:96
extern const NamedField[3] kaNamedFields;

// BrnEffectsData.h:128
extern const float32_t kfDefAngle;

// BrnEffectsData.h:129
extern const float32_t kfDefSharpness;

// BrnEffectsData.h:130
extern const rw::math::vpu::Vector2 kv2DefAmount;

// BrnEffectsData.h:131
extern const rw::math::vpu::Vector2 kv2DefCentre;

// BrnEffectsData.h:132
extern const rw::math::vpu::Vector4 kv4DefInnerColour;

// BrnEffectsData.h:133
extern const rw::math::vpu::Vector4 kv4DefOuterColour;

// BrnEffectsData.h:144
extern const NamedField[8] kaNamedFields;

// BrnEffectsData.h:176
extern const float32_t kfDefNearPlane;

// BrnEffectsData.h:177
extern const float32_t kfDefFocalPlane;

// BrnEffectsData.h:178
extern const float32_t kfDefFocalPlane2;

// BrnEffectsData.h:179
extern const float32_t kfDefFarPlane;

// BrnEffectsData.h:225
extern const float32_t kfDefOpacity;

// BrnEffectsData.h:226
extern const float32_t kfDefVelocity;

// BrnEffectsData.h:227
extern const float32_t kfDefSharpness;

// BrnEffectsData.h:228
extern const float32_t kfDefNoise;

// BrnEffectsData.h:229
extern const float32_t kfDefAngle;

// BrnEffectsData.h:230
extern const rw::math::vpu::Vector2 kv2DefBlendAmount;

// BrnEffectsData.h:231
extern const rw::math::vpu::Vector2 kv2DefBlurAmount;

// BrnEffectsData.h:232
extern const rw::math::vpu::Vector2 kv2DefBlendCentre;

// BrnEffectsData.h:233
extern const rw::math::vpu::Vector2 kv2DefBlurCentre;

// BrnEffectsData.h:294
extern const rw::math::vpu::Vector4 kv4DefaultColour;

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			struct ColourCube;

			struct RenderTargetDebugger;

			struct Tint;

		}

	}

}

// BrnEffectsData.h:84
struct BrnEffects::BloomData {
	// BrnEffectsData.h:86
	extern const float32_t kfDefLuminance;

	// BrnEffectsData.h:87
	extern const float32_t kfDefThreshold;

	// BrnEffectsData.h:88
	extern const rw::math::vpu::Vector4 kv4DefScale;

	// BrnEffectsData.h:90
	float32_t mfLuminance;

	// BrnEffectsData.h:91
	float32_t mfThreshold;

	// BrnEffectsData.h:92
	Vector4 mv4Scale;

	// BrnEffectsData.h:96
	extern const NamedField[3] kaNamedFields;

public:
	// BrnEffectsData.h:99
	void Construct();

	// BrnEffectsData.h:103
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:108
	void EndianSwap(BloomData &);

	// BrnEffectsData.h:113
	void SetToBlend(const BloomData &, float32_t, const BloomData &, float32_t);

	// BrnEffectsData.h:120
	void SetToBlend(const BloomData &, float32_t, const BloomData &, float32_t, const BloomData &, float32_t, const BloomData &, float32_t);

}

// BrnEffectsData.h:126
struct BrnEffects::VignetteData {
	// BrnEffectsData.h:128
	extern const float32_t kfDefAngle;

	// BrnEffectsData.h:129
	extern const float32_t kfDefSharpness;

	// BrnEffectsData.h:130
	extern const rw::math::vpu::Vector2 kv2DefAmount;

	// BrnEffectsData.h:131
	extern const rw::math::vpu::Vector2 kv2DefCentre;

	// BrnEffectsData.h:132
	extern const rw::math::vpu::Vector4 kv4DefInnerColour;

	// BrnEffectsData.h:133
	extern const rw::math::vpu::Vector4 kv4DefOuterColour;

	// BrnEffectsData.h:135
	float32_t mfAngle;

	// BrnEffectsData.h:136
	float32_t mfSharpness;

	// BrnEffectsData.h:137
	Vector2 mv2Amount;

	// BrnEffectsData.h:138
	Vector2 mv2Centre;

	// BrnEffectsData.h:139
	Vector4 mv4InnerColour;

	// BrnEffectsData.h:140
	Vector4 mv4OuterColour;

	// BrnEffectsData.h:144
	extern const NamedField[8] kaNamedFields;

public:
	// BrnEffectsData.h:147
	void Construct();

	// BrnEffectsData.h:151
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:156
	void EndianSwap(VignetteData &);

	// BrnEffectsData.h:161
	void SetToBlend(const VignetteData &, float32_t, const VignetteData &, float32_t);

	// BrnEffectsData.h:168
	void SetToBlend(const VignetteData &, float32_t, const VignetteData &, float32_t, const VignetteData &, float32_t, const VignetteData &, float32_t);

}

// BrnEffectsData.h:174
struct BrnEffects::DepthOfFieldData {
	// BrnEffectsData.h:176
	extern const float32_t kfDefNearPlane;

	// BrnEffectsData.h:177
	extern const float32_t kfDefFocalPlane;

	// BrnEffectsData.h:178
	extern const float32_t kfDefFocalPlane2;

	// BrnEffectsData.h:179
	extern const float32_t kfDefFarPlane;

	// BrnEffectsData.h:181
	float32_t mfNearPlane;

	// BrnEffectsData.h:182
	float32_t mfFocalPlane;

	// BrnEffectsData.h:183
	float32_t mfFocalPlane2;

	// BrnEffectsData.h:184
	float32_t mfFarPlane;

	// BrnEffectsData.h:185
	float32_t mfDofAmount;

public:
	// BrnEffectsData.h:188
	void Construct();

	// BrnEffectsData.h:196
	void Construct(float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnEffectsData.h:200
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:205
	void EndianSwap(DepthOfFieldData &);

	// BrnEffectsData.h:210
	void SetToBlend(const DepthOfFieldData &, float32_t, const DepthOfFieldData &, float32_t);

	// BrnEffectsData.h:217
	void SetToBlend(const DepthOfFieldData &, float32_t, const DepthOfFieldData &, float32_t, const DepthOfFieldData &, float32_t, const DepthOfFieldData &, float32_t);

}

// BrnEffectsData.h:223
struct BrnEffects::BlurData {
	// BrnEffectsData.h:225
	extern const float32_t kfDefOpacity;

	// BrnEffectsData.h:226
	extern const float32_t kfDefVelocity;

	// BrnEffectsData.h:227
	extern const float32_t kfDefSharpness;

	// BrnEffectsData.h:228
	extern const float32_t kfDefNoise;

	// BrnEffectsData.h:229
	extern const float32_t kfDefAngle;

	// BrnEffectsData.h:230
	extern const rw::math::vpu::Vector2 kv2DefBlendAmount;

	// BrnEffectsData.h:231
	extern const rw::math::vpu::Vector2 kv2DefBlurAmount;

	// BrnEffectsData.h:232
	extern const rw::math::vpu::Vector2 kv2DefBlendCentre;

	// BrnEffectsData.h:233
	extern const rw::math::vpu::Vector2 kv2DefBlurCentre;

	// BrnEffectsData.h:235
	float32_t mfOpacity;

	// BrnEffectsData.h:236
	float32_t mfVelocity;

	// BrnEffectsData.h:237
	float32_t mfSharpness;

	// BrnEffectsData.h:238
	float32_t mfNoise;

	// BrnEffectsData.h:239
	float32_t mfAngle;

	// BrnEffectsData.h:240
	Vector2 mv2BlendAmount;

	// BrnEffectsData.h:241
	Vector2 mv2BlurAmount;

	// BrnEffectsData.h:242
	Vector2 mv2BlendCentre;

	// BrnEffectsData.h:243
	Vector2 mv2BlurCentre;

public:
	// BrnEffectsData.h:246
	void Construct();

	// BrnEffectsData.h:250
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:255
	void EndianSwap(BlurData &);

	// BrnEffectsData.h:260
	void SetToBlend(const BlurData &, float32_t, const BlurData &, float32_t);

	// BrnEffectsData.h:267
	void SetToBlend(const BlurData &, float32_t, const BlurData &, float32_t, const BlurData &, float32_t, const BlurData &, float32_t);

}

// BrnEffectsData.h:273
struct BrnEffects::TintData {
	// BrnEffectsData.h:275
	rw::graphics::postfx::ColourCube * mpColourCube;

public:
	// BrnEffectsData.h:278
	void Construct();

	// BrnEffectsData.h:282
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:287
	void EndianSwap(TintData &);

}

// BrnEffectsData.h:293
struct BrnEffects::TintData2d {
	// BrnEffectsData.h:294
	extern const rw::math::vpu::Vector4 kv4DefaultColour;

	// BrnEffectsData.h:295
	Vector4 mv4Colour;

public:
	// BrnEffectsData.h:300
	void Construct();

	// BrnEffectsData.h:304
	void Construct(const Attribute::Key &);

	// BrnEffectsData.h:309
	void EndianSwap(TintData2d &);

	// BrnEffectsData.h:314
	void SetToBlend(const TintData2d &, float32_t, const TintData2d &, float32_t);

	// BrnEffectsData.h:321
	void SetToBlend(const TintData2d &, float32_t, const TintData2d &, float32_t, const TintData2d &, float32_t, const TintData2d &, float32_t);

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			struct RenderTargetDebugger;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			struct ColourCube;

			struct RenderTargetDebugger;

		}

	}

}

// BrnEffectsData.h:75
namespace BrnEffects {
	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

	struct EffectsEnvironmentInterface;

	struct BrnCrashTriangleCache;

	struct BrnCrashLineTriangleCacheFormat;

	struct BrnCrashTrianglePackedFormat;

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			struct RenderTargetDebugger;

			struct TintBlendParameters;

		}

	}

}

// BrnEffectsData.h:75
namespace BrnEffects {
	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	struct EffectsEnvironmentInterface;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

	struct EffectsEnvironmentInterface;

	struct PropToVFXMaterialMapping;

	struct PropCollisions;

	struct BrnCrashTriangleCache;

	struct BrnCrashLineTriangleCacheFormat;

	struct BrnCrashTrianglePackedFormat;

	struct EffectsDebugJumping;

	struct EffectsDebugProps;

	struct ParticleEffectHelper;

	struct RaceCarParticleEffectHelper;

	struct ActiveRaceCarData;

	// Declaration
	struct EffectsDebugComponent {
	public:
		EffectsDebugComponent();

	}

	struct WheelStateMachine;

	struct CarState;

	struct BurstAccumulator;

	// Declaration
	struct JumpStateMachine {
	public:
		JumpStateMachine();

	}

	struct BrnGlassSmashEffect;

	struct BrnEffectsGlassManager;

	struct EffectsModuleParams;

	// Declaration
	struct EffectsStateMachine {
	public:
		EffectsStateMachine();

	}

}

