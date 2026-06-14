// volumebboxquery.h:36
struct rw::collision::VolumeBBoxQuery {
	// volumebboxquery.h:287
	const VolRef::Volume ** m_inputVols;

	// volumebboxquery.h:288
	const rw::math::vpu::Matrix44Affine ** m_inputMats;

	// volumebboxquery.h:289
	uint32_t m_numInputs;

	// volumebboxquery.h:290
	uint32_t m_currInput;

	// volumebboxquery.h:293
	AABBox m_aabb;

	// volumebboxquery.h:296
	VolRef * m_stackVRefBuffer;

	// volumebboxquery.h:297
	VolRef m_currVRef;

	// volumebboxquery.h:298
	uint32_t m_stackNext;

	// volumebboxquery.h:299
	uint32_t m_stackMax;

	// volumebboxquery.h:302
	VolRef * m_primVRefBuffer;

	// volumebboxquery.h:303
	uint32_t m_primNext;

	// volumebboxquery.h:304
	uint32_t m_primBufferSize;

	// volumebboxquery.h:307
	VolRef::Volume * m_instVolPool;

	// volumebboxquery.h:308
	uint32_t m_instVolCount;

	// volumebboxquery.h:309
	uint32_t m_instVolMax;

	// volumebboxquery.h:312
	uint32_t m_aggIndex;

	// volumebboxquery.h:313
	void * m_spatialMapQueryMem;

	// volumebboxquery.h:314
	void * m_curSpatialMapQuery;

	// volumebboxquery.h:317
	uint32_t m_tag;

	// volumebboxquery.h:318
	uint8_t m_numTagBits;

public:
	// volumebboxquery.h:42
	void VolumeBBoxQuery(uint32_t, uint32_t, uint32_t);

	// volumebboxquery.h:63
	RwBool AddPrimitiveRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, const AABBox &, uint32_t, uint8_t);

	// volumebboxquery.h:116
	RwBool AddVolumeRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, const AABBox &, uint32_t, uint8_t);

	// volumebboxquery.h:149
	uint32_t GetOverlaps();

	// volumebboxquery.h:158
	VolRef * GetOverlapResultsBuffer() const;

	// volumebboxquery.h:171
	uint32_t GetOverlapResultsBufferCount() const;

	// volumebboxquery.h:179
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// volumebboxquery.h:184
	VolumeBBoxQuery * Initialize(const Resource &, uint32_t, uint32_t);

	// volumebboxquery.h:199
	void Release(VolumeBBoxQuery *);

	// volumebboxquery.h:227
	void InitQuery(const VolRef::Volume **, const rw::math::vpu::Matrix44Affine **, uint32_t, const AABBox &);

	// volumebboxquery.h:271
	RwBool Finished();

}

// volumebboxquery.h:36
struct rw::collision::VolumeBBoxQuery {
	// volumebboxquery.h:287
	const VolRef::Volume ** m_inputVols;

	// volumebboxquery.h:288
	const rw::math::vpu::Matrix44Affine ** m_inputMats;

	// volumebboxquery.h:289
	uint32_t m_numInputs;

	// volumebboxquery.h:290
	uint32_t m_currInput;

	// volumebboxquery.h:293
	AABBox m_aabb;

	// volumebboxquery.h:296
	VolRef * m_stackVRefBuffer;

	// volumebboxquery.h:297
	VolRef m_currVRef;

	// volumebboxquery.h:298
	uint32_t m_stackNext;

	// volumebboxquery.h:299
	uint32_t m_stackMax;

	// volumebboxquery.h:302
	VolRef * m_primVRefBuffer;

	// volumebboxquery.h:303
	uint32_t m_primNext;

	// volumebboxquery.h:304
	uint32_t m_primBufferSize;

	// volumebboxquery.h:307
	VolRef::Volume * m_instVolPool;

	// volumebboxquery.h:308
	uint32_t m_instVolCount;

	// volumebboxquery.h:309
	uint32_t m_instVolMax;

	// volumebboxquery.h:312
	uint32_t m_aggIndex;

	// volumebboxquery.h:313
	void * m_spatialMapQueryMem;

	// volumebboxquery.h:314
	void * m_curSpatialMapQuery;

	// volumebboxquery.h:317
	uint32_t m_tag;

	// volumebboxquery.h:318
	uint8_t m_numTagBits;

public:
	// volumebboxquery.h:42
	void VolumeBBoxQuery(uint32_t, uint32_t, uint32_t);

	// volumebboxquery.h:63
	RwBool AddPrimitiveRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, const AABBox &, uint32_t, uint8_t);

	// volumebboxquery.h:116
	RwBool AddVolumeRef(const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, const AABBox &, uint32_t, uint8_t);

	// volumebboxquery.h:149
	uint32_t GetOverlaps();

	// volumebboxquery.h:158
	VolRef * GetOverlapResultsBuffer() const;

	// volumebboxquery.h:171
	uint32_t GetOverlapResultsBufferCount() const;

	// volumebboxquery.h:179
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// volumebboxquery.h:184
	rw::collision::VolumeBBoxQuery * Initialize(const Resource &, uint32_t, uint32_t);

	// volumebboxquery.h:199
	void Release(rw::collision::VolumeBBoxQuery *);

	// volumebboxquery.h:227
	void InitQuery(const VolRef::Volume **, const rw::math::vpu::Matrix44Affine **, uint32_t, const AABBox &);

	// volumebboxquery.h:271
	RwBool Finished();

}

