// matrix33.h:16
struct rw::math::fpu::Matrix33Template<double> {
	// matrix33.h:272
	Vector3Template<double> xAxis;

	// matrix33.h:273
	Vector3Template<double> yAxis;

	// matrix33.h:274
	Vector3Template<double> zAxis;

public:
	// matrix33.h:39
	void Set(double, double, double, double, double, double, double, double, double);

	// matrix33.h:47
	void Set(const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:55
	void Matrix33Template(const Matrix33Template<float> &);

	// matrix33.h:70
	void Matrix33Template(const rw::math::fpu::Matrix33Template<double> &);

	// matrix33.h:85
	void Matrix33Template(const rw::math::vpu::Matrix33 &);

	// matrix33.h:88
	void Matrix33Template();

	// matrix33.h:93
	void Matrix33Template(double, double, double, double, double, double, double, double, double);

	// matrix33.h:99
	void Matrix33Template(const double *);

	// matrix33.h:109
	void Matrix33Template(const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:117
	void SetZero();

	// matrix33.h:125
	void SetIdentity();

	// matrix33.h:133
	double & GetElem(int);

	// matrix33.h:140
	const double & GetElem(int) const;

	// matrix33.h:146
	double & GetElem(int, int);

	// matrix33.h:153
	const double & GetElem(int, int) const;

	// matrix33.h:159
	double & operator()(int, int);

	// matrix33.h:166
	const double & operator()(int, int) const;

	// matrix33.h:173
	Vector3Template<double> & GetRow(int);

	// matrix33.h:179
	const rw::math::fpu::Vector3Template<double> & GetRow(int) const;

	// matrix33.h:185
	Vector3Template<double> & GetX();

	// matrix33.h:186
	Vector3Template<double> & GetY();

	// matrix33.h:187
	Vector3Template<double> & GetZ();

	// matrix33.h:189
	const rw::math::fpu::Vector3Template<double> & GetX() const;

	// matrix33.h:190
	const rw::math::fpu::Vector3Template<double> & GetY() const;

	// matrix33.h:191
	const rw::math::fpu::Vector3Template<double> & GetZ() const;

	// matrix33.h:193
	Vector3Template<double> & XAxis();

	// matrix33.h:194
	Vector3Template<double> & YAxis();

	// matrix33.h:195
	Vector3Template<double> & ZAxis();

	// matrix33.h:197
	const rw::math::fpu::Vector3Template<double> & XAxis() const;

	// matrix33.h:198
	const rw::math::fpu::Vector3Template<double> & YAxis() const;

	// matrix33.h:199
	const rw::math::fpu::Vector3Template<double> & ZAxis() const;

	// matrix33.h:201
	Vector3Template<double> & Right();

	// matrix33.h:202
	Vector3Template<double> & Up();

	// matrix33.h:203
	Vector3Template<double> & At();

	// matrix33.h:205
	const rw::math::fpu::Vector3Template<double> & Right() const;

	// matrix33.h:206
	const rw::math::fpu::Vector3Template<double> & Up() const;

	// matrix33.h:207
	const rw::math::fpu::Vector3Template<double> & At() const;

	// matrix33.h:209
	Vector3Template<double> GetXColumn() const;

	// matrix33.h:214
	Vector3Template<double> GetYColumn() const;

	// matrix33.h:219
	Vector3Template<double> GetZColumn() const;

	// matrix33.h:224
	void SetXColumn(const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:231
	void SetYColumn(const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:238
	void SetZColumn(const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:245
	void SetElem(int, double);

	// matrix33.h:252
	void SetElem(int, int, double);

	// matrix33.h:259
	void SetRow(int, const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:265
	void SetX(const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:266
	void SetY(const rw::math::fpu::Vector3Template<double> &);

	// matrix33.h:267
	void SetZ(const rw::math::fpu::Vector3Template<double> &);

}

