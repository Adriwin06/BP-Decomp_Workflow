// clusteredmeshbase.h:49
struct rw::collision::ClusteredMesh : public Procedural {
protected:
	// clusteredmeshbase.h:244
	KDTree * mKDTree;

	// clusteredmeshbase.h:245
	uint32_t * mCluster;

	// clusteredmeshbase.h:247
	ClusterParams mClusterParams;

	// clusteredmeshbase.h:248
	uint32_t mNumClusters;

	// clusteredmeshbase.h:249
	uint32_t mMaxClusters;

	// clusteredmeshbase.h:251
	uint32_t mNumUnits;

	// clusteredmeshbase.h:252
	uint32_t mMaxUnits;

	// clusteredmeshbase.h:254
	uint32_t mSizeOfThis;

	// clusteredmeshbase.h:256
	uint16_t mDefaultGroupId;

	// clusteredmeshbase.h:257
	uint16_t mDefaultSurfaceId;

	// clusteredmeshbase.h:258
	uint8_t mDefaultEdgeAngle;

private:
	// clusteredmeshbase.h:55
	void ClusteredMesh();

public:
	// clusteredmeshbase.h:69
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, uint32_t, uint32_t, const AABBox &, float32_t, uint32_t);

	// clusteredmeshbase.h:79
	rw::collision::ClusteredMesh * Initialize(const Resource &, uint32_t, uint32_t, uint32_t, uint32_t, const AABBox &, float32_t, uint32_t);

	// clusteredmeshbase.h:82
	void Release();

	// clusteredmeshbase.h:88
	ClusteredMeshCluster * AllocateNextCluster(uint32_t, uint32_t);

	// clusteredmeshbase.h:94
	KDTree * GetKDTree() const;

	// clusteredmeshbase.h:97
	uint32_t GetNumCluster() const;

	// clusteredmeshbase.h:100
	uint32_t GetMaxCluster() const;

	// clusteredmeshbase.h:103
	ClusteredMeshCluster & GetCluster(uint32_t) const;

	// clusteredmeshbase.h:106
	void GetClusterIndexAndUnitFromNode(uint32_t, uint32_t &, uint32_t &);

	// clusteredmeshbase.h:109
	uint32_t GetNumUnits() const;

	// clusteredmeshbase.h:112
	uint32_t GetNumUnitInCluster(uint32_t) const;

	// clusteredmeshbase.h:115
	uint32_t GetMaxUnits() const;

	// clusteredmeshbase.h:118
	uint32_t GetUnitVolumes(uint32_t, uint32_t, VolRef::Volume *, uint32_t &) const;

	// clusteredmeshbase.h:122
	uint32_t UnitGetOverlappingGPInstances(uint32_t, uint32_t, const AABBox &, const rw::math::vpu::Matrix44Affine *, GPTriangle *, uint32_t &) const;

	// clusteredmeshbase.h:125
	uint16_t GetDefaultGroupId() const;

	// clusteredmeshbase.h:128
	void SetDefaultGroupId(uint16_t);

	// clusteredmeshbase.h:131
	uint16_t GetDefaultSurfaceId() const;

	// clusteredmeshbase.h:134
	void SetDefaultSurfaceId(uint16_t);

	// clusteredmeshbase.h:137
	uint8_t GetDefaultEdgeAngle() const;

	// clusteredmeshbase.h:140
	void SetDefaultEdgeAngle(uint8_t);

	// clusteredmeshbase.h:143
	uint8_t GetGroupIdSize() const;

	// clusteredmeshbase.h:146
	void SetGroupIdSize(uint8_t);

	// clusteredmeshbase.h:149
	uint8_t GetSurfaceIdSize() const;

	// clusteredmeshbase.h:152
	void SetSurfaceIdSize(uint8_t);

	// clusteredmeshbase.h:155
	RwBool IsOneSided() const;

	// clusteredmeshbase.h:158
	void SetOneSided(RwBool);

	// clusteredmeshbase.h:161
	const float32_t & GetVertexCompressionGranularity() const;

	// clusteredmeshbase.h:164
	ClusterParams GetClusterParams();

	// clusteredmeshbase.h:167
	uint32_t GetUnitSize(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:170
	uint32_t NumVolumesInUnit(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:173
	uint32_t GetUnitType(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:179
	RwBool IsValid();

	// clusteredmeshbase.h:185
	uint32_t GetSizeThis();

	// clusteredmeshbase.h:188
	void UpdateThis();

	// clusteredmeshbase.h:192
	RwBool LineIntersectionQueryThis(VolumeLineQuery *, const rw::math::vpu::Matrix44Affine *);

	// clusteredmeshbase.h:196
	RwBool BBoxOverlapQueryThis(VolumeBBoxQuery *, const rw::math::vpu::Matrix44Affine *);

	// clusteredmeshbase.h:203
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// clusteredmeshbase.h:206
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// clusteredmeshbase.h:209
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// clusteredmeshbase.h:215
	void RegisterArenaReadCallbacks();

	// clusteredmeshbase.h:218
	void RegisterArenaWriteCallbacks();

private:
	// clusteredmeshbase.h:227
	void CommonFixupCode(void *);

	// clusteredmeshbase.h:230
	Vector3 GetVertex(uint32_t, uint8_t) const;

	// clusteredmeshbase.h:233
	AABBox GetUnitBBox(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:236
	uint32_t GetUnitVolume(uint32_t, uint32_t, uint32_t, VolRef::Volume *) const;

}

// clusteredmeshbase.h:49
struct rw::collision::ClusteredMesh : public Procedural {
	// clusteredmeshbase.h:244
	KDTree * mKDTree;

	// clusteredmeshbase.h:245
	uint32_t * mCluster;

	// clusteredmeshbase.h:247
	ClusterParams mClusterParams;

	// clusteredmeshbase.h:248
	uint32_t mNumClusters;

	// clusteredmeshbase.h:249
	uint32_t mMaxClusters;

	// clusteredmeshbase.h:251
	uint32_t mNumUnits;

	// clusteredmeshbase.h:252
	uint32_t mMaxUnits;

	// clusteredmeshbase.h:254
	uint32_t mSizeOfThis;

	// clusteredmeshbase.h:256
	uint16_t mDefaultGroupId;

	// clusteredmeshbase.h:257
	uint16_t mDefaultSurfaceId;

	// clusteredmeshbase.h:258
	uint8_t mDefaultEdgeAngle;

public:
	// clusteredmeshbase.h:55
	void ClusteredMesh();

	// clusteredmeshbase.h:69
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, uint32_t, uint32_t, const AABBox &, float32_t, uint32_t);

	// clusteredmeshbase.h:79
	rw::collision::ClusteredMesh * Initialize(const Resource &, uint32_t, uint32_t, uint32_t, uint32_t, const AABBox &, float32_t, uint32_t);

	// clusteredmeshbase.h:82
	void Release();

	// clusteredmeshbase.h:88
	ClusteredMeshCluster * AllocateNextCluster(uint32_t, uint32_t);

	// clusteredmeshbase.h:94
	KDTree * GetKDTree() const;

	// clusteredmeshbase.h:97
	uint32_t GetNumCluster() const;

	// clusteredmeshbase.h:100
	uint32_t GetMaxCluster() const;

	// clusteredmeshbase.h:103
	ClusteredMeshCluster & GetCluster(uint32_t) const;

	// clusteredmeshbase.h:106
	void GetClusterIndexAndUnitFromNode(uint32_t, uint32_t &, uint32_t &);

	// clusteredmeshbase.h:109
	uint32_t GetNumUnits() const;

	// clusteredmeshbase.h:112
	uint32_t GetNumUnitInCluster(uint32_t) const;

	// clusteredmeshbase.h:115
	uint32_t GetMaxUnits() const;

	// clusteredmeshbase.h:118
	uint32_t GetUnitVolumes(uint32_t, uint32_t, VolRef::Volume *, uint32_t &) const;

	// clusteredmeshbase.h:122
	uint32_t UnitGetOverlappingGPInstances(uint32_t, uint32_t, const AABBox &, const rw::math::vpu::Matrix44Affine *, GPTriangle *, uint32_t &) const;

	// clusteredmeshbase.h:125
	uint16_t GetDefaultGroupId() const;

	// clusteredmeshbase.h:128
	void SetDefaultGroupId(uint16_t);

	// clusteredmeshbase.h:131
	uint16_t GetDefaultSurfaceId() const;

	// clusteredmeshbase.h:134
	void SetDefaultSurfaceId(uint16_t);

	// clusteredmeshbase.h:137
	uint8_t GetDefaultEdgeAngle() const;

	// clusteredmeshbase.h:140
	void SetDefaultEdgeAngle(uint8_t);

	// clusteredmeshbase.h:143
	uint8_t GetGroupIdSize() const;

	// clusteredmeshbase.h:146
	void SetGroupIdSize(uint8_t);

	// clusteredmeshbase.h:149
	uint8_t GetSurfaceIdSize() const;

	// clusteredmeshbase.h:152
	void SetSurfaceIdSize(uint8_t);

	// clusteredmeshbase.h:155
	RwBool IsOneSided() const;

	// clusteredmeshbase.h:158
	void SetOneSided(RwBool);

	// clusteredmeshbase.h:161
	const float32_t & GetVertexCompressionGranularity() const;

	// clusteredmeshbase.h:164
	ClusterParams GetClusterParams();

	// clusteredmeshbase.h:167
	uint32_t GetUnitSize(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:170
	uint32_t NumVolumesInUnit(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:173
	uint32_t GetUnitType(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:179
	RwBool IsValid();

	// clusteredmeshbase.h:185
	uint32_t GetSizeThis();

	// clusteredmeshbase.h:188
	void UpdateThis();

	// clusteredmeshbase.h:192
	RwBool LineIntersectionQueryThis(VolumeLineQuery *, const rw::math::vpu::Matrix44Affine *);

	// clusteredmeshbase.h:196
	RwBool BBoxOverlapQueryThis(VolumeBBoxQuery *, const rw::math::vpu::Matrix44Affine *);

	// clusteredmeshbase.h:203
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// clusteredmeshbase.h:206
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// clusteredmeshbase.h:209
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// clusteredmeshbase.h:215
	void RegisterArenaReadCallbacks();

	// clusteredmeshbase.h:218
	void RegisterArenaWriteCallbacks();

	// clusteredmeshbase.h:227
	void CommonFixupCode(void *);

	// clusteredmeshbase.h:230
	Vector3 GetVertex(uint32_t, uint8_t) const;

	// clusteredmeshbase.h:233
	AABBox GetUnitBBox(uint32_t, uint32_t) const;

	// clusteredmeshbase.h:236
	uint32_t GetUnitVolume(uint32_t, uint32_t, uint32_t, VolRef::Volume *) const;

}

