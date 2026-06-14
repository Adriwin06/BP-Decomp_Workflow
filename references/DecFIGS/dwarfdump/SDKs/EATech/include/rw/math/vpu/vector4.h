// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector4.h:192
		using vpu::Vector4;

	}

}

// vector4.h:37
struct rw::math::vpu::Vector4 {
	// vector4.h:176
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// vector4.h:59
	void Vector4();

	// vector4.h:62
	void Vector4(VecFloat);

	// vector4.h:66
	void Vector4(const float *);

	// vector4.h:67
	void Vector4(VectorIntrinsicInParam);

	// vector4.h:68
	void Vector4(float, float, float, float);

	// vector4.h:69
	void Vector4(VecFloat, VecFloat, VecFloat, VecFloat);

	// vector4.h:70
	void Vector4(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:71
	void Vector4(Vector3, VecFloatRef<VectorAxisW>);

	// vector4.h:72
	void Vector4(Vector3, const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:73
	void Vector4(Vector3, VecFloat);

	// vector4.h:74
	void Vector4(Vector3, float);

	// vector4.h:83
	Vector4 & operator=(VectorIntrinsicInParam);

	// vector4.h:84
	VectorIntrinsicUnion::VectorIntrinsic & operator float __vector__&();

	// vector4.h:85
	const VectorIntrinsicUnion::VectorIntrinsic & operator const float __vector__&() const;

	// vector4.h:88
	VectorIntrinsicUnion::VectorIntrinsic & GetVector();

	// vector4.h:89
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vector4.h:91
	void SetVector(VectorIntrinsicInParam);

	// vector4.h:95
	void Set(float, float, float, float);

	// vector4.h:96
	void Set(VecFloat, VecFloat, VecFloat, VecFloat);

	// vector4.h:97
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:101
	void SetComponent(int, float);

	// vector4.h:102
	void SetComponent(int, VecFloat);

	// vector4.h:103
	void SetComponent(int, const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:107
	void SetX(float);

	// vector4.h:108
	void SetX(VecFloat);

	// vector4.h:109
	void SetX(const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:113
	void SetY(float);

	// vector4.h:114
	void SetY(VecFloat);

	// vector4.h:115
	void SetY(const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:119
	void SetZ(float);

	// vector4.h:120
	void SetZ(VecFloat);

	// vector4.h:121
	void SetZ(const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:125
	void SetW(float);

	// vector4.h:126
	void SetW(VecFloat);

	// vector4.h:127
	void SetW(const rw::math::vpu::VecFloatRefIndex &);

	// vector4.h:129
	void SetZero();

	// vector4.h:131
	VecFloatRefIndex GetComponent(int);

	// vector4.h:132
	const rw::math::vpu::VecFloatRefIndex GetComponent(int) const;

	// vector4.h:133
	VecFloatRefIndex operator[](int);

	// vector4.h:134
	const rw::math::vpu::VecFloatRefIndex operator[](int) const;

	// vector4.h:155
	const Vector2::VecFloatRefX GetX() const;

	// vector4.h:156
	Vector2::VecFloatRefX GetX();

	// vector4.h:157
	const Vector2::VecFloatRefY GetY() const;

	// vector4.h:158
	Vector2::VecFloatRefY GetY();

	// vector4.h:159
	const Vector3::VecFloatRefZ GetZ() const;

	// vector4.h:160
	Vector3::VecFloatRefZ GetZ();

	// vector4.h:161
	const Vector3Plus::VecFloatRefW GetW() const;

	// vector4.h:162
	Vector3Plus::VecFloatRefW GetW();

	// vector4.h:164
	const Vector2::VecFloatRefX X() const;

	// vector4.h:165
	Vector2::VecFloatRefX X();

	// vector4.h:166
	const Vector2::VecFloatRefY Y() const;

	// vector4.h:167
	Vector2::VecFloatRefY Y();

	// vector4.h:168
	const Vector3::VecFloatRefZ Z() const;

	// vector4.h:169
	Vector3::VecFloatRefZ Z();

	// vector4.h:170
	const Vector3Plus::VecFloatRefW W() const;

	// vector4.h:171
	Vector3Plus::VecFloatRefW W();

}

