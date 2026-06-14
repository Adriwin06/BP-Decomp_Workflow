// vector2.h:16
struct rw::math::fpu::Vector2Template<double> {
	// vector2.h:119
	double x;

	// vector2.h:120
	double y;

public:
	// vector2.h:38
	void Vector2Template(const Vector2Template<float> &);

	// vector2.h:44
	void Vector2Template(const rw::math::fpu::Vector2Template<double> &);

	// vector2.h:50
	void Vector2Template(const rw::math::vpu::Vector2 &);

	// vector2.h:53
	void Vector2Template(double);

	// vector2.h:59
	void Vector2Template(double, double);

	// vector2.h:65
	void Vector2Template(const double *);

	// vector2.h:71
	void Vector2Template();

	// vector2.h:75
	Vector2Template<double> & operator=(const rw::math::fpu::Vector2Template<double> &);

	// vector2.h:82
	void Set(double, double);

	// vector2.h:88
	void SetComponent(int, double);

	// vector2.h:90
	void SetX(double);

	// vector2.h:94
	void SetY(double);

	// vector2.h:99
	void SetZero();

	// vector2.h:101
	const double & GetX() const;

	// vector2.h:102
	const double & GetY() const;

	// vector2.h:103
	double & GetX();

	// vector2.h:104
	double & GetY();

	// vector2.h:106
	const double & X() const;

	// vector2.h:107
	const double & Y() const;

	// vector2.h:108
	double & X();

	// vector2.h:109
	double & Y();

	// vector2.h:111
	double & GetComponent(int);

	// vector2.h:112
	const double & GetComponent(int) const;

	// vector2.h:114
	double & operator[](int);

	// vector2.h:115
	const double & operator[](int) const;

}

// vector2.h:124
typedef Vector2Template<float> Vector2_32;

// vector2.h:125
typedef Vector2Template<double> Vector2_64;

// vector2.h:131
typedef Vector2Template<double> Vector2U_64;

// importnamespaces.h:8
namespace rw {
	// vector2.h:143
	extern void EndianSwap<float>(Vector2Template<float> &);

}

// vector2.h:129
typedef Vector2Template<float> Vector2U_32;

