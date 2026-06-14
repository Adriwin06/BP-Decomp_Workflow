// vector3.h:16
struct rw::math::fpu::Vector3Template<double> {
	// vector3.h:120
	double x;

	// vector3.h:121
	double y;

	// vector3.h:122
	double z;

public:
	// vector3.h:38
	void Vector3Template(const Vector3Template<float> &);

	// vector3.h:45
	void Vector3Template(const rw::math::fpu::Vector3Template<double> &);

	// vector3.h:52
	void Vector3Template(const rw::math::vpu::Vector3 &);

	// vector3.h:55
	void Vector3Template(double);

	// vector3.h:62
	void Vector3Template(double, double, double);

	// vector3.h:69
	Vector3Template<double> & operator=(const rw::math::fpu::Vector3Template<double> &);

	// vector3.h:77
	void Vector3Template(const double *);

	// vector3.h:84
	void Vector3Template();

	// vector3.h:88
	void Set(double, double, double);

	// vector3.h:90
	void SetComponent(int, double);

	// vector3.h:92
	void SetX(double);

	// vector3.h:93
	void SetY(double);

	// vector3.h:94
	void SetZ(double);

	// vector3.h:96
	void SetZero();

	// vector3.h:98
	const double & GetX() const;

	// vector3.h:99
	const double & GetY() const;

	// vector3.h:100
	const double & GetZ() const;

	// vector3.h:101
	double & GetX();

	// vector3.h:102
	double & GetY();

	// vector3.h:103
	double & GetZ();

	// vector3.h:105
	const double & X() const;

	// vector3.h:106
	const double & Y() const;

	// vector3.h:107
	const double & Z() const;

	// vector3.h:108
	double & X();

	// vector3.h:109
	double & Y();

	// vector3.h:110
	double & Z();

	// vector3.h:112
	double & GetComponent(int);

	// vector3.h:113
	const double & GetComponent(int) const;

	// vector3.h:115
	double & operator[](int);

	// vector3.h:116
	const double & operator[](int) const;

}

// vector3.h:126
typedef Vector3Template<float> Vector3_32;

// vector3.h:127
typedef Vector3Template<double> Vector3_64;

// vector3.h:133
typedef Vector3Template<double> Vector3U_64;

// vector3.h:131
typedef Vector3Template<float> Vector3U_32;

// importnamespaces.h:8
namespace rw {
	// vector3.h:145
	extern void EndianSwap<float>(Vector3Template<float> &);

}

