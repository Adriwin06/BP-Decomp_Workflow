// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// BrnEffectsUtils.h:39
	namespace Utils {
		struct ScalarRandomiser;

		struct Vector3Randomiser;

		struct Vector4Randomiser;

		struct DebrisColourRandomiser;

		struct BuildUVData;

		// BrnEffectsUtils.h:326
		extern RGBA ConvertVector4ToRwRgbaOverbright(VectorIntrinsicInParam);

		// BrnEffectsUtils.h:453
		extern void BuildUVs(const BuildUVData &, VecFloat, VecFloat, Vector4 *);

		// BrnEffectsUtils.h:428
		extern void BuildMultiFrameUV(const BuildUVData &, VecFloat, VecFloat &, VecFloat &, VecFloat &, VecFloat &);

		// BrnEffectsUtils.h:259
		extern Matrix33 FastMatrix33FromEulerXYZ(Vector3);

		// BrnEffectsUtils.h:299
		extern Matrix33 FastMatrix33FromAxisAngle(Vector3, VecFloat, VecFloat);

		// BrnEffectsUtils.h:52
		const uint32_t KU_LION_PRIMARY_RENDERING_WORLD;

		// BrnEffectsUtils.h:53
		const uint32_t KU_LION_NON_RENDERING_WORLD = 1;

	}

}

// BrnEffectsUtils.h:62
struct BrnEffects::Utils::ScalarRandomiser {
private:
	// BrnEffectsUtils.h:88
	float32_t lrValA;

	// BrnEffectsUtils.h:89
	float32_t lrValB;

public:
	// BrnEffectsUtils.h:69
	void Prepare(float32_t, float32_t);

	// BrnEffectsUtils.h:78
	float32_t RandomInterpolate(Random &);

}

// BrnEffectsUtils.h:93
struct BrnEffects::Utils::Vector3Randomiser {
private:
	// BrnEffectsUtils.h:130
	Vector3 mVecA;

	// BrnEffectsUtils.h:131
	Vector3 mVecB;

public:
	// BrnEffectsUtils.h:100
	void Prepare(Vector3, Vector3);

	// BrnEffectsUtils.h:109
	Vector3 RandomInterpolate(Random &);

	// BrnEffectsUtils.h:121
	Vector3 RandomiseXYZ(Random &);

}

// BrnEffectsUtils.h:135
struct BrnEffects::Utils::Vector4Randomiser {
private:
	// BrnEffectsUtils.h:172
	Vector4 mVecA;

	// BrnEffectsUtils.h:173
	Vector4 mVecB;

public:
	// BrnEffectsUtils.h:142
	void Prepare(Vector4, Vector4);

	// BrnEffectsUtils.h:151
	Vector4 RandomInterpolate(Random &);

	// BrnEffectsUtils.h:163
	Vector4 RandomiseXYZW(Random &);

}

// BrnEffectsUtils.h:177
struct BrnEffects::Utils::DebrisColourRandomiser {
private:
	// BrnEffectsUtils.h:215
	extern const rw::math::vpu::Vector4 K_VECTOR4_ONETHIRD_ONETHIRD_ONETHIRD_ZERO;

	// BrnEffectsUtils.h:216
	extern const VecFloat K_VECFLOAT_MINSATURATION;

	// BrnEffectsUtils.h:217
	extern const VecFloat K_VECFLOAT_MAXSATURATION;

	// BrnEffectsUtils.h:218
	extern const VecFloat K_VECFLOAT_MINBRIGHTNESS;

	// BrnEffectsUtils.h:219
	extern const VecFloat K_VECFLOAT_MAXBRIGHTNESS;

	// BrnEffectsUtils.h:221
	Vector4 mMinSaturationBrightness;

	// BrnEffectsUtils.h:222
	Vector4 mDiffSaturationBrightness;

public:
	// BrnEffectsUtils.h:183
	void Prepare(Vector4);

	// BrnEffectsUtils.h:200
	Vector4 Randomise(Random &);

}

// BrnEffectsUtils.h:395
struct BrnEffects::Utils::BuildUVData {
	// BrnEffectsUtils.h:412
	VecFloat mvfMaterialFrameCount;

	// BrnEffectsUtils.h:413
	VecFloat mvfMaterialNumXFrames;

	// BrnEffectsUtils.h:414
	VecFloat mvfMaterialOneOverNumXFrames;

	// BrnEffectsUtils.h:415
	VecFloat mvfMaterialOneOverNumYFrames;

	// BrnEffectsUtils.h:416
	U32 muMaterialFlags;

	// BrnEffectsUtils.h:417
	U8 muMaterialUCoordOption;

	// BrnEffectsUtils.h:418
	U8 muMaterialVCoordOption;

public:
	// BrnEffectsUtils.h:398
	void SetupFromMaterial(const cParticleMaterial &);

}

// Curves.h:24
namespace BrnEffects {
	// BrnEffectsUtils.h:39
	namespace Utils {
		// BrnEffectsUtils.h:43
		extern const VecFloat K_VECFLOAT_255;

		// BrnEffectsUtils.h:44
		extern const rw::math::vpu::Vector4 K_VECTOR4_511_511_511_255;

		// BrnEffectsUtils.h:45
		extern const VecFloat K_VECFLOAT_ONEOVER255;

		// BrnEffectsUtils.h:48
		extern const rw::math::vpu::Vector4 K_VECTOR4_0101;

		// BrnEffectsUtils.h:49
		extern const rw::math::vpu::Vector4 K_VECTOR4_1010;

		// BrnEffectsUtils.h:52
		const uint32_t KU_LION_PRIMARY_RENDERING_WORLD;

		// BrnEffectsUtils.h:53
		const uint32_t KU_LION_NON_RENDERING_WORLD = 1;

	}

}

// BrnEffectsUtils.h:43
extern const VecFloat K_VECFLOAT_255;

// BrnEffectsUtils.h:44
extern const rw::math::vpu::Vector4 K_VECTOR4_511_511_511_255;

// BrnEffectsUtils.h:45
extern const VecFloat K_VECFLOAT_ONEOVER255;

// BrnEffectsUtils.h:48
extern const rw::math::vpu::Vector4 K_VECTOR4_0101;

// BrnEffectsUtils.h:49
extern const rw::math::vpu::Vector4 K_VECTOR4_1010;

// BrnEffectsUtils.h:215
extern const rw::math::vpu::Vector4 K_VECTOR4_ONETHIRD_ONETHIRD_ONETHIRD_ZERO;

// BrnEffectsUtils.h:216
extern const VecFloat K_VECFLOAT_MINSATURATION;

// BrnEffectsUtils.h:217
extern const VecFloat K_VECFLOAT_MAXSATURATION;

// BrnEffectsUtils.h:218
extern const VecFloat K_VECFLOAT_MINBRIGHTNESS;

// BrnEffectsUtils.h:219
extern const VecFloat K_VECFLOAT_MAXBRIGHTNESS;

// BrnEffectsData.h:75
namespace BrnEffects {
	// BrnEffectsUtils.h:39
	namespace Utils {
		// BrnEffectsUtils.h:52
		const uint32_t KU_LION_PRIMARY_RENDERING_WORLD;

		// BrnEffectsUtils.h:53
		const uint32_t KU_LION_NON_RENDERING_WORLD = 1;

	}

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// BrnEffectsUtils.h:39
	namespace Utils {
		// BrnEffectsUtils.h:43
		extern const VecFloat K_VECFLOAT_255;

		// BrnEffectsUtils.h:44
		extern const rw::math::vpu::Vector4 K_VECTOR4_511_511_511_255;

		// BrnEffectsUtils.h:45
		extern const VecFloat K_VECFLOAT_ONEOVER255;

		// BrnEffectsUtils.h:48
		extern const rw::math::vpu::Vector4 K_VECTOR4_0101;

		// BrnEffectsUtils.h:49
		extern const rw::math::vpu::Vector4 K_VECTOR4_1010;

		// BrnEffectsUtils.h:52
		const uint32_t KU_LION_PRIMARY_RENDERING_WORLD;

		// BrnEffectsUtils.h:53
		const uint32_t KU_LION_NON_RENDERING_WORLD = 1;

	}

}

// BrnEffectsUtils.h:36
namespace BrnEffects {
	// BrnEffectsUtils.h:39
	namespace Utils {
		// BrnEffectsUtils.h:372
		extern VectorIntrinsicUnion::VectorIntrinsic ConvertLionColourToVector(cColour8);

		// BrnEffectsUtils.h:349
		extern cColour8 ConvertVectorToLionColour(VectorIntrinsicInParam);

		// BrnEffectsUtils.h:43
		extern const VecFloat K_VECFLOAT_255;

		// BrnEffectsUtils.h:44
		extern const rw::math::vpu::Vector4 K_VECTOR4_511_511_511_255;

		// BrnEffectsUtils.h:45
		extern const VecFloat K_VECFLOAT_ONEOVER255;

		// BrnEffectsUtils.h:46
		extern const rw::math::vpu::Vector3 K_VECTOR3_MINUS_ONE;

		// BrnEffectsUtils.h:47
		extern const rw::math::vpu::Vector3 K_VECTOR3_TWO;

		// BrnEffectsUtils.h:48
		extern const rw::math::vpu::Vector4 K_VECTOR4_0101;

		// BrnEffectsUtils.h:49
		extern const rw::math::vpu::Vector4 K_VECTOR4_1010;

		// BrnEffectsUtils.h:52
		const uint32_t KU_LION_PRIMARY_RENDERING_WORLD;

		// BrnEffectsUtils.h:53
		const uint32_t KU_LION_NON_RENDERING_WORLD = 1;

	}

}

// BrnEffectsUtils.h:46
extern const rw::math::vpu::Vector3 K_VECTOR3_MINUS_ONE;

// BrnEffectsUtils.h:47
extern const rw::math::vpu::Vector3 K_VECTOR3_TWO;

