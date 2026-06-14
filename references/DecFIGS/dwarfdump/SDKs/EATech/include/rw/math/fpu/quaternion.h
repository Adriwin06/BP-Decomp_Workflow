// quaternion.h:16
struct rw::math::fpu::QuaternionTemplate<double> {
	// quaternion.h:127
	double x;

	// quaternion.h:128
	double y;

	// quaternion.h:129
	double z;

	// quaternion.h:130
	double w;

public:
	// quaternion.h:36
	void QuaternionTemplate(const QuaternionTemplate<float> &);

	// quaternion.h:44
	void QuaternionTemplate(const rw::math::fpu::QuaternionTemplate<double> &);

	// quaternion.h:52
	void QuaternionTemplate(const rw::math::vpu::Quaternion &);

	// quaternion.h:54
	void QuaternionTemplate(double, double, double, double);

	// quaternion.h:62
	void QuaternionTemplate(const double *);

	// quaternion.h:70
	void QuaternionTemplate();

	// quaternion.h:74
	QuaternionTemplate<double> & operator=(const rw::math::fpu::QuaternionTemplate<double> &);

	// quaternion.h:83
	void Set(double, double, double, double);

	// quaternion.h:91
	void SetComponent(int, const double &);

	// quaternion.h:93
	void SetX(double);

	// quaternion.h:94
	void SetY(double);

	// quaternion.h:95
	void SetZ(double);

	// quaternion.h:96
	void SetW(double);

	// quaternion.h:98
	void SetZero();

	// quaternion.h:100
	void SetIdentity();

	// quaternion.h:102
	double GetX() const;

	// quaternion.h:103
	double GetY() const;

	// quaternion.h:104
	double GetZ() const;

	// quaternion.h:105
	double GetW() const;

	// quaternion.h:106
	double & GetX();

	// quaternion.h:107
	double & GetY();

	// quaternion.h:108
	double & GetZ();

	// quaternion.h:109
	double & GetW();

	// quaternion.h:111
	const double & X() const;

	// quaternion.h:112
	const double & Y() const;

	// quaternion.h:113
	const double & Z() const;

	// quaternion.h:114
	const double & W() const;

	// quaternion.h:115
	double & X();

	// quaternion.h:116
	double & Y();

	// quaternion.h:117
	double & Z();

	// quaternion.h:118
	double & W();

	// quaternion.h:120
	double & GetComponent(int);

	// quaternion.h:121
	const double & GetComponent(int) const;

	// quaternion.h:122
	double & operator[](int);

	// quaternion.h:123
	const double & operator[](int) const;

}

