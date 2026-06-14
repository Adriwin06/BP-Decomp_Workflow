// volumevolumequery.h:41
struct rw::collision::VolumeVolumeQuery {
	// volumevolumequery.h:191
	const VolRef::Volume ** m_inputVols;

	// volumevolumequery.h:192
	const rw::math::vpu::Matrix44Affine ** m_inputMats;

	// volumevolumequery.h:193
	uint32_t m_numInputs;

	// volumevolumequery.h:194
	uint32_t m_currInput;

	// volumevolumequery.h:197
	const BitTable * m_cullTable;

	// volumevolumequery.h:200
	float32_t m_padding;

	// volumevolumequery.h:203
	VolRefPair * m_volRefPairBuffer;

	// volumevolumequery.h:204
	uint32_t m_volRefPairCount;

	// volumevolumequery.h:205
	uint32_t m_volRefPairBufferSize;

	// volumevolumequery.h:206
	VolRef1xN * m_volRef1xNBuffer;

	// volumevolumequery.h:207
	uint32_t m_volRef1xNCount;

	// volumevolumequery.h:210
	GPInstance * m_instancingSPR;

	// volumevolumequery.h:213
	PrimitivePairIntersectResult * m_intersectionBuffer;

	// volumevolumequery.h:214
	int32_t m_intersectionBufferMaxSize;

	// volumevolumequery.h:217
	const VolRef::Volume * m_queryVol;

	// volumevolumequery.h:218
	const rw::math::vpu::Matrix44Affine * m_queryMtx;

	// volumevolumequery.h:219
	VolumeBBoxQuery * m_bBoxQueryAtoB;

	// volumevolumequery.h:220
	VolumeBBoxQuery * m_bBoxQueryBtoA;

public:
	// volumevolumequery.h:45
	void VolumeVolumeQuery(uint32_t, uint32_t);

	// volumevolumequery.h:48
	uint32_t GetPrimitiveBBoxOverlaps();

	// volumevolumequery.h:51
	uint32_t GetPrimitiveIntersections();

	// volumevolumequery.h:54
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// volumevolumequery.h:57
	VolumeVolumeQuery * Initialize(const Resource &, uint32_t, uint32_t);

	// volumevolumequery.h:72
	void Release(VolumeVolumeQuery *);

	// volumevolumequery.h:90
	VolRefPair * GetOverlapResultsBuffer() const;

	// volumevolumequery.h:110
	uint32_t GetNumOverlaps() const;

	// volumevolumequery.h:129
	PrimitivePairIntersectResult * GetIntersectionResultsBuffer() const;

	// volumevolumequery.h:168
	void InitQuery(const VolRef::Volume **, const rw::math::vpu::Matrix44Affine **, uint32_t, const VolRef::Volume *, const rw::math::vpu::Matrix44Affine *, const BitTable *, float32_t);

}

