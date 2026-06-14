// sphere.h:38
struct rw::collision::SphereVolume : public Volume {
protected:
	// sphere.h:45
	void SphereVolume(float32_t);

public:
	// sphere.h:60
	ResourceDescriptor GetResourceDescriptor(float32_t);

	// sphere.h:67
	SphereVolume * Initialize(const Resource &, float32_t);

	// sphere.h:70
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// sphere.h:73
	Vector3 GetBBoxDiag() const;

	// sphere.h:76
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// sphere.h:79
	RwBool GetInterval(const rw::math::vpu::Vector3 &, Interval &) const;

	// sphere.h:82
	RwBool GetMaximumFeature(RwBool, const rw::math::vpu::Vector3 &, Feature &) const;

	// sphere.h:90
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// sphere.h:93
	void Release();

}

