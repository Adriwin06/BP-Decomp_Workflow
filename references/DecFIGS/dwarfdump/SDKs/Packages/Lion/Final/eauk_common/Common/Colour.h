// Colour.h:25
struct cColour8 {
private:
	// Colour.h:115
	U32 m_RGBA;

public:
	// Colour.h:27
	cColour8();

	// Colour.h:28
	~cColour8();

	// Colour.h:30
	void BuildIdentity();

	// Colour.h:35
	cColour8(U8, U8, U8, U8);

	// Colour.h:38
	cColour8(const cColour8 &);

	// Colour.h:40
	U32 GetRGBA() const;

	// Colour.h:41
	U8 GetR() const;

	// Colour.h:42
	U8 GetG() const;

	// Colour.h:43
	U8 GetB() const;

	// Colour.h:44
	U8 GetA() const;

	// Colour.h:46
	void SetRGBA(U32);

	// Colour.h:51
	void SetRGBA(const cVector &);

	// Colour.h:59
	void SetRGBA(U8, U8, U8, U8);

	// Colour.h:60
	void SetR(U8);

	// Colour.h:61
	void SetG(U8);

	// Colour.h:62
	void SetB(U8);

	// Colour.h:63
	void SetA(U8);

	// Colour.h:65
	cColour8 operator+(cColour8) const;

	// Colour.h:66
	cColour8 operator-(cColour8) const;

	// Colour.h:67
	cColour8 operator*(cColour8) const;

	// Colour.h:69
	cColour8 operator+=(cColour8);

	// Colour.h:70
	cColour8 operator-=(cColour8);

	// Colour.h:71
	cColour8 operator*=(cColour8);

	// Colour.h:73
	cColour8 operator*(U8) const;

	// Colour.h:74
	cColour8 operator*=(U8);

	// Colour.h:76
	cColour8 operator*(FP32) const;

	// Colour.h:85
	cColour8 operator=(cColour8);

	// Colour.h:87
	bool operator==(cColour8);

	// Colour.h:89
	void Lerp(cColour8, cColour8, FP32);

	// Colour.h:99
	void Lerp(cColour8, cColour8, U8);

}

// colour.h:25
struct cColour8 {
private:
	// colour.h:115
	U32 m_RGBA;

public:
	// colour.h:27
	cColour8();

	// colour.h:28
	~cColour8();

	// colour.h:30
	void BuildIdentity();

	// colour.h:35
	cColour8(U8, U8, U8, U8);

	// colour.h:38
	cColour8(const cColour8 &);

	// colour.h:40
	U32 GetRGBA() const;

	// colour.h:41
	U8 GetR() const;

	// colour.h:42
	U8 GetG() const;

	// colour.h:43
	U8 GetB() const;

	// colour.h:44
	U8 GetA() const;

	// colour.h:46
	void SetRGBA(U32);

	// colour.h:51
	void SetRGBA(const cVector &);

	// colour.h:59
	void SetRGBA(U8, U8, U8, U8);

	// colour.h:60
	void SetR(U8);

	// colour.h:61
	void SetG(U8);

	// colour.h:62
	void SetB(U8);

	// colour.h:63
	void SetA(U8);

	// colour.h:65
	cColour8 operator+(cColour8) const;

	// colour.h:66
	cColour8 operator-(cColour8) const;

	// colour.h:67
	cColour8 operator*(cColour8) const;

	// colour.h:69
	cColour8 operator+=(cColour8);

	// colour.h:70
	cColour8 operator-=(cColour8);

	// colour.h:71
	cColour8 operator*=(cColour8);

	// colour.h:73
	cColour8 operator*(U8) const;

	// colour.h:74
	cColour8 operator*=(U8);

	// colour.h:76
	cColour8 operator*(FP32) const;

	// colour.h:85
	cColour8 operator=(cColour8);

	// colour.h:87
	bool operator==(cColour8);

	// colour.h:89
	void Lerp(cColour8, cColour8, FP32);

	// colour.h:99
	void Lerp(cColour8, cColour8, U8);

}

