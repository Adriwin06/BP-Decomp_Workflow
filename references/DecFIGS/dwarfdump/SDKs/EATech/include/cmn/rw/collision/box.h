// box.h:50
struct rw::collision::BoxVolume : public Volume {
protected:
	// box.h:57
	void BoxVolume(Vector3);

	// box.h:71
	Vector3 GetDimensions() const;

public:
	// box.h:87
	ResourceDescriptor GetResourceDescriptor(Vector3);

	// box.h:102
	ResourceDescriptor GetResourceDescriptor(float32_t, float32_t, float32_t);

	// box.h:109
	BoxVolume * Initialize(const Resource &, Vector3);

	// box.h:112
	BoxVolume * Initialize(const Resource &, float32_t, float32_t, float32_t);

	// box.h:127
	void GetDimensions(Vector3 &) const;

	// box.h:144
	void SetDimensions(Vector3);

	// box.h:157
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// box.h:160
	Vector3 GetBBoxDiag() const;

	// box.h:163
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// box.h:166
	RwBool GetInterval(Vector3, Interval &) const;

	// box.h:169
	RwBool GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// box.h:176
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// box.h:179
	void Release();

}

