// CgsRandom.h:30
namespace CgsNumeric {
	struct Random;

	struct BitOperations;

	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

// CgsRandom.h:49
struct CgsNumeric::Random {
private:
	// CgsRandom.h:163
	extern const uint32_t KU_FLOAT_BUFFER_SIZE = 8;

	// CgsRandom.h:179
	union {
		// CgsRandom.h:180
		float32_t[8] mafFloatBuffer;

		// CgsRandom.h:181
		uint32_t[8] mauIntegerBuffer;

		// CgsRandom.h:182
		VectorIntrinsicUnion::VectorIntrinsic[2] mvVector;

	}

	// CgsRandom.h:185
	uint64_t muSeed;

	// CgsRandom.h:186
	uint32_t muOldestBufferIndex;

public:
	// CgsRandom.h:53
	void Construct();

	// CgsRandom.h:58
	void SetSeed(uint64_t);

	// CgsRandom.h:65
	uint32_t RandomUInt();

	// CgsRandom.h:71
	uint32_t RandomUInt(uint32_t, uint32_t);

	// CgsRandom.h:77
	int32_t RandomInt(int32_t, int32_t);

	// CgsRandom.h:80
	bool RandomBool();

	// CgsRandom.h:90
	float_t RandomFloat();

	// CgsRandom.h:94
	VecFloat RandomVecFloat();

	// CgsRandom.h:98
	Vector3 RandomVector3();

	// CgsRandom.h:102
	Vector4 RandomVector4();

	// CgsRandom.h:112
	float_t RandomSignedFloat();

	// CgsRandom.h:116
	VecFloat RandomSignedVecFloat();

	// CgsRandom.h:120
	Vector3 RandomSignedVector3();

	// CgsRandom.h:124
	Vector4 RandomSignedVector4();

	// CgsRandom.h:128
	Vector3 RandomUnitVector();

	// CgsRandom.h:138
	float_t RandomFloat(float_t, float_t);

	// CgsRandom.h:143
	Vector2 RandomVector(Vector2, Vector2);

	// CgsRandom.h:148
	Vector3 RandomVector(Vector3, Vector3);

	// CgsRandom.h:153
	Vector4 RandomVector(Vector4, Vector4);

private:
	// CgsRandom.h:158
	uint32_t ConvertUnsignedFixed32ToFloatRepresentation(uint32_t);

	// CgsRandom.h:161
	void AddRandomFloatToBuffer();

}

// CgsRandom.h:163
extern const uint32_t KU_FLOAT_BUFFER_SIZE = 8;

// CgsTrig.h:28
namespace CgsNumeric {
	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

// CgsReciprocal.h:32
namespace CgsNumeric {
	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

// CgsRandom.h:30
namespace CgsNumeric {
	struct Random;

	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

// CgsRandom.h:30
namespace CgsNumeric {
	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

// CgsBranchlessOperations.h:32
namespace CgsNumeric {
	// CgsRandom.h:34
	const uint32_t KU_RANDOM_DEFAULT_SEED = 2413850050;

}

