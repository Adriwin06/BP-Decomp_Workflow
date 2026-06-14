// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct SparkBatchSpawnEvent {
		// BrnParticleModuleIO_EventTypes.h:52
		struct SparkSpawnData {
			// BrnParticleModuleIO_EventTypes.h:53
			Vector3 mvPosition;

			// BrnParticleModuleIO_EventTypes.h:54
			Vector3 mvVelocity;

			// BrnParticleModuleIO_EventTypes.h:55
			float32_t mfSize;

			// BrnParticleModuleIO_EventTypes.h:56
			float32_t mfSpawnTime;

			// BrnParticleModuleIO_EventTypes.h:57
			float32_t mfHeightAboveGround;

			// BrnParticleModuleIO_EventTypes.h:58
			BrnParticle::Native::ESparkArrayID meType;

			// BrnParticleModuleIO_EventTypes.h:59
			bool mbUseCrashBank;

		}

	}

	// Declaration
	struct DebrisBatchSpawnEvent {
		// BrnParticleModuleIO_EventTypes.h:122
		struct DebrisSpawnData {
			// BrnParticleModuleIO_EventTypes.h:123
			Vector3Plus mvPositionPlusSize;

			// BrnParticleModuleIO_EventTypes.h:124
			Vector3Plus mvVelocityPlusSpawnTime;

			// BrnParticleModuleIO_EventTypes.h:125
			Vector3Plus mvRotationAxisPlusRotationAmount;

			// BrnParticleModuleIO_EventTypes.h:126
			Vector4 mvColour;

			// BrnParticleModuleIO_EventTypes.h:127
			BrnParticle::Native::EDebrisArrayID meType;

		}

	}

}

// BrnParticleModuleIO_EventTypes.h:48
struct BrnParticle::SparkBatchSpawnEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:64
	uint16_t mu16SparkCount;

}

// BrnParticleModuleIO_EventTypes.h:68
struct BrnParticle::SpawnSparksFromPointEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:71
	Vector3 mvWorldSpacePoint;

	// BrnParticleModuleIO_EventTypes.h:72
	Vector3 mvVelocity;

	// BrnParticleModuleIO_EventTypes.h:73
	Vector3 mvNormal;

	// BrnParticleModuleIO_EventTypes.h:74
	BrnParticle::Native::ESparkArrayID meSparkType;

	// BrnParticleModuleIO_EventTypes.h:75
	float32_t mfCurrentTime;

	// BrnParticleModuleIO_EventTypes.h:76
	float32_t mfNumSparks;

	// BrnParticleModuleIO_EventTypes.h:77
	float32_t mfHeightAboveGround;

	// BrnParticleModuleIO_EventTypes.h:78
	float32_t mfVelocityInheritMin;

	// BrnParticleModuleIO_EventTypes.h:79
	float32_t mfVelocityInheritMax;

	// BrnParticleModuleIO_EventTypes.h:80
	bool mbIsCrashRelated;

}

// BrnParticleModuleIO_EventTypes.h:84
struct BrnParticle::SpawnSparkShowerFromPointEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:87
	Matrix44Affine mTransform;

	// BrnParticleModuleIO_EventTypes.h:88
	Vector4 mLateralAngleMinMaxForwardAngleMinMax;

	// BrnParticleModuleIO_EventTypes.h:89
	Vector4 mVelocityMinMaxInheritanceMinMax;

	// BrnParticleModuleIO_EventTypes.h:90
	Vector3 mVelocityToInherit;

	// BrnParticleModuleIO_EventTypes.h:91
	Vector4 mSparkSizeMinMaxSpawnRadiusXSpawnRadiusYZ;

	// BrnParticleModuleIO_EventTypes.h:92
	float32_t mfCurrentTime;

	// BrnParticleModuleIO_EventTypes.h:93
	float32_t mfGroundPositionY;

	// BrnParticleModuleIO_EventTypes.h:94
	float32_t mfVelocityScaleSpeedThreshold;

	// BrnParticleModuleIO_EventTypes.h:95
	float32_t mfReflectionAmount;

	// BrnParticleModuleIO_EventTypes.h:96
	uint32_t muNumToSpawn;

	// BrnParticleModuleIO_EventTypes.h:97
	BrnParticle::Native::ESparkArrayID meSparkType;

}

// BrnParticleModuleIO_EventTypes.h:102
struct BrnParticle::SpawnSparksAlongLineEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:105
	Vector3 mvStartPos;

	// BrnParticleModuleIO_EventTypes.h:106
	Vector3 mvEndPos;

	// BrnParticleModuleIO_EventTypes.h:107
	Vector3 mvVelocity;

	// BrnParticleModuleIO_EventTypes.h:108
	float32_t mfCurrentTime;

	// BrnParticleModuleIO_EventTypes.h:109
	float32_t mfNumSparks;

	// BrnParticleModuleIO_EventTypes.h:110
	float32_t mfHeightAboveGroundOfStartPos;

	// BrnParticleModuleIO_EventTypes.h:111
	float32_t mfVelocityInheritanceMin;

	// BrnParticleModuleIO_EventTypes.h:112
	float32_t mfVelocityInheritanceMax;

	// BrnParticleModuleIO_EventTypes.h:113
	BrnParticle::Native::ESparkArrayID meSparkType;

	// BrnParticleModuleIO_EventTypes.h:114
	bool mbIsCrashing;

}

// BrnParticleModuleIO_EventTypes.h:118
struct BrnParticle::DebrisBatchSpawnEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:133
	uint16_t mu16DebrisCount;

}

// BrnParticleModuleIO_EventTypes.h:138
struct BrnParticle::FireDebrisBurstEvent : public Event {
	// BrnParticleModuleIO_EventTypes.h:141
	Vector3 mSpawnPosition;

	// BrnParticleModuleIO_EventTypes.h:142
	Vector3 mvEmitterHalfExtents;

	// BrnParticleModuleIO_EventTypes.h:143
	Vector3 mvVelocityToInherit;

	// BrnParticleModuleIO_EventTypes.h:144
	Vector3 mCameraPosition;

	// BrnParticleModuleIO_EventTypes.h:145
	Vector4 mvCarColour;

	// BrnParticleModuleIO_EventTypes.h:146
	debrisparams mDebrisParams;

	// BrnParticleModuleIO_EventTypes.h:147
	float32_t mfCurrentTime;

	// BrnParticleModuleIO_EventTypes.h:148
	float32_t mfScaleFactor;

}

// BrnParticleModuleIO_EventTypes.h:154
struct BrnParticle::InterThreadEventQueue<16384> : public VariableEventQueue<16384,16> {
}

// _built-in_
namespace :: {
	// BrnParticleModuleIO_EventTypes.h:25
	const int32_t KI_PARTICLE_MODULE_INTERTHREAD_COMMAND_QUEUE_MEMSIZE = 16384;

}

