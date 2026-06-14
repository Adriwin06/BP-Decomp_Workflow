// EffectsModule.cpp:66
struct CB4SparkSpawnParams {
	// EffectsModule.cpp:69
	float32_t mrInputVelocityMin;

	// EffectsModule.cpp:70
	float32_t mrInputVelocityMax;

	// EffectsModule.cpp:71
	float32_t mrSpawnCountPerSecMin;

	// EffectsModule.cpp:72
	float32_t mrSpawnCountPerSecMax;

public:
	// EffectsModule.cpp:77
	float32_t VelocityToSpawnCount(float32_t, float32_t) const;

}

// EffectsModule.cpp:119
struct SparkShowerArgs {
	// EffectsModule.cpp:125
	Vector4 mLateralAngleMinMaxForwardAngleMinMax;

	// EffectsModule.cpp:129
	Vector4 mSpawnVelocityMinMaxInheritedVelocityMinMax;

	// EffectsModule.cpp:133
	Vector4 mSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ;

}

// EffectsModule.cpp:137
struct SparkShowerController {
	// EffectsModule.cpp:194
	SparkShowerArgs mSmallArgs;

	// EffectsModule.cpp:195
	SparkShowerArgs mLargeArgs;

	// EffectsModule.cpp:200
	float32_t mfReflectionAmount;

	// EffectsModule.cpp:204
	float32_t mfVelocityScaleSpeedThreshold;

	// EffectsModule.cpp:206
	BrnParticle::Native::ESparkArrayID meSparkArrayId;

public:
	// EffectsModule.cpp:143
	Vector4 GetLateralAngleMinMaxForwardAngleMinMax(VecFloat) const;

	// EffectsModule.cpp:154
	Vector4 GetSpawnVelocityMinMaxInheritedVelocityMinMax(VecFloat) const;

	// EffectsModule.cpp:165
	Vector4 GetSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ(VecFloat) const;

	// EffectsModule.cpp:174
	float32_t GetReflectionAmount() const;

	// EffectsModule.cpp:180
	float32_t GetVelocitySpeedScaleThreshold() const;

	// EffectsModule.cpp:186
	BrnParticle::Native::ESparkArrayID GetSparkArrayId() const;

}

// EffectsModule.cpp:581
struct KeyToEnum {
	// EffectsModule.cpp:583
	SimpleParticleBatch::ENativeParticleType mID;

	// EffectsModule.cpp:584
	const char * mKey;

}

// _built-in_
namespace :: {
	// EffectsModule.cpp:58
	extern bool gbHasRestarted;

	// EffectsModule.cpp:93
	const float32_t krSparkVelocityMaxRandomness;

	// EffectsModule.cpp:94
	const float32_t krSparksCrashBankSpawnMultiplier;

	// EffectsModule.cpp:95
	const float32_t kfNumParticlePerSecond;

	// EffectsModule.cpp:97
	const rw::math::vpu::Vector3 kvPositionOffset;

	// EffectsModule.cpp:99
	const float32_t krSparksRaceCarVehicleMinPointVelocity;

	// EffectsModule.cpp:100
	const float32_t krSparksRaceCarVehicleMaxPointVelocity;

	// EffectsModule.cpp:101
	const float32_t krSparksRaceCarVehicleMinPointVelocitySpawnCountPerSec;

	// EffectsModule.cpp:102
	const float32_t krSparksRaceCarVehicleMaxPointVelocitySpawnCountPerSec;

	// EffectsModule.cpp:104
	const CB4SparkSpawnParams _gSparkSpawnParamsRaceCarVehicle;

	// EffectsModule.cpp:112
	const float32_t kfDetachedPartStressSparkStartThreshold;

	// EffectsModule.cpp:113
	const float32_t kfHingedPartStressSparkStartThreshold;

	// EffectsModule.cpp:115
	const float32_t kfImpactSmokeVelocityThreshold;

	// EffectsModule.cpp:209
	const SparkShowerController gSparkShowerControllerShowtimeBounce;

	// EffectsModule.cpp:229
	const SparkShowerController gSparkShowerControllerWorldGrinding;

	// EffectsModule.cpp:249
	const SparkShowerController gSparkShowerControllerVehicleGrinding;

	// EffectsModule.cpp:269
	const SparkShowerController gSparkShowerControllerCrashing;

	// EffectsModule.cpp:289
	const SparkShowerController gSparkShowerControllerJumpSparks;

	// EffectsModule.cpp:308
	const VecFloat K_VECFLOAT_TWOPI;

	// EffectsModule.cpp:309
	const VecFloat K_VECFLOAT_DEGREES_TO_RADIANS;

	// EffectsModule.cpp:310
	const VecFloat K_VECFLOAT_EPSILON;

	// EffectsModule.cpp:311
	const rw::math::vpu::Vector3 K_VECTOR3_1_0_1;

	// EffectsModule.cpp:315
	extern EffectsModule * mpInstance;

}

