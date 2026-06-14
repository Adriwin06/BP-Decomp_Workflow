// capsule.h:44
struct rw::collision::CapsuleVolume : public Volume {
protected:
	// capsule.h:51
	void CapsuleVolume();

	// capsule.h:65
	void CapsuleVolume(float32_t, float32_t);

public:
	// capsule.h:81
	ResourceDescriptor GetResourceDescriptor(float32_t, float32_t);

	// capsule.h:88
	CapsuleVolume * Initialize(const Resource &, float32_t, float32_t);

	// capsule.h:102
	const float32_t & GetHalfHeight() const;

	// capsule.h:119
	void SetHalfHeight(float32_t);

	// capsule.h:125
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// capsule.h:128
	Vector3 GetBBoxDiag() const;

	// capsule.h:131
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// capsule.h:134
	RwBool GetInterval(const rw::math::vpu::Vector3 &, Interval &) const;

	// capsule.h:137
	RwBool GetMaximumFeature(RwBool, const rw::math::vpu::Vector3 &, Feature &) const;

	// capsule.h:144
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// capsule.h:147
	void Release();

}

