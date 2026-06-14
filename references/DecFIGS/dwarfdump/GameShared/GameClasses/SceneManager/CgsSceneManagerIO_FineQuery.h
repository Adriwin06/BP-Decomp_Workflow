// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSceneManagerIO_EventTypes.h:31
	namespace SceneManagerIO {
		// CgsSceneManagerIO_FineQuery.h:43
		enum EExclusionMode {
			E_EXCLUDE_ENTITY_ONLY = 0,
			E_EXCLUDE_ALL_CHILD_PARTS = 1,
		}

	}

}

// CgsSceneManagerIO_FineQuery.h:50
struct CgsSceneManager::SceneManagerIO::InEventLineTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:52
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:53
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:55
	SceneQueryId mQueryId;

	// CgsSceneManagerTypes.h:43
	typedef uint32_t EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:56
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:57
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:58
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerTypes.h:44
	typedef uint8_t VolumeTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:59
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:63
struct CgsSceneManager::SceneManagerIO::InEventLineTestNearest : public Event {
	// CgsSceneManagerIO_FineQuery.h:65
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:66
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:68
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:69
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:70
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:71
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:72
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:76
struct CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided : public Event {
	// CgsSceneManagerIO_FineQuery.h:78
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:79
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:81
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:82
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:83
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:84
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:85
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:89
struct CgsSceneManager::SceneManagerIO::InEventSphereTestFast : public Event {
	// CgsSceneManagerIO_FineQuery.h:91
	Vector3Plus mSpherePosPlusRadius;

	// CgsSceneManagerIO_FineQuery.h:93
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:94
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:95
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:96
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:97
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:101
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest : public Event {
	// CgsSceneManagerIO_FineQuery.h:103
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:104
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:105
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:106
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:107
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:108
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:109
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:113
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:115
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:116
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:117
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:118
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:119
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:120
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:121
	InEventLineTestFine::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:125
struct CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTest : public Event {
	// CgsSceneManagerIO_FineQuery.h:127
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:128
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:129
	SceneQueryId mQueryId;

}

// CgsSceneManagerIO_FineQuery.h:133
struct CgsSceneManager::SceneManagerIO::InEventTriangleCollisionLineTestNearest : public Event {
	// CgsSceneManagerIO_FineQuery.h:135
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:136
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:137
	SceneQueryId mQueryId;

}

// CgsSceneManagerIO_FineQuery.h:141
struct CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest : public Event {
	// CgsSceneManagerIO_FineQuery.h:143
	const SphereArg mSphere;

	// CgsSceneManagerIO_FineQuery.h:144
	SceneQueryId mQueryId;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSceneManagerIO_EventTypes.h:31
	namespace SceneManagerIO {
		// CgsSceneManagerIO_FineQuery.h:43
		enum EExclusionMode {
			E_EXCLUDE_ENTITY_ONLY = 0,
			E_EXCLUDE_ALL_CHILD_PARTS = 1,
		}

	}

}

// CgsSceneManagerIO_FineQuery.h:50
struct CgsSceneManager::SceneManagerIO::InEventLineTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:52
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:53
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:55
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:56
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:57
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:58
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:59
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:63
struct CgsSceneManager::SceneManagerIO::InEventLineTestNearest : public Event {
	// CgsSceneManagerIO_FineQuery.h:65
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:66
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:68
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:69
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:70
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:71
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:72
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:76
struct CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided : public Event {
	// CgsSceneManagerIO_FineQuery.h:78
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:79
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:81
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:82
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:83
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:84
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:85
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:89
struct CgsSceneManager::SceneManagerIO::InEventSphereTestFast : public Event {
	// CgsSceneManagerIO_FineQuery.h:91
	Vector3Plus mSpherePosPlusRadius;

	// CgsSceneManagerIO_FineQuery.h:93
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:94
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:95
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:96
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:97
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:101
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest : public Event {
	// CgsSceneManagerIO_FineQuery.h:103
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:104
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:105
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:106
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:107
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:108
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:109
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:113
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:115
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:116
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:117
	InEventAddEntity::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:118
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:119
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:120
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:121
	InEventAddDynamicVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:158
struct CgsSceneManager::SceneManagerIO::InFineQueryQueue<2048> : public VariableEventQueue<2048,16> {
public:
	// CgsSceneManagerIO_FineQuery.h:222
	void LineTestFine(SceneQueryId, unsigned int, unsigned char, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:253
	void LineTestNearest(SceneQueryId, unsigned int, unsigned char, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:284
	void VolumeTestDeepest(SceneQueryId, unsigned int, unsigned char, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:315
	void VolumeTestFine(SceneQueryId, unsigned int, unsigned char, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

}

// CgsSceneManagerIO_FineQuery.h:141
struct CgsSceneManager::SceneManagerIO::InEventTriangleCollisionSphereTest : public Event {
	// CgsSphere.h:65
	typedef const Sphere & SphereArg;

	// CgsSceneManagerIO_FineQuery.h:143
	const InEventTriangleCollisionSphereTest::SphereArg mSphere;

	// CgsSceneManagerIO_FineQuery.h:144
	SceneQueryId mQueryId;

}

// CgsSceneManagerIO_FineQuery.h:158
struct CgsSceneManager::SceneManagerIO::InFineQueryQueue<13440> : public VariableEventQueue<13440,16> {
public:
	// CgsSceneManagerIO_FineQuery.h:222
	void LineTestFine(SceneQueryId, unsigned int, unsigned char, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:253
	void LineTestNearest(SceneQueryId, unsigned int, unsigned char, Vector3, Vector3, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:284
	void VolumeTestDeepest(SceneQueryId, unsigned int, unsigned char, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

	// CgsSceneManagerIO_FineQuery.h:315
	void VolumeTestFine(SceneQueryId, unsigned int, unsigned char, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &, EntityId, CgsSceneManager::SceneManagerIO::EExclusionMode);

}

// CgsSceneManagerIO_FineQuery.h:50
struct CgsSceneManager::SceneManagerIO::InEventLineTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:52
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:53
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:55
	SceneQueryId mQueryId;

	// CgsSceneManagerTypes.h:43
	typedef uint32_t EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:56
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:57
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:58
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:59
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:63
struct CgsSceneManager::SceneManagerIO::InEventLineTestNearest : public Event {
	// CgsSceneManagerIO_FineQuery.h:65
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:66
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:68
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:69
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:70
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:71
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:72
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:76
struct CgsSceneManager::SceneManagerIO::InEventLineTestFastDoubleSided : public Event {
	// CgsSceneManagerIO_FineQuery.h:78
	Vector3 mLineStart;

	// CgsSceneManagerIO_FineQuery.h:79
	Vector3 mLineEnd;

	// CgsSceneManagerIO_FineQuery.h:81
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:82
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:83
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:84
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:85
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:89
struct CgsSceneManager::SceneManagerIO::InEventSphereTestFast : public Event {
	// CgsSceneManagerIO_FineQuery.h:91
	Vector3Plus mSpherePosPlusRadius;

	// CgsSceneManagerIO_FineQuery.h:93
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:94
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:95
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:96
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:97
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:101
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest : public Event {
	// CgsSceneManagerIO_FineQuery.h:103
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:104
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:105
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:106
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:107
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:108
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:109
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

// CgsSceneManagerIO_FineQuery.h:113
struct CgsSceneManager::SceneManagerIO::InEventVolumeTestFine : public Event {
	// CgsSceneManagerIO_FineQuery.h:115
	Matrix44Affine mTransform;

	// CgsSceneManagerIO_FineQuery.h:116
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_FineQuery.h:117
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_FineQuery.h:118
	EntityId mExcludeEntityId;

	// CgsSceneManagerIO_FineQuery.h:119
	CgsSceneManager::SceneManagerIO::EExclusionMode meExclusionMode;

	// CgsSceneManagerIO_FineQuery.h:120
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_FineQuery.h:121
	VolumeManagerVolume::VolumeTypeFlags mxVolumeTypeFlags;

}

