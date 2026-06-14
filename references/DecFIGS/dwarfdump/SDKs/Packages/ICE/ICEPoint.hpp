// ICEPoint.hpp:28
struct ICE::Cubic1D {
	// ICEPoint.hpp:29
	float32_t Val;

	// ICEPoint.hpp:30
	float32_t dVal;

	// ICEPoint.hpp:32
	float32_t ValDesired;

	// ICEPoint.hpp:33
	float32_t dValDesired;

	// ICEPoint.hpp:35
	float32_t[4] Coeff;

	// ICEPoint.hpp:36
	float32_t time;

	// ICEPoint.hpp:37
	float32_t duration;

	// ICEPoint.hpp:39
	short int state;

	// ICEPoint.hpp:40
	short int flags;

public:
	// ICEPoint.hpp:42
	void Cubic1D(short int, float32_t);

	// ICEPoint.hpp:58
	void Update(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:59
	void Snap();

	// ICEPoint.hpp:61
	void SetVal(float32_t);

	// ICEPoint.hpp:62
	void SetdVal(float32_t);

	// ICEPoint.hpp:63
	void SetValDesired(float32_t);

	// ICEPoint.hpp:64
	void SetdValDesired(float32_t);

	// ICEPoint.hpp:66
	void SetDuration(float32_t);

	// ICEPoint.hpp:67
	void SetState(short int);

	// ICEPoint.hpp:68
	void SetFlags(short int);

	// ICEPoint.hpp:70
	float32_t GetVal(float32_t) const;

	// ICEPoint.hpp:71
	float32_t GetdVal(float32_t) const;

	// ICEPoint.hpp:72
	float32_t GetddVal(float32_t) const;

	// ICEPoint.hpp:73
	float32_t GetVal() const;

	// ICEPoint.hpp:74
	float32_t GetdVal() const;

	// ICEPoint.hpp:75
	float32_t GetddVal() const;

	// ICEPoint.hpp:77
	float32_t GetValDesired() const;

	// ICEPoint.hpp:78
	float32_t GetdValDesired() const;

	// ICEPoint.hpp:80
	float32_t GetDerivative(float32_t) const;

	// ICEPoint.hpp:81
	float32_t GetSecondDerivative(float32_t) const;

	// ICEPoint.hpp:83
	void ClampDerivative(float32_t);

	// ICEPoint.hpp:84
	void ClampSecondDerivative(float32_t);

	// ICEPoint.hpp:86
	void MakeCoeffs();

	// ICEPoint.hpp:87
	int32_t HasArrived() const;

}

// ICEPoint.hpp:142
struct ICE::Cubic3D {
	// ICEPoint.hpp:155
	Cubic1D x;

	// ICEPoint.hpp:156
	Cubic1D y;

	// ICEPoint.hpp:157
	Cubic1D z;

public:
	// ICEPoint.hpp:143
	void Cubic3D(short int, float32_t);

	// ICEPoint.hpp:149
	// Declaration
	void Cubic3D() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ICEMath.hpp:59
		typedef Vector3 Vector3;

	}

	// ICEPoint.hpp:159
	void Update(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:160
	int32_t HasArrived() const;

	// ICEPoint.hpp:161
	void Snap();

	// ICEPoint.hpp:163
	void SetVal(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:164
	void SetdVal(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:165
	void SetValDesired(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:166
	void SetdValDesired(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:168
	void SetVal(const Vector3 *);

	// ICEPoint.hpp:169
	void SetdVal(const Vector3 *);

	// ICEPoint.hpp:170
	void SetValDesired(const Vector3 *);

	// ICEPoint.hpp:171
	void SetdValDesired(const Vector3 *);

	// ICEPoint.hpp:173
	void GetVal(Vector3 *) const;

	// ICEPoint.hpp:174
	void GetdVal(Vector3 *) const;

	// ICEPoint.hpp:175
	void GetddVal(Vector3 *) const;

	// ICEPoint.hpp:177
	void GetVal(Vector3 *, float32_t) const;

	// ICEPoint.hpp:178
	void GetdVal(Vector3 *, float32_t) const;

	// ICEPoint.hpp:179
	void GetddVal(Vector3 *, float32_t) const;

	// ICEPoint.hpp:181
	void GetValDesired(Vector3 *) const;

	// ICEPoint.hpp:182
	void GetdValDesired(Vector3 *) const;

	// ICEPoint.hpp:184
	void SetDuration(float32_t);

	// ICEPoint.hpp:185
	void SetDuration(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:186
	void SetDuration(const Vector3 *);

	// ICEPoint.hpp:188
	void SetState(short int);

	// ICEPoint.hpp:189
	void SetFlags(short int);

	// ICEPoint.hpp:191
	void MakeCoeffs();

}

// ICEPoint.hpp:92
struct ICE::Cubic2D {
	// ICEPoint.hpp:103
	Cubic1D x;

	// ICEPoint.hpp:104
	Cubic1D y;

public:
	// ICEPoint.hpp:93
	void Cubic2D(short int, float32_t);

	// ICEPoint.hpp:98
	// Declaration
	void Cubic2D(short int, const Vector2 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ICEMath.hpp:58
		typedef Vector2 Vector2;

	}

	// ICEPoint.hpp:106
	void Update(float32_t, float32_t, float32_t);

	// ICEPoint.hpp:107
	int32_t HasArrived() const;

	// ICEPoint.hpp:108
	void Snap();

	// ICEPoint.hpp:110
	void SetVal(float32_t, float32_t);

	// ICEPoint.hpp:111
	void SetdVal(float32_t, float32_t);

	// ICEPoint.hpp:112
	void SetValDesired(float32_t, float32_t);

	// ICEPoint.hpp:113
	void SetdValDesired(float32_t, float32_t);

	// ICEPoint.hpp:115
	void SetVal(const Vector2 *);

	// ICEPoint.hpp:116
	void SetdVal(const Vector2 *);

	// ICEPoint.hpp:117
	void SetValDesired(const Vector2 *);

	// ICEPoint.hpp:118
	void SetdValDesired(const Vector2 *);

	// ICEPoint.hpp:120
	void GetVal(Vector2 *) const;

	// ICEPoint.hpp:121
	void GetdVal(Vector2 *) const;

	// ICEPoint.hpp:122
	void GetddVal(Vector2 *) const;

	// ICEPoint.hpp:123
	void GetVal(Vector2 *, float32_t) const;

	// ICEPoint.hpp:124
	void GetdVal(Vector2 *, float32_t) const;

	// ICEPoint.hpp:125
	void GetddVal(Vector2 *, float32_t) const;

	// ICEPoint.hpp:127
	void GetValDesired(Vector2 *) const;

	// ICEPoint.hpp:128
	void GetdValDesired(Vector2 *) const;

	// ICEPoint.hpp:130
	void SetDuration(float32_t);

	// ICEPoint.hpp:131
	void SetDuration(float32_t, float32_t);

	// ICEPoint.hpp:132
	void SetDuration(const Vector2 *);

	// ICEPoint.hpp:134
	void SetState(short int);

	// ICEPoint.hpp:135
	void SetFlags(short int);

	// ICEPoint.hpp:137
	void MakeCoeffs();

}

// ICEPoint.hpp:196
struct ICE::Point {
	int (*)(...) * _vptr.Point;

	// ICEPoint.hpp:301
	Cubic3D mPos;

	// ICEPoint.hpp:302
	Cubic3D mRot;

	// ICEPoint.hpp:303
	Cubic1D mScale;

	// ICEPoint.hpp:304
	Cubic1D mYScale;

	// ICEPoint.hpp:305
	float32_t mZBias;

	// ICEPoint.hpp:309
	void (*)(int32_t, int32_t) mCallBackFunc;

	// ICEPoint.hpp:310
	void (*)(Point *, float32_t) mUpdateFunc;

	// ICEPoint.hpp:311
	int32_t mCBParam1;

	// ICEPoint.hpp:312
	int32_t mCBParam2;

public:
	void Point(const Point &);

	// ICEPoint.cpp:1053
	void Point();

	// ICEPoint.cpp:1083
	virtual void ~Point();

	// ICEPoint.cpp:244
	virtual void Update(float32_t);

	// ICEPoint.hpp:203
	int32_t HasArrived();

	// ICEPoint.hpp:205
	void SetCallBack(void (*)(int32_t, int32_t), int32_t, int32_t);

	// ICEPoint.hpp:206
	void ClearCallBack();

	// ICEPoint.hpp:207
	void CallBack();

	// ICEPoint.cpp:256
	void SplineSeek(Cubic1D *, float32_t, float32_t, float32_t);

	// ICEPoint.cpp:310
	void SplineSeek(Cubic2D *, float32_t);

	// ICEPoint.cpp:317
	void SplineSeek(Cubic3D *, float32_t);

	// ICEPoint.cpp:327
	void SpringDamper(Cubic1D *, float32_t);

	// ICEPoint.cpp:365
	void SpringDamper(Cubic2D *, float32_t);

	// ICEPoint.cpp:372
	void SpringDamper(Cubic3D *, float32_t);

	// ICEPoint.cpp:383
	void BuildMatrix(Matrix4 *);

	// ICEPoint.cpp:425
	void PointVelocity(Point *, float32_t);

	// ICEPoint.cpp:440
	void PointVelocityWrap(Point *, float32_t);

	// ICEPoint.cpp:408
	void PointSpline(Point *, float32_t);

	// ICEPoint.cpp:498
	void PointSpringDamper(Point *, float32_t);

	// ICEPoint.cpp:517
	void SetPos(const Vector3 *);

	// ICEPoint.cpp:528
	void SetPos(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:539
	void SetPosX(float32_t);

	// ICEPoint.cpp:548
	void SetPosY(float32_t, bool);

	// ICEPoint.cpp:567
	void SetPosZ(float32_t);

	// ICEPoint.cpp:576
	void SetPosDesired(const Vector3 *);

	// ICEPoint.cpp:587
	void SetPosDesired(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:598
	void SetPosDesiredX(float32_t);

	// ICEPoint.cpp:607
	void SetPosDesiredY(float32_t, bool);

	// ICEPoint.cpp:626
	void SetPosDesiredZ(float32_t);

	// ICEPoint.cpp:635
	void SetdPos(const Vector3 *);

	// ICEPoint.cpp:646
	void SetdPos(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:657
	void SetdPosX(float32_t);

	// ICEPoint.cpp:666
	void SetdPosY(float32_t);

	// ICEPoint.cpp:682
	void SetdPosZ(float32_t);

	// ICEPoint.cpp:691
	void SetdPosDesired(const Vector3 *);

	// ICEPoint.cpp:702
	void SetdPosDesired(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:713
	void SetdPosDesiredX(float32_t);

	// ICEPoint.cpp:722
	void SetdPosDesiredY(float32_t);

	// ICEPoint.cpp:731
	void SetdPosDesiredZ(float32_t);

	// ICEPoint.cpp:740
	void SetRot(const Vector3 *);

	// ICEPoint.cpp:751
	void SetRot(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:762
	void SetRotX(float32_t);

	// ICEPoint.cpp:771
	void SetRotY(float32_t);

	// ICEPoint.cpp:780
	void SetRotZ(float32_t);

	// ICEPoint.cpp:789
	void SetRotDesired(const Vector3 *);

	// ICEPoint.cpp:800
	void SetRotDesired(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:811
	void SetRotDesiredX(float32_t);

	// ICEPoint.cpp:820
	void SetRotDesiredY(float32_t);

	// ICEPoint.cpp:829
	void SetRotDesiredZ(float32_t);

	// ICEPoint.cpp:838
	void SetdRot(const Vector3 *);

	// ICEPoint.cpp:849
	void SetdRot(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:860
	void SetdRotX(float32_t);

	// ICEPoint.cpp:869
	void SetdRotY(float32_t);

	// ICEPoint.cpp:878
	void SetdRotZ(float32_t);

	// ICEPoint.cpp:887
	void SetdRotDesired(const Vector3 *);

	// ICEPoint.cpp:898
	void SetdRotDesired(float32_t, float32_t, float32_t);

	// ICEPoint.cpp:909
	void SetdRotDesiredX(float32_t);

	// ICEPoint.cpp:918
	void SetdRotDesiredY(float32_t);

	// ICEPoint.cpp:927
	void SetdRotDesiredZ(float32_t);

	// ICEPoint.cpp:936
	void SetScale(float32_t);

	// ICEPoint.cpp:972
	void SetScaleDesired(float32_t);

	// ICEPoint.cpp:954
	void SetYScale(float32_t);

	// ICEPoint.cpp:990
	void SetYScaleDesired(float32_t);

	// ICEPoint.cpp:945
	void SetdScale(float32_t);

	// ICEPoint.cpp:981
	void SetdScaleDesired(float32_t);

	// ICEPoint.cpp:963
	void SetdYScale(float32_t);

	// ICEPoint.cpp:999
	void SetdYScaleDesired(float32_t);

	// ICEPoint.cpp:1008
	void SetDuration(float32_t);

	// ICEPoint.cpp:1022
	void Snap();

	// ICEPoint.cpp:1040
	void SetBiasZ(float32_t);

}

