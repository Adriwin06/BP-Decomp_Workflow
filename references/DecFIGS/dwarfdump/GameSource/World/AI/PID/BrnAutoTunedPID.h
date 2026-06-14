// BrnAutoTunedPID.h:50
struct BrnAI::AutoTunedPIDDebugData {
	// BrnAutoTunedPID.h:62
	EPIDCoefficient meCoefficientToBeTuned;

	// BrnAutoTunedPID.h:63
	float32_t mfPCoefficient;

	// BrnAutoTunedPID.h:64
	float32_t mfICoefficient;

	// BrnAutoTunedPID.h:65
	float32_t mfDCoefficient;

public:
	// BrnAutoTunedPID.h:54
	void Clear();

}

// BrnAutoTunedPID.h:69
struct BrnAI::AutoTunedPID {
private:
	// BrnAutoTunedPID.h:122
	PIDController mPIDController;

	// BrnAutoTunedPID.h:124
	int32_t mnUpdateCount;

	// BrnAutoTunedPID.h:125
	bool mbEnableTuning;

	// BrnAutoTunedPID.h:126
	EPIDCoefficient meCoefficientToBeTuned;

	// BrnAutoTunedPID.h:127
	bool mbLastValuesValid;

	// BrnAutoTunedPID.h:128
	float32_t mfLastCoefficientValue;

	// BrnAutoTunedPID.h:129
	float32_t mfLastErrorValue;

	// BrnAutoTunedPID.h:131
	float32_t[3] mafMinCoefficientValues;

	// BrnAutoTunedPID.h:132
	float32_t[3] mafMaxCoefficientValues;

	// BrnAutoTunedPID.h:135
	int32_t mAutoTunedPIDCounter;

public:
	// BrnAutoTunedPID.h:77
	void Prepare(const float32_t *, const float32_t *);

	// BrnAutoTunedPID.h:80
	void Release();

	// BrnAutoTunedPID.h:84
	void SetCoefficients(const float32_t *);

	// BrnAutoTunedPID.h:89
	void Record(float32_t, float32_t);

	// BrnAutoTunedPID.h:92
	void Clear();

	// BrnAutoTunedPID.h:97
	void ThisIsAnInvalidTuningFrame();

	// BrnAutoTunedPID.h:100
	float32_t GetOutput();

	// BrnAutoTunedPID.h:103
	// Declaration
	void DumpState() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnAutoTunedPID.cpp:241
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:242
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:243
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:244
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:245
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:246
		using namespace CgsDev::Message;

		// BrnAutoTunedPID.cpp:247
		using namespace CgsDev::Message;

	}

	// BrnAutoTunedPID.h:107
	void GetDebugData(AutoTunedPIDDebugData *);

	// BrnAutoTunedPID.h:112
	void SetEnableTuning(bool);

private:
	// BrnAutoTunedPID.h:117
	void CheckTuneCurrentCoefficient();

	// BrnAutoTunedPID.h:120
	void CheckSwapCoefficientToBeTuned();

}

