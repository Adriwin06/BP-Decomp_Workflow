// importnamespaces.h:8
namespace rw {
	// base.h:204
	namespace math {
		// types_fwd.h:77
		using namespace vpu;

	}

}

// types_fwd.h:57
struct rw::math::vpu::VecFloatRef<VectorAxisX> {
	// vec_float.h:149
	const VectorIntrinsicUnion::VectorIntrinsic & mV;

public:
	// vec_float_type_inline.h:212
	void VecFloatRef(VectorIntrinsicUnion::VectorIntrinsic &);

	// vec_float_type_inline.h:219
	void VecFloatRef(const VecFloatRef<VectorAxisX> &);

	// vec_float_type_inline.h:228
	float GetFloat() const;

	// vec_float_type_inline.h:237
	void SetFloat(float);

	// vec_float_type_inline.h:246
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float_type_inline.h:253
	int GetIndex() const;

	// vec_float_type_inline.h:259
	VecFloatRef<VectorAxisX> & operator=(VecFloatRef<VectorAxisX>);

	// vec_float.h:114
	VecFloatRef<VectorAxisX> & operator=(rw::math::vpu::VecFloatRef<VectorAxisY>);

	// vec_float.h:115
	VecFloatRef<VectorAxisX> & operator=(rw::math::vpu::VecFloatRef<VectorAxisZ>);

	// vec_float.h:116
	VecFloatRef<VectorAxisX> & operator=(rw::math::vpu::VecFloatRef<VectorAxisW>);

	// vec_float.h:117
	VecFloatRef<VectorAxisX> & operator=(VecFloatRefIndex);

	// vec_float.h:118
	VecFloatRef<VectorAxisX> & operator=(VecFloat);

	// vec_float.h:119
	VecFloatRef<VectorAxisX> & operator=(float);

	// vec_float.h:121
	float operator float() const;

	// vec_float.h:125
	VecFloatRef<VectorAxisX> & operator+=(VecFloat);

	// vec_float.h:126
	VecFloatRef<VectorAxisX> & operator+=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:127
	VecFloatRef<VectorAxisX> & operator+=(const float &);

	// vec_float.h:131
	VecFloatRef<VectorAxisX> & operator/=(VecFloat);

	// vec_float.h:132
	VecFloatRef<VectorAxisX> & operator/=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:133
	VecFloatRef<VectorAxisX> & operator/=(const float &);

	// vec_float.h:137
	VecFloatRef<VectorAxisX> & operator-=(VecFloat);

	// vec_float.h:138
	VecFloatRef<VectorAxisX> & operator-=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:139
	VecFloatRef<VectorAxisX> & operator-=(const float &);

	// vec_float.h:143
	VecFloatRef<VectorAxisX> & operator*=(VecFloat);

	// vec_float.h:144
	VecFloatRef<VectorAxisX> & operator*=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:145
	VecFloatRef<VectorAxisX> & operator*=(const float &);

}

// types_fwd.h:57
struct rw::math::vpu::VecFloatRef<VectorAxisY> {
	// vec_float.h:149
	const VectorIntrinsicUnion::VectorIntrinsic & mV;

public:
	// vec_float_type_inline.h:212
	void VecFloatRef(VectorIntrinsicUnion::VectorIntrinsic &);

	// vec_float_type_inline.h:219
	void VecFloatRef(const VecFloatRef<VectorAxisY> &);

	// vec_float_type_inline.h:228
	float GetFloat() const;

	// vec_float_type_inline.h:237
	void SetFloat(float);

	// vec_float_type_inline.h:246
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float_type_inline.h:253
	int GetIndex() const;

	// vec_float_type_inline.h:259
	VecFloatRef<VectorAxisY> & operator=(VecFloatRef<VectorAxisX>);

	// vec_float_type_inline.h:267
	VecFloatRef<VectorAxisY> & operator=(VecFloatRef<VectorAxisY>);

	// vec_float.h:115
	VecFloatRef<VectorAxisY> & operator=(rw::math::vpu::VecFloatRef<VectorAxisZ>);

	// vec_float.h:116
	VecFloatRef<VectorAxisY> & operator=(rw::math::vpu::VecFloatRef<VectorAxisW>);

	// vec_float.h:117
	VecFloatRef<VectorAxisY> & operator=(VecFloatRefIndex);

	// vec_float.h:118
	VecFloatRef<VectorAxisY> & operator=(VecFloat);

	// vec_float.h:119
	VecFloatRef<VectorAxisY> & operator=(float);

	// vec_float.h:121
	float operator float() const;

	// vec_float.h:125
	VecFloatRef<VectorAxisY> & operator+=(VecFloat);

	// vec_float.h:126
	VecFloatRef<VectorAxisY> & operator+=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:127
	VecFloatRef<VectorAxisY> & operator+=(const float &);

	// vec_float.h:131
	VecFloatRef<VectorAxisY> & operator/=(VecFloat);

	// vec_float.h:132
	VecFloatRef<VectorAxisY> & operator/=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:133
	VecFloatRef<VectorAxisY> & operator/=(const float &);

	// vec_float.h:137
	VecFloatRef<VectorAxisY> & operator-=(VecFloat);

	// vec_float.h:138
	VecFloatRef<VectorAxisY> & operator-=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:139
	VecFloatRef<VectorAxisY> & operator-=(const float &);

	// vec_float.h:143
	VecFloatRef<VectorAxisY> & operator*=(VecFloat);

	// vec_float.h:144
	VecFloatRef<VectorAxisY> & operator*=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:145
	VecFloatRef<VectorAxisY> & operator*=(const float &);

}

// types_fwd.h:57
struct rw::math::vpu::VecFloatRef<VectorAxisZ> {
	// vec_float.h:149
	const VectorIntrinsicUnion::VectorIntrinsic & mV;

public:
	// vec_float_type_inline.h:212
	void VecFloatRef(VectorIntrinsicUnion::VectorIntrinsic &);

	// vec_float_type_inline.h:219
	void VecFloatRef(const VecFloatRef<VectorAxisZ> &);

	// vec_float_type_inline.h:228
	float GetFloat() const;

	// vec_float_type_inline.h:237
	void SetFloat(float);

	// vec_float_type_inline.h:246
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float_type_inline.h:253
	int GetIndex() const;

	// vec_float_type_inline.h:259
	VecFloatRef<VectorAxisZ> & operator=(VecFloatRef<VectorAxisX>);

	// vec_float_type_inline.h:267
	VecFloatRef<VectorAxisZ> & operator=(VecFloatRef<VectorAxisY>);

	// vec_float_type_inline.h:273
	VecFloatRef<VectorAxisZ> & operator=(VecFloatRef<VectorAxisZ>);

	// vec_float.h:116
	VecFloatRef<VectorAxisZ> & operator=(rw::math::vpu::VecFloatRef<VectorAxisW>);

	// vec_float.h:117
	VecFloatRef<VectorAxisZ> & operator=(VecFloatRefIndex);

	// vec_float.h:118
	VecFloatRef<VectorAxisZ> & operator=(VecFloat);

	// vec_float.h:119
	VecFloatRef<VectorAxisZ> & operator=(float);

	// vec_float.h:121
	float operator float() const;

	// vec_float.h:125
	VecFloatRef<VectorAxisZ> & operator+=(VecFloat);

	// vec_float.h:126
	VecFloatRef<VectorAxisZ> & operator+=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:127
	VecFloatRef<VectorAxisZ> & operator+=(const float &);

	// vec_float.h:131
	VecFloatRef<VectorAxisZ> & operator/=(VecFloat);

	// vec_float.h:132
	VecFloatRef<VectorAxisZ> & operator/=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:133
	VecFloatRef<VectorAxisZ> & operator/=(const float &);

	// vec_float.h:137
	VecFloatRef<VectorAxisZ> & operator-=(VecFloat);

	// vec_float.h:138
	VecFloatRef<VectorAxisZ> & operator-=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:139
	VecFloatRef<VectorAxisZ> & operator-=(const float &);

	// vec_float.h:143
	VecFloatRef<VectorAxisZ> & operator*=(VecFloat);

	// vec_float.h:144
	VecFloatRef<VectorAxisZ> & operator*=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:145
	VecFloatRef<VectorAxisZ> & operator*=(const float &);

}

// types_fwd.h:57
struct rw::math::vpu::VecFloatRef<VectorAxisW> {
	// vec_float.h:149
	const VectorIntrinsicUnion::VectorIntrinsic & mV;

public:
	// vec_float_type_inline.h:212
	void VecFloatRef(VectorIntrinsicUnion::VectorIntrinsic &);

	// vec_float_type_inline.h:219
	void VecFloatRef(const VecFloatRef<VectorAxisW> &);

	// vec_float_type_inline.h:228
	float GetFloat() const;

	// vec_float_type_inline.h:237
	void SetFloat(float);

	// vec_float_type_inline.h:246
	const VectorIntrinsicUnion::VectorIntrinsic & GetVector() const;

	// vec_float_type_inline.h:253
	int GetIndex() const;

	// vec_float_type_inline.h:259
	VecFloatRef<VectorAxisW> & operator=(VecFloatRef<VectorAxisX>);

	// vec_float_type_inline.h:267
	VecFloatRef<VectorAxisW> & operator=(VecFloatRef<VectorAxisY>);

	// vec_float_type_inline.h:273
	VecFloatRef<VectorAxisW> & operator=(VecFloatRef<VectorAxisZ>);

	// vec_float_type_inline.h:279
	VecFloatRef<VectorAxisW> & operator=(VecFloatRef<VectorAxisW>);

	// vec_float.h:117
	VecFloatRef<VectorAxisW> & operator=(VecFloatRefIndex);

	// vec_float.h:118
	VecFloatRef<VectorAxisW> & operator=(VecFloat);

	// vec_float.h:119
	VecFloatRef<VectorAxisW> & operator=(float);

	// vec_float.h:121
	float operator float() const;

	// vec_float.h:125
	VecFloatRef<VectorAxisW> & operator+=(VecFloat);

	// vec_float.h:126
	VecFloatRef<VectorAxisW> & operator+=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:127
	VecFloatRef<VectorAxisW> & operator+=(const float &);

	// vec_float.h:131
	VecFloatRef<VectorAxisW> & operator/=(VecFloat);

	// vec_float.h:132
	VecFloatRef<VectorAxisW> & operator/=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:133
	VecFloatRef<VectorAxisW> & operator/=(const float &);

	// vec_float.h:137
	VecFloatRef<VectorAxisW> & operator-=(VecFloat);

	// vec_float.h:138
	VecFloatRef<VectorAxisW> & operator-=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:139
	VecFloatRef<VectorAxisW> & operator-=(const float &);

	// vec_float.h:143
	VecFloatRef<VectorAxisW> & operator*=(VecFloat);

	// vec_float.h:144
	VecFloatRef<VectorAxisW> & operator*=(const rw::math::vpu::VecFloatRefIndex &);

	// vec_float.h:145
	VecFloatRef<VectorAxisW> & operator*=(const float &);

}

// types_fwd.h:23
struct rw::math::fpu::Vector2Template<float> {
	// vector2.h:119
	float x;

	// vector2.h:120
	float y;

public:
	// vector2.h:38
	void Vector2Template(const Vector2Template<float> &);

	// vector2.h:44
	void Vector2Template(const rw::math::fpu::Vector2Template<double> &);

	// vector2.h:50
	void Vector2Template(const rw::math::vpu::Vector2 &);

	// vector2.h:53
	void Vector2Template(float);

	// vector2.h:59
	void Vector2Template(float, float);

	// vector2.h:65
	void Vector2Template(const float *);

	// vector2.h:71
	void Vector2Template();

	// vector2.h:75
	Vector2Template<float> & operator=(const Vector2Template<float> &);

	// vector2.h:82
	void Set(float, float);

	// vector2.h:88
	void SetComponent(int, float);

	// vector2.h:90
	void SetX(float);

	// vector2.h:94
	void SetY(float);

	// vector2.h:99
	void SetZero();

	// vector2.h:101
	const float & GetX() const;

	// vector2.h:102
	const float & GetY() const;

	// vector2.h:103
	float & GetX();

	// vector2.h:104
	float & GetY();

	// vector2.h:106
	const float & X() const;

	// vector2.h:107
	const float & Y() const;

	// vector2.h:108
	float & X();

	// vector2.h:109
	float & Y();

	// vector2.h:111
	float & GetComponent(int);

	// vector2.h:112
	const float & GetComponent(int) const;

	// vector2.h:114
	float & operator[](int);

	// vector2.h:115
	const float & operator[](int) const;

}

// types_fwd.h:24
struct rw::math::fpu::Vector3Template<float> {
	// vector3.h:120
	float x;

	// vector3.h:121
	float y;

	// vector3.h:122
	float z;

public:
	// vector3.h:38
	void Vector3Template(const Vector3Template<float> &);

	// vector3.h:45
	void Vector3Template(const rw::math::fpu::Vector3Template<double> &);

	// vector3.h:52
	void Vector3Template(const rw::math::vpu::Vector3 &);

	// vector3.h:55
	void Vector3Template(float);

	// vector3.h:62
	void Vector3Template(float, float, float);

	// vector3.h:69
	Vector3Template<float> & operator=(const Vector3Template<float> &);

	// vector3.h:77
	void Vector3Template(const float *);

	// vector3.h:84
	void Vector3Template();

	// vector3.h:88
	void Set(float, float, float);

	// vector3.h:90
	void SetComponent(int, float);

	// vector3.h:92
	void SetX(float);

	// vector3.h:93
	void SetY(float);

	// vector3.h:94
	void SetZ(float);

	// vector3.h:96
	void SetZero();

	// vector3.h:98
	const float & GetX() const;

	// vector3.h:99
	const float & GetY() const;

	// vector3.h:100
	const float & GetZ() const;

	// vector3.h:101
	float & GetX();

	// vector3.h:102
	float & GetY();

	// vector3.h:103
	float & GetZ();

	// vector3.h:105
	const float & X() const;

	// vector3.h:106
	const float & Y() const;

	// vector3.h:107
	const float & Z() const;

	// vector3.h:108
	float & X();

	// vector3.h:109
	float & Y();

	// vector3.h:110
	float & Z();

	// vector3.h:112
	float & GetComponent(int);

	// vector3.h:113
	const float & GetComponent(int) const;

	// vector3.h:115
	float & operator[](int);

	// vector3.h:116
	const float & operator[](int) const;

}

// types_fwd.h:25
struct rw::math::fpu::Vector4Template<float> {
	// vector4.h:146
	float x;

	// vector4.h:147
	float y;

	// vector4.h:148
	float z;

	// vector4.h:149
	float w;

public:
	// vector4.h:39
	void Vector4Template(const Vector4Template<float> &);

	// vector4.h:47
	void Vector4Template(const rw::math::fpu::Vector4Template<double> &);

	// vector4.h:55
	void Vector4Template(const rw::math::vpu::Vector4 &);

	// vector4.h:57
	void Vector4Template(const Vector3Template<float> &, float);

	// vector4.h:66
	void Vector4Template(float);

	// vector4.h:74
	void Vector4Template(float, float, float, float);

	// vector4.h:82
	void Vector4Template(const float *);

	// vector4.h:90
	void Vector4Template();

	// vector4.h:94
	Vector4Template<float> & operator=(const Vector4Template<float> &);

	// vector4.h:103
	void Set(float, float, float, float);

	// vector4.h:111
	void SetComponent(int, float);

	// vector4.h:113
	void SetX(float);

	// vector4.h:114
	void SetY(float);

	// vector4.h:115
	void SetZ(float);

	// vector4.h:116
	void SetW(float);

	// vector4.h:118
	void SetZero();

	// vector4.h:120
	const float & GetX() const;

	// vector4.h:121
	const float & GetY() const;

	// vector4.h:122
	const float & GetZ() const;

	// vector4.h:123
	const float & GetW() const;

	// vector4.h:124
	float & GetX();

	// vector4.h:125
	float & GetY();

	// vector4.h:126
	float & GetZ();

	// vector4.h:127
	float & GetW();

	// vector4.h:129
	const float & X() const;

	// vector4.h:130
	const float & Y() const;

	// vector4.h:131
	const float & Z() const;

	// vector4.h:132
	const float & W() const;

	// vector4.h:133
	float & X();

	// vector4.h:134
	float & Y();

	// vector4.h:135
	float & Z();

	// vector4.h:136
	float & W();

	// vector4.h:138
	float & GetComponent(int);

	// vector4.h:139
	const float & GetComponent(int) const;

	// vector4.h:141
	float & operator[](int);

	// vector4.h:142
	const float & operator[](int) const;

}

// types_fwd.h:30
struct rw::math::fpu::Matrix33Template<float> {
	// matrix33.h:272
	Vector3Template<float> xAxis;

	// matrix33.h:273
	Vector3Template<float> yAxis;

	// matrix33.h:274
	Vector3Template<float> zAxis;

public:
	// matrix33.h:39
	void Set(float, float, float, float, float, float, float, float, float);

	// matrix33.h:47
	void Set(const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &);

	// matrix33.h:55
	void Matrix33Template(const Matrix33Template<float> &);

	// matrix33.h:70
	void Matrix33Template(const rw::math::fpu::Matrix33Template<double> &);

	// matrix33.h:85
	void Matrix33Template(const rw::math::vpu::Matrix33 &);

	// matrix33.h:88
	void Matrix33Template();

	// matrix33.h:93
	void Matrix33Template(float, float, float, float, float, float, float, float, float);

	// matrix33.h:99
	void Matrix33Template(const float *);

	// matrix33.h:109
	void Matrix33Template(const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &);

	// matrix33.h:117
	void SetZero();

	// matrix33.h:125
	void SetIdentity();

	// matrix33.h:133
	float & GetElem(int);

	// matrix33.h:140
	const float & GetElem(int) const;

	// matrix33.h:146
	float & GetElem(int, int);

	// matrix33.h:153
	const float & GetElem(int, int) const;

	// matrix33.h:159
	float & operator()(int, int);

	// matrix33.h:166
	const float & operator()(int, int) const;

	// matrix33.h:173
	Vector3Template<float> & GetRow(int);

	// matrix33.h:179
	const Vector3Template<float> & GetRow(int) const;

	// matrix33.h:185
	Vector3Template<float> & GetX();

	// matrix33.h:186
	Vector3Template<float> & GetY();

	// matrix33.h:187
	Vector3Template<float> & GetZ();

	// matrix33.h:189
	const Vector3Template<float> & GetX() const;

	// matrix33.h:190
	const Vector3Template<float> & GetY() const;

	// matrix33.h:191
	const Vector3Template<float> & GetZ() const;

	// matrix33.h:193
	Vector3Template<float> & XAxis();

	// matrix33.h:194
	Vector3Template<float> & YAxis();

	// matrix33.h:195
	Vector3Template<float> & ZAxis();

	// matrix33.h:197
	const Vector3Template<float> & XAxis() const;

	// matrix33.h:198
	const Vector3Template<float> & YAxis() const;

	// matrix33.h:199
	const Vector3Template<float> & ZAxis() const;

	// matrix33.h:201
	Vector3Template<float> & Right();

	// matrix33.h:202
	Vector3Template<float> & Up();

	// matrix33.h:203
	Vector3Template<float> & At();

	// matrix33.h:205
	const Vector3Template<float> & Right() const;

	// matrix33.h:206
	const Vector3Template<float> & Up() const;

	// matrix33.h:207
	const Vector3Template<float> & At() const;

	// matrix33.h:209
	Vector3Template<float> GetXColumn() const;

	// matrix33.h:214
	Vector3Template<float> GetYColumn() const;

	// matrix33.h:219
	Vector3Template<float> GetZColumn() const;

	// matrix33.h:224
	void SetXColumn(const Vector3Template<float> &);

	// matrix33.h:231
	void SetYColumn(const Vector3Template<float> &);

	// matrix33.h:238
	void SetZColumn(const Vector3Template<float> &);

	// matrix33.h:245
	void SetElem(int, float);

	// matrix33.h:252
	void SetElem(int, int, float);

	// matrix33.h:259
	void SetRow(int, const Vector3Template<float> &);

	// matrix33.h:265
	void SetX(const Vector3Template<float> &);

	// matrix33.h:266
	void SetY(const Vector3Template<float> &);

	// matrix33.h:267
	void SetZ(const Vector3Template<float> &);

}

// types_fwd.h:31
struct rw::math::fpu::Matrix44Template<float> {
	// matrix44.h:331
	Vector4Template<float> xAxis;

	// matrix44.h:332
	Vector4Template<float> yAxis;

	// matrix44.h:333
	Vector4Template<float> zAxis;

	// matrix44.h:334
	Vector4Template<float> wAxis;

public:
	// matrix44.h:41
	void Set(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44.h:53
	void Set(const Vector4Template<float> &, const Vector4Template<float> &, const Vector4Template<float> &, const Vector4Template<float> &);

	// matrix44.h:62
	void Matrix44Template(const Matrix44Template<float> &);

	// matrix44.h:84
	void Matrix44Template(const rw::math::fpu::Matrix44Template<double> &);

	// matrix44.h:111
	void Matrix44Template(const rw::math::vpu::Matrix44 &);

	// matrix44.h:113
	void Matrix44Template();

	// matrix44.h:119
	void Matrix44Template(const Vector4Template<float> &, const Vector4Template<float> &, const Vector4Template<float> &, const Vector4Template<float> &);

	// matrix44.h:130
	void Matrix44Template(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44.h:137
	void Matrix44Template(const float *);

	// matrix44.h:143
	Matrix44Template<float> & operator=(const Matrix44Template<float> &);

	// matrix44.h:152
	void SetZero();

	// matrix44.h:161
	void SetIdentity();

	// matrix44.h:170
	float & GetElem(int);

	// matrix44.h:177
	const float & GetElem(int) const;

	// matrix44.h:183
	float & GetElem(int, int);

	// matrix44.h:190
	const float & GetElem(int, int) const;

	// matrix44.h:196
	float & operator()(int, int);

	// matrix44.h:203
	const float & operator()(int, int) const;

	// matrix44.h:210
	Vector4Template<float> & GetRow(int);

	// matrix44.h:216
	const Vector4Template<float> & GetRow(int) const;

	// matrix44.h:222
	Vector4Template<float> & GetX();

	// matrix44.h:223
	Vector4Template<float> & GetY();

	// matrix44.h:224
	Vector4Template<float> & GetZ();

	// matrix44.h:225
	Vector4Template<float> & GetW();

	// matrix44.h:227
	const Vector4Template<float> & GetX() const;

	// matrix44.h:228
	const Vector4Template<float> & GetY() const;

	// matrix44.h:229
	const Vector4Template<float> & GetZ() const;

	// matrix44.h:230
	const Vector4Template<float> & GetW() const;

	// matrix44.h:232
	Vector4Template<float> & XAxis();

	// matrix44.h:233
	Vector4Template<float> & YAxis();

	// matrix44.h:234
	Vector4Template<float> & ZAxis();

	// matrix44.h:235
	Vector4Template<float> & WAxis();

	// matrix44.h:237
	const Vector4Template<float> & XAxis() const;

	// matrix44.h:238
	const Vector4Template<float> & YAxis() const;

	// matrix44.h:239
	const Vector4Template<float> & ZAxis() const;

	// matrix44.h:240
	const Vector4Template<float> & WAxis() const;

	// matrix44.h:242
	Vector4Template<float> & Right();

	// matrix44.h:243
	Vector4Template<float> & Up();

	// matrix44.h:244
	Vector4Template<float> & At();

	// matrix44.h:245
	Vector4Template<float> & Pos();

	// matrix44.h:247
	const Vector4Template<float> & Right() const;

	// matrix44.h:248
	const Vector4Template<float> & Up() const;

	// matrix44.h:249
	const Vector4Template<float> & At() const;

	// matrix44.h:250
	const Vector4Template<float> & Pos() const;

	// matrix44.h:252
	Vector4Template<float> GetXColumn() const;

	// matrix44.h:257
	Vector4Template<float> GetYColumn() const;

	// matrix44.h:262
	Vector4Template<float> GetZColumn() const;

	// matrix44.h:267
	Vector4Template<float> GetWColumn() const;

	// matrix44.h:272
	void SetXColumn(const Vector4Template<float> &);

	// matrix44.h:280
	void SetYColumn(const Vector4Template<float> &);

	// matrix44.h:288
	void SetZColumn(const Vector4Template<float> &);

	// matrix44.h:296
	void SetWColumn(const Vector4Template<float> &);

	// matrix44.h:304
	void SetElem(int, float);

	// matrix44.h:311
	void SetElem(int, int, float);

	// matrix44.h:318
	void SetRow(int, const Vector4Template<float> &);

	// matrix44.h:324
	void SetX(const Vector4Template<float> &);

	// matrix44.h:325
	void SetY(const Vector4Template<float> &);

	// matrix44.h:326
	void SetZ(const Vector4Template<float> &);

	// matrix44.h:327
	void SetW(const Vector4Template<float> &);

}

// types_fwd.h:27
struct rw::math::fpu::QuaternionTemplate<float> {
	// quaternion.h:127
	float x;

	// quaternion.h:128
	float y;

	// quaternion.h:129
	float z;

	// quaternion.h:130
	float w;

public:
	// quaternion.h:36
	void QuaternionTemplate(const QuaternionTemplate<float> &);

	// quaternion.h:44
	void QuaternionTemplate(const rw::math::fpu::QuaternionTemplate<double> &);

	// quaternion.h:52
	void QuaternionTemplate(const rw::math::vpu::Quaternion &);

	// quaternion.h:54
	void QuaternionTemplate(float, float, float, float);

	// quaternion.h:62
	void QuaternionTemplate(const float *);

	// quaternion.h:70
	void QuaternionTemplate();

	// quaternion.h:74
	QuaternionTemplate<float> & operator=(const QuaternionTemplate<float> &);

	// quaternion.h:83
	void Set(float, float, float, float);

	// quaternion.h:91
	void SetComponent(int, const float &);

	// quaternion.h:93
	void SetX(float);

	// quaternion.h:94
	void SetY(float);

	// quaternion.h:95
	void SetZ(float);

	// quaternion.h:96
	void SetW(float);

	// quaternion.h:98
	void SetZero();

	// quaternion.h:100
	void SetIdentity();

	// quaternion.h:102
	float GetX() const;

	// quaternion.h:103
	float GetY() const;

	// quaternion.h:104
	float GetZ() const;

	// quaternion.h:105
	float GetW() const;

	// quaternion.h:106
	float & GetX();

	// quaternion.h:107
	float & GetY();

	// quaternion.h:108
	float & GetZ();

	// quaternion.h:109
	float & GetW();

	// quaternion.h:111
	const float & X() const;

	// quaternion.h:112
	const float & Y() const;

	// quaternion.h:113
	const float & Z() const;

	// quaternion.h:114
	const float & W() const;

	// quaternion.h:115
	float & X();

	// quaternion.h:116
	float & Y();

	// quaternion.h:117
	float & Z();

	// quaternion.h:118
	float & W();

	// quaternion.h:120
	float & GetComponent(int);

	// quaternion.h:121
	const float & GetComponent(int) const;

	// quaternion.h:122
	float & operator[](int);

	// quaternion.h:123
	const float & operator[](int) const;

}

// types_fwd.h:28
struct rw::math::fpu::QuatPosTemplate<float> {
	// quatpos.h:116
	QuaternionTemplate<float> quat;

	// quatpos.h:117
	Vector3Template<float> pos;

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
	void QuatPosTemplate(const QuaternionTemplate<float> &, const Vector3Template<float> &);

	// quatpos.h:62
	void QuatPosTemplate(float, float, float, float, float, float, float);

	// quatpos.h:68
	void QuatPosTemplate(float *);

	// quatpos.h:74
	void Set(float, float, float, float, float, float, float);

	// quatpos.h:80
	void SetQuaternion(const QuaternionTemplate<float> &);

	// quatpos.h:85
	void SetPos(const Vector3Template<float> &);

	// quatpos.h:90
	void SetZero();

	// quatpos.h:92
	void SetIdentity();

	// quatpos.h:94
	QuaternionTemplate<float> & GetQuaternion();

	// quatpos.h:99
	const QuaternionTemplate<float> & GetQuaternion() const;

	// quatpos.h:104
	Vector3Template<float> GetPos();

	// quatpos.h:109
	const Vector3Template<float> GetPos() const;

}

// types_fwd.h:32
struct rw::math::fpu::Matrix44AffineTemplate<float> {
	// matrix44affine.h:342
	Vector3Template<float> xAxis;

	// matrix44affine.h:343
	Vector3Template<float> yAxis;

	// matrix44affine.h:344
	Vector3Template<float> zAxis;

	// matrix44affine.h:345
	Vector3Template<float> wAxis;

public:
	// matrix44affine.h:50
	void Set(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affine.h:59
	void Set(const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &);

	// matrix44affine.h:70
	void Matrix44AffineTemplate(const Matrix44AffineTemplate<float> &);

	// matrix44affine.h:88
	void Matrix44AffineTemplate(const rw::math::fpu::Matrix44AffineTemplate<double> &);

	// matrix44affine.h:108
	void Matrix44AffineTemplate(const rw::math::vpu::Matrix44Affine &);

	// matrix44affine.h:110
	void Matrix44AffineTemplate();

	// matrix44affine.h:113
	void Matrix44AffineTemplate(const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &, const Vector3Template<float> &);

	// matrix44affine.h:123
	void Matrix44AffineTemplate(float, float, float, float, float, float, float, float, float, float, float, float);

	// matrix44affine.h:129
	void Matrix44AffineTemplate(const float *);

	// matrix44affine.h:137
	void Matrix44AffineTemplate(const QuaternionTemplate<float> &, const Vector3Template<float> &);

	// matrix44affine.h:160
	void SetZero();

	// matrix44affine.h:169
	void SetIdentity();

	// matrix44affine.h:178
	float & GetElem(int);

	// matrix44affine.h:186
	const float & GetElem(int) const;

	// matrix44affine.h:192
	float & GetElem(int, int);

	// matrix44affine.h:200
	const float & GetElem(int, int) const;

	// matrix44affine.h:206
	float & operator()(int, int);

	// matrix44affine.h:212
	const float & operator()(int, int) const;

	// matrix44affine.h:218
	Vector3Template<float> & GetRow(int);

	// matrix44affine.h:224
	const Vector3Template<float> & GetRow(int) const;

	// matrix44affine.h:229
	Vector3Template<float> & GetX();

	// matrix44affine.h:230
	Vector3Template<float> & GetY();

	// matrix44affine.h:231
	Vector3Template<float> & GetZ();

	// matrix44affine.h:232
	Vector3Template<float> & GetW();

	// matrix44affine.h:234
	const Vector3Template<float> & GetX() const;

	// matrix44affine.h:235
	const Vector3Template<float> & GetY() const;

	// matrix44affine.h:236
	const Vector3Template<float> & GetZ() const;

	// matrix44affine.h:237
	const Vector3Template<float> & GetW() const;

	// matrix44affine.h:239
	Vector3Template<float> & XAxis();

	// matrix44affine.h:240
	Vector3Template<float> & YAxis();

	// matrix44affine.h:241
	Vector3Template<float> & ZAxis();

	// matrix44affine.h:242
	Vector3Template<float> & WAxis();

	// matrix44affine.h:244
	const Vector3Template<float> & XAxis() const;

	// matrix44affine.h:245
	const Vector3Template<float> & YAxis() const;

	// matrix44affine.h:246
	const Vector3Template<float> & ZAxis() const;

	// matrix44affine.h:247
	const Vector3Template<float> & WAxis() const;

	// matrix44affine.h:249
	Vector3Template<float> & Right();

	// matrix44affine.h:250
	Vector3Template<float> & Up();

	// matrix44affine.h:251
	Vector3Template<float> & At();

	// matrix44affine.h:252
	Vector3Template<float> & Pos();

	// matrix44affine.h:254
	const Vector3Template<float> & Right() const;

	// matrix44affine.h:255
	const Vector3Template<float> & Up() const;

	// matrix44affine.h:256
	const Vector3Template<float> & At() const;

	// matrix44affine.h:257
	const Vector3Template<float> & Pos() const;

	// matrix44affine.h:259
	Vector4Template<float> GetXColumn() const;

	// matrix44affine.h:264
	Vector4Template<float> GetYColumn() const;

	// matrix44affine.h:269
	Vector4Template<float> GetZColumn() const;

	// matrix44affine.h:274
	void SetXColumn(const Vector4Template<float> &);

	// matrix44affine.h:282
	void SetYColumn(const Vector4Template<float> &);

	// matrix44affine.h:290
	void SetZColumn(const Vector4Template<float> &);

	// matrix44affine.h:298
	void SetElem(int, float);

	// matrix44affine.h:305
	void SetElem(int, int, float);

	// matrix44affine.h:311
	void SetRow(int, const Vector3Template<float> &);

	// matrix44affine.h:317
	void SetX(const Vector3Template<float> &);

	// matrix44affine.h:323
	void SetY(const Vector3Template<float> &);

	// matrix44affine.h:329
	void SetZ(const Vector3Template<float> &);

	// matrix44affine.h:335
	void SetW(const Vector3Template<float> &);

}

