// BrnPIDController.h:43
enum EPIDCoefficient {
	E_COEFFICIENT_P = 0,
	E_COEFFICIENT_I = 1,
	E_COEFFICIENT_D = 2,
	E_COEFFICIENT_COUNT = 3,
}

// BrnPIDController.h:58
struct PIDController {
private:
	// BrnPIDController.h:113
	float32_t[10] mafError;

	// BrnPIDController.h:114
	float32_t[10] mafTimeStep;

	// BrnPIDController.h:116
	float32_t mfPCoefficient;

	// BrnPIDController.h:117
	float32_t mfICoefficient;

	// BrnPIDController.h:118
	float32_t mfDCoefficient;

	// BrnPIDController.h:119
	float32_t mfCurrentIntegral;

	// BrnPIDController.h:121
	int8_t mn8CurrentIndex;

	// BrnPIDController.h:122
	int8_t mn8PreviousIndex;

	// BrnPIDController.h:123
	int8_t mn8NumErrorsRecorded;

	// BrnPIDController.h:124
	int8_t mn8Pad;

public:
	// BrnPIDController.h:63
	void Prepare(const float32_t *);

	// BrnPIDController.h:66
	void Release();

	// BrnPIDController.h:71
	void SetCoefficient(EPIDCoefficient, float32_t);

	// BrnPIDController.h:75
	void SetCoefficients(const float32_t *);

	// BrnPIDController.h:79
	float32_t GetCoefficient(EPIDCoefficient);

	// BrnPIDController.h:83
	float32_t GetCoefficientTerm(EPIDCoefficient);

	// BrnPIDController.h:88
	void Record(float32_t, float32_t);

	// BrnPIDController.h:91
	void Clear();

	// BrnPIDController.h:94
	float32_t GetOutput();

	// BrnPIDController.h:97
	void DumpState();

	// BrnPIDController.h:100
	float32_t GetError();

private:
	// BrnPIDController.h:105
	float32_t GetErrorIntegral();

	// BrnPIDController.h:108
	float32_t GetErrorDerivative();

	// BrnPIDController.h:111
	float32_t CalculateIntegralDirectly();

}

// _built-in_
namespace :: {
	// BrnPIDController.h:37
	const int32_t KI_PIDCONTROLLER_NUM_SLOTS = 10;

}

// BrnPIDController.h:58
struct PIDController {
private:
	// BrnPIDController.h:113
	float32_t[10] mafError;

	// BrnPIDController.h:114
	float32_t[10] mafTimeStep;

	// BrnPIDController.h:116
	float32_t mfPCoefficient;

	// BrnPIDController.h:117
	float32_t mfICoefficient;

	// BrnPIDController.h:118
	float32_t mfDCoefficient;

	// BrnPIDController.h:119
	float32_t mfCurrentIntegral;

	// BrnPIDController.h:121
	int8_t mn8CurrentIndex;

	// BrnPIDController.h:122
	int8_t mn8PreviousIndex;

	// BrnPIDController.h:123
	int8_t mn8NumErrorsRecorded;

	// BrnPIDController.h:124
	int8_t mn8Pad;

public:
	// BrnPIDController.h:63
	void Prepare(const float32_t *);

	// BrnPIDController.h:66
	void Release();

	// BrnPIDController.h:71
	void SetCoefficient(EPIDCoefficient, float32_t);

	// BrnPIDController.h:75
	void SetCoefficients(const float32_t *);

	// BrnPIDController.h:79
	float32_t GetCoefficient(EPIDCoefficient);

	// BrnPIDController.h:83
	float32_t GetCoefficientTerm(EPIDCoefficient);

	// BrnPIDController.h:88
	void Record(float32_t, float32_t);

	// BrnPIDController.h:91
	void Clear();

	// BrnPIDController.h:94
	float32_t GetOutput();

	// BrnPIDController.h:97
	// Declaration
	void DumpState() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPIDController.cpp:407
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:408
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:412
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:415
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:416
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:417
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:418
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:419
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:420
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:421
		using namespace CgsDev::Message;

		// BrnPIDController.cpp:422
		using namespace CgsDev::Message;

	}

	// BrnPIDController.h:100
	float32_t GetError();

private:
	// BrnPIDController.h:105
	float32_t GetErrorIntegral();

	// BrnPIDController.h:108
	float32_t GetErrorDerivative();

	// BrnPIDController.h:111
	float32_t CalculateIntegralDirectly();

}

