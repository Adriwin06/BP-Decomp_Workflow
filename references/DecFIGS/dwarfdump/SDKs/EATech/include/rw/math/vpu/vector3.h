// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector3.h:171
		using vpu::Vector3;

	}

}

// vector3.h:32
struct rw::math::vpu::Vector3 {
	// vector3.h:166
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// vector3.h:59
	void Vector3();

	// vector3.h:66
	void Vector3(VecFloat);

	// vector3.h:67
	void Vector3(float, float, float);

	// vector3.h:71
	void Vector3(const float *);

	// vector3.h:72
	void Vector3(VectorIntrinsicInParam);

	// vector3.h:73
	void Vector3(VecFloat, VecFloat, VecFloat);

	// vector3.h:74
	void Vector3(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:81
	Vector3 & operator=(VectorIntrinsicInParam);

	// vector3.h:82
	VectorIntrinsicUnion::VectorIntrinsic & operator float __vector__&();

	// vector3.h:83
	const VectorIntrinsicUnion::VectorIntrinsic & operator const float __vector__&() const;

	// vector3.h:86
	void SetVector(VectorIntrinsicInParam);

	// vector3.h:88
	VectorIntrinsicUnion::VectorIntrinsic & GetVector();

	// vector3.h:89
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vector3.h:93
	void Set(float, float, float);

	// vector3.h:94
	void Set(VecFloat, VecFloat, VecFloat);

	// vector3.h:95
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:99
	void SetComponent(int, float);

	// vector3.h:100
	void SetComponent(int, VecFloat);

	// vector3.h:101
	void SetComponent(int, const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:105
	void SetX(float);

	// vector3.h:106
	void SetX(VecFloat);

	// vector3.h:107
	void SetX(const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:111
	void SetY(float);

	// vector3.h:112
	void SetY(VecFloat);

	// vector3.h:113
	void SetY(const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:117
	void SetZ(float);

	// vector3.h:118
	void SetZ(VecFloat);

	// vector3.h:119
	void SetZ(const rw::math::vpu::VecFloatRefIndex &);

	// vector3.h:121
	void SetZero();

	// vector3.h:123
	VecFloatRefIndex GetComponent(int);

	// vector3.h:124
	const rw::math::vpu::VecFloatRefIndex GetComponent(int) const;

	// vector3.h:125
	VecFloatRefIndex operator[](int);

	// vector3.h:126
	const rw::math::vpu::VecFloatRefIndex operator[](int) const;

	// vector3.h:143
	const Vector2::VecFloatRefX GetX() const;

	// vector3.h:144
	Vector2::VecFloatRefX GetX();

	// vector3.h:145
	const Vector2::VecFloatRefY GetY() const;

	// vector3.h:146
	Vector2::VecFloatRefY GetY();

	// Unknown accessibility
	// vec_float.h:27
	typedef VecFloatRef<VectorAxisZ> VecFloatRefZ;

	// vector3.h:147
	const Vector3::VecFloatRefZ GetZ() const;

	// vector3.h:148
	Vector3::VecFloatRefZ GetZ();

	// vector3.h:150
	const Vector2::VecFloatRefX X() const;

	// vector3.h:151
	Vector2::VecFloatRefX X();

	// vector3.h:152
	const Vector2::VecFloatRefY Y() const;

	// vector3.h:153
	Vector2::VecFloatRefY Y();

	// vector3.h:154
	const Vector3::VecFloatRefZ Z() const;

	// vector3.h:155
	Vector3::VecFloatRefZ Z();

}

