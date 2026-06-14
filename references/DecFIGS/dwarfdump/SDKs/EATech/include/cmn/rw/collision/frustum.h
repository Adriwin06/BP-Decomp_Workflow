// frustum.h:34
struct rw::collision::Frustum {
private:
	// frustum.h:61
	Plane[6] m_planes;

public:
	// frustum.h:36
	void Frustum();

	// frustum.h:51
	void SetPlane(uint32_t, const Plane &);

	// frustum.h:52
	const Plane & GetPlane(uint32_t) const;

	// frustum.h:53
	Plane GetPlane(uint32_t);

	// frustum.h:55
	void TransformPlanes(const rw::math::vpu::Matrix44Affine &);

	// frustum.h:57
	RwBool IsSphereInFrustum(const rw::math::vpu::Vector3 &, float32_t);

	// frustum.h:58
	RwBool IsBoxInFrustum(const rw::math::vpu::Vector3 *);

}

