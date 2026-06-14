// AptCXForm.h:48
struct AptColorHelper {
	// AptCXForm.h:49
	enum AptColorValue {
		Alpha = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
	}

	int (*)(...) * _vptr.AptColorHelper;

protected:
	// AptCXForm.h:70
	float[4] mfVal;

public:
	AptColorHelper(const AptColorHelper &);

	// AptCXForm.h:58
	AptColorHelper();

	// AptCXForm.h:59
	virtual ~AptColorHelper();

	// AptCXForm.h:62
	void CopyFromFloatArray(const float *);

	// AptCXForm.h:64
	int32_t GetValue(AptColorHelper::AptColorValue) const;

	// AptCXForm.h:65
	float GetValuef(AptColorHelper::AptColorValue) const;

	// AptCXForm.h:66
	void CopyToFloatArray4(float *) const;

}

// AptCXForm.h:464
struct AptCXForm {
	// AptCXForm.h:476
	AptColorHelperScale scale;

	// AptCXForm.h:477
	AptColorHelperTranslate translate;

public:
	// AptCXForm.h:466
	AptCXForm();

	// AptCXForm.h:467
	AptCXForm(AptCXForm *);

	// AptCXForm.h:468
	AptCXForm(AptFloatArrayCXForm *);

	// AptCXForm.h:469
	AptCXForm(AptUint32CXForm *);

	// AptCXForm.h:472
	void AptCXFormCopy(const AptCXForm *);

	// AptCXForm.h:473
	void AptFloatArrayCXFormCopy(const AptFloatArrayCXForm *);

	// AptCXForm.h:474
	void AptUint32CXFormCopy(const AptUint32CXForm *);

	// AptCXForm.h:479
	void * operator new(size_t);

	// AptCXForm.h:479
	void operator delete(void *, size_t);

	// AptCXForm.h:479
	void * operator new [](size_t);

	// AptCXForm.h:479
	void operator delete [](void *);

}

// AptCXForm.h:446
struct AptColorHelperScale : public AptColorHelperTemplate<255> {
public:
	AptColorHelperScale(const AptColorHelperScale &);

	AptColorHelperScale();

	virtual ~AptColorHelperScale();

}

// AptCXForm.h:455
struct AptColorHelperTranslate : public AptColorHelperTemplate<255> {
public:
	AptColorHelperTranslate(const AptColorHelperTranslate &);

	AptColorHelperTranslate();

	virtual ~AptColorHelperTranslate();

}

// AptCXForm.h:85
struct AptColorHelperTemplate<255> : public AptColorHelper {
public:
	void AptColorHelperTemplate(const AptColorHelperTemplate<255> &);

	void AptColorHelperTemplate();

	// AptCXForm.h:92
	virtual void ~AptColorHelperTemplate();

	// AptCXForm.h:117
	void SetValuef(AptColorHelper::AptColorValue, float);

	// AptCXForm.h:151
	float GetValuef(AptColorHelper::AptColorValue) const;

	// AptCXForm.h:166
	void Copy(const AptColorHelperTemplate<255> *);

}

