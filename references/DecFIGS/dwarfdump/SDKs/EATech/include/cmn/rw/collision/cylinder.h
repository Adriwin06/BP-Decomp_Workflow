// cylinder.h:70
struct rw::collision::CylinderVolume : public Volume {
protected:
	// cylinder.h:77
	void CylinderVolume();

	// cylinder.h:92
	void CylinderVolume(float32_t, float32_t, float32_t);

public:
	// cylinder.h:110
	ResourceDescriptor GetResourceDescriptor(float32_t, float32_t, float32_t);

	// cylinder.h:117
	CylinderVolume * Initialize(const Resource &, float32_t, float32_t, float32_t);

	// cylinder.h:131
	float32_t GetHalfHeight() const;

	// cylinder.h:148
	void SetHalfHeight(float32_t);

	// cylinder.h:163
	float32_t GetInnerRadius() const;

	// cylinder.h:178
	void SetInnerRadius(float32_t);

	// cylinder.h:184
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// cylinder.h:187
	Vector3 GetBBoxDiag() const;

	// cylinder.h:190
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// cylinder.h:193
	RwBool GetInterval(const rw::math::vpu::Vector3 &, Interval &) const;

	// cylinder.h:196
	RwBool GetMaximumFeature(RwBool, const rw::math::vpu::Vector3 &, Feature &) const;

	// cylinder.h:203
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// cylinder.h:208
	RwBool ThinLineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &) const;

	// cylinder.h:216
	RwBool FatLineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// cylinder.h:222
	void Release();

}

