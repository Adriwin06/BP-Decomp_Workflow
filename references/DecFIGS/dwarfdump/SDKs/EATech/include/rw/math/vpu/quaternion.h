// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// quaternion.h:175
		using vpu::Quaternion;

	}

}

// quaternion.h:27
struct rw::math::vpu::Quaternion {
	// quaternion.h:158
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// quaternion.h:48
	void Quaternion();

	// quaternion.h:49
	void Quaternion(const rw::math::vpu::Quaternion &);

	// quaternion.h:50
	void Quaternion(float, float, float, float);

	// quaternion.h:54
	void Quaternion(const float *);

	// quaternion.h:55
	void Quaternion(VectorIntrinsicInParam);

	// quaternion.h:56
	void Quaternion(VecFloat, VecFloat, VecFloat, VecFloat);

	// quaternion.h:57
	void Quaternion(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:61
	Quaternion & operator=(Quaternion);

	// quaternion.h:64
	Quaternion & operator=(VectorIntrinsicInParam);

	// quaternion.h:65
	VectorIntrinsicUnion::VectorIntrinsic & operator float __vector__&();

	// quaternion.h:66
	const VectorIntrinsicUnion::VectorIntrinsic & operator const float __vector__&() const;

	// quaternion.h:69
	void SetVector(VectorIntrinsicInParam);

	// quaternion.h:70
	VectorIntrinsicUnion::VectorIntrinsic & GetVector();

	// quaternion.h:72
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// quaternion.h:76
	void Set(float, float, float, float);

	// quaternion.h:77
	void Set(VecFloat, VecFloat, VecFloat, VecFloat);

	// quaternion.h:78
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:82
	void SetComponent(int, float);

	// quaternion.h:83
	void SetComponent(int, VecFloat);

	// quaternion.h:84
	void SetComponent(int, const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:88
	void SetX(float);

	// quaternion.h:89
	void SetX(VecFloat);

	// quaternion.h:90
	void SetX(const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:94
	void SetY(float);

	// quaternion.h:95
	void SetY(VecFloat);

	// quaternion.h:96
	void SetY(const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:100
	void SetZ(float);

	// quaternion.h:101
	void SetZ(VecFloat);

	// quaternion.h:102
	void SetZ(const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:106
	void SetW(float);

	// quaternion.h:107
	void SetW(VecFloat);

	// quaternion.h:108
	void SetW(const rw::math::vpu::VecFloatRefIndex &);

	// quaternion.h:110
	void SetZero();

	// quaternion.h:111
	void SetIdentity();

	// quaternion.h:113
	VecFloatRefIndex GetComponent(int);

	// quaternion.h:114
	const rw::math::vpu::VecFloatRefIndex GetComponent(int) const;

	// quaternion.h:115
	VecFloatRefIndex operator[](int);

	// quaternion.h:116
	const rw::math::vpu::VecFloatRefIndex operator[](int) const;

	// quaternion.h:137
	const Vector2::VecFloatRefX GetX() const;

	// quaternion.h:138
	Vector2::VecFloatRefX GetX();

	// quaternion.h:139
	const Vector2::VecFloatRefY GetY() const;

	// quaternion.h:140
	Vector2::VecFloatRefY GetY();

	// quaternion.h:141
	const Vector3::VecFloatRefZ GetZ() const;

	// quaternion.h:142
	Vector3::VecFloatRefZ GetZ();

	// quaternion.h:143
	const Vector3Plus::VecFloatRefW GetW() const;

	// quaternion.h:144
	Vector3Plus::VecFloatRefW GetW();

	// quaternion.h:146
	const Vector2::VecFloatRefX X() const;

	// quaternion.h:147
	Vector2::VecFloatRefX X();

	// quaternion.h:148
	const Vector2::VecFloatRefY Y() const;

	// quaternion.h:149
	Vector2::VecFloatRefY Y();

	// quaternion.h:150
	const Vector3::VecFloatRefZ Z() const;

	// quaternion.h:151
	Vector3::VecFloatRefZ Z();

	// quaternion.h:152
	const Vector3Plus::VecFloatRefW W() const;

	// quaternion.h:153
	Vector3Plus::VecFloatRefW W();

}

