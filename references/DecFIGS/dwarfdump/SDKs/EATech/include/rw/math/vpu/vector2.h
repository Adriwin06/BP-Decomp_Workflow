// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector2.h:135
		using vpu::Vector2;

	}

}

// vector2.h:23
struct rw::math::vpu::Vector2 {
	// vector2.h:130
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// vector2.h:45
	void Vector2();

	// vector2.h:48
	void Vector2(VecFloat);

	// vector2.h:49
	void Vector2(float, float);

	// vector2.h:53
	void Vector2(const float *);

	// vector2.h:54
	void Vector2(VectorIntrinsicInParam);

	// vector2.h:55
	void Vector2(VecFloat, VecFloat);

	// vector2.h:56
	void Vector2(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector2.h:65
	Vector2 & operator=(VectorIntrinsicInParam);

	// vector2.h:66
	VectorIntrinsicUnion::VectorIntrinsic & operator float __vector__&();

	// vector2.h:67
	const VectorIntrinsicUnion::VectorIntrinsic & operator const float __vector__&() const;

	// vector2.h:70
	VectorIntrinsicUnion::VectorIntrinsic & GetVector();

	// vector2.h:71
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vector2.h:73
	void SetVector(VectorIntrinsicInParam);

	// vector2.h:77
	void Set(float, float);

	// vector2.h:78
	void Set(VecFloat, VecFloat);

	// vector2.h:79
	void Set(const rw::math::vpu::VecFloatRefIndex &, const rw::math::vpu::VecFloatRefIndex &);

	// vector2.h:83
	void SetComponent(int, float);

	// vector2.h:84
	void SetComponent(int, VecFloat);

	// vector2.h:85
	void SetComponent(int, const rw::math::vpu::VecFloatRefIndex &);

	// vector2.h:89
	void SetX(float);

	// vector2.h:90
	void SetX(VecFloat);

	// vector2.h:91
	void SetX(const rw::math::vpu::VecFloatRefIndex &);

	// vector2.h:95
	void SetY(float);

	// vector2.h:96
	void SetY(VecFloat);

	// vector2.h:97
	void SetY(const rw::math::vpu::VecFloatRefIndex &);

	// vector2.h:99
	void SetZero();

	// vector2.h:101
	VecFloatRefIndex GetComponent(int);

	// vector2.h:102
	const rw::math::vpu::VecFloatRefIndex GetComponent(int) const;

	// vector2.h:103
	VecFloatRefIndex operator[](int);

	// vector2.h:104
	const rw::math::vpu::VecFloatRefIndex operator[](int) const;

	// Unknown accessibility
	// vec_float.h:25
	typedef VecFloatRef<VectorAxisX> VecFloatRefX;

	// vector2.h:117
	const Vector2::VecFloatRefX GetX() const;

	// vector2.h:118
	Vector2::VecFloatRefX GetX();

	// Unknown accessibility
	// vec_float.h:26
	typedef VecFloatRef<VectorAxisY> VecFloatRefY;

	// vector2.h:119
	const Vector2::VecFloatRefY GetY() const;

	// vector2.h:120
	Vector2::VecFloatRefY GetY();

	// vector2.h:122
	const Vector2::VecFloatRefX X() const;

	// vector2.h:123
	Vector2::VecFloatRefX X();

	// vector2.h:124
	const Vector2::VecFloatRefY Y() const;

	// vector2.h:125
	Vector2::VecFloatRefY Y();

}

// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// vector2.h:135
		using vpu::Vector2;

	}

	// vector2.h:145
	extern void EndianSwap(Vector2 &);

}

