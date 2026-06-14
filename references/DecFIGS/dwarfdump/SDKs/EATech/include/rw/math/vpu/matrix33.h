// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// matrix33.h:138
		using namespace vpu;

	}

}

// matrix33.h:26
struct rw::math::vpu::Matrix33 {
	// matrix33.h:131
	Vector3 xAxis;

	// matrix33.h:132
	Vector3 yAxis;

	// matrix33.h:133
	Vector3 zAxis;

public:
	// matrix33.h:48
	void Matrix33();

	// matrix33.h:49
	void Matrix33(const rw::math::vpu::Matrix33 &);

	// matrix33.h:50
	void Matrix33(Vector3, Vector3, Vector3);

	// matrix33.h:51
	void Matrix33(VectorIntrinsicInParam, VectorIntrinsicInParam, VectorIntrinsicInParam);

	// matrix33.h:54
	void Matrix33(const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &, const float &);

	// matrix33.h:58
	void Matrix33(const float *);

	// matrix33.h:60
	Matrix33 & operator=(const rw::math::vpu::Matrix33 &);

	// matrix33.h:62
	void SetZero();

	// matrix33.h:63
	void SetIdentity();

	// matrix33.h:67
	void Set(float, float, float, float, float, float, float, float, float);

	// matrix33.h:69
	void Set(Vector3, Vector3, Vector3);

	// matrix33.h:71
	VecFloatRefIndex GetElem(int);

	// matrix33.h:72
	const rw::math::vpu::VecFloatRefIndex GetElem(int) const;

	// matrix33.h:73
	VecFloatRefIndex GetElem(int, int);

	// matrix33.h:74
	const rw::math::vpu::VecFloatRefIndex GetElem(int, int) const;

	// matrix33.h:76
	VecFloatRefIndex operator()(int, int);

	// matrix33.h:77
	const rw::math::vpu::VecFloatRefIndex operator()(int, int) const;

	// matrix33.h:79
	Vector3 & GetRow(int);

	// matrix33.h:80
	const rw::math::vpu::Vector3 & GetRow(int) const;

	// matrix33.h:82
	Vector3 & GetX();

	// matrix33.h:83
	Vector3 & GetY();

	// matrix33.h:84
	Vector3 & GetZ();

	// matrix33.h:86
	const rw::math::vpu::Vector3 & GetX() const;

	// matrix33.h:87
	const rw::math::vpu::Vector3 & GetY() const;

	// matrix33.h:88
	const rw::math::vpu::Vector3 & GetZ() const;

	// matrix33.h:90
	Vector3 & XAxis();

	// matrix33.h:91
	Vector3 & YAxis();

	// matrix33.h:92
	Vector3 & ZAxis();

	// matrix33.h:94
	const rw::math::vpu::Vector3 & XAxis() const;

	// matrix33.h:95
	const rw::math::vpu::Vector3 & YAxis() const;

	// matrix33.h:96
	const rw::math::vpu::Vector3 & ZAxis() const;

	// matrix33.h:98
	Vector3 & Right();

	// matrix33.h:99
	Vector3 & Up();

	// matrix33.h:100
	Vector3 & At();

	// matrix33.h:102
	const rw::math::vpu::Vector3 & Right() const;

	// matrix33.h:103
	const rw::math::vpu::Vector3 & Up() const;

	// matrix33.h:104
	const rw::math::vpu::Vector3 & At() const;

	// matrix33.h:106
	Vector3 GetXColumn() const;

	// matrix33.h:107
	Vector3 GetYColumn() const;

	// matrix33.h:108
	Vector3 GetZColumn() const;

	// matrix33.h:110
	void SetXColumn(Vector3);

	// matrix33.h:111
	void SetYColumn(Vector3);

	// matrix33.h:112
	void SetZColumn(Vector3);

	// matrix33.h:114
	void SetElem(int, float);

	// matrix33.h:115
	void SetElem(int, VecFloat);

	// matrix33.h:117
	void SetElem(int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix33.h:118
	void SetElem(int, int, VecFloat);

	// matrix33.h:119
	void SetElem(int, int, float);

	// matrix33.h:121
	void SetElem(int, int, const rw::math::vpu::VecFloatRefIndex &);

	// matrix33.h:123
	void SetRow(int, Vector3);

	// matrix33.h:125
	void SetX(Vector3);

	// matrix33.h:126
	void SetY(Vector3);

	// matrix33.h:127
	void SetZ(Vector3);

}

