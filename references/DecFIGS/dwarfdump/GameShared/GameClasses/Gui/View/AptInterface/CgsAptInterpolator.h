// CgsAptInterpolator.h:42
void CgsGui::Interpolator::Interpolator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptInterpolator.h:42
void CgsGui::Interpolator::operator=(const const CgsGui::Interpolator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptInterpolator.h:42
struct CgsGui::Interpolator {
	int (*)(...) * _vptr.Interpolator;

private:
	// CgsAptInterpolator.h:88
	float32_t mfStartLambda;

	// CgsAptInterpolator.h:89
	float32_t mfEndLambda;

	// CgsAptInterpolator.h:91
	float32_t mfStartValue;

	// CgsAptInterpolator.h:92
	float32_t mfEndValue;

	// CgsAptInterpolator.h:94
	float32_t mfCurrentValue;

public:
	Interpolator & operator=(const Interpolator &);

	void Interpolator(const Interpolator &);

	void Interpolator();

	// CgsAptInterpolator.cpp:39
	void Construct();

	// CgsAptInterpolator.cpp:62
	virtual void SetInterpolator(float32_t, float32_t, float32_t, float32_t);

	// CgsAptInterpolator.h:109
	float32_t GetStartValue() const;

	// CgsAptInterpolator.h:122
	float32_t GetEndValue() const;

	// CgsAptInterpolator.h:135
	virtual float32_t GetCurrentValue() const;

	// CgsAptInterpolator.h:148
	float32_t GetStartLambda() const;

	// CgsAptInterpolator.h:161
	float32_t GetEndLambda() const;

	// CgsAptInterpolator.cpp:84
	virtual float32_t Update(float32_t);

	// CgsAptInterpolator.cpp:114
	virtual void Reset();

}

// CgsAptInterpolator.h:42
void CgsGui::Interpolator::operator=(const const Interpolator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

