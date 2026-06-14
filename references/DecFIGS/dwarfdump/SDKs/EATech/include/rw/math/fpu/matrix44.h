// matrix44.h:17
struct rw::math::fpu::Matrix44Template<double> {
	// matrix44.h:331
	Vector4Template<double> xAxis;

	// matrix44.h:332
	Vector4Template<double> yAxis;

	// matrix44.h:333
	Vector4Template<double> zAxis;

	// matrix44.h:334
	Vector4Template<double> wAxis;

public:
	// matrix44.h:41
	void Set(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

	// matrix44.h:53
	void Set(const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:62
	void Matrix44Template(const Matrix44Template<float> &);

	// matrix44.h:84
	void Matrix44Template(const rw::math::fpu::Matrix44Template<double> &);

	// matrix44.h:111
	void Matrix44Template(const rw::math::vpu::Matrix44 &);

	// matrix44.h:113
	void Matrix44Template();

	// matrix44.h:119
	void Matrix44Template(const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &, const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:130
	void Matrix44Template(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double);

	// matrix44.h:137
	void Matrix44Template(const double *);

	// matrix44.h:143
	Matrix44Template<double> & operator=(const rw::math::fpu::Matrix44Template<double> &);

	// matrix44.h:152
	void SetZero();

	// matrix44.h:161
	void SetIdentity();

	// matrix44.h:170
	double & GetElem(int);

	// matrix44.h:177
	const double & GetElem(int) const;

	// matrix44.h:183
	double & GetElem(int, int);

	// matrix44.h:190
	const double & GetElem(int, int) const;

	// matrix44.h:196
	double & operator()(int, int);

	// matrix44.h:203
	const double & operator()(int, int) const;

	// matrix44.h:210
	Vector4Template<double> & GetRow(int);

	// matrix44.h:216
	const rw::math::fpu::Vector4Template<double> & GetRow(int) const;

	// matrix44.h:222
	Vector4Template<double> & GetX();

	// matrix44.h:223
	Vector4Template<double> & GetY();

	// matrix44.h:224
	Vector4Template<double> & GetZ();

	// matrix44.h:225
	Vector4Template<double> & GetW();

	// matrix44.h:227
	const rw::math::fpu::Vector4Template<double> & GetX() const;

	// matrix44.h:228
	const rw::math::fpu::Vector4Template<double> & GetY() const;

	// matrix44.h:229
	const rw::math::fpu::Vector4Template<double> & GetZ() const;

	// matrix44.h:230
	const rw::math::fpu::Vector4Template<double> & GetW() const;

	// matrix44.h:232
	Vector4Template<double> & XAxis();

	// matrix44.h:233
	Vector4Template<double> & YAxis();

	// matrix44.h:234
	Vector4Template<double> & ZAxis();

	// matrix44.h:235
	Vector4Template<double> & WAxis();

	// matrix44.h:237
	const rw::math::fpu::Vector4Template<double> & XAxis() const;

	// matrix44.h:238
	const rw::math::fpu::Vector4Template<double> & YAxis() const;

	// matrix44.h:239
	const rw::math::fpu::Vector4Template<double> & ZAxis() const;

	// matrix44.h:240
	const rw::math::fpu::Vector4Template<double> & WAxis() const;

	// matrix44.h:242
	Vector4Template<double> & Right();

	// matrix44.h:243
	Vector4Template<double> & Up();

	// matrix44.h:244
	Vector4Template<double> & At();

	// matrix44.h:245
	Vector4Template<double> & Pos();

	// matrix44.h:247
	const rw::math::fpu::Vector4Template<double> & Right() const;

	// matrix44.h:248
	const rw::math::fpu::Vector4Template<double> & Up() const;

	// matrix44.h:249
	const rw::math::fpu::Vector4Template<double> & At() const;

	// matrix44.h:250
	const rw::math::fpu::Vector4Template<double> & Pos() const;

	// matrix44.h:252
	Vector4Template<double> GetXColumn() const;

	// matrix44.h:257
	Vector4Template<double> GetYColumn() const;

	// matrix44.h:262
	Vector4Template<double> GetZColumn() const;

	// matrix44.h:267
	Vector4Template<double> GetWColumn() const;

	// matrix44.h:272
	void SetXColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:280
	void SetYColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:288
	void SetZColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:296
	void SetWColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:304
	void SetElem(int, double);

	// matrix44.h:311
	void SetElem(int, int, double);

	// matrix44.h:318
	void SetRow(int, const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:324
	void SetX(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:325
	void SetY(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:326
	void SetZ(const rw::math::fpu::Vector4Template<double> &);

	// matrix44.h:327
	void SetW(const rw::math::fpu::Vector4Template<double> &);

}

