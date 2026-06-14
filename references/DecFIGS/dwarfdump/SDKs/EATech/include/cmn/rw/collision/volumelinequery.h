// volumelinequery.h:67
struct rw::collision::VolumeLineQuery {
	// volumelinequery.h:380
	const VolRef::Volume ** m_inputVols;

	// volumelinequery.h:381
	const rw::math::vpu::Matrix44Affine ** m_inputMats;

	// volumelinequery.h:382
	uint32_t m_numInputs;

	// volumelinequery.h:383
	uint32_t m_currInput;

	// volumelinequery.h:387
	VolumeLineSegIntersectResult * m_resBuffer;

	// volumelinequery.h:388
	uint32_t m_resCount;

	// volumelinequery.h:389
	uint32_t m_resMax;

	// volumelinequery.h:390
	uint32_t m_resBufferSize;

	// volumelinequery.h:393
	Vector3 m_pt1;

	// volumelinequery.h:394
	Vector3 m_pt2;

	// volumelinequery.h:395
	float32_t m_fatness;

	// volumelinequery.h:398
	VolRef * m_stackVRefBuffer;

	// volumelinequery.h:399
	VolRef m_currVRef;

	// volumelinequery.h:400
	uint32_t m_stackNext;

	// volumelinequery.h:401
	uint32_t m_stackMax;

	// volumelinequery.h:404
	VolRef * m_primVRefBuffer;

	// volumelinequery.h:405
	uint32_t m_primNext;

	// volumelinequery.h:406
	uint32_t m_primBufferSize;

	// volumelinequery.h:409
	VolRef::Volume * m_instVolPool;

	// volumelinequery.h:410
	uint32_t m_instVolCount;

	// volumelinequery.h:411
	uint32_t m_instVolMax;

	// volumelinequery.h:414
	uint32_t m_aggIndex;

	// volumelinequery.h:415
	void * m_spatialMapQueryMem;

	// volumelinequery.h:416
	void * m_curSpatialMapQuery;

	// volumelinequery.h:417
	float32_t m_endClipVal;

	// volumelinequery.h:76
	enum QueryResultsSet {
		ALLLINEINTERSECTIONS = 0,
		ANYLINEINTERSECTION = 1,
		NEARESTLINEINTERSECTION = 2,
	}

	// volumelinequery.h:420
	VolumeLineQuery::QueryResultsSet m_resultsSet;

	// volumelinequery.h:423
	uint32_t m_tag;

	// volumelinequery.h:424
	uint8_t m_numTagBits;

public:
	// volumelinequery.h:93
	void VolumeLineQuery(uint32_t, uint32_t, uint32_t);

	// volumelinequery.h:117
	RwBool AddPrimitiveRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, uint32_t, uint8_t);

	// volumelinequery.h:165
	RwBool AddVolumeRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, uint32_t, uint8_t);

protected:
	// volumelinequery.h:200
	uint32_t GetIntersections();

public:
	// volumelinequery.h:205
	uint32_t GetAllIntersections();

	// volumelinequery.h:209
	VolumeLineSegIntersectResult * GetAnyIntersection();

	// volumelinequery.h:213
	VolumeLineSegIntersectResult * GetNearestIntersection();

	// volumelinequery.h:232
	VolumeLineSegIntersectResult * GetIntersectionResultsBuffer() const;

	// volumelinequery.h:241
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// volumelinequery.h:247
	VolumeLineQuery * Initialize(const Resource &, uint32_t, uint32_t);

	// volumelinequery.h:252
	VolumeLineQuery * Initialize(void *, uint32_t, uint32_t);

	// volumelinequery.h:265
	void Release(VolumeLineQuery *);

	// volumelinequery.h:297
	void InitQuery(const VolRef::Volume **, const rw::math::vpu::Matrix44Affine **, uint32_t, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, float32_t);

	// volumelinequery.h:363
	RwBool Finished();

}

// volumelinequery.h:67
struct rw::collision::VolumeLineQuery {
	// volumelinequery.h:380
	const VolRef::Volume ** m_inputVols;

	// volumelinequery.h:381
	const rw::math::vpu::Matrix44Affine ** m_inputMats;

	// volumelinequery.h:382
	uint32_t m_numInputs;

	// volumelinequery.h:383
	uint32_t m_currInput;

	// volumelinequery.h:387
	VolumeLineSegIntersectResult * m_resBuffer;

	// volumelinequery.h:388
	uint32_t m_resCount;

	// volumelinequery.h:389
	uint32_t m_resMax;

	// volumelinequery.h:390
	uint32_t m_resBufferSize;

	// volumelinequery.h:393
	Vector3 m_pt1;

	// volumelinequery.h:394
	Vector3 m_pt2;

	// volumelinequery.h:395
	float32_t m_fatness;

	// volumelinequery.h:398
	VolRef * m_stackVRefBuffer;

	// volumelinequery.h:399
	VolRef m_currVRef;

	// volumelinequery.h:400
	uint32_t m_stackNext;

	// volumelinequery.h:401
	uint32_t m_stackMax;

	// volumelinequery.h:404
	VolRef * m_primVRefBuffer;

	// volumelinequery.h:405
	uint32_t m_primNext;

	// volumelinequery.h:406
	uint32_t m_primBufferSize;

	// volumelinequery.h:409
	VolRef::Volume * m_instVolPool;

	// volumelinequery.h:410
	uint32_t m_instVolCount;

	// volumelinequery.h:411
	uint32_t m_instVolMax;

	// volumelinequery.h:414
	uint32_t m_aggIndex;

	// volumelinequery.h:415
	void * m_spatialMapQueryMem;

	// volumelinequery.h:416
	void * m_curSpatialMapQuery;

	// volumelinequery.h:417
	float32_t m_endClipVal;

	// volumelinequery.h:76
	enum QueryResultsSet {
		ALLLINEINTERSECTIONS = 0,
		ANYLINEINTERSECTION = 1,
		NEARESTLINEINTERSECTION = 2,
	}

	// volumelinequery.h:420
	VolumeLineQuery::QueryResultsSet m_resultsSet;

	// volumelinequery.h:423
	uint32_t m_tag;

	// volumelinequery.h:424
	uint8_t m_numTagBits;

public:
	// volumelinequery.h:93
	void VolumeLineQuery(uint32_t, uint32_t, uint32_t);

	// volumelinequery.h:117
	RwBool AddPrimitiveRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, uint32_t, uint8_t);

	// volumelinequery.h:165
	RwBool AddVolumeRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, uint32_t, uint8_t);

	// volumelinequery.h:200
	uint32_t GetIntersections();

	// volumelinequery.h:205
	uint32_t GetAllIntersections();

	// volumelinequery.h:209
	VolumeLineSegIntersectResult * GetAnyIntersection();

	// volumelinequery.h:213
	VolumeLineSegIntersectResult * GetNearestIntersection();

	// volumelinequery.h:232
	VolumeLineSegIntersectResult * GetIntersectionResultsBuffer() const;

	// volumelinequery.h:241
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// volumelinequery.h:247
	VolumeLineQuery * Initialize(const Resource &, uint32_t, uint32_t);

	// volumelinequery.h:252
	VolumeLineQuery * Initialize(void *, uint32_t, uint32_t);

	// volumelinequery.h:265
	void Release(VolumeLineQuery *);

	// volumelinequery.h:297
	void InitQuery(const VolRef::Volume **, const rw::math::vpu::Matrix44Affine **, uint32_t, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, float32_t);

	// volumelinequery.h:363
	RwBool Finished();

}

