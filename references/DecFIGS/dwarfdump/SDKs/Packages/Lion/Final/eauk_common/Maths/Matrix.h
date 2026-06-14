// Matrix.h:51
struct cMatrix {
	// Matrix.h:143
	cVector xa;

	// Matrix.h:143
	cVector ya;

	// Matrix.h:143
	cVector za;

	// Matrix.h:143
	cVector wa;

public:
	// Matrix.h:55
	cMatrix();

	// Matrix.h:57
	void SetAxisX(FP32, FP32, FP32, FP32);

	// Matrix.h:58
	void SetAxisY(FP32, FP32, FP32, FP32);

	// Matrix.h:59
	void SetAxisZ(FP32, FP32, FP32, FP32);

	// Matrix.h:60
	void SetAxisW(FP32, FP32, FP32, FP32);

	// Matrix.h:61
	void SetTrans(FP32, FP32, FP32);

	// Matrix.h:62
	void SetXaxisX(FP32);

	// Matrix.h:63
	void SetXaxisY(FP32);

	// Matrix.h:64
	void SetXaxisZ(FP32);

	// Matrix.h:65
	void SetXaxisW(FP32);

	// Matrix.h:66
	void SetYaxisX(FP32);

	// Matrix.h:67
	void SetYaxisY(FP32);

	// Matrix.h:68
	void SetYaxisZ(FP32);

	// Matrix.h:69
	void SetYaxisW(FP32);

	// Matrix.h:70
	void SetZaxisX(FP32);

	// Matrix.h:71
	void SetZaxisY(FP32);

	// Matrix.h:72
	void SetZaxisZ(FP32);

	// Matrix.h:73
	void SetZaxisW(FP32);

	// Matrix.h:74
	void SetWaxisX(FP32);

	// Matrix.h:75
	void SetWaxisY(FP32);

	// Matrix.h:76
	void SetWaxisZ(FP32);

	// Matrix.h:77
	void SetWaxisW(FP32);

	// Matrix.h:79
	cMatrix(cVector, cVector, cVector, cVector);

	// Matrix.h:81
	const cVector & GetAxisX() const;

	// Matrix.h:82
	const cVector & GetAxisY() const;

	// Matrix.h:83
	const cVector & GetAxisZ() const;

	// Matrix.h:84
	const cVector & GetAxisW() const;

	// Matrix.h:85
	void SetAxisX(cVector);

	// Matrix.h:86
	void SetAxisY(cVector);

	// Matrix.h:87
	void SetAxisZ(cVector);

	// Matrix.h:88
	void SetAxisW(cVector);

	// Matrix.h:89
	void SetTrans(cVector);

	// Matrix.h:90
	void BuildTranslation(cVector);

	// Matrix.h:91
	void BuildScale(cVector);

	// Matrix.h:92
	void BuildRotate(cVector);

	// Matrix.h:94
	void BuildZero();

	// Matrix.h:95
	void BuildIdentity();

	// Matrix.h:96
	void BuildRotateX(FP32);

	// Matrix.h:97
	void BuildRotateY(FP32);

	// Matrix.h:98
	void BuildRotateZ(FP32);

	// Matrix.h:99
	void BuildScaleX(FP32);

	// Matrix.h:100
	void BuildScaleY(FP32);

	// Matrix.h:101
	void BuildScaleZ(FP32);

	// Matrix.h:102
	void BuildScale(FP32);

	// Matrix.h:103
	void BuildAxisAngle(cVector, FP32);

	// Matrix.h:104
	void Mul(const cMatrix &, const cMatrix &);

	// Matrix.h:105
	void Mul(const cMatrix &, const cMatrix &, const cMatrix &);

	// Matrix.h:106
	cMatrix operator*(const cMatrix &) const;

	// Matrix.h:107
	cMatrix & operator=(const cMatrix &);

	// Matrix.h:108
	FP32 Determinant3x3() const;

	// Matrix.h:109
	cMatrix Invert3x3() const;

	// Matrix.h:110
	cMatrix Invert4x3() const;

	// Matrix.h:111
	void Normalise();

	// Matrix.h:112
	cMatrix Transpose3x3() const;

	// Matrix.h:113
	cMatrix Transpose() const;

	// Matrix.h:114
	void Lerp(const cMatrix &, const cMatrix &, float);

	// Matrix.h:115
	void Lerp(const cMatrix &, const cMatrix &, cVector, cVector);

	// Matrix.h:117
	cVector Apply(cVector) const;

	// Matrix.h:118
	cVector ApplyAxes(cVector) const;

	// Matrix.h:119
	cVector ApplyInv(cVector) const;

	// Matrix.h:120
	cVector ApplyInvAxes(cVector) const;

	// Matrix.h:121
	cVector ApplyPers(cVector) const;

	// Matrix.h:122
	void Apply(cVector, cVector &) const;

	// Matrix.h:123
	void ApplyAxes(cVector, cVector &) const;

	// Matrix.h:124
	void ApplyInv(cVector, cVector &) const;

	// Matrix.h:125
	void ApplyInvAxes(cVector, cVector &) const;

	// Matrix.h:126
	void ApplyPers(cVector, cVector &) const;

	// Matrix.h:127
	void Apply44(cVector, cVector &) const;

	// Matrix.h:129
	void Apply(U32, const cVector *);

}

