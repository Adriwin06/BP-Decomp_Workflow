// Quat.h:34
struct cQuat {
	// Quat.h:45
	U128 q;

public:
	// Quat.h:48
	cQuat();

	// Quat.h:50
	FP32 GetX() const;

	// Quat.h:51
	void SetX(FP32);

	// Quat.h:53
	FP32 GetY() const;

	// Quat.h:54
	void SetY(FP32);

	// Quat.h:56
	FP32 GetZ() const;

	// Quat.h:57
	void SetZ(FP32);

	// Quat.h:59
	FP32 GetW() const;

	// Quat.h:60
	void SetW(FP32);

	// Quat.h:62
	void Set(FP32, FP32, FP32, FP32);

	// Quat.h:64
	void BuildZero();

	// Quat.h:65
	void BuildIdentity();

	// Quat.h:66
	void Build(cVector);

	// Quat.h:67
	void Build(cVector, FP32);

	// Quat.h:69
	cQuat operator+(cQuat) const;

	// Quat.h:70
	cQuat & operator+=(cQuat);

	// Quat.h:72
	cQuat operator-(cQuat) const;

	// Quat.h:73
	cQuat & operator-=(cQuat);

	// Quat.h:75
	cQuat operator*(FP32) const;

	// Quat.h:76
	cQuat & operator*=(FP32);

	// Quat.h:78
	cQuat operator*(cQuat) const;

	// Quat.h:79
	cQuat & operator=(cQuat);

	// Quat.h:81
	void Lerp(cQuat, cQuat, FP32);

	// Quat.h:82
	void Slerp(cQuat, cQuat, FP32);

	// Quat.h:84
	void ToMatrix(cMatrix &) const;

	// Quat.h:85
	void FromMatrix(const cMatrix &);

	// Quat.h:87
	cVector Apply(cVector) const;

	// Quat.h:89
	FP32 Dot(cQuat) const;

	// Quat.h:90
	void Invert();

	// Quat.h:91
	void Mul(cQuat, cQuat);

	// Quat.h:92
	cQuat & Normalise();

	// Quat.h:94
	FP32 Length() const;

	// Quat.h:95
	FP32 RecipLength() const;

	// Quat.h:96
	FP32 SquaredLength() const;

}

// quat.h:34
struct cQuat {
	// quat.h:45
	U128 q;

public:
	// quat.h:48
	cQuat();

	// quat.h:50
	FP32 GetX() const;

	// quat.h:51
	void SetX(FP32);

	// quat.h:53
	FP32 GetY() const;

	// quat.h:54
	void SetY(FP32);

	// quat.h:56
	FP32 GetZ() const;

	// quat.h:57
	void SetZ(FP32);

	// quat.h:59
	FP32 GetW() const;

	// quat.h:60
	void SetW(FP32);

	// quat.h:62
	void Set(FP32, FP32, FP32, FP32);

	// quat.h:64
	void BuildZero();

	// quat.h:65
	void BuildIdentity();

	// quat.h:66
	void Build(cVector);

	// quat.h:67
	void Build(cVector, FP32);

	// quat.h:69
	cQuat operator+(cQuat) const;

	// quat.h:70
	cQuat & operator+=(cQuat);

	// quat.h:72
	cQuat operator-(cQuat) const;

	// quat.h:73
	cQuat & operator-=(cQuat);

	// quat.h:75
	cQuat operator*(FP32) const;

	// quat.h:76
	cQuat & operator*=(FP32);

	// quat.h:78
	cQuat operator*(cQuat) const;

	// quat.h:79
	cQuat & operator=(cQuat);

	// quat.h:81
	void Lerp(cQuat, cQuat, FP32);

	// quat.h:82
	void Slerp(cQuat, cQuat, FP32);

	// quat.h:84
	void ToMatrix(cMatrix &) const;

	// quat.h:85
	void FromMatrix(const cMatrix &);

	// quat.h:87
	cVector Apply(cVector) const;

	// quat.h:89
	FP32 Dot(cQuat) const;

	// quat.h:90
	void Invert();

	// quat.h:91
	void Mul(cQuat, cQuat);

	// quat.h:92
	cQuat & Normalise();

	// quat.h:94
	FP32 Length() const;

	// quat.h:95
	FP32 RecipLength() const;

	// quat.h:96
	FP32 SquaredLength() const;

}

