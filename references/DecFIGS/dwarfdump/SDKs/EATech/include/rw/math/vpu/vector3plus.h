// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector3plus.h:179
		using namespace vpu;

	}

}

// vector3plus.h:34
struct rw::math::vpu::Vector3Plus {
	// vector3plus.h:174
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// vector3plus.h:59
	void Vector3Plus();

	// vector3plus.h:60
	void Vector3Plus(float, float, float, float);

	// vector3plus.h:65
	void Vector3Plus(const float *);

	// vector3plus.h:66
	void Vector3Plus(VectorIntrinsicInParam);

	// vector3plus.h:67
	void Vector3Plus(VecFloat, VecFloat, VecFloat, VecFloat);

	// vector3plus.h:68
	void Vector3Plus(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:76
	Vector3Plus & operator=(VectorIntrinsicInParam);

	// vector3plus.h:77
	VectorIntrinsicUnion::VectorIntrinsic & operator float __vector__&();

	// vector3plus.h:78
	const VectorIntrinsicUnion::VectorIntrinsic & operator const float __vector__&() const;

	// vector3plus.h:81
	void SetVector(VectorIntrinsicInParam);

	// vector3plus.h:83
	VectorIntrinsicUnion::VectorIntrinsic & GetVector();

	// vector3plus.h:84
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vector3plus.h:88
	void Set(float, float, float, float);

	// vector3plus.h:89
	void Set(VecFloat, VecFloat, VecFloat, VecFloat);

	// vector3plus.h:90
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:94
	void SetComponent(int, float);

	// vector3plus.h:95
	void SetComponent(int, VecFloat);

	// vector3plus.h:96
	void SetComponent(int, const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:100
	void SetX(float);

	// vector3plus.h:101
	void SetX(VecFloat);

	// vector3plus.h:102
	void SetX(const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:106
	void SetY(float);

	// vector3plus.h:107
	void SetY(VecFloat);

	// vector3plus.h:108
	void SetY(const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:112
	void SetZ(float);

	// vector3plus.h:113
	void SetZ(VecFloat);

	// vector3plus.h:114
	void SetZ(const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:118
	void SetPlus(float);

	// vector3plus.h:119
	void SetPlus(VecFloat);

	// vector3plus.h:120
	void SetPlus(const rw::math::vpu::VecFloatRefIndex &);

	// vector3plus.h:122
	void SetZero();

	// vector3plus.h:124
	VecFloatRefIndex GetComponent(int);

	// vector3plus.h:125
	const rw::math::vpu::VecFloatRefIndex GetComponent(int) const;

	// vector3plus.h:127
	VecFloatRefIndex operator[](int);

	// vector3plus.h:128
	const rw::math::vpu::VecFloatRefIndex operator[](int) const;

	// vector3plus.h:130
	void SetVector3(Vector3);

	// vector3plus.h:132
	const rw::math::vpu::Vector3 & GetVector3() const;

	// vector3plus.h:153
	const Vector2::VecFloatRefX GetX() const;

	// vector3plus.h:154
	Vector2::VecFloatRefX GetX();

	// vector3plus.h:155
	const Vector2::VecFloatRefY GetY() const;

	// vector3plus.h:156
	Vector2::VecFloatRefY GetY();

	// vector3plus.h:157
	const Vector3::VecFloatRefZ GetZ() const;

	// vector3plus.h:158
	Vector3::VecFloatRefZ GetZ();

	// Unknown accessibility
	// vec_float.h:28
	typedef VecFloatRef<VectorAxisW> VecFloatRefW;

	// vector3plus.h:159
	const Vector3Plus::VecFloatRefW GetPlus() const;

	// vector3plus.h:160
	Vector3Plus::VecFloatRefW GetPlus();

	// vector3plus.h:162
	const Vector2::VecFloatRefX X() const;

	// vector3plus.h:163
	Vector2::VecFloatRefX X();

	// vector3plus.h:164
	const Vector2::VecFloatRefY Y() const;

	// vector3plus.h:165
	Vector2::VecFloatRefY Y();

	// vector3plus.h:166
	const Vector3::VecFloatRefZ Z() const;

	// vector3plus.h:167
	Vector3::VecFloatRefZ Z();

	// vector3plus.h:168
	const Vector3Plus::VecFloatRefW UserData() const;

	// vector3plus.h:169
	Vector3Plus::VecFloatRefW UserData();

}

