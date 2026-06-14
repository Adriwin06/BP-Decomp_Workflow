// matrix44affine.h:26
struct rw::math::fpu::Matrix44AffineTemplate<double> {
	// matrix44affine.h:342
	Vector3Template<double> xAxis;

	// matrix44affine.h:343
	Vector3Template<double> yAxis;

	// matrix44affine.h:344
	Vector3Template<double> zAxis;

	// matrix44affine.h:345
	Vector3Template<double> wAxis;

public:
	// matrix44affine.h:50
	void Set(double, double, double, double, double, double, double, double, double, double, double, double);

	// matrix44affine.h:59
	void Set(const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:70
	void Matrix44AffineTemplate(const Matrix44AffineTemplate<float> &);

	// matrix44affine.h:88
	void Matrix44AffineTemplate(const rw::math::fpu::Matrix44AffineTemplate<double> &);

	// matrix44affine.h:108
	void Matrix44AffineTemplate(const rw::math::vpu::Matrix44Affine &);

	// matrix44affine.h:110
	void Matrix44AffineTemplate();

	// matrix44affine.h:113
	void Matrix44AffineTemplate(const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &, const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:123
	void Matrix44AffineTemplate(double, double, double, double, double, double, double, double, double, double, double, double);

	// matrix44affine.h:129
	void Matrix44AffineTemplate(const double *);

	// matrix44affine.h:137
	void Matrix44AffineTemplate(const rw::math::fpu::QuaternionTemplate<double> &, const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:160
	void SetZero();

	// matrix44affine.h:169
	void SetIdentity();

	// matrix44affine.h:178
	double & GetElem(int);

	// matrix44affine.h:186
	const double & GetElem(int) const;

	// matrix44affine.h:192
	double & GetElem(int, int);

	// matrix44affine.h:200
	const double & GetElem(int, int) const;

	// matrix44affine.h:206
	double & operator()(int, int);

	// matrix44affine.h:212
	const double & operator()(int, int) const;

	// matrix44affine.h:218
	Vector3Template<double> & GetRow(int);

	// matrix44affine.h:224
	const rw::math::fpu::Vector3Template<double> & GetRow(int) const;

	// matrix44affine.h:229
	Vector3Template<double> & GetX();

	// matrix44affine.h:230
	Vector3Template<double> & GetY();

	// matrix44affine.h:231
	Vector3Template<double> & GetZ();

	// matrix44affine.h:232
	Vector3Template<double> & GetW();

	// matrix44affine.h:234
	const rw::math::fpu::Vector3Template<double> & GetX() const;

	// matrix44affine.h:235
	const rw::math::fpu::Vector3Template<double> & GetY() const;

	// matrix44affine.h:236
	const rw::math::fpu::Vector3Template<double> & GetZ() const;

	// matrix44affine.h:237
	const rw::math::fpu::Vector3Template<double> & GetW() const;

	// matrix44affine.h:239
	Vector3Template<double> & XAxis();

	// matrix44affine.h:240
	Vector3Template<double> & YAxis();

	// matrix44affine.h:241
	Vector3Template<double> & ZAxis();

	// matrix44affine.h:242
	Vector3Template<double> & WAxis();

	// matrix44affine.h:244
	const rw::math::fpu::Vector3Template<double> & XAxis() const;

	// matrix44affine.h:245
	const rw::math::fpu::Vector3Template<double> & YAxis() const;

	// matrix44affine.h:246
	const rw::math::fpu::Vector3Template<double> & ZAxis() const;

	// matrix44affine.h:247
	const rw::math::fpu::Vector3Template<double> & WAxis() const;

	// matrix44affine.h:249
	Vector3Template<double> & Right();

	// matrix44affine.h:250
	Vector3Template<double> & Up();

	// matrix44affine.h:251
	Vector3Template<double> & At();

	// matrix44affine.h:252
	Vector3Template<double> & Pos();

	// matrix44affine.h:254
	const rw::math::fpu::Vector3Template<double> & Right() const;

	// matrix44affine.h:255
	const rw::math::fpu::Vector3Template<double> & Up() const;

	// matrix44affine.h:256
	const rw::math::fpu::Vector3Template<double> & At() const;

	// matrix44affine.h:257
	const rw::math::fpu::Vector3Template<double> & Pos() const;

	// matrix44affine.h:259
	Vector4Template<double> GetXColumn() const;

	// matrix44affine.h:264
	Vector4Template<double> GetYColumn() const;

	// matrix44affine.h:269
	Vector4Template<double> GetZColumn() const;

	// matrix44affine.h:274
	void SetXColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44affine.h:282
	void SetYColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44affine.h:290
	void SetZColumn(const rw::math::fpu::Vector4Template<double> &);

	// matrix44affine.h:298
	void SetElem(int, double);

	// matrix44affine.h:305
	void SetElem(int, int, double);

	// matrix44affine.h:311
	void SetRow(int, const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:317
	void SetX(const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:323
	void SetY(const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:329
	void SetZ(const rw::math::fpu::Vector3Template<double> &);

	// matrix44affine.h:335
	void SetW(const rw::math::fpu::Vector3Template<double> &);

}

