// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// matrix44affine.h:160
		using namespace vpu;

	}

}

// matrix44affine.h:40
struct rw::math::vpu::Matrix44Affine {
	// matrix44affine.h:152
	Vector3 xAxis;

	// matrix44affine.h:153
	Vector3 yAxis;

	// matrix44affine.h:154
	Vector3 zAxis;

	// matrix44affine.h:155
	Vector3 wAxis;

public:
	// matrix44affine.h:61
	void Matrix44Affine();

	// matrix44affine.h:62
	void Matrix44Affine(const rw::math::vpu::Matrix44 &);

	// matrix44affine.h:63
	void Matrix44Affine(const rw::math::vpu::Matrix44Affine &);

	// matrix44affine.h:64
	void Matrix44Affine(Vector3, Vector3, Vector3, Vector3);

	// matrix44affine.h:65
	void Matrix44Affine(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam);

	// matrix44affine.h:67
	void Matrix44Affine(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affine.h:71
	void Matrix44Affine(const float *);

	// matrix44affine.h:72
	void Matrix44Affine(Quaternion, Vector3);

	// matrix44affine.h:73
	void Matrix44Affine(const rw::math::vpu::Matrix44AffinePacked &);

	// matrix44affine.h:74
	Matrix44Affine & operator=(const rw::math::vpu::Matrix44Affine &);

	// matrix44affine.h:76
	void SetZero();

	// matrix44affine.h:77
	void SetIdentity();

	// matrix44affine.h:80
	void Set(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affine.h:82
	void Set(Vector3, Vector3, Vector3, Vector3);

	// matrix44affine.h:86
	void SetElem(int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix44affine.h:87
	void SetElem(int, VecFloat);

	// matrix44affine.h:91
	void SetElem(int, int, VecFloat);

	// matrix44affine.h:92
	void SetElem(int, int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix44affine.h:94
	void SetRow(int, Vector3);

	// matrix44affine.h:95
	void SetX(Vector3);

	// matrix44affine.h:96
	void SetY(Vector3);

	// matrix44affine.h:97
	void SetZ(Vector3);

	// matrix44affine.h:98
	void SetW(Vector3);

	// matrix44affine.h:100
	VecFloatRefIndex GetElem(int);

	// matrix44affine.h:101
	const rw::math::vpu::VecFloatRefIndex GetElem(int) const;

	// matrix44affine.h:103
	VecFloatRefIndex GetElem(int, int);

	// matrix44affine.h:104
	const rw::math::vpu::VecFloatRefIndex GetElem(int, int) const;

	// matrix44affine.h:106
	VecFloatRefIndex operator()(int, int);

	// matrix44affine.h:107
	const rw::math::vpu::VecFloatRefIndex operator()(int, int) const;

	// matrix44affine.h:109
	Vector3 & GetRow(int);

	// matrix44affine.h:110
	const rw::math::vpu::Vector3 & GetRow(int) const;

	// matrix44affine.h:112
	Vector3 & GetX();

	// matrix44affine.h:113
	Vector3 & GetY();

	// matrix44affine.h:114
	Vector3 & GetZ();

	// matrix44affine.h:115
	Vector3 & GetW();

	// matrix44affine.h:117
	const rw::math::vpu::Vector3 & GetX() const;

	// matrix44affine.h:118
	const rw::math::vpu::Vector3 & GetY() const;

	// matrix44affine.h:119
	const rw::math::vpu::Vector3 & GetZ() const;

	// matrix44affine.h:120
	const rw::math::vpu::Vector3 & GetW() const;

	// matrix44affine.h:122
	Vector3 & XAxis();

	// matrix44affine.h:123
	Vector3 & YAxis();

	// matrix44affine.h:124
	Vector3 & ZAxis();

	// matrix44affine.h:125
	Vector3 & WAxis();

	// matrix44affine.h:127
	const rw::math::vpu::Vector3 & XAxis() const;

	// matrix44affine.h:128
	const rw::math::vpu::Vector3 & YAxis() const;

	// matrix44affine.h:129
	const rw::math::vpu::Vector3 & ZAxis() const;

	// matrix44affine.h:130
	const rw::math::vpu::Vector3 & WAxis() const;

	// matrix44affine.h:132
	Vector3 & Right();

	// matrix44affine.h:133
	Vector3 & Up();

	// matrix44affine.h:134
	Vector3 & At();

	// matrix44affine.h:135
	Vector3 & Pos();

	// matrix44affine.h:137
	const rw::math::vpu::Vector3 & Right() const;

	// matrix44affine.h:138
	const rw::math::vpu::Vector3 & Up() const;

	// matrix44affine.h:139
	const rw::math::vpu::Vector3 & At() const;

	// matrix44affine.h:140
	const rw::math::vpu::Vector3 & Pos() const;

	// matrix44affine.h:142
	Vector4 GetXColumn() const;

	// matrix44affine.h:143
	Vector4 GetYColumn() const;

	// matrix44affine.h:144
	Vector4 GetZColumn() const;

	// matrix44affine.h:146
	void SetXColumn(Vector4);

	// matrix44affine.h:147
	void SetYColumn(Vector4);

	// matrix44affine.h:148
	void SetZColumn(Vector4);

}

