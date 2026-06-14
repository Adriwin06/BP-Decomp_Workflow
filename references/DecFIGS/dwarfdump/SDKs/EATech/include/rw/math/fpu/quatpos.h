// quatpos.h:18
struct rw::math::fpu::QuatPosTemplate<double> {
	// quatpos.h:116
	QuaternionTemplate<double> quat;

	// quatpos.h:117
	Vector3Template<double> pos;

public:
	// quatpos.h:38
	void QuatPosTemplate(const QuatPosTemplate<float> &);

	// quatpos.h:44
	void QuatPosTemplate(const rw::math::fpu::QuatPosTemplate<double> &);

	// quatpos.h:50
	void QuatPosTemplate(const rw::math::vpu::QuatPos &);

	// quatpos.h:52
	void QuatPosTemplate();

	// quatpos.h:56
	void QuatPosTemplate(const rw::math::fpu::QuaternionTemplate<double> &, const rw::math::fpu::Vector3Template<double> &);

	// quatpos.h:62
	void QuatPosTemplate(double, double, double, double, double, double, double);

	// quatpos.h:68
	void QuatPosTemplate(double *);

	// quatpos.h:74
	void Set(double, double, double, double, double, double, double);

	// quatpos.h:80
	void SetQuaternion(const rw::math::fpu::QuaternionTemplate<double> &);

	// quatpos.h:85
	void SetPos(const rw::math::fpu::Vector3Template<double> &);

	// quatpos.h:90
	void SetZero();

	// quatpos.h:92
	void SetIdentity();

	// quatpos.h:94
	QuaternionTemplate<double> & GetQuaternion();

	// quatpos.h:99
	const rw::math::fpu::QuaternionTemplate<double> & GetQuaternion() const;

	// quatpos.h:104
	Vector3Template<double> GetPos();

	// quatpos.h:109
	const rw::math::fpu::Vector3Template<double> GetPos() const;

}

