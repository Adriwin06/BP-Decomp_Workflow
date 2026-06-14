// vector4.h:17
struct rw::math::fpu::Vector4Template<double> {
	// vector4.h:146
	double x;

	// vector4.h:147
	double y;

	// vector4.h:148
	double z;

	// vector4.h:149
	double w;

public:
	// vector4.h:39
	void Vector4Template(const Vector4Template<float> &);

	// vector4.h:47
	void Vector4Template(const rw::math::fpu::Vector4Template<double> &);

	// vector4.h:55
	void Vector4Template(const rw::math::vpu::Vector4 &);

	// vector4.h:57
	void Vector4Template(const rw::math::fpu::Vector3Template<double> &, double);

	// vector4.h:66
	void Vector4Template(double);

	// vector4.h:74
	void Vector4Template(double, double, double, double);

	// vector4.h:82
	void Vector4Template(const double *);

	// vector4.h:90
	void Vector4Template();

	// vector4.h:94
	Vector4Template<double> & operator=(const rw::math::fpu::Vector4Template<double> &);

	// vector4.h:103
	void Set(double, double, double, double);

	// vector4.h:111
	void SetComponent(int, double);

	// vector4.h:113
	void SetX(double);

	// vector4.h:114
	void SetY(double);

	// vector4.h:115
	void SetZ(double);

	// vector4.h:116
	void SetW(double);

	// vector4.h:118
	void SetZero();

	// vector4.h:120
	const double & GetX() const;

	// vector4.h:121
	const double & GetY() const;

	// vector4.h:122
	const double & GetZ() const;

	// vector4.h:123
	const double & GetW() const;

	// vector4.h:124
	double & GetX();

	// vector4.h:125
	double & GetY();

	// vector4.h:126
	double & GetZ();

	// vector4.h:127
	double & GetW();

	// vector4.h:129
	const double & X() const;

	// vector4.h:130
	const double & Y() const;

	// vector4.h:131
	const double & Z() const;

	// vector4.h:132
	const double & W() const;

	// vector4.h:133
	double & X();

	// vector4.h:134
	double & Y();

	// vector4.h:135
	double & Z();

	// vector4.h:136
	double & W();

	// vector4.h:138
	double & GetComponent(int);

	// vector4.h:139
	const double & GetComponent(int) const;

	// vector4.h:141
	double & operator[](int);

	// vector4.h:142
	const double & operator[](int) const;

}

// vector4.h:153
typedef Vector4Template<float> Vector4_32;

// vector4.h:154
typedef Vector4Template<double> Vector4_64;

// vector4.h:160
typedef Vector4Template<double> Vector4U_64;

// vector4.h:158
typedef Vector4Template<float> Vector4U_32;

