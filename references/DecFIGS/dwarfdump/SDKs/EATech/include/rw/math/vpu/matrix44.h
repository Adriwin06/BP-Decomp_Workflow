// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// matrix44.h:148
		using namespace vpu;

	}

}

// matrix44.h:26
struct rw::math::vpu::Matrix44 {
	// matrix44.h:140
	Vector4 xAxis;

	// matrix44.h:141
	Vector4 yAxis;

	// matrix44.h:142
	Vector4 zAxis;

	// matrix44.h:143
	Vector4 wAxis;

public:
	// matrix44.h:47
	void Matrix44();

	// matrix44.h:48
	void Matrix44(const rw::math::vpu::Matrix44 &);

	// matrix44.h:49
	void Matrix44(const rw::math::vpu::Matrix44Affine &);

	// matrix44.h:50
	void Matrix44(const rw::math::vpu::Matrix44AffinePacked &);

	// matrix44.h:51
	void Matrix44(Vector4, Vector4, Vector4, Vector4);

	// matrix44.h:52
	void Matrix44(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam);

	// matrix44.h:54
	void Matrix44(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44.h:59
	void Matrix44(const float *);

	// matrix44.h:61
	Matrix44 & operator=(const rw::math::vpu::Matrix44 &);

	// matrix44.h:63
	void SetZero();

	// matrix44.h:64
	void SetIdentity();

	// matrix44.h:66
	void Set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44.h:68
	void Set(Vector4, Vector4, Vector4, Vector4);

	// matrix44.h:70
	VecFloatRefIndex GetElem(int);

	// matrix44.h:71
	const rw::math::vpu::VecFloatRefIndex GetElem(int) const;

	// matrix44.h:73
	VecFloatRefIndex GetElem(int, int);

	// matrix44.h:74
	const rw::math::vpu::VecFloatRefIndex GetElem(int, int) const;

	// matrix44.h:76
	VecFloatRefIndex operator()(int, int);

	// matrix44.h:77
	const rw::math::vpu::VecFloatRefIndex operator()(int, int) const;

	// matrix44.h:79
	Vector4 & GetRow(int);

	// matrix44.h:80
	const rw::math::vpu::Vector4 & GetRow(int) const;

	// matrix44.h:83
	Vector4 & GetX();

	// matrix44.h:84
	Vector4 & GetY();

	// matrix44.h:85
	Vector4 & GetZ();

	// matrix44.h:86
	Vector4 & GetW();

	// matrix44.h:89
	const rw::math::vpu::Vector4 & GetX() const;

	// matrix44.h:90
	const rw::math::vpu::Vector4 & GetY() const;

	// matrix44.h:91
	const rw::math::vpu::Vector4 & GetZ() const;

	// matrix44.h:92
	const rw::math::vpu::Vector4 & GetW() const;

	// matrix44.h:94
	Vector4 & XAxis();

	// matrix44.h:95
	Vector4 & YAxis();

	// matrix44.h:96
	Vector4 & ZAxis();

	// matrix44.h:97
	Vector4 & WAxis();

	// matrix44.h:99
	const rw::math::vpu::Vector4 & XAxis() const;

	// matrix44.h:100
	const rw::math::vpu::Vector4 & YAxis() const;

	// matrix44.h:101
	const rw::math::vpu::Vector4 & ZAxis() const;

	// matrix44.h:102
	const rw::math::vpu::Vector4 & WAxis() const;

	// matrix44.h:104
	Vector4 & Right();

	// matrix44.h:105
	Vector4 & Up();

	// matrix44.h:106
	Vector4 & At();

	// matrix44.h:107
	Vector4 & Pos();

	// matrix44.h:108
	const rw::math::vpu::Vector4 & Right() const;

	// matrix44.h:109
	const rw::math::vpu::Vector4 & Up() const;

	// matrix44.h:110
	const rw::math::vpu::Vector4 & At() const;

	// matrix44.h:111
	const rw::math::vpu::Vector4 & Pos() const;

	// matrix44.h:113
	Vector4 GetXColumn() const;

	// matrix44.h:114
	Vector4 GetYColumn() const;

	// matrix44.h:115
	Vector4 GetZColumn() const;

	// matrix44.h:116
	Vector4 GetWColumn() const;

	// matrix44.h:118
	void SetXColumn(Vector4);

	// matrix44.h:119
	void SetYColumn(Vector4);

	// matrix44.h:120
	void SetZColumn(Vector4);

	// matrix44.h:121
	void SetWColumn(Vector4);

	// matrix44.h:123
	void SetElem(int, VecFloat);

	// matrix44.h:126
	void SetElem(int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix44.h:129
	void SetElem(int, int, VecFloat);

	// matrix44.h:130
	void SetElem(int, int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix44.h:133
	void SetRow(int, Vector4);

	// matrix44.h:135
	void SetX(Vector4);

	// matrix44.h:136
	void SetY(Vector4);

	// matrix44.h:137
	void SetZ(Vector4);

	// matrix44.h:138
	void SetW(Vector4);

}

