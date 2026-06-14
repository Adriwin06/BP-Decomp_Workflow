// triangle.h:52
struct rw::collision::TriangleVolume : public Volume {
protected:
	// triangle.h:56
	void TriangleVolume(Vector3, Vector3, Vector3);

public:
	// triangle.h:65
	ResourceDescriptor GetResourceDescriptor();

	// triangle.h:85
	ResourceDescriptor GetResourceDescriptor(Vector3, Vector3, Vector3);

	// triangle.h:93
	TriangleVolume * Initialize(const Resource &, Vector3, Vector3, Vector3);

	// triangle.h:96
	void GetNormal(Vector3 &, const rw::math::vpu::Matrix44Affine *) const;

	// triangle.h:102
	void GetPoints(Vector3 &, Vector3 &, Vector3 &, const rw::math::vpu::Matrix44Affine *) const;

	// triangle.h:107
	void SetPoints(Vector3, Vector3, Vector3);

	// triangle.h:109
	float32_t GetEdgeCos(uint32_t) const;

	// triangle.h:111
	Vector3 GetEdgeCosVector() const;

	// triangle.h:113
	void SetEdgeCos(float32_t, float32_t, float32_t);

	// triangle.h:116
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// triangle.h:119
	Vector3 GetBBoxDiag() const;

	// triangle.h:122
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// triangle.h:125
	RwBool GetInterval(Vector3, Interval &) const;

	// triangle.h:128
	RwBool GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// triangle.h:135
	RwBool LineSegIntersect(Vector3, Vector3, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// triangle.h:137
	void Release();

}

