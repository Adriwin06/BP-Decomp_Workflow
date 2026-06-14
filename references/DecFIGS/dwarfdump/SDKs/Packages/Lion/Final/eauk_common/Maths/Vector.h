// Vector.h:56
struct cVector {
	// Vector.h:164
	float[4] q;

public:
	// Vector.h:59
	cVector();

	// Vector.h:64
	cVector(FP32, FP32, FP32);

	// Vector.h:65
	cVector(FP32, FP32, FP32, FP32);

	// Vector.h:66
	cVector(FP32);

	// Vector.h:68
	FP32 GetX() const;

	// Vector.h:69
	void SetX(FP32);

	// Vector.h:71
	FP32 GetY() const;

	// Vector.h:72
	void SetY(FP32);

	// Vector.h:74
	FP32 GetZ() const;

	// Vector.h:75
	void SetZ(FP32);

	// Vector.h:77
	FP32 GetW() const;

	// Vector.h:78
	void SetW(FP32);

	// Vector.h:80
	cVector GetSplatX() const;

	// Vector.h:81
	cVector GetSplatY() const;

	// Vector.h:82
	cVector GetSplatZ() const;

	// Vector.h:83
	cVector GetSplatW() const;

	// Vector.h:85
	void Set(FP32, FP32, FP32, FP32);

	// Vector.h:86
	void Set(FP32, FP32, FP32);

	// Vector.h:88
	void * operator void*() const;

	// Vector.h:89
	bool operator!() const;

	// Vector.h:90
	cVector operator-() const;

	// Vector.h:92
	bool operator!=(cVector) const;

	// Vector.h:93
	bool operator==(cVector) const;

	// Vector.h:95
	bool operator<(cVector) const;

	// Vector.h:96
	bool operator>(cVector) const;

	// Vector.h:98
	bool operator<(FP32) const;

	// Vector.h:99
	bool operator>(FP32) const;

	// Vector.h:101
	cVector operator+(cVector) const;

	// Vector.h:102
	cVector & operator+=(cVector);

	// Vector.h:104
	cVector operator-(cVector) const;

	// Vector.h:105
	cVector & operator-=(cVector);

	// Vector.h:107
	cVector operator*(FP32) const;

	// Vector.h:108
	cVector & operator*=(FP32);

	// Vector.h:110
	cVector operator/(FP32) const;

	// Vector.h:111
	cVector & operator/=(FP32);

	// Vector.h:113
	cVector & operator=(cVector);

	// Vector.h:115
	cVector operator*(cVector) const;

	// Vector.h:116
	FP32 operator%(cVector) const;

	// Vector.h:120
	void Add(cVector, cVector);

	// Vector.h:121
	void Sub(cVector, cVector);

	// Vector.h:122
	void Mul(cVector, cVector);

	// Vector.h:123
	void Mul(cVector, FP32);

	// Vector.h:124
	void Div(cVector, FP32);

	// Vector.h:126
	void Zero();

	// Vector.h:128
	FP32 Dot(cVector) const;

	// Vector.h:129
	cVector & Cross(cVector, cVector);

	// Vector.h:131
	FP32 Length() const;

	// Vector.h:132
	FP32 RecipLength() const;

	// Vector.h:133
	FP32 SquaredLength() const;

	// Vector.h:134
	cVector & Normalise();

	// Vector.h:137
	void Min(cVector, cVector);

	// Vector.h:138
	void Max(cVector, cVector);

	// Vector.h:140
	void Lerp(cVector, cVector, FP32);

	// Vector.h:141
	void Lerp(cVector, cVector, cVector);

	// Vector.h:144
	void Add4(cVector, cVector);

	// Vector.h:145
	void Sub4(cVector, cVector);

	// Vector.h:146
	void Mul4(cVector, cVector);

	// Vector.h:147
	void Mul4(cVector, FP32);

	// Vector.h:148
	void Lerp4(cVector, cVector, FP32);

	// Vector.h:149
	void Lerp4(cVector, cVector, cVector);

	// Vector.h:152
	void FromU32(U32);

	// Vector.h:153
	U32 ToU32() const;

}

// vector.h:56
struct cVector {
	// vector.h:164
	float[4] q;

public:
	// vector.h:59
	cVector();

	// vector.h:64
	cVector(FP32, FP32, FP32);

	// vector.h:65
	cVector(FP32, FP32, FP32, FP32);

	// vector.h:66
	cVector(FP32);

	// vector.h:68
	FP32 GetX() const;

	// vector.h:69
	void SetX(FP32);

	// vector.h:71
	FP32 GetY() const;

	// vector.h:72
	void SetY(FP32);

	// vector.h:74
	FP32 GetZ() const;

	// vector.h:75
	void SetZ(FP32);

	// vector.h:77
	FP32 GetW() const;

	// vector.h:78
	void SetW(FP32);

	// vector.h:80
	cVector GetSplatX() const;

	// vector.h:81
	cVector GetSplatY() const;

	// vector.h:82
	cVector GetSplatZ() const;

	// vector.h:83
	cVector GetSplatW() const;

	// vector.h:85
	void Set(FP32, FP32, FP32, FP32);

	// vector.h:86
	void Set(FP32, FP32, FP32);

	// vector.h:88
	void * operator void*() const;

	// vector.h:89
	bool operator!() const;

	// vector.h:90
	cVector operator-() const;

	// vector.h:92
	bool operator!=(cVector) const;

	// vector.h:93
	bool operator==(cVector) const;

	// vector.h:95
	bool operator<(cVector) const;

	// vector.h:96
	bool operator>(cVector) const;

	// vector.h:98
	bool operator<(FP32) const;

	// vector.h:99
	bool operator>(FP32) const;

	// vector.h:101
	cVector operator+(cVector) const;

	// vector.h:102
	cVector & operator+=(cVector);

	// vector.h:104
	cVector operator-(cVector) const;

	// vector.h:105
	cVector & operator-=(cVector);

	// vector.h:107
	cVector operator*(FP32) const;

	// vector.h:108
	cVector & operator*=(FP32);

	// vector.h:110
	cVector operator/(FP32) const;

	// vector.h:111
	cVector & operator/=(FP32);

	// vector.h:113
	cVector & operator=(cVector);

	// vector.h:115
	cVector operator*(cVector) const;

	// vector.h:116
	FP32 operator%(cVector) const;

	// vector.h:120
	void Add(cVector, cVector);

	// vector.h:121
	void Sub(cVector, cVector);

	// vector.h:122
	void Mul(cVector, cVector);

	// vector.h:123
	void Mul(cVector, FP32);

	// vector.h:124
	void Div(cVector, FP32);

	// vector.h:126
	void Zero();

	// vector.h:128
	FP32 Dot(cVector) const;

	// vector.h:129
	cVector & Cross(cVector, cVector);

	// vector.h:131
	FP32 Length() const;

	// vector.h:132
	FP32 RecipLength() const;

	// vector.h:133
	FP32 SquaredLength() const;

	// vector.h:134
	cVector & Normalise();

	// vector.h:137
	void Min(cVector, cVector);

	// vector.h:138
	void Max(cVector, cVector);

	// vector.h:140
	void Lerp(cVector, cVector, FP32);

	// vector.h:141
	void Lerp(cVector, cVector, cVector);

	// vector.h:144
	void Add4(cVector, cVector);

	// vector.h:145
	void Sub4(cVector, cVector);

	// vector.h:146
	void Mul4(cVector, cVector);

	// vector.h:147
	void Mul4(cVector, FP32);

	// vector.h:148
	void Lerp4(cVector, cVector, FP32);

	// vector.h:149
	void Lerp4(cVector, cVector, cVector);

	// vector.h:152
	void FromU32(U32);

	// vector.h:153
	U32 ToU32() const;

}

