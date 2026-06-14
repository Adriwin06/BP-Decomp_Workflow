// CgsSceneManagerIO_CoarseQuery.h:90
struct CgsSceneManager::SceneManagerIO::InCoarseQueryQueue<16384> : public VariableEventQueue<16384,16> {
public:
	// CgsSceneManagerIO_CoarseQuery.h:182
	void SphereTest(SceneQueryId, unsigned int, Vector3, float);

	// CgsSceneManagerIO_CoarseQuery.h:205
	void FrustumTest(SceneQueryId, unsigned int, const Frustum &);

	// CgsSceneManagerIO_CoarseQuery.h:229
	void FrustumTestVp(SceneQueryId, unsigned int, const Frustum &, const rw::math::vpu::Matrix44 &, unsigned int);

	// CgsSceneManagerIO_CoarseQuery.h:255
	void VolumeTest(SceneQueryId, int, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine &);

}

// CgsSceneManagerIO_CoarseQuery.h:41
struct CgsSceneManager::SceneManagerIO::InEventSphereTest : public Event {
	// CgsSceneManagerIO_CoarseQuery.h:43
	Vector3 mPosition;

	// CgsSceneManagerIO_CoarseQuery.h:45
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_CoarseQuery.h:46
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_CoarseQuery.h:47
	float32_t mfRadius;

}

// CgsSceneManagerIO_CoarseQuery.h:61
struct CgsSceneManager::SceneManagerIO::InEventFrustumTestVp : public Event {
	// CgsSceneManagerIO_CoarseQuery.h:63
	Matrix44 mViewProjection;

	// CgsSceneManagerIO_CoarseQuery.h:64
	Frustum mFrustum;

	// CgsSceneManagerIO_CoarseQuery.h:65
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_CoarseQuery.h:66
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_CoarseQuery.h:67
	uint32_t mxQueryFlags;

}

// CgsSceneManagerIO_CoarseQuery.h:52
struct CgsSceneManager::SceneManagerIO::InEventFrustumTest : public Event {
	// CgsSceneManagerIO_CoarseQuery.h:54
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_CoarseQuery.h:55
	InEventLineTestFine::EntityTypeFlags mx32EntityTypeFlags;

	// CgsSceneManagerIO_CoarseQuery.h:57
	Frustum mFrustum;

}

// CgsSceneManagerIO_CoarseQuery.h:71
struct CgsSceneManager::SceneManagerIO::InEventVolumeTest : public Event {
	// CgsSceneManagerIO_CoarseQuery.h:73
	SceneQueryId mQueryId;

	// CgsSceneManagerIO_CoarseQuery.h:74
	int32_t mx32EntityTypeFlags;

	// CgsSceneManagerIO_CoarseQuery.h:75
	VolumeSlot mVolumeBuffer;

	// CgsSceneManagerIO_CoarseQuery.h:76
	Matrix44Affine mTransform;

}

