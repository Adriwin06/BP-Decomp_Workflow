// aggregatevolume.h:53
struct rw::collision::AggregateVolume : public Volume {
protected:
	// aggregatevolume.h:59
	void AggregateVolume(rw::collision::Aggregate *);

public:
	// aggregatevolume.h:74
	ResourceDescriptor GetResourceDescriptor(rw::collision::Aggregate *);

	// aggregatevolume.h:81
	AggregateVolume * Initialize(const Resource &, rw::collision::Aggregate *);

	// aggregatevolume.h:95
	void SetAggregate(rw::collision::Aggregate *);

	// aggregatevolume.h:115
	rw::collision::Aggregate * GetAggregate() const;

	// aggregatevolume.h:122
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// aggregatevolume.h:125
	Vector3 GetBBoxDiag() const;

	// aggregatevolume.h:128
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// aggregatevolume.h:131
	RwBool GetMaximumFeature(RwBool, const rw::math::vpu::Vector3 &, Feature &) const;

	// aggregatevolume.h:135
	void Release();

}

