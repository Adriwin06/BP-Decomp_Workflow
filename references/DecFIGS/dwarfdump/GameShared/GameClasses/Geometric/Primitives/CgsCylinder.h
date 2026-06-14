// CgsCylinder.h:42
struct CgsGeometric::Cylinder {
private:
	// CgsCylinder.h:71
	Matrix44Affine mTransform;

	// CgsCylinder.h:72
	float32_t mfRadius;

	// CgsCylinder.h:73
	float32_t mfLength;

public:
	// CgsCylinder.h:48
	void Set(Matrix44Affine, float32_t, float32_t);

	// CgsCylinder.h:51
	Vector3 GetPosition() const;

	// CgsCylinder.h:55
	Vector3 GetDirection() const;

	// CgsCylinder.h:59
	Matrix44Affine GetTransform() const;

	// CgsCylinder.h:63
	VecFloat GetRadius() const;

	// CgsCylinder.h:67
	VecFloat GetLength() const;

}

