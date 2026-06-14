// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:114
	enum EErrorOrigin {
		E_ERROR_ORIGIN_SCENE_MANAGER = 0,
		E_ERROR_ORIGIN_FINE_TEST_MODULE = 1,
		E_ERROR_ORIGIN_SCENE_GRAPH_MODULE = 2,
		E_ERROR_ORIGIN_COUNT = 3,
	}

	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsSceneManagerTypes.h:67
struct CgsSceneManager::LineTestIntersection {
	// CgsSceneManagerTypes.h:69
	Vector3 mPosition;

	// CgsSceneManagerTypes.h:70
	Vector3 mNormal;

	// CgsSceneManagerTypes.h:71
	VolumeInstanceId mVolumeInstanceId;

	// CgsSceneManagerTypes.h:72
	EntityId mEntityId;

	// CgsSceneManagerTypes.h:73
	float32_t mfLineParam;

	// CgsSceneManagerTypes.h:74
	uint16_t mu16MaterialTag;

	// CgsSceneManagerTypes.h:75
	uint16_t mu16GroupTag;

}

// CgsSceneManagerTypes.h:125
struct CgsSceneManager::ErrorEvent : public Event {
	// CgsSceneManagerTypes.h:127
	char[128] macMessage;

	// CgsSceneManagerTypes.h:128
	int32_t miUserData;

	// CgsSceneManagerTypes.h:129
	CgsSceneManager::EErrorOrigin meOrigin;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:114
	enum EErrorOrigin {
		E_ERROR_ORIGIN_SCENE_MANAGER = 0,
		E_ERROR_ORIGIN_FINE_TEST_MODULE = 1,
		E_ERROR_ORIGIN_SCENE_GRAPH_MODULE = 2,
		E_ERROR_ORIGIN_COUNT = 3,
	}

	// CgsSceneManagerTypes.h:177
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, const LineTestIntersection &);

	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:114
	enum EErrorOrigin {
		E_ERROR_ORIGIN_SCENE_MANAGER = 0,
		E_ERROR_ORIGIN_FINE_TEST_MODULE = 1,
		E_ERROR_ORIGIN_SCENE_GRAPH_MODULE = 2,
		E_ERROR_ORIGIN_COUNT = 3,
	}

	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerTypes.h:114
	enum EErrorOrigin {
		E_ERROR_ORIGIN_SCENE_MANAGER = 0,
		E_ERROR_ORIGIN_FINE_TEST_MODULE = 1,
		E_ERROR_ORIGIN_SCENE_GRAPH_MODULE = 2,
		E_ERROR_ORIGIN_COUNT = 3,
	}

	// Declaration
	struct SpatialPartition {
		// CgsSpatialPartition.h:131
		struct LineTestRecursiveFuncParams {
			// CgsSpatialPartition.h:133
			Vector3 mLineStart;

			// CgsSpatialPartition.h:134
			Vector3 mLineEnd;

			// CgsSpatialPartition.h:135
			Vector3 mLineDirection;

			// CgsSpatialPartition.h:136
			Vector3 mLineReciprocal;

			// CgsSpatialPartition.h:137
			VecFloat mfLineLength;

			// CgsSpatialPartition.h:138
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSceneManagerTypes.h:63
			typedef CgsSceneManager::CoarseQueryResultBuffer<16384> CoarseQueryResultBufferDefault;

			// CgsSpatialPartition.h:139
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

		}

		// CgsSpatialPartition.h:143
		struct SphereTestRecursiveFuncParams {
			// CgsSpatialPartition.h:145
			Vector3 mPosition;

			// CgsSpatialPartition.h:146
			VecFloat mfRadius;

			// CgsSpatialPartition.h:147
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:148
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

		}

		// CgsSpatialPartition.h:152
		struct FrustumTestRecursiveFuncParams {
			// CgsSpatialPartition.h:154
			Frustum mFrustum;

			// CgsSpatialPartition.h:155
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:156
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:157
			uint32_t muDebugInfo;

		}

		// CgsSpatialPartition.h:161
		struct FrustumTestVpRecursiveFuncParams {
			// CgsSpatialPartition.h:163
			Matrix44 mViewProjection;

			// CgsSpatialPartition.h:164
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:165
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:166
			Frustum mFrustum;

			// CgsSpatialPartition.h:167
			uint32_t muDebugInfo;

		}

		// CgsSpatialPartition.h:171
		struct VolumeTestRecursiveFuncParams {
			// CgsSpatialPartition.h:173
			const VolRef::Volume * mpVolume;

			// CgsSpatialPartition.h:174
			InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

			// CgsSpatialPartition.h:175
			CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * mpResultBufferOut;

			// CgsSpatialPartition.h:176
			const rw::math::vpu::Matrix44Affine * mpTransform;

		}

	}

	// CgsSceneManagerTypes.h:62
	const int32_t KI_COARSEQUERYBUFFERDEFAULTSIZE = 16384;

}

// CgsSceneManagerTypes.h:85
struct CgsSceneManager::OverlappingPair : public Event {
	// CgsSceneManagerTypes.h:87
	uint32_t muVolumeInstanceA;

	// CgsSceneManagerTypes.h:88
	uint32_t muVolumeInstanceB;

	// CgsSceneManagerTypes.h:89
	float_t mfPadding;

	// CgsSceneManagerTypes.h:90
	bool mbCull;

}

// CgsSceneManagerTypes.h:95
struct CgsSceneManager::Contact : public Event {
	// CgsSceneManagerTypes.h:104
	Vector3 mPointOnA;

	// CgsSceneManagerTypes.h:105
	Vector3 mPointOnB;

	// CgsSceneManagerTypes.h:106
	Vector3 mNormal;

	// CgsSceneManagerTypes.h:107
	uint32_t muVolumeInstanceA;

	// CgsSceneManagerTypes.h:108
	uint32_t muVolumeInstanceB;

	// CgsSceneManagerTypes.h:109
	uint32_t muPolyTagA;

	// CgsSceneManagerTypes.h:110
	uint32_t muPolyTagB;

public:
	// CgsSceneManagerTypes.h:102
	void Construct(PrimitivePairIntersectResult *, uint32_t);

}

