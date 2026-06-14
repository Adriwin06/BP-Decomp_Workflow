// plane.h:33
struct rw::collision::Plane {
private:
	// plane.h:49
	Vector3Plus m_data;

public:
	// plane.h:35
	void Plane();

	// plane.h:36
	void Plane(Vector3, float32_t);

	// plane.h:37
	Vector3 GetNormal();

	// plane.h:38
	float32_t GetDistance();

	// plane.h:40
	void SetDistance(float32_t);

	// plane.h:41
	void SetNormal(Vector3);

	// plane.h:43
	void Transform(const rw::math::vpu::Matrix44Affine &);

	// plane.h:45
	RwBool PointTest(Vector3);

	// plane.h:46
	RwBool SphereTest(Vector3, float32_t);

}

